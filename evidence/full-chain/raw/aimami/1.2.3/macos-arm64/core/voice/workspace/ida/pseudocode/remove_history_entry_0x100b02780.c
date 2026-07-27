// __ZN13codexmate_lib4core5voice9workspace20remove_history_entry @ 0x100b02780 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::remove_history_entry::ha014c41ef3b66346(
        __int64 a1,
        _QWORD *a2,
        void *a3,
        size_t a4,
        __m128i a5)
{
  _QWORD *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r14
  char v9; // r15
  __int64 v10; // rdx
  double v11; // xmm0_8
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 *v14; // rsi
  void *v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // r14
  _QWORD *v21; // r15
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v28[12]; // [rsp+8h] [rbp-1F8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-198h] BYREF
  _QWORD v30[15]; // [rsp+70h] [rbp-190h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-118h]
  __int64 v32; // [rsp+F0h] [rbp-110h]
  _QWORD v33[3]; // [rsp+F8h] [rbp-108h] BYREF
  _QWORD v34[16]; // [rsp+110h] [rbp-F0h] BYREF
  _QWORD v35[2]; // [rsp+190h] [rbp-70h] BYREF
  _QWORD v36[2]; // [rsp+1A0h] [rbp-60h] BYREF
  void *__s2; // [rsp+1B0h] [rbp-50h]
  _QWORD *v38; // [rsp+1B8h] [rbp-48h]
  _QWORD *v39; // [rsp+1C0h] [rbp-40h]
  _QWORD *v40; // [rsp+1C8h] [rbp-38h]
  char v41; // [rsp+1D7h] [rbp-29h]

  v38 = a2; /*0x100b02797*/
  v6 = (_QWORD *)a1; /*0x100b0279b*/
  __s2 = a3; /*0x100b0279e*/
  v36[0] = a3; /*0x100b027a2*/
  v36[1] = a4; /*0x100b027a6*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(v34); /*0x100b027b1*/
  v7 = v34[0]; /*0x100b027b6*/
  v8 = v34[1]; /*0x100b027bd*/
  v9 = v34[2]; /*0x100b027c4*/
  if ( v34[0] != 11 ) /*0x100b027d0*/
  {
    memcpy((void *)(a1 + 25), (char *)&v34[2] + 1, 0x4Fu); /*0x100b02845*/
    *(_QWORD *)(a1 + 8) = v7; /*0x100b0284a*/
    *(_QWORD *)(a1 + 16) = v8; /*0x100b0284e*/
    *(_BYTE *)(a1 + 24) = v9; /*0x100b02852*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100b02860*/
    return v6; /*0x100b02a41*/
  }
  v40 = (_QWORD *)v34[1]; /*0x100b027d2*/
  v41 = v34[2]; /*0x100b027d6*/
  v11 = codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v34, v38, a5); /*0x100b027e5*/
  qmemcpy(v28, &v34[1], sizeof(v28)); /*0x100b02814*/
  if ( __OFSUB__(-v34[0], 1) ) /*0x100b027fe*/
  {
    qmemcpy((void *)(a1 + 8), v28, 0x60u); /*0x100b02829*/
    v14 = &v29; /*0x100b02829*/
    v13 = (__int64 *)(a1 + 104); /*0x100b02829*/
    v12 = 0; /*0x100b02829*/
    *v6 = 0x8000000000000000LL; /*0x100b0282c*/
    goto LABEL_14; /*0x100b02830*/
  }
  v39 = (_QWORD *)a1; /*0x100b02869*/
  v32 = v35[1]; /*0x100b02871*/
  v31 = v35[0]; /*0x100b0287c*/
  v30[14] = v34[15]; /*0x100b02887*/
  v30[13] = v34[14]; /*0x100b02899*/
  v30[12] = v34[13]; /*0x100b028a0*/
  qmemcpy(v30, v28, 0x60u); /*0x100b028ba*/
  v29 = v34[0]; /*0x100b028bd*/
  v15 = __s2; /*0x100b028ce*/
  if ( !v30[10] ) /*0x100b028d2*/
  {
LABEL_12:
    v34[0] = v36; /*0x100b02989*/
    v34[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100b0299b*/
    v14 = (__int64 *)&unk_1017CBF8B; /*0x100b029a2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v33, &unk_1017CBF8B, v34); /*0x100b029b7*/
    v20 = v39; /*0x100b029bc*/
    v39[4] = v33[2]; /*0x100b029d1*/
    v24 = v33[0]; /*0x100b029d5*/
    v20[3] = v33[1]; /*0x100b029e3*/
    v20[2] = v24; /*0x100b029e7*/
    v20[1] = 8; /*0x100b029eb*/
LABEL_13:
    v6 = v20; /*0x100b029f3*/
    *v20 = 0x8000000000000000LL; /*0x100b029f6*/
    v13 = &v29; /*0x100b029f9*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v29); /*0x100b02a00*/
LABEL_14:
    if ( (v41 & 1) == 0 /*0x100b02af9*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v13, v14, v10, v12) )
    {
      *((_BYTE *)v40 + 8) = 1; /*0x100b02b0a*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v40); /*0x100b02a28*/
    return v6; /*0x100b02a28*/
  }
  v16 = v30[9]; /*0x100b028d8*/
  v17 = 440LL * v30[10]; /*0x100b028df*/
  v18 = 0; /*0x100b028e6*/
  while ( *(_QWORD *)(v16 + v18 + 32) != a4 || memcmp(*(const void **)(v16 + v18 + 24), v15, a4) ) /*0x100b02919*/
  {
    v18 += 440; /*0x100b028f0*/
    if ( v17 == v18 ) /*0x100b028fa*/
      goto LABEL_12; /*0x100b028fa*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::retain::hf37f6ec887c8e1e3(&v30[8], v36, v11); /*0x100b02926*/
  LODWORD(v32) = 1; /*0x100b0292b*/
  v19 = std::time::SystemTime::now::h1fe79e41f9d5677f(&v30[8], v36); /*0x100b02935*/
  v20 = v39; /*0x100b0293a*/
  v21 = v38; /*0x100b02948*/
  v28[0] = v19; /*0x100b0294c*/
  LODWORD(v28[1]) = v22; /*0x100b02953*/
  std::time::SystemTime::duration_since::had059553cab94f96(v34, v28, 0, 0); /*0x100b0296b*/
  if ( LOBYTE(v34[0]) ) /*0x100b02977*/
    v23 = 0; /*0x100b02a42*/
  else
    v23 = v34[1]; /*0x100b0297d*/
  v31 = v23; /*0x100b02a44*/
  codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v29); /*0x100b02a52*/
  codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v34, v21, &v29); /*0x100b02a68*/
  if ( LODWORD(v34[0]) != 11 ) /*0x100b02a74*/
  {
    qmemcpy(v20 + 1, v34, 0x60u); /*0x100b02af1*/
    v14 = &v34[12]; /*0x100b02af1*/
    goto LABEL_13; /*0x100b02af1*/
  }
  codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47(v34, v21[67], v21[68], (__int64)&v29); /*0x100b02a92*/
  qmemcpy(v20, v34, 0x80u); /*0x100b02aa6*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v29); /*0x100b02ab0*/
  if ( (v41 & 1) == 0 /*0x100b02b13*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v29, v35, v26, v27) )
  {
    *((_BYTE *)v40 + 8) = 1; /*0x100b02b20*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v40); /*0x100b02ad4*/
  return v20; /*0x100b02a30*/
}