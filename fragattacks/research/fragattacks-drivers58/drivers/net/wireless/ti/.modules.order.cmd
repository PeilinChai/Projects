cmd_/home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ti/modules.order := {   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ti/wlcore/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ti/wl12xx/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ti/wl1251/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ti/wl18xx/modules.order; :; } | awk '!x[$$0]++' - > /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ti/modules.order