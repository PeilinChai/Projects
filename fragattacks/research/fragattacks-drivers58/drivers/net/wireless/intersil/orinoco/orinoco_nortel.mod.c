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
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x7ff3d52c, "orinoco_if_add" },
	{ 0x7844075f, "orinoco_init" },
	{ 0x20b542b4, "hermes_struct_init" },
	{ 0x974858ca, "alloc_orinocodev" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0x6a6bf7fd, "free_orinocodev" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0xb171be2a, "orinoco_if_del" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2915783f, "orinoco_down" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0xc5850110, "printk" },
	{ 0x184b4856, "orinoco_up" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "compat,orinoco,cfg80211");

MODULE_ALIAS("pci:v0000126Cd00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001562d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E047AD1F4538FAB33C1DF91");
