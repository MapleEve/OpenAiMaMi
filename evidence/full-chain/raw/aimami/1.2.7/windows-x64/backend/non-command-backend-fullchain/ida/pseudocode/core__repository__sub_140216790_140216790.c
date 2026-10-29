// win 1.2.7 | module src/core/repository.rs | ea 0x140216790 | name sub_140216790
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_140216790(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  void *result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __m256i v16; // [rsp+28h] [rbp-58h]
  __int128 v17; // [rsp+48h] [rbp-38h]
  __int128 v18; // [rsp+58h] [rbp-28h]
  __int128 v19; // [rsp+68h] [rbp-18h]
  __int128 v20; // [rsp+78h] [rbp-8h]
  __int128 v21; // [rsp+88h] [rbp+8h]
  __int128 v22; // [rsp+98h] [rbp+18h]
  __int128 v23; // [rsp+A8h] [rbp+28h]
  __int128 v24; // [rsp+B8h] [rbp+38h]
  __int64 v25; // [rsp+C8h] [rbp+48h]
  __int128 v26; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v27; // [rsp+E0h] [rbp+60h]
  __int128 v28; // [rsp+F0h] [rbp+70h]
  __int128 v29; // [rsp+100h] [rbp+80h]
  __int128 v30; // [rsp+110h] [rbp+90h]
  __int128 v31; // [rsp+120h] [rbp+A0h]
  __int128 v32; // [rsp+138h] [rbp+B8h] BYREF
  void *v33; // [rsp+148h] [rbp+C8h]
  _BYTE v34[104]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v35; // [rsp+1B8h] [rbp+138h]
  __int128 v36; // [rsp+1C8h] [rbp+148h]
  __int128 v37; // [rsp+1D8h] [rbp+158h]
  __int128 v38; // [rsp+1E8h] [rbp+168h]
  __int64 v39; // [rsp+1F8h] [rbp+178h]
  __int128 v40; // [rsp+200h] [rbp+180h] BYREF
  void *v41; // [rsp+210h] [rbp+190h]
  __int64 v42; // [rsp+220h] [rbp+1A0h]

  v42 = -2;
  sub_140ED4870(&v15, a2, a3);
  v6 = v15;
  if ( v15 == -2 )
  {
    *(_OWORD *)&v34[80] = v20;
    *(_OWORD *)&v34[64] = v19;
    *(_OWORD *)&v34[48] = v18;
    *(_OWORD *)&v34[32] = v17;
    *(__m256i *)v34 = v16;
    *(_QWORD *)&v32 = v34;
    *((_QWORD *)&v32 + 1) = sub_14104A7D0;
    sub_1416ABFD0(&v26, &unk_1419D6EC7, &v32);
    *(_OWORD *)&v16.m256i_u64[1] = v26;
    v16.m256i_i64[3] = v27;
    result = (void *)sub_1401954F0(v34);
    v16.m256i_i64[0] = 9;
    *(_OWORD *)(a1 + 88) = v20;
    *(_OWORD *)(a1 + 72) = v19;
    v8 = *(_OWORD *)v16.m256i_i8;
    v9 = *(_OWORD *)&v16.m256i_u64[2];
    v10 = v17;
    *(_OWORD *)(a1 + 56) = v18;
    *(_OWORD *)(a1 + 40) = v10;
    *(_OWORD *)(a1 + 24) = v9;
    *(_OWORD *)(a1 + 8) = v8;
    *(_QWORD *)a1 = 2;
    return result;
  }
  v39 = v25;
  v38 = v24;
  v37 = v23;
  v36 = v22;
  v35 = v21;
  *(__m256i *)&v34[8] = v16;
  *(_OWORD *)&v34[40] = v17;
  *(_OWORD *)&v34[56] = v18;
  *(_OWORD *)&v34[72] = v19;
  *(_OWORD *)&v34[88] = v20;
  *(_QWORD *)v34 = v15;
  if ( (unsigned __int8)sub_140ED7E50(v34) )
  {
    result = (void *)sub_140ED5630(a1, v34, a2, a3);
    if ( *(_DWORD *)a1 != 2 )
      goto LABEL_9;
    v31 = *(_OWORD *)(a1 + 88);
    v30 = *(_OWORD *)(a1 + 72);
    v12 = *(_OWORD *)(a1 + 8);
    v13 = *(_OWORD *)(a1 + 24);
    v14 = *(_OWORD *)(a1 + 40);
    v29 = *(_OWORD *)(a1 + 56);
    v28 = v14;
    v27 = v13;
    v26 = v12;
    *(_QWORD *)&v40 = &v26;
    *((_QWORD *)&v40 + 1) = sub_14104A7D0;
    sub_1416ABFD0(&v32, &unk_1419D6EC7, &v40);
    v40 = v32;
    v41 = v33;
    sub_1401954F0(&v26);
    *(_QWORD *)(a1 + 8) = 9;
    *(_OWORD *)(a1 + 16) = v40;
    result = v41;
    *(_QWORD *)(a1 + 32) = v41;
  }
  else
  {
    nullsub_1(v11);
    result = (void *)sub_140001650(56, 1);
    if ( !result )
      sub_141938D2B(1, 56);
    qmemcpy(result, "Account snapshot is not a switchable ChatGPT OAuth login", 56);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 56;
    *(_QWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 32) = 56;
  }
  *(_QWORD *)a1 = 2;
LABEL_9:
  if ( v6 != -1 && v6 )
    result = (void *)sub_140001660(*(_QWORD *)&v34[8], v6, 1);
  if ( *(_QWORD *)&v34[24] != -1 && *(_QWORD *)&v34[24] )
    result = (void *)sub_140001660(*(_QWORD *)&v34[32], *(_QWORD *)&v34[24], 1);
  if ( *(_QWORD *)&v34[48] != -1 && *(_QWORD *)&v34[48] )
    result = (void *)sub_140001660(*(_QWORD *)&v34[56], *(_QWORD *)&v34[48], 1);
  if ( *(_QWORD *)&v34[72] != -1 && *(_QWORD *)&v34[72] )
    result = (void *)sub_140001660(*(_QWORD *)&v34[80], *(_QWORD *)&v34[72], 1);
  if ( *(_QWORD *)&v34[96] != -1 && *(_QWORD *)&v34[96] )
    result = (void *)sub_140001660(v35, *(_QWORD *)&v34[96], 1);
  if ( (_QWORD)v36 != -1 && (_QWORD)v36 )
    result = (void *)sub_140001660(*((_QWORD *)&v36 + 1), v36, 1);
  if ( *((_QWORD *)&v37 + 1) != -1 )
  {
    if ( *((_QWORD *)&v37 + 1) )
      return (void *)sub_140001660(v38, *((_QWORD *)&v37 + 1), 1);
  }
  return result;
}
