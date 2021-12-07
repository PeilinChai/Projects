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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x51c7e555, "skb_to_sgvec" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0x870b66df, "usb_init_urb" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x618177f5, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8b1cc924, "mt76_rx_poll_complete" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e364af2, "__page_frag_cache_drain" },
	{ 0xadb0e296, "bpf_trace_run3" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xef727bac, "usb_unpoison_urb" },
	{ 0x7a532a17, "trace_event_reg" },
	{ 0x963085cf, "usb_poison_urb" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xae52888b, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x19c389ba, "build_skb" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x28db09db, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x67ea350a, "mt76_txq_schedule" },
	{ 0xebb2c13a, "trace_event_buffer_commit" },
	{ 0xba25809, "mt76_tx_status_check" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb8b54bf7, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1e1b7944, "bpf_trace_run2" },
	{ 0xcc8c7af2, "mt76_has_tx_pending" },
	{ 0x69acdf38, "memcpy" },
	{ 0x924ce474, "trace_event_raw_init" },
	{ 0xdc880a39, "skb_add_rx_frag" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x47eb5092, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x4319b67, "skb_put" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x223089b8, "__skb_pad" },
};

MODULE_INFO(depends, "mt76,mac80211");


MODULE_INFO(srcversion, "836DFCC3EC0CA5561B9BEED");
