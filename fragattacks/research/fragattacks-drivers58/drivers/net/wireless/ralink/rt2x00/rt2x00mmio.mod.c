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
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x17a8c712, "rt2x00lib_dmastart" },
	{ 0xc5850110, "printk" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x4f08198d, "rt2x00queue_get_entry" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1f7aebda, "rt2x00lib_rxdone" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedabb7cf, "rt2x00lib_dmadone" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "rt2x00lib");


MODULE_INFO(srcversion, "5B5FDEE66B4703465EC436D");
