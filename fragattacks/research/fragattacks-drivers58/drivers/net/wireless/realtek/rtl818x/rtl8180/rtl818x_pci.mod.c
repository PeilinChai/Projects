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
	{ 0xb0bf5e90, "ieee80211_rts_duration" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xb19b445, "ioread8" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x98dc35a8, "ieee80211_generic_frame_duration" },
	{ 0xfc5c1ad6, "pci_try_set_mwi" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0x742df793, "ieee80211_ctstoself_duration" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6293f934, "pci_choose_state" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4319b67, "skb_put" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0x860a06f1, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,eeprom_93cx6,compat,cfg80211");

MODULE_ALIAS("pci:v000010ECd00008199sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008185sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d0000700Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d0000701Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d00006020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00003300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00003301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007106sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DFC74455C94033738CE6891");
