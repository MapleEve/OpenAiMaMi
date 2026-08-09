// win 1.2.3 delta | router_model_restore_1 @ 0x1404a5b80 | changelog ③模型回退
// [FULL hexrays 3546B]
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
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

  v35 = -2;
  sub_141473FA0((unsigned int)&v11, a2, a3, (unsigned int)&unk_14175B73B, 25);
  v30 = v12;
  sub_14148D130(&v14, v12, v13);
  if ( (_QWORD)v14 == -1 )
  {
    v33 = *((_QWORD **)&v14 + 1);
    if ( (unsigned __int8)sub_140476D40() && *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v27 = &v33;
      v28 = sub_141490720;
      v16 = 0;
      v17 = aCodexmateLibCo_0;
      v18 = 0x33u;
      v19 = aSrcCoreRelayCo_0;
      v20 = 41;
      v21 = 2;
      v22 = aCodexmateLibCo_0;
      v23 = 51;
      v24 = 0x90900000001LL;
      v25 = &unk_14175B70B;
      v26 = &v27;
      sub_1412C36A0(&v34, &v16);
    }
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = 0;
    result = sub_140018650(&v33);
  }
  else
  {
    v16 = *((_QWORD *)&v14 + 1);
    v32 = v14;
    v17 = (const char *)v15;
    v18 = 0;
    v29 = *((_QWORD *)&v14 + 1);
    v19 = *((const char **)&v14 + 1);
    v20 = v15;
    result = sub_1408A7DF0(&v14, &v16);
    if ( (_QWORD)v14 != -1 )
    {
      v5 = v14;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)a1 = v5;
      v6 = v32;
      if ( !v32 )
        goto LABEL_18;
LABEL_17:
      result = sub_140001660(v29, v6, 1);
      goto LABEL_18;
    }
    v7 = *((_QWORD **)&v14 + 1);
    v33 = *((_QWORD **)&v14 + 1);
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v27 = &v33;
      v28 = sub_14142D3F0;
      v16 = 0;
      v17 = aCodexmateLibCo_0;
      v18 = 0x33u;
      v19 = aSrcCoreRelayCo_0;
      v20 = 41;
      v21 = 2;
      v22 = aCodexmateLibCo_0;
      v23 = 51;
      v24 = 0x91100000001LL;
      v25 = &unk_14175B6D0;
      v26 = &v27;
      sub_1412C36A0(&v34, &v16);
      v7 = v33;
    }
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = 0;
    v8 = *v7;
    v9 = *v7 == 1;
    v31 = v7;
    if ( v9 )
    {
      sub_140018650(v7 + 1);
    }
    else if ( !v8 )
    {
      v10 = v31[2];
      if ( v10 )
        sub_140001660(v31[1], v10, 1);
    }
    result = sub_140001660(v31, 40, 8);
    v6 = v32;
    if ( v32 )
      goto LABEL_17;
  }
LABEL_18:
  if ( v11 )
    return sub_140001660(v30, v11, 1);
  return result;
}
