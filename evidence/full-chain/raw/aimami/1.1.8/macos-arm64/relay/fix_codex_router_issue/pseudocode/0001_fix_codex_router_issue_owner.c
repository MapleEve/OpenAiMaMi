// owner: codexmate_lib::commands::relay::fix_codex_router_issue::he783bb26d80be6c4
// VA: 0x1004c5d10 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>

__int64 __fastcall codexmate_lib::commands::relay::fix_codex_router_issue::he783bb26d80be6c4(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdx
  __m128i si128; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm3
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  _WORD *v24; // rax
  _WORD *v25; // r12
  _DWORD *v26; // rax
  _BYTE v28[720]; // [rsp+0h] [rbp-5E0h] BYREF
  _BYTE v29[344]; // [rsp+2D0h] [rbp-310h] BYREF
  _DWORD v30[24]; // [rsp+428h] [rbp-1B8h] BYREF
  _QWORD v31[12]; // [rsp+488h] [rbp-158h] BYREF
  _DWORD v32[24]; // [rsp+4E8h] [rbp-F8h] BYREF
  _QWORD v33[2]; // [rsp+548h] [rbp-98h] BYREF
  _QWORD v34[3]; // [rsp+558h] [rbp-88h] BYREF
  _QWORD v35[14]; // [rsp+570h] [rbp-70h] BYREF

  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::hac90456ee84df9c2(v29); /*0x1004c5d34*/
  codexmate_lib::platform::paths::CodexPaths::from_home::h1ecd6646f13db1b2(v28, v29); /*0x1004c5d47*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(v29, a2); /*0x1004c5d56*/
  v5 = codexmate_lib::platform::process::is_process_running::h2043172b9767bad6(); /*0x1004c5d60*/
  v6 = a3[1]; /*0x1004c5d63*/
  if ( a3[2] == 3 && !(*(_WORD *)v6 ^ 0x6C61 | *(unsigned __int8 *)(v6 + 2) ^ 0x6C) ) /*0x1004c5d85*/
    codexmate_lib::core::relay::codex_diagnostic::fix_all::h74db8c537e5f5452(v30, v28, v29); /*0x1004c600b*/
  else
    codexmate_lib::core::relay::codex_diagnostic::fix_issue::hae131f1688bc8024(v30, v28, v29, a3[1]); /*0x1004c5da3*/
  if ( v30[0] != 10 ) /*0x1004c5daf*/
  {
    qmemcpy(v32, v30, sizeof(v32)); /*0x1004c5f6a*/
    v35[0] = 0; /*0x1004c5f6d*/
    v35[1] = 1; /*0x1004c5f75*/
    v35[2] = 0; /*0x1004c5f7d*/
    v31[2] = 1610612768; /*0x1004c5f85*/
    v31[0] = v35; /*0x1004c5f94*/
    v31[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c5fa2*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c5fb3*/
                            v32,
                            v31) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c61ee*/
        "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
        55,
        v33,
        &anon_3e4c14ac1826b92abbb84b981a88c995_940,
        &anon_3e4c14ac1826b92abbb84b981a88c995_929);
    *(_QWORD *)(a1 + 24) = v35[2]; /*0x1004c5fc4*/
    v19 = v35[0]; /*0x1004c5fc8*/
    *(_QWORD *)(a1 + 16) = v35[1]; /*0x1004c5fd0*/
    *(_QWORD *)(a1 + 8) = v19; /*0x1004c5fd4*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1004c5fe2*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v30); /*0x1004c5fec*/
    goto LABEL_29; /*0x1004c5ff1*/
  }
  qmemcpy(v35, &v30[2], 0x48u); /*0x1004c5dc5*/
  if ( !v35[2] ) /*0x1004c5dcf*/
    goto LABEL_26; /*0x1004c5dcf*/
  v7 = 0; /*0x1004c5de1*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1012C1BD0); /*0x1004c5de3*/
  v9 = _mm_cvtsi32_si128(0x74u); /*0x1004c5deb*/
  while ( 1 ) /*0x1004c5e3f*/
  {
    v11 = *(_QWORD *)(v35[1] + v7 + 8); /*0x1004c5e3f*/
    v12 = *(_QWORD *)(v35[1] + v7 + 16); /*0x1004c5e44*/
    if ( v12 != 17 ) /*0x1004c5e4d*/
      break; /*0x1004c5e4d*/
    v10 = _mm_or_si128( /*0x1004c5e27*/
            _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v11 + 16)), v9),
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)v11), si128));
    if ( !_mm_testz_si128(v10, v10) ) /*0x1004c5e30*/
      goto LABEL_12; /*0x1004c5e30*/
LABEL_8:
    v7 += 24; /*0x1004c5e32*/
    if ( 24LL * v35[2] == v7 ) /*0x1004c5e39*/
      goto LABEL_26; /*0x1004c5e39*/
  }
  if ( v12 == 14 && !(*(_QWORD *)v11 ^ 0x6C61756469736572LL | *(_QWORD *)(v11 + 6) ^ 0x65686361635F6C61LL) ) /*0x1004c5e65*/
    goto LABEL_8; /*0x1004c5e65*/
LABEL_12:
  if ( v5 ) /*0x1004c5e6a*/
  {
    codexmate_lib::platform::process::stop_codex_for_file_edit::h58b70230213b1120(v32, 5, 0); /*0x1004c5e81*/
    if ( v32[0] == 10 ) /*0x1004c5e8d*/
    {
      v13 = v31; /*0x1004c5e93*/
      codexmate_lib::platform::process::launch_codex_app::h91cbb8eff855c58e(v31); /*0x1004c5e9a*/
      if ( LODWORD(v31[0]) == 10 ) /*0x1004c5ea6*/
        goto LABEL_15; /*0x1004c5ea6*/
LABEL_23:
      qmemcpy(v32, v31, sizeof(v32)); /*0x1004c6047*/
      v33[0] = v32; /*0x1004c604a*/
      v33[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1004c6058*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v34, &unk_10122A492, v33); /*0x1004c6074*/
      v20 = v35[8]; /*0x1004c6079*/
      if ( v35[8] == v35[6] ) /*0x1004c6081*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v35[6]); /*0x1004c6087*/
      v21 = v35[7]; /*0x1004c608c*/
      v22 = 3 * v20; /*0x1004c6090*/
      *(_QWORD *)(v35[7] + 8 * v22 + 16) = v34[2]; /*0x1004c6098*/
      v23 = v34[0]; /*0x1004c609d*/
      *(_QWORD *)(v21 + 8 * v22 + 8) = v34[1]; /*0x1004c60a8*/
      *(_QWORD *)(v21 + 8 * v22) = v23; /*0x1004c60ad*/
      v35[8] = v20 + 1; /*0x1004c60b4*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v32); /*0x1004c60bf*/
    }
    else
    {
      qmemcpy(v31, v32, sizeof(v31)); /*0x1004c6028*/
      v13 = v32; /*0x1004c6028*/
      if ( LODWORD(v31[0]) != 10 ) /*0x1004c6032*/
        goto LABEL_23; /*0x1004c6032*/
LABEL_15:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13); /*0x1004c5eac*/
      v14 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x1004c5ebb*/
      if ( !v14 ) /*0x1004c5ec3*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37); /*0x1004c6221*/
      v15 = v14; /*0x1004c5ec9*/
      *(_QWORD *)((char *)v14 + 29) = 0x8895E69F94E78DA4LL; /*0x1004c5ed6*/
      v14[3] = 0xE78DA4E5AEBFE4BFLL; /*0x1004c5ee5*/
      v14[2] = 0xBDE4207865646F43LL; /*0x1004c5ef4*/
      v14[1] = 0x20AF90E58D87E9A8LL; /*0x1004c5f03*/
      *v14 = 0x8AE5AA87E8B2B7E5LL; /*0x1004c5f12*/
      v16 = v35[8]; /*0x1004c5f16*/
      if ( v35[8] == v35[6] ) /*0x1004c5f1e*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v35[6]); /*0x1004c5f24*/
      v17 = v35[7]; /*0x1004c5f29*/
      v18 = 3 * v16; /*0x1004c5f2d*/
      *(_QWORD *)(v35[7] + 8 * v18) = 37; /*0x1004c5f32*/
      *(_QWORD *)(v17 + 8 * v18 + 8) = v15; /*0x1004c5f3a*/
      *(_QWORD *)(v17 + 8 * v18 + 16) = 37; /*0x1004c5f3f*/
      v35[8] = v16 + 1; /*0x1004c5f4b*/
    }
  }
LABEL_26:
  qmemcpy(v32, v35, 0x48u); /*0x1004c60d4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v32[18]); /*0x1004c60d7*/
  v24 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004c60e6*/
  if ( !v24 ) /*0x1004c60ee*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004c61ff*/
  v25 = v24; /*0x1004c60f4*/
  *v24 = 27503; /*0x1004c60f7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1004c60fc*/
  v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004c610b*/
  if ( !v26 ) /*0x1004c6113*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004c6210*/
  *(_DWORD *)((char *)v26 + 3) = 1936942435; /*0x1004c6119*/
  *v26 = 1667462483; /*0x1004c6120*/
  qmemcpy((void *)(a1 + 72), v32, 0x48u); /*0x1004c6136*/
  *(_QWORD *)a1 = 2; /*0x1004c6139*/
  *(_QWORD *)(a1 + 8) = v25; /*0x1004c6140*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1004c6144*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004c614c*/
  *(_QWORD *)(a1 + 32) = v26; /*0x1004c6154*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004c6158*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004c6160*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004c6168*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004c6170*/
  *(_DWORD *)(a1 + 144) = 1; /*0x1004c6178*/
  *(_BYTE *)(a1 + 148) = 1; /*0x1004c6183*/
LABEL_29:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v29); /*0x1004c618b*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::haaba8b954ba2bc2e(v28); /*0x1004c619e*/
  if ( *a3 ) /*0x1004c61a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, *a3, 1); /*0x1004c61b3*/
  return a1; /*0x1004c61bb*/
}