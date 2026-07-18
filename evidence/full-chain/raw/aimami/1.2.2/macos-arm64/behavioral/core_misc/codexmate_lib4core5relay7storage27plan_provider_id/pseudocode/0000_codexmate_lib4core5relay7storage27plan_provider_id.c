// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x100429cd0 d=0
__int64 __fastcall codexmate_lib::core::relay::storage::plan_provider_id_migrations::h9dc3427a3e8828f7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r13
  size_t v10; // r15
  char v11; // al
  _QWORD *v12; // rdx
  __int64 result; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  size_t v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  size_t v20; // rdx
  unsigned __int64 v21; // rbx
  const __m128i *v22; // rsi
  __int64 (__fastcall *v23)(); // rcx
  __m128i v24; // xmm1
  __int8 *v25; // r13
  void *v26; // rdi
  size_t v27; // r12
  __int64 i; // r8
  unsigned __int64 v29; // rbx
  __m128i v30; // xmm2
  __int64 v32; // rax
  int j; // eax
  unsigned __int64 v34; // rax
  const __m128i *v36; // rdx
  const __m128i *v37; // rsi
  __m128i v38; // xmm1
  __int8 *v39; // r8
  void *v40; // r12
  size_t v41; // rbx
  __int64 k; // r9
  unsigned __int64 v43; // rax
  __m128i v44; // xmm2
  __int64 v46; // r13
  __int8 *v47; // r14
  int v48; // eax
  int v49; // eax
  bool v50; // zf
  __int64 v51; // rbx
  _QWORD *v52; // rdx
  __int64 (__fastcall *v53)(); // rbx
  __int64 (__fastcall *v54)(); // r14
  const __m128i *v55; // r15
  const __m128i *v57; // r12
  int v58; // r13d
  __int64 v59; // rdx
  __m128i v60; // [rsp+0h] [rbp-1F0h] BYREF
  size_t v61[3]; // [rsp+10h] [rbp-1E0h] BYREF
  size_t v62; // [rsp+28h] [rbp-1C8h] BYREF
  __int64 (__fastcall *v63)(); // [rsp+30h] [rbp-1C0h]
  _DWORD *v64; // [rsp+38h] [rbp-1B8h]
  __int64 (__fastcall *v65)(); // [rsp+40h] [rbp-1B0h]
  __int64 v66; // [rsp+48h] [rbp-1A8h]
  __int64 v67; // [rsp+50h] [rbp-1A0h]
  size_t v68; // [rsp+58h] [rbp-198h] BYREF
  _QWORD v69[3]; // [rsp+60h] [rbp-190h] BYREF
  __int64 v70; // [rsp+78h] [rbp-178h]
  __m128i v71; // [rsp+80h] [rbp-170h] BYREF
  __m128i v72; // [rsp+90h] [rbp-160h] BYREF
  __m128i v73; // [rsp+A0h] [rbp-150h] BYREF
  _QWORD *v74; // [rsp+B0h] [rbp-140h]
  size_t v75; // [rsp+B8h] [rbp-138h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-130h]
  _DWORD *v77; // [rsp+C8h] [rbp-128h]
  int v78; // [rsp+D4h] [rbp-11Ch] BYREF
  size_t *v79; // [rsp+D8h] [rbp-118h] BYREF
  void *v80; // [rsp+E0h] [rbp-110h]
  size_t v81; // [rsp+E8h] [rbp-108h]
  unsigned __int64 v82; // [rsp+F0h] [rbp-100h]
  const __m128i *v83; // [rsp+F8h] [rbp-F8h]
  size_t v84; // [rsp+100h] [rbp-F0h] BYREF
  void *__s1; // [rsp+108h] [rbp-E8h]
  size_t __n; // [rsp+110h] [rbp-E0h]
  const __m128i *v87; // [rsp+118h] [rbp-D8h] BYREF
  __int64 (__fastcall *v88)(); // [rsp+120h] [rbp-D0h]
  _DWORD *v89; // [rsp+128h] [rbp-C8h]
  __int64 (__fastcall *v90)(); // [rsp+130h] [rbp-C0h]
  __int64 v91; // [rsp+138h] [rbp-B8h] BYREF
  size_t v92; // [rsp+140h] [rbp-B0h]
  __int64 v93; // [rsp+148h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+150h] [rbp-A0h]
  __int64 v95; // [rsp+158h] [rbp-98h]
  __int64 v96; // [rsp+160h] [rbp-90h]
  __int64 v97; // [rsp+168h] [rbp-88h]
  size_t *v98; // [rsp+170h] [rbp-80h] BYREF
  __int64 (__fastcall *v99)(); // [rsp+178h] [rbp-78h]
  size_t v100; // [rsp+180h] [rbp-70h]
  const __m128i *v101; // [rsp+188h] [rbp-68h] BYREF
  __int64 (__fastcall *v102)(); // [rsp+190h] [rbp-60h]
  _DWORD *v103; // [rsp+198h] [rbp-58h]
  __int64 (__fastcall *v104)(); // [rsp+1A0h] [rbp-50h]
  __int64 v105; // [rsp+1A8h] [rbp-48h]
  size_t v106; // [rsp+1B0h] [rbp-40h]
  __int64 v107; // [rsp+1B8h] [rbp-38h]
  __int64 v108; // [rsp+1C0h] [rbp-30h]

  v4 = a2; /*0x100429ce7*/
  v74 = a1; /*0x100429cea*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100429cf8*/
  v6 = v5; /*0x100429cfa*/
  if ( *(_BYTE *)(v5 + 16) == 1 ) /*0x100429d01*/
  {
    v7 = *(_QWORD *)v5; /*0x100429d07*/
    v8 = *(_QWORD *)(v5 + 8); /*0x100429d0a*/
  }
  else
  {
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10042a757*/
    v8 = v59; /*0x10042a75a*/
    *(_QWORD *)v6 = v7; /*0x10042a75d*/
    *(_QWORD *)(v6 + 8) = v59; /*0x10042a760*/
    *(_BYTE *)(v6 + 16) = 1; /*0x10042a764*/
  }
  v96 = v6; /*0x100429d13*/
  *(_QWORD *)v6 = v7 + 1; /*0x100429d1a*/
  hashbrown::raw::RawTableInner::fallible_with_capacity::h7286bde701ec8808(&v101, 16, a3, 1); /*0x100429d2e*/
  v65 = v104; /*0x100429d37*/
  v64 = v103; /*0x100429d42*/
  v63 = v102; /*0x100429d51*/
  v62 = (size_t)v101; /*0x100429d58*/
  v66 = v7; /*0x100429d5f*/
  v67 = v8; /*0x100429d66*/
  v9 = 232 * a3; /*0x100429d6d*/
  v70 = a2 + 232 * a3; /*0x100429d78*/
  v10 = a2 - 232; /*0x100429d7f*/
  while ( v9 ) /*0x100429d93*/
  {
    v11 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4ef619e171bdd9bb( /*0x100429daa*/
            &v62,
            *(_QWORD *)(v10 + 240),
            *(_QWORD *)(v10 + 248));
    v10 += 232LL; /*0x100429daf*/
    v9 -= 232; /*0x100429db6*/
    if ( v11 ) /*0x100429dbf*/
    {
      v101 = (const __m128i *)v10; /*0x100429dc1*/
      v102 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ab36388d9951754; /*0x100429dcc*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v61, byte_1016F1E00, (unsigned __int64)&v101); /*0x100429de2*/
      v12 = v74; /*0x100429dee*/
      v74[3] = v61[2]; /*0x100429df5*/
      result = v61[0]; /*0x100429df9*/
      v12[2] = v61[1]; /*0x100429e07*/
      v12[1] = result; /*0x100429e0b*/
      *v12 = 8; /*0x100429e0f*/
      goto LABEL_66; /*0x100429e16*/
    }
  }
  v14 = v96; /*0x100429e1b*/
  if ( *(_BYTE *)(v96 + 16) == 1 ) /*0x100429e27*/
  {
    v15 = *(_QWORD *)v96; /*0x100429e2d*/
    v16 = *(_QWORD *)(v96 + 8); /*0x100429e30*/
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10042a76e*/
    *(_QWORD *)v14 = v15; /*0x10042a773*/
    *(_QWORD *)(v14 + 8) = v16; /*0x10042a776*/
    *(_BYTE *)(v14 + 16) = 1; /*0x10042a77a*/
  }
  *(_QWORD *)v14 = v15 + 1; /*0x100429e38*/
  v104 = nullptr; /*0x100429e42*/
  v103 = nullptr; /*0x100429e4d*/
  v102 = nullptr; /*0x100429e58*/
  v101 = (const __m128i *)&xmmword_101513850; /*0x100429e63*/
  v105 = v15; /*0x100429e67*/
  v106 = v16; /*0x100429e6b*/
  if ( a3 ) /*0x100429e72*/
  {
    v17 = a2; /*0x100429e83*/
    do /*0x100429e9a*/
    {
      codexmate_lib::core::relay::models::validate_relay_provider_id::he4e399639c4c988d( /*0x100429ea7*/
        &v87,
        *(_QWORD *)(v17 + 8),
        *(_QWORD *)(v17 + 16));
      if ( v87 == (const __m128i *)0x8000000000000000LL ) /*0x100429ec0*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v87, v17); /*0x100429ec8*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h51bc55f4d52d0730(&v101, &v87); /*0x100429ed3*/
      }
      else if ( v87 ) /*0x100429ee3*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100429ef1*/
      }
      v17 += 232; /*0x100429e90*/
      --a3; /*0x100429e97*/
    }
    while ( a3 ); /*0x100429e9a*/
    v92 = v106; /*0x100429efc*/
    v91 = v105; /*0x100429f07*/
    v90 = v104; /*0x100429f12*/
    v89 = v103; /*0x100429f1d*/
    v88 = v102; /*0x100429f2c*/
    v87 = v101; /*0x100429f33*/
    v93 = 0; /*0x100429f3a*/
    v94 = 8; /*0x100429f45*/
    v95 = 0; /*0x100429f50*/
    v96 = 0; /*0x100429f5b*/
    do /*0x100429ff4*/
    {
      codexmate_lib::core::relay::models::validate_relay_provider_id::he4e399639c4c988d( /*0x10042a005*/
        &v101,
        *(_QWORD *)(v4 + 8),
        *(_QWORD *)(v4 + 16));
      if ( v101 != (const __m128i *)0x8000000000000000LL ) /*0x10042a01b*/
      {
        if ( v101 ) /*0x10042a020*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a02b*/
        _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::haa87e277dc9899c8( /*0x10042a03b*/
          &v68,
          *(_QWORD *)(v4 + 8),
          *(_QWORD *)(v4 + 16));
        v79 = &v68; /*0x10042a040*/
        v101 = (const __m128i *)&v79; /*0x10042a04e*/
        v102 = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h960a42ddfcee90b1; /*0x10042a059*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x10042a06b*/
          (size_t *)&v98,
          anon_ef62468a971e82d6315a046a608bc413_481,
          (unsigned __int64)&v101);
        if ( v98 == (size_t *)0x8000000000000000LL ) /*0x10042a07e*/
        {
          v75 = 0; /*0x10042a080*/
          v76 = 1; /*0x10042a08b*/
          v77 = nullptr; /*0x10042a096*/
        }
        else
        {
          v103 = (_DWORD *)v100; /*0x10042a0b4*/
          v102 = v99; /*0x10042a0c0*/
          v101 = (const __m128i *)v98; /*0x10042a0c4*/
          _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb65209eccf41f73f( /*0x10042a0d9*/
            (char *)&v68 + 1,
            v69,
            &v101);
          v77 = v103; /*0x10042a0e2*/
          v76 = (__int64)v102; /*0x10042a0f1*/
          v75 = (size_t)v101; /*0x10042a0f8*/
        }
        v98 = &v75; /*0x10042a106*/
        v99 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10042a111*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v101, byte_1016F1DE4, (unsigned __int64)&v98); /*0x10042a123*/
        v84 = (size_t)v101; /*0x10042a130*/
        __s1 = v102; /*0x10042a137*/
        __n = (size_t)v103; /*0x10042a142*/
        if ( v90 ) /*0x10042a151*/
        {
          v21 = core::hash::BuildHasher::hash_one::hd601b40b93b963b8(&v91, &v84); /*0x10042a16a*/
          v22 = v87; /*0x10042a171*/
          v23 = v88; /*0x10042a178*/
          v24 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v21 >> 57), (__m128i)0LL); /*0x10042a187*/
          v25 = &v87[-2].i8[8]; /*0x10042a18c*/
          v26 = __s1; /*0x10042a190*/
          v27 = __n; /*0x10042a197*/
          for ( i = 0; ; i += 16 ) /*0x10042a19e*/
          {
            v29 = (unsigned __int64)v23 & v21; /*0x10042a1a1*/
            v30 = _mm_loadu_si128((const __m128i *)((char *)v22 + v29)); /*0x10042a1a4*/
            _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v30, v24)); /*0x10042a1b1*/
            if ( (_DWORD)_RAX ) /*0x10042a1b7*/
              break; /*0x10042a1b7*/
LABEL_32:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v30, (__m128i)-1LL)) ) /*0x10042a268*/
              goto LABEL_34; /*0x10042a272*/
            v21 = v29 + i + 16; /*0x10042a274*/
          }
          v82 = (unsigned __int64)v23; /*0x10042a1bd*/
          v71 = v24; /*0x10042a1c4*/
          v83 = v22; /*0x10042a1cc*/
          v72.i64[0] = i; /*0x10042a1d3*/
          v73 = v30; /*0x10042a1da*/
          while ( 1 ) /*0x10042a1e2*/
          {
            v97 = _RAX; /*0x10042a1e2*/
            __asm { tzcnt eax, eax } /*0x10042a1e9*/
            v32 = -3LL * ((unsigned __int64)v23 & (v29 + _RAX)); /*0x10042a1f6*/
            if ( v27 == *(_QWORD *)&v25[8 * v32 + 16] && !memcmp(v26, *(const void **)&v25[8 * v32 + 8], v27) ) /*0x10042a210*/
              break; /*0x10042a210*/
            _RAX = (unsigned int)(v97 - 1); /*0x10042a227*/
            LOWORD(_RAX) = v97 & (v97 - 1); /*0x10042a22a*/
            v23 = (__int64 (__fastcall *)())v82; /*0x10042a22d*/
            v24 = _mm_load_si128(&v71); /*0x10042a234*/
            v22 = v83; /*0x10042a23c*/
            i = v72.i64[0]; /*0x10042a243*/
            v30 = _mm_load_si128(&v73); /*0x10042a24a*/
            if ( !(_WORD)_RAX ) /*0x10042a252*/
              goto LABEL_32; /*0x10042a252*/
          }
          for ( j = 1; ; j = v97 ) /*0x10042a2b6*/
          {
            LODWORD(v97) = j; /*0x10042a2bf*/
            v78 = j; /*0x10042a2c5*/
            v101 = (const __m128i *)&v84; /*0x10042a2d2*/
            v102 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10042a2dd*/
            v103 = &v78; /*0x10042a2e8*/
            v104 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10042a2f3*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v98, byte_1016F1DFB, (unsigned __int64)&v101); /*0x10042a305*/
            v79 = v98; /*0x10042a312*/
            v80 = v99; /*0x10042a319*/
            v81 = v100; /*0x10042a324*/
            if ( !v90 ) /*0x10042a333*/
              break; /*0x10042a333*/
            LODWORD(v97) = v97 + 1; /*0x10042a339*/
            v34 = core::hash::BuildHasher::hash_one::hd601b40b93b963b8(&v91, &v79); /*0x10042a34d*/
            _RCX = v34 >> 57; /*0x10042a355*/
            v36 = v87; /*0x10042a359*/
            v37 = (const __m128i *)v88; /*0x10042a360*/
            v38 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v34 >> 57), (__m128i)0LL); /*0x10042a36f*/
            v39 = &v87[-2].i8[8]; /*0x10042a374*/
            v40 = v80; /*0x10042a378*/
            v41 = v81; /*0x10042a37f*/
            for ( k = 0; ; k += 16 ) /*0x10042a386*/
            {
              v43 = (unsigned __int64)v37 & v34; /*0x10042a389*/
              v44 = _mm_loadu_si128((const __m128i *)((char *)v36 + v43)); /*0x10042a38c*/
              _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v44, v38)); /*0x10042a399*/
              if ( _R15D ) /*0x10042a3a1*/
                break; /*0x10042a3a1*/
LABEL_43:
              _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v44, (__m128i)-1LL)); /*0x10042a450*/
              if ( (_DWORD)_RCX ) /*0x10042a462*/
                goto LABEL_48; /*0x10042a462*/
              v34 = v43 + k + 16; /*0x10042a464*/
            }
            v82 = v43; /*0x10042a3a7*/
            v71.i64[0] = (__int64)v36; /*0x10042a3ae*/
            v83 = v37; /*0x10042a3b5*/
            v72 = v38; /*0x10042a3bc*/
            v73.i64[0] = k; /*0x10042a3c4*/
            v60 = v44; /*0x10042a3cb*/
            while ( 1 ) /*0x10042a3d3*/
            {
              __asm { tzcnt ecx, r15d } /*0x10042a3d3*/
              _RCX = -(__int64)((unsigned __int64)v37 & (v43 + _RCX)); /*0x10042a3de*/
              if ( v41 == *(_QWORD *)&v39[24 * _RCX + 16] ) /*0x10042a3ea*/
              {
                v46 = v4; /*0x10042a3fa*/
                v47 = v39; /*0x10042a3fd*/
                v48 = memcmp(v40, *(const void **)&v39[24 * _RCX + 8], v41); /*0x10042a400*/
                v39 = v47; /*0x10042a405*/
                v4 = v46; /*0x10042a408*/
                if ( !v48 ) /*0x10042a40d*/
                  break; /*0x10042a40d*/
              }
              v49 = _R15D - 1; /*0x10042a40f*/
              LOWORD(v49) = _R15D & (_R15D - 1); /*0x10042a413*/
              v50 = (_WORD)v49 == 0; /*0x10042a413*/
              _R15D = v49; /*0x10042a417*/
              v43 = v82; /*0x10042a41a*/
              v36 = (const __m128i *)v71.i64[0]; /*0x10042a421*/
              v37 = v83; /*0x10042a428*/
              v38 = _mm_load_si128(&v72); /*0x10042a42f*/
              k = v73.i64[0]; /*0x10042a437*/
              v44 = _mm_load_si128(&v60); /*0x10042a43e*/
              if ( v50 ) /*0x10042a446*/
                goto LABEL_43; /*0x10042a446*/
            }
            if ( v79 ) /*0x10042a48a*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a494*/
          }
LABEL_48:
          v100 = v81; /*0x10042a4a8*/
          v99 = (__int64 (__fastcall *)())v80; /*0x10042a4c1*/
          v98 = v79; /*0x10042a4c5*/
          if ( v84 ) /*0x10042a4d3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a4e1*/
        }
        else
        {
LABEL_34:
          v100 = __n; /*0x10042a290*/
          v99 = (__int64 (__fastcall *)())__s1; /*0x10042a2a9*/
          v98 = (size_t *)v84; /*0x10042a2ad*/
        }
        if ( v75 ) /*0x10042a4f7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a505*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v101, &v98); /*0x10042a511*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h51bc55f4d52d0730(&v87, &v101); /*0x10042a520*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v68, v4); /*0x10042a52b*/
        v106 = v100; /*0x10042a538*/
        v105 = (__int64)v99; /*0x10042a544*/
        v104 = (__int64 (__fastcall *)())v98; /*0x10042a548*/
        v107 = v96; /*0x10042a552*/
        v101 = (const __m128i *)v68; /*0x10042a564*/
        v102 = (__int64 (__fastcall *)())v69[0]; /*0x10042a568*/
        v103 = (_DWORD *)v69[1]; /*0x10042a573*/
        LOBYTE(v108) = 0; /*0x10042a577*/
        v51 = v95; /*0x10042a57b*/
        if ( v95 == v93 ) /*0x10042a589*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he1dc941f57474ec4(&v93); /*0x10042a596*/
        v18 = v94; /*0x100429f80*/
        v19 = v51 << 6; /*0x100429f8a*/
        *(_QWORD *)(v94 + v19 + 56) = v108; /*0x100429f92*/
        *(_QWORD *)(v18 + v19 + 48) = v107; /*0x100429f9b*/
        *(_QWORD *)(v18 + v19 + 40) = v106; /*0x100429fa4*/
        *(_QWORD *)(v18 + v19 + 32) = v105; /*0x100429fad*/
        *(_QWORD *)(v18 + v19 + 24) = v104; /*0x100429fb6*/
        *(_QWORD *)(v18 + v19 + 16) = v103; /*0x100429fbf*/
        v20 = (size_t)v101; /*0x100429fc4*/
        *(_QWORD *)(v18 + v19 + 8) = v102; /*0x100429fcc*/
        *(_QWORD *)(v18 + v19) = v20; /*0x100429fd1*/
        v95 = v51 + 1; /*0x100429fd8*/
      }
      v4 += 232; /*0x100429fdf*/
      ++v96; /*0x100429fe6*/
    }
    while ( v4 != v70 ); /*0x100429ff4*/
  }
  else
  {
    v92 = v106; /*0x10042a5a4*/
    v91 = v105; /*0x10042a5af*/
    v90 = v104; /*0x10042a5ba*/
    v89 = v103; /*0x10042a5c5*/
    v88 = v102; /*0x10042a5d4*/
    v87 = v101; /*0x10042a5db*/
    v93 = 0; /*0x10042a5e2*/
    v94 = 8; /*0x10042a5ed*/
    v95 = 0; /*0x10042a5f8*/
  }
  v52 = v74; /*0x10042a60a*/
  v74[3] = v95; /*0x10042a611*/
  result = v93; /*0x10042a615*/
  v52[2] = v94; /*0x10042a623*/
  v52[1] = result; /*0x10042a627*/
  *v52 = 10; /*0x10042a62b*/
  v53 = v88; /*0x10042a632*/
  if ( v88 ) /*0x10042a63c*/
  {
    v54 = v90; /*0x10042a642*/
    if ( v90 ) /*0x10042a64c*/
    {
      v55 = v87; /*0x10042a652*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v87)); /*0x10042a663*/
      v57 = v87 + 1; /*0x10042a666*/
      do /*0x10042a680*/
      {
        if ( !(_WORD)_R13D ) /*0x10042a686*/
        {
          do /*0x10042a6ad*/
          {
            v58 = _mm_movemask_epi8(_mm_load_si128(v57)); /*0x10042a696*/
            v55 -= 24; /*0x10042a69b*/
            ++v57; /*0x10042a6a2*/
          }
          while ( v58 == 0xFFFF ); /*0x10042a6ad*/
          _R13D = ~v58; /*0x10042a6af*/
        }
        __asm { tzcnt eax, r13d } /*0x10042a6b2*/
        if ( *((_QWORD *)&v55[-1] - 3 * result - 1) ) /*0x10042a6be*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a6d5*/
        v54 = (__int64 (__fastcall *)())((char *)v54 - 1); /*0x10042a670*/
        result = _R13D & (unsigned int)(_R13D - 1); /*0x10042a677*/
        _R13D &= _R13D - 1; /*0x10042a67a*/
      }
      while ( v54 ); /*0x10042a680*/
    }
    result = (24LL * (_QWORD)v53 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10042a6e8*/
    if ( (__int64 (__fastcall *)())((char *)v53 + result) != (__int64 (__fastcall *)())-17LL ) /*0x10042a6f3*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a707*/
  }
LABEL_66:
  if ( v63 ) /*0x10042a716*/
  {
    result = 16LL * (_QWORD)v63; /*0x10042a71b*/
    if ( 17LL * (_QWORD)v63 != -33 ) /*0x10042a726*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a73b*/
  }
  return result; /*0x10042a740*/
}