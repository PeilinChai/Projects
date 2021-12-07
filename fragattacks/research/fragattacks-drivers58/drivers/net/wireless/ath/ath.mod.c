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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xca59fbbf, "freq_reg_info" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xc5850110, "printk" },
	{ 0xe8d803d8, "wiphy_apply_custom_regulatory" },
	{ 0x70178b08, "ieee80211_get_channel_khz" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xdba126c1, "reg_initiator_name" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "7B79B71196D7F4C1B5A8258");
