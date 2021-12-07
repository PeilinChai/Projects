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
	{ 0x37a0cba, "kfree" },
	{ 0x13a07433, "crypto_alloc_shash" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x4319b67, "skb_put" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x1ca6b869, "crypto_destroy_tfm" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xd358444d, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5850110, "printk" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x2216eb34, "crypto_shash_final" },
	{ 0xd6b0cf8b, "crypto_shash_update" },
	{ 0xfb578fc5, "memset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x90a0fcaf, "crypto_shash_setkey" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211,compat,libarc4");


MODULE_INFO(srcversion, "0B23B77FD501C5A7DBA6672");
