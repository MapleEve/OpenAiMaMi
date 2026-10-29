// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::sessions::detail::load_session_messages::hf2ead52abff4cb51; addr: 0x1007ae310; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
char *__fastcall codexmate_lib::core::sessions::detail::load_session_messages::hf2ead52abff4cb51(
        char *a1,
        size_t a2,
        __int64 a3,
        __int64 a4,
        double a5)
{
  char *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  unsigned __int8 *v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rsi
  signed __int64 v20; // r15
  unsigned __int8 *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rax
  char v34; // r15
  __int64 v35; // r14
  int v36; // ebx
  char v37; // al
  char *v38; // r8
  __int64 v39; // r12
  __int64 v40; // r13
  unsigned __int8 v41; // bl
  unsigned __int64 v42; // r12
  char *v43; // rdx
  __int64 v44; // rax
  char v45; // al
  char *v46; // rsi
  __int64 v47; // rcx
  int v48; // ecx
  int v49; // edx
  __int64 v50; // rax
  __int64 v52; // rsi
  __int64 v53; // r12
  unsigned __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // al
  __int64 v60; // rcx
  int v61; // ecx
  __int64 v62; // rcx
  _BYTE v63[16]; // [rsp+0h] [rbp-590h] BYREF
  __int64 v64; // [rsp+10h] [rbp-580h]
  _QWORD v65[3]; // [rsp+18h] [rbp-578h] BYREF
  _QWORD v66[12]; // [rsp+30h] [rbp-560h] BYREF
  __int64 v67; // [rsp+90h] [rbp-500h] BYREF
  __int64 v68; // [rsp+98h] [rbp-4F8h]
  _QWORD v69[54]; // [rsp+A0h] [rbp-4F0h] BYREF
  _QWORD v70[12]; // [rsp+250h] [rbp-340h] BYREF
  _QWORD *v71; // [rsp+2B0h] [rbp-2E0h]
  _QWORD v72[16]; // [rsp+2B8h] [rbp-2D8h] BYREF
  __int64 v73; // [rsp+338h] [rbp-258h] BYREF
  _QWORD v74[12]; // [rsp+340h] [rbp-250h] BYREF
  _QWORD __src[54]; // [rsp+3A0h] [rbp-1F0h] BYREF
  __int64 v76; // [rsp+550h] [rbp-40h]
  char *v77; // [rsp+558h] [rbp-38h]
  char v78; // [rsp+567h] [rbp-29h]

  v77 = a1; /*0x1007ae32d*/
  v67 = a3; /*0x1007ae331*/
  v68 = a4; /*0x1007ae338*/
  codexmate_lib::core::codex_app_server::AppServerClient::connect::h7c1c93bed08b3597((__int64)v69, a2); /*0x1007ae346*/
  qmemcpy(v70, &v69[1], sizeof(v70)); /*0x1007ae365*/
  if ( v69[0] == 3 ) /*0x1007ae36c*/
  {
    qmemcpy(v74, v70, sizeof(v74)); /*0x1007ae384*/
    qmemcpy(v66, v74, sizeof(v66)); /*0x1007ae396*/
LABEL_4:
    v8 = v77; /*0x1007ae434*/
    qmemcpy(v77, v66, 0x60u); /*0x1007ae447*/
    goto LABEL_5; /*0x1007ae447*/
  }
  v72[15] = v69[15]; /*0x1007ae3a5*/
  v72[14] = v69[14]; /*0x1007ae3ba*/
  v72[13] = v69[13]; /*0x1007ae3c1*/
  qmemcpy(&v72[1], v70, 0x60u); /*0x1007ae3db*/
  v72[0] = v69[0]; /*0x1007ae3de*/
  codexmate_lib::core::codex_app_server::read_thread_with_client::h0e29c2bbc893fe69(&v73, v72, a3, a4, 0); /*0x1007ae3fc*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..codex_app_server..AppServerClient$GT$::h82ca92cb16e6ce22(v72); /*0x1007ae408*/
  qmemcpy(v66, v74, sizeof(v66)); /*0x1007ae427*/
  if ( v73 == 2 ) /*0x1007ae42e*/
    goto LABEL_4; /*0x1007ae42e*/
  memcpy(&v69[13], __src, 0xF8u); /*0x1007ae69b*/
  qmemcpy(&v69[1], v66, 0x60u); /*0x1007ae6b3*/
  v69[0] = v73; /*0x1007ae6b6*/
  if ( __OFSUB__(0, v69[17]) /*0x1007ae791*/
    || (v16 = v69[18],
        v19 = v69[19],
        v17 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6((unsigned __int8 *)v69[18], v69[19]),
        LOBYTE(v19) = v17 == nullptr || v18 == 0,
        (_BYTE)v19 == 1) )
  {
    v16 = v69[9]; /*0x1007ae793*/
    v19 = v69[10]; /*0x1007ae79a*/
    v17 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6((unsigned __int8 *)v69[9], v69[10]); /*0x1007ae7a1*/
    if ( !v18 ) /*0x1007ae7a9*/
      v17 = nullptr; /*0x1007ae7a9*/
  }
  v20 = 16; /*0x1007ae7b0*/
  if ( v17 ) /*0x1007ae7b6*/
    v20 = v18; /*0x1007ae7b6*/
  v21 = (unsigned __int8 *)&unk_1016E9EF0; /*0x1007ae7ba*/
  if ( v17 ) /*0x1007ae7c1*/
    v21 = v17; /*0x1007ae7c1*/
  if ( v20 < 0 ) /*0x1007ae7c8*/
  {
    v22 = 0; /*0x1007ae7ca*/
    goto LABEL_24; /*0x1007ae7ca*/
  }
  v71 = &v69[8]; /*0x1007ae7dd*/
  if ( v20 ) /*0x1007ae7e4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v19, v18); /*0x1007ae7ea*/
    v22 = 1; /*0x1007ae7ef*/
    v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x1007ae7fd*/
    if ( !v23 ) /*0x1007ae805*/
LABEL_24:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v20); /*0x1007ae7cd*/
    v24 = v23; /*0x1007ae807*/
  }
  else
  {
    v24 = 1; /*0x1007aec5b*/
  }
  v76 = v24; /*0x1007aec60*/
  memcpy((void *)v24, v21, v20); /*0x1007aec6a*/
  if ( (v69[32] == 0x8000000000000000LL /*0x1007aecc2*/
     || v69[34] != 9
     || *(_QWORD *)v69[33] ^ 0x6574616E69676170LL | *(unsigned __int8 *)(v69[33] + 8LL) ^ 0x64LL)
    && v69[14] != 0x8000000000000000LL )
  {
    v39 = v69[15]; /*0x1007aecc8*/
    v40 = v69[16]; /*0x1007aeccf*/
    if ( (unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b((void *)v69[15], v69[16]) ) /*0x1007aecdc*/
    {
      codexmate_lib::core::sessions::export::load_recent_export_messages::hc4b9084f7330fff7(v70, v39, v40, 300); /*0x1007aecfb*/
      if ( LODWORD(v70[0]) == 11 ) /*0x1007aed07*/
      {
        v41 = v70[4]; /*0x1007aed22*/
        v72[0] = v70[2]; /*0x1007aed30*/
        v72[1] = v70[2]; /*0x1007aed37*/
        v72[2] = v70[1]; /*0x1007aed3e*/
        v72[3] = v70[2] + (v70[3] << 6); /*0x1007aed45*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h58107148a71ffc26( /*0x1007aed5a*/
          v66,
          v72);
        v42 = v66[2]; /*0x1007aed5f*/
        codexmate_lib::core::sessions::detail::bound_messages::h033d68a9f087f302(&v73, v66); /*0x1007aed74*/
        v43 = v77; /*0x1007aed80*/
        *((_QWORD *)v77 + 9) = v74[1]; /*0x1007aed84*/
        v44 = v73; /*0x1007aed88*/
        *((_QWORD *)v43 + 8) = v74[0]; /*0x1007aed96*/
        *((_QWORD *)v43 + 7) = v44; /*0x1007aed9a*/
        v45 = 1; /*0x1007aed9e*/
        if ( !v41 ) /*0x1007aeda5*/
          v45 = v74[2]; /*0x1007aeda7*/
        v46 = v77; /*0x1007aedb4*/
        *((_QWORD *)v77 + 3) = v69[4]; /*0x1007aedb8*/
        v47 = v69[2]; /*0x1007aedbc*/
        *((_QWORD *)v46 + 2) = v69[3]; /*0x1007aedca*/
        *((_QWORD *)v46 + 1) = v47; /*0x1007aedce*/
        v48 = 0x7FFFFFFF; /*0x1007aedd9*/
        if ( v42 < 0x7FFFFFFF ) /*0x1007aedde*/
          v48 = v42; /*0x1007aedde*/
        v49 = v41 ^ 1; /*0x1007aede5*/
        v8 = v46; /*0x1007aede8*/
        *((_QWORD *)v46 + 4) = v20; /*0x1007aedeb*/
        *((_QWORD *)v46 + 5) = v76; /*0x1007aedf3*/
        *((_QWORD *)v46 + 6) = v20; /*0x1007aedf7*/
        *((_DWORD *)v46 + 20) = v49; /*0x1007aedfb*/
        *((_DWORD *)v46 + 21) = v48; /*0x1007aedfe*/
        v46[88] = v45; /*0x1007aee01*/
        *(_QWORD *)v46 = 11; /*0x1007aee04*/
        goto LABEL_177; /*0x1007aee0b*/
      }
      qmemcpy(v72, v70, 0x60u); /*0x1007af144*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1007af155*/
      {
        v66[0] = v72; /*0x1007af15b*/
        v66[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x1007af169*/
        v74[5] = 2; /*0x1007af170*/
        v74[6] = "codexmate_lib::core::sessions::detail"; /*0x1007af182*/
        v74[7] = 37; /*0x1007af189*/
        v74[9] = &unk_1018FE489; /*0x1007af19b*/
        v74[10] = v66; /*0x1007af1a9*/
        v73 = 0; /*0x1007af1b0*/
        v74[0] = "codexmate_lib::core::sessions::detail"; /*0x1007af1bb*/
        v74[1] = 37; /*0x1007af1c2*/
        v74[2] = 0; /*0x1007af1cd*/
        v74[3] = "src/core/sessions/detail.rs"; /*0x1007af1df*/
        v74[4] = 27; /*0x1007af1e6*/
        v74[8] = 0x4800000001LL; /*0x1007af1fb*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v63, &v73); /*0x1007af210*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v72); /*0x1007af21c*/
    }
  }
  if ( v69[32] == 0x8000000000000000LL /*0x1007af25a*/
    || v69[34] != 9
    || *(_QWORD *)v69[33] ^ 0x6574616E69676170LL | *(unsigned __int8 *)(v69[33] + 8LL) ^ 0x64LL )
  {
    codexmate_lib::core::codex_app_server::load_legacy_messages::h5b2ad68829c3dc86(&v73, a2, v69[3], v69[4], 0x12Cu); /*0x1007af281*/
  }
  else
  {
    codexmate_lib::core::codex_app_server::load_paginated_messages::h708cd05f9c40da3d( /*0x1007af7f2*/
      &v73,
      a5,
      a2,
      v69[3],
      v69[4],
      0x12Cu);
  }
  v52 = v73; /*0x1007af286*/
  v53 = v74[0]; /*0x1007af28d*/
  v54 = v74[1]; /*0x1007af294*/
  v55 = v74[2]; /*0x1007af29b*/
  v56 = v74[3]; /*0x1007af2a2*/
  v57 = v74[4]; /*0x1007af2a9*/
  v78 = v74[5]; /*0x1007af2b7*/
  if ( v73 == 11 ) /*0x1007af2bf*/
  {
    v72[0] = v74[3]; /*0x1007af2cc*/
    v72[1] = v74[3]; /*0x1007af2d3*/
    v72[2] = v74[2]; /*0x1007af2da*/
    v72[3] = v74[3] + (v74[4] << 6); /*0x1007af2e1*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h402bfde02fed2e6e( /*0x1007af2f6*/
      v70,
      v72);
    codexmate_lib::core::sessions::detail::bound_messages::h033d68a9f087f302(&v73, v70); /*0x1007af309*/
    v8 = v77; /*0x1007af315*/
    *((_QWORD *)v77 + 9) = v74[1]; /*0x1007af319*/
    v58 = v73; /*0x1007af31d*/
    *((_QWORD *)v8 + 8) = v74[0]; /*0x1007af32b*/
    *((_QWORD *)v8 + 7) = v58; /*0x1007af32f*/
    v59 = 1; /*0x1007af333*/
    if ( (v78 & 1) == 0 ) /*0x1007af33c*/
      v59 = v74[2]; /*0x1007af33e*/
    *((_QWORD *)v8 + 3) = v69[4]; /*0x1007af34b*/
    v60 = v69[2]; /*0x1007af34f*/
    *((_QWORD *)v8 + 2) = v69[3]; /*0x1007af35d*/
    *((_QWORD *)v8 + 1) = v60; /*0x1007af361*/
    v61 = 0x7FFFFFFF; /*0x1007af36c*/
    if ( v54 < 0x7FFFFFFF ) /*0x1007af371*/
      v61 = v54; /*0x1007af371*/
    *((_QWORD *)v8 + 4) = v20; /*0x1007af379*/
    *((_QWORD *)v8 + 5) = v76; /*0x1007af381*/
    *((_QWORD *)v8 + 6) = v20; /*0x1007af385*/
    *((_DWORD *)v8 + 20) = v53 & 1; /*0x1007af389*/
    *((_DWORD *)v8 + 21) = v61; /*0x1007af38d*/
    v8[88] = v59; /*0x1007af390*/
    *(_QWORD *)v8 = 11; /*0x1007af393*/
    if ( v69[5] ) /*0x1007af3a4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[6], v69[5], 1); /*0x1007af3b2*/
    if ( v69[14] != 0x8000000000000000LL && v69[14] ) /*0x1007af3d0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[15], v69[14], 1); /*0x1007af3de*/
    if ( v69[17] != 0x8000000000000000LL && v69[17] ) /*0x1007af3fc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[18], v69[17], 1); /*0x1007af40a*/
    if ( v69[8] ) /*0x1007af419*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[1], v69[8], 1); /*0x1007af42b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v69[38]); /*0x1007af437*/
    if ( v69[20] != 0x8000000000000000LL && v69[20] ) /*0x1007af455*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[21], v69[20], 1); /*0x1007af463*/
    if ( v69[23] != 0x8000000000000000LL && v69[23] ) /*0x1007af481*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[24], v69[23], 1); /*0x1007af48f*/
    if ( v69[26] != 0x8000000000000000LL && v69[26] ) /*0x1007af4ad*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[27], v69[26], 1); /*0x1007af4bb*/
    if ( v69[29] != 0x8000000000000000LL && v69[29] ) /*0x1007af4d9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[30], v69[29], 1); /*0x1007af4e7*/
    if ( v69[32] != 0x8000000000000000LL && v69[32] ) /*0x1007af505*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[33], v69[32], 1); /*0x1007af513*/
    if ( v69[35] >= (__int64)0x8000000000000002LL && v69[35] ) /*0x1007af535*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[36], v69[35], 1); /*0x1007af543*/
    goto LABEL_205; /*0x1007af543*/
  }
  v8 = v77; /*0x1007af560*/
  *((_QWORD *)v77 + 11) = v74[10]; /*0x1007af564*/
  *(_OWORD *)(v8 + 73) = *(_OWORD *)((char *)&v74[8] + 1); /*0x1007af57a*/
  *(_QWORD *)(v8 + 65) = *(_QWORD *)((char *)&v74[7] + 1); /*0x1007af585*/
  *(_OWORD *)(v8 + 49) = *(_OWORD *)((char *)&v74[5] + 1); /*0x1007af59b*/
  *(_QWORD *)v8 = v52; /*0x1007af59f*/
  *((_QWORD *)v8 + 1) = v53; /*0x1007af5a2*/
  *((_QWORD *)v8 + 2) = v54; /*0x1007af5a6*/
  *((_QWORD *)v8 + 3) = v55; /*0x1007af5aa*/
  *((_QWORD *)v8 + 4) = v56; /*0x1007af5ae*/
  *((_QWORD *)v8 + 5) = v57; /*0x1007af5b2*/
  v8[48] = v78; /*0x1007af5ba*/
  if ( v20 ) /*0x1007af5c0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v20, 1); /*0x1007af5ce*/
  if ( v69[2] ) /*0x1007af5dd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[3], v69[2], 1); /*0x1007af5eb*/
LABEL_177:
  if ( v69[5] ) /*0x1007af5fa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[6], v69[5], 1); /*0x1007af608*/
  if ( v69[14] != 0x8000000000000000LL && v69[14] ) /*0x1007af626*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[15], v69[14], 1); /*0x1007af634*/
  if ( v69[17] != 0x8000000000000000LL && v69[17] ) /*0x1007af652*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[18], v69[17], 1); /*0x1007af660*/
  if ( v69[8] ) /*0x1007af66f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[1], v69[8], 1); /*0x1007af681*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v69[38]); /*0x1007af68d*/
  if ( v69[20] != 0x8000000000000000LL && v69[20] ) /*0x1007af6ab*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[21], v69[20], 1); /*0x1007af6b9*/
  if ( v69[23] != 0x8000000000000000LL && v69[23] ) /*0x1007af6d7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[24], v69[23], 1); /*0x1007af6e5*/
  if ( v69[26] != 0x8000000000000000LL && v69[26] ) /*0x1007af703*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[27], v69[26], 1); /*0x1007af711*/
  if ( v69[29] != 0x8000000000000000LL && v69[29] ) /*0x1007af72f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[30], v69[29], 1); /*0x1007af73d*/
  if ( v69[32] != 0x8000000000000000LL && v69[32] ) /*0x1007af75b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[33], v69[32], 1); /*0x1007af769*/
  if ( v69[35] >= (__int64)0x8000000000000002LL && v69[35] ) /*0x1007af78b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[36], v69[35], 1); /*0x1007af799*/
LABEL_205:
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd649dddbb4e075e3(&v69[11]); /*0x1007af79e*/
  if ( v69[11] ) /*0x1007af7b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69[12], 32LL * v69[11], 8); /*0x1007af7ca*/
LABEL_5:
  if ( *(_DWORD *)v8 == 11 ) /*0x1007ae44d*/
    return v8; /*0x1007ae44d*/
  qmemcpy(v69, v8, 0x60u); /*0x1007ae465*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1007ae476*/
  {
    v72[0] = &v67; /*0x1007ae483*/
    v72[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1007ae491*/
    v72[2] = v69; /*0x1007ae498*/
    v72[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x1007ae4a6*/
    v74[5] = 2; /*0x1007ae4ad*/
    v74[6] = "codexmate_lib::core::sessions::detail"; /*0x1007ae4bf*/
    v74[7] = 37; /*0x1007ae4c6*/
    v74[9] = &unk_1018FE4EE; /*0x1007ae4d8*/
    v74[10] = v72; /*0x1007ae4e6*/
    v73 = 0; /*0x1007ae4ed*/
    v74[0] = "codexmate_lib::core::sessions::detail"; /*0x1007ae4f8*/
    v74[1] = 37; /*0x1007ae4ff*/
    v74[2] = 0; /*0x1007ae50a*/
    v74[3] = "src/core/sessions/detail.rs"; /*0x1007ae51c*/
    v74[4] = 27; /*0x1007ae523*/
    v74[8] = 0x1200000001LL; /*0x1007ae538*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v63, &v73); /*0x1007ae54d*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v69); /*0x1007ae559*/
  codexmate_lib::core::sessions::load_single_session_from_storage::h2b6a556fec29320a(&v73, a2, v67, v68); /*0x1007ae576*/
  v9 = v74[0]; /*0x1007ae582*/
  v10 = v74[1]; /*0x1007ae589*/
  v11 = v74[2]; /*0x1007ae590*/
  v12 = v74[3]; /*0x1007ae597*/
  v70[0] = v74[4]; /*0x1007ae5a5*/
  v70[1] = v74[5]; /*0x1007ae5b3*/
  v70[2] = v74[6]; /*0x1007ae5c1*/
  v70[3] = v74[7]; /*0x1007ae5cf*/
  v70[4] = v74[8]; /*0x1007ae5dd*/
  v70[5] = v74[9]; /*0x1007ae5eb*/
  v70[6] = v74[10]; /*0x1007ae5f9*/
  v70[7] = v74[11]; /*0x1007ae607*/
  if ( v73 == 3 ) /*0x1007ae612*/
  {
    v8 = v77; /*0x1007ae61f*/
    *((_QWORD *)v77 + 11) = v70[7]; /*0x1007ae623*/
    *((_QWORD *)v8 + 10) = v70[6]; /*0x1007ae62e*/
    *((_QWORD *)v8 + 9) = v70[5]; /*0x1007ae639*/
    *((_QWORD *)v8 + 8) = v70[4]; /*0x1007ae644*/
    *((_QWORD *)v8 + 7) = v70[3]; /*0x1007ae64f*/
    *((_QWORD *)v8 + 6) = v70[2]; /*0x1007ae65a*/
    v13 = v70[0]; /*0x1007ae65e*/
    *((_QWORD *)v8 + 5) = v70[1]; /*0x1007ae66c*/
    *((_QWORD *)v8 + 4) = v13; /*0x1007ae670*/
    *(_QWORD *)v8 = v9; /*0x1007ae674*/
    *((_QWORD *)v8 + 1) = v10; /*0x1007ae677*/
    *((_QWORD *)v8 + 2) = v11; /*0x1007ae67b*/
    *((_QWORD *)v8 + 3) = v12; /*0x1007ae67f*/
    return v8; /*0x1007ae683*/
  }
  memcpy(v69, __src, sizeof(v69)); /*0x1007ae6eb*/
  if ( (_DWORD)v73 == 2 ) /*0x1007ae6f3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, __src, v14); /*0x1007ae6f9*/
    v15 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x1007ae708*/
    if ( !v15 ) /*0x1007ae710*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x1007af89b*/
    *(_QWORD *)((char *)v15 + 13) = 0x8BA8E7BFBAE794BALL; /*0x1007ae720*/
    v15[1] = 0xE794BAE5B9AFE5B0LL; /*0x1007ae72e*/
    *v15 = 0x88E5BE89E6AA9CE6LL; /*0x1007ae73c*/
    v8 = v77; /*0x1007ae73f*/
    *(_QWORD *)v77 = 10; /*0x1007ae743*/
    *((_QWORD *)v8 + 1) = 21; /*0x1007ae74a*/
    *((_QWORD *)v8 + 2) = v15; /*0x1007ae752*/
    *((_QWORD *)v8 + 3) = 21; /*0x1007ae756*/
    return v8; /*0x1007ae75e*/
  }
  v25 = __src; /*0x1007ae80f*/
  v26 = v69; /*0x1007ae816*/
  memcpy(__src, v69, sizeof(__src)); /*0x1007ae822*/
  v74[4] = v70[0]; /*0x1007ae835*/
  v74[5] = v70[1]; /*0x1007ae83c*/
  v74[6] = v70[2]; /*0x1007ae84a*/
  v74[7] = v70[3]; /*0x1007ae858*/
  v74[8] = v70[4]; /*0x1007ae866*/
  v74[9] = v70[5]; /*0x1007ae874*/
  v74[10] = v70[6]; /*0x1007ae882*/
  v74[11] = v70[7]; /*0x1007ae890*/
  if ( HIBYTE(__src[53]) ) /*0x1007ae8be*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v69, v27); /*0x1007ae8c4*/
    v28 = 51; /*0x1007ae8c9*/
    v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1); /*0x1007ae8d9*/
    v8 = v77; /*0x1007ae8e1*/
    if ( v29 ) /*0x1007ae8ef*/
    {
      *(_QWORD *)(v29 + 40) = 0x8586E58B9CE7A59FLL; /*0x1007ae8ff*/
      *(_QWORD *)(v29 + 32) = 0xE695B3E6A097E68CLL; /*0x1007ae90d*/
      *(_QWORD *)(v29 + 24) = 0xBCEFB6BBE48796E6LL; /*0x1007ae91b*/
      *(_QWORD *)(v29 + 16) = 0x2074756F6C6C6F72LL; /*0x1007ae929*/
      *(_QWORD *)(v29 + 8) = 0x2091B0E5BABCE78BLL; /*0x1007ae937*/
      *(_QWORD *)v29 = 0xA8E7BFBAE7A5AFE8LL; /*0x1007ae945*/
      *(_DWORD *)(v29 + 47) = -1179720315; /*0x1007ae948*/
      *(_QWORD *)v8 = 10; /*0x1007ae94f*/
      *((_QWORD *)v8 + 1) = 51; /*0x1007ae956*/
      *((_QWORD *)v8 + 2) = v29; /*0x1007ae95e*/
      *((_QWORD *)v8 + 3) = 51; /*0x1007ae962*/
      v30 = v74[3]; /*0x1007ae96a*/
      if ( !v74[3] ) /*0x1007ae974*/
        goto LABEL_76; /*0x1007ae974*/
      goto LABEL_75; /*0x1007ae974*/
    }
LABEL_211:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x1007af8a0*/
  }
  v8 = v77; /*0x1007ae990*/
  if ( v74[9] != 0x8000000000000000LL ) /*0x1007ae994*/
  {
    v31 = v74[10]; /*0x1007ae99a*/
    v32 = v74[11]; /*0x1007ae9a1*/
    v25 = (_QWORD *)v74[10]; /*0x1007ae9a8*/
    v26 = (_QWORD *)v74[11]; /*0x1007ae9ab*/
    core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6((unsigned __int8 *)v74[10], v74[11]); /*0x1007ae9ae*/
    if ( v27 ) /*0x1007ae9b6*/
    {
      codexmate_lib::core::sessions::export::load_recent_export_messages::hc4b9084f7330fff7(v72, v31, v32, 300); /*0x1007ae9ce*/
      v33 = v72[0]; /*0x1007ae9d3*/
      v66[0] = v72[1]; /*0x1007ae9e1*/
      v66[1] = v72[2]; /*0x1007ae9ef*/
      v66[2] = v72[3]; /*0x1007ae9fd*/
      v34 = v72[4]; /*0x1007aea04*/
      if ( v72[0] == 11 ) /*0x1007aea10*/
      {
        v65[2] = v66[2]; /*0x1007aea1d*/
        v35 = v66[1]; /*0x1007aea2b*/
        v65[1] = v66[1]; /*0x1007aea32*/
        v65[0] = v66[0]; /*0x1007aea39*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h347c1f283620320a( /*0x1007aea51*/
          v63,
          v66[1],
          v66[1] + (v66[2] << 6));
        v36 = v64; /*0x1007aea56*/
        codexmate_lib::core::sessions::detail::bound_messages::h033d68a9f087f302(v66, v63); /*0x1007aea6b*/
        v72[8] = v66[2]; /*0x1007aea7e*/
        v72[7] = v66[1]; /*0x1007aea93*/
        v72[6] = v66[0]; /*0x1007aea9a*/
        v37 = 1; /*0x1007aeaa1*/
        if ( (v34 & 1) == 0 ) /*0x1007aeaaa*/
          v37 = v66[3]; /*0x1007aeaac*/
        v72[0] = v74[3]; /*0x1007aeab9*/
        v72[1] = v74[4]; /*0x1007aeac0*/
        v72[2] = v74[5]; /*0x1007aeacb*/
        v72[3] = v74[6]; /*0x1007aeae0*/
        v72[4] = v74[7]; /*0x1007aeae7*/
        v72[5] = v74[8]; /*0x1007aeaf5*/
        v38 = v77; /*0x1007aeb06*/
        qmemcpy(v77 + 8, v72, 0x48u); /*0x1007aeb1a*/
        *((_DWORD *)v38 + 20) = (v34 & 1) == 0; /*0x1007aeb1d*/
        *((_DWORD *)v38 + 21) = v36; /*0x1007aeb21*/
        v8 = v38; /*0x1007aeb25*/
        v38[88] = v37; /*0x1007aeb28*/
        *(_QWORD *)v38 = 11; /*0x1007aeb2c*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc3c64c96e77cebda(v65); /*0x1007aeb3a*/
        if ( v65[0] ) /*0x1007aeb49*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v65[0] << 6, 8); /*0x1007aeb57*/
        if ( v74[9] != 0x8000000000000000LL && v74[9] ) /*0x1007aeb6b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[10], v74[9], 1); /*0x1007aeb79*/
        if ( __src[0] != 0x8000000000000000LL && __src[0] ) /*0x1007aeb8d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1); /*0x1007aeb9b*/
        if ( __src[3] != 0x8000000000000000LL && __src[3] ) /*0x1007aebaf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[4], __src[3], 1); /*0x1007aebbd*/
        if ( __src[6] != 0x8000000000000000LL && __src[6] ) /*0x1007aebd1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[7], __src[6], 1); /*0x1007aebdf*/
        if ( __src[9] != 0x8000000000000000LL && __src[9] ) /*0x1007aebf3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[10], __src[9], 1); /*0x1007aec01*/
        if ( __src[12] != 0x8000000000000000LL && __src[12] ) /*0x1007aec15*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[13], __src[12], 1); /*0x1007aec23*/
        if ( __src[15] != 0x8000000000000000LL && __src[15] ) /*0x1007aec37*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[16], __src[15], 1); /*0x1007aec45*/
        core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..SessionWorktreeMigrationInfo$GT$$GT$::h43cf7473cb420a65(&__src[18]); /*0x1007aec51*/
        goto LABEL_107; /*0x1007aec56*/
      }
      *((_QWORD *)v8 + 11) = v72[11]; /*0x1007af803*/
      *(_QWORD *)(v8 + 81) = *(_QWORD *)((char *)&v72[10] + 1); /*0x1007af80e*/
      *(_QWORD *)(v8 + 73) = *(_QWORD *)((char *)&v72[9] + 1); /*0x1007af819*/
      *(_OWORD *)(v8 + 57) = *(_OWORD *)((char *)&v72[7] + 1); /*0x1007af82f*/
      *(_QWORD *)(v8 + 49) = *(_QWORD *)((char *)&v72[6] + 1); /*0x1007af83a*/
      *(_OWORD *)(v8 + 33) = *(_OWORD *)((char *)&v72[4] + 1); /*0x1007af850*/
      *((_QWORD *)v8 + 3) = v66[2]; /*0x1007af85b*/
      v62 = v66[0]; /*0x1007af85f*/
      *((_QWORD *)v8 + 2) = v66[1]; /*0x1007af86d*/
      *((_QWORD *)v8 + 1) = v62; /*0x1007af871*/
      *(_QWORD *)v8 = v33; /*0x1007af875*/
      v8[32] = v34; /*0x1007af878*/
      v30 = v74[3]; /*0x1007af87c*/
      if ( !v74[3] ) /*0x1007af886*/
        goto LABEL_76; /*0x1007af886*/
LABEL_75:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[4], v30, 1); /*0x1007aee98*/
      goto LABEL_76; /*0x1007aeea4*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v26, v27); /*0x1007aee10*/
  v28 = 36; /*0x1007aee15*/
  v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x1007aee25*/
  if ( !v50 ) /*0x1007aee2d*/
    goto LABEL_211; /*0x1007aee2d*/
  *(_QWORD *)(v50 + 24) = 0xB7E8B6BBE48796E6LL; /*0x1007aee3d*/
  *(_QWORD *)(v50 + 16) = 0x2074756F6C6C6F72LL; /*0x1007aee4b*/
  *(_QWORD *)(v50 + 8) = 0x2095BDE5B0AEE8AALL; /*0x1007aee59*/
  *(_QWORD *)v50 = 0x9CE68BA8E7BFBAE7LL; /*0x1007aee67*/
  *(_DWORD *)(v50 + 32) = -2067864145; /*0x1007aee6a*/
  *(_QWORD *)v8 = 10; /*0x1007aee71*/
  *((_QWORD *)v8 + 1) = 36; /*0x1007aee78*/
  *((_QWORD *)v8 + 2) = v50; /*0x1007aee80*/
  *((_QWORD *)v8 + 3) = 36; /*0x1007aee84*/
  v30 = v74[3]; /*0x1007aee8c*/
  if ( v74[3] ) /*0x1007aee96*/
    goto LABEL_75; /*0x1007aee96*/
LABEL_76:
  if ( v74[6] ) /*0x1007aeeb3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[7], v74[6], 1); /*0x1007aeec1*/
  if ( v74[9] != 0x8000000000000000LL && v74[9] ) /*0x1007aeed5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[10], v74[9], 1); /*0x1007aeee3*/
  if ( __src[0] != 0x8000000000000000LL && __src[0] ) /*0x1007aeef7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1); /*0x1007aef05*/
  if ( __src[3] != 0x8000000000000000LL && __src[3] ) /*0x1007aef19*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[4], __src[3], 1); /*0x1007aef27*/
  if ( __src[6] != 0x8000000000000000LL && __src[6] ) /*0x1007aef3b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[7], __src[6], 1); /*0x1007aef49*/
  if ( __src[9] != 0x8000000000000000LL && __src[9] ) /*0x1007aef5d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[10], __src[9], 1); /*0x1007aef6b*/
  if ( __src[12] != 0x8000000000000000LL && __src[12] ) /*0x1007aef7f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[13], __src[12], 1); /*0x1007aef8d*/
  if ( __src[15] != 0x8000000000000000LL && __src[15] ) /*0x1007aefa1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[16], __src[15], 1); /*0x1007aefaf*/
  if ( __src[18] != 0x8000000000000000LL ) /*0x1007aefbe*/
  {
    if ( __src[18] ) /*0x1007aefc3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[19], __src[18], 1); /*0x1007aefd1*/
    if ( __src[21] ) /*0x1007aefe0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[22], __src[21], 1); /*0x1007aefee*/
    if ( __src[24] != 0x8000000000000000LL && __src[24] ) /*0x1007af002*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[25], __src[24], 1); /*0x1007af010*/
  }
LABEL_107:
  if ( __src[28] != 0x8000000000000000LL && __src[28] ) /*0x1007af024*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[29], __src[28], 1); /*0x1007af032*/
  if ( __src[31] != 0x8000000000000000LL && __src[31] ) /*0x1007af046*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[32], __src[31], 1); /*0x1007af054*/
  if ( __src[34] != 0x8000000000000000LL && __src[34] ) /*0x1007af068*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[35], __src[34], 1); /*0x1007af076*/
  if ( __src[37] != 0x8000000000000000LL && __src[37] ) /*0x1007af08a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[38], __src[37], 1); /*0x1007af098*/
  if ( __src[40] != 0x8000000000000000LL && __src[40] ) /*0x1007af0ac*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[41], __src[40], 1); /*0x1007af0ba*/
  if ( __src[43] != 0x8000000000000000LL && __src[43] ) /*0x1007af0ce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[44], __src[43], 1); /*0x1007af0dc*/
  if ( __src[46] != 0x8000000000000000LL && __src[46] ) /*0x1007af0ed*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[47], __src[46], 1); /*0x1007af0f8*/
  if ( __src[49] != 0x8000000000000000LL && __src[49] ) /*0x1007af109*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[50], __src[49], 1); /*0x1007af114*/
  return v8; /*0x1007af11c*/
}