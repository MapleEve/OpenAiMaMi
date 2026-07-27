// win 1.2.1 | module src/core/relay/codex_catalog.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_catalog::load_official_models | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall load_official_models(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h] BYREF
  __int128 v17; // [rsp+80h] [rbp+0h]
  unsigned __int128 v18; // [rsp+90h] [rbp+10h] BYREF
  __int128 v19; // [rsp+A0h] [rbp+20h]
  const char *v20; // [rsp+B0h] [rbp+30h]
  __int64 v21; // [rsp+B8h] [rbp+38h]
  __int64 v22; // [rsp+C0h] [rbp+40h]
  const char *v23; // [rsp+C8h] [rbp+48h]
  __int64 v24; // [rsp+D0h] [rbp+50h]
  __int64 v25; // [rsp+D8h] [rbp+58h]
  void *v26; // [rsp+E0h] [rbp+60h]
  __int128 *v27; // [rsp+E8h] [rbp+68h]
  _QWORD v28[2]; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD *v29; // [rsp+100h] [rbp+80h] BYREF
  __int64 v30; // [rsp+108h] [rbp+88h]
  __int64 v31; // [rsp+110h] [rbp+90h]
  _QWORD *v32; // [rsp+118h] [rbp+98h]
  char v33; // [rsp+127h] [rbp+A7h] BYREF
  __int64 v34; // [rsp+128h] [rbp+A8h]

  v34 = -2; /*0x140a4bf22*/
  sub_141473FA0((unsigned int)&v11, a2, a3, (unsigned int)&unk_1417A8ED2, 17); /*0x140a4bf47*/
  sub_14148D130(&v16, v12, v13); /*0x140a4bf58*/
  if ( (_QWORD)v16 == -1 ) /*0x140a4bf66*/
  {
    v28[0] = *((_QWORD *)&v16 + 1); /*0x140a4c013*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140a4c025*/
    {
      *(_QWORD *)&v14 = &v11; /*0x140a4c02b*/
      *((_QWORD *)&v14 + 1) = sub_14148F310; /*0x140a4c036*/
      *(_QWORD *)&v15 = v28; /*0x140a4c03e*/
      *((_QWORD *)&v15 + 1) = sub_141490720; /*0x140a4c049*/
      *(_QWORD *)&v18 = 0; /*0x140a4c04d*/
      *((_QWORD *)&v18 + 1) = aCodexmateLibCo_8; /*0x140a4c05c*/
      v19 = 0x29u; /*0x140a4c060*/
      v20 = aSrcCoreRelayCo_9; /*0x140a4c077*/
      v21 = 31; /*0x140a4c07b*/
      v22 = 2; /*0x140a4c083*/
      v23 = aCodexmateLibCo_8; /*0x140a4c08b*/
      v24 = 41; /*0x140a4c08f*/
      v25 = 0xE600000001LL; /*0x140a4c0a1*/
      v26 = &unk_1417A8B62; /*0x140a4c0ac*/
      v27 = &v14; /*0x140a4c0b4*/
      sub_1412C36A0(&v33, &v18); /*0x140a4c0c3*/
    }
    *a1 = 0; /*0x140a4c0c9*/
    a1[1] = 8; /*0x140a4c0d0*/
    a1[2] = 0; /*0x140a4c0d8*/
    result = sub_140018650(v28); /*0x140a4c0e4*/
  }
  else
  {
    v31 = v16; /*0x140a4bf73*/
    v18 = __PAIR128__(v17, *((unsigned __int64 *)&v16 + 1)); /*0x140a4bf7b*/
    v19 = 0; /*0x140a4bf86*/
    v30 = *((_QWORD *)&v16 + 1); /*0x140a4bf8a*/
    v20 = *((const char **)&v16 + 1); /*0x140a4bf91*/
    v21 = v17; /*0x140a4bf95*/
    sub_1408A6200(&v14, &v18); /*0x140a4bfa1*/
    if ( (_BYTE)v14 == 0xFF ) /*0x140a4bfab*/
    {
      v7 = *((_QWORD **)&v14 + 1); /*0x140a4c14f*/
      v29 = *((_QWORD **)&v14 + 1); /*0x140a4c153*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140a4c168*/
      {
        v28[0] = &v29; /*0x140a4c175*/
        v28[1] = sub_14142D3F0; /*0x140a4c180*/
        *(_QWORD *)&v18 = 0; /*0x140a4c184*/
        *((_QWORD *)&v18 + 1) = aCodexmateLibCo_8; /*0x140a4c193*/
        v19 = 0x29u; /*0x140a4c197*/
        v20 = aSrcCoreRelayCo_9; /*0x140a4c1ae*/
        v21 = 31; /*0x140a4c1b2*/
        v22 = 2; /*0x140a4c1ba*/
        v23 = aCodexmateLibCo_8; /*0x140a4c1c2*/
        v24 = 41; /*0x140a4c1c6*/
        v25 = 0xF000000001LL; /*0x140a4c1d8*/
        v26 = &unk_1417A8B09; /*0x140a4c1e3*/
        v27 = (__int128 *)v28; /*0x140a4c1eb*/
        sub_1412C36A0(&v33, &v18); /*0x140a4c1fa*/
        v7 = v29; /*0x140a4c200*/
      }
      *a1 = 0; /*0x140a4c207*/
      a1[1] = 8; /*0x140a4c20e*/
      a1[2] = 0; /*0x140a4c216*/
      v8 = *v7; /*0x140a4c21e*/
      v9 = *v7 == 1; /*0x140a4c221*/
      v32 = v7; /*0x140a4c225*/
      if ( v9 ) /*0x140a4c22c*/
      {
        sub_140018650(v7 + 1); /*0x140a4c25f*/
      }
      else if ( !v8 ) /*0x140a4c231*/
      {
        v10 = v32[2]; /*0x140a4c23a*/
        if ( v10 ) /*0x140a4c241*/
          sub_140001660(v32[1], v10, 1); /*0x140a4c254*/
      }
      result = sub_140001660(v32, 40, 8); /*0x140a4c277*/
      v6 = v31; /*0x140a4c27c*/
      if ( v31 ) /*0x140a4c286*/
        goto LABEL_11; /*0x140a4c286*/
    }
    else
    {
      v17 = v15; /*0x140a4bfb9*/
      v16 = v14; /*0x140a4bfbd*/
      v4 = sub_141433D50(aModels_3, 6, &v16); /*0x140a4bfd1*/
      if ( v4 && *(_BYTE *)v4 == 4 ) /*0x140a4bfe3*/
      {
        sub_1402CE260(&v18, *(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 24)); /*0x140a4bff5*/
        a1[2] = v19; /*0x140a4bfff*/
        *(_OWORD *)a1 = v18; /*0x140a4c007*/
      }
      else
      {
        *a1 = 0; /*0x140a4c0ec*/
        a1[1] = 8; /*0x140a4c0f3*/
        a1[2] = 0; /*0x140a4c0fb*/
      }
      result = sub_1400104F0(&v16); /*0x140a4c107*/
      v6 = v31; /*0x140a4c10d*/
      if ( v31 ) /*0x140a4c117*/
LABEL_11:
        result = sub_140001660(v30, v6, 1); /*0x140a4c119*/
    }
  }
  if ( v11 ) /*0x140a4c132*/
    return sub_140001660(v12, v11, 1); /*0x140a4c13e*/
  return result; /*0x140a4c144*/
}