// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_14066F8E0(__int128 *a1, __int64 a2, __int64 a3, __int64 a4, __int128 a5, char a6)
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
  __int64 v23; // [rsp+E8h] [rbp+68h]
  __int128 v24; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v25; // [rsp+100h] [rbp+80h]
  __int64 v26; // [rsp+108h] [rbp+88h] BYREF
  __int64 v27; // [rsp+110h] [rbp+90h]
  char v28; // [rsp+11Fh] [rbp+9Fh] BYREF
  __int64 v29; // [rsp+120h] [rbp+A0h]

  v29 = -2; /*0x14066f8fb*/
  v23 = a2; /*0x14066f906*/
  v26 = a3; /*0x14066f914*/
  v27 = a4; /*0x14066f91b*/
  v9 = a5; /*0x14066f922*/
  v11 = (__int64 *)&a6; /*0x14066f92d*/
  v12 = (const char *)sub_140678850; /*0x14066f938*/
  sub_14149C0F0(&v24, &unk_14177C841, &v11); /*0x14066f94e*/
  v11 = &v26; /*0x14066f95a*/
  v12 = (const char *)sub_14041F680; /*0x14066f965*/
  v13 = (__int64)&v9; /*0x14066f96d*/
  v14 = sub_14041F680; /*0x14066f971*/
  v15 = &a6; /*0x14066f975*/
  v16 = (__int64)sub_140678850; /*0x14066f979*/
  sub_14149C0F0(v8, &unk_14177C861, &v11); /*0x14066f98f*/
  sub_1403565C0((unsigned int)aRelay, 5, (unsigned int)aUpstreamJsonDe, 27, (__int64)v8); /*0x14066f9b3*/
  if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14066f9c7*/
  {
    v10[0] = &v9; /*0x14066f9cd*/
    v10[1] = sub_14041F680; /*0x14066f9d1*/
    v10[2] = &v26; /*0x14066f9d5*/
    v10[3] = sub_14041F680; /*0x14066f9d9*/
    v10[4] = &v24; /*0x14066f9dd*/
    v10[5] = sub_1400015F0; /*0x14066f9e8*/
    v11 = nullptr; /*0x14066f9ec*/
    v12 = aCodexmateLibCo_26; /*0x14066f9fb*/
    v13 = 40; /*0x14066f9ff*/
    v14 = nullptr; /*0x14066fa07*/
    v15 = aSrcCoreRelayPr; /*0x14066fa16*/
    v16 = 30; /*0x14066fa1a*/
    v17 = 2; /*0x14066fa22*/
    v18 = aCodexmateLibCo_26; /*0x14066fa2a*/
    v19 = 40; /*0x14066fa2e*/
    v20 = 0x48300000001LL; /*0x14066fa40*/
    v21 = &unk_14177C89F; /*0x14066fa4b*/
    v22 = v10; /*0x14066fa53*/
    sub_1412C36A0(&v28, &v11); /*0x14066fa62*/
  }
  sub_14066A050(v23, v26, v27, DWORD2(v24), v25); /*0x14066fa8a*/
  *((_QWORD *)a1 + 2) = v25; /*0x14066fa97*/
  *a1 = v24; /*0x14066fa9f*/
  return a1; /*0x14066faa5*/
}