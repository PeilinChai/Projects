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
	{ 0xeea2f722, "__pm_runtime_idle" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb5c37333, "sdio_writesb" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x317f5f1a, "mmc_hw_reset" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc2177cc7, "__pm_runtime_resume" },
	{ 0xb80b9f5, "sdio_get_host_pm_caps" },
	{ 0xc5850110, "printk" },
	{ 0xcaffcc10, "platform_device_unregister" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x25720659, "sdio_f0_writeb" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0xdfb14baf, "sdio_memcpy_toio" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7677bdc5, "sdio_memcpy_fromio" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe0e5f468, "sdio_release_host" },
};

MODULE_INFO(depends, "compat");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "7DE48122058958D6254C474");
