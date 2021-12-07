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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdbb15182, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6b6c0025, "ieee80211_scan_completed" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2057ed89, "__ieee80211_get_radio_led_name" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7c021829, "__ieee80211_create_tpt_led_trigger" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x87653e5f, "ieee80211_chswitch_done" },
	{ 0xc8b05adf, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "9E1551EDC32656E495AB0D5");
