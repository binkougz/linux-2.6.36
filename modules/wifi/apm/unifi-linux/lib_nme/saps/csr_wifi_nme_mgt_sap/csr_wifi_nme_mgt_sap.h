/* This is an autogenerated file */
/* Tag: noCheckHeader */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2009. All rights reserved. */
/* */
/*   Refer to LICENSE.txt included with this source for details on the */
/*   license terms. */

#ifndef __CSR_WIFI_NME_MGT_SAP_H__
#define __CSR_WIFI_NME_MGT_SAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/* ------------------------------------------ */
extern void unifi_nme_mgt_association_complete_ind(FsmContext* context,
                                                   CsrUint16 appHandlesCount,
                                                   void* *appHandles,
                                                   unifi_Status status,
                                                   const unifi_ConnectionInfo *connectionInfo,
                                                   unifi_IEEE80211Reason deauthReason);

extern void unifi_nme_mgt_association_start_ind(FsmContext* context,
                                                CsrUint16 appHandlesCount,
                                                void* *appHandles,
                                                const unifi_MACAddress *address,
                                                const unifi_SSID *ssid);

extern void unifi_nme_mgt_blacklist_cfm(FsmContext* context,
                                        void* appHandle,
                                        unifi_Status status,
                                        unifi_ListAction action,
                                        CsrUint8 getAddressCount,
                                        const unifi_MACAddress *getAddresses);

extern void unifi_nme_mgt_connect_cfm(FsmContext* context,
                                      void* appHandle,
                                      unifi_Status status);

extern void unifi_nme_mgt_connection_quality_ind(FsmContext* context,
                                                 CsrUint16 appHandlesCount,
                                                 void* *appHandles,
                                                 const unifi_LinkQuality *linkQuality);

extern void unifi_nme_mgt_disconnect_cfm(FsmContext* context,
                                         void* appHandle,
                                         unifi_Status status);

extern void unifi_nme_mgt_event_mask_set_cfm(FsmContext* context,
                                             void* appHandle,
                                             unifi_Status status);

extern void unifi_nme_mgt_get_value_cfm(FsmContext* context,
                                        void* appHandle,
                                        unifi_Status status,
                                        const unifi_AppValue *appValue);

extern void unifi_nme_mgt_ibss_station_ind(FsmContext* context,
                                           CsrUint16 appHandlesCount,
                                           void* *appHandles,
                                           const unifi_MACAddress *address,
                                           CsrBool isconnected);

extern void unifi_nme_mgt_key_cfm(FsmContext* context,
                                  void* appHandle,
                                  unifi_Status status,
                                  unifi_ListAction action);

extern void unifi_nme_mgt_media_status_ind(FsmContext* context,
                                           CsrUint16 appHandlesCount,
                                           void* *appHandles,
                                           unifi_MediaStatus mediaStatus,
                                           const unifi_ConnectionInfo *connectionInfo,
                                           unifi_IEEE80211Reason disassocReason,
                                           unifi_IEEE80211Reason deauthReason);

extern void unifi_nme_mgt_mib_get_cfm(FsmContext* context,
                                      void* appHandle,
                                      unifi_Status status,
                                      CsrUint16 mibAttributeLength,
                                      const CsrUint8 *mibAttribute);

extern void unifi_nme_mgt_mib_get_next_cfm(FsmContext* context,
                                           void* appHandle,
                                           unifi_Status status,
                                           CsrUint16 mibAttributeLength,
                                           const CsrUint8 *mibAttribute);

extern void unifi_nme_mgt_mib_set_cfm(FsmContext* context,
                                      void* appHandle,
                                      unifi_Status status);

extern void unifi_nme_mgt_mic_failure_ind(FsmContext* context,
                                          CsrUint16 appHandlesCount,
                                          void* *appHandles,
                                          CsrBool secondFailure,
                                          CsrUint16 count,
                                          const unifi_MACAddress *address,
                                          unifi_KeyType keyType,
                                          CsrUint16 keyId,
                                          const CsrUint16 *tsc);

extern void unifi_nme_mgt_multicast_address_cfm(FsmContext* context,
                                                void* appHandle,
                                                unifi_Status status,
                                                unifi_ListAction action,
                                                CsrUint8 getAddressesCount,
                                                const unifi_MACAddress *getAddresses);

extern void unifi_nme_mgt_packet_filter_set_cfm(FsmContext* context,
                                                void* appHandle,
                                                unifi_Status status);

extern void unifi_nme_mgt_pmkid_cfm(FsmContext* context,
                                    void* appHandle,
                                    unifi_Status status,
                                    unifi_ListAction action,
                                    CsrUint8 getPmkidsCount,
                                    const unifi_Pmkid *getPmkids);

extern void unifi_nme_mgt_pmkid_candidate_list_ind(FsmContext* context,
                                                   CsrUint16 appHandlesCount,
                                                   void* *appHandles,
                                                   CsrUint8 pmkidCandidatesCount,
                                                   const unifi_PmkidCandidate *pmkidCandidates);

extern void unifi_nme_mgt_restricted_access_disable_cfm(FsmContext* context,
                                                        void* appHandle,
                                                        unifi_Status status);

extern void unifi_nme_mgt_restricted_access_enable_cfm(FsmContext* context,
                                                       void* appHandle,
                                                       unifi_Status status);

extern void unifi_nme_mgt_roam_complete_ind(FsmContext* context,
                                            CsrUint16 appHandlesCount,
                                            void* *appHandles,
                                            unifi_Status status);

extern void unifi_nme_mgt_roam_start_ind(FsmContext* context,
                                         CsrUint16 appHandlesCount,
                                         void* *appHandles,
                                         unifi_RoamReason roamReason,
                                         unifi_IEEE80211Reason reason80211);

extern void unifi_nme_mgt_scan_full_cfm(FsmContext* context,
                                        void* appHandle,
                                        unifi_Status status);

extern void unifi_nme_mgt_scan_result_ind(FsmContext* context,
                                          CsrUint16 appHandlesCount,
                                          void* *appHandles,
                                          const unifi_ScanResult *result);

extern void unifi_nme_mgt_scan_results_flush_cfm(FsmContext* context,
                                                 void* appHandle,
                                                 unifi_Status status);

extern void unifi_nme_mgt_scan_results_get_cfm(FsmContext* context,
                                               void* appHandle,
                                               unifi_Status status,
                                               CsrUint16 scanResultsCount,
                                               const unifi_ScanResult *scanResults);

extern void unifi_nme_mgt_set_value_cfm(FsmContext* context,
                                        void* appHandle,
                                        unifi_Status status,
                                        unifi_AppValueId appValueId);

extern void unifi_nme_mgt_tspec_ind(FsmContext* context,
                                    CsrUint16 appHandlesCount,
                                    void* *appHandles,
                                    CsrUint32 transactionId,
                                    unifi_TspecResultCode tspecResultCode,
                                    CsrUint16 tspecLength,
                                    const CsrUint8 *tspec);

extern void unifi_nme_mgt_tspec_cfm(FsmContext* context,
                                    void* appHandle,
                                    unifi_Status status,
                                    CsrUint32 transactionId,
                                    unifi_TspecResultCode tspecResultCode,
                                    CsrUint16 tspecLength,
                                    const CsrUint8 *tspec);

extern void unifi_nme_mgt_wifi_flightmode_cfm(FsmContext* context,
                                              void* appHandle,
                                              unifi_Status status);

extern void unifi_nme_mgt_wifi_off_ind(FsmContext* context,
                                       CsrUint16 appHandlesCount,
                                       void* *appHandles,
                                       unifi_ControlIndication controlIndication);

extern void unifi_nme_mgt_wifi_off_cfm(FsmContext* context,
                                       void* appHandle,
                                       unifi_Status status);

extern void unifi_nme_mgt_wifi_on_cfm(FsmContext* context,
                                      void* appHandle,
                                      unifi_Status status);


/* ------------------------------------------ */
extern void unifi_nme_mgt_blacklist_req(void* context,
                                        void* appHandle,
                                        unifi_ListAction action,
                                        CsrUint8 setAddressCount,
                                        const unifi_MACAddress *setAddresses);

extern void unifi_nme_mgt_connect_req(void* context,
                                      void* appHandle,
                                      const unifi_ConnectionConfig *connectionConfig);

extern void unifi_nme_mgt_disconnect_req(void* context,
                                         void* appHandle);

extern void unifi_nme_mgt_event_mask_set_req(void* context,
                                             void* appHandle,
                                             CsrUint32 indMask);

extern void unifi_nme_mgt_get_value_req(void* context,
                                        void* appHandle,
                                        unifi_AppValueId appValueId);

extern void unifi_nme_mgt_key_req(void* context,
                                  void* appHandle,
                                  unifi_ListAction action,
                                  const unifi_Key *key);

extern void unifi_nme_mgt_mib_get_req(void* context,
                                      void* appHandle,
                                      CsrUint16 mibAttributeLength,
                                      const CsrUint8 *mibAttribute);

extern void unifi_nme_mgt_mib_get_next_req(void* context,
                                           void* appHandle,
                                           CsrUint16 mibAttributeLength,
                                           const CsrUint8 *mibAttribute);

extern void unifi_nme_mgt_mib_set_req(void* context,
                                      void* appHandle,
                                      CsrUint16 mibAttributeLength,
                                      const CsrUint8 *mibAttribute);

extern void unifi_nme_mgt_multicast_address_req(void* context,
                                                void* appHandle,
                                                unifi_ListAction action,
                                                CsrUint8 setAddressesCount,
                                                const unifi_MACAddress *setAddresses);

extern void unifi_nme_mgt_packet_filter_set_req(void* context,
                                                void* appHandle,
                                                CsrUint16 filterLength,
                                                const CsrUint8 *filter,
                                                unifi_PacketFilterMode mode,
                                                const unifi_IPV4Address *arpFilterAddress);

extern void unifi_nme_mgt_pmkid_req(void* context,
                                    void* appHandle,
                                    unifi_ListAction action,
                                    CsrUint8 setPmkidsCount,
                                    const unifi_Pmkid *setPmkids);

extern void unifi_nme_mgt_restricted_access_disable_req(void* context,
                                                        void* appHandle);

extern void unifi_nme_mgt_restricted_access_enable_req(void* context,
                                                       void* appHandle);

extern void unifi_nme_mgt_scan_full_req(void* context,
                                        void* appHandle,
                                        CsrUint8 ssidCount,
                                        const unifi_SSID *ssid,
                                        const unifi_MACAddress *bssid,
                                        CsrBool forceScan,
                                        unifi_BSSType bssType,
                                        unifi_ScanType scanType,
                                        CsrUint16 channelListCount,
                                        const CsrUint8 *channelList,
                                        CsrUint16 probeIeLength,
                                        const CsrUint8 *probeIe);

extern void unifi_nme_mgt_scan_results_flush_req(void* context,
                                                 void* appHandle);

extern void unifi_nme_mgt_scan_results_get_req(void* context,
                                               void* appHandle);

extern void unifi_nme_mgt_set_value_req(void* context,
                                        void* appHandle,
                                        const unifi_AppValue *appValue);

extern void unifi_nme_mgt_tspec_req(void* context,
                                    void* appHandle,
                                    unifi_ListAction action,
                                    CsrUint32 transactionId,
                                    CsrBool strict,
                                    CsrUint8 ctrlMask,
                                    CsrUint16 tspecLength,
                                    const CsrUint8 *tspec,
                                    CsrUint16 tclasLength,
                                    const CsrUint8 *tclas);

extern void unifi_nme_mgt_wifi_flightmode_req(void* context,
                                              void* appHandle,
                                              const unifi_MACAddress *address,
                                              CsrUint16 mibFilesCount,
                                              const unifi_DataBlock *mibFiles);

extern void unifi_nme_mgt_wifi_off_req(void* context,
                                       void* appHandle);

extern void unifi_nme_mgt_wifi_on_req(void* context,
                                      void* appHandle,
                                      const unifi_MACAddress *address,
                                      CsrUint16 mibFilesCount,
                                      const unifi_DataBlock *mibFiles);




#ifdef __cplusplus
}
#endif

#endif /* __CSR_WIFI_NME_MGT_SAP_H__ */
