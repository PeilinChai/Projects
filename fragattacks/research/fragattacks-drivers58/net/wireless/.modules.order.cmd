cmd_/home/balkan/fragattacks/research/fragattacks-drivers58/net/wireless/modules.order := {   echo /home/balkan/fragattacks/research/fragattacks-drivers58/net/wireless/cfg80211.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/net/wireless/lib80211.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/net/wireless/lib80211_crypt_wep.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/net/wireless/lib80211_crypt_ccmp.ko;   echo /home/balkan/fragattacks/research/fragattacks-drivers58/net/wireless/lib80211_crypt_tkip.ko; :; } | awk '!x[$$0]++' - > /home/balkan/fragattacks/research/fragattacks-drivers58/net/wireless/modules.order
