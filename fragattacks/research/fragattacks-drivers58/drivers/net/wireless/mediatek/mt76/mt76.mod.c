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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8ed32ba8, "ieee80211_rx_napi" },
	{ 0x7e64bc39, "ieee80211_csa_finish" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x8c8da09d, "init_dummy_netdev" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x96205878, "debugfs_create_u8" },
	{ 0xa9af351f, "ieee80211_sta_ps_transition" },
	{ 0x754d539c, "strlen" },
	{ 0x2f3b84a1, "ieee80211_csa_is_complete" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6a87870a, "seq_puts" },
	{ 0x176b6a6d, "no_llseek" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9b948757, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x24c9c6dc, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x618177f5, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e364af2, "__page_frag_cache_drain" },
	{ 0xadb0e296, "bpf_trace_run3" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xf9b0624d, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2afab799, "debugfs_create_u32" },
	{ 0xfb578fc5, "memset" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0xe5ada799, "ieee80211_tx_dequeue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0x6734fd14, "ieee80211_sta_pspoll" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7a532a17, "trace_event_reg" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa2669770, "ieee80211_next_txq" },
	{ 0xd8d87ad7, "ieee80211_find_sta_by_ifaddr" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x990c16dc, "netif_napi_add" },
	{ 0xdb641391, "ieee80211_calc_rx_airtime" },
	{ 0xe3d1510c, "simple_attr_release" },
	{ 0x4103551c, "debugfs_create_file_unsafe" },
	{ 0xae52888b, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xdff8dd93, "devm_kmemdup" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x6a3d2654, "debugfs_attr_read" },
	{ 0x19c389ba, "build_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x1e7f8d0a, "pci_disable_link_state" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x28db09db, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x602c1640, "debugfs_create_devm_seqfile" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe9513d1d, "ieee80211_sta_uapsd_trigger" },
	{ 0x8d306e0, "ieee80211_sta_set_buffered" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x183dcd3b, "ieee80211_get_key_rx_seq" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x9a365015, "ieee80211_send_bar" },
	{ 0x925bdbfe, "ieee80211_get_tx_rates" },
	{ 0x92c5808b, "napi_complete_done" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebb2c13a, "trace_event_buffer_commit" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x4bccf599, "__netif_napi_del" },
	{ 0xb8b54bf7, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xda3ff692, "ieee80211_sta_eosp" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7c021829, "__ieee80211_create_tpt_led_trigger" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x69acdf38, "memcpy" },
	{ 0x924ce474, "trace_event_raw_init" },
	{ 0x4558ef56, "debugfs_create_blob" },
	{ 0xdc880a39, "skb_add_rx_frag" },
	{ 0xcc57d0bb, "dma_sync_single_for_device" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xea8171d3, "ieee80211_txq_schedule_start" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x47eb5092, "trace_raw_output_prep" },
	{ 0x7dafc718, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4319b67, "skb_put" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x1dc94f74, "debugfs_attr_write" },
	{ 0xa86e41fe, "__ieee80211_schedule_txq" },
	{ 0xde31ab17, "simple_attr_open" },
	{ 0xc8b05adf, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x22f373d3, "ieee80211_sta_register_airtime" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "EA1EB979B78C664D1029C59");
