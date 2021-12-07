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
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcb2f554e, "rtl_dm_diginit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xaed840da, "_rtl_dbg_trace" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x6486659d, "rtl_fw_page_write" },
	{ 0x7999421d, "_rtl_dbg_print_data" },
	{ 0x6cd2520f, "rtl_cmd_send_packet" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea93aeb8, "rtl_fw_block_write" },
	{ 0x4319b67, "skb_put" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "29E0DD7EBE367A2307FB43D");
