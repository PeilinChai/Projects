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
	{ 0xe1d6f31e, "sdio_writeb" },
	{ 0x4ebfb135, "sdio_readb" },
	{ 0x1d0fbf54, "bus_register" },
	{ 0xdc44cf1a, "device_remove_file" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf86da38e, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e1c081c, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2cb22b49, "pcmcia_enable_device" },
	{ 0xcb0b539, "pcmcia_loop_tuple" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x9bd32a18, "pci_write_config_word" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9f96dd05, "pcmcia_register_driver" },
	{ 0x22d980dc, "pcmcia_read_config_byte" },
	{ 0xb5c37333, "sdio_writesb" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd35ef47, "_dev_emerg" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x7f885dc, "sdio_writel" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xb19b445, "ioread8" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0xad54b7c0, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x16a16e54, "pcmcia_write_config_byte" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd21730d6, "driver_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3591df8e, "sdio_readl" },
	{ 0xdc9643db, "pci_read_config_word" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa6adba03, "pcmcia_request_window" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xaccfd136, "bus_unregister" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x36336934, "device_create_file" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfbab1bb1, "ioread8_rep" },
	{ 0x95da34ff, "put_device" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8992ee09, "get_device" },
	{ 0xab8bf29f, "sdio_writew" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0x1c771f86, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0xd285c89e, "pci_prepare_to_sleep" },
	{ 0x46017f72, "pcmcia_unregister_driver" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x3d54f819, "pci_back_from_sleep" },
	{ 0x4e592646, "device_unregister" },
	{ 0x68f47fbe, "sdio_readw" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0xa2e853a6, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe2ca6af, "pcmcia_disable_device" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xdced333d, "device_set_wakeup_enable" },
	{ 0xe0e5f468, "sdio_release_host" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "pcmcia,compat");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pcmcia:m02D0c0448f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D0c0476f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "2B3D8D6CA81DC7701F0B701");
