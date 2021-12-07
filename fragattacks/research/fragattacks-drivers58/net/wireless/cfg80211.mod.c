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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x416deb53, "get_net_ns_by_fd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2fd274c6, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6b5efa33, "generic_file_llseek" },
	{ 0xd3c9ec75, "genl_register_family" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x74f6c5fb, "bpf_trace_run7" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xea124bd1, "gcd" },
	{ 0x267b7b44, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x76c804e, "dev_change_net_namespace" },
	{ 0x3357be99, "sock_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0x618177f5, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x5974ac39, "platform_device_register_full" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd03f9099, "debugfs_rename" },
	{ 0xa047138a, "get_net_ns_by_pid" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbe86623, "__put_net" },
	{ 0xadb0e296, "bpf_trace_run3" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x48333475, "bpf_trace_run10" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x71e3ddcf, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7d6966b, "netif_rx_ni" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0x49689033, "default_llseek" },
	{ 0xa2162e2e, "device_del" },
	{ 0xb696074c, "bpf_trace_run1" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4199cbb6, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbb8dfb27, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6dd133ee, "class_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xcd279169, "nla_find" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x7a532a17, "trace_event_reg" },
	{ 0x4ef96045, "nla_put" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa50c2039, "dev_close" },
	{ 0xab00f62e, "bpf_trace_run5" },
	{ 0x2b7ea92a, "dev_get_by_index" },
	{ 0xee14cabb, "netlink_unicast" },
	{ 0xcaffcc10, "platform_device_unregister" },
	{ 0x77152260, "init_uts_ns" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0xc7a5943d, "sysfs_remove_link" },
	{ 0x7df48512, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd358444d, "skb_pull" },
	{ 0x842c4d67, "simple_open" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x5c505aed, "init_net" },
	{ 0x3356bba1, "__class_register" },
	{ 0xae52888b, "perf_trace_run_bpf_submit" },
	{ 0xd5014daa, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x584ab118, "kobject_uevent_env" },
	{ 0x9d9e6e55, "key_put" },
	{ 0x1a39abd, "inet_csk_get_port" },
	{ 0xc781bd9f, "rfkill_resume_polling" },
	{ 0x22df0b83, "sysfs_create_link" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xf122067f, "net_ns_type_operations" },
	{ 0x9b69ba20, "netlink_broadcast" },
	{ 0x28db09db, "trace_event_ignore_this_pid" },
	{ 0x95da34ff, "put_device" },
	{ 0xfe1d2e94, "key_create_or_update" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1e8fac8e, "wireless_nlevent_flush" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xebb2c13a, "trace_event_buffer_commit" },
	{ 0xc4f9c4ab, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0d717c3, "netdev_err" },
	{ 0x640ccc77, "keyring_alloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb8b54bf7, "event_triggers_call" },
	{ 0x2f7bf69, "genlmsg_multicast_allns" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1e1b7944, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x924ce474, "trace_event_raw_init" },
	{ 0x56e8b775, "genlmsg_put" },
	{ 0xdc880a39, "skb_add_rx_frag" },
	{ 0x77c0a555, "device_initialize" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63b304e8, "bpf_trace_run6" },
	{ 0x66d29e23, "nla_put_64bit" },
	{ 0x47eb5092, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb67baae2, "nla_reserve" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0xa2e853a6, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x4319b67, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x6cf8ef42, "skb_copy_bits" },
	{ 0x362a70c9, "bpf_trace_run4" },
	{ 0x26a93eb2, "verify_pkcs7_signature" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe6903af9, "__sock_create" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "compat");


MODULE_INFO(srcversion, "6D7C3046978A80405C82017");
