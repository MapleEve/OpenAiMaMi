// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140db16f0 | name sub_140DB16F0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DB16F0(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  const __m128i *v6; // rbx
  __m128i *v7; // rax
  __m128i *v8; // r12
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  unsigned __int64 v14; // [rsp+40h] [rbp-40h]
  __m128i *v15; // [rsp+48h] [rbp-38h]
  __int64 *v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+58h] [rbp-28h]
  __m128i *v18; // [rsp+70h] [rbp-10h] BYREF
  const char *v19; // [rsp+78h] [rbp-8h]
  __int64 v20; // [rsp+80h] [rbp+0h]
  __int64 v21; // [rsp+88h] [rbp+8h]
  const char *v22; // [rsp+90h] [rbp+10h]
  __int64 v23; // [rsp+98h] [rbp+18h]
  __int64 v24; // [rsp+A0h] [rbp+20h]
  const char *v25; // [rsp+A8h] [rbp+28h]
  __int64 v26; // [rsp+B0h] [rbp+30h]
  __int64 v27; // [rsp+B8h] [rbp+38h]
  void *v28; // [rsp+C0h] [rbp+40h]
  __int64 *v29; // [rsp+C8h] [rbp+48h]
  char v30; // [rsp+D7h] [rbp+57h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+58h]

  v31 = -2;
  if ( *a1 == 5 )
  {
    nullsub_1(a1);
    v2 = sub_140001650(5, 1);
    if ( !v2 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v2 + 4) = 101;
    *(_DWORD *)v2 = 1919906931;
    v11 = 5;
    v12 = (__int64 (__fastcall *)())v2;
    v13 = 5;
    LOWORD(v18) = 1;
    sub_140E72AA0(&v16, a1 + 8, &v11, &v18);
    if ( (_BYTE)v16 != 0xFF )
      sub_140409B40(&v16);
    sub_140DED130(&v18, a1 + 8, aPreviousRespon_0, 20);
    if ( (_BYTE)v18 != 0xFF )
    {
      if ( (_BYTE)v18 != 3 )
        goto LABEL_17;
      v4 = v21;
      if ( v21 < 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      if ( v21 )
      {
        v6 = (const __m128i *)v20;
        nullsub_1(v3);
        v5 = 1;
        v7 = (__m128i *)sub_140001650(v4, 1);
        if ( !v7 )
LABEL_9:
          sub_141938D2B(v5, v4);
        v8 = v7;
        sub_1418F44E0(v7, v6, v4);
        sub_140409B40(&v18);
        if ( *(_QWORD *)off_1421E6EC0 > 2u )
        {
          v14 = v4;
          v15 = v8;
          v18 = v8;
          v19 = &v8->m128i_i8[v4];
          v20 = 40;
          sub_1407171D0(&v16, &v18);
          v11 = (__int64)&v16;
          v12 = sub_1400015F0;
          v24 = 3;
          v25 = aCodexmateLibCo_8;
          v26 = 40;
          v28 = &unk_141A4DC6A;
          v29 = &v11;
          v18 = nullptr;
          v19 = aCodexmateLibCo_8;
          v20 = 40;
          v21 = 0;
          v22 = aSrcCoreRelayPr_0;
          v23 = 30;
          v27 = 0x26900000001LL;
          sub_1414D53A0(&v30, &v18);
          if ( v16 )
            sub_140001660(v17, v16, 1);
          v4 = v14;
          v8 = v15;
        }
        sub_140001660(v8, v4, 1);
      }
      else
      {
LABEL_17:
        sub_140409B40(&v18);
      }
    }
  }
  v10 = sub_140272AE0(a1);
  if ( v10 && *(_QWORD *)off_1421E6EC0 >= 3u )
  {
    v16 = &v10;
    v17 = sub_1416BCB10;
    v24 = 3;
    v25 = aCodexmateLibCo_8;
    v26 = 40;
    v28 = &unk_141A4DCBE;
    v29 = (__int64 *)&v16;
    v18 = nullptr;
    v19 = aCodexmateLibCo_8;
    v20 = 40;
    v21 = 0;
    v22 = aSrcCoreRelayPr_0;
    v23 = 30;
    v27 = 0x27400000001LL;
    sub_1414D53A0(&v30, &v18);
  }
  result = sub_140272630((__int64)a1);
  v11 = result;
  if ( result )
  {
    result = *(_QWORD *)off_1421E6EC0;
    if ( *(_QWORD *)off_1421E6EC0 >= 3u )
    {
      v16 = &v11;
      v17 = sub_1416BCB10;
      v24 = 3;
      v25 = aCodexmateLibCo_8;
      v26 = 40;
      v28 = &unk_141A4DD06;
      v29 = (__int64 *)&v16;
      v18 = nullptr;
      v19 = aCodexmateLibCo_8;
      v20 = 40;
      v21 = 0;
      v22 = aSrcCoreRelayPr_0;
      v23 = 30;
      v27 = 0x27800000001LL;
      return sub_1414D53A0(&v30, &v18);
    }
  }
  return result;
}
