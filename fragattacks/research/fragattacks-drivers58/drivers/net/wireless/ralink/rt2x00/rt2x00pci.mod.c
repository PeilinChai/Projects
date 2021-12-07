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
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe09a23a6, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0xd532c10d, "rt2x00lib_resume" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0xdc9643db, "pci_read_config_word" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xe56c30dc, "pci_set_mwi" },
	{ 0xff6e2c5f, "rt2x00lib_remove_dev" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x360405cc, "pci_ioremap_bar" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0xed5dac8, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x6293f934, "pci_choose_state" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xb1cf73ca, "rt2x00lib_probe_dev" },
	{ 0x64717660, "rt2x00lib_suspend" },
	{ 0x64756ab8, "pci_save_state" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "6739BC40137C396DE6FA26F");
