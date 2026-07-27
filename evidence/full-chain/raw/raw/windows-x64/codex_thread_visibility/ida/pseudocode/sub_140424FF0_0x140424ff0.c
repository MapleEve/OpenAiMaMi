// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140424ff0
// name: sub_140424FF0
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_140424FF0(__int64 a1, __int64 a2, _QWORD **a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]
  unsigned __int64 v28; // [rsp+80h] [rbp+0h]
  _QWORD *v29; // [rsp+88h] [rbp+8h]
  __int64 v30; // [rsp+90h] [rbp+10h]
  __int64 v31; // [rsp+98h] [rbp+18h]

  v31 = -2;
  (*(void (__fastcall **)(__int64 *, _QWORD))((*a3)[1] + 24LL))(&v20, **a3);
  v7 = v20;
  v8 = v21;
  v9 = v22;
  v10 = v23;
  v11 = v24;
  if ( v20 != -1 )
  {
    *(_QWORD *)(a1 + 56) = v26;
    *(_OWORD *)(a1 + 40) = v25;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a1 + 32) = v11;
    *(_QWORD *)a1 = v7;
    return a1;
  }
  v12 = *(_QWORD **)a2;
  v13 = *(_QWORD *)(a2 + 56);
  v28 = v21 + 1;
  v14 = v22;
  v27 = v22;
  v30 = v23;
  switch ( v21 )
  {
    case -1LL:
      v14 = v23;
      switch ( v22 )
      {
        case 0LL:
          goto LABEL_5;
        case 1LL:
          goto LABEL_16;
        case 2LL:
          goto LABEL_10;
        case 3LL:
          goto LABEL_12;
        case 4LL:
          goto LABEL_7;
      }
    case 0LL:
LABEL_5:
      v15 = sub_1414B5D70(v13, a4, v14, v24);
      v16 = *v12;
      if ( *v12 >= 0x7FFFFFFFFFFFFFFFuLL )
        goto LABEL_21;
      goto LABEL_17;
    case 1LL:
LABEL_16:
      v15 = sub_1414B5CF0(v13, a4, v14, v24);
      v16 = *v12;
      if ( *v12 < 0x7FFFFFFFFFFFFFFFuLL )
        goto LABEL_17;
      goto LABEL_21;
    case 2LL:
LABEL_10:
      v15 = sub_1414B5B80(v13, a4, v14, v24);
      v16 = *v12;
      if ( *v12 >= 0x7FFFFFFFFFFFFFFFuLL )
        goto LABEL_21;
      goto LABEL_17;
    case 3LL:
LABEL_12:
      v17 = 1;
      if ( v24 )
        v17 = v23;
      v15 = sub_1414B6740(v13, a4, v17, v24, -(v24 != 0), 1);
      v16 = *v12;
      if ( *v12 >= 0x7FFFFFFFFFFFFFFFuLL )
        goto LABEL_21;
      goto LABEL_17;
    case 4LL:
LABEL_7:
      if ( v24 )
      {
        v15 = sub_1414B5B60(v13, a4, v23, v24, -1);
        v16 = *v12;
        if ( *v12 >= 0x7FFFFFFFFFFFFFFFuLL )
LABEL_21:
          sub_1416C2FC0(&off_1417588A8);
      }
      else
      {
        v15 = sub_1414B69F0(v13, a4, 0);
        v16 = *v12;
        if ( *v12 >= 0x7FFFFFFFFFFFFFFFuLL )
          goto LABEL_21;
      }
LABEL_17:
      *v12 = v16 + 1;
      v18 = v12[2];
      v29 = v12;
      sub_140FB88E0(a1, v18, v15);
      --*v29;
      if ( v28 >= 4 && v27 != 0 )
        sub_140001660(v30, v27, 1);
      return a1;
  }
}