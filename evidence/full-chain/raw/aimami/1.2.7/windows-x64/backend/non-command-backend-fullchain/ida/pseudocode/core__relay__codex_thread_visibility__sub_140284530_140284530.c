// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140284530 | name sub_140284530
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140284530(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r15
  __int64 v3; // r14
  const __m128i *v6; // rbx
  __m128i *v7; // rax
  char v8; // bl
  bool v9; // zf
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-60h]
  __int128 v13; // [rsp+30h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __m256i v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+80h] [rbp+0h]
  __m256i v18; // [rsp+90h] [rbp+10h]
  __int128 v19; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h]
  __int64 v21; // [rsp+C8h] [rbp+48h]
  _BYTE v22[24]; // [rsp+D0h] [rbp+50h] BYREF
  signed __int64 v23; // [rsp+E8h] [rbp+68h]
  __int64 v24; // [rsp+F0h] [rbp+70h]

  v24 = -2;
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 < 0 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v6 = *(const __m128i **)(a2 + 8);
    nullsub_1(a1);
    v3 = 1;
    v7 = (__m128i *)sub_140001650(v2, 1);
    if ( !v7 )
LABEL_3:
      sub_141938D2B(v3, v2);
    v21 = (__int64)v7;
    sub_1418F44E0(v7, v6, v2);
    v8 = *(_BYTE *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 32) == -1;
    v23 = v2;
    if ( !v9 )
    {
LABEL_7:
      sub_1416AC440(v22, a2 + 32);
      sub_1416AC440(&v19, a2 + 56);
      v18.m256i_i64[0] = *(_QWORD *)&v22[16];
      v17 = *(_OWORD *)v22;
      *(_OWORD *)&v18.m256i_u64[1] = v19;
      v18.m256i_i64[3] = v20;
      v2 = v23;
      if ( *(_QWORD *)(a2 + 80) != -1 )
        goto LABEL_8;
LABEL_12:
      *(_QWORD *)&v15 = -1;
      if ( *(_QWORD *)(a2 + 128) != -1 )
        goto LABEL_9;
LABEL_13:
      v10 = -1;
      goto LABEL_14;
    }
  }
  else
  {
    v21 = 1;
    v8 = *(_BYTE *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 32) == -1;
    v23 = 0;
    if ( !v9 )
      goto LABEL_7;
  }
  *(_QWORD *)&v17 = -1;
  if ( *(_QWORD *)(a2 + 80) == -1 )
    goto LABEL_12;
LABEL_8:
  sub_1416AC440(v22, a2 + 80);
  sub_1416AC440(&v19, a2 + 104);
  v16.m256i_i64[0] = *(_QWORD *)&v22[16];
  v15 = *(_OWORD *)v22;
  *(_OWORD *)&v16.m256i_u64[1] = v19;
  v16.m256i_i64[3] = v20;
  v2 = v23;
  if ( *(_QWORD *)(a2 + 128) == -1 )
    goto LABEL_13;
LABEL_9:
  sub_1416AC440(v22, a2 + 128);
  sub_1416AC440(&v19, a2 + 152);
  v10 = *(_QWORD *)v22;
  v12 = *(_OWORD *)&v22[8];
  v13 = v19;
  v14 = v20;
  v2 = v23;
LABEL_14:
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 16) = v2;
  *(_BYTE *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 32) = v17;
  *(__m256i *)(a1 + 48) = v18;
  *(_OWORD *)(a1 + 80) = v15;
  *(__m256i *)(a1 + 96) = v16;
  *(_QWORD *)(a1 + 128) = v10;
  *(_OWORD *)(a1 + 136) = v12;
  *(_OWORD *)(a1 + 152) = v13;
  *(_QWORD *)(a1 + 168) = v14;
  return v14;
}
