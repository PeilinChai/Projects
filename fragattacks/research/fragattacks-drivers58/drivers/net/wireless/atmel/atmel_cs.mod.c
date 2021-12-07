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
	{ 0xc416fdd4, "pcmcia_dev_present" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x485ab233, "init_atmel_card" },
	{ 0x2cb22b49, "pcmcia_enable_device" },
	{ 0x7a3294e5, "pcmcia_loop_config" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0xe2ca6af, "pcmcia_disable_device" },
	{ 0xcd537d5d, "stop_atmel_card" },
	{ 0x66734229, "netif_device_detach" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0x2d2d0c97, "atmel_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,compat,atmel");

MODULE_ALIAS("pcmcia:m0101c0620f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0696f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc3302f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0007f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9EB2DA1FpbC9A0D3F9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb41B37E1Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb3675D704pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb4172E792pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb917F3D72pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb5040670Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pbE15ED87Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAE49B86Apb1E957CD5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBC477DDEpb502FAE6Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5B878724pb122F1DF6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5B878724pb5FBA533Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFEA54C90pb1C5B0F68pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb30F38774pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb172D1377pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA407ECDDpb119F6314pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa575C516CpbB1F6DBC4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB474D43Apb6B1FEC94pc*pd*");

MODULE_INFO(srcversion, "70BFF4A3A5A264D6178C952");
