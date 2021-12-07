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
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x10f31735, "rt2x00mac_tx_frames_pending" },
	{ 0x4f171d36, "rt2x00mac_get_ringparam" },
	{ 0x300612f5, "rt2x00mac_get_antenna" },
	{ 0x32713642, "rt2x00mac_set_antenna" },
	{ 0x4b866f63, "rt2x00mac_flush" },
	{ 0xdd80d5a8, "rt2x00mac_rfkill_poll" },
	{ 0x954b19f2, "rt2x00mac_conf_tx" },
	{ 0x818ae197, "rt2x00mac_get_stats" },
	{ 0xe9fc226c, "rt2x00mac_sw_scan_complete" },
	{ 0xed8c8d71, "rt2x00mac_sw_scan_start" },
	{ 0x341bc618, "rt2x00mac_set_key" },
	{ 0xd0ded5b0, "rt2x00mac_set_tim" },
	{ 0x81ee4b96, "rt2x00mac_configure_filter" },
	{ 0xc5446535, "rt2x00mac_bss_info_changed" },
	{ 0xc5cc5fa2, "rt2x00mac_config" },
	{ 0x974dc647, "rt2x00mac_remove_interface" },
	{ 0x821fb385, "rt2x00mac_add_interface" },
	{ 0xfbd593cf, "rt2x00mac_stop" },
	{ 0xe2f61445, "rt2x00mac_start" },
	{ 0x2362c5fd, "rt2x00mac_tx" },
	{ 0xeaf9559a, "rt2x00usb_flush_queue" },
	{ 0x3302aafe, "rt2x00usb_kick_queue" },
	{ 0x6b6a98b, "rt2x00usb_watchdog" },
	{ 0x822e9dbc, "rt2x00usb_clear_entry" },
	{ 0x578d349a, "rt2x00usb_uninitialize" },
	{ 0xecc1a38b, "rt2x00usb_initialize" },
	{ 0x2524b94e, "rt2x00usb_resume" },
	{ 0xe85ff0e5, "rt2x00usb_suspend" },
	{ 0x42331ee, "rt2x00usb_disconnect" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x7f3591a, "rt2x00lib_set_mac_address" },
	{ 0x27f4700d, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2bde907a, "rt2x00usb_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4cf37f83, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xc8f7b5c5, "rt2x00usb_vendor_request_buff" },
	{ 0xc6e1f26a, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00usb,compat");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D0162703F81EC7979CEA266");
