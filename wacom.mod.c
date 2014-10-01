#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xca05c877, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2f7c36b3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x1c8c9783, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x4a24e355, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x674edc2c, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5dca6911, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9f5d950e, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x8a662e1b, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x73e5c252, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0xd74145df, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x1abae9b6, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33e7e3bc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf73546d1, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb2711b8f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa799c6b4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x732848c9, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x52b0e311, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x99b63877, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd40211b1, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x28c2d8cc, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x4af510de, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x25563496, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x332e91d4, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xd3bd0b34, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xd37bada7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcacac902, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x97c539a4, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x5907da33, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7768e72, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xc1ef39a3, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x61dc5785, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x976b8cbb, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v056Ap0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap006Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap006Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap002Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00CEd*dc*dsc*dp*ic03isc01ip02in*");
MODULE_ALIAS("usb:v056Ap0084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00CCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap009Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00ECd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp6004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "870282203C0C472F796ED22");
