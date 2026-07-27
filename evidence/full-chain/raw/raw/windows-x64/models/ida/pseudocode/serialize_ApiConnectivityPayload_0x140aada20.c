// win 1.2.3 | = mac codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiConnectivityPayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall serialize_14(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int16 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+38h] [rbp-20h]

  v3 = *a2; /*0x140aada2a*/
  v4 = *(_QWORD *)(*a2 + 16); /*0x140aada2d*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x140aada34*/
  {
    v8 = a2; /*0x140aadafb*/
    sub_141688D30(v3, v4, 1, 1, 1); /*0x140aadb01*/
    a2 = v8; /*0x140aadb06*/
    v4 = *(_QWORD *)(v3 + 16); /*0x140aadb09*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x140aada3e*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x140aada45*/
  v9 = 256; /*0x140aada49*/
  v10 = a2; /*0x140aada50*/
  result = sub_1404625F0(&v9, aUsagestatus_0, 11, a1 + 24); /*0x140aada6b*/
  if ( !result ) /*0x140aada73*/
  {
    if ( (_BYTE)v9 == 1 ) /*0x140aada82*/
    {
      return sub_1416BF0E0(); /*0x140aada8b*/
    }
    else
    {
      result = sub_14045AE20(&v9, aUsagelasterror_0, 14, a1); /*0x140aadaa5*/
      if ( !result ) /*0x140aadaad*/
      {
        result = 0; /*0x140aadaaf*/
        if ( (v9 & 1) == 0 ) /*0x140aadab6*/
        {
          if ( HIBYTE(v9) ) /*0x140aadabd*/
          {
            v6 = *v10; /*0x140aadac4*/
            v7 = *(_QWORD *)(*v10 + 16); /*0x140aadac7*/
            if ( *(_QWORD *)*v10 == v7 ) /*0x140aadace*/
            {
              sub_141688D30(v6, v7, 1, 1, 1); /*0x140aadb2a*/
              v7 = *(_QWORD *)(v6 + 16); /*0x140aadb2f*/
            }
            *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 125; /*0x140aadad4*/
            *(_QWORD *)(v6 + 16) = v7 + 1; /*0x140aadadb*/
            return 0; /*0x140aadadf*/
          }
        }
      }
    }
  }
  return result; /*0x140aada75*/
}