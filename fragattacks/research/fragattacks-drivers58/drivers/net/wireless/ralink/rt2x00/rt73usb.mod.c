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
	{ 0xd819a524, "crc_itu_t_table" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x27f4700d, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x223089b8, "__skb_pad" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xd358444d, "skb_pull" },
	{ 0x2bde907a, "rt2x00usb_vendor_request" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cf37f83, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x72a5c875, "rt2x00usb_regbusy_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x954b19f2, "rt2x00mac_conf_tx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xc8f7b5c5, "rt2x00usb_vendor_request_buff" },
	{ 0xc6e1f26a, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00usb,compat,crc-itu-t");

MODULE_ALIAS("usb:v07B8pB21Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1723d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1724d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631pC019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0137d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v178Dp02BEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1472p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p4600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2671d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0812p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6238d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p4471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p90ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p31F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6933p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7167p3840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3415d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6C2E65CC97BE190AF1DAC6F");
