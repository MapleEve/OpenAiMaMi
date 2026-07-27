// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// 1.2.3 win delta | router_model_restore_1 | changelog ③模型回退 (win-native 锚点逆)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::load_model_restore_journal | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall sub_1404A5B80(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int128 v5; // xmm0
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
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  const char *v17; // [rsp+78h] [rbp-8h]
  __int128 v18; // [rsp+80h] [rbp+0h]
  const char *v19; // [rsp+90h] [rbp+10h]
  __int64 v20; // [rsp+98h] [rbp+18h]
  __int64 v21; // [rsp+A0h] [rbp+20h]
  const char *v22; // [rsp+A8h] [rbp+28h]
  __int64 v23; // [rsp+B0h] [rbp+30h]
  __int64 v24; // [rsp+B8h] [rbp+38h]
  void *v25; // [rsp+C0h] [rbp+40h]
  _QWORD **v26; // [rsp+C8h] [rbp+48h]
  _QWORD *v27; // [rsp+D0h] [rbp+50h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+D8h] [rbp+58h]
  __int64 v29; // [rsp+E0h] [rbp+60h]
  __int64 v30; // [rsp+E8h] [rbp+68h]
  _QWORD *v31; // [rsp+F0h] [rbp+70h]
  __int64 v32; // [rsp+F8h] [rbp+78h]
  _QWORD *v33; // [rsp+100h] [rbp+80h] BYREF
  char v34; // [rsp+10Fh] [rbp+8Fh] BYREF
  __int64 v35; // [rsp+110h] [rbp+90h]

  v35 = -2; /*0x1404a5b91*/
  sub_141473FA0((unsigned int)&v11, a2, a3, (unsigned int)&unk_14175B73B, 25); /*0x1404a5bb3*/
  v30 = v12; /*0x1404a5bc4*/
  sub_14148D130(&v14, v12, v13); /*0x1404a5bc8*/
  if ( (_QWORD)v14 == -1 ) /*0x1404a5bd6*/
  {
    v33 = *((_QWORD **)&v14 + 1); /*0x1404a5c3d*/
    if ( (unsigned __int8)sub_140476D40() && *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404a5c5f*/
    {
      v27 = &v33; /*0x1404a5c6c*/
      v28 = sub_141490720; /*0x1404a5c77*/
      v16 = 0; /*0x1404a5c7b*/
      v17 = aCodexmateLibCo_0; /*0x1404a5c8a*/
      v18 = 0x33u; /*0x1404a5c8e*/
      v19 = aSrcCoreRelayCo_0; /*0x1404a5ca5*/
      v20 = 41; /*0x1404a5ca9*/
      v21 = 2; /*0x1404a5cb1*/
      v22 = aCodexmateLibCo_0; /*0x1404a5cb9*/
      v23 = 51; /*0x1404a5cbd*/
      v24 = 0x90900000001LL; /*0x1404a5ccf*/
      v25 = &unk_14175B70B; /*0x1404a5cda*/
      v26 = &v27; /*0x1404a5ce2*/
      sub_1412C36A0(&v34, &v16); /*0x1404a5cf1*/
    }
    *(_DWORD *)(a1 + 24) = 0; /*0x1404a5cf7*/
    *(_QWORD *)a1 = 0; /*0x1404a5cfe*/
    *(_QWORD *)(a1 + 8) = 8; /*0x1404a5d05*/
    *(_QWORD *)(a1 + 16) = 0; /*0x1404a5d0d*/
    result = sub_140018650(&v33); /*0x1404a5d1c*/
  }
  else
  {
    v16 = *((_QWORD *)&v14 + 1); /*0x1404a5be4*/
    v32 = v14; /*0x1404a5be4*/
    v17 = (const char *)v15; /*0x1404a5be8*/
    v18 = 0; /*0x1404a5bef*/
    v29 = *((_QWORD *)&v14 + 1); /*0x1404a5bf3*/
    v19 = *((const char **)&v14 + 1); /*0x1404a5bf7*/
    v20 = v15; /*0x1404a5bfb*/
    result = sub_1408A7DF0(&v14, &v16); /*0x1404a5c07*/
    if ( (_QWORD)v14 != -1 ) /*0x1404a5c12*/
    {
      v5 = v14; /*0x1404a5c18*/
      *(_OWORD *)(a1 + 16) = v15; /*0x1404a5c20*/
      *(_OWORD *)a1 = v5; /*0x1404a5c24*/
      v6 = v32; /*0x1404a5c27*/
      if ( !v32 ) /*0x1404a5c2e*/
        goto LABEL_18; /*0x1404a5c2e*/
LABEL_17:
      result = sub_140001660(v29, v6, 1); /*0x1404a5e58*/
      goto LABEL_18; /*0x1404a5e62*/
    }
    v7 = *((_QWORD **)&v14 + 1); /*0x1404a5d27*/
    v33 = *((_QWORD **)&v14 + 1); /*0x1404a5d2b*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404a5d40*/
    {
      v27 = &v33; /*0x1404a5d4d*/
      v28 = sub_14142D3F0; /*0x1404a5d58*/
      v16 = 0; /*0x1404a5d5c*/
      v17 = aCodexmateLibCo_0; /*0x1404a5d6b*/
      v18 = 0x33u; /*0x1404a5d6f*/
      v19 = aSrcCoreRelayCo_0; /*0x1404a5d86*/
      v20 = 41; /*0x1404a5d8a*/
      v21 = 2; /*0x1404a5d92*/
      v22 = aCodexmateLibCo_0; /*0x1404a5d9a*/
      v23 = 51; /*0x1404a5d9e*/
      v24 = 0x91100000001LL; /*0x1404a5db0*/
      v25 = &unk_14175B6D0; /*0x1404a5dbb*/
      v26 = &v27; /*0x1404a5dc3*/
      sub_1412C36A0(&v34, &v16); /*0x1404a5dd2*/
      v7 = v33; /*0x1404a5dd8*/
    }
    *(_DWORD *)(a1 + 24) = 0; /*0x1404a5ddf*/
    *(_QWORD *)a1 = 0; /*0x1404a5de6*/
    *(_QWORD *)(a1 + 8) = 8; /*0x1404a5ded*/
    *(_QWORD *)(a1 + 16) = 0; /*0x1404a5df5*/
    v8 = *v7; /*0x1404a5dfd*/
    v9 = *v7 == 1; /*0x1404a5e00*/
    v31 = v7; /*0x1404a5e04*/
    if ( v9 ) /*0x1404a5e08*/
    {
      sub_140018650(v7 + 1); /*0x1404a5e35*/
    }
    else if ( !v8 ) /*0x1404a5e0d*/
    {
      v10 = v31[2]; /*0x1404a5e13*/
      if ( v10 ) /*0x1404a5e1a*/
        sub_140001660(v31[1], v10, 1); /*0x1404a5e2a*/
    }
    result = sub_140001660(v31, 40, 8); /*0x1404a5e4a*/
    v6 = v32; /*0x1404a5e4f*/
    if ( v32 ) /*0x1404a5e56*/
      goto LABEL_17; /*0x1404a5e56*/
  }
LABEL_18:
  if ( v11 ) /*0x1404a5e6e*/
    return sub_140001660(v30, v11, 1); /*0x1404a5e7a*/
  return result; /*0x1404a5e80*/
}