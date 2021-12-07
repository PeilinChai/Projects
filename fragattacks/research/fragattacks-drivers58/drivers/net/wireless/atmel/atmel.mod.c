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
	{ 0x85bd1608, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x754d539c, "strlen" },
	{ 0xecffa84f, "proc_create_single_data" },
	{ 0x6a87870a, "seq_puts" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x1aea760b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x762d0500, "register_netdev" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x35683729, "dev_alloc_name" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x4319b67, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbfa13aaa, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "8EC2FF56014BC20FB027777");
