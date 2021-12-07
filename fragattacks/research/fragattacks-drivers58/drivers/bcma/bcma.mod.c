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
	{ 0x1d0fbf54, "bus_register" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf86da38e, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8e1c081c, "driver_register" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x211e0b79, "pcie_set_readrq" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x5974ac39, "platform_device_register_full" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3c4602ec, "gpiochip_remove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4c7bff18, "gpiochip_add_data_with_key" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xb19b445, "ioread8" },
	{ 0xad54b7c0, "device_register" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd21730d6, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcaffcc10, "platform_device_unregister" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xaccfd136, "bus_unregister" },
	{ 0xfe703588, "gpiochip_get_data" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfbab1bb1, "ioread8_rep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x95da34ff, "put_device" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8992ee09, "get_device" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x4e592646, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0xa2e853a6, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "compat");

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000105Bsd0000E092bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000103Csd0000804Abc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7803AE5ED25311A519B4172");
