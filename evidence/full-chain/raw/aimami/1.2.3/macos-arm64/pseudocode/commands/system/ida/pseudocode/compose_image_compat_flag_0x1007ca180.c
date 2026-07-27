// __ZN13codexmate_lib8commands6system25compose_image_compat_flag @ 0x1007ca180 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::system::compose_image_compat_flag::hd7b1c02b2fa2311b(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  size_t v6; // rcx
  size_t v7; // r15
  __int64 v8; // r12
  __int64 v9; // r12
  char v10; // r15
  char v11; // r13
  __int64 v12; // r14
  size_t v13; // rbx
  __int64 v14; // rax
  const __m128i *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // eax
  bool v20; // zf
  size_t v21; // rax
  __m128i v22; // xmm0
  _BYTE *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // al
  size_t v27; // rcx
  size_t v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r13
  unsigned __int64 v36; // r15
  char v37; // r12
  _BYTE *v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  size_t v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  size_t v45; // r12
  size_t v46; // rax
  __int64 v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rax
  size_t v50; // rbx
  unsigned __int64 v51; // r13
  __int64 v52; // r15
  size_t v53; // r12
  size_t v54; // rbx
  __int64 v55; // r14
  __int64 v56; // rdx
  size_t v57; // rcx
  __int64 v58; // rdi
  size_t v59; // r15
  size_t v60; // r12
  _QWORD *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // r9
  __int64 v67; // rsi
  __int64 v68; // r9
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  _QWORD v74[7]; // [rsp+0h] [rbp-130h] BYREF
  char v75; // [rsp+38h] [rbp-F8h]
  __int16 v76; // [rsp+40h] [rbp-F0h]
  __int64 v77; // [rsp+48h] [rbp-E8h]
  size_t v78; // [rsp+50h] [rbp-E0h]
  __int64 v79; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v80; // [rsp+60h] [rbp-D0h]
  _QWORD v81[5]; // [rsp+68h] [rbp-C8h] BYREF
  char v82; // [rsp+90h] [rbp-A0h]
  __int16 v83; // [rsp+98h] [rbp-98h]
  size_t v84; // [rsp+A0h] [rbp-90h]
  size_t v85; // [rsp+A8h] [rbp-88h]
  __int64 v86; // [rsp+B0h] [rbp-80h]
  __int64 v87; // [rsp+B8h] [rbp-78h]
  _QWORD *v88; // [rsp+C0h] [rbp-70h]
  __int64 v89; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-60h]
  __int64 v91; // [rsp+D8h] [rbp-58h]
  size_t v92; // [rsp+E0h] [rbp-50h]
  size_t __len; // [rsp+E8h] [rbp-48h]
  __int64 v94; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v95; // [rsp+F8h] [rbp-38h]
  size_t v96; // [rsp+100h] [rbp-30h]

  v4 = a3; /*0x1007ca194*/
  v5 = a1; /*0x1007ca197*/
  if ( !a4 ) /*0x1007ca1a6*/
  {
    v88 = a1; /*0x1007ca383*/
    v94 = 0; /*0x1007ca387*/
    v95 = 8; /*0x1007ca38f*/
    v96 = 0; /*0x1007ca397*/
    v79 = 0; /*0x1007ca39f*/
    v80 = a3; /*0x1007ca3aa*/
    v81[0] = a2; /*0x1007ca3b1*/
    v81[1] = a3; /*0x1007ca3b8*/
    v81[2] = 0; /*0x1007ca3bf*/
    v81[3] = a3; /*0x1007ca3ca*/
    v81[4] = 0xA0000000ALL; /*0x1007ca3d1*/
    v82 = 1; /*0x1007ca3d8*/
    v83 = 0; /*0x1007ca3df*/
    v86 = 0; /*0x1007ca3e8*/
    LODWORD(__len) = 0; /*0x1007ca3f0*/
    LODWORD(v87) = 0; /*0x1007ca3f7*/
    while ( 1 ) /*0x1007ca400*/
    {
      v29 = v81[0]; /*0x1007ca400*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007ca412*/
        &v89,
        v81);
      if ( (_DWORD)v89 == 1 ) /*0x1007ca41b*/
        break; /*0x1007ca41b*/
      if ( HIBYTE(v83) || (HIBYTE(v83) = 1, v31 = v80 - v79, ((unsigned __int8)v83 | (v80 != v79)) != 1) ) /*0x1007ca470*/
      {
LABEL_69:
        v50 = v96; /*0x1007ca6ed*/
        if ( ((unsigned __int8)~(_BYTE)v87 & __len & (unsigned __int8)v86 & 1) == 0 ) /*0x1007ca701*/
          goto LABEL_102; /*0x1007ca701*/
        v51 = v92; /*0x1007ca707*/
        v5 = v88; /*0x1007ca70e*/
        if ( v92 < v96 ) /*0x1007ca712*/
        {
          v52 = 16 * v92; /*0x1007ca71f*/
          memmove((void *)(16 * v92 + v95), (const void *)(v95 + 16 * v92 + 16), 16 * (v96 + ~v92)); /*0x1007ca738*/
          v53 = v50 - 1; /*0x1007ca73d*/
          v96 = v50 - 1; /*0x1007ca741*/
          if ( v50 - 1 <= v51 ) /*0x1007ca748*/
          {
            --v50; /*0x1007ca977*/
          }
          else
          {
            v54 = 16 * (v50 - v51) - 32; /*0x1007ca755*/
            while ( 1 ) /*0x1007ca760*/
            {
              v55 = v95; /*0x1007ca760*/
              core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1007ca76d*/
                *(_QWORD *)(v95 + 16 * v51),
                *(_QWORD *)(v95 + v52 + 8));
              if ( v56 ) /*0x1007ca775*/
                break; /*0x1007ca775*/
              memmove((void *)(v52 + v55), (const void *)(v52 + v55 + 16), v54); /*0x1007ca788*/
              v96 = --v53; /*0x1007ca790*/
              v54 -= 16LL; /*0x1007ca794*/
              if ( v53 <= v92 ) /*0x1007ca79f*/
              {
                v50 = v92; /*0x1007ca7a1*/
                goto LABEL_102; /*0x1007ca7a4*/
              }
            }
            v50 = v53; /*0x1007ca97c*/
LABEL_102:
            v5 = v88; /*0x1007ca97f*/
          }
        }
        alloc::str::join_generic_copy::ha9d2732844b8793d(&v79, v95, v50, "\n", 1); /*0x1007ca99e*/
        v69 = v81[0]; /*0x1007ca9a3*/
        v91 = v81[0]; /*0x1007ca9aa*/
        v90 = v80; /*0x1007ca9bc*/
        v89 = v79; /*0x1007ca9c0*/
        if ( v81[0] ) /*0x1007ca9c7*/
        {
          v70 = v90; /*0x1007ca9c9*/
          if ( *(_BYTE *)(v90 + v81[0] - 1) != 10 ) /*0x1007ca9d2*/
          {
            v71 = v81[0]; /*0x1007ca9d4*/
            if ( v89 == v81[0] ) /*0x1007ca9db*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007caa68*/
                &v89,
                v81[0],
                1,
                1,
                1,
                v68);
              v70 = v90; /*0x1007caa6d*/
              v71 = v91; /*0x1007caa71*/
            }
            *(_BYTE *)(v70 + v71) = 10; /*0x1007ca9dd*/
            v91 = v69 + 1; /*0x1007ca9e4*/
          }
        }
        v5[2] = v91; /*0x1007ca9ec*/
        goto LABEL_109; /*0x1007ca9ec*/
      }
      v32 = v81[0] + v79; /*0x1007ca476*/
      if ( v31 ) /*0x1007ca480*/
        goto LABEL_35; /*0x1007ca480*/
LABEL_41:
      v33 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v32, v31); /*0x1007ca4b0*/
      if ( !v34 ) /*0x1007ca4be*/
        goto LABEL_51; /*0x1007ca4be*/
      v35 = v33; /*0x1007ca4c4*/
      v36 = v34; /*0x1007ca4c7*/
      v37 = *(_BYTE *)v33; /*0x1007ca4ca*/
      if ( *(_BYTE *)v33 == 91 ) /*0x1007ca4d2*/
      {
        v44 = (unsigned int)__len; /*0x1007ca58a*/
        LOBYTE(v44) = ~(_BYTE)v87 & v86 & __len; /*0x1007ca590*/
        if ( (v44 & 1) != 0 ) /*0x1007ca595*/
        {
          v45 = v92; /*0x1007ca59f*/
          if ( v92 >= v96 ) /*0x1007ca5a6*/
            alloc::vec::Vec$LT$T$C$A$GT$::remove::assert_failed::h08ec7ef24832c20e(v92, v96, &off_10196B4D8, v44); /*0x1007caaa9*/
          v84 = 16 * v92; /*0x1007ca5bc*/
          __len = v96; /*0x1007ca5d3*/
          memmove((void *)(16 * v92 + v95), (const void *)(v95 + 16 * v92 + 16), 16 * (v96 + ~v92)); /*0x1007ca5d7*/
          v96 = __len - 1; /*0x1007ca5e4*/
          v85 = __len - 1; /*0x1007ca5e8*/
          if ( __len - 1 > v45 ) /*0x1007ca5f2*/
          {
            v46 = 16 * (__len - v92) - 32; /*0x1007ca5fc*/
            do /*0x1007ca65e*/
            {
              __len = v46; /*0x1007ca600*/
              v47 = v95; /*0x1007ca604*/
              core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1007ca618*/
                *(_QWORD *)(v95 + v84),
                *(_QWORD *)(v95 + v84 + 8));
              if ( v48 ) /*0x1007ca624*/
                break; /*0x1007ca624*/
              memmove((void *)(v84 + v47), (const void *)(v84 + v47 + 16), __len); /*0x1007ca638*/
              v46 = __len - 16; /*0x1007ca64f*/
              v96 = --v85; /*0x1007ca64b*/
            }
            while ( v85 > v92 ); /*0x1007ca65e*/
          }
        }
        if ( v36 == 10 ) /*0x1007ca664*/
        {
          v41 = v96; /*0x1007ca686*/
          if ( !(*(_QWORD *)v35 ^ 0x657275746165665BLL | *(unsigned __int16 *)(v35 + 8) ^ 0x5D73LL) ) /*0x1007ca683*/
          {
            v86 = 1; /*0x1007ca691*/
            LODWORD(__len) = 1; /*0x1007ca697*/
            LODWORD(v87) = 0; /*0x1007ca69a*/
            v92 = v96; /*0x1007ca6a1*/
            goto LABEL_66; /*0x1007ca6a5*/
          }
        }
        else
        {
          v41 = v96; /*0x1007ca6a7*/
        }
        LODWORD(__len) = 0; /*0x1007ca6ab*/
LABEL_66:
        if ( v41 != v94 ) /*0x1007ca6b6*/
          goto LABEL_53; /*0x1007ca6b6*/
LABEL_52:
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v94); /*0x1007ca54f*/
        goto LABEL_53; /*0x1007ca553*/
      }
      if ( (__len & 1) != 0 ) /*0x1007ca4dc*/
      {
        if ( v34 < 0x10 /*0x1007ca526*/
          || *(_QWORD *)v33 ^ 0x65675F6567616D69LL | *(_QWORD *)(v33 + 8) ^ 0x6E6F69746172656ELL
          || (v38 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(v33 + 16, v34 - 16),
              !v39)
          || *v38 != 61 )
        {
          v40 = (unsigned __int8)v87; /*0x1007ca537*/
          if ( v37 != 35 ) /*0x1007ca53f*/
            v40 = 1; /*0x1007ca53f*/
          LODWORD(v87) = v40; /*0x1007ca542*/
          goto LABEL_51; /*0x1007ca542*/
        }
        v49 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v38 + 1, v39 - 1); /*0x1007ca6d6*/
        LOBYTE(v49) = 1; /*0x1007ca6db*/
        LODWORD(__len) = v49; /*0x1007ca6dd*/
        if ( HIBYTE(v83) ) /*0x1007ca6e7*/
          goto LABEL_69; /*0x1007ca6e7*/
      }
      else
      {
LABEL_51:
        v41 = v96; /*0x1007ca545*/
        if ( v96 == v94 ) /*0x1007ca54d*/
          goto LABEL_52; /*0x1007ca54d*/
LABEL_53:
        v42 = v95; /*0x1007ca558*/
        v43 = 16 * v41; /*0x1007ca55f*/
        *(_QWORD *)(v95 + v43) = v32; /*0x1007ca563*/
        *(_QWORD *)(v42 + v43 + 8) = v31; /*0x1007ca567*/
        v96 = v41 + 1; /*0x1007ca56f*/
        if ( HIBYTE(v83) ) /*0x1007ca57a*/
          goto LABEL_69; /*0x1007ca57a*/
      }
    }
    v30 = v79; /*0x1007ca421*/
    v79 = v91; /*0x1007ca428*/
    v31 = v91 - v30; /*0x1007ca42f*/
    v32 = v30 + v29; /*0x1007ca432*/
    if ( v91 == v30 ) /*0x1007ca438*/
      goto LABEL_41; /*0x1007ca438*/
LABEL_35:
    if ( *(_BYTE *)(v32 + v31 - 1) == 10 ) /*0x1007ca488*/
    {
      if ( v31 == 1 ) /*0x1007ca490*/
      {
        v31 = 0; /*0x1007ca4a0*/
      }
      else if ( *(_BYTE *)(v32 + v31 - 2) == 13 ) /*0x1007ca498*/
      {
        v31 -= 2; /*0x1007ca49a*/
      }
      else
      {
        --v31; /*0x1007ca4a5*/
      }
    }
    goto LABEL_41; /*0x1007ca49e*/
  }
  v74[0] = 0; /*0x1007ca1ac*/
  v74[1] = a3; /*0x1007ca1b7*/
  v87 = a2; /*0x1007ca1be*/
  v74[2] = a2; /*0x1007ca1c2*/
  v74[3] = a3; /*0x1007ca1c9*/
  v74[4] = 0; /*0x1007ca1d0*/
  v74[5] = a3; /*0x1007ca1db*/
  v74[6] = 0xA0000000ALL; /*0x1007ca1e2*/
  v75 = 1; /*0x1007ca1e9*/
  v76 = 0; /*0x1007ca1f0*/
  ((void (__fastcall *)(__int64 *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h65d289e0da49e4b6)( /*0x1007ca204*/
    &v94,
    v74);
  v6 = v95; /*0x1007ca209*/
  v7 = v96; /*0x1007ca20d*/
  v8 = 16 * v96; /*0x1007ca214*/
  if ( !v96 ) /*0x1007ca21b*/
    goto LABEL_86; /*0x1007ca21b*/
  v86 = v4; /*0x1007ca221*/
  v84 = v96; /*0x1007ca225*/
  v88 = a1; /*0x1007ca22c*/
  v77 = 16 * v96; /*0x1007ca230*/
  v9 = v95 + v8; /*0x1007ca237*/
  v10 = 0; /*0x1007ca23a*/
  v11 = 0; /*0x1007ca23d*/
  v92 = 0; /*0x1007ca240*/
  v85 = v95; /*0x1007ca248*/
  v12 = v95; /*0x1007ca24f*/
  v13 = 0; /*0x1007ca252*/
  do /*0x1007ca326*/
  {
    v12 += 16; /*0x1007ca254*/
    while ( 1 ) /*0x1007ca283*/
    {
      v15 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1007ca283*/
                               *(_QWORD *)(v12 - 16),
                               *(_QWORD *)(v12 - 8));
      if ( !v16 ) /*0x1007ca28b*/
        break; /*0x1007ca28b*/
      if ( v15->i8[0] != 91 ) /*0x1007ca294*/
      {
        if ( v16 >= 0x10 && (v10 & 1) != 0 ) /*0x1007ca308*/
        {
          v22 = _mm_xor_si128(_mm_loadu_si128(v15), (__m128i)xmmword_1015E35C0); /*0x1007ca30e*/
          v10 = 1; /*0x1007ca31b*/
          if ( _mm_testz_si128(v22, v22) ) /*0x1007ca31e*/
          {
            v23 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(&v15[1], v16 - 16); /*0x1007ca33f*/
            if ( v24 ) /*0x1007ca347*/
            {
              if ( *v23 == 61 ) /*0x1007ca34c*/
              {
                v25 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v23 + 1, v24 - 1); /*0x1007ca35a*/
                v20 = v25 == 0; /*0x1007ca35f*/
                v26 = v25 != 0; /*0x1007ca362*/
                v27 = v78; /*0x1007ca365*/
                if ( !v20 ) /*0x1007ca36c*/
                  v27 = v13; /*0x1007ca36c*/
                v78 = v27; /*0x1007ca370*/
                v28 = v92; /*0x1007ca377*/
                LOBYTE(v28) = v26 | v92; /*0x1007ca37b*/
                v92 = v28; /*0x1007ca37d*/
              }
            }
          }
        }
        break; /*0x1007ca381*/
      }
      if ( (v10 & 1) != 0 ) /*0x1007ca29a*/
        goto LABEL_76; /*0x1007ca29a*/
      if ( v16 == 10 ) /*0x1007ca2a4*/
      {
        v17 = _byteswap_uint64(v15->i64[0]); /*0x1007ca2a9*/
        v18 = 0x5B66656174757265LL; /*0x1007ca2b6*/
        if ( v17 != 0x5B66656174757265LL ) /*0x1007ca2bc*/
          goto LABEL_14; /*0x1007ca2bc*/
        v17 = (unsigned __int16)__ROL2__(v15->i16[4], 8); /*0x1007ca2c6*/
        v19 = 0; /*0x1007ca2c9*/
        if ( (_DWORD)v17 != 29533 ) /*0x1007ca2d1*/
        {
          v18 = 29533; /*0x1007ca2d3*/
LABEL_14:
          v19 = 2 * (v17 >= v18) - 1; /*0x1007ca2d8*/
        }
        v20 = v19 == 0; /*0x1007ca2e4*/
        v10 = v20; /*0x1007ca2e6*/
        v21 = __len; /*0x1007ca2ea*/
        if ( v20 ) /*0x1007ca2ee*/
          v21 = v13; /*0x1007ca2ee*/
        __len = v21; /*0x1007ca2f2*/
        v11 |= v20; /*0x1007ca2f6*/
        goto LABEL_6; /*0x1007ca2f9*/
      }
      v10 = 0; /*0x1007ca260*/
LABEL_6:
      v14 = v12 - 16; /*0x1007ca263*/
      v12 += 16; /*0x1007ca267*/
      ++v13; /*0x1007ca26f*/
      if ( v14 + 16 == v9 ) /*0x1007ca275*/
        goto LABEL_76; /*0x1007ca275*/
    }
    ++v13; /*0x1007ca320*/
  }
  while ( v12 != v9 ); /*0x1007ca326*/
LABEL_76:
  if ( (v92 & 1) == 0 ) /*0x1007ca7ad*/
  {
    v5 = v88; /*0x1007ca7f6*/
    v7 = v84; /*0x1007ca7fa*/
    v6 = v85; /*0x1007ca801*/
    v4 = v86; /*0x1007ca808*/
    v8 = v77; /*0x1007ca80c*/
    if ( (v11 & 1) != 0 ) /*0x1007ca813*/
    {
      v60 = __len + 1; /*0x1007ca819*/
      if ( v84 < __len + 1 ) /*0x1007ca81f*/
        alloc::vec::Vec$LT$T$C$A$GT$::insert_mut::assert_failed::h5a99f51db44041ca(__len + 1, v84, &off_10196B508, v85); /*0x1007caa87*/
      if ( v84 == v94 ) /*0x1007ca829*/
      {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v94); /*0x1007ca82f*/
        v6 = v95; /*0x1007ca834*/
      }
      v61 = (_QWORD *)(v6 + 16 * v60); /*0x1007ca83f*/
      if ( v7 > v60 ) /*0x1007ca848*/
        memmove(v61 + 2, (const void *)(v6 + 16 * v60), 16 * (v7 - v60)); /*0x1007ca855*/
      *v61 = &unk_101673E05; /*0x1007ca861*/
      v61[1] = 24; /*0x1007ca864*/
      v59 = v7 + 1; /*0x1007ca86c*/
LABEL_96:
      v96 = v59; /*0x1007ca914*/
      goto LABEL_97; /*0x1007ca914*/
    }
LABEL_86:
    if ( v4 && *(_BYTE *)(v87 + v4 - 1) != 10 ) /*0x1007ca882*/
    {
      if ( v7 == v94 ) /*0x1007ca888*/
      {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v94); /*0x1007ca88e*/
        v6 = v95; /*0x1007ca893*/
      }
      *(_QWORD *)(v6 + v8) = 1; /*0x1007ca897*/
      *(_QWORD *)(v6 + v8 + 8) = 0; /*0x1007ca89f*/
      v96 = ++v7; /*0x1007ca8ab*/
    }
    if ( v7 == v94 ) /*0x1007ca8b3*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v94); /*0x1007ca8b9*/
    v62 = v95; /*0x1007ca8be*/
    v63 = 16 * v7; /*0x1007ca8c5*/
    *(_QWORD *)(v95 + v63) = &unk_101673DE1; /*0x1007ca8d0*/
    *(_QWORD *)(v62 + v63 + 8) = 10; /*0x1007ca8d4*/
    v96 = v7 + 1; /*0x1007ca8e1*/
    if ( v7 + 1 == v94 ) /*0x1007ca8e9*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v94); /*0x1007ca8ef*/
    v64 = v95; /*0x1007ca8f4*/
    v65 = 16 * (v7 + 1); /*0x1007ca8f8*/
    *(_QWORD *)(v95 + v65) = &unk_101673E05; /*0x1007ca903*/
    *(_QWORD *)(v64 + v65 + 8) = 24; /*0x1007ca907*/
    v59 = v7 + 2; /*0x1007ca910*/
    goto LABEL_96; /*0x1007ca910*/
  }
  v5 = v88; /*0x1007ca7c0*/
  v57 = v85; /*0x1007ca7c4*/
  if ( v78 >= v84 ) /*0x1007ca7cb*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v78, v84, &off_10196B4F0, v85); /*0x1007caa95*/
  v58 = 16 * v78; /*0x1007ca7d1*/
  *(_QWORD *)(v85 + v58) = &unk_101673E05; /*0x1007ca7dc*/
  *(_QWORD *)(v57 + v58 + 8) = 24; /*0x1007ca7e0*/
  v59 = v96; /*0x1007ca7e9*/
LABEL_97:
  alloc::str::join_generic_copy::ha9d2732844b8793d(&v79, v95, v59, "\n", 1); /*0x1007ca918*/
  v67 = v81[0]; /*0x1007ca938*/
  v91 = v81[0]; /*0x1007ca93f*/
  v90 = v80; /*0x1007ca951*/
  v89 = v79; /*0x1007ca955*/
  if ( v79 == v81[0] ) /*0x1007ca95c*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v89, v81[0], 1, 1, 1, v66); /*0x1007caa43*/
    v67 = v91; /*0x1007caa48*/
  }
  *(_BYTE *)(v90 + v67) = 10; /*0x1007ca966*/
  v91 = v67 + 1; /*0x1007ca96d*/
  v5[2] = v67 + 1; /*0x1007ca971*/
LABEL_109:
  v72 = v89; /*0x1007ca9f0*/
  v5[1] = v90; /*0x1007ca9f8*/
  *v5 = v72; /*0x1007ca9fc*/
  if ( v94 ) /*0x1007caa06*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, 16 * v94, 8); /*0x1007caa15*/
  return v5; /*0x1007caa1d*/
}