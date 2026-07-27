// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140306f50
// name: sub_140306F50
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140306F50(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int128 *a4)
{
  __int64 v4; // r13
  _QWORD *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // rbp
  int v15; // eax
  char v16; // cl
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 *v22; // [rsp+28h] [rbp-E0h]
  _QWORD *v25; // [rsp+40h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-A8h]
  _QWORD *v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  __int64 v32; // [rsp+80h] [rbp-88h]
  __int128 v33; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-68h]
  _BYTE v35[96]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = a1;
  v6 = *a2;
  if ( *a2 )
  {
    v22 = a4;
    v25 = a2;
    v7 = a2[1];
    v8 = a3[1];
    v9 = a3[2];
    while ( 2 )
    {
      v10 = v6 + 8;
      v26 = *(unsigned __int16 *)(v6 + 538);
      v11 = 3LL * (unsigned int)(8 * v26);
      v4 = -1;
      do
      {
        if ( !v11 )
        {
          v4 = v26;
          goto LABEL_13;
        }
        v12 = v10 + 24;
        v13 = *(_QWORD *)(v10 + 16);
        v14 = v9 - v13;
        if ( v9 < v13 )
          v13 = v9;
        v15 = sub_1416847B0(v8, *(_QWORD *)(v10 + 8), v13);
        if ( v15 )
          v14 = v15;
        v16 = (v14 > 0) - (v14 < 0);
        ++v4;
        v11 -= 24;
        v10 = v12;
      }
      while ( v16 == 1 );
      if ( !v16 )
      {
        if ( *a3 )
          sub_140001660(v8, *a3, 1);
        v5 = a1;
        a4 = v22;
        goto LABEL_22;
      }
LABEL_13:
      if ( v7-- != 0 )
      {
        v6 = *(_QWORD *)(v6 + 8 * v4 + 544);
        continue;
      }
      break;
    }
    v18 = v6;
    v6 = v8;
    v5 = a1;
    a4 = v22;
    a2 = v25;
    v19 = *a3;
    if ( *a3 == -1 )
      goto LABEL_21;
LABEL_19:
    *(_QWORD *)&v27 = v19;
    *((_QWORD *)&v27 + 1) = v6;
    v28 = v9;
    v29 = a2;
    v30 = v18;
    v31 = 0;
    v32 = v4;
    v34 = *((_QWORD *)a4 + 2);
    v33 = *a4;
    sub_1403B0920(v35, &v27, &v33);
    *v5 = -1;
    return v5;
  }
  v6 = a3[1];
  v9 = a3[2];
  v18 = 0;
  v19 = *a3;
  if ( *a3 != -1 )
    goto LABEL_19;
LABEL_21:
  v4 = (__int64)a2;
LABEL_22:
  v20 = 3 * v4;
  v28 = *(_QWORD *)(v6 + 24 * v4 + 288);
  v27 = *(_OWORD *)(v6 + 24 * v4 + 272);
  *(_QWORD *)(v6 + 8 * v20 + 288) = *((_QWORD *)a4 + 2);
  *(_OWORD *)(v6 + 8 * v20 + 272) = *a4;
  v5[2] = v28;
  *(_OWORD *)v5 = v27;
  return v5;
}