// win 1.2.7 | module src/core/analytics/parser/tools.rs | ea 0x140f8f050 | name sub_140F8F050
// win 1.2.7 | module src/core/analytics/parser/tools.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F8F050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _QWORD *a11)
{
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // rdx
  bool v19; // of
  unsigned __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rsi
  __m256i v32[4]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v33[6]; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD v34[3]; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v35; // [rsp+138h] [rbp+B8h]
  __int64 v36; // [rsp+140h] [rbp+C0h]
  __int64 v37; // [rsp+148h] [rbp+C8h]
  __int64 v38; // [rsp+150h] [rbp+D0h]
  __int128 v39; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v40; // [rsp+168h] [rbp+E8h]
  __m256i v41; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v42; // [rsp+190h] [rbp+110h] BYREF
  _DWORD *v43; // [rsp+198h] [rbp+118h]
  __int64 v44; // [rsp+1A0h] [rbp+120h]
  char v45; // [rsp+1AFh] [rbp+12Fh]
  __int64 v46; // [rsp+1B0h] [rbp+130h]

  v46 = -2;
  v35 = a4;
  v36 = a3;
  v37 = a2;
  v38 = a1;
  v11 = a8;
  v12 = a6;
  v34[0] = 0;
  v34[2] = 0;
  v13 = 0;
  v14 = 0;
  while ( v11 != a8 + 56 * a9 )
  {
    v15 = v11;
    v11 += 56;
    if ( *(_DWORD *)v15 == 1 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 >= 0 )
      {
        if ( *(_BYTE *)(v15 + 16) )
        {
          v17 = *(_QWORD *)(v15 + 24);
          if ( v17 >= 0 )
          {
            v18 = ((v17 + v13) >> 63) ^ 0x8000000000000000uLL;
            v19 = __OFADD__(v17, v13);
            v13 += v17;
            if ( v19 )
              v13 = v18;
            v20 = ((v14 + v16) >> 63) ^ 0x8000000000000000uLL;
            v19 = __OFADD__(v16, v14);
            v14 += v16;
            if ( v19 )
              v14 = v20;
            sub_140E7B540(v34, v11 - 24);
            v12 = a6;
          }
        }
      }
    }
  }
  v21 = v38;
  v33[0] = v38;
  v22 = v37;
  v33[1] = v37;
  v23 = v36;
  v33[2] = v36;
  v24 = v35;
  v33[3] = v35;
  v33[4] = a5;
  v33[5] = v12;
  *(_QWORD *)&v39 = 0;
  v40 = 0;
  nullsub_1(a1);
  v25 = sub_140001650(5, 1);
  if ( !v25 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v25 + 4) = 115;
  *(_DWORD *)v25 = 1701603686;
  v42 = 5;
  v43 = (_DWORD *)v25;
  v44 = 5;
  v45 = 1;
  sub_140C119A0(v32, v34);
  if ( v32[0].m256i_i8[0] == -1 )
  {
    v41.m256i_i64[0] = v32[0].m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_18,
      43,
      (unsigned int)&v41,
      (unsigned int)&off_141A58C48,
      (__int64)&off_141A64C58);
  }
  v41 = v32[0];
  v45 = 0;
  sub_140E72AA0(v32, &v39, &v42, &v41);
  if ( v32[0].m256i_i8[0] != -1 )
    sub_14002F9D0(v32);
  nullsub_1(v26);
  v27 = sub_140001650(5, 1);
  if ( !v27 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v27 + 4) = 100;
  *(_DWORD *)v27 = 1701078113;
  v42 = 5;
  v43 = (_DWORD *)v27;
  v44 = 5;
  v32[0].m256i_i8[0] = 2;
  v32[0].m256i_i64[1] = 0;
  v32[0].m256i_i64[2] = v14;
  sub_140E72AA0(&v41, &v39, &v42, v32);
  if ( v41.m256i_i8[0] != -1 )
    sub_14002F9D0(&v41);
  nullsub_1(v28);
  v29 = (_DWORD *)sub_140001650(7, 1);
  if ( !v29 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v29 + 3) = 1684370533;
  *v29 = 1701602660;
  v42 = 7;
  v43 = v29;
  v44 = 7;
  v32[0].m256i_i8[0] = 2;
  v32[0].m256i_i64[1] = 0;
  v32[0].m256i_i64[2] = v13;
  sub_140E72AA0(&v41, &v39, &v42, v32);
  if ( v41.m256i_i8[0] != -1 )
    sub_14002F9D0(&v41);
  *(_OWORD *)&v41.m256i_u64[1] = v39;
  v41.m256i_i64[3] = v40;
  v41.m256i_i8[0] = 5;
  sub_140F8B6E0(
    (unsigned int)v32,
    (unsigned int)aChange_0,
    6,
    (unsigned int)v33,
    3,
    v21,
    v22,
    v23,
    v24,
    a7,
    (__int64)&v41,
    a10);
  v30 = a11[2];
  if ( v30 == *a11 )
    sub_141910220(a11);
  sub_1418F44E0((__m128i *)(a11[1] + 144 * v30), (const __m128i *)v32, 0x90u);
  a11[2] = v30 + 1;
  return sub_140E8BFC0(v34);
}
