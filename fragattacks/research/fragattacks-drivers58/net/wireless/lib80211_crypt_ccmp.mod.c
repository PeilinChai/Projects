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
	{ 0x609da763, "crypto_aead_encrypt" },
	{ 0x4319b67, "skb_put" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xd358444d, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xa9f77ca, "crypto_aead_decrypt" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x994805f4, "crypto_aead_setkey" },
	{ 0x4cf56d10, "crypto_aead_setauthsize" },
	{ 0x7eb4b0fb, "crypto_alloc_aead" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ca6b869, "crypto_destroy_tfm" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211,compat");


MODULE_INFO(srcversion, "753E2D07B24DD48D9EDF534");
