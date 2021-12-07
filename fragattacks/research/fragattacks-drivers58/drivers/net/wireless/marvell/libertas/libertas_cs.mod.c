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
	{ 0x2cb22b49, "pcmcia_enable_device" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9f96dd05, "pcmcia_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x85450c37, "lbs_stop_card" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x47be956f, "pcmcia_request_io" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xa3a75d20, "lbs_start_card" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xb19b445, "ioread8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4e57ada0, "lbs_queue_event" },
	{ 0xa432eb6a, "lbs_get_firmware_async" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7a3294e5, "pcmcia_loop_config" },
	{ 0x49a74d0f, "lbs_remove_card" },
	{ 0x4a401897, "lbs_process_rxed_packet" },
	{ 0x2bf62604, "lbs_host_to_card_done" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x848d372e, "iowrite8" },
	{ 0x79953ed1, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0d717c3, "netdev_err" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x46017f72, "pcmcia_unregister_driver" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xe2ca6af, "pcmcia_disable_device" },
	{ 0x4319b67, "skb_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb29ab858, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "pcmcia,compat,libertas");

MODULE_ALIAS("pcmcia:m02DBc8103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DBc6064f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DFc8103f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "4B9186A4D2547B25E09D92E");
