cmd_/home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/modules.order := {   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/admtek/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ath/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/atmel/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/broadcom/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/cisco/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intel/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/intersil/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/marvell/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/mediatek/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ralink/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/realtek/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/rsi/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/st/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ti/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/zydas/modules.order;   cat /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/quantenna/modules.order;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/mac80211_hwsim.ko; :; } | awk '!x[$$0]++' - > /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/modules.order