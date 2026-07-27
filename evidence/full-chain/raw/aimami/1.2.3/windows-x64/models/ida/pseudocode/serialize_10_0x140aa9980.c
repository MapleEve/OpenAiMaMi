// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillRemovePayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_10(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int16 v8; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aa998a*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x140aa998d*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aa9994*/
  {
    v6 = a2; /*0x140aa9a85*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aa9a8b*/
    a2 = v6; /*0x140aa9a90*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aa9a93*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aa999e*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aa99a5*/
  v8 = 256; /*0x140aa99a9*/
  v9 = a2; /*0x140aa99b0*/
  result = sub_14045E240( /*0x140aa99ca*/
             &v8,
             "removedSkillIDremainingInstalledCountrestoredSkillrollbackBackupdeletedBackupIDremainingBackupCountprevious"
             "AccountKeyactiveAccountauthUpdatedregistryUpdatedremovedAccountKeysremovedCountauthRemovedauthBackedUpauthB"
             "ackupsRemovedregistryBackupsRemovedstaleEntriesRemovedkilledCountprocessesosarchhasActiveAccountlatestRollo"
             "utFoundlatestRolloutTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureAccountpaths"
             "coreVersionplatformregistryStatesessionStateapiState",
             14,
             a1,
             v7);
  if ( !result ) /*0x140aa99d2*/
  {
    if ( (_BYTE)v8 ) /*0x140aa99e1*/
      return sub_1416BF0E0(); /*0x140aa99e1*/
    result = sub_140460B70( /*0x140aa9a05*/
               &v8,
               "backupremovedSkillIDremainingInstalledCountrestoredSkillrollbackBackupdeletedBackupIDremainingBackupCount"
               "previousAccountKeyactiveAccountauthUpdatedregistryUpdatedremovedAccountKeysremovedCountauthRemovedauthBac"
               "kedUpauthBackupsRemovedregistryBackupsRemovedstaleEntriesRemovedkilledCountprocessesosarchhasActiveAccoun"
               "tlatestRolloutFoundlatestRolloutTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailu"
               "reAccountpathscoreVersionplatformregistryStatesessionStateapiState",
               6,
               a1 + 24);
    if ( result ) /*0x140aa9a0d*/
      return result; /*0x140aa9a0d*/
    if ( (_BYTE)v8 ) /*0x140aa9a14*/
      return sub_1416BF0E0(); /*0x140aa99ea*/
    result = sub_140467220( /*0x140aa9a32*/
               &v8,
               "remainingInstalledCountrestoredSkillrollbackBackupdeletedBackupIDremainingBackupCountpreviousAccountKeyac"
               "tiveAccountauthUpdatedregistryUpdatedremovedAccountKeysremovedCountauthRemovedauthBackedUpauthBackupsRemo"
               "vedregistryBackupsRemovedstaleEntriesRemovedkilledCountprocessesosarchhasActiveAccountlatestRolloutFoundl"
               "atestRolloutTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureAccountpathscoreVe"
               "rsionplatformregistryStatesessionStateapiState",
               23,
               a1 + 176);
    if ( !result ) /*0x140aa9a3a*/
    {
      result = 0; /*0x140aa9a3c*/
      if ( (v8 & 1) == 0 ) /*0x140aa9a43*/
      {
        if ( HIBYTE(v8) ) /*0x140aa9a4a*/
        {
          sub_140301CD0(*v9, asc_1417AE501, 1); /*0x140aa9a61*/
          return 0; /*0x140aa9a66*/
        }
      }
    }
  }
  return result; /*0x140aa99d4*/
}