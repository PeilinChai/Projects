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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2846d0e8, "ath10k_ce_completed_recv_next_nolock" },
	{ 0x83929dee, "ath10k_htt_txrx_compl_task" },
	{ 0xaf5dfeb9, "ath10k_core_unregister" },
	{ 0xf86da38e, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8448ed4c, "ath10k_htt_t2h_msg_handler" },
	{ 0xe01fbfaa, "pci_release_region" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x3953677a, "napi_disable" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x38e2a1c2, "napi_schedule_prep" },
	{ 0x1c9b44cb, "ath10k_info" },
	{ 0xe6050897, "ath10k_coredump_new" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x32be84c, "ath10k_core_register" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x664f48ae, "ath10k_ce_init_pipe" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7d4fdbc9, "ath10k_ce_deinit_pipe" },
	{ 0xb9dd7500, "ath10k_htc_rx_completion_handler" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa474fb3a, "ath10k_core_destroy" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x4722b80b, "ath10k_htt_rx_pktlog_completion_handler" },
	{ 0x3de4cdb6, "__ath10k_ce_rx_num_free_bufs" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1da019b, "ath10k_core_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd0df3acf, "ath10k_ce_rx_post_buf" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xfcc1ded6, "ath10k_ce_enable_interrupts" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd10c5dda, "ath10k_ce_per_engine_service_any" },
	{ 0xefb458b1, "ath10k_ce_dump_registers" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x529aaad8, "ath10k_ce_completed_send_next" },
	{ 0x990c16dc, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x3ed84477, "ath10k_htc_tx_completion_handler" },
	{ 0xe9ff5ba3, "pci_enable_msi" },
	{ 0x42b138a6, "ath10k_ce_completed_recv_next" },
	{ 0xf4b316e6, "pci_clear_master" },
	{ 0x76018566, "ath10k_ce_revoke_recv_next" },
	{ 0xc5dcba43, "ath10k_ce_free_pipe" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6d6a820a, "__ath10k_ce_send_revert" },
	{ 0x532bc632, "ath10k_htt_hif_tx_complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x32c8ea97, "ath10k_ce_rx_update_write_idx" },
	{ 0x20f8a4e3, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xa9e87f63, "ath10k_ce_num_free_src_entries" },
	{ 0xa1cd9d41, "ath10k_print_driver_info" },
	{ 0x1000e51, "schedule" },
	{ 0xa567947d, "ath10k_err" },
	{ 0x92c5808b, "napi_complete_done" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0x675d6322, "ath10k_coredump_get_mem_layout" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96397ce, "ath10k_ce_send" },
	{ 0x4bccf599, "__netif_napi_del" },
	{ 0x9040c64a, "ath10k_ce_cancel_send_next" },
	{ 0xe0392a11, "ath10k_ce_per_engine_service" },
	{ 0x70ac4b72, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x287d868b, "pci_disable_msi" },
	{ 0xcc57d0bb, "dma_sync_single_for_device" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdad21c57, "ath10k_ce_alloc_pipe" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf99a70a2, "ath10k_ce_send_nolock" },
	{ 0x4319b67, "skb_put" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x82824194, "param_ops_uint" },
	{ 0x2927a3d7, "pcie_capability_write_word" },
	{ 0x4855b66e, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc8b05adf, "pcie_capability_read_word" },
	{ 0x9c47688f, "ath10k_ce_disable_interrupts" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ath10k_core,compat");

MODULE_ALIAS("pci:v00000777d000011ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9E903E8D1D0F38BA82A9973");
