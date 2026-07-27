// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportPayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int16 v7; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aa8b6a*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x140aa8b6d*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aa8b74*/
  {
    v6 = a2; /*0x140aa8cc4*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aa8cca*/
    a2 = v6; /*0x140aa8ccf*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aa8cd2*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aa8b7e*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aa8b85*/
  v7 = 256; /*0x140aa8b89*/
  v8 = a2; /*0x140aa8b90*/
  result = sub_140467220(&v7, aImportedcount, 13, a1 + 72); /*0x140aa8bab*/
  if ( !result ) /*0x140aa8bb3*/
  {
    if ( (_BYTE)v7 ) /*0x140aa8bc2*/
      return sub_1416BF0E0(); /*0x140aa8bc2*/
    result = sub_140457480(&v7, aImportedaccoun, 19, a1); /*0x140aa8be5*/
    if ( result ) /*0x140aa8bed*/
      return result; /*0x140aa8bed*/
    if ( (_BYTE)v7 ) /*0x140aa8bf4*/
      return sub_1416BF0E0(); /*0x140aa8bf4*/
    result = sub_140458F00(&v7, aSkipped, 7, a1 + 24); /*0x140aa8c0c*/
    if ( result ) /*0x140aa8c14*/
      return result; /*0x140aa8c14*/
    if ( (_BYTE)v7 ) /*0x140aa8c1b*/
      return sub_1416BF0E0(); /*0x140aa8c1b*/
    result = sub_140467220(&v7, aRegistryaccoun, 20, a1 + 76); /*0x140aa8c33*/
    if ( result ) /*0x140aa8c3b*/
      return result; /*0x140aa8c3b*/
    if ( (_BYTE)v7 ) /*0x140aa8c46*/
      return sub_1416BF0E0(); /*0x140aa8bcb*/
    result = sub_14045AE20(&v7, aActiveaccountk_2, 16, a1 + 48); /*0x140aa8c65*/
    if ( !result ) /*0x140aa8c6d*/
    {
      result = 0; /*0x140aa8c73*/
      if ( (v7 & 1) == 0 ) /*0x140aa8c7a*/
      {
        if ( HIBYTE(v7) ) /*0x140aa8c85*/
        {
          sub_140301CD0(*v8, asc_1417AE501, 1); /*0x140aa8ca0*/
          return 0; /*0x140aa8ca5*/
        }
      }
    }
  }
  return result; /*0x140aa8bb5*/
}