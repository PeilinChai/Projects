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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0xb233684f, "regulator_disable" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x1db267a5, "wl1251_free_hw" },
	{ 0x6ace5cfa, "gpio_to_desc" },
	{ 0xe907b4a7, "__spi_register_driver" },
	{ 0x1e44234f, "spi_setup" },
	{ 0xc5850110, "printk" },
	{ 0xd21730d6, "driver_unregister" },
	{ 0xcee77bc7, "devm_gpio_request_one" },
	{ 0x754a7f08, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x66a1a5d0, "devm_regulator_get" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xcd2d0f37, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdf66e56, "gpiod_set_raw_value" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x34539446, "wl1251_alloc_hw" },
	{ 0x8cfb9a0a, "devm_request_threaded_irq" },
	{ 0xf24e16f, "regulator_enable" },
};

MODULE_INFO(depends, "compat,mac80211,crc7,wl1251");


MODULE_INFO(srcversion, "632E0963575CF2F056B4CC4");
