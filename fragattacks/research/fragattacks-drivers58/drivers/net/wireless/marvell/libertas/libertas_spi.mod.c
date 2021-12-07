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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd3a2f59f, "lbs_resume" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe907b4a7, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x85450c37, "lbs_stop_card" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xa3a75d20, "lbs_start_card" },
	{ 0xfb578fc5, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd21730d6, "driver_unregister" },
	{ 0x4e57ada0, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3368b8b7, "lbs_suspend" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x754a7f08, "spi_sync" },
	{ 0x49a74d0f, "lbs_remove_card" },
	{ 0x4a401897, "lbs_process_rxed_packet" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x2bf62604, "lbs_host_to_card_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79953ed1, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0d717c3, "netdev_err" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x794f2eff, "lbs_get_firmware" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4319b67, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb29ab858, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "compat,libertas");


MODULE_INFO(srcversion, "EEB00C1D3C2EC83D5BC3098");
