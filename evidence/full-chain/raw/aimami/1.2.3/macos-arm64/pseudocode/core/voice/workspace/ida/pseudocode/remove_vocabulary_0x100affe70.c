// __ZN13codexmate_lib4core5voice9workspace17remove_vocabulary @ 0x100affe70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::remove_vocabulary::h7e1134832848bb9b(
        __int64 a1,
        __int64 a2,
        void *a3,
        size_t a4)
{
  _QWORD *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r14
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 *v12; // rsi
  void *v13; // r13
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // r15
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD v26[12]; // [rsp+8h] [rbp-1F8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-198h] BYREF
  _QWORD v28[15]; // [rsp+70h] [rbp-190h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-118h]
  __int64 v30; // [rsp+F0h] [rbp-110h]
  _QWORD v31[3]; // [rsp+F8h] [rbp-108h] BYREF
  _QWORD v32[16]; // [rsp+110h] [rbp-F0h] BYREF
  _QWORD v33[2]; // [rsp+190h] [rbp-70h] BYREF
  _QWORD v34[2]; // [rsp+1A0h] [rbp-60h] BYREF
  void *__s2; // [rsp+1B0h] [rbp-50h]
  __int64 v36; // [rsp+1B8h] [rbp-48h]
  _QWORD *v37; // [rsp+1C0h] [rbp-40h]
  _QWORD *v38; // [rsp+1C8h] [rbp-38h]
  char v39; // [rsp+1D7h] [rbp-29h]

  v36 = a2; /*0x100affe87*/
  v5 = (_QWORD *)a1; /*0x100affe8b*/
  __s2 = a3; /*0x100affe8e*/
  v34[0] = a3; /*0x100affe92*/
  v34[1] = a4; /*0x100affe96*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(v32); /*0x100affea1*/
  v6 = v32[0]; /*0x100affea6*/
  v7 = v32[1]; /*0x100affead*/
  v8 = v32[2]; /*0x100affeb4*/
  if ( v32[0] != 11 ) /*0x100affec0*/
  {
    memcpy((void *)(a1 + 25), (char *)&v32[2] + 1, 0x4Fu); /*0x100afff35*/
    *(_QWORD *)(a1 + 8) = v6; /*0x100afff3a*/
    *(_QWORD *)(a1 + 16) = v7; /*0x100afff3e*/
    *(_BYTE *)(a1 + 24) = v8; /*0x100afff42*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100afff50*/
    return v5; /*0x100b00131*/
  }
  v38 = (_QWORD *)v32[1]; /*0x100affec2*/
  v39 = v32[2]; /*0x100affec6*/
  codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v32, v36); /*0x100affed5*/
  qmemcpy(v26, &v32[1], sizeof(v26)); /*0x100afff04*/
  if ( __OFSUB__(-v32[0], 1) ) /*0x100affeee*/
  {
    qmemcpy((void *)(a1 + 8), v26, 0x60u); /*0x100afff19*/
    v12 = &v27; /*0x100afff19*/
    v11 = (__int64 *)(a1 + 104); /*0x100afff19*/
    v10 = 0; /*0x100afff19*/
    *v5 = 0x8000000000000000LL; /*0x100afff1c*/
    goto LABEL_14; /*0x100afff20*/
  }
  v37 = (_QWORD *)a1; /*0x100afff59*/
  v30 = v33[1]; /*0x100afff61*/
  v29 = v33[0]; /*0x100afff6c*/
  v28[14] = v32[15]; /*0x100afff77*/
  v28[13] = v32[14]; /*0x100afff89*/
  v28[12] = v32[13]; /*0x100afff90*/
  qmemcpy(v28, v26, 0x60u); /*0x100afffaa*/
  v27 = v32[0]; /*0x100afffad*/
  v13 = __s2; /*0x100afffbe*/
  if ( !v28[4] ) /*0x100afffc2*/
  {
LABEL_12:
    v32[0] = v34; /*0x100b00079*/
    v32[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100b0008b*/
    v12 = (__int64 *)&unk_1017CBF57; /*0x100b00092*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v31, &unk_1017CBF57, v32); /*0x100b000a7*/
    v18 = v37; /*0x100b000ac*/
    v37[4] = v31[2]; /*0x100b000c1*/
    v22 = v31[0]; /*0x100b000c5*/
    v18[3] = v31[1]; /*0x100b000d3*/
    v18[2] = v22; /*0x100b000d7*/
    v18[1] = 8; /*0x100b000db*/
LABEL_13:
    v5 = v18; /*0x100b000e3*/
    *v18 = 0x8000000000000000LL; /*0x100b000e6*/
    v11 = &v27; /*0x100b000e9*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v27); /*0x100b000f0*/
LABEL_14:
    if ( (v39 & 1) == 0 /*0x100b001e9*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v12, v9, v10) )
    {
      *((_BYTE *)v38 + 8) = 1; /*0x100b001fa*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v38); /*0x100b00118*/
    return v5; /*0x100b00118*/
  }
  v14 = v28[3]; /*0x100afffc8*/
  v15 = 160LL * v28[4]; /*0x100afffd3*/
  v16 = 0; /*0x100afffd7*/
  while ( *(_QWORD *)(v14 + v16 + 16) != a4 || memcmp(*(const void **)(v14 + v16 + 8), v13, a4) ) /*0x100b00009*/
  {
    v16 += 160; /*0x100afffe0*/
    if ( v15 == v16 ) /*0x100afffea*/
      goto LABEL_12; /*0x100afffea*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::retain::h36059badf9e23022(&v28[2], v34); /*0x100b00016*/
  LODWORD(v30) = 1; /*0x100b0001b*/
  v17 = std::time::SystemTime::now::h1fe79e41f9d5677f(&v28[2], v34); /*0x100b00025*/
  v18 = v37; /*0x100b0002a*/
  v19 = v36; /*0x100b00038*/
  v26[0] = v17; /*0x100b0003c*/
  LODWORD(v26[1]) = v20; /*0x100b00043*/
  std::time::SystemTime::duration_since::had059553cab94f96(v32, v26, 0, 0); /*0x100b0005b*/
  if ( LOBYTE(v32[0]) ) /*0x100b00067*/
    v21 = 0; /*0x100b00132*/
  else
    v21 = v32[1]; /*0x100b0006d*/
  v29 = v21; /*0x100b00134*/
  codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v27); /*0x100b00142*/
  codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v32, v19, &v27); /*0x100b00158*/
  if ( LODWORD(v32[0]) != 11 ) /*0x100b00164*/
  {
    qmemcpy(v18 + 1, v32, 0x60u); /*0x100b001e1*/
    v12 = &v32[12]; /*0x100b001e1*/
    goto LABEL_13; /*0x100b001e1*/
  }
  codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47( /*0x100b00182*/
    v32,
    *(_QWORD *)(v19 + 536),
    *(_QWORD *)(v19 + 544),
    (__int64)&v27);
  qmemcpy(v18, v32, 0x80u); /*0x100b00196*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v27); /*0x100b001a0*/
  if ( (v39 & 1) == 0 /*0x100b00203*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v27, v33, v24, v25) )
  {
    *((_BYTE *)v38 + 8) = 1; /*0x100b00210*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v38); /*0x100b001c4*/
  return v18; /*0x100b00120*/
}