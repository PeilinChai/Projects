#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe09a23a6, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc313d886, "__mt76_poll" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xf88b3bf8, "mt76x02_mac_set_beacon" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf278a83e, "mt76u_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5d9ea06a, "mt76_tx_complete_skb" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x7ee50615, "mt76x02_mac_write_txwi" },
	{ 0x42c2f270, "mt76x02_init_beacon_config" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3e2abbf7, "mt76u_skb_dma_info" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x827f8b75, "mt76_csa_finish" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x25d2630d, "usb_bulk_msg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x58ed7ecb, "mt76x02_mac_reset_counters" },
	{ 0x61e0df31, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xc878fb3c, "mt76_tx_status_skb_add" },
	{ 0xd79c7542, "mt76_csa_check" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x57189ec1, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xac84008e, "mt76x02_resync_beacon_timer" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4319b67, "skb_put" },
	{ 0xb7013999, "mt76x02_remove_hdr_pad" },
	{ 0x9f59c85a, "mt76x02_enqueue_buffered_bc" },
	{ 0xebd9b17c, "ieee80211_iterate_interfaces" },
	{ 0x45a8f23e, "mt76x02_update_beacon_iter" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,mt76-usb,cfg80211,mac80211");


MODULE_INFO(srcversion, "34F5B5260EFC6267195E331");
