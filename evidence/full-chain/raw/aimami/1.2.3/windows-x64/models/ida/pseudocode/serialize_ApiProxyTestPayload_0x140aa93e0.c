// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyTestPayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_9(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int16 v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aa93ea*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x140aa93ed*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aa93f4*/
  {
    v6 = a2; /*0x140aa9515*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aa951b*/
    a2 = v6; /*0x140aa9520*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aa9523*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aa93fe*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aa9405*/
  v9 = 256; /*0x140aa9409*/
  v10 = a2; /*0x140aa9410*/
  result = sub_14045E240(&v9, aCode_8, 4, a1, v7); /*0x140aa942a*/
  if ( !result ) /*0x140aa9432*/
  {
    if ( (_BYTE)v9 ) /*0x140aa9441*/
      return sub_1416BF0E0(); /*0x140aa9441*/
    result = sub_140466A30(&v9, &qword_1417AC98E, 9, a1 + 56); /*0x140aa9465*/
    if ( result ) /*0x140aa946d*/
      return result; /*0x140aa946d*/
    if ( (_BYTE)v9 ) /*0x140aa9474*/
      return sub_1416BF0E0(); /*0x140aa9474*/
    result = sub_14045CA20(&v9, aStatuscode, 10, a1 + 48); /*0x140aa948c*/
    if ( result ) /*0x140aa9494*/
      return result; /*0x140aa9494*/
    if ( (_BYTE)v9 ) /*0x140aa949b*/
      return sub_1416BF0E0(); /*0x140aa944a*/
    result = sub_14045E240(&v9, aMessage_3, 7, a1 + 24, v8); /*0x140aa94b6*/
    if ( !result ) /*0x140aa94be*/
    {
      result = 0; /*0x140aa94c4*/
      if ( (v9 & 1) == 0 ) /*0x140aa94cb*/
      {
        if ( HIBYTE(v9) ) /*0x140aa94d6*/
        {
          sub_140301CD0(*v10, asc_1417AE501, 1); /*0x140aa94f1*/
          return 0; /*0x140aa94f6*/
        }
      }
    }
  }
  return result; /*0x140aa9434*/
}