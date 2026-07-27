// __ZN13codexmate_lib4core5relay16codex_diagnostic27fix_thread_missing_rollouts @ 0x100505660 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_thread_missing_rollouts::h4269f9c8756722e5(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  _QWORD *v6; // r14
  void *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // r14
  void *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r14
  _QWORD *v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rax
  _QWORD *v35; // r15
  void *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdi
  _QWORD v45[3]; // [rsp+0h] [rbp-1B0h] BYREF
  _QWORD v46[3]; // [rsp+18h] [rbp-198h] BYREF
  _QWORD v47[11]; // [rsp+30h] [rbp-180h] BYREF
  _QWORD v48[2]; // [rsp+88h] [rbp-128h] BYREF
  __int64 v49; // [rsp+98h] [rbp-118h] BYREF
  _QWORD v50[12]; // [rsp+A0h] [rbp-110h] BYREF
  _QWORD v51[11]; // [rsp+100h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+158h] [rbp-58h]
  __int64 v53; // [rsp+160h] [rbp-50h]
  __int64 v54; // [rsp+168h] [rbp-48h]
  __int64 v55; // [rsp+170h] [rbp-40h]
  __int64 v56; // [rsp+178h] [rbp-38h]
  __int64 v57; // [rsp+180h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::inspect_missing_rollouts_for_convergence::he13f091f11a0c011(&v49); /*0x100505684*/
  v3 = v50[1]; /*0x100505689*/
  v4 = v50[6]; /*0x100505690*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(&v49); /*0x10050569a*/
  if ( !(v3 | v4) ) /*0x10050569f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v49, a2); /*0x1005056a8*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005056b7*/
    if ( !v5 ) /*0x1005056bf*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100505e3a*/
    v6 = (_QWORD *)v5; /*0x1005056c5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1005056c8*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x1005056d7*/
    if ( !v7 ) /*0x1005056df*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x100505ea1*/
    qmemcpy(v7, "thread_missing_rollouts", 23); /*0x10050570b*/
    *v6 = 23; /*0x10050570e*/
    v6[1] = v7; /*0x100505715*/
    v6[2] = 23; /*0x100505719*/
    v47[0] = 1; /*0x100505721*/
    v47[1] = v6; /*0x10050572c*/
    v47[2] = 1; /*0x100505733*/
    v51[0] = 0; /*0x10050573e*/
    v51[1] = 8; /*0x100505749*/
    v51[2] = 0; /*0x100505754*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x10050575f*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10050576e*/
    if ( !v8 ) /*0x100505776*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100505e49*/
    v9 = (_QWORD *)v8; /*0x10050577c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10050577f*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x10050578e*/
    if ( !v10 ) /*0x100505796*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42); /*0x100505eb2*/
    *(_QWORD *)(v10 + 32) = 0xE5AEBFE4809CE9A0LL; /*0x1005057a6*/
    *(_QWORD *)(v10 + 24) = 0x97E68CBCEFB495E6LL; /*0x1005057b4*/
    *(_QWORD *)(v10 + 16) = 0x8CAEE5B6BBE48796LL; /*0x1005057c2*/
    *(_QWORD *)(v10 + 8) = 0xE62074756F6C6C6FLL; /*0x1005057d0*/
    *(_QWORD *)v10 = 0x72208BA8E7BFBAE7LL; /*0x1005057de*/
    *(_WORD *)(v10 + 40) = -29276; /*0x1005057e1*/
    *v9 = 42; /*0x1005057e7*/
    v9[1] = v10; /*0x1005057ee*/
    v9[2] = 42; /*0x1005057f2*/
    result = v47[2]; /*0x1005057fa*/
    v50[1] = v47[2]; /*0x100505801*/
    v12 = v47[0]; /*0x100505808*/
    v13 = v47[1]; /*0x10050580f*/
    v50[0] = v47[1]; /*0x100505816*/
    v49 = v47[0]; /*0x10050581d*/
    v14 = v51[0]; /*0x100505824*/
    v15 = v51[1]; /*0x10050582b*/
    v50[2] = v51[0]; /*0x100505832*/
    v50[3] = v51[1]; /*0x100505839*/
    v50[4] = v51[2]; /*0x100505847*/
    a1[6] = v51[2]; /*0x10050584e*/
    a1[5] = v15; /*0x100505852*/
    a1[4] = v14; /*0x100505856*/
    a1[3] = result; /*0x10050585a*/
    a1[2] = v13; /*0x10050585e*/
    a1[1] = v12; /*0x100505862*/
    a1[7] = 1; /*0x100505866*/
    a1[8] = (__int64)v9; /*0x10050586e*/
    a1[9] = 1; /*0x100505872*/
    *a1 = 11; /*0x10050587a*/
    return result; /*0x100505881*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::h29a5363c015dcf12( /*0x100505890*/
    &v49,
    a2);
  result = v49; /*0x100505895*/
  qmemcpy(v51, v50, sizeof(v51)); /*0x1005058af*/
  if ( v49 != 11 ) /*0x1005058b6*/
  {
    qmemcpy(a1 + 1, v51, 0x58u); /*0x100505a19*/
    *a1 = result; /*0x100505a1c*/
    return result; /*0x100505a1f*/
  }
  qmemcpy(v47, v51, sizeof(v47)); /*0x1005058d2*/
  codexmate_lib::core::relay::codex_diagnostic::check_thread_missing_rollouts::h4f6480d24cccd89e(&v49, a2); /*0x1005058df*/
  if ( v50[4] == 2 && (v16 = v50[3], *(_WORD *)v50[3] == 27503) ) /*0x100505905*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v49, a2); /*0x100505c14*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100505c23*/
    if ( !v34 ) /*0x100505c2b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100505e7f*/
    v35 = (_QWORD *)v34; /*0x100505c31*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100505c34*/
    v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100505c43*/
    if ( !v36 ) /*0x100505c4b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x100505ed4*/
    qmemcpy(v36, "thread_missing_rollouts", 23); /*0x100505c77*/
    *v35 = 23; /*0x100505c7a*/
    v35[1] = v36; /*0x100505c81*/
    v35[2] = 23; /*0x100505c85*/
    v55 = 1; /*0x100505c8d*/
    v56 = (__int64)v35; /*0x100505c95*/
    v57 = 1; /*0x100505c99*/
    v52 = 0; /*0x100505ca1*/
    v53 = 8; /*0x100505ca9*/
    v54 = 0; /*0x100505cb1*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100505cb9*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100505cc8*/
    if ( !v37 ) /*0x100505cd0*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100505e90*/
    v38 = (_QWORD *)v37; /*0x100505cd6*/
    v51[0] = &v47[8]; /*0x100505ce7*/
    v51[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100505cf5*/
    v51[2] = &v47[9]; /*0x100505cfc*/
    v51[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100505d03*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v46, &unk_1017C03D0, v51); /*0x100505d1f*/
    v38[2] = v46[2]; /*0x100505d2b*/
    v39 = v46[0]; /*0x100505d2f*/
    v38[1] = v46[1]; /*0x100505d3d*/
    *v38 = v39; /*0x100505d41*/
    v40 = v55; /*0x100505d44*/
    v41 = v56; /*0x100505d48*/
    v51[0] = v55; /*0x100505d4c*/
    v51[1] = v56; /*0x100505d53*/
    v42 = v57; /*0x100505d5a*/
    v51[2] = v57; /*0x100505d5e*/
    v43 = v52; /*0x100505d65*/
    v44 = v53; /*0x100505d69*/
    v51[3] = v52; /*0x100505d6d*/
    v51[4] = v53; /*0x100505d74*/
    v51[5] = v54; /*0x100505d7f*/
    a1[6] = v54; /*0x100505d86*/
    a1[5] = v44; /*0x100505d8a*/
    a1[4] = v43; /*0x100505d8e*/
    a1[3] = v42; /*0x100505d92*/
    a1[2] = v41; /*0x100505d96*/
    a1[1] = v40; /*0x100505d9a*/
    a1[7] = 1; /*0x100505d9e*/
    a1[8] = (__int64)v38; /*0x100505da6*/
    a1[9] = 1; /*0x100505daa*/
    *a1 = 11; /*0x100505db2*/
    if ( v49 ) /*0x100505dc3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[0], v49, 1); /*0x100505dd1*/
    if ( v50[2] ) /*0x100505de0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v50[2], 1); /*0x100505dea*/
    if ( v50[5] ) /*0x100505df9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[6], v50[5], 1); /*0x100505e07*/
    v28 = v50[8]; /*0x100505e0c*/
    if ( !(2LL * v50[8]) ) /*0x100505e1e*/
      goto LABEL_25; /*0x100505e1e*/
    v29 = &v50[9]; /*0x100505e24*/
  }
  else
  {
    v55 = 0; /*0x10050590b*/
    v56 = 8; /*0x100505913*/
    v57 = 0; /*0x10050591b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v49, a2); /*0x100505923*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100505932*/
    if ( !v17 ) /*0x10050593a*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100505e5d*/
    v18 = (_QWORD *)v17; /*0x100505940*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100505943*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100505952*/
    if ( !v19 ) /*0x10050595a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x100505ec3*/
    qmemcpy(v19, "thread_missing_rollouts", 23); /*0x100505986*/
    *v18 = 23; /*0x100505989*/
    v18[1] = v19; /*0x100505990*/
    v18[2] = 23; /*0x100505994*/
    v52 = 1; /*0x10050599c*/
    v53 = (__int64)v18; /*0x1005059a4*/
    v54 = 1; /*0x1005059a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x1005059b0*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005059bf*/
    if ( !v20 ) /*0x1005059cb*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100505e6e*/
    v21 = (_QWORD *)v20; /*0x1005059d1*/
    if ( v50[8] == 0x8000000000000000LL ) /*0x1005059de*/
    {
      v51[2] = v50[7]; /*0x1005059eb*/
      v51[1] = v50[6]; /*0x1005059f9*/
      v51[0] = v50[5]; /*0x100505a00*/
    }
    else
    {
      v51[0] = v50[8]; /*0x100505a32*/
      v51[1] = v50[9]; /*0x100505a47*/
      v51[2] = v50[10]; /*0x100505a4e*/
      if ( v50[5] ) /*0x100505a58*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[6], v50[5], 1); /*0x100505a5f*/
    }
    v48[0] = v51; /*0x100505a64*/
    v48[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100505a72*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v45, &unk_1017C0398, v48); /*0x100505a8e*/
    if ( v51[0] ) /*0x100505a9d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[1], v51[0], 1); /*0x100505aab*/
    v21[2] = v45[2]; /*0x100505ab7*/
    v22 = v45[0]; /*0x100505abb*/
    v21[1] = v45[1]; /*0x100505ac9*/
    *v21 = v22; /*0x100505acd*/
    v23 = v55; /*0x100505ad0*/
    v24 = v56; /*0x100505ad4*/
    v51[0] = v55; /*0x100505ad8*/
    v51[1] = v56; /*0x100505adf*/
    v25 = v57; /*0x100505ae6*/
    v51[2] = v57; /*0x100505aea*/
    v26 = v52; /*0x100505af1*/
    v27 = v53; /*0x100505af5*/
    v51[3] = v52; /*0x100505af9*/
    v51[4] = v53; /*0x100505b00*/
    v51[5] = v54; /*0x100505b0b*/
    a1[6] = v54; /*0x100505b12*/
    a1[5] = v27; /*0x100505b16*/
    a1[4] = v26; /*0x100505b1a*/
    a1[3] = v25; /*0x100505b1e*/
    a1[2] = v24; /*0x100505b22*/
    a1[1] = v23; /*0x100505b26*/
    a1[7] = 1; /*0x100505b2a*/
    a1[8] = (__int64)v21; /*0x100505b32*/
    a1[9] = 1; /*0x100505b36*/
    *a1 = 11; /*0x100505b3e*/
    if ( v49 ) /*0x100505b4f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[0], v49, 1); /*0x100505b5d*/
    v28 = v50[2]; /*0x100505b62*/
    if ( !v50[2] ) /*0x100505b6c*/
      goto LABEL_25; /*0x100505b6c*/
    v29 = &v50[3]; /*0x100505b6e*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v28, 1); /*0x100505b7d*/
LABEL_25:
  if ( v47[3] != 0x8000000000000000LL && v47[3] ) /*0x100505b91*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[4], v47[3], 1); /*0x100505b9f*/
  v30 = v47[1]; /*0x100505ba4*/
  v31 = v47[2]; /*0x100505bab*/
  if ( v47[2] ) /*0x100505bb5*/
  {
    v32 = (_QWORD *)(v47[1] + 8LL); /*0x100505bb7*/
    do /*0x100505bc7*/
    {
      v33 = *(v32 - 1); /*0x100505bc9*/
      if ( v33 ) /*0x100505bd0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x100505bda*/
      v32 += 3; /*0x100505bc0*/
      --v31; /*0x100505bc4*/
    }
    while ( v31 ); /*0x100505bc7*/
  }
  result = v47[0]; /*0x100505be1*/
  if ( v47[0] ) /*0x100505beb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24LL * v47[0], 8); /*0x100505bfd*/
  return result; /*0x100505c02*/
}