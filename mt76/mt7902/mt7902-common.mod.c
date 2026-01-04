#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt7902_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt7902_txwi_free, "_gpl", "");
KSYMTAB_FUNC(mt7902_rx_check, "_gpl", "");
KSYMTAB_FUNC(mt7902_queue_rx_skb, "_gpl", "");
KSYMTAB_FUNC(mt7902_usb_sdio_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt7902_usb_sdio_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt7902_usb_sdio_tx_status_data, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_parse_response, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_regval, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt7902_run_firmware, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_set_eeprom, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt7902_mcu_fill_message, "_gpl", "");
KSYMTAB_FUNC(__mt7902_start, "_gpl", "");
KSYMTAB_FUNC(mt7902_mac_sta_add, "_gpl", "");
KSYMTAB_FUNC(mt7902_mac_sta_assoc, "_gpl", "");
KSYMTAB_FUNC(mt7902_mac_sta_remove, "_gpl", "");
KSYMTAB_DATA(mt7902_ops, "_gpl", "");
KSYMTAB_FUNC(mt7902_mac_init, "_gpl", "");
KSYMTAB_FUNC(mt7902_register_device, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_tx_stats_show, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_queues_acq, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_pm_stats, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_pm_idle_timeout_set, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_pm_idle_timeout_get, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_tx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_stop, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_remove_interface, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_conf_tx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_get_stats, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_get_tsf, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_set_tsf, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_tx_worker, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_roc_timer, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_flush, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_assign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_unassign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_set_wakeup, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_get_et_strings, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_get_et_sset_count, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_get_et_stats, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_sta_statistics, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_set_coverage_class, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_init_wiphy, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_get_mac80211_ops, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_init_wcid, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792xe_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_load_firmware, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mac_work, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mac_set_timeing, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mac_update_mib_stats, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_rx_get_wcid, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mac_assoc_rssi, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mac_reset_counters, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_reset, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_mac_init_band, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_pm_wake_work, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_pm_power_save_work, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_init_acpi_sar, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_init_acpi_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_acpi_get_flags, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_acpi_get_mtcl_conf, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_irq_tasklet, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_dma_enable, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_wpdma_reset, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_wpdma_reinit_cond, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_dma_disable, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_dma_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_poll_tx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_poll_rx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt792x_wfsys_reset, "_gpl", "");
KSYMTAB_DATA(mt7902_mt76_rates, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_set_stream_caps, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_alloc_phy, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_register_phy, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_unregister_phy, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_create_page_pool, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_alloc_device, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_register_device, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_unregister_device, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_free_device, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_rx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_has_tx_pending, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_update_survey_active_time, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_update_survey, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_survey, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_wcid_key_setup, "", "");
KSYMTAB_FUNC(mt7902_mt76_rx_signal, "", "");
KSYMTAB_FUNC(mt7902_mt76_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_sta_state, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_sta_pre_rcu_remove, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_wcid_init, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_wcid_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_txpower, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_init_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_csa_finish, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_csa_check, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_set_tim, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_insert_ccmp_hdr, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_rate, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_sw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_antenna, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_init_queue, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_calculate_default_rate, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_ethtool_worker, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_ethtool_page_pool_stats, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_phy_dfs_state, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_start_firmware, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_patch_sem_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_start_patch, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_init_download, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_mac_enable, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_vif_ps, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_rts_thresh, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_beacon_loss_iter, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_add_nested_tlv, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_connac_mcu_alloc_sta_req, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_alloc_wtbl_req, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_bss_omac_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_uapsd, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_wtbl_hdr_trans_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_wtbl_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_wtbl_generic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_he_tlv_v2, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_get_phy_mode_v2, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_wtbl_smps_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_wtbl_ht_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_cmd, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_wtbl_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_uni_add_dev, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_wed_update, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sta_ba, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_get_phy_mode, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_get_phy_mode_ext, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_get_he_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_get_eht_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_uni_set_chctx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_uni_add_bss, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_sched_scan_enable, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_chip_config, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_sta_state_dp, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_coredump_event, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_get_ch_power, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_rate_txpower, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_update_arp_filter, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_p2p_oppps, "_gpl", "");
KSYMTAB_DATA(mt7902_mt76_connac_wowlan_support, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_update_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_suspend_mode, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_wow_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_hif_suspend, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_suspend_iter, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_reg_rr, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_reg_wr, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_add_key, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_bss_ext_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_bss_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_set_pm, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_restart, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_mcu_rdd_cmd, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_load_ram, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_load_patch, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_mcu_fill_message, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac3_mac_decode_he_radiotap, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_check_agg_ssn, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_status_lock, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_status_unlock, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_status_skb_done, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_status_skb_add, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_status_skb_get, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_status_check, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_release_buffered_frames, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_txq_schedule, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_txq_schedule_all, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_tx_worker_run, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_stop_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_wake_tx_queue, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_ac_to_hwq, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_skb_adjust_pad, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_queue_tx_complete, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_set_tx_blocked, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_rx_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_token_release, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_rx_token_release, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_rx_aggr_start, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_rx_aggr_stop, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_poll, "_gpl", "");
KSYMTAB_FUNC(____mt7902_mt76_poll_msec, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_wcid_alloc, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_min_avg_rssi, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_worker_fn, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_of_data_from_mtd, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_of_data_from_nvmem, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_eeprom_override, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_find_power_limits_node, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_find_channel_node, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_rate_power_limits, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_seq_puts_array, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_register_debugfs_fops, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_get_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_put_txwi, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_put_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_free_pending_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_dma_rx_poll, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_dma_attach, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_dma_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_gen_ppe_thresh, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_pm_wake, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_power_save_sched, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_free_pending_tx_skbs, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_pm_queue_skb, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_pm_dequeue_skbs, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_write_hw_txp, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_txp_skb_unmap, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac_init_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_mac_tx_rate_val, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_mac_fill_txs, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_mac_add_txs_skb, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_mac_decode_he_radiotap, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_reverse_frag0_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_mac_fill_rx_rate, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_tx_check_aggr, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_txwi_free, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_connac2_tx_token_put, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_mcu_msg_alloc, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_mcu_get_response, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_mcu_rx_event, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_mcu_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_mcu_skb_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(__mt7902_mt76_mcu_send_firmware, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_pci_disable_aspm, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_set_irq_mask, "_gpl", "");
KSYMTAB_FUNC(mt7902_mt76_mmio_init, "_gpl", "");

SYMBOL_CRC(mt7902_mac_write_txwi, 0xeceab7dc, "_gpl");
SYMBOL_CRC(mt7902_txwi_free, 0x3056f350, "_gpl");
SYMBOL_CRC(mt7902_rx_check, 0xf55d731a, "_gpl");
SYMBOL_CRC(mt7902_queue_rx_skb, 0xdb7481c7, "_gpl");
SYMBOL_CRC(mt7902_usb_sdio_tx_prepare_skb, 0x58c9f818, "_gpl");
SYMBOL_CRC(mt7902_usb_sdio_tx_complete_skb, 0xb2cc06ed, "_gpl");
SYMBOL_CRC(mt7902_usb_sdio_tx_status_data, 0x2c7d2617, "_gpl");
SYMBOL_CRC(mt7902_mcu_parse_response, 0x7c4be906, "_gpl");
SYMBOL_CRC(mt7902_mcu_regval, 0x5ef578de, "_gpl");
SYMBOL_CRC(mt7902_mcu_set_deep_sleep, 0xe029d7e1, "_gpl");
SYMBOL_CRC(mt7902_run_firmware, 0x2869db78, "_gpl");
SYMBOL_CRC(mt7902_mcu_set_eeprom, 0x2869db78, "_gpl");
SYMBOL_CRC(mt7902_mcu_hw_scan, 0xf6b3c0ec, "_gpl");
SYMBOL_CRC(mt7902_mcu_sched_scan_req, 0x12debe98, "_gpl");
SYMBOL_CRC(mt7902_mcu_cancel_hw_scan, 0x279417b8, "_gpl");
SYMBOL_CRC(mt7902_mcu_set_channel_domain, 0xd0d4399d, "_gpl");
SYMBOL_CRC(mt7902_mcu_fill_message, 0xc18da0b2, "_gpl");
SYMBOL_CRC(__mt7902_start, 0x3a5632bf, "_gpl");
SYMBOL_CRC(mt7902_mac_sta_add, 0xb874270a, "_gpl");
SYMBOL_CRC(mt7902_mac_sta_assoc, 0x970f7608, "_gpl");
SYMBOL_CRC(mt7902_mac_sta_remove, 0x970f7608, "_gpl");
SYMBOL_CRC(mt7902_ops, 0xfaaa4cf5, "_gpl");
SYMBOL_CRC(mt7902_mac_init, 0xd7f7aed0, "_gpl");
SYMBOL_CRC(mt7902_register_device, 0xd7f7aed0, "_gpl");
SYMBOL_CRC(mt7902_mt792x_tx_stats_show, 0x1e2c5fe1, "_gpl");
SYMBOL_CRC(mt7902_mt792x_queues_acq, 0xbd5dd8bc, "_gpl");
SYMBOL_CRC(mt7902_mt792x_queues_read, 0xbd5dd8bc, "_gpl");
SYMBOL_CRC(mt7902_mt792x_pm_stats, 0xbd5dd8bc, "_gpl");
SYMBOL_CRC(mt7902_mt792x_pm_idle_timeout_set, 0x4cc47526, "_gpl");
SYMBOL_CRC(mt7902_mt792x_pm_idle_timeout_get, 0x53104538, "_gpl");
SYMBOL_CRC(mt7902_mt792x_tx, 0x1a579b9d, "_gpl");
SYMBOL_CRC(mt7902_mt792x_stop, 0xc6a4e8a9, "_gpl");
SYMBOL_CRC(mt7902_mt792x_remove_interface, 0x3cb36627, "_gpl");
SYMBOL_CRC(mt7902_mt792x_conf_tx, 0xf3a89c72, "_gpl");
SYMBOL_CRC(mt7902_mt792x_get_stats, 0xea75d6c6, "_gpl");
SYMBOL_CRC(mt7902_mt792x_get_tsf, 0x9eb79e6b, "_gpl");
SYMBOL_CRC(mt7902_mt792x_set_tsf, 0x5973d6cd, "_gpl");
SYMBOL_CRC(mt7902_mt792x_tx_worker, 0xe2479683, "_gpl");
SYMBOL_CRC(mt7902_mt792x_roc_timer, 0xa470b7e2, "_gpl");
SYMBOL_CRC(mt7902_mt792x_flush, 0xac20b0a6, "_gpl");
SYMBOL_CRC(mt7902_mt792x_assign_vif_chanctx, 0x09155325, "_gpl");
SYMBOL_CRC(mt7902_mt792x_unassign_vif_chanctx, 0xf8401406, "_gpl");
SYMBOL_CRC(mt7902_mt792x_set_wakeup, 0x5c7515b4, "_gpl");
SYMBOL_CRC(mt7902_mt792x_get_et_strings, 0x082c89f5, "_gpl");
SYMBOL_CRC(mt7902_mt792x_get_et_sset_count, 0xa2b6dc4a, "_gpl");
SYMBOL_CRC(mt7902_mt792x_get_et_stats, 0x8eaf7c6f, "_gpl");
SYMBOL_CRC(mt7902_mt792x_sta_statistics, 0xe6597e63, "_gpl");
SYMBOL_CRC(mt7902_mt792x_set_coverage_class, 0xb68ced56, "_gpl");
SYMBOL_CRC(mt7902_mt792x_init_wiphy, 0xf6c12644, "_gpl");
SYMBOL_CRC(mt7902_mt792x_get_mac80211_ops, 0x673aaea8, "_gpl");
SYMBOL_CRC(mt7902_mt792x_init_wcid, 0xf3ad5137, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mcu_drv_pmctrl, 0xf3ad5137, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mcu_fw_pmctrl, 0xf3ad5137, "_gpl");
SYMBOL_CRC(__mt7902_mt792xe_mcu_drv_pmctrl, 0xf3ad5137, "_gpl");
SYMBOL_CRC(mt7902_mt792xe_mcu_drv_pmctrl, 0xf3ad5137, "_gpl");
SYMBOL_CRC(mt7902_mt792xe_mcu_fw_pmctrl, 0xf3ad5137, "_gpl");
SYMBOL_CRC(mt7902_mt792x_load_firmware, 0xf3ad5137, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mac_work, 0xc7a6ca76, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mac_set_timeing, 0xdc38a3a6, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mac_update_mib_stats, 0xdc38a3a6, "_gpl");
SYMBOL_CRC(mt7902_mt792x_rx_get_wcid, 0xd4fd7c8e, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mac_assoc_rssi, 0x7233ef96, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mac_reset_counters, 0xdc38a3a6, "_gpl");
SYMBOL_CRC(mt7902_mt792x_update_channel, 0xe4c0056a, "_gpl");
SYMBOL_CRC(mt7902_mt792x_reset, 0xb6e95afd, "_gpl");
SYMBOL_CRC(mt7902_mt792x_mac_init_band, 0xd69b6de9, "_gpl");
SYMBOL_CRC(mt7902_mt792x_pm_wake_work, 0xc7a6ca76, "_gpl");
SYMBOL_CRC(mt7902_mt792x_pm_power_save_work, 0xc7a6ca76, "_gpl");
SYMBOL_CRC(mt7902_mt792x_init_acpi_sar, 0x2869db78, "_gpl");
SYMBOL_CRC(mt7902_mt792x_init_acpi_sar_power, 0x89c729e2, "_gpl");
SYMBOL_CRC(mt7902_mt792x_acpi_get_flags, 0x730ffc4c, "_gpl");
SYMBOL_CRC(mt7902_mt792x_acpi_get_mtcl_conf, 0xbc9c0933, "_gpl");
SYMBOL_CRC(mt7902_mt792x_irq_handler, 0x9a424296, "_gpl");
SYMBOL_CRC(mt7902_mt792x_irq_tasklet, 0x6237bf3f, "_gpl");
SYMBOL_CRC(mt7902_mt792x_rx_poll_complete, 0x28d12c28, "_gpl");
SYMBOL_CRC(mt7902_mt792x_dma_enable, 0x336fcc0c, "_gpl");
SYMBOL_CRC(mt7902_mt792x_wpdma_reset, 0x9ec53670, "_gpl");
SYMBOL_CRC(mt7902_mt792x_wpdma_reinit_cond, 0x336fcc0c, "_gpl");
SYMBOL_CRC(mt7902_mt792x_dma_disable, 0x9ec53670, "_gpl");
SYMBOL_CRC(mt7902_mt792x_dma_cleanup, 0x60e17b8d, "_gpl");
SYMBOL_CRC(mt7902_mt792x_poll_tx, 0x0437d8c5, "_gpl");
SYMBOL_CRC(mt7902_mt792x_poll_rx, 0x0437d8c5, "_gpl");
SYMBOL_CRC(mt7902_mt792x_wfsys_reset, 0x336fcc0c, "_gpl");
SYMBOL_CRC(mt7902_mt76_rates, 0xa9967f5a, "_gpl");
SYMBOL_CRC(mt7902_mt76_set_stream_caps, 0xaa58362c, "_gpl");
SYMBOL_CRC(mt7902_mt76_alloc_phy, 0x5307a2eb, "_gpl");
SYMBOL_CRC(mt7902_mt76_register_phy, 0x39d6dd47, "_gpl");
SYMBOL_CRC(mt7902_mt76_unregister_phy, 0x76040669, "_gpl");
SYMBOL_CRC(mt7902_mt76_create_page_pool, 0xe7def50e, "_gpl");
SYMBOL_CRC(mt7902_mt76_alloc_device, 0x044595a6, "_gpl");
SYMBOL_CRC(mt7902_mt76_register_device, 0x820fec57, "_gpl");
SYMBOL_CRC(mt7902_mt76_unregister_device, 0xdf7c976e, "_gpl");
SYMBOL_CRC(mt7902_mt76_free_device, 0xdf7c976e, "_gpl");
SYMBOL_CRC(mt7902_mt76_rx, 0xa608cb4f, "_gpl");
SYMBOL_CRC(mt7902_mt76_has_tx_pending, 0x1c305ef2, "_gpl");
SYMBOL_CRC(mt7902_mt76_update_survey_active_time, 0x894c9308, "_gpl");
SYMBOL_CRC(mt7902_mt76_update_survey, 0x76040669, "_gpl");
SYMBOL_CRC(mt7902_mt76_set_channel, 0x76040669, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_survey, 0xe29ad536, "_gpl");
SYMBOL_CRC(mt7902_mt76_wcid_key_setup, 0x52320baa, "");
SYMBOL_CRC(mt7902_mt76_rx_signal, 0x8100a40b, "");
SYMBOL_CRC(mt7902_mt76_rx_poll_complete, 0x126f099f, "_gpl");
SYMBOL_CRC(__mt7902_mt76_sta_remove, 0x406f2513, "_gpl");
SYMBOL_CRC(mt7902_mt76_sta_state, 0xef0c723c, "_gpl");
SYMBOL_CRC(mt7902_mt76_sta_pre_rcu_remove, 0x589433d6, "_gpl");
SYMBOL_CRC(mt7902_mt76_wcid_init, 0x3fd03a6e, "_gpl");
SYMBOL_CRC(mt7902_mt76_wcid_cleanup, 0x803717ae, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_txpower, 0x3f61cfec, "_gpl");
SYMBOL_CRC(mt7902_mt76_init_sar_power, 0x2e1cdfba, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_sar_power, 0xbb185638, "_gpl");
SYMBOL_CRC(mt7902_mt76_csa_finish, 0xdf7c976e, "_gpl");
SYMBOL_CRC(mt7902_mt76_csa_check, 0xdf7c976e, "_gpl");
SYMBOL_CRC(mt7902_mt76_set_tim, 0x37e5adca, "_gpl");
SYMBOL_CRC(mt7902_mt76_insert_ccmp_hdr, 0x703021e5, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_rate, 0xd392f76e, "_gpl");
SYMBOL_CRC(mt7902_mt76_sw_scan, 0x573c4014, "_gpl");
SYMBOL_CRC(mt7902_mt76_sw_scan_complete, 0xe1dbba08, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_antenna, 0xa027b8d7, "_gpl");
SYMBOL_CRC(mt7902_mt76_init_queue, 0x2e180e02, "_gpl");
SYMBOL_CRC(mt7902_mt76_calculate_default_rate, 0x718f7694, "_gpl");
SYMBOL_CRC(mt7902_mt76_ethtool_worker, 0x42ca75f0, "_gpl");
SYMBOL_CRC(mt7902_mt76_ethtool_page_pool_stats, 0xc18d68f3, "_gpl");
SYMBOL_CRC(mt7902_mt76_phy_dfs_state, 0xe6eda852, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_start_firmware, 0xc47fded7, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_patch_sem_ctrl, 0x50818233, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_start_patch, 0x1887e58d, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_init_download, 0x5b969b76, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_channel_domain, 0xd0d4399d, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_mac_enable, 0x5a8fe0ae, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_vif_ps, 0x991be4b4, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_rts_thresh, 0x0150ac4a, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_beacon_loss_iter, 0xf803723e, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_add_nested_tlv, 0xdac9ca4a, "_gpl");
SYMBOL_CRC(__mt7902_mt76_connac_mcu_alloc_sta_req, 0x6094d32f, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_alloc_wtbl_req, 0x9c547d03, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_bss_omac_tlv, 0x7e60fba4, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_basic_tlv, 0xc7c2b688, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_uapsd, 0x8f4dd0c4, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_wtbl_hdr_trans_tlv, 0xe32b9604, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_update_hdr_trans, 0xae2ad1d3, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_wtbl_update_hdr_trans, 0x565fd571, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_wtbl_generic_tlv, 0x8c57971c, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_he_tlv_v2, 0x246fe6ce, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_get_phy_mode_v2, 0x74846772, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_tlv, 0x325beeeb, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_wtbl_smps_tlv, 0xacd4f778, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_wtbl_ht_tlv, 0xaada723d, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_cmd, 0x1b7dee58, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_wtbl_ba_tlv, 0xf2ccea61, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_uni_add_dev, 0x7d0ce781, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_ba_tlv, 0xa4dd5a78, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_wed_update, 0x5e2cb75c, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sta_ba, 0x2ca71f5a, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_get_phy_mode, 0x17c065f9, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_get_phy_mode_ext, 0x61c48dd8, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_get_he_phy_cap, 0x41a5a9e8, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_get_eht_phy_cap, 0xa93f09d7, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_uni_set_chctx, 0x8ee2d192, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_uni_add_bss, 0x68a293e1, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_hw_scan, 0xf6b3c0ec, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_cancel_hw_scan, 0x279417b8, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sched_scan_req, 0x12debe98, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_sched_scan_enable, 0x73f357ff, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_chip_config, 0x1887e58d, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_deep_sleep, 0x4e51b3c9, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_sta_state_dp, 0x40fdb8df, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_coredump_event, 0xac84d1c0, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_get_ch_power, 0x0c0b1c7f, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_rate_txpower, 0xd0d4399d, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_update_arp_filter, 0x25b0764f, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_p2p_oppps, 0xd4354b56, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_wowlan_support, 0x613fefc9, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_update_gtk_rekey, 0xbc9a2949, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_gtk_rekey, 0xce028d93, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_suspend_mode, 0x3c9e1f33, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_wow_ctrl, 0x5245c8ea, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_hif_suspend, 0x381047c8, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_suspend_iter, 0xf803723e, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_reg_rr, 0x58ae60e2, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_reg_wr, 0x465a1464, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_add_key, 0x35416b7f, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_bss_ext_tlv, 0x17354352, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_bss_basic_tlv, 0x49c5c7aa, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_set_pm, 0x537162ab, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_restart, 0x1887e58d, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_mcu_rdd_cmd, 0xcc1529be, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_load_ram, 0xca3b7c88, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_load_patch, 0xc6adbb37, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_mcu_fill_message, 0xb54f8bf9, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac3_mac_decode_he_radiotap, 0x5798d368, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_check_agg_ssn, 0xd4743e71, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_status_lock, 0x338b6d62, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_status_unlock, 0x338b6d62, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_status_skb_done, 0x355e9152, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_status_skb_add, 0x69dea2cd, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_status_skb_get, 0x4e7a239f, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_status_check, 0xecb77238, "_gpl");
SYMBOL_CRC(__mt7902_mt76_tx_complete_skb, 0x4d4033aa, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx, 0x0e1e261a, "_gpl");
SYMBOL_CRC(mt7902_mt76_release_buffered_frames, 0xa39978df, "_gpl");
SYMBOL_CRC(mt7902_mt76_txq_schedule, 0xf22996ed, "_gpl");
SYMBOL_CRC(mt7902_mt76_txq_schedule_all, 0x3cab843c, "_gpl");
SYMBOL_CRC(mt7902_mt76_tx_worker_run, 0xe3ff7b8d, "_gpl");
SYMBOL_CRC(mt7902_mt76_stop_tx_queues, 0x2e3cf5c0, "_gpl");
SYMBOL_CRC(mt7902_mt76_wake_tx_queue, 0x40712b83, "_gpl");
SYMBOL_CRC(mt7902_mt76_ac_to_hwq, 0x3c1b1a7c, "_gpl");
SYMBOL_CRC(mt7902_mt76_skb_adjust_pad, 0xaa81c5ce, "_gpl");
SYMBOL_CRC(mt7902_mt76_queue_tx_complete, 0x49beded3, "_gpl");
SYMBOL_CRC(__mt7902_mt76_set_tx_blocked, 0x922b1603, "_gpl");
SYMBOL_CRC(mt7902_mt76_token_consume, 0x29b65cf0, "_gpl");
SYMBOL_CRC(mt7902_mt76_rx_token_consume, 0x28457950, "_gpl");
SYMBOL_CRC(mt7902_mt76_token_release, 0xb7b2cd88, "_gpl");
SYMBOL_CRC(mt7902_mt76_rx_token_release, 0xa6398c78, "_gpl");
SYMBOL_CRC(mt7902_mt76_rx_aggr_start, 0xc1ae188b, "_gpl");
SYMBOL_CRC(mt7902_mt76_rx_aggr_stop, 0x2e3d3a39, "_gpl");
SYMBOL_CRC(__mt7902_mt76_poll, 0x37f3136a, "_gpl");
SYMBOL_CRC(____mt7902_mt76_poll_msec, 0xe579ce97, "_gpl");
SYMBOL_CRC(mt7902_mt76_wcid_alloc, 0xd7c4f51b, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_min_avg_rssi, 0x303bc970, "_gpl");
SYMBOL_CRC(__mt7902_mt76_worker_fn, 0xb86a39eb, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_of_data_from_mtd, 0xc2962e5a, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_of_data_from_nvmem, 0x09c00ad1, "_gpl");
SYMBOL_CRC(mt7902_mt76_eeprom_override, 0x60374ad7, "_gpl");
SYMBOL_CRC(mt7902_mt76_find_power_limits_node, 0x20187213, "_gpl");
SYMBOL_CRC(mt7902_mt76_find_channel_node, 0xdea1f078, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_rate_power_limits, 0xa115bc75, "_gpl");
SYMBOL_CRC(mt7902_mt76_eeprom_init, 0x8af3e16a, "_gpl");
SYMBOL_CRC(mt7902_mt76_queues_read, 0xbd5dd8bc, "_gpl");
SYMBOL_CRC(mt7902_mt76_seq_puts_array, 0x83e34f13, "_gpl");
SYMBOL_CRC(mt7902_mt76_register_debugfs_fops, 0xd25baa03, "_gpl");
SYMBOL_CRC(mt7902_mt76_get_rxwi, 0xb16a039a, "_gpl");
SYMBOL_CRC(mt7902_mt76_put_txwi, 0xafec28ab, "_gpl");
SYMBOL_CRC(mt7902_mt76_put_rxwi, 0xafec28ab, "_gpl");
SYMBOL_CRC(mt7902_mt76_free_pending_rxwi, 0xcaf2db53, "_gpl");
SYMBOL_CRC(mt7902_mt76_dma_rx_poll, 0xadf82adb, "_gpl");
SYMBOL_CRC(mt7902_mt76_dma_attach, 0xcaf2db53, "_gpl");
SYMBOL_CRC(mt7902_mt76_dma_cleanup, 0xcaf2db53, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_gen_ppe_thresh, 0xda8762f3, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_pm_wake, 0x589df566, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_power_save_sched, 0x3951be5c, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_free_pending_tx_skbs, 0xe551acda, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_pm_queue_skb, 0x04e0c901, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_pm_dequeue_skbs, 0x3951be5c, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_tx_complete_skb, 0x85865ed5, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_write_hw_txp, 0xb5ffafc5, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_txp_skb_unmap, 0xafec28ab, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac_init_tx_queues, 0x508e4783, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_mac_tx_rate_val, 0x277a58e2, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_mac_write_txwi, 0xd84617fc, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_mac_fill_txs, 0xac96b86c, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_mac_add_txs_skb, 0x6c5ac361, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_mac_decode_he_radiotap, 0x8c1d7ded, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_reverse_frag0_hdr_trans, 0xc3399bdf, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_mac_fill_rx_rate, 0x31d9bd29, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_tx_check_aggr, 0x5dbe51e7, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_txwi_free, 0x6712e28c, "_gpl");
SYMBOL_CRC(mt7902_mt76_connac2_tx_token_put, 0xcaf2db53, "_gpl");
SYMBOL_CRC(__mt7902_mt76_mcu_msg_alloc, 0xb090c3bc, "_gpl");
SYMBOL_CRC(mt7902_mt76_mcu_get_response, 0xd9e330f1, "_gpl");
SYMBOL_CRC(mt7902_mt76_mcu_rx_event, 0x88134159, "_gpl");
SYMBOL_CRC(mt7902_mt76_mcu_send_and_get_msg, 0x9a9466ac, "_gpl");
SYMBOL_CRC(mt7902_mt76_mcu_skb_send_and_get_msg, 0x2a599550, "_gpl");
SYMBOL_CRC(__mt7902_mt76_mcu_send_firmware, 0x2a162c78, "_gpl");
SYMBOL_CRC(mt7902_mt76_pci_disable_aspm, 0x6fb07b8f, "_gpl");
SYMBOL_CRC(mt7902_mt76_set_irq_mask, 0x66511f0f, "_gpl");
SYMBOL_CRC(mt7902_mt76_mmio_init, 0xef1e2a91, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb80f4b33, "ieee80211_sta_register_airtime" },
	{ 0xc45d298e, "is_vmalloc_addr" },
	{ 0x1eb519d6, "pcie_capability_read_word" },
	{ 0x8c86919c, "device_set_wakeup_enable" },
	{ 0x0c3415f5, "__skb_pad" },
	{ 0x3783f962, "ieee80211_connection_loss" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xc4cc5bd5, "is_acpi_device_node" },
	{ 0x069b1883, "page_pool_get_stats" },
	{ 0xeb0960b6, "simple_attr_open" },
	{ 0xdc773b36, "__ieee80211_schedule_txq" },
	{ 0x4c2c70cf, "ieee80211_iterate_interfaces" },
	{ 0x96f0e64c, "debugfs_attr_write" },
	{ 0x9ab41830, "devm_kmalloc" },
	{ 0xe9e613dc, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x1b878525, "page_pool_alloc_frag" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xc13e3349, "consume_skb" },
	{ 0xfbe7861b, "memmove" },
	{ 0x40a621c5, "snprintf" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xd28ed826, "dmam_alloc_attrs" },
	{ 0xd79eeabc, "netif_receive_skb_list" },
	{ 0x8e76e595, "skb_dequeue" },
	{ 0x60c9c0b3, "__init_swait_queue_head" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0xabcf68b3, "ieee80211_free_hw" },
	{ 0xe77776ab, "dma_unmap_page_attrs" },
	{ 0x87af8232, "ieee80211_txq_schedule_start" },
	{ 0xc36345fa, "__sw_hweight32" },
	{ 0xd0b1599d, "request_firmware" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0xb424cf98, "ieee80211_iterate_stations_atomic" },
	{ 0xb83096c1, "ieee80211_tx_status_ext" },
	{ 0xbcf3832f, "debugfs_create_blob" },
	{ 0x30e05aac, "ieee80211_start_tx_ba_session" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x3783f962, "ieee80211_beacon_loss" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x9e3a8e47, "_raw_read_unlock_bh" },
	{ 0x9e3a8e47, "_raw_read_lock_bh" },
	{ 0x6f1e66c6, "seq_lseek" },
	{ 0xd272d446, "kthread_parkme" },
	{ 0x8da01d4e, "page_pool_destroy" },
	{ 0x7ce62950, "ieee80211_register_hw" },
	{ 0x2c3737c1, "led_classdev_unregister" },
	{ 0x40e610b8, "__ieee80211_create_tpt_led_trigger" },
	{ 0x7c5a2f7a, "netif_napi_add_weight_locked" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0xd1eb132c, "ieee80211_sta_eosp" },
	{ 0x2cfcc431, "ieee80211_get_hdrlen_from_skb" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0x228b1f9c, "kthread_park" },
	{ 0xe4771b94, "__dynamic_dev_dbg" },
	{ 0x6d69b03a, "sched_set_fifo_low" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0x5e505530, "kthread_should_park" },
	{ 0xd272d446, "__fentry__" },
	{ 0x2763f366, "wake_up_process" },
	{ 0xf6ea6894, "skb_queue_purge_reason" },
	{ 0xafc1c0f4, "dev_driver_string" },
	{ 0xd717ddd2, "page_pool_ethtool_stats_get_strings" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x5dbb6e10, "ieee80211_find_sta" },
	{ 0x15a3ed4f, "dma_map_page_attrs" },
	{ 0x1a02571d, "napi_complete_done" },
	{ 0xe1ec1025, "ieee80211_get_tx_rates" },
	{ 0xd272d446, "dump_stack" },
	{ 0xea9169ea, "__alloc_pages_noprof" },
	{ 0x4a921c1d, "ieee80211_send_bar" },
	{ 0xfe15fda9, "cfg80211_reg_check_beaconing" },
	{ 0xf5f9c32b, "ieee80211_get_key_rx_seq" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "schedule" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0x9357593b, "ieee80211_sta_uapsd_trigger" },
	{ 0x586374be, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x0b260f56, "debugfs_create_devm_seqfile" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x1b50b34a, "__napi_schedule" },
	{ 0xe9cfe26a, "__alloc_skb" },
	{ 0x38c8be28, "idr_get_next" },
	{ 0x7ec472ba, "numa_node" },
	{ 0xbb3a3683, "pci_disable_link_state" },
	{ 0x15debdc6, "_dev_info" },
	{ 0x7851be11, "page_pool_ethtool_stats_get_count" },
	{ 0x67c0756e, "skb_queue_tail" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x8d00de06, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xbb288fc5, "page_pool_ethtool_stats_get" },
	{ 0x55e5dc35, "acpi_get_handle" },
	{ 0xe7c65303, "dev_set_threaded" },
	{ 0x44decd6f, "hugetlb_optimize_vmemmap_key" },
	{ 0x07d50c57, "idr_remove" },
	{ 0x2fc670f8, "wiphy_to_ieee80211_hw" },
	{ 0xbfc310a4, "debugfs_attr_read" },
	{ 0x65bae8c0, "__dma_sync_single_for_cpu" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xe4a7e98a, "ieee80211_queue_delayed_work" },
	{ 0x3a905e11, "devm_kmemdup" },
	{ 0xb69190e0, "devm_kfree" },
	{ 0x15debdc6, "_dev_err" },
	{ 0xe9e613dc, "skb_pull" },
	{ 0xad736819, "debugfs_create_file_unsafe" },
	{ 0xb82edfb3, "idr_alloc" },
	{ 0xe5e31c71, "simple_attr_release" },
	{ 0xfdab9b2a, "ieee80211_calc_rx_airtime" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x55b67ec4, "__SCK__tp_func_dev_irq" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x215d2958, "ieee80211_find_sta_by_ifaddr" },
	{ 0xe5888f95, "ieee80211_next_txq" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0x9cb3015a, "ieee80211_remain_on_channel_expired" },
	{ 0x7ad88d5f, "pcie_capability_clear_and_set_word_locked" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0xe9e613dc, "skb_push" },
	{ 0x1b50b34a, "napi_enable" },
	{ 0x8673ede1, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0xcfd7c4d3, "seq_putc" },
	{ 0xa4ba958f, "const_current_task" },
	{ 0x61be6fd1, "mutex_is_locked" },
	{ 0x9c0551c6, "__tasklet_schedule" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xd1eb132c, "ieee80211_sta_pspoll" },
	{ 0x529b0026, "ieee80211_wake_queues" },
	{ 0x68336338, "__ioread32_copy" },
	{ 0xbd03ed67, "phys_base" },
	{ 0x50df42e8, "ieee80211_beacon_get_template" },
	{ 0xba5cdd96, "page_pool_put_unrefed_netmem" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x402db74e, "memcmp" },
	{ 0x0996671f, "ieee80211_iter_keys_rcu" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x228b1f9c, "kthread_stop" },
	{ 0x6eec4100, "ieee80211_free_txskb" },
	{ 0x168f2bc7, "led_classdev_register_ext" },
	{ 0x030de751, "dev_coredumpv" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x30359732, "ieee80211_alloc_hw_nm" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xe199f25f, "jiffies_to_msecs" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0x9b4b48a0, "_ctype" },
	{ 0x255dfd5a, "idr_destroy" },
	{ 0xe6047eec, "ieee80211_tx_dequeue" },
	{ 0x85acaba2, "cancel_delayed_work" },
	{ 0x0732b933, "ieee80211_rx_list" },
	{ 0xfdcb5b21, "page_pool_create" },
	{ 0x7295b8c3, "ieee80211_freq_khz_to_channel" },
	{ 0xf6a1ccd3, "devm_hwmon_device_register_with_groups" },
	{ 0x0e9cab28, "memset" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0x6d2f6d40, "rfc1042_header" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x0698c717, "debugfs_create_u32" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0xc2f0b02e, "__pskb_pull_tail" },
	{ 0x9cb3015a, "ieee80211_ready_on_channel" },
	{ 0x529b0026, "ieee80211_stop_queues" },
	{ 0x41a2fb6f, "__netif_napi_del_locked" },
	{ 0x058c185a, "jiffies" },
	{ 0x02996a3c, "kthread_create_on_node" },
	{ 0xbb47b08a, "devm_kasprintf" },
	{ 0x8a902bf0, "__tracepoint_dev_irq" },
	{ 0x67d5e21b, "seq_read" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0x42615353, "gro_receive_skb" },
	{ 0x98c5041d, "__SCT__tp_func_dev_irq" },
	{ 0x439c3398, "ieee80211_sched_scan_results" },
	{ 0xb1f1185a, "ieee80211_scan_completed" },
	{ 0x4c2c70cf, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x879131f2, "param_ops_bool" },
	{ 0x65bae8c0, "__dma_sync_single_for_device" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x651bbffe, "acpi_evaluate_object" },
	{ 0xabcf68b3, "ieee80211_unregister_hw" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0xed33839e, "napi_build_skb" },
	{ 0x9c5b2f7e, "seq_write" },
	{ 0x8615e869, "__folio_put" },
	{ 0x2f5b4fba, "__kmalloc_cache_noprof" },
	{ 0xc7aebaf5, "radix_tree_tagged" },
	{ 0xd7a59a65, "vzalloc_noprof" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x75738bed, "__warn_printk" },
	{ 0xe1c26d73, "seq_printf" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0xb0e3a978, "ieee80211_channel_to_freq_khz" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x701f4b02, "debugfs_create_file_full" },
	{ 0x7851be11, "__SCT__cond_resched" },
	{ 0x4bcda72c, "single_release" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0x8f6791a6, "skb_add_rx_frag_netmem" },
	{ 0x8aa71af4, "ieee80211_queue_work" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0x27a5be05, "napi_schedule_prep" },
	{ 0x70db0d11, "napi_consume_skb" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0x6d2f6d40, "bridge_tunnel_header" },
	{ 0x6d182df8, "ieee80211_sta_ps_transition" },
	{ 0x4f2ac629, "dev_kfree_skb_any_reason" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x691989ce, "debugfs_create_u8" },
	{ 0x0fc70956, "single_open" },
	{ 0x72a1d175, "debugfs_create_dir" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0x67628f51, "msleep" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0x4191f6e2, "ieee80211_disconnect" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x5aa5bde9, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0xf2969d2d, "ieee80211_csa_finish" },
	{ 0xaef1f20d, "system_wq" },
	{ 0xd272d446, "synchronize_net" },
	{ 0x984622ae, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb80f4b33,
	0xc45d298e,
	0x1eb519d6,
	0x8c86919c,
	0x0c3415f5,
	0x3783f962,
	0x1abc7887,
	0xc4cc5bd5,
	0x069b1883,
	0xeb0960b6,
	0xdc773b36,
	0x4c2c70cf,
	0x96f0e64c,
	0x9ab41830,
	0xe9e613dc,
	0xd272d446,
	0x1b878525,
	0x534ed5f3,
	0xd710adbf,
	0xc13e3349,
	0xfbe7861b,
	0x40a621c5,
	0x49733ad6,
	0xd28ed826,
	0xd79eeabc,
	0x8e76e595,
	0x60c9c0b3,
	0xc87f4bab,
	0xabcf68b3,
	0xe77776ab,
	0x87af8232,
	0xc36345fa,
	0xd0b1599d,
	0x5a844b26,
	0xb424cf98,
	0xb83096c1,
	0xbcf3832f,
	0x30e05aac,
	0xfbe7861b,
	0x3783f962,
	0xcb8b6ec6,
	0x9e3a8e47,
	0x9e3a8e47,
	0x6f1e66c6,
	0xd272d446,
	0x8da01d4e,
	0x7ce62950,
	0x2c3737c1,
	0x40e610b8,
	0x7c5a2f7a,
	0x0feb1e94,
	0x0db8d68d,
	0x5e505530,
	0x2352b148,
	0xd1eb132c,
	0x2cfcc431,
	0x16ab4215,
	0xe1e1f979,
	0x228b1f9c,
	0xe4771b94,
	0x6d69b03a,
	0xde338d9a,
	0x5e505530,
	0xd272d446,
	0x2763f366,
	0xf6ea6894,
	0xafc1c0f4,
	0xd717ddd2,
	0x5a844b26,
	0x5dbb6e10,
	0x15a3ed4f,
	0x1a02571d,
	0xe1ec1025,
	0xd272d446,
	0xea9169ea,
	0x4a921c1d,
	0xfe15fda9,
	0xf5f9c32b,
	0xbd03ed67,
	0xd272d446,
	0x6ac784f4,
	0x9357593b,
	0x586374be,
	0xd272d446,
	0x0b260f56,
	0x8ce83585,
	0xde338d9a,
	0x1b50b34a,
	0xe9cfe26a,
	0x38c8be28,
	0x7ec472ba,
	0xbb3a3683,
	0x15debdc6,
	0x7851be11,
	0x67c0756e,
	0x90a48d82,
	0x8d00de06,
	0xbd03ed67,
	0xbb288fc5,
	0x55e5dc35,
	0xe7c65303,
	0x44decd6f,
	0x07d50c57,
	0x2fc670f8,
	0xbfc310a4,
	0x65bae8c0,
	0x7a5ffe84,
	0xe4a7e98a,
	0x3a905e11,
	0xb69190e0,
	0x15debdc6,
	0xe9e613dc,
	0xad736819,
	0xb82edfb3,
	0xe5e31c71,
	0xfdab9b2a,
	0xd272d446,
	0x55b67ec4,
	0x32feeafc,
	0x215d2958,
	0xe5888f95,
	0xbd03ed67,
	0xbeb1d261,
	0x9cb3015a,
	0x7ad88d5f,
	0xf46d5bf3,
	0xe9e613dc,
	0x1b50b34a,
	0x8673ede1,
	0xcfd7c4d3,
	0xa4ba958f,
	0x61be6fd1,
	0x9c0551c6,
	0x5a844b26,
	0xd1eb132c,
	0x529b0026,
	0x68336338,
	0xbd03ed67,
	0x50df42e8,
	0xba5cdd96,
	0xb5c51982,
	0x402db74e,
	0x0996671f,
	0xfcc2e8f3,
	0x228b1f9c,
	0x6eec4100,
	0x168f2bc7,
	0x030de751,
	0xc1e6c71e,
	0x30359732,
	0xe54e0a6b,
	0xe199f25f,
	0x81a1a811,
	0x9b4b48a0,
	0x255dfd5a,
	0xe6047eec,
	0x85acaba2,
	0x0732b933,
	0xfdcb5b21,
	0x7295b8c3,
	0xf6a1ccd3,
	0x0e9cab28,
	0x5a844b26,
	0x6d2f6d40,
	0xd272d446,
	0x0698c717,
	0x5403c125,
	0xc2f0b02e,
	0x9cb3015a,
	0x529b0026,
	0x41a2fb6f,
	0x058c185a,
	0x02996a3c,
	0xbb47b08a,
	0x8a902bf0,
	0x67d5e21b,
	0xdd6830c7,
	0xbd03ed67,
	0x82fd7238,
	0x7ec472ba,
	0x7ec472ba,
	0xa4c0178c,
	0x42615353,
	0x98c5041d,
	0x439c3398,
	0xb1f1185a,
	0x4c2c70cf,
	0xf46d5bf3,
	0x85acaba2,
	0x879131f2,
	0x65bae8c0,
	0xcbae5412,
	0x651bbffe,
	0xabcf68b3,
	0x5a844b26,
	0xed33839e,
	0x9c5b2f7e,
	0x8615e869,
	0x2f5b4fba,
	0xc7aebaf5,
	0xd7a59a65,
	0x2d88a3ab,
	0x75738bed,
	0xe1c26d73,
	0x5a844b26,
	0xb0e3a978,
	0x71798f7e,
	0xde338d9a,
	0x701f4b02,
	0x7851be11,
	0x4bcda72c,
	0x02f9bbf0,
	0x224a53e7,
	0x8f6791a6,
	0x8aa71af4,
	0xdf4bee3d,
	0x27a5be05,
	0x70db0d11,
	0xe4de56b4,
	0x43a349ca,
	0x6d2f6d40,
	0x6d182df8,
	0x4f2ac629,
	0xd272d446,
	0x691989ce,
	0x0fc70956,
	0x72a1d175,
	0xde338d9a,
	0x5a844b26,
	0x67628f51,
	0x12ca6142,
	0x4191f6e2,
	0x7851be11,
	0x5aa5bde9,
	0xb2e62cba,
	0xf2969d2d,
	0xaef1f20d,
	0xd272d446,
	0x984622ae,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"ieee80211_sta_register_airtime\0"
	"is_vmalloc_addr\0"
	"pcie_capability_read_word\0"
	"device_set_wakeup_enable\0"
	"__skb_pad\0"
	"ieee80211_connection_loss\0"
	"release_firmware\0"
	"is_acpi_device_node\0"
	"page_pool_get_stats\0"
	"simple_attr_open\0"
	"__ieee80211_schedule_txq\0"
	"ieee80211_iterate_interfaces\0"
	"debugfs_attr_write\0"
	"devm_kmalloc\0"
	"skb_put\0"
	"__rcu_read_lock\0"
	"page_pool_alloc_frag\0"
	"__msecs_to_jiffies\0"
	"__kmalloc_noprof\0"
	"consume_skb\0"
	"memmove\0"
	"snprintf\0"
	"queue_work_on\0"
	"dmam_alloc_attrs\0"
	"netif_receive_skb_list\0"
	"skb_dequeue\0"
	"__init_swait_queue_head\0"
	"finish_wait\0"
	"ieee80211_free_hw\0"
	"dma_unmap_page_attrs\0"
	"ieee80211_txq_schedule_start\0"
	"__sw_hweight32\0"
	"request_firmware\0"
	"__x86_indirect_thunk_r15\0"
	"ieee80211_iterate_stations_atomic\0"
	"ieee80211_tx_status_ext\0"
	"debugfs_create_blob\0"
	"ieee80211_start_tx_ba_session\0"
	"memcpy\0"
	"ieee80211_beacon_loss\0"
	"kfree\0"
	"_raw_read_unlock_bh\0"
	"_raw_read_lock_bh\0"
	"seq_lseek\0"
	"kthread_parkme\0"
	"page_pool_destroy\0"
	"ieee80211_register_hw\0"
	"led_classdev_unregister\0"
	"__ieee80211_create_tpt_led_trigger\0"
	"netif_napi_add_weight_locked\0"
	"usleep_range_state\0"
	"prepare_to_wait_event\0"
	"kthread_should_stop\0"
	"timer_delete_sync\0"
	"ieee80211_sta_eosp\0"
	"ieee80211_get_hdrlen_from_skb\0"
	"__wake_up\0"
	"_raw_spin_lock_irqsave\0"
	"kthread_park\0"
	"__dynamic_dev_dbg\0"
	"sched_set_fifo_low\0"
	"_raw_spin_lock\0"
	"kthread_should_park\0"
	"__fentry__\0"
	"wake_up_process\0"
	"skb_queue_purge_reason\0"
	"dev_driver_string\0"
	"page_pool_ethtool_stats_get_strings\0"
	"__x86_indirect_thunk_rax\0"
	"ieee80211_find_sta\0"
	"dma_map_page_attrs\0"
	"napi_complete_done\0"
	"ieee80211_get_tx_rates\0"
	"dump_stack\0"
	"__alloc_pages_noprof\0"
	"ieee80211_send_bar\0"
	"cfg80211_reg_check_beaconing\0"
	"ieee80211_get_key_rx_seq\0"
	"__ref_stack_chk_guard\0"
	"schedule\0"
	"schedule_timeout\0"
	"ieee80211_sta_uapsd_trigger\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"debugfs_create_devm_seqfile\0"
	"queue_delayed_work_on\0"
	"_raw_spin_unlock_bh\0"
	"__napi_schedule\0"
	"__alloc_skb\0"
	"idr_get_next\0"
	"numa_node\0"
	"pci_disable_link_state\0"
	"_dev_info\0"
	"page_pool_ethtool_stats_get_count\0"
	"skb_queue_tail\0"
	"__ubsan_handle_out_of_bounds\0"
	"ieee80211_stop_tx_ba_cb_irqsafe\0"
	"page_offset_base\0"
	"page_pool_ethtool_stats_get\0"
	"acpi_get_handle\0"
	"dev_set_threaded\0"
	"hugetlb_optimize_vmemmap_key\0"
	"idr_remove\0"
	"wiphy_to_ieee80211_hw\0"
	"debugfs_attr_read\0"
	"__dma_sync_single_for_cpu\0"
	"init_wait_entry\0"
	"ieee80211_queue_delayed_work\0"
	"devm_kmemdup\0"
	"devm_kfree\0"
	"_dev_err\0"
	"skb_pull\0"
	"debugfs_create_file_unsafe\0"
	"idr_alloc\0"
	"simple_attr_release\0"
	"ieee80211_calc_rx_airtime\0"
	"__rcu_read_unlock\0"
	"__SCK__tp_func_dev_irq\0"
	"mod_timer\0"
	"ieee80211_find_sta_by_ifaddr\0"
	"ieee80211_next_txq\0"
	"random_kmalloc_seed\0"
	"destroy_workqueue\0"
	"ieee80211_remain_on_channel_expired\0"
	"pcie_capability_clear_and_set_word_locked\0"
	"mutex_lock\0"
	"skb_push\0"
	"napi_enable\0"
	"ieee80211_beacon_cntdwn_is_complete\0"
	"seq_putc\0"
	"const_current_task\0"
	"mutex_is_locked\0"
	"__tasklet_schedule\0"
	"__x86_indirect_thunk_r13\0"
	"ieee80211_sta_pspoll\0"
	"ieee80211_wake_queues\0"
	"__ioread32_copy\0"
	"phys_base\0"
	"ieee80211_beacon_get_template\0"
	"page_pool_put_unrefed_netmem\0"
	"__cpu_online_mask\0"
	"memcmp\0"
	"ieee80211_iter_keys_rcu\0"
	"__local_bh_enable_ip\0"
	"kthread_stop\0"
	"ieee80211_free_txskb\0"
	"led_classdev_register_ext\0"
	"dev_coredumpv\0"
	"__mutex_init\0"
	"ieee80211_alloc_hw_nm\0"
	"__fortify_panic\0"
	"jiffies_to_msecs\0"
	"_raw_spin_unlock_irqrestore\0"
	"_ctype\0"
	"idr_destroy\0"
	"ieee80211_tx_dequeue\0"
	"cancel_delayed_work\0"
	"ieee80211_rx_list\0"
	"page_pool_create\0"
	"ieee80211_freq_khz_to_channel\0"
	"devm_hwmon_device_register_with_groups\0"
	"memset\0"
	"__x86_indirect_thunk_r10\0"
	"rfc1042_header\0"
	"__x86_return_thunk\0"
	"debugfs_create_u32\0"
	"__init_waitqueue_head\0"
	"__pskb_pull_tail\0"
	"ieee80211_ready_on_channel\0"
	"ieee80211_stop_queues\0"
	"__netif_napi_del_locked\0"
	"jiffies\0"
	"kthread_create_on_node\0"
	"devm_kasprintf\0"
	"__tracepoint_dev_irq\0"
	"seq_read\0"
	"sprintf\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"cpu_number\0"
	"__preempt_count\0"
	"kvfree_call_rcu\0"
	"gro_receive_skb\0"
	"__SCT__tp_func_dev_irq\0"
	"ieee80211_sched_scan_results\0"
	"ieee80211_scan_completed\0"
	"ieee80211_iterate_active_interfaces_atomic\0"
	"mutex_unlock\0"
	"cancel_delayed_work_sync\0"
	"param_ops_bool\0"
	"__dma_sync_single_for_device\0"
	"__const_udelay\0"
	"acpi_evaluate_object\0"
	"ieee80211_unregister_hw\0"
	"__x86_indirect_thunk_rcx\0"
	"napi_build_skb\0"
	"seq_write\0"
	"__folio_put\0"
	"__kmalloc_cache_noprof\0"
	"radix_tree_tagged\0"
	"vzalloc_noprof\0"
	"cancel_work_sync\0"
	"__warn_printk\0"
	"seq_printf\0"
	"__x86_indirect_thunk_r9\0"
	"ieee80211_channel_to_freq_khz\0"
	"delayed_work_timer_fn\0"
	"_raw_spin_lock_bh\0"
	"debugfs_create_file_full\0"
	"__SCT__cond_resched\0"
	"single_release\0"
	"timer_init_key\0"
	"get_random_bytes\0"
	"skb_add_rx_frag_netmem\0"
	"ieee80211_queue_work\0"
	"alloc_workqueue_noprof\0"
	"napi_schedule_prep\0"
	"napi_consume_skb\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"bridge_tunnel_header\0"
	"ieee80211_sta_ps_transition\0"
	"dev_kfree_skb_any_reason\0"
	"__SCT__preempt_schedule_notrace\0"
	"debugfs_create_u8\0"
	"single_open\0"
	"debugfs_create_dir\0"
	"_raw_spin_unlock\0"
	"__x86_indirect_thunk_r8\0"
	"msleep\0"
	"ktime_get_with_offset\0"
	"ieee80211_disconnect\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"ieee80211_csa_finish\0"
	"system_wq\0"
	"synchronize_net\0"
	"module_layout\0"
;

MODULE_INFO(depends, "mac80211,cfg80211,mt76");


MODULE_INFO(srcversion, "0C5D2F5E19A54E61B020632");
