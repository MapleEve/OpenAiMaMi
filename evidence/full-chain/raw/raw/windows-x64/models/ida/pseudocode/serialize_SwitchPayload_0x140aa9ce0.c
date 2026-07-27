// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SwitchPayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_11(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int16 v8; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aa9cea*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x140aa9ced*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aa9cf4*/
  {
    v6 = a2; /*0x140aa9e50*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aa9e56*/
    a2 = v6; /*0x140aa9e5b*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aa9e5e*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aa9cfe*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aa9d05*/
  v8 = 256; /*0x140aa9d09*/
  v9 = a2; /*0x140aa9d10*/
  result = sub_14045AE20( /*0x140aa9d2e*/
             &v8,
             "previousAccountKeyactiveAccountauthUpdatedregistryUpdatedremovedAccountKeysremovedCountauthRemovedauthBacke"
             "dUpauthBackupsRemovedregistryBackupsRemovedstaleEntriesRemovedkilledCountprocessesosarchhasActiveAccountlat"
             "estRolloutFoundlatestRolloutTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureAcco"
             "untpathscoreVersionplatformregistryStatesessionStateapiState",
             18,
             a1 + 376);
  if ( !result ) /*0x140aa9d36*/
  {
    if ( (_BYTE)v8 ) /*0x140aa9d45*/
      return sub_1416BF0E0(); /*0x140aa9d45*/
    result = sub_14045E240(&v8, aActiveaccountk_2, 16, a1 + 352, v7); /*0x140aa9d6c*/
    if ( result ) /*0x140aa9d74*/
      return result; /*0x140aa9d74*/
    if ( (_BYTE)v8 ) /*0x140aa9d7b*/
      return sub_1416BF0E0(); /*0x140aa9d7b*/
    result = sub_14045F7B0( /*0x140aa9d92*/
               &v8,
               "activeAccountauthUpdatedregistryUpdatedremovedAccountKeysremovedCountauthRemovedauthBackedUpauthBackupsRe"
               "movedregistryBackupsRemovedstaleEntriesRemovedkilledCountprocessesosarchhasActiveAccountlatestRolloutFoun"
               "dlatestRolloutTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureAccountpathscore"
               "VersionplatformregistryStatesessionStateapiState",
               13,
               a1);
    if ( result ) /*0x140aa9d9a*/
      return result; /*0x140aa9d9a*/
    if ( (_BYTE)v8 ) /*0x140aa9da1*/
      return sub_1416BF0E0(); /*0x140aa9da1*/
    result = sub_140466A30( /*0x140aa9dbc*/
               &v8,
               "authUpdatedregistryUpdatedremovedAccountKeysremovedCountauthRemovedauthBackedUpauthBackupsRemovedregistry"
               "BackupsRemovedstaleEntriesRemovedkilledCountprocessesosarchhasActiveAccountlatestRolloutFoundlatestRollou"
               "tTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureAccountpathscoreVersionplatfo"
               "rmregistryStatesessionStateapiState",
               11,
               a1 + 400);
    if ( result ) /*0x140aa9dc4*/
      return result; /*0x140aa9dc4*/
    if ( (_BYTE)v8 ) /*0x140aa9dcf*/
      return sub_1416BF0E0(); /*0x140aa9d4e*/
    result = sub_140466A30( /*0x140aa9df1*/
               &v8,
               "registryUpdatedremovedAccountKeysremovedCountauthRemovedauthBackedUpauthBackupsRemovedregistryBackupsRemo"
               "vedstaleEntriesRemovedkilledCountprocessesosarchhasActiveAccountlatestRolloutFoundlatestRolloutTimestampu"
               "sageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureAccountpathscoreVersionplatformregistryS"
               "tatesessionStateapiState",
               15,
               a1 + 401);
    if ( !result ) /*0x140aa9df9*/
    {
      result = 0; /*0x140aa9dff*/
      if ( (v8 & 1) == 0 ) /*0x140aa9e06*/
      {
        if ( HIBYTE(v8) ) /*0x140aa9e11*/
        {
          sub_140301CD0(*v9, asc_1417AE501, 1); /*0x140aa9e2c*/
          return 0; /*0x140aa9e31*/
        }
      }
    }
  }
  return result; /*0x140aa9d38*/
}