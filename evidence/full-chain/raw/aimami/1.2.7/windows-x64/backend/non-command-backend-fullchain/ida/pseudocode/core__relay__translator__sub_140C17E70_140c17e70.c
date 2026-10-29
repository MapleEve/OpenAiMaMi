// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140c17e70 | name sub_140C17E70
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_140C17E70(_BYTE *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int128 v10; // xmm0
  _OWORD *v11; // rax
  __int128 v12; // xmm0
  _OWORD *v13; // rax
  bool v14; // cf
  __int64 v15; // r12
  __int128 v16; // xmm0
  _OWORD *v17; // rax
  _OWORD *v18; // rsi
  __int64 v19; // rdi
  void *v20; // rax
  __int128 v21; // xmm0
  _OWORD *v22; // rax
  _OWORD *v23; // rax
  __int128 v24; // xmm0
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  _BYTE v28[32]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  _OWORD *v31; // [rsp+50h] [rbp-30h]
  __int64 v32; // [rsp+58h] [rbp-28h]
  _BYTE *v33; // [rsp+60h] [rbp-20h]
  __int128 v34; // [rsp+68h] [rbp-18h] BYREF
  __int128 v35; // [rsp+78h] [rbp-8h]
  __int128 v36; // [rsp+88h] [rbp+8h] BYREF
  __int64 v37; // [rsp+98h] [rbp+18h]
  __int64 v38; // [rsp+A0h] [rbp+20h]
  __int64 v39; // [rsp+A8h] [rbp+28h]
  __int64 v40; // [rsp+B0h] [rbp+30h]
  __m256i v41; // [rsp+B8h] [rbp+38h] BYREF
  char v42; // [rsp+DBh] [rbp+5Bh]
  char v43; // [rsp+DCh] [rbp+5Ch]
  char v44; // [rsp+DDh] [rbp+5Dh]
  char v45; // [rsp+DEh] [rbp+5Eh]
  char v46; // [rsp+DFh] [rbp+5Fh]
  __int64 v47; // [rsp+E0h] [rbp+60h]

  v47 = -2;
  v33 = a1;
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = a2[4];
  v7 = a2[5];
  v8 = a2[6];
  v39 = a2[7];
  v9 = a2[8];
  v29 = a2[9];
  v38 = v9;
  if ( v2 )
  {
    *((_QWORD *)&v34 + 1) = 0;
    *((_QWORD *)&v35 + 1) = 0;
    LOBYTE(v34) = 5;
    v41.m256i_i8[0] = 2;
    v41.m256i_i64[1] = 0;
    v41.m256i_i64[2] = v3;
    v46 = 1;
    v40 = sub_141641AF0(aInputTokens_0, 12, &v34);
    sub_14002F9D0(v40);
    v10 = *(_OWORD *)v41.m256i_i8;
    v11 = (_OWORD *)v40;
    *(_OWORD *)(v40 + 16) = *(_OWORD *)&v41.m256i_u64[2];
    *v11 = v10;
    if ( !v4 )
      goto LABEL_3;
  }
  else
  {
    if ( !(v9 | v8 | v4 | v6) )
    {
      v18 = v33;
      *v33 = -1;
      return v18;
    }
    *((_QWORD *)&v34 + 1) = 0;
    *((_QWORD *)&v35 + 1) = 0;
    LOBYTE(v34) = 5;
    if ( !v4 )
    {
LABEL_3:
      if ( v6 )
        goto LABEL_11;
      goto LABEL_8;
    }
  }
  v41.m256i_i8[0] = 2;
  v41.m256i_i64[1] = 0;
  v41.m256i_i64[2] = v5;
  v45 = 1;
  v40 = sub_141641AF0(aOutputTokens_0, 13, &v34);
  sub_14002F9D0(v40);
  v12 = *(_OWORD *)v41.m256i_i8;
  v13 = (_OWORD *)v40;
  *(_OWORD *)(v40 + 16) = *(_OWORD *)&v41.m256i_u64[2];
  *v13 = v12;
  if ( v6 )
  {
LABEL_11:
    v41.m256i_i8[0] = 2;
    v41.m256i_i64[1] = 0;
    v41.m256i_i64[2] = v7;
    v44 = 1;
    v40 = sub_141641AF0(aTotalTokens, 12, &v34);
    sub_14002F9D0(v40);
    v16 = *(_OWORD *)v41.m256i_i8;
    v17 = (_OWORD *)v40;
    *(_OWORD *)(v40 + 16) = *(_OWORD *)&v41.m256i_u64[2];
    *v17 = v16;
    goto LABEL_12;
  }
LABEL_8:
  if ( ((unsigned int)v2 & (unsigned int)v4) != 0 )
  {
    v14 = __CFADD__(v5, v3);
    v15 = v5 + v3;
    v7 = -1;
    if ( !v14 )
      v7 = v15;
    goto LABEL_11;
  }
LABEL_12:
  v18 = v33;
  v19 = v38;
  if ( v8 )
  {
    *(_QWORD *)&v36 = 0;
    v37 = 0;
    nullsub_1(v9);
    v20 = (void *)sub_140001650(13, 1);
    if ( !v20 )
      sub_141938D2B(1, 13);
    qmemcpy(v20, "cached_tokens", 13);
    v30 = 13;
    v31 = v20;
    v32 = 13;
    v41.m256i_i8[0] = 2;
    v41.m256i_i64[1] = 0;
    v41.m256i_i64[2] = v39;
    sub_140E72AA0(v28, &v36, &v30, &v41);
    if ( v28[0] != 0xFF )
      sub_14002F9D0(v28);
    *(_OWORD *)&v41.m256i_u64[1] = v36;
    v41.m256i_i64[3] = v37;
    v41.m256i_i8[0] = 5;
    v43 = 1;
    v39 = sub_141641AF0(aInputTokensDet_0, 20, &v34);
    sub_14002F9D0(v39);
    v21 = *(_OWORD *)v41.m256i_i8;
    v22 = (_OWORD *)v39;
    *(_OWORD *)(v39 + 16) = *(_OWORD *)&v41.m256i_u64[2];
    *v22 = v21;
  }
  if ( v19 )
  {
    *(_QWORD *)&v36 = 0;
    v37 = 0;
    nullsub_1(v9);
    v23 = (_OWORD *)sub_140001650(16, 1);
    if ( !v23 )
      sub_141938D2B(1, 16);
    *v23 = *(_OWORD *)aReasoningToken;
    v30 = 16;
    v31 = v23;
    v32 = 16;
    v41.m256i_i8[0] = 2;
    v41.m256i_i64[1] = 0;
    v41.m256i_i64[2] = v29;
    sub_140E72AA0(v28, &v36, &v30, &v41);
    if ( v28[0] != 0xFF )
      sub_14002F9D0(v28);
    *(_OWORD *)&v41.m256i_u64[1] = v36;
    v41.m256i_i64[3] = v37;
    v41.m256i_i8[0] = 5;
    v42 = 1;
    v38 = sub_141641AF0(aOutputTokensDe, 21, &v34);
    sub_14002F9D0(v38);
    v24 = *(_OWORD *)v41.m256i_i8;
    v25 = (_OWORD *)v38;
    *(_OWORD *)(v38 + 16) = *(_OWORD *)&v41.m256i_u64[2];
    *v25 = v24;
  }
  v26 = v34;
  v18[1] = v35;
  *v18 = v26;
  return v18;
}
