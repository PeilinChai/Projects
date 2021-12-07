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
	{ 0xb0bf5e90, "ieee80211_rts_duration" },
	{ 0x8ed32ba8, "ieee80211_rx_napi" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe01fbfaa, "pci_release_region" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xf7b8a4c4, "pci_read_config_byte" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0xc29f346d, "pci_match_id" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x305c38eb, "ath_key_delete" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xc1aa531, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xdbb15182, "pci_write_config_byte" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x24c9c6dc, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x795fe8c3, "sysfs_remove_group" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xf9b0624d, "ieee80211_tx_status" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0x51ca4507, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x1471f36d, "ath_is_mybeacon" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc017037b, "ath_reg_notifier_apply" },
	{ 0x917cec4c, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x1e7f8d0a, "pci_disable_link_state" },
	{ 0x925a1b37, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xb39a9d7b, "__ieee80211_get_rx_led_name" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe7f8867a, "ath_hw_cycle_counters_update" },
	{ 0x925bdbfe, "ieee80211_get_tx_rates" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8fabfdaf, "ieee80211_get_buffered_bc" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xd85d630e, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x108b188f, "ath_is_49ghz_allowed" },
	{ 0x97542e14, "ath_hw_setbssidmask" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x98dc35a8, "ieee80211_generic_frame_duration" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x742df793, "ieee80211_ctstoself_duration" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3254d2a2, "regulatory_hint" },
	{ 0x86af8115, "ath_rxbuf_alloc" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0xd84160c7, "ath_key_config" },
	{ 0xda6de90f, "ath_opmode_to_string" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4319b67, "skb_put" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x6d149a6, "ath_hw_keyreset" },
	{ 0x4855b66e, "pci_request_region" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,compat,ath,cfg80211");

MODULE_ALIAS("pci:v0000168Cd00000207sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5F15D817CBB556AEA06D50F");
