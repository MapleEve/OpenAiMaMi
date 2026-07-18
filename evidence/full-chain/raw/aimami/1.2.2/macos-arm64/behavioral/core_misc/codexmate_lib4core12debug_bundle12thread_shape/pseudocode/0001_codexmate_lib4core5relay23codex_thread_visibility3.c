// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x100a1b0f0 d=1
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::h34ebdac9998785f2(
        void *a1,
        _QWORD *a2,
        void *a3,
        signed __int64 a4)
{
  __int64 v5; // r12
  void *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  const void **v9; // r14
  __int64 v10; // r15
  __int64 *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // r14
  size_t v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  size_t v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rax
  const void **v26; // rax
  __int64 v27; // rcx
  size_t *v28; // r15
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  size_t v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rbx
  char v36; // al
  int v37; // ecx
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  size_t v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rcx
  size_t v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  size_t v49; // rdx
  unsigned __int64 v50; // rbx
  __int64 v51; // r13
  _QWORD v53[14]; // [rsp+8h] [rbp-408h] BYREF
  size_t v54[3]; // [rsp+78h] [rbp-398h] BYREF
  size_t v55[3]; // [rsp+90h] [rbp-380h] BYREF
  _QWORD v56[4]; // [rsp+A8h] [rbp-368h] BYREF
  _QWORD v57[2]; // [rsp+C8h] [rbp-348h] BYREF
  __int64 v58[19]; // [rsp+D8h] [rbp-338h] BYREF
  size_t v59[3]; // [rsp+170h] [rbp-2A0h] BYREF
  size_t v60[3]; // [rsp+188h] [rbp-288h] BYREF
  void *v61; // [rsp+1A0h] [rbp-270h]
  __int64 v62; // [rsp+1A8h] [rbp-268h]
  __int64 v63; // [rsp+1B0h] [rbp-260h]
  __int64 v64; // [rsp+1B8h] [rbp-258h]
  __int64 v65[12]; // [rsp+1C0h] [rbp-250h] BYREF
  _QWORD v66[3]; // [rsp+220h] [rbp-1F0h] BYREF
  __int64 v67; // [rsp+238h] [rbp-1D8h] BYREF
  __int64 v68; // [rsp+240h] [rbp-1D0h]
  __int64 v69; // [rsp+248h] [rbp-1C8h]
  __int64 v70; // [rsp+250h] [rbp-1C0h] BYREF
  __int64 *v71; // [rsp+258h] [rbp-1B8h]
  char (__fastcall *v72)(_QWORD *, __int64 *); // [rsp+260h] [rbp-1B0h]
  __int64 v73; // [rsp+268h] [rbp-1A8h]
  __int64 v74; // [rsp+270h] [rbp-1A0h]
  __int64 v75; // [rsp+278h] [rbp-198h]
  const void *v76; // [rsp+280h] [rbp-190h]
  size_t v77; // [rsp+288h] [rbp-188h]
  size_t v78[3]; // [rsp+290h] [rbp-180h] BYREF
  size_t v79[3]; // [rsp+2A8h] [rbp-168h] BYREF
  __int64 v80; // [rsp+2C0h] [rbp-150h]
  __int64 v81; // [rsp+2C8h] [rbp-148h] BYREF
  __int64 v82; // [rsp+2D0h] [rbp-140h]
  __int64 v83; // [rsp+2D8h] [rbp-138h]
  __int64 v84; // [rsp+2E0h] [rbp-130h]
  _QWORD v85[14]; // [rsp+2E8h] [rbp-128h] BYREF
  __int64 v86; // [rsp+358h] [rbp-B8h]
  const void **v87; // [rsp+360h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+368h] [rbp-A8h]
  __int64 *v89; // [rsp+370h] [rbp-A0h]
  char (__fastcall *v90)(_QWORD *, __int64 *); // [rsp+378h] [rbp-98h] BYREF
  __int64 v91; // [rsp+380h] [rbp-90h]
  __int64 v92; // [rsp+388h] [rbp-88h]
  __int64 v93; // [rsp+390h] [rbp-80h]
  const void *v94; // [rsp+398h] [rbp-78h]
  __int64 v95; // [rsp+3A0h] [rbp-70h]
  __int64 v96; // [rsp+3A8h] [rbp-68h]
  __int64 v97; // [rsp+3B0h] [rbp-60h]
  __int64 v98; // [rsp+3B8h] [rbp-58h]
  __int64 v99; // [rsp+3C0h] [rbp-50h]
  void *__src; // [rsp+3C8h] [rbp-48h]
  size_t v101; // [rsp+3D0h] [rbp-40h]
  void *v102; // [rsp+3D8h] [rbp-38h]
  __int64 v103; // [rsp+3E0h] [rbp-30h]

  v57[0] = a3; /*0x100a1b107*/
  v57[1] = a4; /*0x100a1b10e*/
  if ( a4 < 0 ) /*0x100a1b118*/
  {
    v5 = 0; /*0x100a1b11a*/
    goto LABEL_3; /*0x100a1b11a*/
  }
  v6 = a1; /*0x100a1b128*/
  __src = a3; /*0x100a1b12b*/
  if ( a4 ) /*0x100a1b132*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a1b134*/
    v5 = 1; /*0x100a1b139*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1u); /*0x100a1b147*/
    if ( !v7 ) /*0x100a1b14f*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5); /*0x100a1b11d*/
    v8 = v7; /*0x100a1b151*/
  }
  else
  {
    v8 = 1; /*0x100a1b156*/
  }
  memcpy((void *)v8, __src, a4); /*0x100a1b168*/
  v85[0] = a4; /*0x100a1b16d*/
  v85[1] = v8; /*0x100a1b174*/
  v85[2] = a4; /*0x100a1b17b*/
  v85[3] = 0; /*0x100a1b1b9*/
  v85[4] = 8; /*0x100a1b1c4*/
  v85[5] = 0; /*0x100a1b1cf*/
  v85[6] = 0; /*0x100a1b1da*/
  v85[7] = 8; /*0x100a1b1e5*/
  memset(&v85[8], 0, 48); /*0x100a1b1f0*/
  v65[0] = (__int64)__src; /*0x100a1b1fb*/
  v65[1] = a4; /*0x100a1b202*/
  if ( a4 != 6 /*0x100a1b241*/
    || *(_DWORD *)__src ^ 0x6E65706F | *((unsigned __int16 *)__src + 2) ^ 0x6961
    && *(_DWORD *)__src ^ 0x616D6961 | *((unsigned __int16 *)__src + 2) ^ 0x3169 )
  {
    v58[0] = (__int64)v65; /*0x100a1b250*/
    v58[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100a1b25e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v53[1], byte_1016FD5A6, (unsigned __int64)v58); /*0x100a1b27a*/
    v53[0] = 9; /*0x100a1b27f*/
    qmemcpy(v58, v53, 0x60u); /*0x100a1b2a0*/
    v87 = nullptr; /*0x100a1b2a3*/
    v88 = 1; /*0x100a1b2ae*/
    v89 = nullptr; /*0x100a1b2b9*/
    v65[2] = 1610612768; /*0x100a1b2c4*/
    v65[0] = (__int64)&v87; /*0x100a1b2d6*/
    v65[1] = (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1225; /*0x100a1b2e4*/
    if ( _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1(v58, v65) ) /*0x100a1b2f5*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a1be72*/
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1226,
        55,
        (__int64)&v70,
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1239,
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1228);
    v9 = v87; /*0x100a1b302*/
    v10 = v88; /*0x100a1b309*/
    v11 = v89; /*0x100a1b310*/
    v12 = v85[5]; /*0x100a1b317*/
    if ( v85[5] == v85[3] ) /*0x100a1b325*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v85[3]); /*0x100a1b32e*/
    v13 = v85[4]; /*0x100a1b333*/
    v14 = 3 * v12; /*0x100a1b33a*/
    *(_QWORD *)(v85[4] + 8 * v14) = v9; /*0x100a1b33e*/
    *(_QWORD *)(v13 + 8 * v14 + 8) = v10; /*0x100a1b342*/
    *(_QWORD *)(v13 + 8 * v14 + 16) = v11; /*0x100a1b347*/
    v85[5] = v12 + 1; /*0x100a1b34f*/
    qmemcpy(a1, v85, 0x70u); /*0x100a1b365*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v58); /*0x100a1b36f*/
    return v6; /*0x100a1b374*/
  }
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h3e0dde50a913824a(v58, a2); /*0x100a1b386*/
  v61 = a1; /*0x100a1b38b*/
  v96 = v58[1]; /*0x100a1b3af*/
  v97 = v58[1]; /*0x100a1b3b3*/
  v62 = v58[0]; /*0x100a1b3b7*/
  v98 = v58[0]; /*0x100a1b3be*/
  v86 = v58[1] + 24 * v58[2]; /*0x100a1b3c2*/
  v99 = v86; /*0x100a1b3c9*/
  v15 = v58[1]; /*0x100a1b3cd*/
  if ( !v58[2] ) /*0x100a1b3d3*/
    goto LABEL_86; /*0x100a1b3d3*/
  v63 = v58[1]; /*0x100a1b3e3*/
  v16 = (__int64 *)v58[1]; /*0x100a1b3ea*/
LABEL_18:
  v15 = (__int64)(v16 + 3); /*0x100a1b400*/
  v17 = *v16; /*0x100a1b404*/
  if ( *v16 != 0x8000000000000000LL ) /*0x100a1b40a*/
  {
    v18 = v16[2]; /*0x100a1b414*/
    v102 = (void *)v16[1]; /*0x100a1b41b*/
    std::sys::fs::metadata::h32fa16d3052ea535(v58, v102, v18); /*0x100a1b422*/
    v19 = v58[0]; /*0x100a1b427*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x100a1b438*/
      v58[0],
      v58[1]);
    if ( v19 ) /*0x100a1b440*/
      goto LABEL_82; /*0x100a1b440*/
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h5393c5872235f96a(v58, v102, v18); /*0x100a1b450*/
    if ( LOBYTE(v58[13]) == 3 ) /*0x100a1b45c*/
    {
      qmemcpy(v53, v58, 0x60u); /*0x100a1b474*/
      v87 = (const void **)v102; /*0x100a1b47b*/
      v88 = v18; /*0x100a1b482*/
      v65[0] = (__int64)&v87; /*0x100a1b490*/
      v65[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a1b49e*/
      v65[2] = (__int64)v53; /*0x100a1b4a5*/
      v65[3] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1; /*0x100a1b4b3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, byte_1016FD14A, (unsigned __int64)v65); /*0x100a1b4cf*/
      v20 = v85[5]; /*0x100a1b4d4*/
      if ( v85[5] == v85[3] ) /*0x100a1b4e2*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v85[3]); /*0x100a1b4eb*/
      v21 = v85[4]; /*0x100a1b4f0*/
      v22 = 3 * v20; /*0x100a1b4f7*/
      *(_QWORD *)(v85[4] + 8 * v22 + 16) = v60[2]; /*0x100a1b502*/
      v23 = v60[0]; /*0x100a1b507*/
      *(_QWORD *)(v21 + 8 * v22 + 8) = v60[1]; /*0x100a1b515*/
      *(_QWORD *)(v21 + 8 * v22) = v23; /*0x100a1b51a*/
      v85[5] = v20 + 1; /*0x100a1b521*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v53); /*0x100a1b52f*/
      goto LABEL_82; /*0x100a1b534*/
    }
    qmemcpy(v53, v58, sizeof(v53)); /*0x100a1b552*/
    codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h4ec20139e2f7f699( /*0x100a1b55f*/
      v65,
      v53);
    if ( LODWORD(v65[0]) != 10 ) /*0x100a1b575*/
    {
      qmemcpy(v58, v65, 0x60u); /*0x100a1bc85*/
      v70 = (__int64)v102; /*0x100a1bc8c*/
      v71 = (__int64 *)v18; /*0x100a1bc93*/
      v87 = (const void **)&v70; /*0x100a1bca1*/
      v88 = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a1bcaf*/
      v89 = v58; /*0x100a1bcb6*/
      v90 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1; /*0x100a1bcc4*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, byte_1016FD14A, (unsigned __int64)&v87); /*0x100a1bce0*/
      v46 = v85[5]; /*0x100a1bce5*/
      if ( v85[5] == v85[3] ) /*0x100a1bcf3*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v85[3]); /*0x100a1bcfc*/
      v47 = v85[4]; /*0x100a1bd01*/
      v48 = 3 * v46; /*0x100a1bd08*/
      *(_QWORD *)(v85[4] + 8 * v48 + 16) = v59[2]; /*0x100a1bd13*/
      v49 = v59[0]; /*0x100a1bd18*/
      *(_QWORD *)(v47 + 8 * v48 + 8) = v59[1]; /*0x100a1bd26*/
      *(_QWORD *)(v47 + 8 * v48) = v49; /*0x100a1bd2b*/
      v85[5] = v46 + 1; /*0x100a1bd32*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v58); /*0x100a1bd3c*/
      goto LABEL_81; /*0x100a1bd41*/
    }
    v103 = v17; /*0x100a1b57b*/
    v81 = v65[2]; /*0x100a1b59c*/
    v82 = v65[2]; /*0x100a1b5a3*/
    v83 = v65[1]; /*0x100a1b5aa*/
    v80 = v65[2] + 72 * v65[3]; /*0x100a1b5b1*/
    v84 = v80; /*0x100a1b5b8*/
    if ( !v65[3] ) /*0x100a1b5c2*/
      goto LABEL_80; /*0x100a1b5c2*/
    v24 = v65[2] + 72; /*0x100a1b5c8*/
    while ( 1 ) /*0x100a1b5e9*/
    {
      v26 = *(const void ***)(v24 - 72); /*0x100a1b5e9*/
      v27 = *(_QWORD *)(v24 - 64); /*0x100a1b5ed*/
      v77 = *(_QWORD *)(v24 - 8); /*0x100a1b5f5*/
      v76 = *(const void **)(v24 - 16); /*0x100a1b600*/
      v75 = *(_QWORD *)(v24 - 24); /*0x100a1b60b*/
      v74 = *(_QWORD *)(v24 - 32); /*0x100a1b616*/
      v73 = *(_QWORD *)(v24 - 40); /*0x100a1b621*/
      v72 = *(char (__fastcall **)(_QWORD *, __int64 *))(v24 - 48); /*0x100a1b62c*/
      v71 = *(__int64 **)(v24 - 56); /*0x100a1b637*/
      v70 = v27; /*0x100a1b63e*/
      if ( v26 == (const void **)0x8000000000000000LL ) /*0x100a1b648*/
      {
LABEL_79:
        v82 = v24; /*0x100a1bd4a*/
LABEL_80:
        v17 = v103; /*0x100a1bd51*/
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h22af8281c46af00b(&v81); /*0x100a1bd5c*/
LABEL_81:
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251((__int64)v53); /*0x100a1bd61*/
LABEL_82:
        if ( v17 ) /*0x100a1bd7a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bd8c*/
        v16 = (__int64 *)v15; /*0x100a1b3f0*/
        if ( v15 == v86 ) /*0x100a1b3fa*/
        {
          v15 = v86; /*0x100a1bd96*/
          break; /*0x100a1bd96*/
        }
        goto LABEL_18; /*0x100a1b3fa*/
      }
      v87 = v26; /*0x100a1b64e*/
      v95 = v77; /*0x100a1b663*/
      v94 = v76; /*0x100a1b66e*/
      v93 = v75; /*0x100a1b679*/
      v92 = v74; /*0x100a1b684*/
      v91 = v73; /*0x100a1b68f*/
      v90 = v72; /*0x100a1b69a*/
      ++v85[9]; /*0x100a1b6ac*/
      v89 = v71; /*0x100a1b6b3*/
      v88 = v70; /*0x100a1b6b7*/
      if ( v75 == 0x8000000000000000LL ) /*0x100a1b6be*/
      {
        ++v85[12]; /*0x100a1b6c4*/
        v58[0] = (__int64)&v87; /*0x100a1b6d2*/
        v58[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1b6e0*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v55, byte_1016FE04A, (unsigned __int64)v58); /*0x100a1b6f8*/
        v28 = v55; /*0x100a1b6fd*/
        v29 = v85[8]; /*0x100a1b704*/
        if ( v85[8] < 3u ) /*0x100a1b70f*/
          goto LABEL_31; /*0x100a1b70f*/
      }
      else
      {
        std::sys::fs::metadata::h32fa16d3052ea535(v58, v94, v95); /*0x100a1b78b*/
        v33 = v58[0]; /*0x100a1b790*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x100a1b7a1*/
          v58[0],
          v58[1]);
        if ( !v33 ) /*0x100a1b7a9*/
        {
          codexmate_lib::core::relay::codex_thread_visibility::read_rollout_providers_for_convergence::h88cd4f2bd200b135( /*0x100a1b86f*/
            v65,
            v94,
            v95);
          if ( LODWORD(v65[0]) != 10 ) /*0x100a1b87b*/
          {
            qmemcpy(v58, v65, 0x60u); /*0x100a1b9ae*/
            ++v85[13]; /*0x100a1b9b1*/
            v56[0] = &v87; /*0x100a1b9bf*/
            v56[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1b9cd*/
            v56[2] = v58; /*0x100a1b9d4*/
            v56[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1; /*0x100a1b9e2*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v79, byte_1016FD14A, (unsigned __int64)v56); /*0x100a1b9fe*/
            v38 = v85[8]; /*0x100a1ba03*/
            if ( v85[8] >= 3u ) /*0x100a1ba0e*/
            {
              if ( v79[0] ) /*0x100a1ba81*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1ba8f*/
            }
            else
            {
              if ( v85[8] == v85[6] ) /*0x100a1ba17*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v85[6]); /*0x100a1ba2e*/
              v39 = v85[7]; /*0x100a1ba33*/
              v40 = 3 * v38; /*0x100a1ba3a*/
              *(_QWORD *)(v85[7] + 8 * v40 + 16) = v79[2]; /*0x100a1ba45*/
              v41 = v79[0]; /*0x100a1ba4a*/
              *(_QWORD *)(v39 + 8 * v40 + 8) = v79[1]; /*0x100a1ba58*/
              *(_QWORD *)(v39 + 8 * v40) = v41; /*0x100a1ba5d*/
              v85[8] = v38 + 1; /*0x100a1ba64*/
            }
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v58); /*0x100a1ba9b*/
            goto LABEL_68; /*0x100a1baa0*/
          }
          v69 = v65[6]; /*0x100a1b88c*/
          v68 = v65[5]; /*0x100a1b897*/
          v67 = v65[4]; /*0x100a1b8a2*/
          v34 = v65[3]; /*0x100a1b8a9*/
          v66[2] = v65[3]; /*0x100a1b8ad*/
          v35 = v65[2]; /*0x100a1b8b7*/
          v66[1] = v65[2]; /*0x100a1b8bb*/
          v66[0] = v65[1]; /*0x100a1b8c2*/
          if ( !(unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hfb2c207ad923f543( /*0x100a1b8cf*/
                                   v65[2],
                                   v65[3]) )
            goto LABEL_64; /*0x100a1b8cf*/
          v64 = v68; /*0x100a1b8ea*/
          v101 = v69; /*0x100a1b8f1*/
          if ( !(unsigned __int8)codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hfb2c207ad923f543( /*0x100a1b8f5*/
                                   v68,
                                   v69) )
            goto LABEL_64; /*0x100a1b8fc*/
          if ( v92 == 6 /*0x100a1b928*/
            && !(*(_DWORD *)__src ^ *(_DWORD *)v91 | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v91 + 4))) )
          {
            v36 = 1; /*0x100a1baa5*/
            if ( v34 == 6 ) /*0x100a1baab*/
              goto LABEL_44; /*0x100a1baab*/
          }
          else
          {
            ++v85[10]; /*0x100a1b92e*/
            v36 = 0; /*0x100a1b935*/
            if ( v34 == 6 ) /*0x100a1b93b*/
            {
LABEL_44:
              v37 = 0; /*0x100a1b941*/
              if ( v101 == 6 ) /*0x100a1b960*/
              {
                LOBYTE(v37) = (*(_DWORD *)__src ^ *(_DWORD *)v35 /*0x100a1b966*/
                             | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v35 + 4))) != 0;
                if ( !v37 /*0x100a1b98a*/
                  && !(*(_DWORD *)__src ^ *(_DWORD *)v64
                     | (unsigned __int16)(*((_WORD *)__src + 2) ^ *(_WORD *)(v64 + 4))) )
                {
                  if ( v36 ) /*0x100a1b994*/
                    goto LABEL_64; /*0x100a1b994*/
LABEL_58:
                  v58[0] = (__int64)&v87; /*0x100a1bab8*/
                  v58[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1bacd*/
                  v58[2] = (__int64)&v90; /*0x100a1badb*/
                  v58[3] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1bae2*/
                  v58[4] = (__int64)v66; /*0x100a1baf0*/
                  v58[5] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1baf7*/
                  v58[6] = (__int64)&v67; /*0x100a1bb05*/
                  v58[7] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1bb0c*/
                  v58[8] = (__int64)v57; /*0x100a1bb1a*/
                  v58[9] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100a1bb28*/
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, byte_1016FE07C, (unsigned __int64)v58); /*0x100a1bb40*/
                  v42 = v85[8]; /*0x100a1bb45*/
                  if ( v85[8] >= 3u ) /*0x100a1bb50*/
                  {
                    if ( v78[0] ) /*0x100a1bbb9*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bbc7*/
                  }
                  else
                  {
                    if ( v85[8] == v85[6] ) /*0x100a1bb59*/
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v85[6]); /*0x100a1bb70*/
                    v43 = v85[7]; /*0x100a1bb75*/
                    v44 = 3 * v42; /*0x100a1bb7c*/
                    *(_QWORD *)(v85[7] + 8 * v44 + 16) = v78[2]; /*0x100a1bb87*/
                    v45 = v78[0]; /*0x100a1bb8c*/
                    *(_QWORD *)(v43 + 8 * v44 + 8) = v78[1]; /*0x100a1bb9a*/
                    *(_QWORD *)(v43 + 8 * v44) = v45; /*0x100a1bb9f*/
                    v85[8] = v42 + 1; /*0x100a1bba6*/
                  }
LABEL_64:
                  if ( v66[0] ) /*0x100a1bbd6*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bbe4*/
                  if ( !v67 ) /*0x100a1bbfd*/
                    goto LABEL_68; /*0x100a1bbfd*/
LABEL_67:
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bc06*/
                  goto LABEL_68; /*0x100a1bc0b*/
                }
              }
            }
          }
          ++v85[11]; /*0x100a1bab1*/
          goto LABEL_58; /*0x100a1bab1*/
        }
        ++v85[12]; /*0x100a1b7af*/
        v65[0] = (__int64)v94; /*0x100a1b7be*/
        v65[1] = v95; /*0x100a1b7c5*/
        v58[0] = (__int64)&v87; /*0x100a1b7d3*/
        v58[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1b7e1*/
        v58[2] = (__int64)v65; /*0x100a1b7ef*/
        v58[3] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a1b7fd*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, byte_1016FE063, (unsigned __int64)v58); /*0x100a1b815*/
        v28 = v54; /*0x100a1b81a*/
        v29 = v85[8]; /*0x100a1b821*/
        if ( v85[8] < 3u ) /*0x100a1b82c*/
        {
LABEL_31:
          if ( v29 == v85[6] ) /*0x100a1b71c*/
          {
            v101 = *v28; /*0x100a1b721*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v85[6]); /*0x100a1b730*/
          }
          v30 = v85[7]; /*0x100a1b735*/
          v31 = 3 * v29; /*0x100a1b73c*/
          *(_QWORD *)(v85[7] + 8 * v31 + 16) = v28[2]; /*0x100a1b744*/
          v32 = *v28; /*0x100a1b749*/
          *(_QWORD *)(v30 + 8 * v31 + 8) = v28[1]; /*0x100a1b750*/
          *(_QWORD *)(v30 + 8 * v31) = v32; /*0x100a1b755*/
          v85[8] = v29 + 1; /*0x100a1b75c*/
          goto LABEL_68; /*0x100a1b76d*/
        }
      }
      if ( *v28 ) /*0x100a1b832*/
        goto LABEL_67; /*0x100a1b842*/
LABEL_68:
      if ( v87 ) /*0x100a1bc1a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bc28*/
      if ( v93 != 0x8000000000000000LL && v93 ) /*0x100a1bc39*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bc44*/
      if ( v90 ) /*0x100a1bc5a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bc6c*/
      v25 = v24 - 72; /*0x100a1b5d0*/
      v24 += 72; /*0x100a1b5d4*/
      if ( v25 + 72 == v80 ) /*0x100a1b5e3*/
      {
        v24 = v80; /*0x100a1bd43*/
        goto LABEL_79; /*0x100a1bd43*/
      }
    }
  }
  v97 = v15; /*0x100a1bd9d*/
LABEL_86:
  if ( v86 != v15 ) /*0x100a1bdc5*/
  {
    v50 = (v86 - v15) / 0x18uLL; /*0x100a1bdca*/
    v51 = v15 + 8; /*0x100a1bdce*/
    do /*0x100a1bde7*/
    {
      if ( *(_QWORD *)(v51 - 8) ) /*0x100a1bde9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1bdfb*/
      v51 += 24; /*0x100a1bde0*/
      --v50; /*0x100a1bde4*/
    }
    while ( v50 ); /*0x100a1bde7*/
  }
  if ( v62 ) /*0x100a1be0c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a1be1e*/
  v6 = v61; /*0x100a1be2f*/
  qmemcpy(v61, v85, 0x70u); /*0x100a1be39*/
  return v6; /*0x100a1be3f*/
}