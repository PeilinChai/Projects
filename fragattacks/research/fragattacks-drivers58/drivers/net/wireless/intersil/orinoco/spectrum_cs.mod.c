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
	{ 0x46017f72, "pcmcia_unregister_driver" },
	{ 0x9f96dd05, "pcmcia_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x47be956f, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0x7ff3d52c, "orinoco_if_add" },
	{ 0x7844075f, "orinoco_init" },
	{ 0x2cb22b49, "pcmcia_enable_device" },
	{ 0xdbd4b45f, "pcmcia_request_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0x20b542b4, "hermes_struct_init" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x7a3294e5, "pcmcia_loop_config" },
	{ 0x974858ca, "alloc_orinocodev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x16a16e54, "pcmcia_write_config_byte" },
	{ 0x22d980dc, "pcmcia_read_config_byte" },
	{ 0xc416fdd4, "pcmcia_dev_present" },
	{ 0x6a6bf7fd, "free_orinocodev" },
	{ 0xb171be2a, "orinoco_if_del" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xe2ca6af, "pcmcia_disable_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2915783f, "orinoco_down" },
	{ 0x184b4856, "orinoco_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,compat,orinoco");

MODULE_ALIAS("pcmcia:m026Cc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb6FBF459Apc*pd*");

MODULE_INFO(srcversion, "6FF430C36ECE14928BC69A1");
