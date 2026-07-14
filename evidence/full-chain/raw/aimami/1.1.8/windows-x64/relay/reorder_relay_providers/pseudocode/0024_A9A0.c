// win 1.1.8 reorder_relay_providers node va=0x14027a9a0 depth=2
// A9A0
__int64 __fastcall sub_14027A9A0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 *v10; // r14
  int v11; // eax
  char *v12; // r15
  char v13; // al
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r15
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // r15
  const __m128i *v33; // r12
  __m128i si128; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __m128i v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v45; // rbx
  __int64 v46; // r14
  __int64 v47; // r15
  const __m128i *v48; // r12
  __m128i v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rbx
  unsigned __int64 v55; // rax
  __int64 v56; // r14
  __int64 *v57; // rdi
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rax
  __int64 *v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 i; // rdi
  char v67[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v68; // [rsp+30h] [rbp-50h]
  unsigned __int64 v69; // [rsp+38h] [rbp-48h]
  __m128i v70; // [rsp+40h] [rbp-40h]
  __int64 v71; // [rsp+50h] [rbp-30h]
  __m128i v72[6]; // [rsp+180h] [rbp+100h] BYREF
  __m128i v73; // [rsp+1E0h] [rbp+160h] BYREF
  _BYTE v74[24]; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v75; // [rsp+208h] [rbp+188h]
  __int128 v76; // [rsp+218h] [rbp+198h]
  __int128 v77; // [rsp+228h] [rbp+1A8h]
  __int64 v78; // [rsp+238h] [rbp+1B8h]
  char v79; // [rsp+334h] [rbp+2B4h]
  __int64 v80; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v81; // [rsp+348h] [rbp+2C8h]
  _QWORD v82[4]; // [rsp+370h] [rbp+2F0h] BYREF
  __m128i v83; // [rsp+390h] [rbp+310h] BYREF
  __int128 v84; // [rsp+3A0h] [rbp+320h]
  __int64 v85; // [rsp+3B0h] [rbp+330h]
  __int64 v86; // [rsp+3B8h] [rbp+338h]
  __int64 v87; // [rsp+3C0h] [rbp+340h]
  __int64 *v88; // [rsp+3C8h] [rbp+348h]
  __int64 v89; // [rsp+3D0h] [rbp+350h]

  v89 = -2; /*0x14027a9bb*/
  v88 = a3; /*0x14027a9c6*/
  sub_14027BE60((__int64)&v73, (__int64)a2); /*0x14027a9da*/
  if ( v79 ) /*0x14027a9e7*/
  {
    sub_14004A000(&v73); /*0x14027a9f4*/
    nullsub_1(); /*0x14027a9fa*/
    v5 = sub_140001360(107, 1); /*0x14027aa09*/
    if ( !v5 ) /*0x14027aa11*/
      sub_1412AD46B(1, 107); /*0x14027b241*/
    *(_OWORD *)(v5 + 91) = *(__int128 *)((char *)&xmmword_14132BBEB + 11); /*0x14027aa1e*/
    *(_OWORD *)(v5 + 80) = xmmword_14132BBEB; /*0x14027aa29*/
    *(_OWORD *)(v5 + 64) = xmmword_14132BBDB; /*0x14027aa34*/
    *(_OWORD *)(v5 + 48) = xmmword_14132BBCB; /*0x14027aa3f*/
    *(_OWORD *)(v5 + 32) = xmmword_14132BBBB; /*0x14027aa4a*/
    *(_OWORD *)(v5 + 16) = xmmword_14132BBAB; /*0x14027aa55*/
    *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)&xmmword_14132BB9B); /*0x14027aa61*/
    *(_QWORD *)(a1 + 8) = 9; /*0x14027aa65*/
    *(_QWORD *)(a1 + 16) = 107; /*0x14027aa6d*/
    *(_QWORD *)(a1 + 24) = v5; /*0x14027aa75*/
    *(_QWORD *)(a1 + 32) = 107; /*0x14027aa79*/
    *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x14027aa8b*/
    v6 = v88; /*0x14027aa8e*/
    v7 = v88[1]; /*0x14027aa95*/
    v8 = v88[2]; /*0x14027aa99*/
    if ( !v8 ) /*0x14027aaa0*/
      goto LABEL_65; /*0x14027aaa0*/
    goto LABEL_50; /*0x14027aaa0*/
  }
  sub_14004A000(&v73); /*0x14027aab2*/
  v9 = a2[1]; /*0x14027aab8*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 16), 1, 0) ) /*0x14027aac4*/
    sub_1412ABCB0((signed __int8 *)(v9 + 16)); /*0x14027b12b*/
  v10 = off_141963EA8; /*0x14027aacf*/
  if ( 2 * *off_141963EA8 ) /*0x14027aad9*/
  {
    LOBYTE(v11) = !sub_1412AC970(); /*0x14027b13c*/
    if ( !*(_BYTE *)(v9 + 17) ) /*0x14027b144*/
      goto LABEL_9; /*0x14027b144*/
LABEL_71:
    v73.m128i_i64[0] = v9 + 16; /*0x14027b14a*/
    v73.m128i_i8[8] = v11; /*0x14027b151*/
    sub_1412AD780((__int64)aRelayStatePois, 20, (__int64)&v73, (__int64)&off_14132C718, (__int64)&off_14132B938); /*0x14027b17d*/
  }
  v11 = 0; /*0x14027aae5*/
  if ( *(_BYTE *)(v9 + 17) ) /*0x14027aae7*/
    goto LABEL_71; /*0x14027aaed*/
LABEL_9:
  LODWORD(v87) = v11; /*0x14027aaf3*/
  v82[3] = v9 + 16; /*0x14027aaf9*/
  sub_1402DB2B0(v67, v9 + 24); /*0x14027ab08*/
  v12 = (char *)(v9 + 16); /*0x14027ab15*/
  if ( !(_BYTE)v87 && 2 * *v10 && !sub_1412AC970() ) /*0x14027b220*/
    *(_BYTE *)(v9 + 17) = 1; /*0x14027b22e*/
  v13 = *v12; /*0x14027ab2c*/
  *v12 = 0; /*0x14027ab2c*/
  if ( v13 == 2 ) /*0x14027ab31*/
    WakeByAddressSingle((PVOID)(v9 + 16)); /*0x14027b18b*/
  v8 = v88[2]; /*0x14027ab42*/
  v73.m128i_i64[0] = v88[1]; /*0x14027ab55*/
  v14 = v73.m128i_i64[0]; /*0x14027ab3e*/
  v73.m128i_i64[1] = v73.m128i_i64[0] + 24 * v8; /*0x14027ab5c*/
  *(_QWORD *)v74 = 0; /*0x14027ab63*/
  sub_1405BBE10(&v80, &v73); /*0x14027ab7f*/
  v15 = v68; /*0x14027ab85*/
  v72[0].m128i_i64[0] = (__int64)&v80; /*0x14027ab8d*/
  v73.m128i_i64[0] = (__int64)v72; /*0x14027ab9b*/
  if ( v69 >= 2 ) /*0x14027aba6*/
  {
    if ( v69 >= 0x15 ) /*0x14027b19a*/
      sub_140365550(v68, v69, &v73); /*0x14027b250*/
    else
      sub_140751710(v68, v69, 1, &v73); /*0x14027b1ad*/
  }
  v16 = v70.m128i_i64[1]; /*0x14027abac*/
  v17 = v71; /*0x14027abb0*/
  v18 = sub_1410642E0(v15); /*0x14027abb4*/
  v20 = v18; /*0x14027abba*/
  v21 = *(_BYTE *)(v18 + 16) == 1; /*0x14027abbd*/
  v87 = v14; /*0x14027abc1*/
  if ( v21 ) /*0x14027abc8*/
  {
    v22 = *(_QWORD *)v18; /*0x14027abce*/
    v23 = *(_QWORD *)(v20 + 8); /*0x14027abd1*/
  }
  else
  {
    v22 = sub_14107A440(); /*0x14027b1b8*/
    *(_QWORD *)v20 = v22; /*0x14027b1be*/
    *(_QWORD *)(v20 + 8) = v23; /*0x14027b1c1*/
    *(_BYTE *)(v20 + 16) = 1; /*0x14027b1c5*/
  }
  *(_QWORD *)v20 = v22 + 1; /*0x14027abd9*/
  *(_OWORD *)v74 = xmmword_141326EB0; /*0x14027abe3*/
  v73 = _mm_loadu_si128((const __m128i *)&off_141326EA0); /*0x14027abf2*/
  *(_QWORD *)&v74[16] = v22; /*0x14027abfa*/
  *(_QWORD *)&v75 = v23; /*0x14027ac01*/
  if ( v17 ) /*0x14027ac0b*/
  {
    LOBYTE(v19) = 1; /*0x14027b1e0*/
    sub_1412A3FB0(&v73, v17, &v74[16], v19); /*0x14027b1e3*/
    for ( i = 0; i != v17; ++i ) /*0x14027b1e9*/
    {
      sub_14108F780((unsigned __int64 *)v72, v16 + 24 * i); /*0x14027b1fd*/
      sub_140228B70(&v73, v72); /*0x14027b20d*/
    }
  }
  v24 = _mm_load_si128(&v73); /*0x14027ac11*/
  v85 = *(_QWORD *)&v74[16]; /*0x14027ac27*/
  v86 = v75; /*0x14027ac35*/
  v84 = *(_OWORD *)v74; /*0x14027ac3c*/
  v83 = v24; /*0x14027ac43*/
  v82[0] = v68; /*0x14027ac5a*/
  v82[1] = v68 + 232 * v69; /*0x14027ac61*/
  v82[2] = &v83; /*0x14027ac6f*/
  sub_1401B6AA0(&v73, v82); /*0x14027ac84*/
  v25 = v71; /*0x14027ac8a*/
  if ( v71 ) /*0x14027ac91*/
  {
    v26 = (__int64 *)(v70.m128i_i64[1] + 8); /*0x14027ac97*/
    do /*0x14027aca7*/
    {
      v27 = *(v26 - 1); /*0x14027aca9*/
      if ( v27 ) /*0x14027acb0*/
        sub_140001370(*v26, v27, 1); /*0x14027acbb*/
      v26 += 3; /*0x14027aca0*/
      --v25; /*0x14027aca4*/
    }
    while ( v25 ); /*0x14027aca7*/
  }
  if ( v70.m128i_i64[0] ) /*0x14027accd*/
    sub_140001370(v70.m128i_i64[1], 24 * v70.m128i_i64[0], 8); /*0x14027ace1*/
  v71 = *(_QWORD *)v74; /*0x14027aced*/
  v70 = _mm_loadu_si128(&v73); /*0x14027acf9*/
  sub_1402DB2B0(&v73, v67); /*0x14027ad08*/
  sub_14027A5F0(v72, a2, &v73); /*0x14027ad1f*/
  if ( v72[0].m128i_i32[0] == 10 ) /*0x14027ad2c*/
  {
    sub_140273F40(&v73, a2); /*0x14027ad3c*/
    v28 = v73.m128i_i64[0]; /*0x14027ad42*/
    if ( v73.m128i_i64[0] == 10 ) /*0x14027ad4d*/
    {
      sub_140589E90(&v73, v67); /*0x14027ad5e*/
      HIDWORD(_RAX) = (unsigned __int64)sub_1412762D0((__m128i *)a1, &v73, 0x158u) >> 32; /*0x14027ad74*/
      v30 = v83.m128i_i64[1]; /*0x14027ad79*/
      if ( v83.m128i_i64[1] ) /*0x14027ad83*/
      {
        v31 = *((_QWORD *)&v84 + 1); /*0x14027ad89*/
        if ( *((_QWORD *)&v84 + 1) ) /*0x14027ad93*/
        {
          v32 = v83.m128i_i64[0]; /*0x14027ad99*/
          v33 = (const __m128i *)(v83.m128i_i64[0] + 16); /*0x14027ada5*/
          _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v83.m128i_i64[0])); /*0x14027adad*/
          do /*0x14027adcd*/
          {
            if ( !(_WORD)_EDI ) /*0x14027add6*/
            {
              do /*0x14027adfb*/
              {
                si128 = _mm_load_si128(v33); /*0x14027ade0*/
                v32 -= 384; /*0x14027ade6*/
                ++v33; /*0x14027aded*/
                _EDI = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x14027adf5*/
              }
              while ( !_EDI ); /*0x14027adfb*/
            }
            __asm { tzcnt eax, edi } /*0x14027adfd*/
            v36 = -3 * _RAX; /*0x14027ae04*/
            v37 = *(_QWORD *)(v32 + 8 * v36 - 24); /*0x14027ae08*/
            if ( v37 ) /*0x14027ae10*/
              sub_140001370(*(_QWORD *)(v32 + 8 * v36 - 16), v37, 1); /*0x14027ae20*/
            --v31; /*0x14027adc0*/
            _RAX = _EDI & (unsigned int)(_EDI - 1); /*0x14027adc6*/
            _EDI &= _EDI - 1; /*0x14027adc8*/
          }
          while ( v31 ); /*0x14027adcd*/
        }
        v59 = (24 * v30 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x14027b032*/
        v60 = v59 + v30 + 17; /*0x14027b039*/
        if ( v60 ) /*0x14027b03d*/
          sub_140001370(v83.m128i_i64[0] - v59, v60, 16); /*0x14027b052*/
      }
      if ( v81 ) /*0x14027b061*/
      {
        v61 = (24 * v81 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x14027b06f*/
        if ( v61 + v81 != -17 ) /*0x14027b07a*/
          sub_140001370(v80 - v61, v61 + v81 + 17, 16); /*0x14027b08c*/
      }
      sub_14004A000(v67); /*0x14027b096*/
      v7 = v87; /*0x14027b09c*/
      if ( !v8 ) /*0x14027b0a6*/
      {
        v64 = *v88; /*0x14027b11e*/
        if ( !*v88 ) /*0x14027b11e*/
          return a1; /*0x14027b124*/
        goto LABEL_66; /*0x14027b124*/
      }
      v56 = v87; /*0x14027b0a8*/
      v62 = (__int64 *)(v87 + 8); /*0x14027b0ab*/
      v6 = v88; /*0x14027b0af*/
      do /*0x14027b0c7*/
      {
        v63 = *(v62 - 1); /*0x14027b0c9*/
        if ( v63 ) /*0x14027b0d0*/
          sub_140001370(*v62, v63, 1); /*0x14027b0db*/
        v62 += 3; /*0x14027b0c0*/
        --v8; /*0x14027b0c4*/
      }
      while ( v8 ); /*0x14027b0c7*/
      goto LABEL_64; /*0x14027b0c7*/
    }
    *(_QWORD *)(a1 + 96) = v78; /*0x14027ae74*/
    *(_OWORD *)(a1 + 80) = v77; /*0x14027ae7f*/
    v41 = _mm_loadu_si128((const __m128i *)&v73.m128i_u64[1]); /*0x14027ae83*/
    v42 = *(_OWORD *)&v74[8]; /*0x14027ae8b*/
    v43 = v75; /*0x14027ae92*/
    *(_OWORD *)(a1 + 64) = v76; /*0x14027aea0*/
    *(_OWORD *)(a1 + 48) = v43; /*0x14027aea4*/
    *(_OWORD *)(a1 + 32) = v42; /*0x14027aea8*/
    *(__m128i *)(a1 + 16) = v41; /*0x14027aeac*/
    *(_QWORD *)(a1 + 8) = v28; /*0x14027aeb1*/
  }
  else
  {
    *(__m128i *)(a1 + 88) = v72[5]; /*0x14027ae2e*/
    *(__m128i *)(a1 + 72) = v72[4]; /*0x14027ae39*/
    v38 = _mm_loadu_si128(v72); /*0x14027ae3d*/
    v39 = v72[1]; /*0x14027ae45*/
    v40 = v72[2]; /*0x14027ae4c*/
    *(__m128i *)(a1 + 56) = v72[3]; /*0x14027ae5a*/
    *(__m128i *)(a1 + 40) = v40; /*0x14027ae5e*/
    *(__m128i *)(a1 + 24) = v39; /*0x14027ae62*/
    *(__m128i *)(a1 + 8) = v38; /*0x14027ae66*/
  }
  HIDWORD(_RAX) = 0x80000000; /*0x14027aeb5*/
  *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x14027aebf*/
  v45 = v83.m128i_i64[1]; /*0x14027aec2*/
  if ( v83.m128i_i64[1] ) /*0x14027aecc*/
  {
    v46 = *((_QWORD *)&v84 + 1); /*0x14027aed2*/
    if ( *((_QWORD *)&v84 + 1) ) /*0x14027aedc*/
    {
      v47 = v83.m128i_i64[0]; /*0x14027aee2*/
      v48 = (const __m128i *)(v83.m128i_i64[0] + 16); /*0x14027aeee*/
      _EDI = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v83.m128i_i64[0])); /*0x14027aef6*/
      do /*0x14027af0d*/
      {
        if ( !(_WORD)_EDI ) /*0x14027af12*/
        {
          do /*0x14027af3b*/
          {
            v50 = _mm_load_si128(v48); /*0x14027af20*/
            v47 -= 384; /*0x14027af26*/
            ++v48; /*0x14027af2d*/
            _EDI = _mm_movemask_epi8(v50) ^ 0xFFFF; /*0x14027af35*/
          }
          while ( !_EDI ); /*0x14027af3b*/
        }
        __asm { tzcnt eax, edi } /*0x14027af3d*/
        v51 = -3 * _RAX; /*0x14027af44*/
        v52 = *(_QWORD *)(v47 + 8 * v51 - 24); /*0x14027af48*/
        if ( v52 ) /*0x14027af50*/
          sub_140001370(*(_QWORD *)(v47 + 8 * v51 - 16), v52, 1); /*0x14027af60*/
        --v46; /*0x14027af00*/
        _RAX = _EDI & (unsigned int)(_EDI - 1); /*0x14027af06*/
        _EDI &= _EDI - 1; /*0x14027af08*/
      }
      while ( v46 ); /*0x14027af0d*/
    }
    v53 = (24 * v45 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x14027af73*/
    v54 = v53 + v45 + 17; /*0x14027af7a*/
    if ( v54 ) /*0x14027af7e*/
      sub_140001370(v83.m128i_i64[0] - v53, v54, 16); /*0x14027af93*/
  }
  if ( v81 ) /*0x14027afa2*/
  {
    v55 = (24 * v81 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x14027afb0*/
    if ( v55 + v81 != -17 ) /*0x14027afbb*/
      sub_140001370(v80 - v55, v55 + v81 + 17, 16); /*0x14027afcd*/
  }
  sub_14004A000(v67); /*0x14027afd7*/
  v7 = v87; /*0x14027afdd*/
  v6 = v88; /*0x14027afe4*/
  if ( v8 ) /*0x14027afee*/
  {
LABEL_50:
    v56 = v7; /*0x14027aff4*/
    v57 = (__int64 *)(v7 + 8); /*0x14027aff7*/
    do /*0x14027b007*/
    {
      v58 = *(v57 - 1); /*0x14027b00d*/
      if ( v58 ) /*0x14027b014*/
        sub_140001370(*v57, v58, 1); /*0x14027b01f*/
      v57 += 3; /*0x14027b000*/
      --v8; /*0x14027b004*/
    }
    while ( v8 ); /*0x14027b007*/
LABEL_64:
    v7 = v56; /*0x14027b0e2*/
  }
LABEL_65:
  v64 = *v6; /*0x14027b0e5*/
  if ( *v6 ) /*0x14027b0e5*/
LABEL_66:
    sub_140001370(v7, 24 * v64, 8); /*0x14027b0ed*/
  return a1; /*0x14027b103*/
}