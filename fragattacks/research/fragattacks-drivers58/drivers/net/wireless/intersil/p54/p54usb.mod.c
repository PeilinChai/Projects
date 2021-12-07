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
	{ 0x46adf060, "usb_deregister" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0xfb2a0e16, "usb_get_intf" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0xe6c5b80f, "usb_lock_device_for_reset" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa68cbd05, "p54_init_common" },
	{ 0xef76f4ce, "usb_interrupt_msg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x25d2630d, "usb_bulk_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7fcc61ef, "p54_register_common" },
	{ 0xab20db40, "p54_read_eeprom" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x951a0f0f, "usb_put_intf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5fb77ca, "usb_driver_release_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xa6257a2f, "complete" },
	{ 0x988eef17, "p54_parse_firmware" },
	{ 0xd358444d, "skb_pull" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x9ebc030, "p54_rx" },
	{ 0x4319b67, "skb_put" },
	{ 0xf6187122, "skb_unlink" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf5b54361, "usb_ifnum_to_if" },
	{ 0xbcbb46d, "p54_free_skb" },
	{ 0xb275c843, "usb_unanchor_urb" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xebc69c2e, "usb_anchor_urb" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0x9057bfd4, "p54_free_common" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xae6d2fbb, "p54_unregister_common" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x683864c8, "ieee80211_restart_hw" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "compat,p54common,mac80211");

MODULE_ALIAS("usb:v0411p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp55F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp096Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A9p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p4310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4531d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1260pEE22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1413p5400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp5513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8104d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CA2A0763C7B7F4F38B7A268");
