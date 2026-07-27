// __ZN13codexmate_lib8commands13voice_runtime23open_macos_privacy_pane @ 0x100214fd0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::commands::voice_runtime::open_macos_privacy_pane::h4dcab1d14683b6ad(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  void *v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rsi
  __int128 v11; // xmm0
  __int64 v12; // rsi
  unsigned int v14; // r13d
  unsigned int v15; // r12d
  _QWORD v16[25]; // [rsp+8h] [rbp-158h] BYREF
  _QWORD v17[3]; // [rsp+D0h] [rbp-90h] BYREF
  _QWORD v18[2]; // [rsp+E8h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+F8h] [rbp-68h] BYREF
  __int128 v20; // [rsp+100h] [rbp-60h]
  int v21; // [rsp+110h] [rbp-50h] BYREF
  __int64 v22; // [rsp+118h] [rbp-48h]
  unsigned int v23; // [rsp+120h] [rbp-40h]
  unsigned int v24; // [rsp+124h] [rbp-3Ch]
  __int64 v25; // [rsp+128h] [rbp-38h]
  __int64 v26; // [rsp+130h] [rbp-30h] BYREF

  v3 = a2[1]; /*0x100214fea*/
  v4 = a2[2]; /*0x100214fee*/
  if ( v4 == 6 ) /*0x100214ff6*/
  {
    if ( *(_DWORD *)v3 ^ 0x65657073 | *(unsigned __int16 *)(v3 + 4) ^ 0x6863 ) /*0x10021509f*/
      goto LABEL_10; /*0x1002150a1*/
    v5 = &unk_1015DBC8A; /*0x100215106*/
    v6 = 81; /*0x10021510d*/
  }
  else
  {
    if ( v4 != 10 ) /*0x100215000*/
    {
      if ( v4 == 13 && !(*(_QWORD *)v3 ^ 0x6269737365636361LL | *(_QWORD *)(v3 + 5) ^ 0x7974696C69626973LL) ) /*0x100215027*/
      {
        v5 = &unk_1015DBC3D; /*0x10021502c*/
        v6 = 77; /*0x100215033*/
        goto LABEL_13; /*0x100215039*/
      }
LABEL_10:
      v19 = a2[1]; /*0x1002150a3*/
      *(_QWORD *)&v20 = v4; /*0x1002150a7*/
      v16[0] = &v19; /*0x1002150af*/
      v16[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1002150bd*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &unk_1017B89C6, v16); /*0x1002150d9*/
      a1[2] = v17[2]; /*0x1002150e2*/
      v7 = v17[0]; /*0x1002150e6*/
      a1[1] = v17[1]; /*0x1002150f4*/
      goto LABEL_30; /*0x1002150f8*/
    }
    v6 = 74; /*0x100215056*/
    if ( *(_QWORD *)v3 ^ 0x6F68706F7263696DLL | *(unsigned __int16 *)(v3 + 8) ^ 0x656ELL ) /*0x10021505c*/
    {
      if ( *(_QWORD *)v3 ^ 0x6974616D6F747561LL | *(unsigned __int16 *)(v3 + 8) ^ 0x6E6FLL ) /*0x10021507d*/
        goto LABEL_10; /*0x100215080*/
      v5 = &unk_1015DBBF3; /*0x100215082*/
    }
    else
    {
      v5 = &unk_1015DBCDB; /*0x1002150fd*/
    }
  }
LABEL_13:
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(
    v16,
    "/usr/bin/opencopiedToClipboardtokio_tungstenite::tls::encryption::rustlsinternal error: entered unreachable code",
    13);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v16, v5, v6); /*0x100215138*/
  std::process::Command::spawn::hcb9dc323794e167a(&v21, v16); /*0x100215148*/
  if ( v21 != 2 ) /*0x100215151*/
  {
    v14 = v23; /*0x100215225*/
    v15 = v24; /*0x100215229*/
    if ( HIDWORD(v22) != -1 ) /*0x100215230*/
      close_NOCANCEL(HIDWORD(v22)); /*0x100215232*/
    if ( v14 != -1 ) /*0x10021523b*/
      close_NOCANCEL(v14); /*0x100215240*/
    if ( v15 != -1 ) /*0x100215249*/
      close_NOCANCEL(v15); /*0x10021524e*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v16); /*0x10021525a*/
    v7 = 0x8000000000000000LL; /*0x10021525f*/
LABEL_30:
    *a1 = v7; /*0x100215269*/
    v12 = *a2; /*0x10021526c*/
    if ( !*a2 ) /*0x10021526c*/
      return a1; /*0x100215272*/
    goto LABEL_21; /*0x100215272*/
  }
  v26 = v22; /*0x10021515b*/
  v18[0] = &v26; /*0x100215163*/
  v18[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10021516e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v19, &unk_1017B89DF, v18); /*0x100215181*/
  if ( (v26 & 3) == 1 ) /*0x100215192*/
  {
    v25 = v26 - 1; /*0x100215198*/
    v8 = *(_QWORD *)(v26 - 1); /*0x10021519c*/
    v9 = *(_QWORD *)(v26 + 7); /*0x1002151a0*/
    if ( *(_QWORD *)v9 ) /*0x1002151a4*/
      (*(void (__fastcall **)(__int64))v9)(v8); /*0x1002151b0*/
    v10 = *(_QWORD *)(v9 + 8); /*0x1002151b2*/
    if ( v10 ) /*0x1002151ba*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x1002151c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x1002151d7*/
  }
  v11 = v20; /*0x1002151e0*/
  *a1 = v19; /*0x1002151e4*/
  *(_OWORD *)(a1 + 1) = v11; /*0x1002151e7*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v16); /*0x1002151f3*/
  v12 = *a2; /*0x1002151f8*/
  if ( *a2 ) /*0x1002151f8*/
LABEL_21:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v12, 1); /*0x100215200*/
  return a1; /*0x100215210*/
}