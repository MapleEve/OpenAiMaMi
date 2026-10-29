// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140db14c0 | name sub_140DB14C0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140DB14C0(__int128 *a1, __int64 *a2, __int64 a3, __int64 a4, __int128 a5, char a6)
{
  _BYTE v8[24]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v9; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+58h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+88h] [rbp+8h] BYREF
  const char *v12; // [rsp+90h] [rbp+10h]
  __int64 v13; // [rsp+98h] [rbp+18h]
  __int64 (__fastcall *v14)(); // [rsp+A0h] [rbp+20h]
  const char *v15; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h]
  __int64 v17; // [rsp+B8h] [rbp+38h]
  const char *v18; // [rsp+C0h] [rbp+40h]
  __int64 v19; // [rsp+C8h] [rbp+48h]
  __int64 v20; // [rsp+D0h] [rbp+50h]
  void *v21; // [rsp+D8h] [rbp+58h]
  _QWORD *v22; // [rsp+E0h] [rbp+60h]
  __int64 *v23; // [rsp+E8h] [rbp+68h]
  __int128 v24; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v25; // [rsp+100h] [rbp+80h]
  __int64 v26; // [rsp+108h] [rbp+88h] BYREF
  __int64 v27; // [rsp+110h] [rbp+90h]
  char v28; // [rsp+11Fh] [rbp+9Fh] BYREF
  __int64 v29; // [rsp+120h] [rbp+A0h]

  v29 = -2;
  v23 = a2;
  v26 = a3;
  v27 = a4;
  v9 = a5;
  v11 = (__int64 *)&a6;
  v12 = (const char *)sub_140DCB2D0;
  sub_1416ABFD0(&v24, &unk_141A4DBC7, &v11);
  v11 = &v26;
  v12 = (const char *)sub_140186EE0;
  v13 = (__int64)&v9;
  v14 = sub_140186EE0;
  v15 = &a6;
  v16 = (__int64)sub_140DCB2D0;
  sub_1416ABFD0(v8, &unk_141A4DBE7, &v11);
  sub_14019B500((unsigned int)"relay", 5, (unsigned int)aUpstreamJsonDe, 27, (__int64)v8);
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v10[0] = &v9;
    v10[1] = sub_140186EE0;
    v10[2] = &v26;
    v10[3] = sub_140186EE0;
    v10[4] = &v24;
    v10[5] = sub_1400015F0;
    v17 = 2;
    v18 = aCodexmateLibCo_8;
    v19 = 40;
    v21 = &unk_141A4DC25;
    v22 = v10;
    v11 = nullptr;
    v12 = aCodexmateLibCo_8;
    v13 = 40;
    v14 = nullptr;
    v15 = aSrcCoreRelayPr_0;
    v16 = 30;
    v20 = 0x43700000001LL;
    sub_1414D53A0(&v28, &v11);
  }
  sub_140DAE450(v23, v26, v27, *((__int64 *)&v24 + 1), v25);
  *((_QWORD *)a1 + 2) = v25;
  *a1 = v24;
  return a1;
}
