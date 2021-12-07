# Projects
## Installing the fragattack tool for vulnerability test

### Download the prerequisites:

sudo apt-get update
sudo apt-get install libnl-3-dev libnl-genl-3-dev libnl-route-3-dev libssl-dev \
	libdbus-1-dev git pkg-config build-essential macchanger net-tools python3-venv \
	aircrack-ng rfkill
sudo apt-get install firmware-ath9k-htc

### Clone the Repository and configure python environment:

git clone https://github.com/vanhoefm/fragattacks.git fragattacks
cd fragattacks/research
./build.sh
./pysetup.sh

### Install the patched drivers:

sudo apt-get install bison flex linux-headers-$(uname -r)
git clone https://github.com/vanhoefm/fragattacks-drivers58.git fragattacks-drivers58
cd fragattacks-drivers58
make defconfig-wifi
make -j 4
sudo make install

### Install the patched firmware and Reboot:

cd research/ath9k-firmware/
./install.sh

--------------------------------------------------------------------------

## Installing the WireShark:

### For Windows you can download the software from there webpage https://www.wireshark.org/#download and install it
### Some Packets in 802.11 might not be captured using Windows such as the EAPOL packets or LLC
### For Ubuntu you can download it from Ubuntu Software and run the folowing commands:

sudo dpkg-reconfigure wireshark-common

### select yes

sudo usermod -a -G wireshark {your username}

### this will add the user to the wireshark group, which will allow the sufficient permission for packet capture.

---------------------------------------------------------------------------

## Using the tool:

cd research
sudo su
source venv/bin/activate
./droptraffic.sh

### Make sure you disable Wi-Fi from network manager and you can run the test code

./fragattack.py [NetworkCardName]--ap $COMMAND 

### to check the network card name you can use the ifconfig command, then look for the command in the Git Page that you want to run like ping I,E,E for example

### this will create a Wi-Fi network with the name "testnetwork" and passwork "abcdefgh"
### You can change the ssid and password by going into the client.conf in research folder.

### Before connecting with the target device, you can open the Wireshark on it and try to see the packet traffic during the test. 

----------------

## How to debug the fragattack on the vscode?

As we need to check some details in the code when it’s running, debugging is a problem.  We tried to use gdb or igdb, but it’s hard to use. Then we try the vscode but a launch.json should be set to debug the code. 
An example json file can be seen in the attachments

There are two parts that should be considered. The first one is to use “sudo” because the code needs the right of root. The second one is to put the command behind .py file into the “args”.
Also, an environment of python for “venv” should be set on the bottom left of the sublime. 

The tool is based on the scapy, a program that enables user users to send, sniff, analyze and forge network packets.
It also does well in sending invalid frames, injecting your own 802.11 frames, which is the foundation of the fragattacks. You could find the use of scapy in wifi.py.
There are also some other tools needed. For example, Crypto is needed to encrypt the payload ready to be sent.
L2Socket is needed to send the encrypted payload and to send some formats of different types of request, such as ICMP, ARP, UDP, DHCP and so on.
Also, lots of functions and classes inherits from others in the code. It needs a lot of time to analyze and understand what’s going on when attack happens.  

Here are some important files and classes we want to introduce here.

The main processing of the task is based on 3 files, fragattack.py, fraginternals.py and wifi.py in the libwifi folder.
Fragattack,py is a main python file to get and translate the args it gets. 
First of all, fragattack.py shows how to understand the command of attacks. There are three parts in the command: test name, trigger and action. 
For test name, there are some keyword functions, such as “ping”, “eapol-inject”, “amsdu-inject” and so on. All those functions are linked to attacks.py, test_common.py and test-injection.py. 

For the trigger, the character:
“S” means the injection happens when the authentication of Wi-Fi starts. 
“B” means the injection happens before the authentication
“A” means the injection happens after the authentication
“C” means the attack happens when the victim has already connected the Wi-Fi, which is the normal way for lots of the injection. 

As for the action:
“I” means getting the IP
“F” means rekey
“R” means reconnect
“P” means not encrypting the fragments
“E” means encrypting the fragments
“D” means do nothing (MetaDrop)

For most of the time, the action is “I,E,E” means getting two fragments when getting the IP address. Meanwhile, almost all types of test payload are ICMP.
As for fraginternals.py, there are four basic class, Action, Test, Station and Daemon, and two inherited class, Authenticator and Supplicant based on Daemon, though our test is based only on Authenticator.
Class Action just digitize the actions mentioned above.
Class Test is the root of test attack’s function. It has some functions about checking the list or the status of actions and injections, preparing and generating the messages ready to be sent, or get some delays between two actions.
Class Station is to make or create the different parts of the messages.
The header, data, keys, ip address and encryption are all set here. It’s the place to see the details of different parts of the message. Class Daemon, or Class Authenticater, consists of the processes needed to be run. 
There is also an independent function in fraginternals.py, generate_request. It’s the place not only to generate the payload, but also to inject malicious code.
All the information in the payload will be the data sent to check the vulnerability.
For example, if we changes the label, ”test_ping_icmp”, to another statement, “Hello_word”, when the ptype is REQ_ICMP, we will get “Hello world” in the reply of ICMP when attack succeeds.

Fraginternals.py creates basic classes to deal with the different situations of attacks.

Wifi.py is to construct the different parts of the messages it ready to sends.
Wifi.py just contains some extra but important functions, such as how to get mac address, how to get IP address, how to make a DHCP socket, ARP socket, or Monitor Socket, how to create fragments, how to get ssid or bss, and so on.

 
