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
	{ 0x7fcc61ef, "p54_register_common" },
	{ 0xab20db40, "p54_read_eeprom" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd3f34109, "device_release_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x988eef17, "p54_parse_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcc57d0bb, "dma_sync_single_for_device" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x9ebc030, "p54_rx" },
	{ 0x4319b67, "skb_put" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xa0bfc76d, "pci_dev_put" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xde80cd09, "ioremap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa68cbd05, "p54_init_common" },
	{ 0xdbb15182, "pci_write_config_byte" },
	{ 0xfc5c1ad6, "pci_try_set_mwi" },
	{ 0x84e78855, "pci_set_master" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x298ff350, "pci_dev_get" },
	{ 0xa6257a2f, "complete" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbcbb46d, "p54_free_skb" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x9057bfd4, "p54_free_common" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xae6d2fbb, "p54_unregister_common" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0x8a27e6da, "pci_reenable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "compat,p54common");

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d0000FFFFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "66A3D5D550AB4AFB16B5E5B");
