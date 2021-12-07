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
	{ 0x8ed32ba8, "ieee80211_rx_napi" },
	{ 0x5bbd8a41, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe9602a40, "ssb_dma_translation" },
	{ 0xdc44cf1a, "device_remove_file" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaba81d54, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0x2468d3b1, "bcma_host_pci_down" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0x3f2897b9, "ieee80211_rts_get" },
	{ 0x12eaf20d, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a258a84, "ssb_commit_settings" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7357ee7d, "ssb_bus_powerup" },
	{ 0x89c8c92a, "bcma_host_pci_up" },
	{ 0xc0268435, "ssb_bus_sdiobus_register" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x20f11f78, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x20277c3c, "__ieee80211_get_assoc_led_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xed3abd15, "__ssb_driver_register" },
	{ 0xe50202b9, "param_ops_string" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xf9b0624d, "ieee80211_tx_status" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0x32f27da5, "ssb_driver_unregister" },
	{ 0x2e5c9b44, "ssb_chipco_gpio_control" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0xc6e613d9, "bcma_core_dma_translation" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x1a618d09, "ssb_device_enable" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb8c349e, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9ccb5b8, "__bcma_driver_register" },
	{ 0xd358444d, "skb_pull" },
	{ 0xc2e9134, "ieee80211_ctstoself_get" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x36336934, "device_create_file" },
	{ 0x43b16d94, "bcma_host_pci_irq_ctl" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2e4161eb, "bcma_chipco_gpio_control" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb39a9d7b, "__ieee80211_get_rx_led_name" },
	{ 0xe8e7333e, "bcma_core_is_enabled" },
	{ 0xa8017058, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7304b3e9, "ssb_device_disable" },
	{ 0xbafec05c, "bcma_core_enable" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x7c8b643c, "bcma_driver_unregister" },
	{ 0xf17ab2e7, "bcma_core_pll_ctl" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0x617b026c, "hwrng_register" },
	{ 0xd85d630e, "__ieee80211_get_tx_led_name" },
	{ 0x2507b1be, "ssb_set_devtypedata" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x98dc35a8, "ieee80211_generic_frame_duration" },
	{ 0x2057ed89, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x43080da7, "ssb_bus_unregister" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc57d0bb, "dma_sync_single_for_device" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x3c72fe7e, "ssb_bus_may_powerdown" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0xfb3c36b1, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0xef810c79, "ssb_pmu_set_ldo_paref" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0x4319b67, "skb_put" },
	{ 0xd12a19e7, "ssb_device_is_enabled" },
	{ 0xe916f3c2, "bcma_core_disable" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x56785e69, "ssb_pmu_spuravoid_pllupdate" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x63f5308, "ieee80211_get_tkip_p1k_iv" },
	{ 0x28446f90, "ieee80211_get_response_rate" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe0e5f468, "sdio_release_host" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,compat,cfg80211,cordic");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "08A073A927D536B142A035D");
