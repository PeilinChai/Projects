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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x46017f72, "pcmcia_unregister_driver" },
	{ 0x9f96dd05, "pcmcia_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x47be956f, "pcmcia_request_io" },
	{ 0x9ae2d029, "init_airo_card" },
	{ 0x2cb22b49, "pcmcia_enable_device" },
	{ 0x7a3294e5, "pcmcia_loop_config" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc232e15d, "stop_airo_card" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0xe2ca6af, "pcmcia_disable_device" },
	{ 0x66734229, "netif_device_detach" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0xe4c6d0a7, "reset_airo_card" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,compat,airo");

MODULE_ALIAS("pcmcia:m015Fc000Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m015Fc0007f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0007f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "7E525A2DA2CB89F3EA7D18F");
