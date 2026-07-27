// __ZN13codexmate_lib4core5relay16codex_diagnostic34check_thread_poisoned_instructions @ 0x100512f40
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_thread_poisoned_instructions::hdfb6c4ad26943df3(
        __int64 a1,
        __int64 (__fastcall **a2)())
{
  __int64 v3; // r14
  __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 (__fastcall **v7)(); // rsi
  void (**v8)(void); // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  const __m128i *v11; // rax
  const __m128i *v12; // rdx
  const __m128i *v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  const void *v17; // r13
  size_t v18; // r15
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 (__fastcall **v21)(); // r13
  void (**v22)(void); // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 result; // rax
  void *v27; // rax
  void *v28; // r15
  _DWORD *v29; // rax
  _DWORD *v30; // r12
  _QWORD *v31; // rax
  _QWORD *v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 *v36; // rbx
  __int64 v37; // r15
  unsigned __int64 v38; // r14
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // r12
  unsigned __int64 v42; // rbx
  _QWORD *v43; // r14
  __int64 v44; // rsi
  const __m128i *v46; // r14
  const __m128i *v47; // rbx
  const __m128i *v48; // r15
  const __m128i *v50; // r12
  int v51; // r13d
  __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // r13
  _QWORD *v55; // r14
  __int64 v56; // rsi
  unsigned __int64 v57; // r12
  _QWORD *v58; // rdi
  __int64 v59; // rsi
  _QWORD *v60; // r14
  void *v61; // rax
  void *v62; // r15
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // r14
  __int64 v66; // r13
  __int64 v67; // rbx
  __int64 v68; // rdx
  const __m128i *v70; // rbx
  const __m128i *v71; // r15
  const __m128i *v73; // r12
  int v74; // r13d
  __int64 v75; // rax
  __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // r14
  _QWORD v79[3]; // [rsp+8h] [rbp-1C8h] BYREF
  const __m128i *v80[12]; // [rsp+20h] [rbp-1B0h] BYREF
  _QWORD v81[12]; // [rsp+80h] [rbp-150h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v83; // [rsp+118h] [rbp-B8h] BYREF
  unsigned __int64 v84; // [rsp+120h] [rbp-B0h]
  __int64 v85; // [rsp+128h] [rbp-A8h]
  __int64 i64; // [rsp+130h] [rbp-A0h] BYREF
  const __m128i *v87; // [rsp+138h] [rbp-98h]
  const __m128i *v88; // [rsp+140h] [rbp-90h]
  __int64 v89; // [rsp+148h] [rbp-88h]
  unsigned __int64 v90; // [rsp+150h] [rbp-80h] BYREF
  __int64 v91; // [rsp+158h] [rbp-78h] BYREF
  __int64 v92; // [rsp+160h] [rbp-70h]
  __int64 v93; // [rsp+168h] [rbp-68h]
  unsigned __int64 *v94; // [rsp+170h] [rbp-60h] BYREF
  __int64 v95; // [rsp+178h] [rbp-58h]
  unsigned __int64 v96; // [rsp+180h] [rbp-50h]
  unsigned __int64 *v97; // [rsp+188h] [rbp-48h] BYREF
  __int64 (__fastcall **v98)(); // [rsp+190h] [rbp-40h]
  __int64 v99; // [rsp+198h] [rbp-38h]
  const __m128i *v100; // [rsp+1A0h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v81); /*0x100512f61*/
  v3 = v81[2]; /*0x100512f66*/
  if ( v81[2] ) /*0x100512f70*/
  {
    v89 = a1; /*0x100512f76*/
    v4 = v81[1]; /*0x100512f7d*/
    v5 = (_QWORD *)(v81[1] + 8LL); /*0x100512f84*/
    do /*0x100512f97*/
    {
      v6 = *(v5 - 1); /*0x100512f99*/
      if ( v6 ) /*0x100512fa1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v6, 1); /*0x100512fac*/
      v5 += 3; /*0x100512f90*/
      --v3; /*0x100512f94*/
    }
    while ( v3 ); /*0x100512f97*/
    if ( v81[0] ) /*0x100512fbd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24LL * v81[0], 8); /*0x100512fcf*/
    v7 = a2; /*0x100512fdb*/
    codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h7b024af7a6c1ec26(v80, a2); /*0x100512fde*/
    if ( LODWORD(v80[0]) == 11 ) /*0x100512fea*/
    {
      v88 = v80[3]; /*0x100512ff7*/
      v87 = v80[2]; /*0x10051300c*/
      i64 = (__int64)v80[1]->i64; /*0x100513013*/
      v8 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x10051301a*/
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100513021*/
      v10 = v9; /*0x100513023*/
      if ( *(_BYTE *)(v9 + 16) == 1 ) /*0x10051302a*/
      {
        v11 = *(const __m128i **)v9; /*0x100513030*/
        v12 = *(const __m128i **)(v10 + 8); /*0x100513033*/
      }
      else
      {
        v11 = (const __m128i *)std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1005139fc*/
        *(_QWORD *)v10 = v11; /*0x100513a01*/
        *(_QWORD *)(v10 + 8) = v12; /*0x100513a04*/
        *(_BYTE *)(v10 + 16) = 1; /*0x100513a08*/
      }
      *(_QWORD *)v10 = (char *)v11->i64 + 1; /*0x10051303b*/
      memset(&v80[1], 0, 24); /*0x100513061*/
      v80[0] = (const __m128i *)&xmmword_1015FBEC0; /*0x10051306f*/
      v80[4] = v11; /*0x100513076*/
      v80[5] = v12; /*0x10051307d*/
      v94 = nullptr; /*0x100513084*/
      v95 = 8; /*0x10051308c*/
      v96 = 0; /*0x100513094*/
      v83 = 0; /*0x10051309c*/
      v13 = v87; /*0x1005130a7*/
      v100 = v87; /*0x1005130b8*/
      if ( !v88 ) /*0x1005130bc*/
        goto LABEL_43; /*0x1005130bc*/
      v14 = 96LL * (_QWORD)v88; /*0x1005130d0*/
      v15 = 0; /*0x1005130d4*/
      v16 = 0x8000000000000000LL; /*0x1005130d6*/
      v84 = 0x8000000000000000LL; /*0x1005130da*/
      v85 = 0; /*0x1005130e1*/
      do /*0x10051310b*/
      {
        if ( v13[v15 / 0x10 + 4].i64[1] != v84 ) /*0x10051311d*/
        {
          v17 = (const void *)v13[v15 / 0x10 + 5].i64[0]; /*0x10051311f*/
          v18 = v13[v15 / 0x10 + 5].u64[1]; /*0x100513124*/
          if ( v18 ) /*0x10051312c*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v7); /*0x10051312e*/
            v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1); /*0x100513140*/
            if ( !v19 ) /*0x100513146*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x100513a5b*/
          }
          else
          {
            v19 = 1; /*0x10051314d*/
          }
          memcpy((void *)v19, v17, v18); /*0x10051315c*/
          v81[0] = v18; /*0x100513161*/
          v81[1] = v19; /*0x100513168*/
          v81[2] = v18; /*0x10051316f*/
          v8 = (void (**)(void))v80; /*0x100513176*/
          v7 = (__int64 (__fastcall **)())v81; /*0x10051317d*/
          if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hbd679cce41409ece(v80, v81) ) /*0x100513184*/
          {
            std::sys::fs::metadata::h32fa16d3052ea535(v81, v100[v15 / 0x10 + 5].i64[0], v100[v15 / 0x10 + 5].i64[1]); /*0x1005131a6*/
            v20 = v81[0]; /*0x1005131ab*/
            v7 = (__int64 (__fastcall **)())v81[1]; /*0x1005131b2*/
            v8 = (void (**)(void))v81[0]; /*0x1005131b9*/
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1005131bc*/
              v81[0],
              v81[1]);
            if ( !v20 ) /*0x1005131c4*/
            {
              v83 = ++v85; /*0x1005131db*/
              v7 = (__int64 (__fastcall **)())v100[v15 / 0x10 + 5].i64[0]; /*0x1005131e6*/
              v8 = (void (**)(void))v81; /*0x1005131f0*/
              codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a( /*0x1005131f7*/
                v81,
                v7,
                v100[v15 / 0x10 + 5].i64[1]);
              if ( LODWORD(v81[0]) == 11 ) /*0x100513203*/
              {
                v21 = (__int64 (__fastcall **)())v81[1]; /*0x100513209*/
                if ( v81[1] != v84 ) /*0x100513217*/
                {
                  v22 = (void (**)(void))v81[2]; /*0x10051321d*/
                  v7 = (__int64 (__fastcall **)())v81[3]; /*0x100513224*/
                  v8 = (void (**)(void))v81[2]; /*0x10051322b*/
                  if ( (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::session_meta_is_guardian_poisoned::hc9c3a1189ee99bec( /*0x10051322e*/
                                          v81[2],
                                          v81[3]) )
                  {
                    v8 = (void (**)(void))&v97; /*0x100513240*/
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100513244*/
                      &v97,
                      &v100[v15 / 0x10 + 1].u64[1]);
                    v23 = v96; /*0x100513249*/
                    if ( (unsigned __int64 *)v96 == v94 ) /*0x100513251*/
                    {
                      v8 = (void (**)(void))&v94; /*0x100513253*/
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v94); /*0x100513257*/
                    }
                    v24 = v95; /*0x10051325c*/
                    v25 = 3 * v23; /*0x100513260*/
                    *(_QWORD *)(v95 + 8 * v25 + 16) = v99; /*0x100513268*/
                    v16 = (unsigned __int64)v97; /*0x10051326d*/
                    v7 = v98; /*0x100513271*/
                    *(_QWORD *)(v24 + 8 * v25 + 8) = v98; /*0x100513275*/
                    *(_QWORD *)(v24 + 8 * v25) = v16; /*0x10051327a*/
                    v96 = v23 + 1; /*0x100513281*/
                  }
                  if ( v21 ) /*0x100513288*/
                  {
                    v8 = v22; /*0x100513293*/
                    v7 = v21; /*0x100513296*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x100513299*/
                  }
                }
              }
              else
              {
                v8 = (void (**)(void))v81; /*0x1005130ee*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v81); /*0x1005130f5*/
              }
            }
          }
          v13 = v100; /*0x100513100*/
        }
        v15 += 96LL; /*0x100513104*/
      }
      while ( v14 != v15 ); /*0x10051310b*/
      v35 = v96; /*0x1005134a0*/
      if ( v96 ) /*0x1005134a7*/
      {
        if ( v96 != 1 ) /*0x1005134ad*/
        {
          if ( v96 >= 0x15 ) /*0x100513a3e*/
            core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v95, v96, &v90, v13); /*0x100513abb*/
          else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::h83ca487eb4badd76(v95, v96, 1, &v90); /*0x100513a49*/
        }
        alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h9258108c33673bcf(&v94, v35, v16, v13); /*0x1005134b7*/
        v90 = v96; /*0x1005134c0*/
        v36 = v94; /*0x1005134c4*/
        v37 = v95; /*0x1005134c8*/
        v38 = v95 + 24 * v96; /*0x1005134d0*/
        if ( v96 - 1 >= 4 ) /*0x1005134e6*/
        {
          v39 = v95; /*0x10051366c*/
          if ( v96 ) /*0x100513672*/
            v39 = v95 + 120; /*0x100513674*/
          if ( v38 == v39 ) /*0x100513684*/
          {
            v38 = v39; /*0x1005136d0*/
          }
          else
          {
            v54 = (v38 - v39) / 0x18; /*0x100513689*/
            v55 = (_QWORD *)(v39 + 8); /*0x10051368d*/
            do /*0x1005136a7*/
            {
              v56 = *(v55 - 1); /*0x1005136a9*/
              if ( v56 ) /*0x1005136b0*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v55, v56, 1); /*0x1005136ba*/
              v55 += 3; /*0x1005136a0*/
              --v54; /*0x1005136a4*/
            }
            while ( v54 ); /*0x1005136a7*/
            v38 = v39; /*0x1005136c1*/
          }
        }
        else
        {
          v39 = v95 + 24 * v96; /*0x1005134ec*/
        }
        v57 = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)(v39 - v37) >> 3); /*0x1005136da*/
        v97 = v36; /*0x1005136de*/
        v98 = (__int64 (__fastcall **)())v37; /*0x1005136e2*/
        v99 = v57; /*0x1005136e6*/
        v58 = v81; /*0x1005136f1*/
        v59 = v37; /*0x1005136fe*/
        alloc::str::join_generic_copy::heca7a5e86402c6b6(v81, v37, v57, &unk_1015FC148, 3); /*0x100513704*/
        v93 = v81[2]; /*0x100513710*/
        v92 = v81[1]; /*0x100513722*/
        v91 = v81[0]; /*0x100513726*/
        if ( v38 != v37 ) /*0x10051372d*/
        {
          v60 = (_QWORD *)(v37 + 8); /*0x10051372f*/
          do /*0x100513747*/
          {
            v59 = *(v60 - 1); /*0x100513749*/
            if ( v59 ) /*0x100513750*/
            {
              v58 = (_QWORD *)*v60; /*0x100513752*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v59, 1); /*0x10051375a*/
            }
            v60 += 3; /*0x100513740*/
            --v57; /*0x100513744*/
          }
          while ( v57 ); /*0x100513747*/
        }
        if ( v36 ) /*0x100513764*/
        {
          v59 = 24LL * (_QWORD)v36; /*0x10051376a*/
          v58 = (_QWORD *)v37; /*0x100513773*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24LL * (_QWORD)v36, 8); /*0x100513776*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, v59); /*0x10051377b*/
        v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x10051378a*/
        if ( !v61 ) /*0x100513792*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100513a9f*/
        v62 = v61; /*0x100513798*/
        qmemcpy(v61, "thread_poisoned_instructions", 28); /*0x1005137c1*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1); /*0x1005137cc*/
        v63 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1005137db*/
        if ( !v63 ) /*0x1005137e3*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100513ab0*/
        v64 = v63; /*0x1005137e9*/
        *(_BYTE *)(v63 + 4) = 114; /*0x1005137ec*/
        *(_DWORD *)v63 = 1869771365; /*0x1005137f0*/
        v97 = &v90; /*0x1005137fa*/
        v98 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100513805*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v81, &unk_1017C0CDF, &v97); /*0x10051381b*/
        v65 = v81[0]; /*0x100513820*/
        v66 = v81[1]; /*0x100513827*/
        v67 = v81[2]; /*0x10051382e*/
        v81[0] = &v91; /*0x100513839*/
        v81[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100513847*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v79, &unk_1017C0D13, v81); /*0x100513863*/
        v68 = v89; /*0x10051386f*/
        *(_QWORD *)(v89 + 88) = v79[2]; /*0x100513876*/
        _RAX = v79[0]; /*0x10051387a*/
        *(_QWORD *)(v68 + 80) = v79[1]; /*0x100513888*/
        *(_QWORD *)(v68 + 72) = _RAX; /*0x10051388c*/
        *(_QWORD *)v68 = 28; /*0x100513890*/
        *(_QWORD *)(v68 + 8) = v62; /*0x100513897*/
        *(_QWORD *)(v68 + 16) = 28; /*0x10051389b*/
        *(_QWORD *)(v68 + 24) = 5; /*0x1005138a3*/
        *(_QWORD *)(v68 + 32) = v64; /*0x1005138ab*/
        *(_QWORD *)(v68 + 40) = 5; /*0x1005138af*/
        *(_QWORD *)(v68 + 48) = v65; /*0x1005138b7*/
        *(_QWORD *)(v68 + 56) = v66; /*0x1005138bb*/
        *(_QWORD *)(v68 + 64) = v67; /*0x1005138bf*/
        *(_BYTE *)(v68 + 96) = 1; /*0x1005138c3*/
        if ( v91 ) /*0x1005138ce*/
          HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1) >> 32; /*0x1005138d9*/
        v46 = v80[1]; /*0x1005138de*/
        if ( !v80[1] ) /*0x1005138e8*/
          goto LABEL_92; /*0x1005138e8*/
        v70 = v80[3]; /*0x1005138ee*/
        if ( v80[3] ) /*0x1005138f8*/
        {
          v71 = v80[0]; /*0x1005138fe*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v80[0])); /*0x10051390f*/
          v73 = v80[0] + 1; /*0x100513912*/
          do /*0x100513930*/
          {
            if ( !(_WORD)_R13D ) /*0x100513936*/
            {
              do /*0x10051395d*/
              {
                v74 = _mm_movemask_epi8(_mm_load_si128(v73)); /*0x100513946*/
                v71 -= 24; /*0x10051394b*/
                ++v73; /*0x100513952*/
              }
              while ( v74 == 0xFFFF ); /*0x10051395d*/
              _R13D = ~v74; /*0x10051395f*/
            }
            __asm { tzcnt eax, r13d } /*0x100513962*/
            v75 = -3 * _RAX; /*0x10051396a*/
            v76 = *((_QWORD *)&v71[-1] + v75 - 1); /*0x10051396e*/
            if ( v76 ) /*0x100513976*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[-1].i64[v75], v76, 1); /*0x100513985*/
            v70 = (const __m128i *)((char *)v70 - 1); /*0x100513920*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100513927*/
            _R13D &= _R13D - 1; /*0x10051392a*/
          }
          while ( v70 ); /*0x100513930*/
        }
      }
      else
      {
LABEL_43:
        v97 = (unsigned __int64 *)&v83; /*0x1005134fb*/
        v98 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100513506*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v81, &unk_1017C0CAF, &v97); /*0x10051351c*/
        v40 = v81[0]; /*0x100513521*/
        v41 = v81[1]; /*0x100513528*/
        codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10051354c*/
          v89,
          &anon_92869709a5e99ce1936aa4e326b6c562_614,
          28,
          v81[1],
          v81[2]);
        if ( v40 ) /*0x100513554*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x100513561*/
        v42 = v96; /*0x100513566*/
        if ( v96 ) /*0x10051356d*/
        {
          v43 = (_QWORD *)(v95 + 8); /*0x100513573*/
          do /*0x100513587*/
          {
            v44 = *(v43 - 1); /*0x100513589*/
            if ( v44 ) /*0x100513590*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v43, v44, 1); /*0x10051359a*/
            v43 += 3; /*0x100513580*/
            --v42; /*0x100513584*/
          }
          while ( v42 ); /*0x100513587*/
        }
        HIDWORD(_RAX) = HIDWORD(v94); /*0x1005135a1*/
        if ( v94 ) /*0x1005135a8*/
          HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, 24LL * (_QWORD)v94, 8) >> 32; /*0x1005135bb*/
        v46 = v80[1]; /*0x1005135c0*/
        if ( !v80[1] ) /*0x1005135ca*/
          goto LABEL_92; /*0x1005135ca*/
        v47 = v80[3]; /*0x1005135d0*/
        if ( v80[3] ) /*0x1005135da*/
        {
          v48 = v80[0]; /*0x1005135e0*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v80[0])); /*0x1005135f1*/
          v50 = v80[0] + 1; /*0x1005135f4*/
          do /*0x100513610*/
          {
            if ( !(_WORD)_R13D ) /*0x10051361a*/
            {
              do /*0x10051363d*/
              {
                v51 = _mm_movemask_epi8(_mm_load_si128(v50)); /*0x100513626*/
                v48 -= 24; /*0x10051362b*/
                ++v50; /*0x100513632*/
              }
              while ( v51 == 0xFFFF ); /*0x10051363d*/
              _R13D = ~v51; /*0x10051363f*/
            }
            __asm { tzcnt eax, r13d } /*0x100513642*/
            v52 = -3 * _RAX; /*0x10051364a*/
            v53 = *((_QWORD *)&v48[-1] + v52 - 1); /*0x10051364e*/
            if ( v53 ) /*0x100513656*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48[-1].i64[v52], v53, 1); /*0x100513665*/
            v47 = (const __m128i *)((char *)v47 - 1); /*0x100513600*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100513607*/
            _R13D &= _R13D - 1; /*0x10051360a*/
          }
          while ( v47 ); /*0x100513610*/
        }
      }
      v77 = (24LL * (_QWORD)v46 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100513998*/
      v78 = (__int64)v46[1].i64 + v77 + 1; /*0x10051399f*/
      if ( v78 ) /*0x1005139a3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v80[0] - v77, v78, 16); /*0x1005139b7*/
LABEL_92:
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&i64); /*0x1005139bc*/
      result = i64; /*0x1005139c8*/
      if ( i64 ) /*0x1005139d2*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, 96 * i64, 8); /*0x1005139e5*/
      return result; /*0x1005139e5*/
    }
    qmemcpy(v81, v80, sizeof(v81)); /*0x10051330d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v82, v81); /*0x100513310*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x10051331f*/
    if ( !v27 ) /*0x100513327*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100513a6c*/
    v28 = v27; /*0x10051332d*/
    qmemcpy(v27, "thread_poisoned_instructions", 28); /*0x100513356*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1); /*0x100513361*/
    v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100513370*/
    if ( !v29 ) /*0x100513378*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100513a7d*/
    v30 = v29; /*0x10051337e*/
    *(_DWORD *)((char *)v29 + 3) = 1735289198; /*0x100513381*/
    *v29 = 1852989815; /*0x100513388*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10051338e*/
    v31 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x10051339d*/
    if ( !v31 ) /*0x1005133a5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100513a8e*/
    v32 = v31; /*0x1005133ab*/
    *(_QWORD *)((char *)v31 + 22) = 0x95BCE5A2B4E78BA8LL; /*0x1005133b8*/
    v31[2] = 0x8BA8E7BFBAE7968FLL; /*0x1005133c6*/
    v31[1] = 0xE5BBAFE8B495E68CLL; /*0x1005133d4*/
    *v31 = 0xAEE595B3E6A097E6LL; /*0x1005133e2*/
    v91 = 0; /*0x1005133e6*/
    v92 = 1; /*0x1005133ee*/
    v93 = 0; /*0x1005133f6*/
    v99 = 1610612768; /*0x1005133fe*/
    v97 = (unsigned __int64 *)&v91; /*0x10051340a*/
    v98 = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x100513415*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100513424*/
                            v81,
                            &v97) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100513a2f*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        &v90,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v33 = v89; /*0x100513435*/
    *(_QWORD *)(v89 + 88) = v93; /*0x10051343c*/
    v34 = v91; /*0x100513440*/
    *(_QWORD *)(v33 + 80) = v92; /*0x100513448*/
    *(_QWORD *)(v33 + 72) = v34; /*0x10051344c*/
    *(_QWORD *)v33 = 28; /*0x100513450*/
    *(_QWORD *)(v33 + 8) = v28; /*0x100513457*/
    *(_QWORD *)(v33 + 16) = 28; /*0x10051345b*/
    *(_QWORD *)(v33 + 24) = 7; /*0x100513463*/
    *(_QWORD *)(v33 + 32) = v30; /*0x10051346b*/
    *(_QWORD *)(v33 + 40) = 7; /*0x10051346f*/
    *(_QWORD *)(v33 + 48) = 30; /*0x100513477*/
    *(_QWORD *)(v33 + 56) = v32; /*0x10051347f*/
    *(_QWORD *)(v33 + 64) = 30; /*0x100513483*/
    *(_BYTE *)(v33 + 96) = 0; /*0x10051348b*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v80); /*0x100513496*/
  }
  else
  {
    if ( v81[0] ) /*0x1005132ad*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81[1], 24LL * v81[0], 8); /*0x1005132c3*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1005132f5*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_614,
             28,
             &unk_1015FE601,
             57);
  }
}