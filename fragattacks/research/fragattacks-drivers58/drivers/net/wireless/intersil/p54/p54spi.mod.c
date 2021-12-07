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
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd21730d6, "driver_unregister" },
	{ 0xe907b4a7, "__spi_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xa6257a2f, "complete" },
	{ 0xbcbb46d, "p54_free_skb" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9ebc030, "p54_rx" },
	{ 0x4319b67, "skb_put" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdf66e56, "gpiod_set_raw_value" },
	{ 0x7fcc61ef, "p54_register_common" },
	{ 0x791cc532, "p54_parse_eeprom" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xc46e2af5, "request_firmware_direct" },
	{ 0x988eef17, "p54_parse_firmware" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6c66e039, "gpiod_direction_input" },
	{ 0x63af60c0, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1e44234f, "spi_setup" },
	{ 0xa68cbd05, "p54_init_common" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x754a7f08, "spi_sync" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9057bfd4, "p54_free_common" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x52a013b6, "gpiod_to_irq" },
	{ 0x6ace5cfa, "gpio_to_desc" },
	{ 0xae6d2fbb, "p54_unregister_common" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "compat,p54common,mac80211");


MODULE_INFO(srcversion, "93ED6CA8C93148274FBB299");
