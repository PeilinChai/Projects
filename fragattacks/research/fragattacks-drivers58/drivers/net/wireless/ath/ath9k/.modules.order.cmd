cmd_/home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ath/ath9k/modules.order := {   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ath/ath9k/ath9k.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ath/ath9k/ath9k_hw.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ath/ath9k/ath9k_common.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ath/ath9k/ath9k_htc.ko; :; } | awk '!x[$$0]++' - > /home/balkan/fragattacks/research/fragattacks-drivers58/drivers/net/wireless/ath/ath9k/modules.order