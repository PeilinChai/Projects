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
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaba81d54, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x46f42490, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2468d3b1, "bcma_host_pci_down" },
	{ 0xfcc2e3e2, "bcma_chipco_pll_write" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xdbe3863e, "_dev_crit" },
	{ 0x71f2118e, "single_release" },
	{ 0x2e2359fe, "brcmu_pkt_buf_get_skb" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ace5cfa, "gpio_to_desc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x89c8c92a, "bcma_host_pci_up" },
	{ 0xca59fbbf, "freq_reg_info" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x20f11f78, "wiphy_rfkill_start_polling" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x17346341, "seq_read" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xf6187122, "skb_unlink" },
	{ 0xc2eaa468, "bcma_chipco_pll_maskset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0xcc777df, "bcma_chipco_regctl_maskset" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xe8d803d8, "wiphy_apply_custom_regulatory" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xeb8c349e, "bcma_core_set_clockmode" },
	{ 0x63af60c0, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9ccb5b8, "__bcma_driver_register" },
	{ 0xd358444d, "skb_pull" },
	{ 0xd2c18aed, "wiphy_rfkill_stop_polling" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x76c1737b, "ieee80211_proberesp_get" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x917cec4c, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x43b16d94, "bcma_host_pci_irq_ctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x2e4161eb, "bcma_chipco_gpio_control" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xe8e7333e, "bcma_core_is_enabled" },
	{ 0xbafec05c, "bcma_core_enable" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x7c8b643c, "bcma_driver_unregister" },
	{ 0x3db8cdd3, "bcma_chipco_gpio_out" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2057ed89, "__ieee80211_get_radio_led_name" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x683864c8, "ieee80211_restart_hw" },
	{ 0xfe990052, "gpio_free" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x3a6d1ede, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3254d2a2, "regulatory_hint" },
	{ 0x16be9eb9, "bcma_chipco_gpio_outen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdf66e56, "gpiod_set_raw_value" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf3af8e, "brcmu_pkt_buf_free_skb" },
	{ 0x9270c02a, "bcma_chipco_chipctl_maskset" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0xea941038, "bcma_chipco_get_alp_clock" },
	{ 0x641a2f7, "bcma_core_pci_power_save" },
	{ 0xe916f3c2, "bcma_core_disable" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x860a06f1, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,bcma,compat,brcmutil,cfg80211,cordic");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");

MODULE_INFO(srcversion, "7C1E20BB903DDF6B9835D98");