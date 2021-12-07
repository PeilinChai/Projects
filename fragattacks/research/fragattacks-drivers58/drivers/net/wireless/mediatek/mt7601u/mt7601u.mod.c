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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x46f42490, "single_open" },
	{ 0x96205878, "debugfs_create_u8" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xec31797d, "firmware_request_cache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x71f2118e, "single_release" },
	{ 0x6a87870a, "seq_puts" },
	{ 0x176b6a6d, "no_llseek" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x618177f5, "trace_event_buffer_reserve" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x17346341, "seq_read" },
	{ 0xadb0e296, "bpf_trace_run3" },
	{ 0x8bfa9411, "__alloc_pages_nodemask" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xf9b0624d, "ieee80211_tx_status" },
	{ 0x2afab799, "debugfs_create_u32" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xef7618e1, "bpf_trace_run9" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7a532a17, "trace_event_reg" },
	{ 0x963085cf, "usb_poison_urb" },
	{ 0x295f4fab, "seq_putc" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xe3d1510c, "simple_attr_release" },
	{ 0xd358444d, "skb_pull" },
	{ 0x406100ae, "usb_free_coherent" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xae52888b, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xdff8dd93, "devm_kmemdup" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x6a3d2654, "debugfs_attr_read" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x9a9014b6, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x28db09db, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x25d2630d, "usb_bulk_msg" },
	{ 0x63445814, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9a365015, "ieee80211_send_bar" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x925bdbfe, "ieee80211_get_tx_rates" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebb2c13a, "trace_event_buffer_commit" },
	{ 0x4defb929, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0xb8b54bf7, "event_triggers_call" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x1e1b7944, "bpf_trace_run2" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x3a6d1ede, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x924ce474, "trace_event_raw_init" },
	{ 0x44489ba, "ieee80211_tx_status_ext" },
	{ 0xdc880a39, "skb_add_rx_frag" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x47eb5092, "trace_raw_output_prep" },
	{ 0xa6257a2f, "complete" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x3d83acda, "usb_alloc_coherent" },
	{ 0x4319b67, "skb_put" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x1dc94f74, "debugfs_attr_write" },
	{ 0x362a70c9, "bpf_trace_run4" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xde31ab17, "simple_attr_open" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x223089b8, "__skb_pad" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,compat,cfg80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4E3B5E2821694DA97015CB5");
