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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x400f949, "ath_printk" },
	{ 0xff132aa9, "ath9k_hw_gettsf64" },
	{ 0x49689033, "default_llseek" },
	{ 0xd358444d, "skb_pull" },
	{ 0x842c4d67, "simple_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x6d149a6, "ath_hw_keyreset" },
	{ 0x99503a51, "ath9k_hw_set_txpowerlimit" },
};

MODULE_INFO(depends, "compat,cfg80211,ath,ath9k_hw");


MODULE_INFO(srcversion, "50FA11D30C50EE6F6965AC0");
