// __ZN13codexmate_lib4core5voice9workspace27remove_vocabulary_app_scope @ 0x100b05110 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::remove_vocabulary_app_scope::hc46a361e058ae517(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __m128i a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r13
  char v13; // r15
  char v14; // r14
  __int64 v15; // rdx
  double v16; // xmm0_8
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 *v19; // rsi
  void *v20; // rax
  int v21; // edx
  __int64 v22; // rax
  _QWORD v24[12]; // [rsp+8h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-168h] BYREF
  _BYTE v26[96]; // [rsp+70h] [rbp-160h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-100h]
  __int64 v28; // [rsp+D8h] [rbp-F8h]
  __int64 v29; // [rsp+E0h] [rbp-F0h]
  __int64 v30; // [rsp+E8h] [rbp-E8h]
  __int64 v31; // [rsp+F0h] [rbp-E0h]
  _QWORD v32[16]; // [rsp+F8h] [rbp-D8h] BYREF
  _QWORD v33[2]; // [rsp+178h] [rbp-58h] BYREF
  _QWORD v34[2]; // [rsp+188h] [rbp-48h] BYREF
  __int64 v35; // [rsp+198h] [rbp-38h]
  _QWORD *v36; // [rsp+1A0h] [rbp-30h]

  v36 = a2; /*0x100b05124*/
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4); /*0x100b05131*/
  v34[0] = v8; /*0x100b05136*/
  v34[1] = v9; /*0x100b0513a*/
  if ( !v9 ) /*0x100b05141*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a4); /*0x100b051db*/
    v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x100b051ea*/
    if ( !v20 ) /*0x100b051f2*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x100b05428*/
    qmemcpy(v20, "App bundle id cannot be empty", 29); /*0x100b0522c*/
    a1[1] = 9; /*0x100b0522f*/
    a1[2] = 29; /*0x100b05237*/
    a1[3] = v20; /*0x100b0523f*/
    a1[4] = 29; /*0x100b05243*/
    goto LABEL_8; /*0x100b0524b*/
  }
  v10 = v8; /*0x100b05147*/
  v35 = v9; /*0x100b0514a*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119((__int64)v32, a4); /*0x100b05155*/
  v11 = v32[0]; /*0x100b0515a*/
  v12 = v32[1]; /*0x100b05161*/
  v13 = v32[2]; /*0x100b05168*/
  if ( v32[0] != 11 ) /*0x100b05174*/
  {
    memcpy((char *)a1 + 25, (char *)&v32[2] + 1, 0x4Fu); /*0x100b0525d*/
    a1[1] = v11; /*0x100b05262*/
    a1[2] = v12; /*0x100b05266*/
    *((_BYTE *)a1 + 24) = v13; /*0x100b0526a*/
LABEL_8:
    *a1 = 0x8000000000000000LL; /*0x100b0526e*/
    return a1; /*0x100b0527b*/
  }
  v14 = v32[2]; /*0x100b0517a*/
  v16 = codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v32, v36, a5); /*0x100b05188*/
  qmemcpy(v24, &v32[1], sizeof(v24)); /*0x100b051b7*/
  if ( __OFSUB__(-v32[0], 1) ) /*0x100b051a1*/
  {
    qmemcpy(a1 + 1, v24, 0x60u); /*0x100b051d0*/
    v19 = &v25; /*0x100b051d0*/
    v18 = a1 + 13; /*0x100b051d0*/
    v17 = 0; /*0x100b051d0*/
    *a1 = 0x8000000000000000LL; /*0x100b051d3*/
  }
  else
  {
    v31 = v33[1]; /*0x100b05284*/
    v30 = v33[0]; /*0x100b0528f*/
    v29 = v32[15]; /*0x100b0529a*/
    v28 = v32[14]; /*0x100b052a9*/
    v27 = v32[13]; /*0x100b052b0*/
    qmemcpy(v26, v24, sizeof(v26)); /*0x100b052ca*/
    v25 = v32[0]; /*0x100b052cd*/
    alloc::vec::Vec$LT$T$C$A$GT$::retain::h8ff26ca27e80a100(&v26[40], v34, v16); /*0x100b052df*/
    alloc::vec::Vec$LT$T$C$A$GT$::retain::h99ed5e0329698f75(&v26[16], v10, v35); /*0x100b052f2*/
    LODWORD(v31) = 1; /*0x100b052f7*/
    v24[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(&v26[16], v10); /*0x100b05306*/
    LODWORD(v24[1]) = v21; /*0x100b0530d*/
    std::time::SystemTime::duration_since::had059553cab94f96(v32, v24, 0, 0); /*0x100b05325*/
    if ( LOBYTE(v32[0]) ) /*0x100b05331*/
      v22 = 0; /*0x100b0533c*/
    else
      v22 = v32[1]; /*0x100b05333*/
    v30 = v22; /*0x100b0533e*/
    codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v25); /*0x100b0534c*/
    codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7( /*0x100b05363*/
      v32,
      (__int64)v36,
      (__int64)&v25,
      v16);
    if ( LODWORD(v32[0]) == 11 ) /*0x100b0536f*/
    {
      codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47(v32, v36[67], v36[68], (__int64)&v25); /*0x100b05391*/
      qmemcpy(a1, v32, 0x80u); /*0x100b053a5*/
      v19 = v33; /*0x100b053a5*/
    }
    else
    {
      qmemcpy(a1 + 1, v32, 0x60u); /*0x100b053c6*/
      v19 = &v32[12]; /*0x100b053c6*/
      *a1 = 0x8000000000000000LL; /*0x100b053c9*/
    }
    v18 = &v25; /*0x100b053a8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v25); /*0x100b053af*/
  }
  if ( (v14 & 1) == 0 /*0x100b0540e*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v18, v19, v15, v17) )
  {
    *(_BYTE *)(v12 + 8) = 1; /*0x100b05417*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v12); /*0x100b053f4*/
  return a1; /*0x100b053fc*/
}