cmd_/home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intersil/p54/modules.order := {   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intersil/p54/p54common.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intersil/p54/p54usb.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intersil/p54/p54pci.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intersil/p54/p54spi.ko; :; } | awk '!x[$$0]++' - > /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intersil/p54/modules.order