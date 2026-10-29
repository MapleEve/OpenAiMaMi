// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::accounts::perform_switch_payload_with_restart::h20e570df0d8cb858; addr: 0x100a67910; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
_QWORD *__fastcall codexmate_lib::commands::accounts::perform_switch_payload_with_restart::h20e570df0d8cb858(
        char *a1,
        __int64 a2)
{
  _QWORD *v2; // r12
  int v3; // edx
  double v4; // xmm0_8
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r15
  char v18; // r12
  unsigned __int64 v19; // rdi
  int v20; // eax
  char *v21; // rdx
  __int128 v22; // kr00_16
  char v23; // r15
  const void *v25; // r15
  size_t v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r13
  unsigned int v32; // r12d
  _DWORD *v33; // rsi
  _DWORD *v34; // rdi
  __int64 i; // rcx
  __int64 v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rdx
  double v41; // xmm0_8
  __int64 v42; // rax
  _QWORD *v43; // rbx
  __int64 v44; // rax
  char v45; // al
  __int64 v46; // rbx
  int v47; // r14d
  __int128 v48; // kr30_16
  __int64 v49; // r15
  __int64 v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r13
  __int64 v58; // r15
  char v59; // r14
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // r14
  _QWORD *v65; // r15
  __int64 v66; // rsi
  char v67; // bl
  int v68; // eax
  __int64 *v69; // rdi
  __int64 v70; // rax
  void *v71; // rax
  __int64 (__fastcall *v72)(); // rax
  __int64 v73; // rax
  double v74; // xmm0_8
  __int64 v75; // rbx
  _DWORD *v76; // rbx
  __int64 v77; // r14
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 v82; // rdx
  double v83; // xmm0_8
  __int64 v84; // rax
  _QWORD v85[65]; // [rsp+8h] [rbp-8A8h] BYREF
  __int64 v86[65]; // [rsp+210h] [rbp-6A0h] BYREF
  __int64 __src[65]; // [rsp+418h] [rbp-498h] BYREF
  _OWORD __dst[15]; // [rsp+620h] [rbp-290h] BYREF
  unsigned __int64 v89; // [rsp+718h] [rbp-198h]
  __int64 v90; // [rsp+720h] [rbp-190h]
  _QWORD v91[12]; // [rsp+728h] [rbp-188h] BYREF
  void *v92; // [rsp+788h] [rbp-128h]
  __int64 v93; // [rsp+790h] [rbp-120h]
  __int64 v94; // [rsp+798h] [rbp-118h]
  __int64 v95; // [rsp+7A0h] [rbp-110h]
  __int64 v96; // [rsp+7A8h] [rbp-108h]
  __int64 v97; // [rsp+7B0h] [rbp-100h]
  __int64 v98; // [rsp+7B8h] [rbp-F8h]
  __int64 v99; // [rsp+7C0h] [rbp-F0h]
  _BYTE v100[16]; // [rsp+7C8h] [rbp-E8h] BYREF
  __int64 v101; // [rsp+7D8h] [rbp-D8h] BYREF
  int v102; // [rsp+7E0h] [rbp-D0h]
  __int64 *v103; // [rsp+7E8h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+7F0h] [rbp-C0h]
  __int64 v105; // [rsp+800h] [rbp-B0h]
  __int64 *v106; // [rsp+808h] [rbp-A8h]
  unsigned __int128 v107; // [rsp+810h] [rbp-A0h] BYREF
  size_t v108; // [rsp+820h] [rbp-90h]
  __int64 v109; // [rsp+828h] [rbp-88h] BYREF
  __int64 v110; // [rsp+830h] [rbp-80h]
  __int64 v111; // [rsp+838h] [rbp-78h]
  __int64 *v112; // [rsp+840h] [rbp-70h] BYREF
  __int64 (__fastcall **v113)(); // [rsp+848h] [rbp-68h]
  __int64 v114; // [rsp+850h] [rbp-60h]
  _QWORD *v115; // [rsp+858h] [rbp-58h]
  __int64 v116; // [rsp+860h] [rbp-50h] BYREF
  __int64 v117; // [rsp+868h] [rbp-48h]
  __int64 v118; // [rsp+870h] [rbp-40h]
  unsigned int v119; // [rsp+878h] [rbp-38h] BYREF
  unsigned __int8 v120; // [rsp+87Fh] [rbp-31h]
  int v121; // [rsp+880h] [rbp-30h]
  _BYTE v122[41]; // [rsp+887h] [rbp-29h] BYREF

  v2 = a1; /*0x100a67927*/
  v85[0] = "autolastNULL"; /*0x100a67931*/
  v85[1] = 4; /*0x100a67938*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v100); /*0x100a6794d*/
  v101 = std::time::Instant::now::hda76af2c3a449055(); /*0x100a67957*/
  v102 = v3; /*0x100a6795e*/
  v86[0] = (__int64)v85; /*0x100a6796b*/
  v86[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a67979*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_101905BF6, v86); /*0x100a6799b*/
  v4 = codexmate_lib::commands::accounts::AccountSwitchTrace::event::hac8dad46c3cbffdf( /*0x100a679b2*/
         (__int64)v100,
         (__int64)&unk_1017932A5,
         7,
         __src);
  v105 = a2; /*0x100a679b7*/
  v5 = *(_QWORD *)(a2 + 136); /*0x100a679be*/
  v6 = tauri::state::StateManager::try_get::h7aded0c5892c0acf(*(_QWORD *)(v5 + 4872) + 16LL, v4); /*0x100a679d0*/
  if ( !v6 ) /*0x100a679d8*/
  {
    v86[0] = (__int64)&anon_1d5e2ba954832094e55fcdce7f3204cb_1506; /*0x100a67c77*/
    v86[1] = 61; /*0x100a67c7e*/
    __src[0] = (__int64)v86; /*0x100a67c89*/
    __src[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a67c97*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a67cb3*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      __src,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v7 = v6; /*0x100a679f4*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::hd33f803dee4bb26e( /*0x100a679f7*/
    v86,
    v6,
    "switching the active Codex account and restarting ChatGPTpreflight_okquiet_acquire_startedstatus=pendingquiet_acquiredstatus=readydisk_committed",
    57);
  if ( LODWORD(v86[0]) != 11 ) /*0x100a67a03*/
  {
    qmemcpy(__src, v86, 0x60u); /*0x100a67baa*/
    *(_QWORD *)&__dst[0] = 0; /*0x100a67bad*/
    *((_QWORD *)&__dst[0] + 1) = 1; /*0x100a67bb8*/
    *(_QWORD *)&__dst[1] = 0; /*0x100a67bc3*/
    v85[2] = 1610612768; /*0x100a67bce*/
    v85[0] = __dst; /*0x100a67be0*/
    v85[1] = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a67bee*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a67bff*/
                            __src,
                            v85) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a67d23*/
        &anon_442098b8dbdde10fede7d79fc85e0df3_291,
        55,
        v122,
        &anon_442098b8dbdde10fede7d79fc85e0df3_301,
        &anon_442098b8dbdde10fede7d79fc85e0df3_293);
    v22 = __dst[0]; /*0x100a67c13*/
    v23 = __dst[1]; /*0x100a67c1a*/
    *((_DWORD *)a1 + 7) = DWORD1(__dst[1]); /*0x100a67c28*/
    *(_DWORD *)(a1 + 25) = *(_DWORD *)((char *)&__dst[1] + 1); /*0x100a67c33*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v86); /*0x100a67c3f*/
    *(_OWORD *)(a1 + 8) = v22; /*0x100a67c44*/
    a1[24] = v23; /*0x100a67c4e*/
    *(_QWORD *)a1 = 2; /*0x100a67c53*/
    return v2; /*0x100a67c53*/
  }
  v92 = a1; /*0x100a67a09*/
  v115 = (_QWORD *)v86[1]; /*0x100a67a17*/
  v120 = v86[2]; /*0x100a67a22*/
  v8 = (_QWORD *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(v5 + 4872) + 16LL); /*0x100a67a30*/
  v9 = v8; /*0x100a67a35*/
  if ( !v8 ) /*0x100a67a3b*/
  {
    v86[0] = (__int64)&anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100a67cbf*/
    v86[1] = 76; /*0x100a67cc6*/
    __src[0] = (__int64)v86; /*0x100a67cd1*/
    __src[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a67cdf*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a67cfb*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      __src,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v10 = *v8; /*0x100a67a41*/
  if ( !*v8 ) /*0x100a67a41*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v8); /*0x100a67d35*/
  ((void (*)(void))std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0)(); /*0x100a67a4d*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100a67a5c*/
  {
    v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10) ^ 1; /*0x100a67d45*/
    if ( *((_BYTE *)v9 + 8) ) /*0x100a67d49*/
      goto LABEL_8; /*0x100a67d50*/
  }
  else
  {
    v15 = 0; /*0x100a67a68*/
    if ( *((_BYTE *)v9 + 8) ) /*0x100a67a6b*/
    {
LABEL_8:
      v86[0] = 0; /*0x100a67a78*/
      v86[1] = 1; /*0x100a67a83*/
      v86[2] = 0; /*0x100a67a8e*/
      __src[2] = 1610612768; /*0x100a67a99*/
      __src[0] = (__int64)v86; /*0x100a67aa4*/
      __src[1] = (__int64)&anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a67ab2*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x100a67acc*/
                              &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                              41,
                              __src,
                              v12,
                              v13,
                              v14) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a6882e*/
          &anon_442098b8dbdde10fede7d79fc85e0df3_291,
          55,
          v122,
          &anon_442098b8dbdde10fede7d79fc85e0df3_301,
          &anon_442098b8dbdde10fede7d79fc85e0df3_293);
      v16 = v86[0]; /*0x100a67ad9*/
      v17 = v86[1]; /*0x100a67ae0*/
      v18 = v86[2]; /*0x100a67ae7*/
      LODWORD(v85[0]) = *(_DWORD *)((char *)&v86[2] + 1); /*0x100a67af5*/
      *(_DWORD *)((char *)v85 + 3) = HIDWORD(v86[2]); /*0x100a67b01*/
      if ( !v15 /*0x100a68852*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
      {
        *((_BYTE *)v9 + 8) = 1; /*0x100a6885f*/
      }
      v19 = *v9; /*0x100a67b29*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x100a67b2c*/
      v20 = v85[0]; /*0x100a67b31*/
      v21 = (char *)v92; /*0x100a67b3d*/
      *((_DWORD *)v92 + 7) = *(_DWORD *)((char *)v85 + 3); /*0x100a67b44*/
      *(_DWORD *)(v21 + 25) = v20; /*0x100a67b47*/
      *((_QWORD *)v21 + 1) = v16; /*0x100a67b4a*/
      *((_QWORD *)v21 + 2) = v17; /*0x100a67b4e*/
      v21[24] = v18; /*0x100a67b52*/
      v2 = v21; /*0x100a67b56*/
      *(_QWORD *)v21 = 2; /*0x100a67b59*/
LABEL_12:
      if ( !v120 /*0x100a68838*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v19) )
      {
        *((_BYTE *)v115 + 8) = 1; /*0x100a68849*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v115); /*0x100a67b8a*/
      return v2; /*0x100a67b8f*/
    }
  }
  v25 = (const void *)v9[27]; /*0x100a67d56*/
  v26 = v9[28]; /*0x100a67d5d*/
  if ( v26 ) /*0x100a67d67*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v7, v11); /*0x100a67d69*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v26, 1); /*0x100a67d76*/
    if ( !v27 ) /*0x100a67d7e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v26); /*0x100a67d88*/
  }
  else
  {
    v27 = 1; /*0x100a67d92*/
  }
  v106 = (__int64 *)v27; /*0x100a67d97*/
  v28 = v27; /*0x100a67d9e*/
  v108 = v26; /*0x100a67da4*/
  memcpy((void *)v27, v25, v26); /*0x100a67dae*/
  if ( !v15 /*0x100a68869*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v28) )
  {
    *((_BYTE *)v9 + 8) = 1; /*0x100a68876*/
  }
  v29 = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x100a67dd8*/
  LOBYTE(v29) = 1; /*0x100a67ddd*/
  v121 = v29; /*0x100a67ddf*/
  std::path::Path::_join::hb1a495d4f06b13b8(v85, v106, v108, &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_236, 24); /*0x100a67e07*/
  v30 = v85[1]; /*0x100a67e0c*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h303ea95e4bf2b86e( /*0x100a67e31*/
    __src,
    v85[1],
    v85[2],
    "account transition",
    18);
  v31 = __src[0]; /*0x100a67e36*/
  v32 = __src[1]; /*0x100a67e3d*/
  if ( __src[0] != 11 ) /*0x100a67e48*/
  {
    v33 = (_DWORD *)&__src[1] + 1; /*0x100a67e4a*/
    v34 = (_DWORD *)&v86[1] + 1; /*0x100a67e51*/
    for ( i = 21; i; --i ) /*0x100a67e58*/
      *v34++ = *v33++; /*0x100a67e5d*/
  }
  LODWORD(v86[1]) = v32; /*0x100a67e5f*/
  v86[0] = v31; /*0x100a67e66*/
  if ( v85[0] ) /*0x100a67e77*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v85[0], 1); /*0x100a67e81*/
  if ( (_DWORD)v31 != 11 ) /*0x100a67e8a*/
  {
    qmemcpy(__src, v86, 0x60u); /*0x100a682ad*/
    *(_QWORD *)&__dst[0] = 0; /*0x100a682b0*/
    *((_QWORD *)&__dst[0] + 1) = 1; /*0x100a682bb*/
    *(_QWORD *)&__dst[1] = 0; /*0x100a682c6*/
    v85[2] = 1610612768; /*0x100a682d1*/
    v85[0] = __dst; /*0x100a682e3*/
    v85[1] = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a682f1*/
    v45 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a68302*/
            __src,
            v85);
    v2 = v92; /*0x100a68309*/
    if ( v45 ) /*0x100a68310*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a6889e*/
        &anon_442098b8dbdde10fede7d79fc85e0df3_291,
        55,
        v122,
        &anon_442098b8dbdde10fede7d79fc85e0df3_301,
        &anon_442098b8dbdde10fede7d79fc85e0df3_293);
    v46 = *(_QWORD *)&__dst[0]; /*0x100a68316*/
    v47 = DWORD2(__dst[0]); /*0x100a6831d*/
    v91[0] = *(_QWORD *)((char *)__dst + 12); /*0x100a6832b*/
    LODWORD(v91[1]) = DWORD1(__dst[1]); /*0x100a68338*/
    v19 = (unsigned __int64)v86; /*0x100a6833e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v86); /*0x100a68345*/
    *((_DWORD *)v2 + 7) = v91[1]; /*0x100a68350*/
    *(_QWORD *)((char *)v2 + 20) = v91[0]; /*0x100a6835c*/
    v2[1] = v46; /*0x100a68361*/
    *((_DWORD *)v2 + 4) = v47; /*0x100a68366*/
    *v2 = 2; /*0x100a6836b*/
    if ( v108 ) /*0x100a6837d*/
    {
      v19 = (unsigned __int64)v106; /*0x100a68388*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v108, 1); /*0x100a6838f*/
    }
    goto LABEL_12; /*0x100a68394*/
  }
  v119 = v32; /*0x100a67e97*/
  v36 = std::time::Instant::elapsed::h457f209775ed485c(&v101); /*0x100a67e9b*/
  v2 = v92; /*0x100a67ea0*/
  __dst[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v36 + v37 / 0xF4240uLL; /*0x100a67ec5*/
  v85[0] = "status=pendingquiet_acquiredstatus=readydisk_committed"; /*0x100a67eda*/
  v85[1] = 14; /*0x100a67ee1*/
  __src[0] = (__int64)v100; /*0x100a67ef3*/
  __src[1] = (__int64)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c; /*0x100a67f01*/
  __src[2] = (__int64)__dst; /*0x100a67f0f*/
  __src[3] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100a67f1d*/
  __src[4] = (__int64)v85; /*0x100a67f24*/
  __src[5] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a67f32*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &anon_442098b8dbdde10fede7d79fc85e0df3_188, __src); /*0x100a67f4e*/
  codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x100a67f72*/
    &anon_442098b8dbdde10fede7d79fc85e0df3_189,
    14,
    "quiet_acquire_startedstatus=pendingquiet_acquiredstatus=readydisk_committed",
    21,
    v86);
  codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h5aa013ead7c3a02c(v86, 5, 0, 0, 0, v4); /*0x100a67f8a*/
  if ( LODWORD(v86[0]) != 11 ) /*0x100a67f96*/
  {
    qmemcpy(__src, v86, 0x60u); /*0x100a683af*/
    *(_QWORD *)&__dst[0] = 0; /*0x100a683b2*/
    *((_QWORD *)&__dst[0] + 1) = 1; /*0x100a683bd*/
    *(_QWORD *)&__dst[1] = 0; /*0x100a683c8*/
    v85[2] = 1610612768; /*0x100a683d3*/
    v85[0] = __dst; /*0x100a683de*/
    v85[1] = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a683ec*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a683fd*/
                            __src,
                            v85) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a688c6*/
        &anon_442098b8dbdde10fede7d79fc85e0df3_291,
        55,
        v122,
        &anon_442098b8dbdde10fede7d79fc85e0df3_301,
        &anon_442098b8dbdde10fede7d79fc85e0df3_293);
    v48 = __dst[0]; /*0x100a68411*/
    v49 = *(_QWORD *)&__dst[1]; /*0x100a68418*/
    v91[0] = codexmate_lib::commands::accounts::switch_error_code::h64ed5d93ad8f3d36(*((_QWORD *)&__dst[0] + 1)); /*0x100a6842a*/
    v91[1] = v50; /*0x100a68431*/
    *(_QWORD *)&__dst[0] = v91; /*0x100a6843f*/
    *((_QWORD *)&__dst[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a6844d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v85, &unk_101905C34, __dst); /*0x100a68469*/
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::hac8dad46c3cbffdf( /*0x100a68488*/
      (__int64)v100,
      (__int64)"quiet_acquire_failed",
      20,
      v85);
    *(_OWORD *)(v2 + 1) = v48; /*0x100a6848d*/
    v2[3] = v49; /*0x100a68497*/
    *v2 = 2; /*0x100a6849c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v86); /*0x100a684ab*/
    goto LABEL_65; /*0x100a684b0*/
  }
  v99 = v86[7]; /*0x100a67fa3*/
  v98 = v86[6]; /*0x100a67fb1*/
  v97 = v86[5]; /*0x100a67fbf*/
  v96 = v86[4]; /*0x100a67fcd*/
  v95 = v86[3]; /*0x100a67fdb*/
  v94 = v86[2]; /*0x100a67ff0*/
  v93 = v86[1]; /*0x100a67ff7*/
  v38 = std::time::Instant::elapsed::h457f209775ed485c(&v101); /*0x100a68005*/
  __dst[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v38 + v39 / 0xF4240uLL; /*0x100a68028*/
  v85[0] = "status=readydisk_committed"; /*0x100a6803d*/
  v85[1] = 12; /*0x100a68044*/
  __src[0] = (__int64)v100; /*0x100a68056*/
  __src[1] = (__int64)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c; /*0x100a68064*/
  __src[2] = (__int64)__dst; /*0x100a6806b*/
  __src[3] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100a68072*/
  __src[4] = (__int64)v85; /*0x100a68079*/
  __src[5] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a68087*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &anon_442098b8dbdde10fede7d79fc85e0df3_188, __src); /*0x100a680a3*/
  codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x100a680c7*/
    &anon_442098b8dbdde10fede7d79fc85e0df3_189,
    14,
    "quiet_acquiredstatus=readydisk_committed",
    14,
    v86);
  v41 = codexmate_lib::commands::accounts::capture_switch_rollback_state::h8bd73997a51830c5((__int64)__src, v5); /*0x100a680d6*/
  if ( __src[0] == 0x8000000000000000LL ) /*0x100a680ef*/
  {
    v111 = __src[3]; /*0x100a680fc*/
    v110 = __src[2]; /*0x100a6810e*/
    v109 = __src[1]; /*0x100a68112*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v5, v40); /*0x100a68119*/
    v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100a68128*/
    if ( !v42 ) /*0x100a68130*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100a688da*/
    v43 = (_QWORD *)v42; /*0x100a68136*/
    v86[0] = (__int64)&v109; /*0x100a68140*/
    v86[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a6814e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v112, &unk_101905D81, v86); /*0x100a68167*/
    v43[2] = v114; /*0x100a68170*/
    v44 = (__int64)v112; /*0x100a68174*/
    v43[1] = v113; /*0x100a6817c*/
    *v43 = v44; /*0x100a68180*/
    v116 = 1; /*0x100a68183*/
    v117 = (__int64)v43; /*0x100a6818b*/
    v118 = 1; /*0x100a6818f*/
    v86[6] = v99; /*0x100a6819e*/
    v86[5] = v98; /*0x100a681ac*/
    v86[4] = v97; /*0x100a681ba*/
    v86[3] = v96; /*0x100a681c8*/
    v86[2] = v95; /*0x100a681d6*/
    v86[1] = v94; /*0x100a681eb*/
    v86[0] = v93; /*0x100a681f2*/
    codexmate_lib::platform::process::CodexTransitionFence::finish::h2190d63a15b320e1(v85, v86, v41); /*0x100a6820a*/
    if ( LODWORD(v85[0]) == 11 ) /*0x100a68216*/
    {
      codexmate_lib::platform::process::CodexProcessLifecycle::launch::hf3e174da227cae9f(v85); /*0x100a68223*/
      if ( LODWORD(v85[0]) != 11 ) /*0x100a6822f*/
      {
        qmemcpy(v86, v85, 0x60u); /*0x100a68244*/
        v103 = v86; /*0x100a68247*/
        v104 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x100a68255*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v91, &unk_101905C9F, &v103); /*0x100a68271*/
        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hb8bb194c206a063c(&v116, v91); /*0x100a68281*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v86); /*0x100a6828d*/
      }
    }
    else
    {
      qmemcpy(v86, v85, 0x60u); /*0x100a6861e*/
      v103 = v86; /*0x100a68621*/
      v104 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x100a6862f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v91, &unk_101905DA4, &v103); /*0x100a6864b*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hb8bb194c206a063c(&v116, v91); /*0x100a6865b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v86); /*0x100a68667*/
    }
    v60 = std::time::Instant::elapsed::h457f209775ed485c(&v101); /*0x100a68673*/
    v107 = 0x3E8 * (unsigned __int128)(unsigned __int64)v60 + v61 / 0xF4240uLL; /*0x100a68696*/
    v103 = (__int64 *)"code=SWITCH_ROLLBACK_CAPTURE_FAILEDquiet_acquire_failed"; /*0x100a686ab*/
    v104 = 35; /*0x100a686b2*/
    v86[0] = (__int64)v100; /*0x100a686c4*/
    v86[1] = (__int64)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c; /*0x100a686d2*/
    v86[2] = (__int64)&v107; /*0x100a686e0*/
    v86[3] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100a686e7*/
    v86[4] = (__int64)&v103; /*0x100a686f5*/
    v86[5] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a68703*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v85, &anon_442098b8dbdde10fede7d79fc85e0df3_188, v86); /*0x100a6871f*/
    codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x100a68743*/
      &anon_442098b8dbdde10fede7d79fc85e0df3_189,
      14,
      &unk_1017934FC,
      6,
      v85);
    alloc::str::join_generic_copy::h877a7dfcc3252013(v86, v117, v118, &unk_101793502, 3); /*0x100a68764*/
    v2[3] = v86[2]; /*0x100a68770*/
    v62 = v86[0]; /*0x100a68775*/
    v2[2] = v86[1]; /*0x100a68783*/
    v2[1] = v62; /*0x100a68788*/
    *v2 = 2; /*0x100a6878d*/
    v63 = v117; /*0x100a68795*/
    v64 = v118; /*0x100a68799*/
    if ( v118 ) /*0x100a687a0*/
    {
      v65 = (_QWORD *)(v117 + 8); /*0x100a687a2*/
      do /*0x100a687b7*/
      {
        v66 = *(v65 - 1); /*0x100a687b9*/
        if ( v66 ) /*0x100a687c0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v65, v66, 1); /*0x100a687ca*/
        v65 += 3; /*0x100a687b0*/
        --v64; /*0x100a687b4*/
      }
      while ( v64 ); /*0x100a687b7*/
    }
    if ( v116 ) /*0x100a687d8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 24 * v116, 8); /*0x100a687ea*/
    if ( v109 ) /*0x100a687f9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v109, 1); /*0x100a68804*/
LABEL_65:
    v67 = 1; /*0x100a68809*/
    goto LABEL_89; /*0x100a6880b*/
  }
  v89 = 0x8000000000000000LL; /*0x100a684b5*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x100a684cf*/
  v51 = (_QWORD *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(v5 + 4872) + 16LL); /*0x100a684df*/
  v52 = v51; /*0x100a684e4*/
  if ( !v51 ) /*0x100a684ea*/
  {
    v91[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100a688eb*/
    v91[1] = 76; /*0x100a688f2*/
    __src[0] = (__int64)v91; /*0x100a68904*/
    __src[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a68912*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a6892e*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      __src,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v53 = *v51; /*0x100a684f0*/
  if ( !*v51 ) /*0x100a684f0*/
    v53 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v51); /*0x100a68940*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v41); /*0x100a684fc*/
  v56 = 0x7FFFFFFFFFFFFFFFLL; /*0x100a6850b*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a68518*/
  {
    v68 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v53); /*0x100a68948*/
    LOBYTE(v68) = v68 ^ 1; /*0x100a68953*/
    v121 = v68; /*0x100a68955*/
    if ( *((_BYTE *)v52 + 8) ) /*0x100a68958*/
      goto LABEL_51; /*0x100a6895e*/
  }
  else
  {
    v121 = 0; /*0x100a6851e*/
    if ( *((_BYTE *)v52 + 8) ) /*0x100a68525*/
    {
LABEL_51:
      v91[0] = 0; /*0x100a68531*/
      v91[1] = 1; /*0x100a6853c*/
      v91[2] = 0; /*0x100a68547*/
      __src[2] = 1610612768; /*0x100a68552*/
      __src[0] = (__int64)v91; /*0x100a68564*/
      __src[1] = (__int64)&anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a68572*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x100a6858c*/
                              &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                              41,
                              __src,
                              v56,
                              v54,
                              v55) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a69165*/
          &anon_442098b8dbdde10fede7d79fc85e0df3_291,
          55,
          v122,
          &anon_442098b8dbdde10fede7d79fc85e0df3_301,
          &anon_442098b8dbdde10fede7d79fc85e0df3_293);
      v57 = v91[0]; /*0x100a68599*/
      v58 = v91[1]; /*0x100a685a0*/
      v59 = v91[2]; /*0x100a685a7*/
      LODWORD(v103) = *(_DWORD *)((char *)&v91[2] + 1); /*0x100a685b5*/
      *(_DWORD *)((char *)&v103 + 3) = HIDWORD(v91[2]); /*0x100a685c1*/
      if ( !(_BYTE)v121 /*0x100a69186*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
      {
        *((_BYTE *)v52 + 8) = 1; /*0x100a69193*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v52); /*0x100a685ed*/
      *(_DWORD *)((char *)&v107 + 3) = *(_DWORD *)((char *)&v103 + 3); /*0x100a685fe*/
      LODWORD(v107) = (_DWORD)v103; /*0x100a68604*/
      goto LABEL_85; /*0x100a6860a*/
    }
  }
  codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::hef8f4d396de4dda7(__src); /*0x100a68972*/
  v90 = __src[0]; /*0x100a68982*/
  if ( __src[0] == 2 ) /*0x100a68989*/
  {
    qmemcpy(v91, &__src[1], sizeof(v91)); /*0x100a689a8*/
    v116 = 0; /*0x100a689ab*/
    v117 = 1; /*0x100a689b3*/
    v118 = 0; /*0x100a689bb*/
    v114 = 1610612768; /*0x100a689c3*/
    v112 = &v116; /*0x100a689cf*/
    v113 = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a689da*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a689e5*/
                            v91,
                            &v112) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a691ba*/
        &anon_442098b8dbdde10fede7d79fc85e0df3_291,
        55,
        v122,
        &anon_442098b8dbdde10fede7d79fc85e0df3_301,
        &anon_442098b8dbdde10fede7d79fc85e0df3_293);
    v69 = &__src[1]; /*0x100a689f2*/
    v57 = v116; /*0x100a689f5*/
    v58 = v117; /*0x100a689f9*/
    v59 = v118; /*0x100a689fd*/
    LODWORD(v109) = *(_DWORD *)((char *)&v118 + 1); /*0x100a68a05*/
    *(_DWORD *)((char *)&v109 + 3) = HIDWORD(v118); /*0x100a68a0e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&__src[1]); /*0x100a68a14*/
    LODWORD(v107) = v109; /*0x100a68a25*/
    *(_DWORD *)((char *)&v107 + 3) = *(_DWORD *)((char *)&v109 + 3); /*0x100a68a2b*/
  }
  else
  {
    v57 = __src[1]; /*0x100a68a33*/
    v58 = __src[2]; /*0x100a68a3a*/
    v59 = __src[3]; /*0x100a68a41*/
    LODWORD(v107) = *(_DWORD *)((char *)&__src[3] + 1); /*0x100a68a4f*/
    *(_DWORD *)((char *)&v107 + 3) = HIDWORD(__src[3]); /*0x100a68a5b*/
    v69 = v86; /*0x100a68a68*/
    memcpy(v86, &__src[4], 0x1E8u); /*0x100a68a74*/
  }
  if ( !(_BYTE)v121 /*0x100a691c1*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v69) )
  {
    *((_BYTE *)v52 + 8) = 1; /*0x100a691ce*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v52); /*0x100a68a9f*/
  if ( (_DWORD)v90 != 2 ) /*0x100a68aae*/
  {
    HIDWORD(v85[3]) = *(_DWORD *)((char *)&v107 + 3); /*0x100a68c4c*/
    *(_DWORD *)((char *)&v85[3] + 1) = v107; /*0x100a68c52*/
    v71 = memcpy(&v85[4], v86, 0x1E8u); /*0x100a68c6b*/
    v85[0] = v90; /*0x100a68c70*/
    v85[1] = v57; /*0x100a68c77*/
    v85[2] = v58; /*0x100a68c7e*/
    LOBYTE(v85[3]) = v59; /*0x100a68c85*/
    LOBYTE(v71) = 1; /*0x100a68c9d*/
    v121 = (int)v71; /*0x100a68c9f*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v85[48]); /*0x100a68ca2*/
    v86[2] = __src[2]; /*0x100a68cae*/
    v86[1] = __src[1]; /*0x100a68cc3*/
    v86[0] = __src[0]; /*0x100a68cca*/
    if ( 2LL * *((_QWORD *)&__dst[13] + 1) ) /*0x100a68cdf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[14], *((_QWORD *)&__dst[13] + 1), 1); /*0x100a68cf8*/
    __dst[14] = *(_OWORD *)&v86[1]; /*0x100a68d16*/
    *((_QWORD *)&__dst[13] + 1) = v86[0]; /*0x100a68d1a*/
    __src[0] = (__int64)&v85[54]; /*0x100a68d2b*/
    v72 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100a68d32*/
    __src[1] = (__int64)_$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100a68d39*/
    __src[2] = (__int64)&v85[54] + 1; /*0x100a68d40*/
    __src[3] = (__int64)_$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100a68d47*/
    LOBYTE(v72) = 1; /*0x100a68d66*/
    v121 = (int)v72; /*0x100a68d68*/
    v73 = alloc::fmt::format::format_inner::h3c16c74008a310d4(&v103, &unk_101905D5D, __src); /*0x100a68d6b*/
    LOBYTE(v73) = 1; /*0x100a68d70*/
    v121 = v73; /*0x100a68d72*/
    v74 = codexmate_lib::commands::accounts::AccountSwitchTrace::event::hac8dad46c3cbffdf( /*0x100a68d95*/
            (__int64)v100,
            (__int64)"disk_committed",
            14,
            &v103);
    v91[0] = v105; /*0x100a68daf*/
    v91[1] = v85[49]; /*0x100a68db6*/
    v91[2] = v85[50]; /*0x100a68dbd*/
    v91[3] = v100; /*0x100a68dc4*/
    v86[6] = v99; /*0x100a68dd2*/
    v86[5] = v98; /*0x100a68de0*/
    v86[4] = v97; /*0x100a68dee*/
    v86[3] = v96; /*0x100a68dfc*/
    v86[2] = v95; /*0x100a68e0a*/
    v86[1] = v94; /*0x100a68e1f*/
    v86[0] = v93; /*0x100a68e26*/
    codexmate_lib::commands::account_transition::finish_account_transition::h3c321968d0760a6a( /*0x100a68e49*/
      __src,
      (__int64)v122,
      v86,
      v91);
    v75 = __src[0]; /*0x100a68e4e*/
    if ( __src[0] == v89 ) /*0x100a68e5c*/
    {
      v76 = (_DWORD *)__src[4]; /*0x100a68e77*/
      v77 = __src[5]; /*0x100a68e7e*/
      v78 = __src[2] + 48 * __src[3]; /*0x100a68e94*/
      __src[0] = __src[2]; /*0x100a68e97*/
      __src[2] = __src[1]; /*0x100a68e9e*/
      __src[1] = __src[0]; /*0x100a68ea5*/
      __src[3] = v78; /*0x100a68eac*/
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h83e0235e6d3930d8( /*0x100a68ec0*/
        &v85[61],
        __src,
        v74);
      if ( v77 == 7 && !(*v76 ^ 0x63637573 | *(_DWORD *)((char *)v76 + 3) ^ 0x73736563) ) /*0x100a68eda*/
        alloc::vec::Vec$LT$T$C$A$GT$::retain::h72c4a550fc184229(&v85[61]); /*0x100a68ee1*/
      v121 = 0; /*0x100a68eed*/
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h8dc8b9ca833ed15a( /*0x100a68ef8*/
        v115,
        v120,
        v74);
      memcpy(__src, v85, sizeof(__src)); /*0x100a68f13*/
      codexmate_lib::commands::accounts::finalize_committed_switch::h0477870dd4fca18c(v86); /*0x100a68f36*/
      memcpy(v2, v86, 0x208u); /*0x100a68f4a*/
      core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::hc751cc4814b1c22d(__dst); /*0x100a68f56*/
      v121 = 0; /*0x100a68f5b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..AccountSnapshotLock$GT$::h5bb0b7248635855d( /*0x100a68f66*/
        &v119,
        v86,
        v79);
      if ( v108 ) /*0x100a68f75*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v108, 1); /*0x100a68f87*/
      return v2; /*0x100a68f8c*/
    }
    v80 = __src[1]; /*0x100a68f91*/
    v81 = __src[2]; /*0x100a68f98*/
    if ( BYTE2(__src[9]) == 2 ) /*0x100a68fa8*/
    {
      v116 = codexmate_lib::commands::accounts::switch_error_code::h64ed5d93ad8f3d36(__src[1]); /*0x100a68fb5*/
      v117 = v82; /*0x100a68fb9*/
      v112 = &v116; /*0x100a68fc1*/
      v113 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a68fcc*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_101905C34, &v112); /*0x100a68fe2*/
      v83 = codexmate_lib::commands::accounts::AccountSwitchTrace::event::hac8dad46c3cbffdf( /*0x100a69001*/
              (__int64)v100,
              (__int64)&unk_1017934FC,
              6,
              v86);
      v109 = v75; /*0x100a69006*/
      v110 = v80; /*0x100a6900d*/
      v111 = v81; /*0x100a69011*/
    }
    else
    {
      v86[6] = __src[9]; /*0x100a69021*/
      v86[5] = __src[8]; /*0x100a6902f*/
      v86[4] = __src[7]; /*0x100a6903d*/
      v86[3] = __src[6]; /*0x100a6904b*/
      v86[2] = __src[5]; /*0x100a69059*/
      v86[1] = __src[4]; /*0x100a6906e*/
      v86[0] = __src[3]; /*0x100a69075*/
      v112 = (__int64 *)__src[0]; /*0x100a6909b*/
      v113 = (__int64 (__fastcall **)())__src[1]; /*0x100a6909f*/
      v114 = __src[2]; /*0x100a690a3*/
      v83 = codexmate_lib::commands::accounts::finish_switch_failure_with_client::h8e9e9664f165990d( /*0x100a690cb*/
              &v109,
              (__int64)v100,
              (__int64)v122,
              v86,
              (__int64 *)&v112,
              __dst,
              v74);
    }
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h8dc8b9ca833ed15a( /*0x100a690d8*/
      v115,
      v120,
      v83);
    v114 = v111; /*0x100a690e1*/
    v113 = (__int64 (__fastcall **)())v110; /*0x100a690f0*/
    v112 = (__int64 *)v109; /*0x100a690f4*/
    codexmate_lib::commands::accounts::finalize_failed_switch_runtime::ha48899e5d34c1c8b(&v116, v105, v100, &v112); /*0x100a6910e*/
    v2[3] = v118; /*0x100a69117*/
    v84 = v116; /*0x100a6911c*/
    v2[2] = v117; /*0x100a69124*/
    v2[1] = v84; /*0x100a69129*/
    *v2 = 2; /*0x100a6912e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$GT$::h48989ada13754e22(v85); /*0x100a6913d*/
    goto LABEL_88; /*0x100a69142*/
  }
LABEL_85:
  v116 = v57; /*0x100a68ab4*/
  v117 = v58; /*0x100a68ab8*/
  LOBYTE(v118) = v59; /*0x100a68abc*/
  *(_DWORD *)((char *)&v118 + 1) = v107; /*0x100a68acc*/
  HIDWORD(v118) = *(_DWORD *)((char *)&v107 + 3); /*0x100a68acf*/
  __src[6] = v99; /*0x100a68ad9*/
  __src[5] = v98; /*0x100a68ae7*/
  __src[4] = v97; /*0x100a68af5*/
  __src[3] = v96; /*0x100a68b03*/
  __src[2] = v95; /*0x100a68b11*/
  __src[1] = v94; /*0x100a68b26*/
  __src[0] = v93; /*0x100a68b2d*/
  codexmate_lib::commands::accounts::finish_switch_failure_with_client::h8e9e9664f165990d( /*0x100a68b55*/
    &v112,
    (__int64)v100,
    (__int64)v122,
    __src,
    &v116,
    __dst,
    v41);
  if ( !v120 /*0x100a6916c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v112) )
  {
    *((_BYTE *)v115 + 8) = 1; /*0x100a6917d*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v115); /*0x100a68b84*/
  __src[2] = v114; /*0x100a68b8d*/
  __src[1] = (__int64)v113; /*0x100a68b9c*/
  __src[0] = (__int64)v112; /*0x100a68ba3*/
  codexmate_lib::commands::accounts::finalize_failed_switch_runtime::ha48899e5d34c1c8b(v91, v105, v100, __src); /*0x100a68bc6*/
  v2[3] = v91[2]; /*0x100a68bd2*/
  v70 = v91[0]; /*0x100a68bd7*/
  v2[2] = v91[1]; /*0x100a68be5*/
  v2[1] = v70; /*0x100a68bea*/
  *v2 = 2; /*0x100a68bef*/
LABEL_88:
  core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::hc751cc4814b1c22d(__dst); /*0x100a68bf7*/
  v67 = 0; /*0x100a68c03*/
LABEL_89:
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c5db97a3e0d565(&v119); /*0x100a68c05*/
  v19 = v119; /*0x100a68c0e*/
  close_NOCANCEL(v119); /*0x100a68c11*/
  if ( v108 ) /*0x100a68c20*/
  {
    v19 = (unsigned __int64)v106; /*0x100a68c27*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v108, 1); /*0x100a68c2e*/
  }
  if ( v67 ) /*0x100a68c35*/
    goto LABEL_12; /*0x100a68c35*/
  return v2; /*0x100a67c5e*/
}