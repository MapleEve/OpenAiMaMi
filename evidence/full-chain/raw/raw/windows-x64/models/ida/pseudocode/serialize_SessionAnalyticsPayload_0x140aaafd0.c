// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionAnalyticsPayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_13(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int16 v7; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aaafda*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x140aaafdd*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aaafe4*/
  {
    v6 = a2; /*0x140aab102*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aab108*/
    a2 = v6; /*0x140aab10d*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aab110*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aaafee*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aaaff5*/
  v7 = 256; /*0x140aaaff9*/
  v8 = a2; /*0x140aab000*/
  result = sub_140467220(&v7, aTotalsessions_0, 13, a1 + 32); /*0x140aab01b*/
  if ( !result ) /*0x140aab023*/
  {
    if ( (_BYTE)v7 ) /*0x140aab032*/
      return sub_1416BF0E0(); /*0x140aab032*/
    result = sub_140466BE0(&v7, aAvgturns, 8, a1 + 24); /*0x140aab056*/
    if ( result ) /*0x140aab05e*/
      return result; /*0x140aab05e*/
    if ( (_BYTE)v7 ) /*0x140aab065*/
      return sub_1416BF0E0(); /*0x140aab065*/
    result = sub_140467220(&v7, aActivedays_0, 10, a1 + 36); /*0x140aab07d*/
    if ( result ) /*0x140aab085*/
      return result; /*0x140aab085*/
    if ( (_BYTE)v7 ) /*0x140aab08c*/
      return sub_1416BF0E0(); /*0x140aab03b*/
    result = sub_140458680(&v7, aSeries, 6, a1); /*0x140aab0a3*/
    if ( !result ) /*0x140aab0ab*/
    {
      result = 0; /*0x140aab0b1*/
      if ( (v7 & 1) == 0 ) /*0x140aab0b8*/
      {
        if ( HIBYTE(v7) ) /*0x140aab0c3*/
        {
          sub_140301CD0(*v8, asc_1417AE501, 1); /*0x140aab0de*/
          return 0; /*0x140aab0e3*/
        }
      }
    }
  }
  return result; /*0x140aab025*/
}