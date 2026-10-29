// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140354e70 | name sub_140354E70
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140354E70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r13
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // r14
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 result; // rax
  __int128 v21; // [rsp+90h] [rbp+10h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+B0h] [rbp+30h]
  __m256i v24; // 0:^40.32

  v23 = -2;
  v4 = (__int64 *)a2;
  v6 = *(_QWORD *)(a2 + 40);
  v22 = v6;
  v21 = *(_OWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(a2 + 64);
  v10 = 48 * v9;
  v8 = *(_QWORD *)(a2 + 56);
  if ( v9 > (__int64)v21 - v6 )
  {
    sub_14190D590((unsigned int)&v21, v6, v9, 8, 48);
    v11 = *((_QWORD *)&v21 + 1);
    v6 = v22;
    v4 = (__int64 *)a2;
  }
  else
  {
    if ( !v9 )
      goto LABEL_6;
    v11 = *((_QWORD *)&v21 + 1);
  }
  v12 = v11 + 48 * v6;
  v6 += (v10 - 48) / 0x30uLL + 1;
  v13 = 0;
  do
  {
    v24 = *(__m256i *)(v8 + v13 + 16);
    v14 = *(_OWORD *)(v8 + v13);
    *(_OWORD *)(v12 + v13 + 32) = *(_OWORD *)&v24.m256i_u64[2];
    *(_OWORD *)(v12 + v13) = v14;
    *(_OWORD *)(v12 + v13 + 16) = *(_OWORD *)v24.m256i_i8;
    v13 += 48;
  }
  while ( v10 != v13 );
LABEL_6:
  if ( v7 )
    sub_140001660(v8, 48 * v7, 8);
  v22 = v6;
  v15 = v4[2];
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v21;
  *(_QWORD *)(a1 + 24) = v15;
  *(_QWORD *)(a1 + 32) = a3;
  v16 = v4[1];
  if ( v15 )
  {
    v17 = (_QWORD *)(v16 + 8);
    do
    {
      v18 = *(v17 - 1);
      if ( v18 )
        sub_140001660(*v17, v18, 1);
      v17 += 3;
      --v15;
    }
    while ( v15 );
  }
  result = *v4;
  if ( *v4 )
    return sub_140001660(v16, 24 * result, 8);
  return result;
}
