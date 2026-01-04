#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf55d731a, "mt7902_rx_check" },
	{ 0xb874270a, "mt7902_mac_sta_add" },
	{ 0x1286868e, "devm_request_threaded_irq" },
	{ 0x0437d8c5, "mt7902_mt792x_poll_rx" },
	{ 0xdf7c976e, "mt7902_mt76_unregister_device" },
	{ 0xf3ad5137, "__mt7902_mt792xe_mcu_drv_pmctrl" },
	{ 0x9ec53670, "mt7902_mt792x_wpdma_reset" },
	{ 0x2dcbfad2, "pci_alloc_irq_vectors" },
	{ 0xfaaa4cf5, "mt7902_ops" },
	{ 0x3056f350, "mt7902_txwi_free" },
	{ 0x6237bf3f, "mt7902_mt792x_irq_tasklet" },
	{ 0x37f3136a, "__mt7902_mt76_poll" },
	{ 0x437c10f1, "__pci_register_driver" },
	{ 0xe4c0056a, "mt7902_mt792x_update_channel" },
	{ 0xeceab7dc, "mt7902_mac_write_txwi" },
	{ 0xe551acda, "mt7902_mt76_connac_free_pending_tx_skbs" },
	{ 0x7c5a2f7a, "netif_napi_add_weight_locked" },
	{ 0x16ab4215, "__wake_up" },
	{ 0x29b65cf0, "mt7902_mt76_token_consume" },
	{ 0x228b1f9c, "kthread_park" },
	{ 0x508e4783, "mt7902_mt76_connac_init_tx_queues" },
	{ 0x29969570, "pci_unregister_driver" },
	{ 0x0437d8c5, "mt7902_mt792x_poll_tx" },
	{ 0xd272d446, "__fentry__" },
	{ 0x2763f366, "wake_up_process" },
	{ 0xf6ea6894, "skb_queue_purge_reason" },
	{ 0x28d12c28, "mt7902_mt792x_rx_poll_complete" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x970f7608, "mt7902_mac_sta_remove" },
	{ 0x381047c8, "mt7902_mt76_connac_mcu_set_hif_suspend" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x7c4be906, "mt7902_mcu_parse_response" },
	{ 0x07da8e26, "devm_free_irq" },
	{ 0x1b50b34a, "__napi_schedule" },
	{ 0x38c8be28, "idr_get_next" },
	{ 0x336fcc0c, "mt7902_mt792x_wpdma_reinit_cond" },
	{ 0x15debdc6, "_dev_info" },
	{ 0xd7f7aed0, "mt7902_register_device" },
	{ 0x66511f0f, "mt7902_mt76_set_irq_mask" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x0f4d1aee, "kthread_unpark" },
	{ 0xcaf2db53, "mt7902_mt76_dma_attach" },
	{ 0x69dea2cd, "mt7902_mt76_tx_status_skb_add" },
	{ 0x9c0551c6, "tasklet_kill" },
	{ 0x8e3336dd, "synchronize_irq" },
	{ 0xe029d7e1, "mt7902_mcu_set_deep_sleep" },
	{ 0x240d5ab4, "pcim_iomap_regions" },
	{ 0xf3ad5137, "mt7902_mt792x_mcu_drv_pmctrl" },
	{ 0x3a905e11, "devm_kmemdup" },
	{ 0x15debdc6, "_dev_err" },
	{ 0x673aaea8, "mt7902_mt792x_get_mac80211_ops" },
	{ 0xcdec1689, "tasklet_init" },
	{ 0x2869db78, "mt7902_run_firmware" },
	{ 0xb5ffafc5, "mt7902_mt76_connac_write_hw_txp" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0xf3ad5137, "mt7902_mt792x_mcu_fw_pmctrl" },
	{ 0xb6e95afd, "mt7902_mt792x_reset" },
	{ 0xf3ad5137, "mt7902_mt792xe_mcu_drv_pmctrl" },
	{ 0xd768e109, "pci_read_config_word" },
	{ 0x1b50b34a, "napi_enable" },
	{ 0x336fcc0c, "mt7902_mt792x_wfsys_reset" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x044595a6, "mt7902_mt76_alloc_device" },
	{ 0x255dfd5a, "idr_destroy" },
	{ 0x85865ed5, "mt7902_mt76_connac_tx_complete_skb" },
	{ 0x2869db78, "mt7902_mcu_set_eeprom" },
	{ 0x9ec53670, "mt7902_mt792x_dma_disable" },
	{ 0xf36c79f1, "pci_set_master" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x60e17b8d, "mt7902_mt792x_dma_cleanup" },
	{ 0x058c185a, "jiffies" },
	{ 0xf3ad5137, "mt7902_mt792xe_mcu_fw_pmctrl" },
	{ 0x970f7608, "mt7902_mac_sta_assoc" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0xdb7481c7, "mt7902_queue_rx_skb" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x879131f2, "param_ops_bool" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0xd7f7aed0, "mt7902_mac_init" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x336fcc0c, "mt7902_mt792x_dma_enable" },
	{ 0x2e180e02, "mt7902_mt76_init_queue" },
	{ 0xef1e2a91, "mt7902_mt76_mmio_init" },
	{ 0x62f4fc1c, "dma_set_mask" },
	{ 0xc18da0b2, "mt7902_mcu_fill_message" },
	{ 0xadb0a701, "pcim_iomap_table" },
	{ 0x3cab843c, "mt7902_mt76_txq_schedule_all" },
	{ 0x27a5be05, "napi_schedule_prep" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x6fb07b8f, "mt7902_mt76_pci_disable_aspm" },
	{ 0x1b50b34a, "napi_disable" },
	{ 0xb2868c29, "pcim_enable_device" },
	{ 0x9c0551c6, "tasklet_unlock_wait" },
	{ 0xeb1741e6, "pci_write_config_word" },
	{ 0x55eab75f, "pci_free_irq_vectors" },
	{ 0xdf7c976e, "mt7902_mt76_free_device" },
	{ 0x9a424296, "mt7902_mt792x_irq_handler" },
	{ 0x3a5632bf, "__mt7902_start" },
	{ 0x2d88a3ab, "flush_work" },
	{ 0x984622ae, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xf55d731a,
	0xb874270a,
	0x1286868e,
	0x0437d8c5,
	0xdf7c976e,
	0xf3ad5137,
	0x9ec53670,
	0x2dcbfad2,
	0xfaaa4cf5,
	0x3056f350,
	0x6237bf3f,
	0x37f3136a,
	0x437c10f1,
	0xe4c0056a,
	0xeceab7dc,
	0xe551acda,
	0x7c5a2f7a,
	0x16ab4215,
	0x29b65cf0,
	0x228b1f9c,
	0x508e4783,
	0x29969570,
	0x0437d8c5,
	0xd272d446,
	0x2763f366,
	0xf6ea6894,
	0x28d12c28,
	0x5a844b26,
	0xbd03ed67,
	0x970f7608,
	0x381047c8,
	0xd272d446,
	0xde338d9a,
	0x7c4be906,
	0x07da8e26,
	0x1b50b34a,
	0x38c8be28,
	0x336fcc0c,
	0x15debdc6,
	0xd7f7aed0,
	0x66511f0f,
	0x90a48d82,
	0x0f4d1aee,
	0xcaf2db53,
	0x69dea2cd,
	0x9c0551c6,
	0x8e3336dd,
	0xe029d7e1,
	0x240d5ab4,
	0xf3ad5137,
	0x3a905e11,
	0x15debdc6,
	0x673aaea8,
	0xcdec1689,
	0x2869db78,
	0xb5ffafc5,
	0xf46d5bf3,
	0xf3ad5137,
	0xb6e95afd,
	0xf3ad5137,
	0xd768e109,
	0x1b50b34a,
	0x336fcc0c,
	0x9c0551c6,
	0xfcc2e8f3,
	0x044595a6,
	0x255dfd5a,
	0x85865ed5,
	0x2869db78,
	0x9ec53670,
	0xf36c79f1,
	0xd272d446,
	0x60e17b8d,
	0x058c185a,
	0xf3ad5137,
	0x970f7608,
	0x7ec472ba,
	0xdb7481c7,
	0xf46d5bf3,
	0x85acaba2,
	0x879131f2,
	0x5a844b26,
	0x2d88a3ab,
	0xd7f7aed0,
	0xde338d9a,
	0x336fcc0c,
	0x2e180e02,
	0xef1e2a91,
	0x62f4fc1c,
	0xc18da0b2,
	0xadb0a701,
	0x3cab843c,
	0x27a5be05,
	0xe4de56b4,
	0x6fb07b8f,
	0x1b50b34a,
	0xb2868c29,
	0x9c0551c6,
	0xeb1741e6,
	0x55eab75f,
	0xdf7c976e,
	0x9a424296,
	0x3a5632bf,
	0x2d88a3ab,
	0x984622ae,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"mt7902_rx_check\0"
	"mt7902_mac_sta_add\0"
	"devm_request_threaded_irq\0"
	"mt7902_mt792x_poll_rx\0"
	"mt7902_mt76_unregister_device\0"
	"__mt7902_mt792xe_mcu_drv_pmctrl\0"
	"mt7902_mt792x_wpdma_reset\0"
	"pci_alloc_irq_vectors\0"
	"mt7902_ops\0"
	"mt7902_txwi_free\0"
	"mt7902_mt792x_irq_tasklet\0"
	"__mt7902_mt76_poll\0"
	"__pci_register_driver\0"
	"mt7902_mt792x_update_channel\0"
	"mt7902_mac_write_txwi\0"
	"mt7902_mt76_connac_free_pending_tx_skbs\0"
	"netif_napi_add_weight_locked\0"
	"__wake_up\0"
	"mt7902_mt76_token_consume\0"
	"kthread_park\0"
	"mt7902_mt76_connac_init_tx_queues\0"
	"pci_unregister_driver\0"
	"mt7902_mt792x_poll_tx\0"
	"__fentry__\0"
	"wake_up_process\0"
	"skb_queue_purge_reason\0"
	"mt7902_mt792x_rx_poll_complete\0"
	"__x86_indirect_thunk_rax\0"
	"__ref_stack_chk_guard\0"
	"mt7902_mac_sta_remove\0"
	"mt7902_mt76_connac_mcu_set_hif_suspend\0"
	"__stack_chk_fail\0"
	"_raw_spin_unlock_bh\0"
	"mt7902_mcu_parse_response\0"
	"devm_free_irq\0"
	"__napi_schedule\0"
	"idr_get_next\0"
	"mt7902_mt792x_wpdma_reinit_cond\0"
	"_dev_info\0"
	"mt7902_register_device\0"
	"mt7902_mt76_set_irq_mask\0"
	"__ubsan_handle_out_of_bounds\0"
	"kthread_unpark\0"
	"mt7902_mt76_dma_attach\0"
	"mt7902_mt76_tx_status_skb_add\0"
	"tasklet_kill\0"
	"synchronize_irq\0"
	"mt7902_mcu_set_deep_sleep\0"
	"pcim_iomap_regions\0"
	"mt7902_mt792x_mcu_drv_pmctrl\0"
	"devm_kmemdup\0"
	"_dev_err\0"
	"mt7902_mt792x_get_mac80211_ops\0"
	"tasklet_init\0"
	"mt7902_run_firmware\0"
	"mt7902_mt76_connac_write_hw_txp\0"
	"mutex_lock\0"
	"mt7902_mt792x_mcu_fw_pmctrl\0"
	"mt7902_mt792x_reset\0"
	"mt7902_mt792xe_mcu_drv_pmctrl\0"
	"pci_read_config_word\0"
	"napi_enable\0"
	"mt7902_mt792x_wfsys_reset\0"
	"__tasklet_schedule\0"
	"__local_bh_enable_ip\0"
	"mt7902_mt76_alloc_device\0"
	"idr_destroy\0"
	"mt7902_mt76_connac_tx_complete_skb\0"
	"mt7902_mcu_set_eeprom\0"
	"mt7902_mt792x_dma_disable\0"
	"pci_set_master\0"
	"__x86_return_thunk\0"
	"mt7902_mt792x_dma_cleanup\0"
	"jiffies\0"
	"mt7902_mt792xe_mcu_fw_pmctrl\0"
	"mt7902_mac_sta_assoc\0"
	"__preempt_count\0"
	"mt7902_queue_rx_skb\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"param_ops_bool\0"
	"__x86_indirect_thunk_rcx\0"
	"cancel_work_sync\0"
	"mt7902_mac_init\0"
	"_raw_spin_lock_bh\0"
	"mt7902_mt792x_dma_enable\0"
	"mt7902_mt76_init_queue\0"
	"mt7902_mt76_mmio_init\0"
	"dma_set_mask\0"
	"mt7902_mcu_fill_message\0"
	"pcim_iomap_table\0"
	"mt7902_mt76_txq_schedule_all\0"
	"napi_schedule_prep\0"
	"__ubsan_handle_load_invalid_value\0"
	"mt7902_mt76_pci_disable_aspm\0"
	"napi_disable\0"
	"pcim_enable_device\0"
	"tasklet_unlock_wait\0"
	"pci_write_config_word\0"
	"pci_free_irq_vectors\0"
	"mt7902_mt76_free_device\0"
	"mt7902_mt792x_irq_handler\0"
	"__mt7902_start\0"
	"flush_work\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mt7902-common");

MODULE_ALIAS("pci:v000014C3d00007902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv000014C3sd00007902bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv000014C3sd00001EDEbc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv00001A3Bsd00005520bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv00001A3Bsd00005521bc*sc*i*");

MODULE_INFO(srcversion, "9F9009C28EEA8E1E7EC4FDC");
