// win 1.2.1 | module src/core/relay/keychain.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::keychain::cleanup_legacy_provider_key | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall cleanup_legacy_provider_key(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h] BYREF
  const char *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  const char *v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  const char *v17; // [rsp+80h] [rbp+0h]
  __int64 v18; // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+90h] [rbp+10h]
  void *v20; // [rsp+98h] [rbp+18h]
  _QWORD *v21; // [rsp+A0h] [rbp+20h]
  __int128 v22; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+38h]
  __int128 v24; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+50h]
  __int64 v26; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+68h]
  char v28; // [rsp+F7h] [rbp+77h] BYREF
  __int64 v29; // [rsp+F8h] [rbp+78h]

  v29 = -2; /*0x1404db6c5*/
  v4 = a4; /*0x1404db6cd*/
  v5 = a3; /*0x1404db6d0*/
  v26 = a3; /*0x1404db6d9*/
  v27 = a4; /*0x1404db6dd*/
  result = sub_1404DB890(a3, a4, a3, a4); /*0x1404db6e7*/
  if ( (_BYTE)result ) /*0x1404db6ee*/
  {
    if ( (unsigned __int8)sub_1404DB990(v5, v4) ) /*0x1404db6fa*/
    {
      sub_1404D9E90((unsigned int)&v22, a1, a2, v5, v4); /*0x1404db719*/
      if ( (_QWORD)v22 != -1 ) /*0x1404db723*/
      {
        v25 = v23; /*0x1404db72d*/
        v24 = v22; /*0x1404db735*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404db747*/
        {
          v9[0] = &v26; /*0x1404db751*/
          v9[1] = sub_14041F680; /*0x1404db75c*/
          v9[2] = &v24; /*0x1404db764*/
          v9[3] = sub_1400015F0; /*0x1404db76f*/
          v10 = 0; /*0x1404db773*/
          v11 = aCodexmateLibCo_23; /*0x1404db782*/
          v12 = 36; /*0x1404db786*/
          v13 = 0; /*0x1404db78e*/
          v14 = aSrcCoreRelayKe; /*0x1404db79d*/
          v15 = 26; /*0x1404db7a1*/
          v16 = 2; /*0x1404db7a9*/
          v17 = aCodexmateLibCo_23; /*0x1404db7b1*/
          v18 = 36; /*0x1404db7b5*/
          v19 = 0x7F00000001LL; /*0x1404db7c7*/
          v20 = &unk_14175E03E; /*0x1404db7d2*/
          v21 = v9; /*0x1404db7da*/
          sub_1412C36A0(&v28, &v10); /*0x1404db7e6*/
        }
        if ( (_QWORD)v24 ) /*0x1404db7f3*/
          sub_140001660(*((_QWORD *)&v24 + 1), v24, 1); /*0x1404db7ff*/
        v5 = v26; /*0x1404db804*/
        v4 = v27; /*0x1404db808*/
      }
    }
    result = sub_1404DA3F0(&v10, v5, v4); /*0x1404db816*/
    if ( v10 != -1 ) /*0x1404db823*/
    {
      if ( v10 ) /*0x1404db828*/
        return sub_140001660(v11, v10, 1); /*0x1404db834*/
    }
  }
  return result; /*0x1404db83a*/
}