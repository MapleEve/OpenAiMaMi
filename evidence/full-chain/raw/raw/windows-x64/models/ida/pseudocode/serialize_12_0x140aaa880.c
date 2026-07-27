// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnoseSessionState$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_12(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int16 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aaa88a*/
  v4 = *(_QWORD *)(*a2 + 16); /*0x140aaa88d*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aaa894*/
  {
    v8 = a2; /*0x140aaa95b*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aaa961*/
    a2 = v8; /*0x140aaa966*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aaa969*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aaa89e*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aaa8a5*/
  v9 = 256; /*0x140aaa8a9*/
  v10 = a2; /*0x140aaa8b0*/
  result = sub_140466A30( /*0x140aaa8cb*/
             &v9,
             "latestRolloutFoundlatestRolloutTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureA"
             "ccountpathscoreVersionplatformregistryStatesessionStateapiState",
             18,
             a1 + 16);
  if ( !result ) /*0x140aaa8d3*/
  {
    if ( (_BYTE)v9 == 1 ) /*0x140aaa8e2*/
    {
      return sub_1416BF0E0(); /*0x140aaa8eb*/
    }
    else
    {
      result = sub_14045CE10( /*0x140aaa905*/
                 &v9,
                 "latestRolloutTimestampusageAttemptCountusageSuccessCountlastUsageFailurelastUsageFailureAccountpathscor"
                 "eVersionplatformregistryStatesessionStateapiState",
                 22,
                 a1);
      if ( !result ) /*0x140aaa90d*/
      {
        result = 0; /*0x140aaa90f*/
        if ( (v9 & 1) == 0 ) /*0x140aaa916*/
        {
          if ( HIBYTE(v9) ) /*0x140aaa91d*/
          {
            v6 = *v10; /*0x140aaa924*/
            v7 = *(_QWORD *)(*v10 + 16); /*0x140aaa927*/
            if ( *(_QWORD *)*v10 == v7 ) /*0x140aaa92e*/
            {
              sub_141688D30(v6, v7, 1, 1, 1); /*0x140aaa98a*/
              v7 = *(_QWORD *)(v6 + 16); /*0x140aaa98f*/
            }
            *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 125; /*0x140aaa934*/
            *(_QWORD *)(v6 + 16) = v7 + 1; /*0x140aaa93b*/
            return 0; /*0x140aaa93f*/
          }
        }
      }
    }
  }
  return result; /*0x140aaa8d5*/
}