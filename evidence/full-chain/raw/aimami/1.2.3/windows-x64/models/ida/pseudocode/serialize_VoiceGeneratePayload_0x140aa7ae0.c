// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceGeneratePayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_7(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int16 v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aa7aea*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x140aa7aed*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aa7af4*/
  {
    v6 = a2; /*0x140aa7c50*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aa7c56*/
    a2 = v6; /*0x140aa7c5b*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aa7c5e*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aa7afe*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aa7b05*/
  v9 = 256; /*0x140aa7b09*/
  v10 = a2; /*0x140aa7b10*/
  result = sub_14045E240(&v9, aOutput_2, 6, a1 + 440, v7); /*0x140aa7b2e*/
  if ( !result ) /*0x140aa7b36*/
  {
    if ( (_BYTE)v9 ) /*0x140aa7b45*/
      return sub_1416BF0E0(); /*0x140aa7b45*/
    result = sub_1404604F0(&v9, aHistoryentry, 12, a1); /*0x140aa7b68*/
    if ( result ) /*0x140aa7b70*/
      return result; /*0x140aa7b70*/
    if ( (_BYTE)v9 ) /*0x140aa7b77*/
      return sub_1416BF0E0(); /*0x140aa7b77*/
    result = sub_140462C30(&v9, aWorkspace, 9, a1 + 464); /*0x140aa7b92*/
    if ( result ) /*0x140aa7b9a*/
      return result; /*0x140aa7b9a*/
    if ( (_BYTE)v9 ) /*0x140aa7ba1*/
      return sub_1416BF0E0(); /*0x140aa7ba1*/
    result = sub_14045E240(&v9, aProcessingstat, 16, a1 + 592, v8); /*0x140aa7bbc*/
    if ( result ) /*0x140aa7bc4*/
      return result; /*0x140aa7bc4*/
    if ( (_BYTE)v9 ) /*0x140aa7bcf*/
      return sub_1416BF0E0(); /*0x140aa7b4e*/
    result = sub_14045AE20(&v9, aProcessingerro, 15, a1 + 616); /*0x140aa7bf1*/
    if ( !result ) /*0x140aa7bf9*/
    {
      result = 0; /*0x140aa7bff*/
      if ( (v9 & 1) == 0 ) /*0x140aa7c06*/
      {
        if ( HIBYTE(v9) ) /*0x140aa7c11*/
        {
          sub_140301CD0(*v10, asc_1417AE501, 1); /*0x140aa7c2c*/
          return 0; /*0x140aa7c31*/
        }
      }
    }
  }
  return result; /*0x140aa7b38*/
}