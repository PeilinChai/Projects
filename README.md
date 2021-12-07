# Exploring the Frag attacks over Wi-Fi 
This project is using Mathy Vanhoef's fragattack tool to explore the fragattacks.
## Installing the fragattack tool for vulnerability test

### Download the prerequisites:

```
sudo apt-get update
sudo apt-get install libnl-3-dev libnl-genl-3-dev libnl-route-3-dev libssl-dev \
	libdbus-1-dev git pkg-config build-essential macchanger net-tools python3-venv \
	aircrack-ng rfkill
sudo apt-get install firmware-ath9k-htc
```
### Clone the Repository and configure python environment:

git clone https://github.com/vanhoefm/fragattacks.git fragattacks
```
cd fragattacks/research
./build.sh
./pysetup.sh
```

### Install the patched drivers:

```
sudo apt-get install bison flex linux-headers-$(uname -r)
git clone https://github.com/vanhoefm/fragattacks-drivers58.git fragattacks-drivers58
cd fragattacks-drivers58
make defconfig-wifi
make -j 4
sudo make install
```

### Install the patched firmware and Reboot:

```
cd research/ath9k-firmware/
./install.sh
```
--------------------------------------------------------------------------

## Installing the WireShark:

For Windows you can download the software from there webpage https://www.wireshark.org/#download and install it
Some Packets in 802.11 might not be captured using Windows such as the EAPOL packets or LLC. \n
For Ubuntu you can download it from Ubuntu Software and run the folowing commands:

```
sudo dpkg-reconfigure wireshark-common
```

select yes

```
sudo usermod -a -G wireshark {your username}
````

This will add the user to the wireshark group, which will allow the sufficient permission for packet capture.

---------------------------------------------------------------------------

## Using the tool:

```
cd research
sudo su
source venv/bin/activate
./droptraffic.sh
```

Make sure you disable Wi-Fi from network manager and you can run the test code

```
./fragattack.py [NetworkCardName]--ap $COMMAND 
```

To check the network card name you can use the ifconfig command, then look for the command in the Git Page that you want to run like ping I,E,E for example
this will create a Wi-Fi network with the name "testnetwork" and passwork "abcdefgh"
You can change the ssid and password by going into the client.conf in research folder.

Before connecting with the target device, you can open the Wireshark on it and try to see the packet traffic during the test. 

----------------

## How to debug the fragattack on the vscode?

As we need to check some details in the code when it’s running, debugging is a problem.  We tried to use gdb or igdb, but it’s hard to use. Then we try the vscode but a launch.json should be set to debug the code. 
An example json file can be seen here:

<img src="launch json.png" />

There are two parts that should be considered. The first one is to use “sudo” True because the code needs the right of root. The second one is to put the command behind .py file into the “args”.
Also, an environment of python for “venv” should be set on the bottom left of the sublime. 

