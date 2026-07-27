// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404dddc0
// name: sub_1404DDDC0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404DDDC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // bl
  bool v9; // zf
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-60h]
  __int128 v13; // [rsp+30h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __m256i v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+80h] [rbp+0h] BYREF
  __int64 v18; // [rsp+90h] [rbp+10h]
  _BYTE v19[24]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+30h]
  __int64 v21; // [rsp+B8h] [rbp+38h]
  __int64 v22; // [rsp+C0h] [rbp+40h]

  v22 = -2;
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 < 0 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( !v2 )
  {
    v20 = 1;
    v8 = *(_BYTE *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 32) == -1;
    v21 = 0;
    if ( !v9 )
      goto LABEL_7;
LABEL_10:
    *(_QWORD *)&v15 = -1;
    if ( *(_QWORD *)(a2 + 80) != -1 )
      goto LABEL_8;
LABEL_11:
    v10 = -1;
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a2 + 8);
  nullsub_1(a1);
  v3 = 1;
  v7 = sub_140001650(v2, 1);
  if ( !v7 )
LABEL_3:
    sub_1416C2D4B(v3, v2);
  v20 = v7;
  sub_141684120(v7, v6, v2);
  v8 = *(_BYTE *)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 32) == -1;
  v21 = v2;
  if ( v9 )
    goto LABEL_10;
LABEL_7:
  sub_14149C500(v19, a2 + 32);
  sub_14149C500(&v17, a2 + 56);
  v16.m256i_i64[0] = *(_QWORD *)&v19[16];
  v15 = *(_OWORD *)v19;
  *(_OWORD *)&v16.m256i_u64[1] = v17;
  v16.m256i_i64[3] = v18;
  v2 = v21;
  if ( *(_QWORD *)(a2 + 80) == -1 )
    goto LABEL_11;
LABEL_8:
  sub_14149C500(v19, a2 + 80);
  sub_14149C500(&v17, a2 + 104);
  v10 = *(_QWORD *)v19;
  v12 = *(_OWORD *)&v19[8];
  v13 = v17;
  v14 = v18;
  v2 = v21;
LABEL_12:
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 16) = v2;
  *(_BYTE *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 32) = v15;
  *(__m256i *)(a1 + 48) = v16;
  *(_QWORD *)(a1 + 80) = v10;
  *(_OWORD *)(a1 + 88) = v12;
  *(_OWORD *)(a1 + 104) = v13;
  *(_QWORD *)(a1 + 120) = v14;
  return v14;
}