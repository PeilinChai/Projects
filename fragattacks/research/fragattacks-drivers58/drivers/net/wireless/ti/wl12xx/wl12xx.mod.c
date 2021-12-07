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
	{ 0x5b055cd, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x762d8044, "wlcore_set_key" },
	{ 0x7549f57a, "wl1271_acx_init_mem_config" },
	{ 0x6b5efa33, "generic_file_llseek" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0xc2e27a08, "wlcore_event_beacon_loss" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xfeaaa602, "wlcore_event_dummy_packet" },
	{ 0x9a4d67f4, "wlcore_event_inactive_sta" },
	{ 0x9b9763cf, "wlcore_event_ba_rx_constraint" },
	{ 0x761b3593, "wl1271_acx_pm_config" },
	{ 0x4d42972d, "wlcore_calc_packet_alignment" },
	{ 0x6bbeed06, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x228175c0, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x38dac9f3, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xea81153, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x9ca35270, "wl1271_acx_set_ht_capabilities" },
	{ 0x24a68f66, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe05e304, "wl1271_cmd_configure" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x8380e0bc, "wl1271_cmd_data_path" },
	{ 0xd5adb492, "wl12xx_acx_mem_cfg" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x50d7b164, "wlcore_event_sched_scan_completed" },
	{ 0x60d21fbb, "wlcore_boot_upload_firmware" },
	{ 0xd3ab58a5, "wl1271_acx_sleep_auth" },
	{ 0xc5850110, "printk" },
	{ 0x50f78fec, "wlcore_set_partition" },
	{ 0x414c133d, "wlcore_enable_interrupts" },
	{ 0xd5eb2d29, "wl1271_cmd_test" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x842c4d67, "simple_open" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x2c3fa6da, "wlcore_event_channel_switch" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xd35824cf, "wlcore_disable_interrupts" },
	{ 0x4706d067, "wlcore_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x447cd542, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xefce9b4f, "wlcore_scan_sched_scan_results" },
	{ 0xd7dde800, "wlcore_event_soft_gemini_sense" },
	{ 0x4b48ecc5, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc4ab4e, "wlcore_tx_complete" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e68c19f, "wl1271_debugfs_update_stats" },
	{ 0x3e308a6d, "wlcore_set_scan_chan_params" },
	{ 0x3c6f6110, "wlcore_boot_run_firmware" },
	{ 0xdb453c46, "wlcore_translate_addr" },
	{ 0xaa9079f6, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x7507f1f8, "wlcore_event_roc_complete" },
	{ 0x1cd6dfbd, "platform_driver_unregister" },
	{ 0x83bdda61, "wl1271_cmd_send" },
	{ 0x1c827c5e, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore,compat,mac80211");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "B416069EAD21B2CC6E61990");
