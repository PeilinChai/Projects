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
	{ 0xf9a482f9, "msleep" },
	{ 0x2ec510d2, "cfg80211_unlink_bss" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x46f42490, "single_open" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x71f2118e, "single_release" },
	{ 0x6a87870a, "seq_puts" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4271d902, "ieee80211_resume_disconnect" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xca59fbbf, "freq_reg_info" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x20f11f78, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x17346341, "seq_read" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf6187122, "skb_unlink" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0xac32c109, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x327d76eb, "ieee80211_rate_control_register" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe8d803d8, "wiphy_apply_custom_regulatory" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x842c4d67, "simple_open" },
	{ 0xd2c18aed, "wiphy_rfkill_stop_polling" },
	{ 0x917cec4c, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xea29c6bf, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x5fe8fec2, "ieee80211_rate_control_unregister" },
	{ 0x3a6d1ede, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbf0d8387, "ieee80211_start_tx_ba_session" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4319b67, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3e152c12, "ieee80211_connection_loss" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdced333d, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "mac80211,cfg80211,compat");


MODULE_INFO(srcversion, "BAEF6844FE2251BAFA3C1B3");
