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
	{ 0xa24f23d8, "__request_module" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1a2aa4ca, "wiphy_free" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa84d3109, "lib80211_crypt_delayed_deinit" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0x38569ac5, "lib80211_crypt_info_free" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x7bb66ea5, "wireless_spy_update" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0xdc798f36, "lib80211_get_crypto_ops" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x929914b9, "lib80211_crypt_info_init" },
	{ 0x8abe8eea, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x4319b67, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x24896b3b, "try_module_get" },
	{ 0xbfa13aaa, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211,compat,lib80211");


MODULE_INFO(srcversion, "521D072D9789FCFE9A18A95");
