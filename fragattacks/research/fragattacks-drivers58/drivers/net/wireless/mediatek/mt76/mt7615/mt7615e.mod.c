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
	{ 0x9a046e09, "mt7615_init_device" },
	{ 0x7e2deacb, "pci_free_irq_vectors" },
	{ 0xe4120f60, "mt7615_check_offload_capability" },
	{ 0xdedc3978, "mt76_dma_attach" },
	{ 0xeef50345, "mt7615_mac_set_rates" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xa7c00bc1, "pcim_enable_device" },
	{ 0xc313d886, "__mt76_poll" },
	{ 0xbcd896a8, "mt7615_mcu_exit" },
	{ 0x3953677a, "napi_disable" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x38e2a1c2, "napi_schedule_prep" },
	{ 0xf12d5ea, "mt7615_init_debugfs" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0xe4cf3f0, "pcim_iomap_table" },
	{ 0xefea091f, "mt7615_unregister_ext_phy" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0xd2d238bc, "mt7615_update_channel" },
	{ 0x410af8de, "mt76_put_txwi" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x62c1267c, "mt7615_driver_own" },
	{ 0x23877ce, "mt7615_mac_write_txwi" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0xf6520ec2, "pci_enable_wake" },
	{ 0xe45628cb, "__SCT__tp_func_dev_irq" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5290d519, "__tracepoint_dev_irq" },
	{ 0x72a5c69c, "mt7615_queue_rx_skb" },
	{ 0x5d9ea06a, "mt76_tx_complete_skb" },
	{ 0x72681d2c, "mt7615_mcu_set_hif_suspend" },
	{ 0x57c4d49, "mt7615_rates" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x52eb06da, "pci_alloc_irq_vectors_affinity" },
	{ 0xf53a9b26, "mt7615_ops" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x9ebf9219, "mt76_set_irq_mask" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0x10839b17, "mt76_unregister_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x837216a, "mt7615_mac_sta_poll" },
	{ 0x3187cdda, "mt76_mmio_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xbdcc4287, "__mt76_poll_msec" },
	{ 0x37e305d7, "mt7615_dma_reset" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x85163b75, "__SCK__tp_func_dev_irq" },
	{ 0x61be1251, "mt7615_txp_skb_unmap" },
	{ 0x990c16dc, "netif_napi_add" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x7b6c8b45, "mt76_register_device" },
	{ 0x110574ee, "mt7615_firmware_own" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xcd1e69a4, "mt7615_mcu_set_eeprom" },
	{ 0xdff8dd93, "devm_kmemdup" },
	{ 0x39d9f5d5, "pcim_iomap_regions" },
	{ 0x21cca85e, "mt7615_mac_sta_remove" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x755ef9a6, "mt7615_wait_for_mcu_init" },
	{ 0x17a9b3ba, "mt76_free_device" },
	{ 0x3b55c1b4, "mt7615_mac_init" },
	{ 0x296c5f77, "mt7615_mcu_init" },
	{ 0x8b53c154, "mt76_pci_disable_aspm" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x20f8a4e3, "__napi_schedule" },
	{ 0x1ce450c9, "devm_free_irq" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x56558320, "mt7615_phy_init" },
	{ 0x92c5808b, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4202b938, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x769d3e9b, "mt7615_init_txpower" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xa31e7682, "mt76_dma_cleanup" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x6eb89e3e, "mt7615_mac_sta_add" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0x6523321c, "mt7615_mcu_del_wtbl_all" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xc878fb3c, "mt76_tx_status_skb_add" },
	{ 0x7dd2936e, "mt7615_eeprom_init" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x6293f934, "pci_choose_state" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x8cfb9a0a, "devm_request_threaded_irq" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0x4b19274d, "mt7615_sta_ps" },
};

MODULE_INFO(depends, "mt7615-common,mt76,compat,mac80211");

MODULE_ALIAS("pci:v000014C3d00007615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007611sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FAEB43DF4ECA439E51308A2");
