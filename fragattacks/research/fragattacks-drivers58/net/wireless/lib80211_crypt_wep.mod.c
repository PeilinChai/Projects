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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x705235a8, "lib80211_unregister_crypto_ops" },
	{ 0x7e4eed3b, "lib80211_register_crypto_ops" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x4319b67, "skb_put" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xd358444d, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211,compat,libarc4");


MODULE_INFO(srcversion, "8B81D22FB9E4D0C18F89E6E");
