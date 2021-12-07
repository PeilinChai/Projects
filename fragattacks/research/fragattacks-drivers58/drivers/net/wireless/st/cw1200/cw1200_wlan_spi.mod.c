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
	{ 0xf9a482f9, "msleep" },
	{ 0x3ddde7f0, "cw1200_irq_handler" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x6ace5cfa, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe907b4a7, "__spi_register_driver" },
	{ 0x1e44234f, "spi_setup" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5b947637, "cw1200_core_release" },
	{ 0x5aecf762, "cw1200_can_suspend" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xd21730d6, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x63af60c0, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x754a7f08, "spi_sync" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfe990052, "gpio_free" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xbdf66e56, "gpiod_set_raw_value" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x8805ee04, "cw1200_core_probe" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "cw1200_core,compat");


MODULE_INFO(srcversion, "622501ACF5B95CFC6A411B6");
