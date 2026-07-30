// __ZN13codexmate_lib4core5relay16codex_diagnostic31rollback_orphan_thread_adoption @ 0x100251160 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h6dbf5b1e432916a7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  void *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r12
  void *v12; // rbx
  __int64 v13; // r14
  __int128 v14; // kr00_16
  char v15; // al
  char v16; // dl
  int v17; // eax
  __int64 v18; // rbx
  int autocommit; // eax
  __int128 v20; // kr10_16
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // kr20_16
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rbx
  _QWORD *v32; // r14
  __int64 v33; // rsi
  __int64 result; // rax
  void *v35; // [rsp+0h] [rbp-2C0h] BYREF
  __int8 v36; // [rsp+8h] [rbp-2B8h]
  _BYTE v37[15]; // [rsp+9h] [rbp-2B7h]
  __int64 v38; // [rsp+18h] [rbp-2A8h]
  __int64 v39; // [rsp+20h] [rbp-2A0h]
  __int64 v40; // [rsp+28h] [rbp-298h]
  _OWORD v41[6]; // [rsp+30h] [rbp-290h] BYREF
  __int64 v42; // [rsp+90h] [rbp-230h]
  unsigned __int8 v43; // [rsp+98h] [rbp-228h]
  _DWORD v44[3]; // [rsp+99h] [rbp-227h]
  __int64 v45; // [rsp+A8h] [rbp-218h]
  __int64 v46; // [rsp+B0h] [rbp-210h]
  __int64 v47; // [rsp+B8h] [rbp-208h]
  _QWORD *v48; // [rsp+C0h] [rbp-200h]
  void *__s1; // [rsp+C8h] [rbp-1F8h] BYREF
  _BYTE __n[25]; // [rsp+D0h] [rbp-1F0h]
  unsigned __int64 v51; // [rsp+E9h] [rbp-1D7h]
  _BYTE v52[15]; // [rsp+F1h] [rbp-1CFh]
  __int16 v53; // [rsp+100h] [rbp-1C0h]
  char v54; // [rsp+102h] [rbp-1BEh]
  __int128 v55; // [rsp+108h] [rbp-1B8h] BYREF
  unsigned __int64 v56; // [rsp+118h] [rbp-1A8h]
  _BYTE v57[15]; // [rsp+120h] [rbp-1A0h]
  _QWORD v58[2]; // [rsp+130h] [rbp-190h]
  _BYTE __dst[79]; // [rsp+140h] [rbp-180h] BYREF
  __int128 v60; // [rsp+190h] [rbp-130h] BYREF
  _BYTE v61[23]; // [rsp+1A0h] [rbp-120h]
  __int64 v62; // [rsp+1B8h] [rbp-108h] BYREF
  __int64 v63; // [rsp+1C0h] [rbp-100h]
  __int64 v64; // [rsp+1C8h] [rbp-F8h]
  void *v65; // [rsp+1D0h] [rbp-F0h]
  void *v66; // [rsp+1D8h] [rbp-E8h]
  _BYTE __src[96]; // [rsp+1E0h] [rbp-E0h] BYREF
  __int64 v68; // [rsp+240h] [rbp-80h]
  __int64 (__fastcall **v69)(); // [rsp+248h] [rbp-78h]
  __m512i __s2; // [rsp+250h] [rbp-70h] BYREF
  __int8 v71; // [rsp+297h] [rbp-29h]

  v40 = a6; /*0x100251174*/
  v46 = a4; /*0x10025117b*/
  v47 = a2; /*0x100251182*/
  v48 = a1; /*0x100251189*/
  v62 = 0; /*0x100251190*/
  v63 = 8; /*0x10025119b*/
  v64 = 0; /*0x1002511a6*/
  if ( a5 ) /*0x1002511b4*/
  {
    v7 = v46 + 24 * a5; /*0x1002511c5*/
    v39 = v47 + 200 * a3; /*0x1002511d7*/
    do /*0x1002511f0*/
    {
      v8 = *(void **)(v7 - 16); /*0x1002511f0*/
      v38 = v7; /*0x1002511f4*/
      v9 = *(_QWORD *)(v7 - 8); /*0x1002511fb*/
      v66 = v8; /*0x100251202*/
      rusqlite::Connection::open_with_flags::hd1c0b64fdb0a2248(__src, v8, v9, 32838); /*0x100251211*/
      if ( (_BYTE)v69 == 3 ) /*0x10025121c*/
      {
        *(_OWORD *)&__dst[48] = *(_OWORD *)&__src[48]; /*0x10025123e*/
        *(_OWORD *)&__dst[32] = *(_OWORD *)&__src[32]; /*0x100251245*/
        *(_OWORD *)&__dst[16] = *(_OWORD *)&__src[16]; /*0x10025124c*/
        *(_OWORD *)__dst = *(_OWORD *)__src; /*0x100251253*/
        *(_QWORD *)&v60 = v66; /*0x100251261*/
        *((_QWORD *)&v60 + 1) = v9; /*0x100251268*/
        __s2.i64[0] = (__int64)&v60; /*0x100251276*/
        __s2.i64[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100251281*/
        __s2.i64[2] = (__int64)__dst; /*0x100251285*/
        __s2.i64[3] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100251290*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_1017C376F, &__s2); /*0x1002512a6*/
        v65 = __s1; /*0x1002512b2*/
        v71 = __n[0]; /*0x1002512c0*/
        *(_QWORD *)&v55 = *(_QWORD *)&__n[1]; /*0x1002512d1*/
        *(_QWORD *)((char *)&v55 + 7) = *(_QWORD *)&__n[8]; /*0x1002512d8*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst); /*0x1002512e2*/
        v58[0] = v55; /*0x1002512f5*/
        *(_QWORD *)((char *)v58 + 7) = *(_QWORD *)((char *)&v55 + 7); /*0x1002512fc*/
        *(_QWORD *)__dst = v58[0]; /*0x100251311*/
        *(_QWORD *)&__dst[7] = *(_QWORD *)((char *)&v55 + 7); /*0x100251318*/
        goto LABEL_46; /*0x10025131f*/
      }
      *(_QWORD *)((char *)&v55 + 7) = *(_QWORD *)&__src[24]; /*0x100251345*/
      *(_QWORD *)&v55 = *(_QWORD *)&__src[17]; /*0x10025134c*/
      v41[5] = *(_OWORD *)&__src[80]; /*0x10025136a*/
      v41[4] = *(_OWORD *)&__src[64]; /*0x10025136f*/
      v41[3] = *(_OWORD *)&__src[48]; /*0x100251374*/
      v41[2] = *(_OWORD *)&__src[32]; /*0x100251379*/
      *(_DWORD *)((char *)v44 + 3) = HIDWORD(v69); /*0x100251387*/
      v44[0] = *(_DWORD *)((char *)&v69 + 1); /*0x10025138b*/
      *(_QWORD *)((char *)v58 + 7) = *(_QWORD *)((char *)&v55 + 7); /*0x1002513a4*/
      v58[0] = *(_QWORD *)&__src[17]; /*0x1002513ab*/
      LOBYTE(v41[1]) = __src[16]; /*0x1002513b2*/
      *((_QWORD *)&v41[1] + 1) = *(_QWORD *)((char *)v58 + 7); /*0x1002513c6*/
      *(_QWORD *)((char *)&v41[1] + 1) = *(_QWORD *)&__src[17]; /*0x1002513ca*/
      v41[0] = *(_OWORD *)__src; /*0x1002513ce*/
      v42 = v68; /*0x1002513d5*/
      v43 = (unsigned __int8)v69; /*0x1002513dc*/
      rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&__s2, v41, 5, 0); /*0x1002513f4*/
      if ( __s2.i64[0] != 0x8000000000000016LL ) /*0x100251407*/
      {
        *(__m512i *)__src = __s2; /*0x10025198f*/
        *(_QWORD *)&v60 = v66; /*0x1002519df*/
        *((_QWORD *)&v60 + 1) = v9; /*0x1002519e6*/
        *(_QWORD *)__dst = &v60; /*0x1002519f4*/
        *(_QWORD *)&__dst[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100251a02*/
        *(_QWORD *)&__dst[16] = __src; /*0x100251a09*/
        *(_QWORD *)&__dst[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100251a17*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_1017C37B4, __dst); /*0x100251a2f*/
        v65 = __s1; /*0x100251a3b*/
        v71 = __n[0]; /*0x100251a49*/
        *(_QWORD *)&v60 = *(_QWORD *)&__n[1]; /*0x100251a5a*/
        *(_QWORD *)((char *)&v60 + 7) = *(_QWORD *)&__n[8]; /*0x100251a61*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__src); /*0x100251a6b*/
        *(_QWORD *)__dst = v60; /*0x100251a7e*/
        *(_QWORD *)&__dst[7] = *(_QWORD *)((char *)&v60 + 7); /*0x100251a85*/
        goto LABEL_45; /*0x100251a8c*/
      }
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v41, (&off_10196C458)[v43], qword_1015E4C08[v43]); /*0x100251437*/
      if ( *(_QWORD *)__src != 0x8000000000000016LL ) /*0x100251450*/
      {
        *(_QWORD *)&__dst[56] = *(_QWORD *)&__src[56]; /*0x100251ab1*/
        *(_OWORD *)&__dst[41] = *(_OWORD *)&__src[41]; /*0x100251ac1*/
        *(_QWORD *)&__dst[33] = *(_QWORD *)&__src[33]; /*0x100251ac9*/
        *(_OWORD *)&__dst[17] = *(_OWORD *)&__src[17]; /*0x100251ad8*/
        *(_OWORD *)__dst = *(_OWORD *)__src; /*0x100251adb*/
        __dst[16] = __src[16]; /*0x100251ae9*/
        __s1 = v66; /*0x100251af6*/
        *(_QWORD *)__n = v9; /*0x100251afd*/
        *(_QWORD *)__src = &__s1; /*0x100251b0b*/
        *(_QWORD *)&__src[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100251b19*/
        *(_QWORD *)&__src[16] = __dst; /*0x100251b20*/
        *(_QWORD *)&__src[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100251b2e*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s2, &unk_1017C3791, __src); /*0x100251b43*/
        v65 = (void *)__s2.i64[0]; /*0x100251b4c*/
        v71 = __s2.i8[8]; /*0x100251b57*/
        *(_QWORD *)__src = *(__int64 *)((char *)&__s2.i64[1] + 1); /*0x100251b65*/
        *(_QWORD *)&__src[7] = __s2.i64[2]; /*0x100251b6c*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst); /*0x100251b76*/
        memcpy(__dst, __src, sizeof(__dst)); /*0x100251b86*/
LABEL_45:
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v41); /*0x100251fb0*/
LABEL_46:
        *(_QWORD *)__src = 10; /*0x100251fbc*/
        *(_QWORD *)&__src[8] = v65; /*0x100251fce*/
        __src[16] = v71; /*0x100251fd9*/
        memcpy(&__src[17], __dst, 0x4Fu); /*0x100251fee*/
        __s2.i64[0] = 0; /*0x100251ff3*/
        *(__int128 *)((char *)__s2.i128 + 8) = 1u; /*0x100251ffb*/
        *(_QWORD *)&v41[1] = 1610612768; /*0x10025200b*/
        *(_QWORD *)&v41[0] = &__s2; /*0x10025201a*/
        *((_QWORD *)&v41[0] + 1) = &anon_7245a3145add9b93f83b0a9aa358a664_1177; /*0x100252028*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b( /*0x100252039*/
                                __src,
                                v41) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002522a7*/
            "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Resul"
            "t::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
            55,
            &__s1,
            &anon_7245a3145add9b93f83b0a9aa358a664_1194,
            &anon_7245a3145add9b93f83b0a9aa358a664_1180);
        v20 = __s2.i128[0]; /*0x10025204a*/
        v21 = __s2.i64[2]; /*0x10025204e*/
        v22 = v64; /*0x100252052*/
        if ( v64 == v62 ) /*0x100252060*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v62); /*0x100252069*/
        v23 = v63; /*0x10025206e*/
        v24 = 3 * v22; /*0x100252075*/
        *(_OWORD *)(v63 + 8 * v24) = v20; /*0x100252079*/
        *(_QWORD *)(v23 + 8 * v24 + 16) = v21; /*0x100252082*/
        v64 = v22 + 1; /*0x10025208a*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(__src); /*0x100252094*/
        goto LABEL_50; /*0x100252094*/
      }
      v10 = v47; /*0x100251456*/
      v45 = v9; /*0x10025145d*/
      while ( v10 != v39 ) /*0x100251477*/
      {
        v11 = v10; /*0x10025147d*/
        std::path::Path::components::he8b0f71a48373be5(&__s1, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16)); /*0x10025148f*/
        std::path::Path::components::he8b0f71a48373be5(&__s2, v66, v9); /*0x1002514a2*/
        v12 = __s1; /*0x1002514a7*/
        v13 = *(_QWORD *)__n; /*0x1002514ae*/
        v14 = __s2.i128[0]; /*0x1002514b9*/
        if ( *(_QWORD *)__n == __s2.i64[1] /*0x1002514ed*/
          && (_BYTE)v53 == __s2.i8[56]
          && HIBYTE(v53) == 2
          && __s2.i8[57] == 2
          && !memcmp(__s1, (const void *)__s2.i64[0], *(size_t *)__n) )
        {
          v10 = v11 + 200; /*0x100251952*/
          v9 = v45; /*0x100251968*/
          goto LABEL_19; /*0x10025196f*/
        }
        if ( __n[8] != 6 ) /*0x100251509*/
        {
          *(_QWORD *)&v57[7] = *(_QWORD *)&v52[7]; /*0x100251516*/
          *(_QWORD *)v57 = *(_QWORD *)v52; /*0x100251521*/
          v56 = v51; /*0x10025152c*/
          v55 = *(_OWORD *)&__n[9]; /*0x100251542*/
        }
        *(_QWORD *)__dst = v12; /*0x100251557*/
        *(_QWORD *)&__dst[8] = v13; /*0x10025155e*/
        __dst[16] = __n[8]; /*0x100251565*/
        *(_QWORD *)&__dst[48] = *(_QWORD *)&v57[7]; /*0x100251579*/
        *(_OWORD *)&__dst[33] = __PAIR128__(*(unsigned __int64 *)v57, v56); /*0x10025158f*/
        *(_OWORD *)&__dst[17] = v55; /*0x1002515a5*/
        *(_WORD *)&__dst[56] = v53; /*0x1002515a8*/
        __dst[58] = v54; /*0x1002515af*/
        if ( __s2.i8[16] != 6 ) /*0x1002515bb*/
        {
          *(_QWORD *)&v61[15] = __s2.i64[6]; /*0x1002515c5*/
          *(_OWORD *)v61 = *(__int128 *)((char *)&__s2.i128[2] + 1); /*0x1002515db*/
          v60 = *(__int128 *)((char *)&__s2.i128[1] + 1); /*0x1002515f1*/
        }
        *(_OWORD *)__src = v14; /*0x100251600*/
        __src[16] = __s2.i8[16]; /*0x10025160e*/
        *(_QWORD *)&__src[48] = *(_QWORD *)&v61[15]; /*0x100251622*/
        *(_OWORD *)&__src[33] = *(_OWORD *)v61; /*0x100251638*/
        *(_OWORD *)&__src[17] = v60; /*0x10025164e*/
        *(_WORD *)&__src[56] = __s2.i16[28]; /*0x100251651*/
        __src[58] = __s2.i8[58]; /*0x100251658*/
        v15 = core::iter::traits::iterator::Iterator::eq_by::h297eb5c9d32a5bd4(__dst, __src); /*0x100251672*/
        v9 = v45; /*0x100251677*/
        v10 = v11 + 200; /*0x10025167e*/
        if ( v15 ) /*0x100251688*/
        {
LABEL_19:
          *(_QWORD *)__dst = "openai"; /*0x10025168e*/
          *(_QWORD *)&__dst[8] = 6; /*0x10025169c*/
          v16 = *(_BYTE *)(v11 + 193); /*0x1002516a7*/
          if ( *(_BYTE *)(v11 + 192) ) /*0x1002516b5*/
          {
            *(_QWORD *)__src = v11 + 120; /*0x1002516eb*/
            *(_QWORD *)&__src[8] = &off_10196B378; /*0x1002516f9*/
            *(_QWORD *)&__src[16] = v11 + 144; /*0x100251700*/
            *(_QWORD *)&__src[24] = &off_10196B378; /*0x100251707*/
            if ( v16 ) /*0x1002516ce*/
            {
              *(_QWORD *)&__src[32] = v11 + 168; /*0x10025170e*/
              *(_QWORD *)&__src[40] = &off_10196B378; /*0x100251715*/
              *(_QWORD *)&__src[48] = v11 + 24; /*0x10025171c*/
              *(_QWORD *)&__src[56] = &off_10196B358; /*0x10025172a*/
              *(_QWORD *)&__src[64] = __dst; /*0x100251731*/
              *(_QWORD *)&__src[72] = &unk_10196B338; /*0x10025173f*/
              *(_QWORD *)&__src[80] = v11 + 72; /*0x100251746*/
              *(_QWORD *)&__src[88] = &off_10196B358; /*0x10025174d*/
              v68 = v11 + 96; /*0x100251754*/
              v69 = &off_10196B358; /*0x100251758*/
              rusqlite::Connection::execute::h6126d3d40dfec4ea( /*0x10025177c*/
                &__s2,
                v41,
                "UPDATE threads SET model_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND model_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7payload",
                184,
                __src,
                7);
            }
            else
            {
              *(_QWORD *)&__src[32] = v11 + 24; /*0x10025185c*/
              *(_QWORD *)&__src[40] = &off_10196B358; /*0x10025186a*/
              *(_QWORD *)&__src[48] = __dst; /*0x100251871*/
              *(_QWORD *)&__src[56] = &unk_10196B338; /*0x10025187f*/
              *(_QWORD *)&__src[64] = v11 + 72; /*0x100251886*/
              *(_QWORD *)&__src[72] = &off_10196B358; /*0x10025188d*/
              rusqlite::Connection::execute::h6126d3d40dfec4ea( /*0x1002518b4*/
                &__s2,
                v41,
                "UPDATE threads SET model_provider = ?1, model = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND model IS ?5UPDATE threads SET model_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND model_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7payload",
                134,
                __src,
                5);
            }
          }
          else
          {
            *(_QWORD *)__src = v11 + 120; /*0x1002517aa*/
            *(_QWORD *)&__src[8] = &off_10196B378; /*0x1002517b8*/
            if ( v16 ) /*0x100251792*/
            {
              *(_QWORD *)&__src[16] = v11 + 168; /*0x1002517bf*/
              *(_QWORD *)&__src[24] = &off_10196B378; /*0x1002517c6*/
              *(_QWORD *)&__src[32] = v11 + 24; /*0x1002517cd*/
              *(_QWORD *)&__src[40] = &off_10196B358; /*0x1002517db*/
              *(_QWORD *)&__src[48] = __dst; /*0x1002517e2*/
              *(_QWORD *)&__src[56] = &unk_10196B338; /*0x1002517f0*/
              *(_QWORD *)&__src[64] = v11 + 96; /*0x1002517f7*/
              *(_QWORD *)&__src[72] = &off_10196B358; /*0x1002517fe*/
              rusqlite::Connection::execute::h6126d3d40dfec4ea( /*0x100251825*/
                &__s2,
                v41,
                "UPDATE threads SET model_provider = ?1, reasoning_effort = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND reasoning_effort IS ?5UPDATE threads SET model_provider = ?1, model = ?2 WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND model IS ?5UPDATE threads SET model_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND model_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7payload",
                156,
                __src,
                5);
            }
            else
            {
              *(_QWORD *)&__src[16] = v11 + 24; /*0x1002518d5*/
              *(_QWORD *)&__src[24] = &off_10196B358; /*0x1002518e3*/
              *(_QWORD *)&__src[32] = __dst; /*0x1002518ea*/
              *(_QWORD *)&__src[40] = &unk_10196B338; /*0x1002518f8*/
              rusqlite::Connection::execute::h6126d3d40dfec4ea( /*0x10025191f*/
                &__s2,
                v41,
                "UPDATE threads SET model_provider = ?1 WHERE id = ?2 AND COALESCE(archived, 0) = 0 AND model_provider = "
                "?3UPDATE threads SET model_provider = ?1, reasoning_effort = ?2 WHERE id = ?3 AND COALESCE(archived, 0) "
                "= 0 AND model_provider = ?4 AND reasoning_effort IS ?5UPDATE threads SET model_provider = ?1, model = ?2"
                " WHERE id = ?3 AND COALESCE(archived, 0) = 0 AND model_provider = ?4 AND model IS ?5UPDATE threads SET m"
                "odel_provider = ?1, model = ?2, reasoning_effort = ?3 WHERE id = ?4 AND COALESCE(archived, 0) = 0 AND mo"
                "del_provider = ?5 AND model IS ?6 AND reasoning_effort IS ?7payload",
                106,
                __src,
                3);
            }
          }
          if ( __s2.i64[0] != 0x8000000000000016LL ) /*0x100251932*/
          {
            *(__m512i *)__dst = __s2; /*0x100251d77*/
            *(_QWORD *)&v60 = v66; /*0x100251dcb*/
            *((_QWORD *)&v60 + 1) = v9; /*0x100251dd2*/
            *(_QWORD *)__src = v11 + 24; /*0x100251dd9*/
            *(_QWORD *)&__src[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100251de7*/
            *(_QWORD *)&__src[16] = &v60; /*0x100251df5*/
            *(_QWORD *)&__src[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100251e03*/
            *(_QWORD *)&__src[32] = __dst; /*0x100251e0a*/
            *(_QWORD *)&__src[40] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100251e18*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_1017C37FE, __src); /*0x100251e30*/
            v65 = __s1; /*0x100251e3c*/
            v71 = __n[0]; /*0x100251e4a*/
            *(_QWORD *)__src = *(_QWORD *)&__n[1]; /*0x100251e5b*/
            *(_QWORD *)&__src[7] = *(_QWORD *)&__n[8]; /*0x100251e62*/
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__dst); /*0x100251e6c*/
            memcpy(__dst, __src, sizeof(__dst)); /*0x100251e7c*/
            goto LABEL_41; /*0x100251e7c*/
          }
          *(_QWORD *)&v55 = __s2.i64[1]; /*0x10025193c*/
          if ( __s2.i64[1] != 1 ) /*0x100251947*/
          {
            *(_QWORD *)__dst = v66; /*0x100251e91*/
            *(_QWORD *)&__dst[8] = v9; /*0x100251e98*/
            *(_QWORD *)__src = v11 + 24; /*0x100251e9f*/
            *(_QWORD *)&__src[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100251ead*/
            *(_QWORD *)&__src[16] = __dst; /*0x100251eb4*/
            *(_QWORD *)&__src[24] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100251ec2*/
            *(_QWORD *)&__src[32] = &v55; /*0x100251ed0*/
            *(_QWORD *)&__src[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100251ede*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v35, &unk_1017C3732, __src); /*0x100251ef6*/
            v65 = v35; /*0x100251f02*/
            v71 = v36; /*0x100251f10*/
            *(_QWORD *)__dst = *(_QWORD *)v37; /*0x100251f21*/
            *(_QWORD *)&__dst[7] = *(_QWORD *)&v37[7]; /*0x100251f28*/
LABEL_41:
            if ( *(_QWORD *)&v41[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100251f47*/
              core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_10196C388); /*0x1002522b5*/
            ++*(_QWORD *)&v41[0]; /*0x100251f50*/
            autocommit = sqlite3_get_autocommit(*(sqlite3 **)&v41[1]); /*0x100251f5e*/
            --*(_QWORD *)&v41[0]; /*0x100251f63*/
            if ( !autocommit ) /*0x100251f6c*/
            {
              rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v41, "ROLLBACK", 8); /*0x100251f84*/
              if ( *(_QWORD *)__src != 0x8000000000000016LL ) /*0x100251f9a*/
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__src); /*0x100251f9f*/
            }
            goto LABEL_45; /*0x100251f9f*/
          }
        }
      }
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(&__s2, v41, &unk_1015E4BDA, 6); /*0x100251ba7*/
      if ( *(_QWORD *)&v41[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x100251bc4*/
        core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_10196C388); /*0x1002522c3*/
      ++*(_QWORD *)&v41[0]; /*0x100251bcd*/
      v17 = sqlite3_get_autocommit(*(sqlite3 **)&v41[1]); /*0x100251bdb*/
      --*(_QWORD *)&v41[0]; /*0x100251be0*/
      if ( !v17 ) /*0x100251be9*/
      {
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v41, "ROLLBACK", 8); /*0x100251c01*/
        if ( *(_QWORD *)__src != 0x8000000000000016LL ) /*0x100251c17*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__src); /*0x100251c1c*/
      }
      v18 = __s2.i64[0]; /*0x100251c21*/
      if ( __s2.i64[0] != 0x8000000000000016LL ) /*0x100251c32*/
      {
        *(__m512i *)__src = __s2; /*0x100251c47*/
        *(_QWORD *)&v60 = v66; /*0x100251c97*/
        *((_QWORD *)&v60 + 1) = v9; /*0x100251c9e*/
        *(_QWORD *)__dst = &v60; /*0x100251cac*/
        *(_QWORD *)&__dst[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100251cba*/
        *(_QWORD *)&__dst[16] = __src; /*0x100251cc1*/
        *(_QWORD *)&__dst[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100251ccf*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__s1, &unk_1017C37DA, __dst); /*0x100251ce7*/
        v65 = __s1; /*0x100251cf3*/
        v71 = __n[0]; /*0x100251d01*/
        *(_QWORD *)&v60 = *(_QWORD *)&__n[1]; /*0x100251d12*/
        *(_QWORD *)((char *)&v60 + 7) = *(_QWORD *)&__n[8]; /*0x100251d19*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(__src); /*0x100251d23*/
        *(_QWORD *)__dst = v60; /*0x100251d36*/
        *(_QWORD *)&__dst[7] = *(_QWORD *)((char *)&v60 + 7); /*0x100251d3d*/
      }
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v41); /*0x100251d4b*/
      if ( v18 != 0x8000000000000016LL ) /*0x100251d5d*/
        goto LABEL_46; /*0x100251d5d*/
LABEL_50:
      v7 = v38 - 24; /*0x1002520a0*/
    }
    while ( v46 != v38 - 24 ); /*0x1002511f0*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::restore_thread_metadata_rollout_adoptions::h07288689b2ce9c7b( /*0x1002520b8*/
    v41,
    v40,
    a7);
  if ( LODWORD(v41[0]) != 11 ) /*0x1002520d6*/
  {
    qmemcpy(__src, v41, sizeof(__src)); /*0x1002520f2*/
    __s2.i64[0] = 0; /*0x1002520f5*/
    *(__int128 *)((char *)__s2.i128 + 8) = 1u; /*0x1002520fd*/
    *(_QWORD *)&__dst[16] = 1610612768; /*0x10025210d*/
    *(_QWORD *)__dst = &__s2; /*0x10025211c*/
    *(_QWORD *)&__dst[8] = &anon_7245a3145add9b93f83b0a9aa358a664_1177; /*0x10025212a*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b( /*0x10025213b*/
                            __src,
                            __dst) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002522eb*/
        "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::u"
        "nwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
        55,
        &__s1,
        &anon_7245a3145add9b93f83b0a9aa358a664_1194,
        &anon_7245a3145add9b93f83b0a9aa358a664_1180);
    v25 = __s2.i128[0]; /*0x10025214c*/
    v26 = __s2.i64[2]; /*0x100252150*/
    v27 = v64; /*0x100252154*/
    if ( v64 == v62 ) /*0x100252162*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v62); /*0x10025216b*/
    v28 = v63; /*0x100252170*/
    v29 = 3 * v27; /*0x100252177*/
    *(_OWORD *)(v63 + 8 * v29) = v25; /*0x10025217b*/
    *(_QWORD *)(v28 + 8 * v29 + 16) = v26; /*0x100252184*/
    v64 = v27 + 1; /*0x10025218c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(__src); /*0x10025219a*/
  }
  if ( v64 ) /*0x1002521a9*/
  {
    alloc::str::join_generic_copy::h1b385c7941ba5aef(__src, v63, v64, &anon_7245a3145add9b93f83b0a9aa358a664_657, 3); /*0x1002521ca*/
    v30 = v48; /*0x1002521d6*/
    v48[3] = *(_QWORD *)&__src[16]; /*0x1002521dd*/
    *(_OWORD *)(v30 + 1) = *(_OWORD *)__src; /*0x1002521f3*/
    v31 = v64; /*0x1002521f7*/
    *v30 = 10; /*0x1002521fe*/
    if ( v31 ) /*0x100252208*/
    {
      v32 = (_QWORD *)(v63 + 8); /*0x100252211*/
      do /*0x100252227*/
      {
        v33 = *(v32 - 1); /*0x100252229*/
        if ( v33 ) /*0x100252230*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x10025223a*/
        v32 += 3; /*0x100252220*/
        --v31; /*0x100252224*/
      }
      while ( v31 ); /*0x100252227*/
    }
  }
  else
  {
    *v48 = 11; /*0x100252248*/
  }
  result = v62; /*0x10025224f*/
  if ( v62 ) /*0x100252259*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 24 * v62, 8); /*0x10025226f*/
  return result; /*0x100252274*/
}