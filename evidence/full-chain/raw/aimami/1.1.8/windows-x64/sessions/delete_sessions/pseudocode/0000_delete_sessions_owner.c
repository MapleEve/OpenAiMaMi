// win 1.1.8 delete_sessions node va=0x1403e9230 depth=0
// delete_sessions_owner
__int64 __fastcall sub_1403E9230(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r14
  __int128 v4; // kr00_16
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BYTE v11[360]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v12[360]; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE v13[512]; // [rsp+308h] [rbp+288h] BYREF
  __int64 v14; // [rsp+508h] [rbp+488h]
  _BYTE v15[384]; // [rsp+510h] [rbp+490h] BYREF
  __int64 v16; // [rsp+690h] [rbp+610h]
  int v17; // [rsp+698h] [rbp+618h]
  int v18; // [rsp+69Ch] [rbp+61Ch]
  __int64 v19; // [rsp+6A0h] [rbp+620h] BYREF
  __m256i v20; // [rsp+6A8h] [rbp+628h] BYREF
  __int128 *v21; // [rsp+6C8h] [rbp+648h]
  __int64 v22; // [rsp+6D0h] [rbp+650h]
  __m256i v23; // [rsp+830h] [rbp+7B0h] BYREF
  __int128 v24; // [rsp+850h] [rbp+7D0h]
  __int128 v25; // [rsp+860h] [rbp+7E0h]
  __int128 v26; // [rsp+870h] [rbp+7F0h]
  __int128 v27; // [rsp+880h] [rbp+800h]
  __int128 v28; // [rsp+890h] [rbp+810h]
  __int128 v29; // [rsp+8A0h] [rbp+820h] BYREF
  __int64 v30; // [rsp+8B0h] [rbp+830h]
  __int128 v31; // [rsp+8C0h] [rbp+840h] BYREF
  __int64 v32; // [rsp+8D0h] [rbp+850h]
  __int128 v33; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v34; // [rsp+8F0h] [rbp+870h]
  __m256i v35; // [rsp+900h] [rbp+880h] BYREF
  __m256i v36; // [rsp+920h] [rbp+8A0h] BYREF
  __int128 v37; // [rsp+940h] [rbp+8C0h]
  __int128 v38; // [rsp+950h] [rbp+8D0h]
  __int128 v39; // [rsp+960h] [rbp+8E0h]
  __int128 v40; // [rsp+970h] [rbp+8F0h]
  __int128 v41; // [rsp+980h] [rbp+900h]
  __int64 v42; // [rsp+998h] [rbp+918h]
  __int128 v43; // [rsp+9A0h] [rbp+920h] BYREF
  __int64 v44; // [rsp+9B0h] [rbp+930h]
  __int64 v45; // [rsp+9C0h] [rbp+940h]
  __int64 v46; // [rsp+9C8h] [rbp+948h]
  char v47; // [rsp+9D6h] [rbp+956h]
  char v48; // [rsp+9D7h] [rbp+957h]
  __int64 v49; // [rsp+9D8h] [rbp+958h]

  v49 = -2; /*0x1403e9249*/
  sub_1412762D0(v13, a1, 520); /*0x1403e926a*/
  sub_1412762D0(v15, a1 + 520, 400); /*0x1403e9286*/
  v44 = *(_QWORD *)(a1 + 936); /*0x1403e9292*/
  v43 = *(_OWORD *)(a1 + 920); /*0x1403e92a0*/
  v22 = 0; /*0x1403e92a7*/
  v19 = (__int64)aDeleteSessions; /*0x1403e92b9*/
  v20.m256i_i64[0] = 15; /*0x1403e92c0*/
  v20.m256i_i64[1] = (__int64)aRepo; /*0x1403e92d2*/
  v20.m256i_i64[2] = 4; /*0x1403e92d9*/
  v20.m256i_i64[3] = (__int64)v13; /*0x1403e92e4*/
  v21 = &v43; /*0x1403e92f2*/
  v48 = 1; /*0x1403e9304*/
  v2 = sub_140419310((volatile void *)(v14 + 16)); /*0x1403e9311*/
  if ( !v2 ) /*0x1403e9317*/
  {
    v48 = 1; /*0x1403e9320*/
    sub_14127A550(&v35, &v19, &v20.m256i_u64[1]); /*0x1403e9335*/
    if ( v35.m256i_i8[0] != 6 ) /*0x1403e9342*/
    {
      v20 = v35; /*0x1403e9560*/
      sub_1412762D0(v12, a1 + 520, 360); /*0x1403e9581*/
      v31 = *(_OWORD *)(a1 + 880); /*0x1403e9594*/
      v32 = *(_QWORD *)(a1 + 896); /*0x1403e95a2*/
      v19 = 1; /*0x1403e95b5*/
      v48 = 0; /*0x1403e95c0*/
      sub_1407A7610((unsigned int)v12, v16, (unsigned int)&v19, (unsigned int)&v31, v17, v18); /*0x1403e95e0*/
      goto LABEL_18; /*0x1403e95e6*/
    }
    v2 = v35.m256i_i64[1]; /*0x1403e9348*/
  }
  v22 = 0; /*0x1403e934f*/
  v19 = (__int64)aDeleteSessions; /*0x1403e935a*/
  v20.m256i_i64[0] = 15; /*0x1403e9361*/
  v20.m256i_i64[1] = (__int64)aIds; /*0x1403e9373*/
  v20.m256i_i64[2] = 3; /*0x1403e937a*/
  v20.m256i_i64[3] = (__int64)v13; /*0x1403e9385*/
  v21 = &v43; /*0x1403e938c*/
  v48 = 1; /*0x1403e9393*/
  sub_140214640(&v36, &v19); /*0x1403e93a8*/
  if ( v36.m256i_i8[0] == 6 ) /*0x1403e93b5*/
  {
    v34 = v36.m256i_i64[3]; /*0x1403e93c2*/
    v33 = *(_OWORD *)&v36.m256i_u64[1]; /*0x1403e93d0*/
    v48 = 1; /*0x1403e93d7*/
    sub_140026410(&v23, v2, &v33); /*0x1403e93ef*/
    sub_1412762D0(&v19, a1 + 520, 400); /*0x1403e9405*/
    if ( !__OFSUB__(0, v23.m256i_i64[0]) ) /*0x1403e9413*/
    {
      v41 = v28; /*0x1403e94f2*/
      v40 = v27; /*0x1403e9500*/
      v39 = v26; /*0x1403e950e*/
      v38 = v25; /*0x1403e9531*/
      v37 = v24; /*0x1403e9538*/
      v36 = v23; /*0x1403e953f*/
LABEL_17:
      v47 = 0; /*0x1403e9665*/
      sub_1407AE0C0(&v19, &v36); /*0x1403e967a*/
      goto LABEL_18; /*0x1403e967a*/
    }
    v3 = v23.m256i_i64[1]; /*0x1403e9419*/
    v4 = *(_OWORD *)&v23.m256i_u64[2]; /*0x1403e9427*/
    if ( v23.m256i_i64[3] < 0 ) /*0x1403e9431*/
    {
      v5 = 0; /*0x1403e9437*/
      goto LABEL_8; /*0x1403e9437*/
    }
    if ( v23.m256i_i64[3] ) /*0x1403e95eb*/
    {
      nullsub_1(); /*0x1403e95f1*/
      v5 = 1; /*0x1403e95f6*/
      v6 = sub_140001360(*((_QWORD *)&v4 + 1), 1); /*0x1403e9603*/
      if ( !v6 ) /*0x1403e960b*/
      {
LABEL_8:
        v45 = v4; /*0x1403e9439*/
        v46 = v3; /*0x1403e9440*/
        sub_1412AD46B(v5, *((_QWORD *)&v4 + 1)); /*0x1403e944d*/
      }
      v7 = v6; /*0x1403e9611*/
      sub_1412762D0(v6, v4, *((_QWORD *)&v4 + 1)); /*0x1403e961d*/
      if ( !v3 ) /*0x1403e9625*/
        goto LABEL_16; /*0x1403e9625*/
    }
    else
    {
      v7 = 1; /*0x1403e972e*/
      if ( !v23.m256i_i64[1] ) /*0x1403e9736*/
        goto LABEL_16; /*0x1403e9736*/
    }
    sub_140001370(v4, v3, 1); /*0x1403e9633*/
LABEL_16:
    v36.m256i_i8[8] = 3; /*0x1403e9638*/
    v36.m256i_i64[2] = *((_QWORD *)&v4 + 1); /*0x1403e963f*/
    v36.m256i_i64[3] = v7; /*0x1403e9646*/
    *(_QWORD *)&v37 = *((_QWORD *)&v4 + 1); /*0x1403e964d*/
    v36.m256i_i64[0] = 0x8000000000000000uLL; /*0x1403e965e*/
    goto LABEL_17; /*0x1403e965e*/
  }
  v20 = v36; /*0x1403e9463*/
  sub_1412762D0(v11, a1 + 520, 360); /*0x1403e9481*/
  v29 = *(_OWORD *)(a1 + 880); /*0x1403e9494*/
  v30 = *(_QWORD *)(a1 + 896); /*0x1403e94a2*/
  v19 = 1; /*0x1403e94b5*/
  v48 = 0; /*0x1403e94c0*/
  sub_1407A7610((unsigned int)v11, v16, (unsigned int)&v19, (unsigned int)&v29, v17, v18); /*0x1403e94e0*/
LABEL_18:
  if ( !__OFSUB__(0, (_QWORD)v43) ) /*0x1403e9689*/
  {
    v8 = *((_QWORD *)&v43 + 1); /*0x1403e968f*/
    v45 = v44; /*0x1403e969d*/
    v46 = 0; /*0x1403e96a4*/
    v42 = *((_QWORD *)&v43 + 1); /*0x1403e96af*/
    while ( v45 != v46 ) /*0x1403e96ce*/
    {
      ++v46; /*0x1403e96d3*/
      v9 = v8 + 96; /*0x1403e96da*/
      sub_1401EEBE0(); /*0x1403e96de*/
      v8 = v9; /*0x1403e96e4*/
    }
    if ( (_QWORD)v43 ) /*0x1403e96f3*/
      sub_140001370(*((_QWORD *)&v43 + 1), 96 * v43, 8); /*0x1403e970a*/
  }
  return sub_140406280(v13); /*0x1403e971c*/
}