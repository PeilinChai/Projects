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
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd358444d, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8fabfdaf, "ieee80211_get_buffered_bc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "mac80211,compat");


MODULE_INFO(srcversion, "91811C5461FD54BD3E3BC30");
