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
	{ 0xc3e9f5be, "wl12xx_cmd_build_probe_req" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x762d8044, "wlcore_set_key" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6b5efa33, "generic_file_llseek" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0xc2e27a08, "wlcore_event_beacon_loss" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x437e574e, "__pm_runtime_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfeaaa602, "wlcore_event_dummy_packet" },
	{ 0x9a4d67f4, "wlcore_event_inactive_sta" },
	{ 0x9b9763cf, "wlcore_event_ba_rx_constraint" },
	{ 0x3ad8d048, "ieee80211_radar_detected" },
	{ 0x9816f99a, "wlcore_event_fw_logger" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0x6bbeed06, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x228175c0, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x38dac9f3, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xea81153, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc2177cc7, "__pm_runtime_resume" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x24a68f66, "__platform_driver_register" },
	{ 0xe05e304, "wl1271_cmd_configure" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x49689033, "default_llseek" },
	{ 0x50d7b164, "wlcore_event_sched_scan_completed" },
	{ 0x60d21fbb, "wlcore_boot_upload_firmware" },
	{ 0xc5850110, "printk" },
	{ 0x50f78fec, "wlcore_set_partition" },
	{ 0x9166fada, "strncpy" },
	{ 0x414c133d, "wlcore_enable_interrupts" },
	{ 0x4ef96045, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4f1c6cf2, "irq_get_irq_data" },
	{ 0xd358444d, "skb_pull" },
	{ 0x842c4d67, "simple_open" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0xce2e80b2, "__cfg80211_send_event_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x2c3fa6da, "wlcore_event_channel_switch" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x410886e9, "__cfg80211_alloc_event_skb" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xd35824cf, "wlcore_disable_interrupts" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x4706d067, "wlcore_remove" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x447cd542, "wlcore_event_max_tx_failure" },
	{ 0xc7acdd7b, "wl1271_free_tx_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x90965deb, "ieee80211_stop_rx_ba_session" },
	{ 0xefce9b4f, "wlcore_scan_sched_scan_results" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4b48ecc5, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e68c19f, "wl1271_debugfs_update_stats" },
	{ 0x3e308a6d, "wlcore_set_scan_chan_params" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x3c6f6110, "wlcore_boot_run_firmware" },
	{ 0xdb453c46, "wlcore_translate_addr" },
	{ 0xaa9079f6, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7507f1f8, "wlcore_event_roc_complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1853c27, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1cd6dfbd, "platform_driver_unregister" },
	{ 0x83bdda61, "wl1271_cmd_send" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3e152c12, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore,compat,mac80211,cfg80211");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "15325079258A26C032D74D4");
