// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140368340 | name sub_140368340
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140368340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  signed __int64 v7; // r15
  __int64 v8; // r14
  const __m128i *v10; // rbx
  __m128i *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int8 *v16; // rax
  __int64 v17; // rcx
  __int8 v18; // bl
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rax
  const __m128i *v25; // rbx
  __m128i *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  void *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int128 v44; // [rsp+48h] [rbp-38h] BYREF
  __int64 v45; // [rsp+58h] [rbp-28h]
  __int128 v46; // [rsp+60h] [rbp-20h] BYREF
  __int64 v47; // [rsp+70h] [rbp-10h]
  __int64 v48; // [rsp+78h] [rbp-8h]
  __m256i v49; // [rsp+80h] [rbp+0h]
  __int64 v50; // [rsp+A8h] [rbp+28h]
  _QWORD *v51; // [rsp+B0h] [rbp+30h]
  __int128 v52; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v53; // [rsp+C8h] [rbp+48h]
  __int64 v54; // [rsp+D0h] [rbp+50h]
  __int64 v55; // [rsp+D8h] [rbp+58h]
  _OWORD v56[2]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v57; // [rsp+100h] [rbp+80h] BYREF
  __int128 v58; // [rsp+110h] [rbp+90h]
  __int64 v59; // [rsp+120h] [rbp+A0h]
  __int64 v60; // [rsp+128h] [rbp+A8h]
  __m256i v61; // [rsp+130h] [rbp+B0h] BYREF
  char v62; // [rsp+158h] [rbp+D8h]
  char v63; // [rsp+159h] [rbp+D9h]
  char v64; // [rsp+15Ah] [rbp+DAh]
  char v65; // [rsp+15Bh] [rbp+DBh]
  char v66; // [rsp+15Ch] [rbp+DCh]
  char v67; // [rsp+15Dh] [rbp+DDh]
  char v68; // [rsp+15Eh] [rbp+DEh]
  char v69; // [rsp+15Fh] [rbp+DFh]
  __int64 v70; // [rsp+160h] [rbp+E0h]

  v70 = -2;
  v5 = sub_1416419F0(aName_2, 4, a3);
  if ( v5 && *(_BYTE *)v5 == 3 )
  {
    v7 = *(_QWORD *)(v5 + 24);
    if ( v7 < 0 )
    {
      v8 = 0;
      goto LABEL_5;
    }
    v48 = *(_QWORD *)(v5 + 24);
    if ( v7 )
    {
      v10 = *(const __m128i **)(v5 + 16);
      nullsub_1(v6);
      v8 = 1;
      v11 = (__m128i *)sub_140001650(v7, 1);
      if ( !v11 )
LABEL_5:
        sub_141938D2B(v8, v7);
      v50 = (__int64)v11;
      sub_1418F44E0(v11, v10, v7);
    }
    else
    {
      v50 = 1;
    }
    v63 = 1;
    v12 = sub_1416419F0(aDescription_0, 11, a3);
    LOBYTE(v13) = 1;
    v59 = v13;
    if ( v12 && *(_BYTE *)v12 == 3 )
    {
      v14 = *(_QWORD *)(v12 + 24);
      if ( v14 < 0 )
      {
        v15 = 0;
        goto LABEL_16;
      }
      if ( v14 )
      {
        v25 = *(const __m128i **)(v12 + 16);
        nullsub_1(v13);
        v15 = 1;
        v26 = (__m128i *)sub_140001650(v14, 1);
        if ( !v26 )
        {
LABEL_16:
          v63 = 1;
          sub_141938D2B(v15, v14);
        }
        v55 = (__int64)v26;
        v60 = v14;
        sub_1418F44E0(v26, v25, v14);
      }
      else
      {
        v55 = 1;
        v60 = 0;
      }
      v59 = 0;
    }
    else
    {
      v60 = -1;
    }
    v69 = 1;
    v68 = 1;
    v16 = (unsigned __int8 *)sub_1416419F0(aInputSchema, 12, a3);
    if ( v16 )
    {
      v18 = *v16;
      v19 = *v16;
      switch ( *v16 )
      {
        case 0u:
          break;
        case 1u:
          v61.m256i_i8[1] = v16[1];
          break;
        case 2u:
          *(_OWORD *)&v61.m256i_u64[1] = *(_OWORD *)(v16 + 8);
          break;
        case 3u:
          v69 = 1;
          v68 = 1;
          sub_1416AC440(&v61.m256i_u64[1], v16 + 8);
          break;
        case 4u:
          v27 = *((_QWORD *)v16 + 2);
          v28 = *((_QWORD *)v16 + 3);
          v69 = 1;
          v68 = 1;
          sub_1403918C0(&v61.m256i_u64[1], v27, v28);
          break;
        case 5u:
          if ( *((_QWORD *)v16 + 3) )
          {
            v29 = *((_QWORD *)v16 + 1);
            if ( !v29 )
            {
              v69 = 1;
              v68 = 1;
              sub_141939020(&off_141A54900);
            }
            v30 = *((_QWORD *)v16 + 2);
            v69 = 1;
            v68 = 1;
            sub_140E11B90(&v61.m256i_u64[1], v29, v30);
          }
          else
          {
            v61.m256i_i64[1] = 0;
            v61.m256i_i64[3] = 0;
          }
          break;
      }
      v61.m256i_i8[0] = v18;
      *(_OWORD *)&v49.m256i_u64[2] = *(_OWORD *)&v61.m256i_u64[2];
      v49.m256i_i16[0] = __PAIR16__(v61.m256i_u8[1], v18);
      *(__int32 *)((char *)v49.m256i_i32 + 2) = *(__int32 *)((char *)v61.m256i_i32 + 2);
      v49.m256i_i16[3] = v61.m256i_i16[3];
      v49.m256i_i64[1] = v61.m256i_i64[1];
    }
    else
    {
      *(_QWORD *)&v52 = 0;
      v53 = 0;
      nullsub_1(v17);
      v20 = (_DWORD *)sub_140001650(4, 1);
      if ( !v20 )
        sub_141938D2B(1, 4);
      *v20 = 1701869940;
      *(_QWORD *)&v57 = 4;
      *((_QWORD *)&v57 + 1) = v20;
      *(_QWORD *)&v58 = 4;
      nullsub_1(v21);
      v22 = sub_140001650(6, 1);
      v54 = v22;
      if ( !v22 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v22 + 4) = 29795;
      *(_DWORD *)v22 = 1701470831;
      v61.m256i_i8[0] = 3;
      v61.m256i_i64[1] = 6;
      v61.m256i_i64[2] = v22;
      v61.m256i_i64[3] = 6;
      sub_140E72AA0(v56, &v52, &v57, &v61);
      if ( LOBYTE(v56[0]) != 0xFF )
        sub_14002F9D0(v56);
      nullsub_1(v23);
      v24 = (void *)sub_140001650(10, 1);
      if ( !v24 )
        sub_141938D2B(1, 10);
      qmemcpy(v24, "properties", 10);
      *(_QWORD *)&v57 = 10;
      *((_QWORD *)&v57 + 1) = v24;
      *(_QWORD *)&v58 = 10;
      v61.m256i_i64[1] = 0;
      v61.m256i_i64[3] = 0;
      v61.m256i_i8[0] = 5;
      sub_140E72AA0(v56, &v52, &v57, &v61);
      if ( LOBYTE(v56[0]) != 0xFF )
        sub_14002F9D0(v56);
      *(_OWORD *)&v49.m256i_u64[1] = v52;
      v49.m256i_i64[3] = v53;
      v49.m256i_i8[0] = 5;
    }
    *(_QWORD *)&v46 = 0;
    v47 = 0;
    nullsub_1(v19);
    v31 = (_DWORD *)sub_140001650(4, 1);
    LOBYTE(v54) = v31 == nullptr;
    v32 = v48;
    if ( !v31 )
    {
      v67 = 1;
      v66 = 1;
      v65 = 1;
      sub_141938D2B(1, 4);
    }
    *v31 = 1701667182;
    *(_QWORD *)&v57 = 4;
    *((_QWORD *)&v57 + 1) = v31;
    *(_QWORD *)&v58 = 4;
    v61.m256i_i64[1] = v32;
    v61.m256i_i64[2] = v50;
    v61.m256i_i64[3] = v32;
    v61.m256i_i8[0] = 3;
    v67 = 1;
    v66 = 1;
    v65 = 1;
    sub_140E72AA0(v56, &v46, &v57, &v61);
    if ( LOBYTE(v56[0]) != 0xFF )
    {
      v67 = 1;
      v66 = 1;
      v65 = 1;
      sub_14002F9D0(v56);
    }
    if ( !(_BYTE)v59 )
    {
      nullsub_1(v33);
      v34 = (_QWORD *)sub_140001650(11, 1);
      v51 = v34;
      if ( !v34 )
        sub_141938D2B(1, 11);
      qmemcpy(v34, "description", 11);
      *(_QWORD *)&v57 = 11;
      *((_QWORD *)&v57 + 1) = v34;
      *(_QWORD *)&v58 = 11;
      v61.m256i_i64[1] = v60;
      v61.m256i_i64[2] = v55;
      v61.m256i_i64[3] = v60;
      v61.m256i_i8[0] = 3;
      sub_140E72AA0(v56, &v46, &v57, &v61);
      if ( LOBYTE(v56[0]) != 0xFF )
        sub_14002F9D0(v56);
    }
    nullsub_1(v33);
    v35 = (void *)sub_140001650(10, 1);
    if ( !v35 )
    {
      v67 = 1;
      v66 = 1;
      v65 = v59;
      sub_141938D2B(1, 10);
    }
    qmemcpy(v35, "parameters", 10);
    *(_QWORD *)&v57 = 10;
    *((_QWORD *)&v57 + 1) = v35;
    *(_QWORD *)&v58 = 10;
    v61 = v49;
    v67 = 1;
    v66 = 0;
    v65 = v59;
    sub_140E72AA0(v56, &v46, &v57, &v61);
    if ( LOBYTE(v56[0]) != 0xFF )
    {
      v67 = 1;
      v66 = 0;
      v65 = v59;
      sub_14002F9D0(v56);
    }
    *(_QWORD *)&v44 = 0;
    v45 = 0;
    nullsub_1(v36);
    v37 = (_DWORD *)sub_140001650(4, 1);
    if ( !v37 )
    {
      v64 = 1;
      sub_141938D2B(1, 4);
    }
    *v37 = 1701869940;
    *(_QWORD *)&v57 = 4;
    *((_QWORD *)&v57 + 1) = v37;
    *(_QWORD *)&v58 = 4;
    nullsub_1(v38);
    v39 = (_QWORD *)sub_140001650(8, 1);
    v51 = v39;
    if ( !v39 )
      sub_141938D2B(1, 8);
    *v39 = 0x6E6F6974636E7566LL;
    v61.m256i_i8[0] = 3;
    v61.m256i_i64[1] = 8;
    v61.m256i_i64[2] = (__int64)v39;
    v61.m256i_i64[3] = 8;
    sub_140E72AA0(v56, &v44, &v57, &v61);
    if ( LOBYTE(v56[0]) != 0xFF )
    {
      v64 = 1;
      sub_14002F9D0(v56);
    }
    nullsub_1(v40);
    v41 = (_QWORD *)sub_140001650(8, 1);
    if ( !v41 )
    {
      v64 = 1;
      sub_141938D2B(1, 8);
    }
    *v41 = 0x6E6F6974636E7566LL;
    *(_QWORD *)&v52 = 8;
    *((_QWORD *)&v52 + 1) = v41;
    v53 = 8;
    v61.m256i_i64[3] = v47;
    *(_OWORD *)&v61.m256i_u64[1] = v46;
    v61.m256i_i8[0] = 5;
    v62 = 1;
    sub_140412420(v56, &v61);
    if ( LOBYTE(v56[0]) == 0xFF )
    {
      *(_QWORD *)&v57 = *((_QWORD *)&v56[0] + 1);
      sub_141939040(
        (unsigned int)aCalledResultUn_2,
        43,
        (unsigned int)&v57,
        (unsigned int)&off_1419E6A30,
        (__int64)&off_1419E8B38);
    }
    v58 = v56[1];
    v57 = v56[0];
    v62 = 0;
    sub_140E72AA0(v56, &v44, &v52, &v57);
    if ( LOBYTE(v56[0]) != 0xFF )
      sub_14002F9D0(v56);
    v64 = 0;
    sub_14002F9D0(&v61);
    *(_OWORD *)((char *)&v61.m256i_u32[1] + 3) = v44;
    *(__int64 *)((char *)&v61.m256i_i64[2] + 7) = v45;
    *(_BYTE *)a1 = 5;
    v42 = *(__int64 *)((char *)&v61.m256i_i64[1] + 7);
    v43 = *(__int64 *)((char *)&v61.m256i_i64[2] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v61.m256i_i8;
    *(_QWORD *)(a1 + 16) = v42;
    *(_QWORD *)(a1 + 24) = v43;
  }
  else
  {
    *(_BYTE *)a1 = -1;
  }
  return a1;
}
