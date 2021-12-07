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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe09a23a6, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x160b81db, "iw_handler_set_thrspy" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1a2aa4ca, "wiphy_free" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x13a07433, "crypto_alloc_shash" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4b9ce961, "cfg80211_inform_bss_data" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0x24f9798d, "cfg80211_wext_siwscan" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x555f2028, "cfg80211_wext_giwretry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x2216eb34, "crypto_shash_final" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0xbef46c54, "_dev_notice" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x9c920052, "cfg80211_wext_siwmode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x7bb66ea5, "wireless_spy_update" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd6b0cf8b, "crypto_shash_update" },
	{ 0x331568ae, "iw_handler_get_spy" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x762d0500, "register_netdev" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xbd865fa1, "cfg80211_wext_giwfrag" },
	{ 0x90a0fcaf, "crypto_shash_setkey" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x70178b08, "ieee80211_get_channel_khz" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0x3be958e4, "cfg80211_wext_siwrts" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x66734229, "netif_device_detach" },
	{ 0xea29c6bf, "cfg80211_put_bss" },
	{ 0xa916b694, "strnlen" },
	{ 0x7787b8b5, "wiphy_register" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x51a18b45, "iw_handler_get_thrspy" },
	{ 0x848d372e, "iowrite8" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8abe8eea, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0x1ca6b869, "crypto_destroy_tfm" },
	{ 0x9728ffcc, "cfg80211_wext_giwrange" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa431e9b4, "cfg80211_wext_giwmode" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x92eb3a68, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0x3494ae3b, "cfg80211_wext_giwname" },
	{ 0x69acdf38, "memcpy" },
	{ 0x84cd50f6, "cfg80211_wext_giwscan" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xb49fe15a, "cfg80211_wext_giwrts" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x91d0b793, "cfg80211_wext_siwfrag" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4f87e2b1, "cfg80211_scan_done" },
	{ 0x4319b67, "skb_put" },
	{ 0x5dc34244, "eth_mac_addr" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xbfa13aaa, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211,compat");


MODULE_INFO(srcversion, "715E173792EFA2195193760");
