cmd_/home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ralink/modules.order := {   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ralink/rt2x00/modules.order; :; } | awk '!x[$$0]++' - > /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ralink/modules.order