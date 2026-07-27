// __ZN13codexmate_lib4core5relay7manager12RelayManager24set_codex_router_enabled @ 0x1002780b0 | 基线 same-set
char *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::h76cd98cfb2fca06e(
        char *__dst,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // r15
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  char v13; // al
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 v24; // rbx
  char v25; // r15
  unsigned int v26; // edx
  unsigned __int8 v27; // r14
  void *v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  char *v32; // rdi
  void **v33; // rsi
  _QWORD *v34; // r14
  unsigned __int64 v35; // r15
  char *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r15
  unsigned __int8 v40; // r14
  char v41; // r14
  _BYTE *v42; // rdi
  void **v43; // rsi
  char v44; // r15
  __int64 v45; // rbx
  void *v46; // rax
  __int64 v47; // r15
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // r14
  __int64 v55; // r9
  __int64 v56; // r10
  __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  bool v59; // al
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // bl
  __int64 v64; // r14
  bool v65; // zf
  _QWORD *v66; // rax
  void *v67; // rax
  void *v68; // rbx
  char v69; // al
  char v70; // r14
  char v71; // cl
  _BYTE *v72; // rax
  unsigned __int8 v73; // bl
  bool v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // edx
  unsigned __int8 v79; // bl
  unsigned __int8 v80; // bl
  _QWORD *v81; // r14
  unsigned __int8 v82; // r14
  __int64 v83; // r14
  char v84; // r13
  __int64 v85; // r13
  __int64 v86; // r15
  __int64 v87; // r14
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rax
  _BYTE v91[104]; // [rsp+20h] [rbp-B70h] BYREF
  _BYTE __dsta[640]; // [rsp+88h] [rbp-B08h] BYREF
  _DWORD v93[24]; // [rsp+308h] [rbp-888h] BYREF
  void *v94; // [rsp+368h] [rbp-828h] BYREF
  __int64 v95; // [rsp+370h] [rbp-820h]
  __int64 v96; // [rsp+378h] [rbp-818h]
  char v97; // [rsp+48Ch] [rbp-704h]
  char v98; // [rsp+48Dh] [rbp-703h]
  _BYTE v99[24]; // [rsp+490h] [rbp-700h] BYREF
  _BYTE v100[24]; // [rsp+4A8h] [rbp-6E8h] BYREF
  _BYTE v101[24]; // [rsp+4C0h] [rbp-6D0h] BYREF
  _BYTE v102[24]; // [rsp+4D8h] [rbp-6B8h] BYREF
  _BYTE v103[24]; // [rsp+4F0h] [rbp-6A0h] BYREF
  __int64 v104[12]; // [rsp+508h] [rbp-688h] BYREF
  _BYTE v105[744]; // [rsp+568h] [rbp-628h] BYREF
  _QWORD v106[3]; // [rsp+850h] [rbp-340h] BYREF
  _QWORD v107[3]; // [rsp+868h] [rbp-328h] BYREF
  _QWORD v108[37]; // [rsp+880h] [rbp-310h] BYREF
  __int64 v109; // [rsp+9A8h] [rbp-1E8h] BYREF
  __int64 v110; // [rsp+9B0h] [rbp-1E0h]
  __int64 v111; // [rsp+9B8h] [rbp-1D8h]
  __int64 v112[12]; // [rsp+9C0h] [rbp-1D0h] BYREF
  _QWORD v113[12]; // [rsp+A20h] [rbp-170h] BYREF
  _QWORD v114[3]; // [rsp+A80h] [rbp-110h] BYREF
  _QWORD v115[2]; // [rsp+A98h] [rbp-F8h] BYREF
  __int64 v116; // [rsp+AA8h] [rbp-E8h]
  __int64 v117; // [rsp+AB0h] [rbp-E0h]
  __int64 v118; // [rsp+AB8h] [rbp-D8h]
  __int64 v119; // [rsp+AC0h] [rbp-D0h]
  char v120; // [rsp+AC8h] [rbp-C8h]
  __int64 v121; // [rsp+AD0h] [rbp-C0h] BYREF
  __int64 v122; // [rsp+AD8h] [rbp-B8h]
  char **v123; // [rsp+AE0h] [rbp-B0h]
  _QWORD *v124; // [rsp+AE8h] [rbp-A8h] BYREF
  __int64 (__fastcall *v125)(); // [rsp+AF0h] [rbp-A0h]
  _BYTE *v126; // [rsp+AF8h] [rbp-98h]
  __int64 (__fastcall *v127)(_QWORD, _QWORD); // [rsp+B00h] [rbp-90h]
  __int64 v128; // [rsp+B08h] [rbp-88h]
  _QWORD *v129; // [rsp+B10h] [rbp-80h]
  __int64 v130; // [rsp+B18h] [rbp-78h]
  __int64 v131; // [rsp+B20h] [rbp-70h]
  _QWORD *v132; // [rsp+B28h] [rbp-68h] BYREF
  __int64 v133; // [rsp+B30h] [rbp-60h]
  __int64 v134; // [rsp+B38h] [rbp-58h]
  __int64 v135; // [rsp+B40h] [rbp-50h]
  unsigned __int8 v136; // [rsp+B4Ch] [rbp-44h] BYREF
  char v137; // [rsp+B4Dh] [rbp-43h] BYREF
  char v138; // [rsp+B4Eh] [rbp-42h] BYREF
  char v139; // [rsp+B4Fh] [rbp-41h] BYREF
  int v140; // [rsp+B50h] [rbp-40h]
  unsigned int v141; // [rsp+B54h] [rbp-3Ch]
  unsigned __int64 v142; // [rsp+B58h] [rbp-38h]
  unsigned __int8 v143; // [rsp+B64h] [rbp-2Ch]
  unsigned __int8 v144; // [rsp+B65h] [rbp-2Bh] BYREF
  char v145; // [rsp+B66h] [rbp-2Ah] BYREF
  unsigned __int8 v146; // [rsp+B67h] [rbp-29h] BYREF

  v145 = a3; /*0x1002780d4*/
  v144 = a4; /*0x1002780d7*/
  v121 = a5; /*0x1002780da*/
  v122 = a6; /*0x1002780e1*/
  v8 = *(_QWORD *)(a2 + 16); /*0x1002780e8*/
  if ( !__OFSUB__(0, *(_QWORD *)(v8 + 16)) ) /*0x1002780f2*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v105[8], v8 + 16); /*0x100278224*/
    *(_QWORD *)v105 = 9; /*0x100278229*/
    qmemcpy(__dst + 8, v105, 0x60u); /*0x100278245*/
LABEL_11:
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100278248*/
    return __dst; /*0x100278248*/
  }
  v9 = *(_QWORD *)(a2 + 32); /*0x1002780f8*/
  v10 = (_QWORD *)(v9 + 16); /*0x1002780fc*/
  v11 = *(_QWORD *)(v9 + 16); /*0x100278100*/
  if ( !v11 ) /*0x100278107*/
    v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v9 + 16); /*0x100278269*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11); /*0x10027810d*/
  v128 = 0x7FFFFFFFFFFFFFFFLL; /*0x100278120*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10027812a*/
  {
    v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v8, v12, 0x7FFFFFFFFFFFFFFFLL); /*0x100278271*/
    LOBYTE(v19) = v19 ^ 1; /*0x100278276*/
    v140 = v19; /*0x100278278*/
    LOBYTE(v19) = *(_BYTE *)(v9 + 24); /*0x10027827b*/
    v142 = v9; /*0x100278282*/
    if ( (_BYTE)v19 ) /*0x100278286*/
      goto LABEL_6; /*0x100278286*/
  }
  else
  {
    v140 = 0; /*0x100278130*/
    v13 = *(_BYTE *)(v9 + 24); /*0x100278137*/
    v142 = v9; /*0x10027813e*/
    if ( v13 ) /*0x100278142*/
    {
LABEL_6:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v8); /*0x100278148*/
      v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x10027815b*/
      if ( !v14 ) /*0x100278163*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x1002795d9*/
      v17 = (unsigned __int64)v14; /*0x100278169*/
      qmemcpy(v14, "Codex router transition lock is poisoned", 40); /*0x1002781ae*/
      if ( !(_BYTE)v140 /*0x10027958f*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v128) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1, v15, v16) )
      {
        *(_BYTE *)(v142 + 24) = 1; /*0x1002795a0*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10); /*0x1002781d0*/
      *((_QWORD *)__dst + 1) = 10; /*0x1002781dc*/
      *((_QWORD *)__dst + 2) = 40; /*0x1002781e5*/
      __dst[24] = v17; /*0x1002781ee*/
      __dst[31] = HIBYTE(v17); /*0x1002781fa*/
      *(_WORD *)(__dst + 29) = HIDWORD(v17) >> 8; /*0x100278203*/
      *(_DWORD *)(__dst + 25) = v17 >> 8; /*0x100278209*/
      *((_QWORD *)__dst + 4) = 40; /*0x10027820e*/
      goto LABEL_11; /*0x100278217*/
    }
  }
  v129 = (_QWORD *)(v9 + 16); /*0x1002782a3*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x1002782a7*/
    v105,
    a2 + 40,
    &unk_1015DE454,
    26);
  v23 = *(_QWORD *)v105; /*0x1002782ac*/
  v24 = *(_QWORD *)&v105[8]; /*0x1002782b3*/
  v25 = v105[16]; /*0x1002782ba*/
  if ( *(_QWORD *)v105 != 11 ) /*0x1002782c6*/
  {
    v33 = (void **)&v105[17]; /*0x100278470*/
    v36 = __dst + 25; /*0x100278477*/
    memcpy(__dst + 25, &v105[17], 0x4Fu); /*0x100278481*/
    *((_QWORD *)__dst + 1) = v23; /*0x100278486*/
    *((_QWORD *)__dst + 2) = v24; /*0x10027848b*/
    __dst[24] = v25; /*0x100278490*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10027849f*/
    v34 = v129; /*0x1002784a3*/
    v35 = v142; /*0x1002784a7*/
    goto LABEL_95; /*0x1002784ab*/
  }
  v123 = *(char ***)&v105[8]; /*0x1002782cc*/
  v146 = v145 ^ 1; /*0x1002782d9*/
  v143 = v105[16]; /*0x1002782dc*/
  v131 = std::time::Instant::now::hda76af2c3a449055(v105, a2 + 40, v20, v21, v22); /*0x1002782e5*/
  v141 = v26; /*0x1002782e9*/
  v27 = v146; /*0x1002782ec*/
  *(_QWORD *)v105 = &v145; /*0x1002782f5*/
  *(_QWORD *)&v105[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100278303*/
  *(_QWORD *)&v105[16] = &v144; /*0x10027830e*/
  *(_QWORD *)&v105[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100278315*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v109, &unk_1017BA2E9, v105); /*0x100278331*/
  v28 = &anon_39a6e93098609d65551b0fc4eadbbbd9_5; /*0x10027833d*/
  if ( v27 ) /*0x100278347*/
    v28 = &anon_39a6e93098609d65551b0fc4eadbbbd9_6; /*0x100278347*/
  v94 = v28; /*0x100278353*/
  v95 = v27 | 8LL; /*0x10027835a*/
  v29 = v110; /*0x100278361*/
  v108[0] = v110; /*0x10027836f*/
  v108[1] = v111; /*0x100278376*/
  *(_QWORD *)v105 = &v94; /*0x100278384*/
  *(_QWORD *)&v105[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100278392*/
  *(_QWORD *)&v105[16] = v108; /*0x1002783a0*/
  *(_QWORD *)&v105[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1002783a7*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v91, &anon_39a6e93098609d65551b0fc4eadbbbd9_664, v105); /*0x1002783c3*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x1002783e7*/
    &anon_39a6e93098609d65551b0fc4eadbbbd9_665,
    13,
    &unk_1015DE46E,
    5,
    v91);
  if ( v109 ) /*0x1002783f6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v109, 1); /*0x100278400*/
  codexmate_lib::core::relay::manager::RelayManager::transition_paths::h8ef4521bfd1dad53(v105); /*0x100278410*/
  qmemcpy(v108, &v105[8], 0x60u); /*0x10027842f*/
  if ( *(_QWORD *)v105 == 0x8000000000000000LL ) /*0x10027843f*/
  {
    qmemcpy(__dst + 8, v108, 0x60u); /*0x100278452*/
    v33 = (void **)&v108[12]; /*0x100278452*/
    v32 = __dst + 104; /*0x100278452*/
    v31 = 0; /*0x100278452*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100278455*/
    v34 = v129; /*0x100278459*/
    v35 = v142; /*0x10027845d*/
    if ( (v143 & 1) != 0 ) /*0x100278465*/
      goto LABEL_94; /*0x100278465*/
LABEL_93:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v128) != 0 /*0x1002795b9*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32, v33, v30, v31) )
    {
      *((_BYTE *)v123 + 8) = 1; /*0x1002795c9*/
    }
    goto LABEL_94; /*0x1002795cd*/
  }
  memcpy(__dsta, &v105[104], sizeof(__dsta)); /*0x1002784c3*/
  qmemcpy(&v91[8], v108, 0x60u); /*0x1002784db*/
  *(_QWORD *)v91 = *(_QWORD *)v105; /*0x1002784de*/
  v34 = v129; /*0x1002784ef*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(&v94, a2); /*0x1002784f3*/
  if ( v97 != v145 )
  {
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h83c13dceed25a0ea( /*0x10027861b*/
      v108,
      v95,
      v95 + 232 * v96);
    v35 = v142; /*0x100278620*/
    v42 = v105; /*0x100278624*/
    v43 = &v94; /*0x10027862b*/
    codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(v105, &v94); /*0x100278632*/
    v116 = v108[2]; /*0x10027863e*/
    v115[1] = v108[1]; /*0x100278653*/
    v115[0] = v108[0]; /*0x10027865a*/
    v117 = *(_QWORD *)v105; /*0x100278676*/
    v118 = *(_QWORD *)&v105[8]; /*0x10027867d*/
    v119 = *(_QWORD *)&v105[16]; /*0x10027868b*/
    v120 = v98; /*0x100278692*/
    LOBYTE(v135) = v98; /*0x100278698*/
    v139 = v98; /*0x10027869b*/
    if ( v145 ) /*0x1002786a2*/
    {
      v42 = v93; /*0x1002786a8*/
      v43 = (void **)v115; /*0x1002786af*/
      codexmate_lib::core::relay::router_reconciler::RouterOnPlan::ensure_ready::h88df491b94405864(v93, v115); /*0x1002786b6*/
      if ( v93[0] != 11 ) /*0x1002786c2*/
      {
        codexmate_lib::core::relay::manager::record_router_timing::h43d4824883113823( /*0x100278bce*/
          v146,
          v131,
          v141,
          "result=error stage=preflight",
          28);
        qmemcpy(__dst + 8, v93, 0x60u); /*0x100278be4*/
        v33 = &v94; /*0x100278be4*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100278bf1*/
        goto LABEL_91; /*0x100278bf5*/
      }
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1002786d6*/
      {
        v112[0] = v116; /*0x1002786ea*/
        v113[0] = v119; /*0x1002786f1*/
        LOBYTE(v124) = v120; /*0x1002786ff*/
        *(_QWORD *)v105 = v112; /*0x10027870c*/
        *(_QWORD *)&v105[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10027871a*/
        *(_QWORD *)&v105[16] = v113; /*0x100278728*/
        *(_QWORD *)&v105[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10027872f*/
        *(_QWORD *)&v105[32] = &v124; /*0x10027873d*/
        *(_QWORD *)&v105[40] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x10027874b*/
        v108[0] = "codexmate_lib::core::relay::manager"; /*0x100278759*/
        v108[1] = 35; /*0x100278760*/
        v108[2] = "codexmate_lib::core::relay::manager"; /*0x10027876b*/
        v108[3] = 35; /*0x100278772*/
        v108[4] = &off_10195DC18; /*0x100278784*/
        v42 = &unk_1017BA300; /*0x10027878b*/
        v43 = (void **)v105; /*0x100278792*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017BA300, v105, 3, v108); /*0x1002787a5*/
      }
    }
    v44 = 2 * v145 + 3; /*0x1002787b2*/
    v138 = v44; /*0x1002787b6*/
    v114[0] = &v137; /*0x1002787be*/
    v114[1] = &v121; /*0x1002787cc*/
    v114[2] = &v138; /*0x1002787d7*/
    v137 = 1; /*0x1002787de*/
    v45 = v121; /*0x1002787e2*/
    if ( v121 ) /*0x1002787ec*/
    {
      v130 = v122; /*0x1002787f5*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v43); /*0x1002787f9*/
      v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x100278808*/
      if ( !v46 ) /*0x100278810*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1002795ea*/
      qmemcpy(v46, "stopping_codex", 14); /*0x10027882e*/
      *(_QWORD *)v105 = 14; /*0x100278831*/
      *(_QWORD *)&v105[8] = v46; /*0x10027883c*/
      *(_QWORD *)&v105[16] = 14; /*0x100278843*/
      v105[24] = 1; /*0x10027884e*/
      v105[25] = v44; /*0x100278855*/
      (*(void (__fastcall **)(__int64, _BYTE *))(v130 + 40))(v45, v105); /*0x10027886a*/
    }
    v136 = v146; /*0x100278871*/
    *(_QWORD *)v105 = v114; /*0x10027887b*/
    *(_QWORD *)&v105[8] = &v145; /*0x100278886*/
    *(_QWORD *)&v105[16] = a2; /*0x10027888d*/
    *(_QWORD *)&v105[24] = v91; /*0x10027889b*/
    *(_QWORD *)&v105[32] = v115; /*0x1002788a9*/
    *(_QWORD *)&v105[40] = &v94; /*0x1002788b7*/
    *(_QWORD *)&v105[48] = &v146; /*0x1002788c2*/
    v108[0] = a2; /*0x1002788c9*/
    v108[1] = v91; /*0x1002788d0*/
    v108[2] = &v136; /*0x1002788db*/
    codexmate_lib::core::relay::router_transition::run::h0a616f87cf74673c( /*0x10027891d*/
      (unsigned int)v112,
      (unsigned int)v91,
      v146,
      0,
      (unsigned int)&unk_1015DE4A2,
      13,
      (__int64)v105,
      (__int64)v108,
      a2,
      (__int64)&v139);
    v35 = v142; /*0x100278922*/
    if ( LODWORD(v112[0]) == 11 )
    {
      v47 = v112[1]; /*0x100278933*/
      v48 = v112[2]; /*0x10027893a*/
      v49 = v112[3]; /*0x100278941*/
      v50 = v112[4]; /*0x100278948*/
      v51 = v112[5]; /*0x10027894f*/
      v52 = v112[6]; /*0x100278956*/
      v53 = v112[8]; /*0x100278964*/
      v54 = v112[9]; /*0x10027896b*/
      if ( v112[1] == 2 ) /*0x100278976*/
      {
        v55 = 8; /*0x10027897c*/
        v56 = 0; /*0x100278982*/
        v47 = v112[2]; /*0x100278985*/
        v57 = 0; /*0x100278988*/
        v48 = v112[3]; /*0x10027898a*/
        v49 = v112[4]; /*0x10027898d*/
        v50 = v112[5]; /*0x100278990*/
        v51 = v112[6]; /*0x100278993*/
        v52 = v112[7]; /*0x100278996*/
      }
      else
      {
        v55 = v112[10]; /*0x100278c83*/
        v57 = v112[11]; /*0x100278c8a*/
        v56 = v112[9]; /*0x100278c91*/
        v54 = v112[8]; /*0x100278c94*/
        v53 = v112[7]; /*0x100278c97*/
      }
      v113[0] = v47; /*0x100278c9a*/
      v113[1] = v48; /*0x100278ca1*/
      v113[2] = v49; /*0x100278ca8*/
      v113[3] = v50; /*0x100278caf*/
      v113[4] = v51; /*0x100278cb6*/
      v113[5] = v52; /*0x100278cbd*/
      v113[6] = v53; /*0x100278cc4*/
      v113[7] = v54; /*0x100278ccb*/
      v124 = (_QWORD *)v56; /*0x100278cd2*/
      v125 = (__int64 (__fastcall *)())v55; /*0x100278cd9*/
      v126 = (_BYTE *)v57; /*0x100278ce0*/
      v128 = v57; /*0x100278cef*/
      if ( v145 == 1 ) /*0x100278cf6*/
      {
        v63 = 0; /*0x100278cfc*/
      }
      else
      {
        v63 = v57 != 0; /*0x100278e36*/
        if ( (v144 & v63) != 0 ) /*0x100278e3b*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v50); /*0x100278e3d*/
          v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(156, 1); /*0x100278e4c*/
          if ( !v67 ) /*0x100278e54*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 156); /*0x1002795fb*/
          v68 = v67; /*0x100278e5a*/
          memcpy(v67, &unk_1015DE4AF, 0x9Cu); /*0x100278e6c*/
          *(_QWORD *)v105 = 156; /*0x100278e71*/
          *(_QWORD *)&v105[8] = v68; /*0x100278e7c*/
          *(_QWORD *)&v105[16] = 156; /*0x100278e83*/
          alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v124, v105); /*0x100278e9c*/
          v69 = v54; /*0x100278ea1*/
          v70 = 0; /*0x100278ea5*/
          if ( (v47 & 1) == 0 ) /*0x100278eac*/
            v70 = v69; /*0x100278eac*/
          v63 = 1; /*0x100278eb0*/
          goto LABEL_64; /*0x100278eb2*/
        }
      }
      v71 = v54; /*0x100278eb4*/
      v70 = 0; /*0x100278eb8*/
      if ( (v47 & 1) == 0 ) /*0x100278ebf*/
        v70 = v71; /*0x100278ebf*/
      if ( !(v63 | v144 ^ 1) )
      {
        codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h1e429228c8b12b44( /*0x100278f87*/
          v114,
          &unk_1015DE54B,
          15);
        v135 = std::time::Instant::now::hda76af2c3a449055(v114, &unk_1015DE54B, v75, v76, v77); /*0x100278f91*/
        LODWORD(v130) = v78; /*0x100278f95*/
        codexmate_lib::core::relay::manager::launch_codex_app_warning::h2256dcfb732f26c0(v105); /*0x100278f9f*/
        v79 = v146; /*0x100278fa4*/
        v142 = *(_QWORD *)v105; /*0x100278fb9*/
        LOBYTE(v132) = *(_QWORD *)v105 != 0x8000000000000000LL; /*0x100278fc0*/
        v74 = *(_QWORD *)v105 != 0x8000000000000000LL; /*0x100278fc4*/
        v108[0] = &v132; /*0x100278fcc*/
        v108[1] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100278fda*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(
          v101,
          "\x06error=\xC0\x1Cdebug bundle worker failed: \xC0\tcategory=\xC0src/commands/debug_report.rs",
          v108);
        codexmate_lib::core::relay::manager::record_router_timing::h4bb28af80ee86731( /*0x100279019*/
          v79,
          &unk_1015DE55A,
          12,
          v135,
          (unsigned int)v130,
          v101);
        v135 = *(_QWORD *)&v105[8]; /*0x100279025*/
        v130 = *(_QWORD *)&v105[16]; /*0x100279030*/
LABEL_68:
        v80 = v146; /*0x100279034*/
        LOBYTE(v132) = v74; /*0x100279038*/
        v108[0] = v128; /*0x100279043*/
        *(_QWORD *)v105 = &v132; /*0x10027904e*/
        *(_QWORD *)&v105[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x10027905c*/
        *(_QWORD *)&v105[16] = v108; /*0x10027906a*/
        *(_QWORD *)&v105[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100279078*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v99, &unk_1017BA356, v105); /*0x100279094*/
        codexmate_lib::core::relay::manager::record_router_timing::h4bb28af80ee86731( /*0x1002790b7*/
          v80,
          "totalresult=error stage=preflight",
          5,
          v131,
          v141,
          v99);
        codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h51c681f0bedd12e0((__int64)v108, a2); /*0x1002790c6*/
        *(_QWORD *)&v105[312] = v126; /*0x1002790d2*/
        *(_QWORD *)&v105[304] = v125; /*0x1002790e7*/
        *(_QWORD *)&v105[296] = v124; /*0x1002790ee*/
        memcpy(v105, v108, 0x128u); /*0x10027910b*/
        memcpy(__dst, v105, 0x140u); /*0x10027911b*/
        *((_QWORD *)__dst + 40) = v142; /*0x100279124*/
        *((_QWORD *)__dst + 41) = v135; /*0x100279130*/
        *((_QWORD *)__dst + 42) = v130; /*0x10027913c*/
        __dst[344] = v70; /*0x100279144*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::hcd4d4c7f3faacb0c(v113); /*0x100279153*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnPlan$GT$::hfa03d8b1bce7796f(v115); /*0x10027915f*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v94); /*0x10027916b*/
        core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v91); /*0x100279177*/
        v81 = v129; /*0x100279187*/
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x10027918b*/
          v123,
          v143);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100279197*/
          v81,
          (unsigned __int8)v140);
        return __dst; /*0x10027919c*/
      }
LABEL_64:
      codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h1e429228c8b12b44( /*0x100278ecd*/
        v114,
        "donehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
        4);
      v72 = v126; /*0x100278ee8*/
      if ( (v144 & v63) == 1 ) /*0x100278ef2*/
      {
        v73 = v146; /*0x100278ef4*/
        v108[0] = v126; /*0x100278ef8*/
        *(_QWORD *)v105 = v108; /*0x100278f06*/
        *(_QWORD *)&v105[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100278f14*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v100, &unk_1017BA345, v105); /*0x100278f30*/
        codexmate_lib::core::relay::manager::record_router_event::h9aef4b264acbe670(v73, &unk_1015DE566, 15, v100); /*0x100278f4b*/
        v72 = v126; /*0x100278f50*/
      }
      v128 = (__int64)v72; /*0x100278f57*/
      v74 = 0; /*0x100278f5e*/
      v142 = 0x8000000000000000LL; /*0x100278f6b*/
      goto LABEL_68; /*0x100278f6f*/
    }
    if ( v145 ) /*0x100278ac2*/
    {
      qmemcpy(v113, v112, sizeof(v113)); /*0x100278ade*/
      v108[0] = v113; /*0x100278ae1*/
      v108[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100278aef*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v105, &unk_1017BA3E1, v108); /*0x100278b0b*/
      v132 = *(_QWORD **)v105; /*0x100278b1e*/
      v133 = *(_QWORD *)&v105[8]; /*0x100278b22*/
      v134 = *(_QWORD *)&v105[16]; /*0x100278b2d*/
      codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled_stably::hfde561a241c90274( /*0x100278b50*/
        (unsigned int)v108,
        a2,
        (unsigned int)v91,
        *(_DWORD *)&v105[8],
        *(_DWORD *)&v105[16],
        (unsigned int)&v94,
        v135);
      if ( LODWORD(v108[0]) == 11 ) /*0x100278b5c*/
      {
        v33 = (void **)v131; /*0x100278b73*/
        codexmate_lib::core::relay::manager::record_router_timing::h43d4824883113823( /*0x100278b7a*/
          v146,
          v131,
          v141,
          &unk_1015DE5DE,
          40);
        *((_QWORD *)__dst + 4) = v134; /*0x100278b83*/
        v60 = v132; /*0x100278b88*/
        *((_QWORD *)__dst + 3) = v133; /*0x100278b90*/
        *((_QWORD *)__dst + 2) = v60; /*0x100278b95*/
        *((_QWORD *)__dst + 1) = 10; /*0x100278b9a*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100278bad*/
      }
      else
      {
        qmemcpy(v105, v108, 0x60u); /*0x100279364*/
        codexmate_lib::core::relay::manager::record_router_timing::h43d4824883113823( /*0x10027937f*/
          v146,
          v131,
          v141,
          &unk_1015DE5C3,
          27);
        v124 = &v132; /*0x100279388*/
        v125 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100279396*/
        v126 = v105; /*0x10027939d*/
        v127 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1002793a4*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v107, &unk_1017BA404, &v124); /*0x1002793c0*/
        *((_QWORD *)__dst + 4) = v107[2]; /*0x1002793cc*/
        v89 = v107[0]; /*0x1002793d1*/
        *((_QWORD *)__dst + 3) = v107[1]; /*0x1002793df*/
        *((_QWORD *)__dst + 2) = v89; /*0x1002793e4*/
        *((_QWORD *)__dst + 1) = 10; /*0x1002793e9*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1002793fc*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v105); /*0x100279407*/
        v35 = v142; /*0x10027940c*/
        v33 = (void **)v132; /*0x100279410*/
        if ( v132 ) /*0x100279417*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1); /*0x100279422*/
      }
    }
    else
    {
      qmemcpy(v113, v112, sizeof(v113)); /*0x100278d19*/
      v108[0] = v113; /*0x100278d1c*/
      v108[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100278d2a*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v105, &unk_1017BA381, v108); /*0x100278d46*/
      v132 = *(_QWORD **)v105; /*0x100278d59*/
      v133 = *(_QWORD *)&v105[8]; /*0x100278d5d*/
      v134 = *(_QWORD *)&v105[16]; /*0x100278d68*/
      if ( v97 == 1 /*0x100278dd9*/
        && (codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
              (__int64 *)v105,
              *(__m128i **)(a2 + 24),
              (const __m128i *)v91,
              0,
              0),
            v64 = *(_QWORD *)&v105[16],
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$tauri_runtime..webview..InitializationScript$GT$$GT$::hc4ef94c49e9c448d(v105),
            v65 = v64 == 0,
            v34 = v129,
            v65)
        || (codexmate_lib::core::relay::manager::RelayManager::restore_router_enabled_stably::h7cdb26249eaa89f9(
              v108,
              a2,
              v91,
              v133,
              v134,
              &v94),
            LODWORD(v108[0]) == 11) )
      {
        v33 = (void **)v131; /*0x100278df0*/
        codexmate_lib::core::relay::manager::record_router_timing::h43d4824883113823( /*0x100278df7*/
          v146,
          v131,
          v141,
          &unk_1015DE596,
          45);
        *((_QWORD *)__dst + 4) = v134; /*0x100278e00*/
        v66 = v132; /*0x100278e05*/
        *((_QWORD *)__dst + 3) = v133; /*0x100278e0d*/
        *((_QWORD *)__dst + 2) = v66; /*0x100278e12*/
        *((_QWORD *)__dst + 1) = 10; /*0x100278e17*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100278e2a*/
      }
      else
      {
        qmemcpy(v105, v108, 0x60u); /*0x10027944e*/
        codexmate_lib::core::relay::manager::record_router_timing::h43d4824883113823( /*0x100279469*/
          v146,
          v131,
          v141,
          &unk_1015DE575,
          33);
        v124 = &v132; /*0x100279472*/
        v125 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100279480*/
        v126 = v105; /*0x100279487*/
        v127 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027948e*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v106, &unk_1017BA3A5, &v124); /*0x1002794aa*/
        *((_QWORD *)__dst + 4) = v106[2]; /*0x1002794b6*/
        v90 = v106[0]; /*0x1002794bb*/
        *((_QWORD *)__dst + 3) = v106[1]; /*0x1002794c9*/
        *((_QWORD *)__dst + 2) = v90; /*0x1002794ce*/
        *((_QWORD *)__dst + 1) = 10; /*0x1002794d3*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1002794e6*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v105); /*0x1002794f1*/
        v35 = v142; /*0x1002794f6*/
        v33 = (void **)v132; /*0x1002794fa*/
        if ( v132 ) /*0x100279501*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1); /*0x10027950c*/
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v113); /*0x100279518*/
LABEL_91:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnPlan$GT$::hfa03d8b1bce7796f(v115); /*0x10027951d*/
    goto LABEL_92; /*0x100279524*/
  }
  codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c( /*0x100278524*/
    v112,
    *(__m128i **)(a2 + 24),
    (const __m128i *)v91,
    v146,
    0);
  codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7(v113, a2); /*0x100278536*/
  v39 = v112[2]; /*0x10027853b*/
  v40 = v146; /*0x100278542*/
  if ( v112[2] || v113[0] != 0x8000000000000000LL ) /*0x100278561*/
  {
    codexmate_lib::core::relay::manager::format_invariant_violations::h98c34c0a81bbfce4(v108, v112[1], v112[2]); /*0x1002789af*/
    *(_QWORD *)v105 = v108; /*0x1002789bb*/
    *(_QWORD *)&v105[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002789c9*/
    *(_QWORD *)&v105[16] = v113; /*0x1002789d0*/
    *(_QWORD *)&v105[24] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hc3b1fe1208aa09e9; /*0x1002789de*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v103, &unk_1017BA437, v105); /*0x1002789fa*/
    if ( v108[0] ) /*0x100278a09*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108[1], v108[0], 1); /*0x100278a17*/
    codexmate_lib::core::relay::manager::record_router_event::h9aef4b264acbe670(v40, &unk_1015DE627, 21, v103); /*0x100278a33*/
    codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_locked_from_with_writer_policy::hf7a5f317757b1502( /*0x100278a51*/
      v104,
      a2,
      (__int64)&unk_1015DE63C,
      25,
      0);
    if ( LODWORD(v104[0]) == 11 ) /*0x100278a5d*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(&v104[1]); /*0x100278a6a*/
      if ( v144 == 1 ) /*0x100278a73*/
      {
        codexmate_lib::core::relay::manager::launch_codex_app_warning::h2256dcfb732f26c0(v105); /*0x100278a80*/
        v58 = *(_QWORD *)v105; /*0x100278a8c*/
        v135 = *(_QWORD *)&v105[8]; /*0x100278a9a*/
        v130 = *(_QWORD *)&v105[16]; /*0x100278aa5*/
        v59 = *(_QWORD *)v105 != 0x8000000000000000LL; /*0x100278ab6*/
      }
      else
      {
        v59 = 0; /*0x1002791a8*/
        v58 = 0x8000000000000000LL; /*0x1002791aa*/
      }
      v82 = v146; /*0x1002791b4*/
      LOBYTE(v108[0]) = v59; /*0x1002791b9*/
      *(_QWORD *)v105 = v108; /*0x1002791bf*/
      *(_QWORD *)&v105[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1002791cd*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v102, &unk_1017BA455, v105); /*0x1002791e9*/
      codexmate_lib::core::relay::manager::record_router_timing::h4bb28af80ee86731( /*0x10027920d*/
        v82,
        "totalresult=error stage=preflight",
        5,
        v131,
        v141,
        v102);
      codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h51c681f0bedd12e0((__int64)v108, a2); /*0x10027921c*/
      if ( v145 == 1 ) /*0x100279225*/
      {
        v83 = v135; /*0x100279231*/
        codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v105, a2); /*0x100279235*/
        v84 = v105[293]; /*0x10027923a*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v105); /*0x100279249*/
      }
      else
      {
        v84 = 0; /*0x100279250*/
        v83 = v135; /*0x100279253*/
      }
      memcpy(__dst, v108, 0x128u); /*0x100279266*/
      *((_QWORD *)__dst + 40) = v58; /*0x10027926b*/
      *((_QWORD *)__dst + 41) = v83; /*0x100279273*/
      *((_QWORD *)__dst + 42) = v130; /*0x10027927f*/
      *((_QWORD *)__dst + 37) = 0; /*0x100279287*/
      *((_QWORD *)__dst + 38) = 8; /*0x100279293*/
      *((_QWORD *)__dst + 39) = 0; /*0x10027929f*/
      __dst[344] = v84; /*0x1002792ab*/
    }
    else
    {
      qmemcpy(v105, v104, 0x60u); /*0x100278c10*/
      codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h5fbfe0cd5e1ad5af( /*0x100278c1d*/
        v108,
        v105);
      qmemcpy(v104, v108, sizeof(v104)); /*0x100278c35*/
      v61 = v104[0]; /*0x100278c3f*/
      v62 = v104[10]; /*0x100278c46*/
      *((_QWORD *)__dst + 12) = v104[11]; /*0x100278c54*/
      *((_QWORD *)__dst + 11) = v62; /*0x100278c59*/
      qmemcpy(__dst + 16, &v104[1], 0x48u); /*0x100278c68*/
      *((_QWORD *)__dst + 1) = v61; /*0x100278c6b*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100278c7a*/
    }
  }
  else
  {
    codexmate_lib::core::relay::manager::record_router_timing::h43d4824883113823(v146, v131, v141, &unk_1015DE606, 33); /*0x10027857f*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h51c681f0bedd12e0((__int64)v105, a2); /*0x10027858e*/
    v41 = 0; /*0x10027859a*/
    if ( v145 ) /*0x1002785a1*/
      v41 = v98; /*0x1002785a1*/
    memcpy(__dst, v105, 0x128u); /*0x1002785b4*/
    *((_QWORD *)__dst + 37) = 0; /*0x1002785b9*/
    *((_QWORD *)__dst + 38) = 8; /*0x1002785c5*/
    *((_QWORD *)__dst + 39) = 0; /*0x1002785d1*/
    *((_QWORD *)__dst + 40) = 0x8000000000000000LL; /*0x1002785e7*/
    __dst[344] = v41; /*0x1002785ef*/
  }
  if ( v113[0] != 0x8000000000000000LL && v113[0] ) /*0x1002792cc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113[1], v113[0], 1); /*0x1002792da*/
  v85 = v112[1]; /*0x1002792df*/
  if ( v39 ) /*0x1002792e9*/
  {
    v86 = 32 * v39; /*0x1002792eb*/
    v87 = 0; /*0x1002792ef*/
    do /*0x100279307*/
    {
      v88 = *(_QWORD *)(v85 + v87); /*0x100279309*/
      if ( v88 ) /*0x100279311*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v85 + v87 + 8), v88, 1); /*0x10027931d*/
      v87 += 32; /*0x100279300*/
    }
    while ( v86 != v87 ); /*0x100279307*/
  }
  v33 = (void **)v112[0]; /*0x100279324*/
  if ( v112[0] ) /*0x10027932e*/
  {
    v33 = (void **)(32 * v112[0]); /*0x100279330*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, 32 * v112[0], 8); /*0x10027933c*/
  }
  v34 = v129; /*0x100279341*/
  v35 = v142; /*0x100279345*/
LABEL_92:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v94); /*0x100279529*/
  v32 = v91; /*0x100279535*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v91); /*0x10027953c*/
  if ( (v143 & 1) == 0 ) /*0x100279545*/
    goto LABEL_93; /*0x100279545*/
LABEL_94:
  v36 = *v123; /*0x10027955a*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v123); /*0x100279564*/
LABEL_95:
  if ( !(_BYTE)v140 /*0x1002795a9*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v128) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v36, v33, v37, v38) )
  {
    *(_BYTE *)(v35 + 24) = 1; /*0x1002795b2*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v34); /*0x100279585*/
  return __dst; /*0x10027824f*/
}