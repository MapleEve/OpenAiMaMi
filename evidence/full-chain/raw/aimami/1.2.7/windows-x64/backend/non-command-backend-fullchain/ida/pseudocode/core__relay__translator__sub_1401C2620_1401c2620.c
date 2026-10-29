// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1401c2620 | name sub_1401C2620
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401C2620(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r15
  bool v10; // cf
  __int64 v11; // r15
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  __int128 v21; // xmm0
  _OWORD *v22; // rax
  char v23; // al
  __int64 v24; // rcx
  int v25; // edx
  __int16 v26; // r8
  char v27; // r9
  __int128 v29; // [rsp+20h] [rbp-60h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h]
  _BYTE v31[32]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v32; // [rsp+58h] [rbp-28h]
  __int128 v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 v34; // [rsp+70h] [rbp-10h]
  __m256i v35; // [rsp+78h] [rbp-8h] BYREF
  _BYTE v36[24]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+30h]
  char v38; // [rsp+BFh] [rbp+3Fh]
  __int64 v39; // [rsp+C0h] [rbp+40h]

  v39 = -2;
  v3 = *a2;
  v4 = a2[2];
  v5 = a2[4];
  v6 = a2[6];
  if ( v6 | v5 | *a2 | v4 )
  {
    v7 = a2[3];
    if ( v3 )
      v3 = a2[1];
    v8 = v7 + v3;
    if ( __CFADD__(v7, v3) )
      v8 = -1;
    if ( !v4 )
      v8 = v3;
    v9 = a2[5];
    v10 = __CFADD__(v8, v9);
    v11 = v8 + v9;
    if ( v10 )
      v11 = -1;
    if ( !v5 )
      v11 = v8;
    if ( v6 )
      v6 = a2[7];
    *(_QWORD *)&v33 = 0;
    v34 = 0;
    nullsub_1(v3);
    v12 = (void *)sub_140001650(12, 1);
    if ( !v12 )
      sub_141938D2B(1, 12);
    qmemcpy(v12, "input_tokens", 12);
    *(_QWORD *)v36 = 12;
    *(_QWORD *)&v36[8] = v12;
    *(_QWORD *)&v36[16] = 12;
    v35.m256i_i8[0] = 2;
    v35.m256i_i64[1] = 0;
    v35.m256i_i64[2] = v11;
    sub_140E72AA0(v31, &v33, v36, &v35);
    if ( v31[0] != 0xFF )
      sub_14002F9D0(v31);
    nullsub_1(v13);
    v14 = (void *)sub_140001650(13, 1);
    if ( !v14 )
      sub_141938D2B(1, 13);
    qmemcpy(v14, "output_tokens", 13);
    *(_QWORD *)v36 = 13;
    *(_QWORD *)&v36[8] = v14;
    *(_QWORD *)&v36[16] = 13;
    v35.m256i_i8[0] = 2;
    v35.m256i_i64[1] = 0;
    v35.m256i_i64[2] = v6;
    sub_140E72AA0(v31, &v33, v36, &v35);
    if ( v31[0] != 0xFF )
      sub_14002F9D0(v31);
    nullsub_1(v15);
    v16 = (void *)sub_140001650(12, 1);
    if ( !v16 )
      sub_141938D2B(1, 12);
    qmemcpy(v16, "total_tokens", 12);
    *(_QWORD *)v36 = 12;
    *(_QWORD *)&v36[8] = v16;
    v10 = __CFADD__(v6, v11);
    v17 = v6 + v11;
    v18 = -1;
    if ( !v10 )
      v18 = v17;
    *(_QWORD *)&v36[16] = 12;
    v35.m256i_i8[0] = 2;
    v35.m256i_i64[1] = 0;
    v35.m256i_i64[2] = v18;
    sub_140E72AA0(v31, &v33, v36, &v35);
    if ( v31[0] != 0xFF )
      sub_14002F9D0(v31);
    *(_OWORD *)&v36[8] = v33;
    v37 = v34;
    v36[0] = 5;
    if ( (_BYTE)v4 )
    {
      *(_QWORD *)&v29 = 0;
      v30 = 0;
      nullsub_1(v19);
      v20 = (void *)sub_140001650(13, 1);
      if ( !v20 )
        sub_141938D2B(1, 13);
      qmemcpy(v20, "cached_tokens", 13);
      *(_QWORD *)&v33 = 13;
      *((_QWORD *)&v33 + 1) = v20;
      v34 = 13;
      v35.m256i_i8[0] = 2;
      v35.m256i_i64[1] = 0;
      v35.m256i_i64[2] = v7;
      sub_140E72AA0(v31, &v29, &v33, &v35);
      if ( v31[0] != 0xFF )
        sub_14002F9D0(v31);
      *(_OWORD *)&v35.m256i_u64[1] = v29;
      v35.m256i_i64[3] = v30;
      v35.m256i_i8[0] = 5;
      v38 = 1;
      v32 = sub_141641AF0(aInputTokensDet, 20, v36);
      sub_14002F9D0(v32);
      v21 = *(_OWORD *)v35.m256i_i8;
      v22 = (_OWORD *)v32;
      *(_OWORD *)(v32 + 16) = *(_OWORD *)&v35.m256i_u64[2];
      *v22 = v21;
    }
    v23 = v36[0];
    v24 = *(_QWORD *)&v36[1];
    v25 = *(_DWORD *)&v36[9];
    v26 = *(_WORD *)&v36[13];
    v27 = v36[15];
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v36[16];
    *(_QWORD *)(a1 + 24) = v37;
    *(_BYTE *)a1 = v23;
    *(_QWORD *)(a1 + 1) = v24;
    *(_DWORD *)(a1 + 9) = v25;
    *(_WORD *)(a1 + 13) = v26;
    *(_BYTE *)(a1 + 15) = v27;
  }
  else
  {
    *(_BYTE *)a1 = -1;
  }
  return a1;
}
