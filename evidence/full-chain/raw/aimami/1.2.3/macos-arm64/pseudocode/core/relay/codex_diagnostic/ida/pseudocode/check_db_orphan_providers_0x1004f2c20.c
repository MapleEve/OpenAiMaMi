// __ZN13codexmate_lib4core5relay16codex_diagnostic25check_db_orphan_providers @ 0x1004f2c20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_db_orphan_providers::h2885566813afde9a(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const __m128i *v5; // rbx
  const __m128i *v6; // r13
  __int64 *v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 result; // rax
  void *v15; // rax
  void *v16; // r14
  _DWORD *v17; // rax
  _DWORD *v18; // r15
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  _QWORD *v41; // rsi
  __int64 v42; // r12
  unsigned __int64 v43; // rbx
  __int64 v44; // r13
  unsigned __int64 v45; // r15
  _QWORD *v46; // rbx
  __int64 v47; // rsi
  unsigned __int64 v48; // r13
  _QWORD *v49; // r15
  _QWORD *v50; // rdi
  __int64 v51; // rsi
  _QWORD *v52; // rbx
  void *v53; // rax
  void *v54; // r12
  __int64 v55; // r13
  unsigned __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v61; // r15
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  size_t v64; // rdx
  unsigned __int64 v65; // r12
  const void *v66; // rax
  _QWORD *v67; // rbx
  size_t v68; // rdx
  const __m128i *v69; // rbx
  const __m128i *v70; // r14
  const __m128i *v71; // r15
  const __m128i *v73; // r12
  int v74; // r13d
  __int64 v75; // rax
  __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // rbx
  const __m128i *v79[12]; // [rsp+0h] [rbp-1C0h] BYREF
  _QWORD v80[3]; // [rsp+60h] [rbp-160h] BYREF
  _QWORD v81[3]; // [rsp+78h] [rbp-148h] BYREF
  _QWORD v82[12]; // [rsp+90h] [rbp-130h] BYREF
  _QWORD v83[2]; // [rsp+F0h] [rbp-D0h] BYREF
  unsigned __int64 v84; // [rsp+100h] [rbp-C0h]
  _QWORD *v85; // [rsp+108h] [rbp-B8h]
  __int64 v86; // [rsp+110h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+118h] [rbp-A8h]
  __int64 v88; // [rsp+120h] [rbp-A0h]
  _QWORD *v89; // [rsp+128h] [rbp-98h] BYREF
  __int64 (__fastcall **v90)(); // [rsp+130h] [rbp-90h]
  __int64 v91; // [rsp+138h] [rbp-88h]
  __int64 v92; // [rsp+140h] [rbp-80h]
  __int64 v93; // [rsp+148h] [rbp-78h]
  __int64 v94; // [rsp+150h] [rbp-70h] BYREF
  __int64 v95; // [rsp+158h] [rbp-68h]
  __int64 v96; // [rsp+160h] [rbp-60h]
  _QWORD *v97; // [rsp+168h] [rbp-58h] BYREF
  __int64 v98; // [rsp+170h] [rbp-50h]
  unsigned __int64 v99; // [rsp+178h] [rbp-48h]
  unsigned __int64 v100; // [rsp+180h] [rbp-40h]
  __int64 v101; // [rsp+188h] [rbp-38h]
  unsigned __int64 v102; // [rsp+190h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v79); /*0x1004f2c47*/
  v5 = v79[2]; /*0x1004f2c4c*/
  if ( v79[2] ) /*0x1004f2c56*/
  {
    v93 = a3; /*0x1004f2c5c*/
    v92 = a1; /*0x1004f2c60*/
    v6 = v79[1]; /*0x1004f2c64*/
    v7 = &v79[1]->i64[1]; /*0x1004f2c6b*/
    do /*0x1004f2c87*/
    {
      v8 = *(v7 - 1); /*0x1004f2c89*/
      if ( v8 ) /*0x1004f2c90*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v7, v8, 1); /*0x1004f2c9a*/
      v7 += 3; /*0x1004f2c80*/
      v5 = (const __m128i *)((char *)v5 - 1); /*0x1004f2c84*/
    }
    while ( v5 ); /*0x1004f2c87*/
    if ( v79[0] ) /*0x1004f2cab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * (__int64)v79[0]->i64, 8); /*0x1004f2cbd*/
    codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h7b024af7a6c1ec26(v82, a2); /*0x1004f2ccc*/
    if ( LODWORD(v82[0]) == 11 ) /*0x1004f2cd8*/
    {
      v88 = v82[3]; /*0x1004f2ce5*/
      v87 = v82[2]; /*0x1004f2cfa*/
      v86 = v82[1]; /*0x1004f2d01*/
      codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::hc5129088cc949268( /*0x1004f2d24*/
        v79,
        *(_QWORD *)(a2 + 56),
        *(_QWORD *)(a2 + 64),
        v93);
      v93 = v87; /*0x1004f2d42*/
      v81[0] = v87; /*0x1004f2d46*/
      v81[1] = v87 + 96 * v88; /*0x1004f2d4d*/
      v81[2] = v79; /*0x1004f2d54*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1f9cf16d45715af2( /*0x1004f2d69*/
        v83,
        v81);
      v10 = v83[1]; /*0x1004f2d6e*/
      v11 = v84; /*0x1004f2d75*/
      v12 = 16 * v84; /*0x1004f2d7f*/
      if ( 16 * v84 > 0x7FFFFFFFFFFFFFF8LL ) /*0x1004f2d94*/
      {
        v13 = 0; /*0x1004f2d9a*/
        goto LABEL_11; /*0x1004f2d9a*/
      }
      if ( v12 ) /*0x1004f2fb1*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, v81); /*0x1004f2fb3*/
        v13 = 8; /*0x1004f2fb8*/
        v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 8); /*0x1004f2fc6*/
        v100 = v11; /*0x1004f2fcb*/
        v101 = v23; /*0x1004f2fcf*/
        if ( !v23 ) /*0x1004f2fd6*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x1004f2d9d*/
        v24 = v100; /*0x1004f2fdf*/
        if ( !v11 ) /*0x1004f2fe3*/
          goto LABEL_74; /*0x1004f2fe3*/
      }
      else
      {
        v101 = 8; /*0x1004f2fef*/
        v100 = 0; /*0x1004f2ff3*/
        v24 = 0; /*0x1004f2ffe*/
        if ( !v84 ) /*0x1004f3002*/
          goto LABEL_74; /*0x1004f3002*/
      }
      if ( v11 == 1 ) /*0x1004f300c*/
      {
        v25 = 0; /*0x1004f300e*/
      }
      else
      {
        v9 = v11 & 0xFFFFFFFFFFFFFFFELL; /*0x1004f3015*/
        v26 = (_QWORD *)(v101 + 24); /*0x1004f301d*/
        v25 = 0; /*0x1004f3021*/
        do /*0x1004f3063*/
        {
          v27 = *(_QWORD *)(v10 + 8 * v25); /*0x1004f3030*/
          v28 = *(_QWORD *)(v27 + 32); /*0x1004f3034*/
          v29 = *(_QWORD *)(v27 + 40); /*0x1004f3038*/
          *(v26 - 3) = v28; /*0x1004f303c*/
          *(v26 - 2) = v29; /*0x1004f3040*/
          v30 = *(_QWORD *)(v10 + 8 * v25 + 8); /*0x1004f3044*/
          v31 = *(_QWORD *)(v30 + 32); /*0x1004f3049*/
          v32 = *(_QWORD *)(v30 + 40); /*0x1004f304d*/
          *(v26 - 1) = v31; /*0x1004f3051*/
          *v26 = v32; /*0x1004f3055*/
          v25 += 2; /*0x1004f3058*/
          v26 += 4; /*0x1004f305c*/
        }
        while ( v9 != v25 ); /*0x1004f3063*/
      }
      if ( (v11 & 1) != 0 ) /*0x1004f3069*/
      {
        v33 = *(_QWORD *)(v10 + 8 * v25); /*0x1004f306b*/
        v34 = *(_QWORD *)(v33 + 32); /*0x1004f306f*/
        v9 = *(_QWORD *)(v33 + 40); /*0x1004f3073*/
        v35 = 16 * v25; /*0x1004f3077*/
        v36 = v101; /*0x1004f307b*/
        *(_QWORD *)(v101 + v35) = v34; /*0x1004f307f*/
        *(_QWORD *)(v36 + v35 + 8) = v9; /*0x1004f3083*/
      }
      v37 = 1; /*0x1004f3088*/
      if ( v11 == 1 ) /*0x1004f3092*/
        goto LABEL_32; /*0x1004f3092*/
      if ( v11 >= 0x15 ) /*0x1004f33b1*/
        core::slice::sort::unstable::ipnsort::hd3cbac9fbe0e4cf3(v101, v11, &v94, v9); /*0x1004f367c*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::h207e5da8f101478b(v101, v11, 1, &v94); /*0x1004f33c7*/
      v61 = v101 + 32; /*0x1004f33d0*/
      v62 = 2; /*0x1004f33dd*/
      while ( 1 ) /*0x1004f33f6*/
      {
        v64 = *(_QWORD *)(v61 - 8); /*0x1004f33f6*/
        if ( v64 == *(_QWORD *)(v61 - 24) && !memcmp(*(const void **)(v61 - 16), *(const void **)(v61 - 32), v64) ) /*0x1004f3408*/
          break; /*0x1004f3408*/
        v61 += 16; /*0x1004f33e4*/
        v63 = 1 - v11 + v62++ + 1; /*0x1004f33e8*/
        if ( v63 == 2 ) /*0x1004f33f4*/
        {
          v37 = v11; /*0x1004f3472*/
          goto LABEL_32; /*0x1004f3475*/
        }
      }
      v102 = v62 - 1; /*0x1004f3415*/
      v65 = v11 - v62; /*0x1004f341c*/
      if ( v11 <= v62 ) /*0x1004f341f*/
      {
        v37 = v102; /*0x1004f3421*/
        goto LABEL_32; /*0x1004f3425*/
      }
      do /*0x1004f3443*/
      {
        v67 = (_QWORD *)(v101 + 16 * v102); /*0x1004f3451*/
        v68 = *(_QWORD *)(v61 + 8); /*0x1004f3455*/
        if ( v68 != *(v67 - 1) || memcmp(*(const void **)v61, (const void *)*(v67 - 2), v68) ) /*0x1004f3467*/
        {
          v66 = *(const void **)v61; /*0x1004f342a*/
          v67[1] = *(_QWORD *)(v61 + 8); /*0x1004f3431*/
          *v67 = v66; /*0x1004f3435*/
          ++v102; /*0x1004f3438*/
        }
        v61 += 16; /*0x1004f343c*/
        --v65; /*0x1004f3440*/
      }
      while ( v65 ); /*0x1004f3443*/
      v37 = v102; /*0x1004f349b*/
      v24 = v100; /*0x1004f34a2*/
      if ( v102 ) /*0x1004f34a6*/
      {
LABEL_32:
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h632a63c3810e7de7( /*0x1004f3098*/
          &v97,
          v10,
          v10 + 8 * v11);
        v40 = v99; /*0x1004f30a8*/
        if ( v99 >= 2 ) /*0x1004f30b0*/
        {
          if ( v99 >= 0x15 ) /*0x1004f3482*/
            core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v98, v99, &v94, v39); /*0x1004f368a*/
          else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::h83ca487eb4badd76(v98, v99, 1, &v94); /*0x1004f3491*/
        }
        alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h9258108c33673bcf(&v97, v40, v38, v39); /*0x1004f30ba*/
        v41 = v97; /*0x1004f30bf*/
        v42 = v98; /*0x1004f30c3*/
        v43 = v98 + 24 * v99; /*0x1004f30cf*/
        v102 = v37; /*0x1004f30e5*/
        if ( v99 - 1 >= 4 ) /*0x1004f30e9*/
        {
          v44 = v98; /*0x1004f30f0*/
          if ( v99 ) /*0x1004f30f6*/
            v44 = v98 + 120; /*0x1004f30f8*/
          if ( v43 == v44 ) /*0x1004f3109*/
          {
            v43 = v44; /*0x1004f3157*/
          }
          else
          {
            v85 = v97; /*0x1004f310e*/
            v45 = (v43 - v44) / 0x18; /*0x1004f3115*/
            v46 = (_QWORD *)(v44 + 8); /*0x1004f3119*/
            do /*0x1004f3127*/
            {
              v47 = *(v46 - 1); /*0x1004f3129*/
              if ( v47 ) /*0x1004f3130*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v46, v47, 1); /*0x1004f313a*/
              v46 += 3; /*0x1004f3120*/
              --v45; /*0x1004f3124*/
            }
            while ( v45 ); /*0x1004f3127*/
            v43 = v44; /*0x1004f3141*/
            v41 = v85; /*0x1004f3144*/
          }
        }
        else
        {
          v44 = v98 + 24 * v99; /*0x1004f30eb*/
        }
        v48 = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)(v44 - v42) >> 3); /*0x1004f3161*/
        v49 = v41; /*0x1004f3165*/
        v89 = v41; /*0x1004f3168*/
        v90 = (__int64 (__fastcall **)())v42; /*0x1004f316f*/
        v91 = v48; /*0x1004f3176*/
        v50 = v82; /*0x1004f3184*/
        v51 = v42; /*0x1004f3191*/
        alloc::str::join_generic_copy::heca7a5e86402c6b6(v82, v42, v48, &unk_1015FC148, 3); /*0x1004f3197*/
        v96 = v82[2]; /*0x1004f31a3*/
        v95 = v82[1]; /*0x1004f31b5*/
        v94 = v82[0]; /*0x1004f31b9*/
        if ( v43 != v42 ) /*0x1004f31c0*/
        {
          v52 = (_QWORD *)(v42 + 8); /*0x1004f31c2*/
          do /*0x1004f31d7*/
          {
            v51 = *(v52 - 1); /*0x1004f31d9*/
            if ( v51 ) /*0x1004f31e0*/
            {
              v50 = (_QWORD *)*v52; /*0x1004f31e2*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v51, 1); /*0x1004f31ea*/
            }
            v52 += 3; /*0x1004f31d0*/
            --v48; /*0x1004f31d4*/
          }
          while ( v48 ); /*0x1004f31d7*/
        }
        if ( v49 ) /*0x1004f31f4*/
        {
          v51 = 24LL * (_QWORD)v49; /*0x1004f31fa*/
          v50 = (_QWORD *)v42; /*0x1004f3203*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 24LL * (_QWORD)v49, 8); /*0x1004f3206*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50, v51); /*0x1004f320b*/
        v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004f321a*/
        if ( !v53 ) /*0x1004f3222*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f3659*/
        v54 = v53; /*0x1004f3228*/
        qmemcpy(v53, "db_orphan_providers", 19); /*0x1004f3244*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004f3251*/
        v55 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004f3265*/
        v56 = v102; /*0x1004f326b*/
        if ( !v55 ) /*0x1004f326f*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004f366a*/
        *(_BYTE *)(v55 + 4) = 114; /*0x1004f3275*/
        *(_DWORD *)v55 = 1869771365; /*0x1004f327a*/
        v97 = (_QWORD *)v56; /*0x1004f3282*/
        v89 = &v97; /*0x1004f328a*/
        v90 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004f3298*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v82, &unk_1017C004A, &v89); /*0x1004f32b4*/
        v102 = v82[0]; /*0x1004f32c0*/
        v57 = v82[1]; /*0x1004f32c4*/
        v58 = v82[2]; /*0x1004f32cb*/
        v82[0] = &v94; /*0x1004f32d6*/
        v82[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004f32e4*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v80, &unk_1017C0078, v82); /*0x1004f3300*/
        v59 = v92; /*0x1004f330c*/
        *(_QWORD *)(v92 + 88) = v80[2]; /*0x1004f3310*/
        _RAX = v80[0]; /*0x1004f3314*/
        *(_QWORD *)(v59 + 80) = v80[1]; /*0x1004f3322*/
        *(_QWORD *)(v59 + 72) = _RAX; /*0x1004f3326*/
        *(_QWORD *)v59 = 19; /*0x1004f332a*/
        *(_QWORD *)(v59 + 8) = v54; /*0x1004f3331*/
        *(_QWORD *)(v59 + 16) = 19; /*0x1004f3335*/
        *(_QWORD *)(v59 + 24) = 5; /*0x1004f333d*/
        *(_QWORD *)(v59 + 32) = v55; /*0x1004f3345*/
        *(_QWORD *)(v59 + 40) = 5; /*0x1004f3349*/
        HIDWORD(_RAX) = HIDWORD(v102); /*0x1004f3351*/
        *(_QWORD *)(v59 + 48) = v102; /*0x1004f3355*/
        *(_QWORD *)(v59 + 56) = v57; /*0x1004f3359*/
        *(_QWORD *)(v59 + 64) = v58; /*0x1004f335d*/
        *(_BYTE *)(v59 + 96) = 1; /*0x1004f3361*/
        if ( v94 ) /*0x1004f336c*/
          HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v94, 1) >> 32; /*0x1004f3377*/
        v24 = v100; /*0x1004f337c*/
        goto LABEL_75; /*0x1004f3380*/
      }
LABEL_74:
      HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004f34ac*/
                                          v92,
                                          &anon_92869709a5e99ce1936aa4e326b6c562_523,
                                          19,
                                          &unk_1015FD5B2,
                                          28) >> 32;
LABEL_75:
      if ( v24 ) /*0x1004f34d1*/
        HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, 16 * v24, 8) >> 32; /*0x1004f34e3*/
      if ( v83[0] ) /*0x1004f34f2*/
        HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 8LL * v83[0], 8) >> 32; /*0x1004f3500*/
      v69 = v79[1]; /*0x1004f3505*/
      if ( v79[1] ) /*0x1004f350f*/
      {
        v70 = v79[3]; /*0x1004f3515*/
        if ( v79[3] ) /*0x1004f351f*/
        {
          v71 = v79[0]; /*0x1004f3525*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v79[0])); /*0x1004f3536*/
          v73 = v79[0] + 1; /*0x1004f3539*/
          do /*0x1004f3550*/
          {
            if ( !(_WORD)_R13D ) /*0x1004f3556*/
            {
              do /*0x1004f357d*/
              {
                v74 = _mm_movemask_epi8(_mm_load_si128(v73)); /*0x1004f3566*/
                v71 -= 24; /*0x1004f356b*/
                ++v73; /*0x1004f3572*/
              }
              while ( v74 == 0xFFFF ); /*0x1004f357d*/
              _R13D = ~v74; /*0x1004f357f*/
            }
            __asm { tzcnt eax, r13d } /*0x1004f3582*/
            v75 = -3 * _RAX; /*0x1004f358a*/
            v76 = *((_QWORD *)&v71[-1] + v75 - 1); /*0x1004f358e*/
            if ( v76 ) /*0x1004f3596*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[-1].i64[v75], v76, 1); /*0x1004f35a5*/
            v70 = (const __m128i *)((char *)v70 - 1); /*0x1004f3540*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1004f3547*/
            _R13D &= _R13D - 1; /*0x1004f354a*/
          }
          while ( v70 ); /*0x1004f3550*/
        }
        v77 = (24LL * (_QWORD)v69 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1004f35b8*/
        v78 = (__int64)v69[1].i64 + v77 + 1; /*0x1004f35bf*/
        if ( v78 ) /*0x1004f35c3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v79[0] - v77, v78, 16); /*0x1004f35d7*/
      }
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72f82cad8096f66a(&v86); /*0x1004f35e3*/
      result = v86; /*0x1004f35e8*/
      if ( v86 ) /*0x1004f35f2*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, 96 * v86, 8); /*0x1004f3605*/
      return result; /*0x1004f3605*/
    }
    qmemcpy(v79, v82, sizeof(v79)); /*0x1004f2e17*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v80, v83); /*0x1004f2e1a*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004f2e29*/
    if ( !v15 ) /*0x1004f2e31*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1004f3626*/
    v16 = v15; /*0x1004f2e37*/
    qmemcpy(v15, "db_orphan_providers", 19); /*0x1004f2e52*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x1004f2e5d*/
    v17 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004f2e6c*/
    if ( !v17 ) /*0x1004f2e74*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004f3637*/
    v18 = v17; /*0x1004f2e7a*/
    *(_DWORD *)((char *)v17 + 3) = 1735289198; /*0x1004f2e7d*/
    *v17 = 1852989815; /*0x1004f2e84*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x1004f2e8a*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x1004f2e99*/
    if ( !v19 ) /*0x1004f2ea1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x1004f3648*/
    v20 = v19; /*0x1004f2ea7*/
    *(_QWORD *)(v19 + 24) = 0xBAE5AE8DE6B095E6LL; /*0x1004f2eb4*/
    *(_QWORD *)(v19 + 16) = 0x8BA8E7BFBAE7968FLL; /*0x1004f2ec3*/
    *(_QWORD *)(v19 + 8) = 0xE5BBAFE8B495E68CLL; /*0x1004f2ed2*/
    *(_QWORD *)v19 = 0xAEE595B3E6A097E6LL; /*0x1004f2ee1*/
    *(_BYTE *)(v19 + 32) = -109; /*0x1004f2ee5*/
    v97 = nullptr; /*0x1004f2eeb*/
    v98 = 1; /*0x1004f2ef3*/
    v99 = 0; /*0x1004f2efb*/
    v91 = 1610612768; /*0x1004f2f03*/
    v89 = &v97; /*0x1004f2f12*/
    v90 = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x1004f2f20*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1004f2f35*/
                            v79,
                            &v89) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004f33a3*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        &v94,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v21 = v92; /*0x1004f2f46*/
    *(_QWORD *)(v92 + 88) = v99; /*0x1004f2f4a*/
    v22 = v97; /*0x1004f2f4e*/
    *(_QWORD *)(v21 + 80) = v98; /*0x1004f2f56*/
    *(_QWORD *)(v21 + 72) = v22; /*0x1004f2f5a*/
    *(_QWORD *)v21 = 19; /*0x1004f2f5e*/
    *(_QWORD *)(v21 + 8) = v16; /*0x1004f2f65*/
    *(_QWORD *)(v21 + 16) = 19; /*0x1004f2f69*/
    *(_QWORD *)(v21 + 24) = 7; /*0x1004f2f71*/
    *(_QWORD *)(v21 + 32) = v18; /*0x1004f2f79*/
    *(_QWORD *)(v21 + 40) = 7; /*0x1004f2f7d*/
    *(_QWORD *)(v21 + 48) = 33; /*0x1004f2f85*/
    *(_QWORD *)(v21 + 56) = v20; /*0x1004f2f8d*/
    *(_QWORD *)(v21 + 64) = 33; /*0x1004f2f91*/
    *(_BYTE *)(v21 + 96) = 0; /*0x1004f2f99*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v82); /*0x1004f2fa4*/
  }
  else
  {
    if ( v79[0] ) /*0x1004f2db7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[1], 24 * (__int64)v79[0]->i64, 8); /*0x1004f2dcd*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004f2dff*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_523,
             19,
             &unk_1015FD585,
             45);
  }
}