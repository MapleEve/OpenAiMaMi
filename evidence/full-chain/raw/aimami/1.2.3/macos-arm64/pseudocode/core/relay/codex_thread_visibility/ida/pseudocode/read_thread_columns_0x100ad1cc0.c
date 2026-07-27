// __ZN13codexmate_lib4core5relay23codex_thread_visibility19read_thread_columns @ 0x100ad1cc0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::h4c3d9b33239405b8(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  sqlite3_stmt *v5; // r14
  sqlite3_stmt *v6; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // r9
  __int64 i; // rcx
  unsigned __int64 v14; // rax
  __m128i v15; // xmm2
  __int64 v17; // rdi
  char v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __m128i si128; // xmm2
  __m128i v27; // xmm3
  __int64 v29; // rsi
  __m128i v30; // xmm4
  char v31; // si
  __int64 v32; // rbx
  const __m128i *v34; // r15
  int v35; // r13d
  __int64 v36; // rax
  __int64 v37; // rsi
  __m128i v38; // [rsp+8h] [rbp-1F8h] BYREF
  sqlite3_stmt *v39; // [rsp+18h] [rbp-1E8h]
  sqlite3_stmt *v40; // [rsp+20h] [rbp-1E0h]
  sqlite3_stmt *v41; // [rsp+28h] [rbp-1D8h]
  sqlite3_stmt *v42; // [rsp+30h] [rbp-1D0h]
  unsigned __int64 v43; // [rsp+38h] [rbp-1C8h] BYREF
  _BYTE v44[24]; // [rsp+40h] [rbp-1C0h]
  sqlite3_stmt *v45; // [rsp+58h] [rbp-1A8h]
  sqlite3_stmt *v46; // [rsp+60h] [rbp-1A0h]
  sqlite3_stmt *v47; // [rsp+68h] [rbp-198h]
  sqlite3_stmt *v48; // [rsp+70h] [rbp-190h]
  sqlite3_stmt *v49; // [rsp+78h] [rbp-188h]
  __m128i v50; // [rsp+80h] [rbp-180h] BYREF
  __m128i v51; // [rsp+98h] [rbp-168h] BYREF
  sqlite3_stmt *v52; // [rsp+A8h] [rbp-158h]
  __m128i v53; // [rsp+B0h] [rbp-150h]
  sqlite3_stmt *v54; // [rsp+C0h] [rbp-140h]
  sqlite3_stmt *v55; // [rsp+C8h] [rbp-138h]
  _QWORD v56[2]; // [rsp+D0h] [rbp-130h] BYREF
  unsigned __int64 v57; // [rsp+E0h] [rbp-120h] BYREF
  __m128i v58; // [rsp+E8h] [rbp-118h]
  sqlite3_stmt *v59; // [rsp+F8h] [rbp-108h]
  sqlite3_stmt *v60; // [rsp+100h] [rbp-100h]
  sqlite3_stmt *v61; // [rsp+108h] [rbp-F8h]
  sqlite3_stmt *v62; // [rsp+110h] [rbp-F0h]
  sqlite3_stmt *v63; // [rsp+118h] [rbp-E8h]
  __m128i v64; // [rsp+120h] [rbp-E0h] BYREF
  sqlite3_stmt *v65; // [rsp+130h] [rbp-D0h]
  sqlite3_stmt *v66; // [rsp+138h] [rbp-C8h]
  sqlite3_stmt *v67; // [rsp+140h] [rbp-C0h]
  sqlite3_stmt *v68; // [rsp+148h] [rbp-B8h]
  __m128i v69; // [rsp+150h] [rbp-B0h] BYREF
  sqlite3_stmt *v70; // [rsp+160h] [rbp-A0h]
  sqlite3_stmt *v71; // [rsp+168h] [rbp-98h]
  sqlite3_stmt *v72; // [rsp+170h] [rbp-90h]
  sqlite3_stmt *v73; // [rsp+178h] [rbp-88h]
  sqlite3_stmt *v74; // [rsp+180h] [rbp-80h]
  sqlite3_stmt *v75; // [rsp+188h] [rbp-78h]
  __m128i v76; // [rsp+190h] [rbp-70h] BYREF
  sqlite3_stmt *v77; // [rsp+1A0h] [rbp-60h]
  sqlite3_stmt *v78; // [rsp+1A8h] [rbp-58h]
  sqlite3_stmt *v79; // [rsp+1B0h] [rbp-50h]
  sqlite3_stmt *v80; // [rsp+1B8h] [rbp-48h]
  sqlite3_stmt *v81; // [rsp+1C0h] [rbp-40h]
  sqlite3_stmt *v82; // [rsp+1C8h] [rbp-38h]

  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v43, a2, "PRAGMA table_info(threads)", 26); /*0x100ad1ced*/
  if ( (_DWORD)v43 == 1 ) /*0x100ad1cf9*/
  {
    v63 = v49; /*0x100ad1d03*/
    v62 = v48; /*0x100ad1d0e*/
    v61 = v47; /*0x100ad1d19*/
    v60 = v46; /*0x100ad1d24*/
    v59 = v45; /*0x100ad1d2f*/
    v58 = *(__m128i *)&v44[8]; /*0x100ad1d49*/
    v57 = *(_QWORD *)v44; /*0x100ad1d50*/
    v64.i64[0] = (__int64)&v57; /*0x100ad1d5e*/
    v64.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad1d6c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v38, &unk_1017CA641, &v64); /*0x100ad1d88*/
    v69 = v38; /*0x100ad1d9b*/
    v70 = v39; /*0x100ad1db0*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v57); /*0x100ad1dbe*/
    v76 = v69; /*0x100ad1dd1*/
    v77 = v70; /*0x100ad1de0*/
    v78 = v71; /*0x100ad1deb*/
    v79 = v72; /*0x100ad1df6*/
    v80 = v73; /*0x100ad1e01*/
    v81 = v74; /*0x100ad1e09*/
    v82 = v75; /*0x100ad1e11*/
    *(_QWORD *)(a1 + 64) = v75; /*0x100ad1e19*/
    *(_QWORD *)(a1 + 56) = v81; /*0x100ad1e21*/
    *(_QWORD *)(a1 + 48) = v80; /*0x100ad1e29*/
    *(_QWORD *)(a1 + 40) = v79; /*0x100ad1e31*/
    *(_QWORD *)(a1 + 32) = v78; /*0x100ad1e39*/
    *(_QWORD *)(a1 + 24) = v77; /*0x100ad1e41*/
    result = v76.i64[0]; /*0x100ad1e49*/
    *(__m128i *)(a1 + 8) = v76; /*0x100ad1e51*/
    *(_QWORD *)a1 = 10; /*0x100ad1e55*/
    return result; /*0x100ad1e5c*/
  }
  v75 = v49; /*0x100ad1e65*/
  v74 = v48; /*0x100ad1e6d*/
  v76 = *(__m128i *)v44; /*0x100ad1e97*/
  v77 = *(sqlite3_stmt **)&v44[16]; /*0x100ad1e9f*/
  v78 = v45; /*0x100ad1ea3*/
  v79 = v46; /*0x100ad1ea7*/
  v80 = v47; /*0x100ad1eab*/
  v81 = v48; /*0x100ad1eaf*/
  v82 = v49; /*0x100ad1eb3*/
  v73 = v47; /*0x100ad1ecb*/
  v72 = v46; /*0x100ad1ed6*/
  v71 = v45; /*0x100ad1ee1*/
  v70 = *(sqlite3_stmt **)&v44[16]; /*0x100ad1eec*/
  v69 = *(__m128i *)v44; /*0x100ad1f02*/
  v4 = sqlite3_bind_parameter_count(v49); /*0x100ad1f0d*/
  if ( v4 ) /*0x100ad1f17*/
  {
    v43 = 0x8000000000000013LL; /*0x100ad1f2b*/
    *(_QWORD *)v44 = 0; /*0x100ad1f32*/
    *(_QWORD *)&v44[8] = v4; /*0x100ad1f3d*/
    v51.i64[0] = (__int64)&v43; /*0x100ad1f44*/
    v51.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad1f52*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v76, &unk_1017C1ADA, &v51); /*0x100ad1f6b*/
    v50 = v76; /*0x100ad1f74*/
    v5 = v77; /*0x100ad1f7b*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v43); /*0x100ad1f86*/
    *(_QWORD *)a1 = 10; /*0x100ad1f8b*/
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v50); /*0x100ad1f9a*/
    *(_QWORD *)(a1 + 24) = v5; /*0x100ad1f9f*/
  }
  else
  {
    core::iter::adapters::try_process::h14433fa7bb38613d(&v57, &v69, 0); /*0x100ad1fb6*/
    if ( v57 == 0x8000000000000016LL ) /*0x100ad1fd0*/
    {
      v42 = v62; /*0x100ad1fdd*/
      v41 = v61; /*0x100ad1feb*/
      v64 = v58; /*0x100ad200e*/
      v65 = v59; /*0x100ad201c*/
      v66 = v60; /*0x100ad2023*/
      v67 = v61; /*0x100ad202a*/
      v68 = v62; /*0x100ad2031*/
      v56[1] = v62; /*0x100ad2038*/
      v56[0] = v61; /*0x100ad203f*/
      v55 = v60; /*0x100ad2046*/
      v54 = v59; /*0x100ad204d*/
      v53 = v58; /*0x100ad205b*/
      v6 = v60; /*0x100ad2062*/
      if ( v60 ) /*0x100ad206c*/
      {
        _RDI = (unsigned __int64)v56; /*0x100ad2072*/
        v8 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345( /*0x100ad2085*/
               v56,
               "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
               5);
        v10 = v53.i64[1]; /*0x100ad2098*/
        v9 = v53.i64[0]; /*0x100ad2098*/
        v11 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v8 >> 57), (__m128i)0LL); /*0x100ad20a7*/
        v12 = v53.i64[0] - 24; /*0x100ad20ac*/
        for ( i = 0; ; i += 16 ) /*0x100ad20b0*/
        {
          v14 = v53.i64[1] & v8; /*0x100ad20bb*/
          v15 = _mm_loadu_si128((const __m128i *)(v53.i64[0] + v14)); /*0x100ad20be*/
          _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v11)); /*0x100ad20cd*/
          if ( _ESI ) /*0x100ad20d3*/
            break; /*0x100ad20d3*/
LABEL_12:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v15, (__m128i)-1LL)) ) /*0x100ad211d*/
          {
            v18 = 0; /*0x100ad22f2*/
            goto LABEL_19; /*0x100ad22f2*/
          }
          v8 = v14 + i + 16; /*0x100ad2129*/
        }
        while ( 1 ) /*0x100ad20d5*/
        {
          __asm { tzcnt edi, esi } /*0x100ad20d5*/
          v17 = -3LL * (v53.i64[1] & (v14 + _RDI)); /*0x100ad20e2*/
          if ( *(_QWORD *)(v12 + 8 * v17 + 16) == 5 ) /*0x100ad20ec*/
          {
            v18 = 1; /*0x100ad2103*/
            if ( !(**(_DWORD **)(v12 + 8 * v17 + 8) ^ 0x65646F6D /*0x100ad2106*/
                 | *(unsigned __int8 *)(*(_QWORD *)(v12 + 8 * v17 + 8) + 4LL) ^ 0x6C) )
              break; /*0x100ad2106*/
          }
          _RDI = (unsigned int)(_ESI - 1); /*0x100ad210f*/
          LOWORD(_RDI) = _ESI & (_ESI - 1); /*0x100ad2112*/
          _ESI = _RDI; /*0x100ad2115*/
          if ( !(_WORD)_RDI ) /*0x100ad2117*/
            goto LABEL_12; /*0x100ad2117*/
        }
LABEL_19:
        v50.i64[0] = v53.i64[0] - 24; /*0x100ad22f5*/
        _RSI = (unsigned __int64)"reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"; /*0x100ad22fc*/
        v22 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345( /*0x100ad230f*/
                v56,
                "reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
                16);
        v23 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v22 >> 57), (__m128i)0LL); /*0x100ad2323*/
        v24 = 0; /*0x100ad2328*/
        si128 = _mm_load_si128((const __m128i *)"reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"); /*0x100ad232e*/
        while ( 1 ) /*0x100ad233d*/
        {
          _RAX = v10 & v22; /*0x100ad233d*/
          v27 = _mm_loadu_si128((const __m128i *)(v9 + _RAX)); /*0x100ad2340*/
          _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v27, v23)); /*0x100ad234f*/
          if ( _EDX ) /*0x100ad2355*/
            break; /*0x100ad2355*/
LABEL_24:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL)) ) /*0x100ad2398*/
          {
            v31 = 0; /*0x100ad23ab*/
            goto LABEL_27; /*0x100ad23ab*/
          }
          v22 = _RAX + v24 + 16; /*0x100ad23a0*/
          v24 += 16; /*0x100ad23a5*/
        }
        while ( 1 ) /*0x100ad2357*/
        {
          __asm { tzcnt esi, edx } /*0x100ad2357*/
          v29 = -3LL * (v10 & (_RAX + _RSI)); /*0x100ad2364*/
          if ( *(_QWORD *)(v50.i64[0] + 8 * v29 + 16) == 16 ) /*0x100ad236e*/
          {
            v30 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v50.i64[0] + 8 * v29 + 8)), si128); /*0x100ad237c*/
            v31 = 1; /*0x100ad2380*/
            if ( _mm_testz_si128(v30, v30) ) /*0x100ad2388*/
              break; /*0x100ad2388*/
          }
          _RSI = (unsigned int)(_EDX - 1); /*0x100ad238a*/
          LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x100ad238d*/
          _EDX = _RSI; /*0x100ad2390*/
          if ( !(_WORD)_RSI ) /*0x100ad2392*/
            goto LABEL_24; /*0x100ad2392*/
        }
LABEL_27:
        *(_BYTE *)(a1 + 8) = v18; /*0x100ad23ad*/
        *(_BYTE *)(a1 + 9) = v31; /*0x100ad23b1*/
        *(_QWORD *)a1 = 11; /*0x100ad23b5*/
        if ( !v10 ) /*0x100ad23bf*/
          return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v69); /*0x100ad23bf*/
        v32 = v53.i64[0]; /*0x100ad23c5*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v53.i64[0])); /*0x100ad23d5*/
        v34 = (const __m128i *)(v53.i64[0] + 16); /*0x100ad23d8*/
        do /*0x100ad23f0*/
        {
          if ( !(_WORD)_R13D ) /*0x100ad23fa*/
          {
            do /*0x100ad241c*/
            {
              v35 = _mm_movemask_epi8(_mm_load_si128(v34)); /*0x100ad2405*/
              v32 -= 384; /*0x100ad240a*/
              ++v34; /*0x100ad2411*/
            }
            while ( v35 == 0xFFFF ); /*0x100ad241c*/
            _R13D = ~v35; /*0x100ad241e*/
          }
          __asm { tzcnt eax, r13d } /*0x100ad2421*/
          v36 = -3LL * _RAX; /*0x100ad2429*/
          v37 = *(_QWORD *)(v32 + 8 * v36 - 24); /*0x100ad242d*/
          if ( v37 ) /*0x100ad2435*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v32 + 8 * v36 - 16), v37, 1); /*0x100ad2444*/
          v6 = (sqlite3_stmt *)((char *)v6 - 1); /*0x100ad23e0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100ad23e7*/
          _R13D &= _R13D - 1; /*0x100ad23ea*/
        }
        while ( v6 ); /*0x100ad23f0*/
      }
      else
      {
        v10 = v53.i64[1]; /*0x100ad229c*/
        *(_WORD *)(a1 + 8) = 0; /*0x100ad22a3*/
        *(_QWORD *)a1 = 11; /*0x100ad22a9*/
        if ( !v10 ) /*0x100ad22b3*/
          return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v69); /*0x100ad22b3*/
      }
      v19 = (24 * v10 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100ad22c5*/
      v20 = v19 + v10 + 17; /*0x100ad22cc*/
      if ( v20 ) /*0x100ad22d0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53.i64[0] - v19, v20, 16); /*0x100ad22e8*/
      return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v69); /*0x100ad22ed*/
    }
    v48 = v63; /*0x100ad213b*/
    v47 = v62; /*0x100ad2149*/
    v46 = v61; /*0x100ad2157*/
    v45 = v60; /*0x100ad2165*/
    *(_QWORD *)&v44[16] = v59; /*0x100ad2173*/
    *(__m128i *)v44 = v58; /*0x100ad2196*/
    v43 = v57; /*0x100ad219d*/
    v76.i64[0] = (__int64)&v43; /*0x100ad21a4*/
    v76.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad21af*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v51, &unk_1017CA65B, &v76); /*0x100ad21c5*/
    v76 = v51; /*0x100ad21d8*/
    v77 = v52; /*0x100ad21e7*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v43); /*0x100ad21f2*/
    v39 = v77; /*0x100ad21fb*/
    v40 = v78; /*0x100ad2206*/
    v41 = v79; /*0x100ad2211*/
    v64 = v76; /*0x100ad2224*/
    v65 = v77; /*0x100ad2232*/
    v66 = v78; /*0x100ad2239*/
    v67 = v79; /*0x100ad2240*/
    v68 = v80; /*0x100ad2247*/
    *(_QWORD *)(a1 + 48) = v80; /*0x100ad2255*/
    *(_QWORD *)(a1 + 40) = v67; /*0x100ad2260*/
    *(_QWORD *)(a1 + 32) = v66; /*0x100ad226b*/
    *(_QWORD *)(a1 + 24) = v65; /*0x100ad2276*/
    *(__m128i *)(a1 + 8) = v64; /*0x100ad228c*/
    *(_QWORD *)a1 = 10; /*0x100ad2290*/
  }
  return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v69); /*0x100ad2457*/
}