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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ddde7f0, "cw1200_irq_handler" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0x6ace5cfa, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5b947637, "cw1200_core_release" },
	{ 0x5aecf762, "cw1200_can_suspend" },
	{ 0xc5850110, "printk" },
	{ 0x63af60c0, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x25720659, "sdio_f0_writeb" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xa5584a62, "sdio_align_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xdfb14baf, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdf66e56, "gpiod_set_raw_value" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7677bdc5, "sdio_memcpy_fromio" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x8805ee04, "cw1200_core_probe" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe0e5f468, "sdio_release_host" },
};

MODULE_INFO(depends, "cw1200_core,compat");


MODULE_INFO(srcversion, "FAA925E54C778CC436B9E55");
