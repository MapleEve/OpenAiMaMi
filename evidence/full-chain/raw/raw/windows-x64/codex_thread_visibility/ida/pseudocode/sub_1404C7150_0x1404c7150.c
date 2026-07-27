// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404c7150
// name: sub_1404C7150
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404C7150(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 i; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  _OWORD v15[6]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v17; // [rsp+B0h] [rbp+30h]
  __int128 v18; // [rsp+C0h] [rbp+40h]
  __int128 v19; // [rsp+D0h] [rbp+50h]
  __int128 v20; // [rsp+E0h] [rbp+60h]
  __int128 v21; // [rsp+F0h] [rbp+70h]
  _QWORD v22[4]; // [rsp+108h] [rbp+88h] BYREF
  _QWORD v23[2]; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v24; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v25; // [rsp+148h] [rbp+C8h]
  _QWORD *v26; // [rsp+150h] [rbp+D0h]
  __int64 v27; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v28; // [rsp+160h] [rbp+E0h]
  __int64 v29; // [rsp+168h] [rbp+E8h]
  __int64 v30; // [rsp+170h] [rbp+F0h]

  v30 = -2;
  v26 = a1;
  v27 = 0;
  v28 = 8;
  v29 = 0;
  for ( i = a2 + 80 * a3; a2 != i; i -= 80 )
  {
    v7 = *(_QWORD *)(i - 72);
    v8 = *(_QWORD *)(i - 64);
    sub_1404B9880(
      (unsigned int)v15,
      v7,
      v8,
      *(_QWORD *)(i - 40),
      *(_QWORD *)(i - 32),
      *(_QWORD *)(i - 16),
      *(_QWORD *)(i - 8));
    if ( LODWORD(v15[0]) != -1 )
    {
      v21 = v15[5];
      v20 = v15[4];
      v19 = v15[3];
      v18 = v15[2];
      v17 = v15[1];
      v16 = v15[0];
      v23[0] = v7;
      v23[1] = v8;
      v22[0] = v23;
      v22[1] = sub_14148F3A0;
      v22[2] = &v16;
      v22[3] = sub_140B036A0;
      sub_14149C0F0(&v24, &unk_141757B59, v22);
      v9 = v29;
      if ( v29 == v27 )
        sub_141689AB0(&v27);
      v5 = v28;
      v6 = 3 * v9;
      *(_QWORD *)(v28 + 8 * v6 + 16) = v25;
      *(_OWORD *)(v5 + 8 * v6) = v24;
      v29 = v9 + 1;
      sub_14043E650(&v16);
    }
  }
  if ( v29 )
  {
    sub_140440300((unsigned int)&v16, v28, v29, (unsigned int)&unk_141758CC9, 3);
    v10 = v26;
    v26[3] = v17;
    *(_OWORD *)(v10 + 1) = v16;
    v11 = v29;
    *v10 = 10;
    if ( v11 )
    {
      v12 = (_QWORD *)(v28 + 8);
      do
      {
        v13 = *(v12 - 1);
        if ( v13 )
          sub_140001660(*v12, v13, 1);
        v12 += 3;
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    *v26 = -1;
  }
  result = v27;
  if ( v27 )
    return sub_140001660(v28, 24 * v27, 8);
  return result;
}