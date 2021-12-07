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
	{ 0x5bbd8a41, "skb_queue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xf6187122, "skb_unlink" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x5dce0e38, "skb_dequeue_tail" },
	{ 0xfb578fc5, "memset" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4319b67, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC2E407EFC82EF84B7BB4B2");
