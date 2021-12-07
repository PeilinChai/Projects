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
	{ 0xf9a482f9, "msleep" },
	{ 0x1c44b7a3, "rt2x00lib_get_bssidx" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x954b19f2, "rt2x00mac_conf_tx" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x29b26fa0, "rt2x00lib_txdone" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4f08198d, "rt2x00queue_get_entry" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3044eb0c, "rt2x00lib_txdone_nomatch" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x683864c8, "ieee80211_restart_hw" },
	{ 0x524dd84c, "rt2x00lib_txdone_noinfo" },
	{ 0x7f3591a, "rt2x00lib_set_mac_address" },
	{ 0x223089b8, "__skb_pad" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "4619B91662B40E13BA6C3B2");
