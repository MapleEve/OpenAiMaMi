// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::sanitize_body_for_official_upstream | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall sanitize_body_for_official_upstream(_BYTE *a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+28h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-50h]
  _QWORD v13[4]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h] BYREF
  const char *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  const char *v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+0h]
  __int64 v20; // [rsp+88h] [rbp+8h]
  const char *v21; // [rsp+90h] [rbp+10h]
  __int64 v22; // [rsp+98h] [rbp+18h]
  __int64 v23; // [rsp+A0h] [rbp+20h]
  void *v24; // [rsp+A8h] [rbp+28h]
  __int64 *v25; // [rsp+B0h] [rbp+30h]
  __int64 v26; // [rsp+B8h] [rbp+38h]
  __int64 v27; // [rsp+C0h] [rbp+40h]
  char v28; // [rsp+CFh] [rbp+4Fh] BYREF
  __int64 v29; // [rsp+D0h] [rbp+50h]

  v29 = -2; /*0x14066fb27*/
  if ( *a1 == 5 ) /*0x14066fb32*/
  {
    nullsub_1(a1); /*0x14066fb3b*/
    v2 = sub_140001650(5, 1); /*0x14066fb4a*/
    if ( !v2 ) /*0x14066fb52*/
      sub_1416C2D4B(1, 5); /*0x14066fd4a*/
    v3 = a1 + 8; /*0x14066fb58*/
    *(_BYTE *)(v2 + 4) = 101; /*0x14066fb5c*/
    *(_DWORD *)v2 = 1919906931; /*0x14066fb60*/
    v10 = 5; /*0x14066fb66*/
    v11 = (__int64 (__fastcall *)())v2; /*0x14066fb6e*/
    v12 = 5; /*0x14066fb72*/
    LOWORD(v14) = 1; /*0x14066fb7a*/
    sub_140307860(v13, v3, &v10, &v14); /*0x14066fb92*/
    if ( LOBYTE(v13[0]) != 0xFF ) /*0x14066fb9b*/
      sub_1400104F0(v13); /*0x14066fba1*/
    sub_1402B4580(&v14, v3, aPreviousRespon_0, 20); /*0x14066fbba*/
    if ( (_BYTE)v14 != 0xFF ) /*0x14066fbc3*/
    {
      if ( (_BYTE)v14 != 3 ) /*0x14066fbcd*/
        goto LABEL_17; /*0x14066fbcd*/
      v5 = v17; /*0x14066fbd3*/
      if ( v17 < 0 ) /*0x14066fbda*/
      {
        v6 = 0; /*0x14066fbdc*/
        goto LABEL_9; /*0x14066fbdc*/
      }
      if ( v17 ) /*0x14066fbec*/
      {
        v7 = v16; /*0x14066fbf2*/
        nullsub_1(v4); /*0x14066fbf6*/
        v6 = 1; /*0x14066fbfb*/
        v8 = sub_140001650(v5, 1); /*0x14066fc08*/
        if ( !v8 ) /*0x14066fc10*/
LABEL_9:
          sub_1416C2D4B(v6, v5); /*0x14066fbde*/
        v9 = v8; /*0x14066fc12*/
        sub_141684120(v8, v7, v5); /*0x14066fc1e*/
        sub_1400104F0(&v14); /*0x14066fc27*/
        if ( *(_QWORD *)off_141EC8D80 > 2u ) /*0x14066fc3a*/
        {
          v26 = v5; /*0x14066fc43*/
          v27 = v9; /*0x14066fc4a*/
          v14 = v9; /*0x14066fc4e*/
          v15 = (const char *)(v5 + v9); /*0x14066fc52*/
          v16 = 40; /*0x14066fc56*/
          sub_1408CD3D0(v13, &v14); /*0x14066fc69*/
          v10 = (__int64)v13; /*0x14066fc6f*/
          v11 = sub_1400015F0; /*0x14066fc7a*/
          v14 = 0; /*0x14066fc7e*/
          v15 = aCodexmateLibCo_26; /*0x14066fc8d*/
          v16 = 40; /*0x14066fc91*/
          v17 = 0; /*0x14066fc99*/
          v18 = aSrcCoreRelayPr; /*0x14066fca8*/
          v19 = 30; /*0x14066fcac*/
          v20 = 3; /*0x14066fcb4*/
          v21 = aCodexmateLibCo_26; /*0x14066fcbc*/
          v22 = 40; /*0x14066fcc0*/
          v23 = 0x27700000001LL; /*0x14066fcd2*/
          v24 = &unk_14177C8DF; /*0x14066fcdd*/
          v25 = &v10; /*0x14066fce1*/
          sub_1412C36A0(&v28, &v14); /*0x14066fced*/
          if ( v13[0] ) /*0x14066fcfa*/
            sub_140001660(v13[1], v13[0], 1); /*0x14066fd06*/
          v5 = v26; /*0x14066fd0b*/
          v9 = v27; /*0x14066fd0f*/
        }
        sub_140001660(v9, v5, 1); /*0x14066fd1f*/
      }
      else
      {
LABEL_17:
        sub_1400104F0(&v14); /*0x14066fd2a*/
      }
    }
  }
}