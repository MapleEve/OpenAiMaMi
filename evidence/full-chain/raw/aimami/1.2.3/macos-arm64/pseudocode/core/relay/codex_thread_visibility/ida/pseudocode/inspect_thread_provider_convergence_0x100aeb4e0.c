// __ZN13codexmate_lib4core5relay23codex_thread_visibility35inspect_thread_provider_convergence @ 0x100aeb4e0 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::he6857c591f482337(
        void *a1,
        _QWORD *a2,
        void *a3,
        signed __int64 a4)
{
  __int64 v5; // r12
  void *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbx
  __int64 v10; // r14
  _QWORD *v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // r13
  __int64 *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 *v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rbx
  __int64 v44; // r15
  char v45; // al
  int v46; // ecx
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  _QWORD *v60; // r13
  __int64 v61; // rsi
  _QWORD v63[14]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v64[24]; // [rsp+70h] [rbp-390h] BYREF
  _BYTE v65[24]; // [rsp+88h] [rbp-378h] BYREF
  _QWORD v66[5]; // [rsp+A0h] [rbp-360h] BYREF
  _QWORD *v67; // [rsp+C8h] [rbp-338h]
  __int64 v68; // [rsp+D0h] [rbp-330h]
  __int64 v69; // [rsp+D8h] [rbp-328h]
  _QWORD v70[2]; // [rsp+E0h] [rbp-320h] BYREF
  _QWORD v71[12]; // [rsp+F0h] [rbp-310h] BYREF
  _QWORD v72[3]; // [rsp+150h] [rbp-2B0h] BYREF
  _QWORD v73[3]; // [rsp+168h] [rbp-298h] BYREF
  void *v74; // [rsp+180h] [rbp-280h]
  __int64 v75; // [rsp+188h] [rbp-278h]
  _QWORD v76[19]; // [rsp+190h] [rbp-270h] BYREF
  __int64 v77; // [rsp+228h] [rbp-1D8h] BYREF
  __int64 v78; // [rsp+230h] [rbp-1D0h]
  __int64 v79; // [rsp+238h] [rbp-1C8h]
  unsigned __int64 v80; // [rsp+240h] [rbp-1C0h] BYREF
  __int64 v81; // [rsp+248h] [rbp-1B8h]
  unsigned __int64 v82; // [rsp+250h] [rbp-1B0h]
  __int64 v83; // [rsp+258h] [rbp-1A8h] BYREF
  __int64 v84; // [rsp+260h] [rbp-1A0h]
  __int64 v85; // [rsp+268h] [rbp-198h]
  __int64 v86; // [rsp+270h] [rbp-190h] BYREF
  __int64 v87; // [rsp+278h] [rbp-188h]
  __int64 v88; // [rsp+280h] [rbp-180h]
  __int64 v89; // [rsp+288h] [rbp-178h] BYREF
  _QWORD *v90; // [rsp+290h] [rbp-170h]
  __int64 (__fastcall *v91)(_QWORD, _QWORD); // [rsp+298h] [rbp-168h]
  __int64 v92; // [rsp+2A0h] [rbp-160h]
  __int64 v93; // [rsp+2A8h] [rbp-158h]
  __int64 v94; // [rsp+2B0h] [rbp-150h]
  __int64 v95; // [rsp+2B8h] [rbp-148h]
  __int64 v96; // [rsp+2C0h] [rbp-140h]
  __int64 v97; // [rsp+2C8h] [rbp-138h]
  __int64 v98; // [rsp+2D0h] [rbp-130h]
  __int64 *v99; // [rsp+2D8h] [rbp-128h]
  __int64 v100; // [rsp+2E0h] [rbp-120h] BYREF
  __int64 v101; // [rsp+2E8h] [rbp-118h]
  __int64 v102; // [rsp+2F0h] [rbp-110h]
  __int64 v103; // [rsp+2F8h] [rbp-108h]
  _QWORD v104[14]; // [rsp+300h] [rbp-100h] BYREF
  __int64 *v105; // [rsp+370h] [rbp-90h] BYREF
  __int64 v106; // [rsp+378h] [rbp-88h]
  _QWORD *v107; // [rsp+380h] [rbp-80h]
  __int64 (__fastcall *v108)(_QWORD, _QWORD); // [rsp+388h] [rbp-78h] BYREF
  __int64 v109; // [rsp+390h] [rbp-70h]
  __int64 v110; // [rsp+398h] [rbp-68h]
  __int64 v111; // [rsp+3A0h] [rbp-60h]
  __int64 v112; // [rsp+3A8h] [rbp-58h]
  __int64 v113; // [rsp+3B0h] [rbp-50h]
  void *__src; // [rsp+3B8h] [rbp-48h]
  unsigned __int64 v115; // [rsp+3C0h] [rbp-40h]
  __int64 v116; // [rsp+3C8h] [rbp-38h]
  __int64 v117; // [rsp+3D0h] [rbp-30h]

  v70[0] = a3; /*0x100aeb4f7*/
  v70[1] = a4; /*0x100aeb4fe*/
  if ( a4 < 0 ) /*0x100aeb508*/
  {
    v5 = 0; /*0x100aeb50a*/
    goto LABEL_3; /*0x100aeb50a*/
  }
  v6 = a1; /*0x100aeb518*/
  __src = a3; /*0x100aeb51b*/
  if ( a4 ) /*0x100aeb522*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aeb524*/
    v5 = 1; /*0x100aeb529*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x100aeb537*/
    if ( !v7 ) /*0x100aeb53f*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, a4); /*0x100aeb50d*/
    v8 = v7; /*0x100aeb541*/
  }
  else
  {
    v8 = 1; /*0x100aeb546*/
  }
  memcpy((void *)v8, __src, a4); /*0x100aeb558*/
  v104[0] = a4; /*0x100aeb55d*/
  v104[1] = v8; /*0x100aeb564*/
  v104[2] = a4; /*0x100aeb56b*/
  v104[3] = 0; /*0x100aeb5a9*/
  v104[4] = 8; /*0x100aeb5b4*/
  v104[5] = 0; /*0x100aeb5bf*/
  v104[6] = 0; /*0x100aeb5ca*/
  v104[7] = 8; /*0x100aeb5d5*/
  memset(&v104[8], 0, 48); /*0x100aeb5e0*/
  v71[0] = __src; /*0x100aeb5eb*/
  v71[1] = a4; /*0x100aeb5f2*/
  if ( a4 != 6 /*0x100aeb631*/
    || *(_DWORD *)__src ^ 0x6E65706F | *((unsigned __int16 *)__src + 2) ^ 0x6961
    && *(_DWORD *)__src ^ 0x616D6961 | *((unsigned __int16 *)__src + 2) ^ 0x3169 )
  {
    v76[0] = v71; /*0x100aeb640*/
    v76[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aeb64e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v63[1], &unk_1017CAC73, v76); /*0x100aeb66a*/
    v63[0] = 10; /*0x100aeb66f*/
    qmemcpy(v76, v63, 0x60u); /*0x100aeb690*/
    v105 = nullptr; /*0x100aeb693*/
    v106 = 1; /*0x100aeb69e*/
    v107 = nullptr; /*0x100aeb6a9*/
    v71[2] = 1610612768; /*0x100aeb6b1*/
    v71[0] = &v105; /*0x100aeb6c3*/
    v71[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100aeb6d1*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100aeb6e2*/
                            v76,
                            v71) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100aec2b6*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        &v89,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v9 = v105; /*0x100aeb6ef*/
    v10 = v106; /*0x100aeb6f6*/
    v11 = v107; /*0x100aeb6fd*/
    v12 = v104[5]; /*0x100aeb701*/
    if ( v104[5] == v104[3] ) /*0x100aeb70f*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v104[3]); /*0x100aeb718*/
    v13 = v104[4]; /*0x100aeb71d*/
    v14 = 3 * v12; /*0x100aeb724*/
    *(_QWORD *)(v104[4] + 8 * v14) = v9; /*0x100aeb728*/
    *(_QWORD *)(v13 + 8 * v14 + 8) = v10; /*0x100aeb72c*/
    *(_QWORD *)(v13 + 8 * v14 + 16) = v11; /*0x100aeb731*/
    v104[5] = v12 + 1; /*0x100aeb739*/
    qmemcpy(a1, v104, 0x70u); /*0x100aeb74f*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v76); /*0x100aeb759*/
    return v6; /*0x100aeb75e*/
  }
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v76, a2); /*0x100aeb770*/
  v74 = a1; /*0x100aeb775*/
  v15 = (__int64 *)v76[1]; /*0x100aeb783*/
  v66[4] = v76[1]; /*0x100aeb79a*/
  v67 = (_QWORD *)v76[1]; /*0x100aeb7a1*/
  v75 = v76[0]; /*0x100aeb7a8*/
  v68 = v76[0]; /*0x100aeb7af*/
  v98 = v76[1] + 24LL * v76[2]; /*0x100aeb7b6*/
  v69 = v98; /*0x100aeb7bd*/
  v99 = (__int64 *)v76[1]; /*0x100aeb7c4*/
  if ( v76[2] ) /*0x100aeb7ce*/
  {
    v16 = v99; /*0x100aeb7de*/
    while ( 1 ) /*0x100aeb800*/
    {
      v15 = v16 + 3; /*0x100aeb800*/
      v67 = v16 + 3; /*0x100aeb804*/
      v17 = *v16; /*0x100aeb80b*/
      if ( *v16 == 0x8000000000000000LL ) /*0x100aeb811*/
        break; /*0x100aeb811*/
      v18 = v16[2]; /*0x100aeb81b*/
      v116 = v16[1]; /*0x100aeb822*/
      std::sys::fs::metadata::h32fa16d3052ea535(v76, v116, v18); /*0x100aeb829*/
      if ( LOBYTE(v76[0]) ) /*0x100aeb835*/
      {
        if ( (v76[1] & 3) == 1 ) /*0x100aeb846*/
        {
          v117 = v17; /*0x100aeb84c*/
          v19 = v76[1] - 1LL; /*0x100aeb850*/
          v20 = *(_QWORD *)(v76[1] - 1LL); /*0x100aeb854*/
          v21 = *(_QWORD *)(v76[1] + 7LL); /*0x100aeb858*/
          if ( *(_QWORD *)v21 ) /*0x100aeb85c*/
            (*(void (__fastcall **)(__int64))v21)(v20); /*0x100aeb867*/
          v22 = *(_QWORD *)(v21 + 8); /*0x100aeb869*/
          if ( v22 ) /*0x100aeb870*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x100aeb879*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x100aeb88b*/
          v17 = v117; /*0x100aeb890*/
        }
        goto LABEL_94; /*0x100aeb89b*/
      }
      codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h07bf0b0a45198e2f( /*0x100aeb8aa*/
        (__int64)v76,
        v116,
        v18);
      if ( LOBYTE(v76[13]) == 3 ) /*0x100aeb8b6*/
      {
        qmemcpy(v71, v76, sizeof(v71)); /*0x100aeb8ce*/
        v89 = v116; /*0x100aeb8d5*/
        v90 = (_QWORD *)v18; /*0x100aeb8dc*/
        v105 = &v89; /*0x100aeb8ea*/
        v106 = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aeb8f8*/
        v107 = v71; /*0x100aeb8ff*/
        v108 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100aeb90a*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v73, &unk_1017B9AD3, &v105); /*0x100aeb923*/
        v23 = v104[5]; /*0x100aeb928*/
        if ( v104[5] == v104[3] ) /*0x100aeb936*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v104[3]); /*0x100aeb93f*/
        v24 = v104[4]; /*0x100aeb944*/
        v25 = 3 * v23; /*0x100aeb94b*/
        *(_QWORD *)(v104[4] + 8 * v25 + 16) = v73[2]; /*0x100aeb956*/
        v26 = v73[0]; /*0x100aeb95b*/
        *(_QWORD *)(v24 + 8 * v25 + 8) = v73[1]; /*0x100aeb969*/
        *(_QWORD *)(v24 + 8 * v25) = v26; /*0x100aeb96e*/
        v104[5] = v23 + 1; /*0x100aeb975*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v71); /*0x100aeb983*/
        goto LABEL_94; /*0x100aeb988*/
      }
      qmemcpy(v63, v76, sizeof(v63)); /*0x100aeb9a2*/
      codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h29551f1dfa54e579( /*0x100aeb9af*/
        v71,
        v63);
      if ( LODWORD(v71[0]) != 11 ) /*0x100aeb9bb*/
      {
        qmemcpy(v76, v71, 0x60u); /*0x100aec0da*/
        v89 = v116; /*0x100aec0e1*/
        v90 = (_QWORD *)v18; /*0x100aec0e8*/
        v105 = &v89; /*0x100aec0f6*/
        v106 = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aec104*/
        v107 = v76; /*0x100aec10b*/
        v108 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100aec116*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v72, &unk_1017B9AD3, &v105); /*0x100aec12f*/
        v55 = v104[5]; /*0x100aec134*/
        if ( v104[5] == v104[3] ) /*0x100aec142*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v104[3]); /*0x100aec14b*/
        v56 = v104[4]; /*0x100aec150*/
        v57 = 3 * v55; /*0x100aec157*/
        *(_QWORD *)(v104[4] + 8 * v57 + 16) = v72[2]; /*0x100aec162*/
        v58 = v72[0]; /*0x100aec167*/
        *(_QWORD *)(v56 + 8 * v57 + 8) = v72[1]; /*0x100aec175*/
        *(_QWORD *)(v56 + 8 * v57) = v58; /*0x100aec17a*/
        v104[5] = v55 + 1; /*0x100aec181*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v76); /*0x100aec18b*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v63); /*0x100aec197*/
        goto LABEL_94; /*0x100aec19c*/
      }
      v117 = v17; /*0x100aeb9c1*/
      v100 = v71[2]; /*0x100aeb9e2*/
      v101 = v71[2]; /*0x100aeb9e9*/
      v102 = v71[1]; /*0x100aeb9f0*/
      v97 = v71[2] + 72LL * v71[3]; /*0x100aeb9f7*/
      v103 = v97; /*0x100aeb9fe*/
      if ( !v71[3] ) /*0x100aeba08*/
        goto LABEL_93; /*0x100aeba08*/
      v27 = v71[2] + 72LL; /*0x100aeba0e*/
      while ( 1 ) /*0x100aeba39*/
      {
        v29 = *(__int64 **)(v27 - 72); /*0x100aeba39*/
        v30 = *(_QWORD *)(v27 - 64); /*0x100aeba3d*/
        v96 = *(_QWORD *)(v27 - 8); /*0x100aeba45*/
        v95 = *(_QWORD *)(v27 - 16); /*0x100aeba50*/
        v94 = *(_QWORD *)(v27 - 24); /*0x100aeba5b*/
        v93 = *(_QWORD *)(v27 - 32); /*0x100aeba66*/
        v92 = *(_QWORD *)(v27 - 40); /*0x100aeba71*/
        v91 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v27 - 48); /*0x100aeba7c*/
        v90 = *(_QWORD **)(v27 - 56); /*0x100aeba87*/
        v89 = v30; /*0x100aeba8e*/
        if ( v29 == (__int64 *)0x8000000000000000LL ) /*0x100aeba98*/
          break; /*0x100aeba98*/
        v105 = v29; /*0x100aeba9e*/
        v113 = v96; /*0x100aebab3*/
        v112 = v95; /*0x100aebabe*/
        v111 = v94; /*0x100aebac9*/
        v110 = v93; /*0x100aebad4*/
        v109 = v92; /*0x100aebadf*/
        v108 = v91; /*0x100aebaea*/
        ++v104[9]; /*0x100aebafc*/
        v107 = v90; /*0x100aebb03*/
        v106 = v89; /*0x100aebb07*/
        if ( v94 == 0x8000000000000000LL ) /*0x100aebb0e*/
        {
          ++v104[12]; /*0x100aebb14*/
          v76[0] = &v105; /*0x100aebb22*/
          v76[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aebb30*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v65, &unk_1017CB6F4, v76); /*0x100aebb48*/
          v31 = (unsigned __int64 *)v65; /*0x100aebb4d*/
          v32 = v104[8]; /*0x100aebb54*/
          if ( v104[8] < 3u ) /*0x100aebb5f*/
            goto LABEL_37; /*0x100aebb5f*/
        }
        else
        {
          std::sys::fs::metadata::h32fa16d3052ea535(v76, v112, v113); /*0x100aebbcb*/
          if ( !LOBYTE(v76[0]) ) /*0x100aebbd7*/
          {
            codexmate_lib::core::relay::codex_thread_visibility::read_rollout_providers_for_convergence::h78b940472c5aade1( /*0x100aebcdf*/
              v71,
              v112,
              v113);
            if ( LODWORD(v71[0]) != 11 ) /*0x100aebceb*/
            {
              qmemcpy(v76, v71, 0x60u); /*0x100aebe0f*/
              ++v104[13]; /*0x100aebe12*/
              v66[0] = &v105; /*0x100aebe20*/
              v66[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aebe2e*/
              v66[2] = v76; /*0x100aebe35*/
              v66[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100aebe43*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v86, &unk_1017B9AD3, v66); /*0x100aebe5f*/
              v47 = v104[8]; /*0x100aebe64*/
              if ( v104[8] >= 3u ) /*0x100aebe6f*/
              {
                if ( v86 ) /*0x100aebedf*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v86, 1); /*0x100aebeed*/
              }
              else
              {
                if ( v104[8] == v104[6] ) /*0x100aebe78*/
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v104[6]); /*0x100aebe8f*/
                v48 = v104[7]; /*0x100aebe94*/
                v49 = 3 * v47; /*0x100aebe9b*/
                *(_QWORD *)(v104[7] + 8 * v49 + 16) = v88; /*0x100aebea6*/
                v50 = v86; /*0x100aebeab*/
                *(_QWORD *)(v48 + 8 * v49 + 8) = v87; /*0x100aebeb9*/
                *(_QWORD *)(v48 + 8 * v49) = v50; /*0x100aebebe*/
                v104[8] = v47 + 1; /*0x100aebec5*/
              }
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v76); /*0x100aebef5*/
              goto LABEL_81; /*0x100aebefa*/
            }
            v82 = v71[6]; /*0x100aebcfc*/
            v81 = v71[5]; /*0x100aebd07*/
            v80 = v71[4]; /*0x100aebd12*/
            v42 = v71[3]; /*0x100aebd19*/
            v79 = v71[3]; /*0x100aebd1d*/
            v43 = v71[2]; /*0x100aebd27*/
            v78 = v71[2]; /*0x100aebd2b*/
            v77 = v71[1]; /*0x100aebd32*/
            if ( !codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33( /*0x100aebd3f*/
                    v71[2],
                    v71[3]) )
              goto LABEL_76; /*0x100aebd3f*/
            v44 = v81; /*0x100aebd4c*/
            v115 = v82; /*0x100aebd5d*/
            if ( !codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33( /*0x100aebd61*/
                    v81,
                    v82) )
              goto LABEL_76; /*0x100aebd68*/
            if ( v110 == 6 /*0x100aebd8e*/
              && !(*(_DWORD *)__src ^ *(_DWORD *)v109 | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v109 + 4))) )
            {
              v45 = 1; /*0x100aebeff*/
              if ( v42 == 6 ) /*0x100aebf05*/
                goto LABEL_56; /*0x100aebf05*/
            }
            else
            {
              ++v104[10]; /*0x100aebd94*/
              v45 = 0; /*0x100aebd9b*/
              if ( v42 == 6 ) /*0x100aebda1*/
              {
LABEL_56:
                v46 = 0; /*0x100aebda7*/
                if ( v115 == 6 ) /*0x100aebdc6*/
                {
                  LOBYTE(v46) = (*(_DWORD *)__src ^ *(_DWORD *)v43 /*0x100aebdcc*/
                               | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v43 + 4))) != 0;
                  if ( !v46 /*0x100aebdeb*/
                    && !(*(_DWORD *)__src ^ *(_DWORD *)v44
                       | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v44 + 4))) )
                  {
                    if ( v45 ) /*0x100aebdf5*/
                    {
LABEL_76:
                      if ( v77 ) /*0x100aec031*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x100aec03f*/
                      v40 = v80; /*0x100aec044*/
                      if ( !v80 ) /*0x100aec055*/
                        goto LABEL_81; /*0x100aec055*/
                      v41 = v81; /*0x100aec057*/
                      goto LABEL_80; /*0x100aec057*/
                    }
LABEL_70:
                    v76[0] = &v105; /*0x100aebf12*/
                    v76[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aebf27*/
                    v76[2] = &v108; /*0x100aebf32*/
                    v76[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aebf39*/
                    v76[4] = &v77; /*0x100aebf47*/
                    v76[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aebf4e*/
                    v76[6] = &v80; /*0x100aebf5c*/
                    v76[7] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aebf63*/
                    v76[8] = v70; /*0x100aebf71*/
                    v76[9] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aebf7f*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v83, &unk_1017CB726, v76); /*0x100aebf9b*/
                    v51 = v104[8]; /*0x100aebfa0*/
                    if ( v104[8] >= 3u ) /*0x100aebfab*/
                    {
                      if ( v83 ) /*0x100aec014*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v83, 1); /*0x100aec022*/
                    }
                    else
                    {
                      if ( v104[8] == v104[6] ) /*0x100aebfb4*/
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v104[6]); /*0x100aebfcb*/
                      v52 = v104[7]; /*0x100aebfd0*/
                      v53 = 3 * v51; /*0x100aebfd7*/
                      *(_QWORD *)(v104[7] + 8 * v53 + 16) = v85; /*0x100aebfe2*/
                      v54 = v83; /*0x100aebfe7*/
                      *(_QWORD *)(v52 + 8 * v53 + 8) = v84; /*0x100aebff5*/
                      *(_QWORD *)(v52 + 8 * v53) = v54; /*0x100aebffa*/
                      v104[8] = v51 + 1; /*0x100aec001*/
                    }
                    goto LABEL_76; /*0x100aec008*/
                  }
                }
              }
            }
            ++v104[11]; /*0x100aebf0b*/
            goto LABEL_70; /*0x100aebf0b*/
          }
          if ( (v76[1] & 3) == 1 ) /*0x100aebbec*/
          {
            v36 = v76[1] - 1LL; /*0x100aebbee*/
            v37 = *(_QWORD *)(v76[1] - 1LL); /*0x100aebbf2*/
            v38 = *(_QWORD *)(v76[1] + 7LL); /*0x100aebbf6*/
            if ( *(_QWORD *)v38 ) /*0x100aebbfa*/
              (*(void (__fastcall **)(__int64))v38)(v37); /*0x100aebc05*/
            v39 = *(_QWORD *)(v38 + 8); /*0x100aebc07*/
            if ( v39 ) /*0x100aebc0e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16)); /*0x100aebc17*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8); /*0x100aebc29*/
          }
          ++v104[12]; /*0x100aebc35*/
          v71[0] = v112; /*0x100aebc44*/
          v71[1] = v113; /*0x100aebc4b*/
          v76[0] = &v105; /*0x100aebc59*/
          v76[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aebc67*/
          v76[2] = v71; /*0x100aebc75*/
          v76[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aebc83*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_1017CB70D, v76); /*0x100aebc9b*/
          v31 = (unsigned __int64 *)v64; /*0x100aebca0*/
          v32 = v104[8]; /*0x100aebca7*/
          if ( v104[8] < 3u ) /*0x100aebcb2*/
          {
LABEL_37:
            if ( v32 == v104[6] ) /*0x100aebb6c*/
            {
              v115 = *v31; /*0x100aebb71*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v104[6]); /*0x100aebb80*/
            }
            v33 = v104[7]; /*0x100aebb85*/
            v34 = 3 * v32; /*0x100aebb8c*/
            *(_QWORD *)(v104[7] + 8 * v34 + 16) = v31[2]; /*0x100aebb94*/
            v35 = *v31; /*0x100aebb99*/
            *(_QWORD *)(v33 + 8 * v34 + 8) = v31[1]; /*0x100aebba0*/
            *(_QWORD *)(v33 + 8 * v34) = v35; /*0x100aebba5*/
            v104[8] = v32 + 1; /*0x100aebbac*/
            goto LABEL_81; /*0x100aebbba*/
          }
        }
        v40 = *v31; /*0x100aebcb8*/
        if ( *v31 ) /*0x100aebcb8*/
        {
          v41 = v31[1]; /*0x100aebcc4*/
LABEL_80:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x100aec05e*/
        }
LABEL_81:
        if ( v105 ) /*0x100aec072*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v105, 1); /*0x100aec080*/
        if ( v111 != 0x8000000000000000LL && v111 ) /*0x100aec09b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v111, 1); /*0x100aec0a6*/
        if ( v108 ) /*0x100aec0b2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1); /*0x100aec0c1*/
        v28 = v27 - 72; /*0x100aeba20*/
        v27 += 72; /*0x100aeba24*/
        if ( v28 + 72 == v97 ) /*0x100aeba33*/
        {
          v27 = v97; /*0x100aec19e*/
          break; /*0x100aec19e*/
        }
      }
      v101 = v27; /*0x100aec1a5*/
LABEL_93:
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8621f74bc492ec42(&v100); /*0x100aec1ac*/
      v17 = v117; /*0x100aec1bf*/
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v63); /*0x100aec1c3*/
LABEL_94:
      if ( v17 ) /*0x100aec1d3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v17, 1); /*0x100aec1e5*/
      v16 = v15; /*0x100aeb7f0*/
      if ( v15 == (__int64 *)v98 ) /*0x100aeb7fa*/
        goto LABEL_101; /*0x100aeb7fa*/
    }
  }
  if ( (__int64 *)v98 != v15 ) /*0x100aec20c*/
  {
    v59 = (v98 - (__int64)v15) / 0x18uLL; /*0x100aec211*/
    v60 = v15 + 1; /*0x100aec215*/
    do /*0x100aec227*/
    {
      v61 = *(v60 - 1); /*0x100aec229*/
      if ( v61 ) /*0x100aec230*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v61, 1); /*0x100aec23b*/
      v60 += 3; /*0x100aec220*/
      --v59; /*0x100aec224*/
    }
    while ( v59 ); /*0x100aec227*/
  }
LABEL_101:
  if ( v75 ) /*0x100aec24c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, 24 * v75, 8); /*0x100aec262*/
  v6 = v74; /*0x100aec273*/
  qmemcpy(v74, v104, 0x70u); /*0x100aec27d*/
  return v6; /*0x100aec283*/
}