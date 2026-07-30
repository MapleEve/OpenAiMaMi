// __ZN13codexmate_lib8platform15single_instance3imp7acquire @ 0x1006221b0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::platform::single_instance::imp::acquire::h096cc1d4bfa26cca(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 **v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // rsi
  _QWORD v32[2]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-C0h]
  __int64 v35; // [rsp+28h] [rbp-B8h]
  __int64 v36; // [rsp+34h] [rbp-ACh] BYREF
  int v37; // [rsp+3Ch] [rbp-A4h]
  int v38; // [rsp+40h] [rbp-A0h] BYREF
  int v39; // [rsp+44h] [rbp-9Ch]
  __int64 v40; // [rsp+48h] [rbp-98h]
  __int64 v41; // [rsp+50h] [rbp-90h] BYREF
  __int64 v42; // [rsp+58h] [rbp-88h]
  __int64 v43; // [rsp+60h] [rbp-80h]
  __int64 v44; // [rsp+68h] [rbp-78h] BYREF
  __int64 **v45; // [rsp+70h] [rbp-70h] BYREF
  __int128 v46; // [rsp+78h] [rbp-68h]
  __int64 (__fastcall *v47)(); // [rsp+88h] [rbp-58h]
  __int64 *v48; // [rsp+90h] [rbp-50h] BYREF
  __int128 v49; // [rsp+98h] [rbp-48h]
  __int64 v50; // [rsp+A8h] [rbp-38h]
  _DWORD v51[11]; // [rsp+B4h] [rbp-2Ch] BYREF

  dirs::data_dir::hb6650a44a938f2dc(&v45); /*0x1006221cb*/
  if ( __OFSUB__(0, v45) ) /*0x1006221d2*/
  {
    std::env::temp_dir::h8078010294fc1613(&v48); /*0x1006221dc*/
  }
  else
  {
    v49 = v46; /*0x1006221f3*/
    v48 = (__int64 *)v45; /*0x1006221f7*/
  }
  v2 = v49; /*0x1006221fb*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10062221a*/
    &v33,
    v49,
    *((_QWORD *)&v49 + 1),
    "dev.aimami.desktopaimami-single-instance.lock",
    18);
  if ( v48 ) /*0x100622226*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x100622230*/
  LOWORD(v45) = 511; /*0x100622235*/
  BYTE2(v45) = 1; /*0x10062223b*/
  v3 = v34; /*0x10062223f*/
  v4 = v35; /*0x100622246*/
  v5 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v45, v34, v35); /*0x100622257*/
  if ( v5 ) /*0x10062225f*/
  {
    v41 = v5; /*0x100622265*/
    v48 = &v41; /*0x100622273*/
    *(_QWORD *)&v49 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10062227e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v45, &unk_1017C9788, &v48); /*0x100622291*/
    if ( (v41 & 3) == 1 ) /*0x1006222a5*/
    {
      v6 = v41 - 1; /*0x1006222a7*/
      v7 = *(_QWORD *)(v41 - 1); /*0x1006222ab*/
      v8 = *(_QWORD *)(v41 + 7); /*0x1006222af*/
      if ( *(_QWORD *)v8 ) /*0x1006222b3*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x1006222bf*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1006222c1*/
      if ( v9 ) /*0x1006222c8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1006222d1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x1006222e3*/
    }
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v46 + 1); /*0x1006222ec*/
    v10 = v45; /*0x1006222f0*/
    *(_QWORD *)(a1 + 8) = v46; /*0x1006222f8*/
    *(_QWORD *)a1 = v10; /*0x1006222fc*/
    goto LABEL_23; /*0x1006222ff*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v41, v3, v4, "aimami-single-instance.lock", 27); /*0x10062231e*/
  v36 = 0x10101B600000000LL; /*0x10062232d*/
  v37 = 0x10000; /*0x100622334*/
  v11 = v42; /*0x10062233e*/
  v12 = v43; /*0x100622345*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v38, &v36, v42, v43); /*0x10062235d*/
  if ( v38 == 1 ) /*0x100622369*/
  {
    v44 = v40; /*0x100622376*/
    v32[0] = v11; /*0x10062237a*/
    v32[1] = v12; /*0x100622381*/
    v45 = (__int64 **)v32; /*0x10062238f*/
    *(_QWORD *)&v46 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10062239a*/
    *((_QWORD *)&v46 + 1) = &v44; /*0x1006223a2*/
    v47 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1006223ad*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v48, &unk_1017C97B4, &v45); /*0x1006223c0*/
    if ( (v44 & 3) == 1 ) /*0x1006223d1*/
    {
      v50 = v44 - 1; /*0x1006223d7*/
      v13 = *(_QWORD *)(v44 - 1); /*0x1006223db*/
      v14 = *(_QWORD *)(v44 + 7); /*0x1006223df*/
      if ( *(_QWORD *)v14 ) /*0x1006223e3*/
        (*(void (__fastcall **)(__int64))v14)(v13); /*0x1006223ef*/
      v15 = *(_QWORD *)(v14 + 8); /*0x1006223f1*/
      if ( v15 ) /*0x1006223f9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x100622403*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 24, 8); /*0x100622416*/
    }
    v16 = v48; /*0x10062241b*/
    v17 = v49; /*0x10062241f*/
    *(_DWORD *)(a1 + 20) = HIDWORD(v49); /*0x100622425*/
    *(_QWORD *)(a1 + 12) = *(_QWORD *)((char *)&v49 + 4); /*0x10062242d*/
    *(_QWORD *)a1 = v16; /*0x100622431*/
    *(_DWORD *)(a1 + 8) = v17; /*0x100622434*/
    v18 = v41; /*0x100622438*/
    if ( v41 ) /*0x100622442*/
LABEL_22:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v18, 1); /*0x100622444*/
  }
  else
  {
    v20 = (unsigned int)v39; /*0x10062247f*/
    v51[0] = v39; /*0x100622485*/
    if ( flock(v39, 6) ) /*0x10062248d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, 6, v21, v22); /*0x100622496*/
      v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x1006224a5*/
      if ( !v23 ) /*0x1006224ad*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x10062262b*/
      qmemcpy(v23, "AiMaMi is already running", 25); /*0x1006224d9*/
      *(_QWORD *)a1 = 25; /*0x1006224e0*/
      *(_QWORD *)(a1 + 8) = v23; /*0x1006224e7*/
      *(_QWORD *)(a1 + 16) = 25; /*0x1006224eb*/
      close_NOCANCEL(v51[0]); /*0x1006224f6*/
      v18 = v41; /*0x1006224fb*/
      if ( v41 ) /*0x100622505*/
        goto LABEL_22; /*0x100622505*/
    }
    else
    {
      v24 = std::fs::File::set_len::h17c826d1834dc19c(v51, 0); /*0x100622516*/
      if ( (v24 & 3) == 1 ) /*0x100622523*/
      {
        v50 = v24 - 1; /*0x10062258d*/
        v26 = *(_QWORD *)(v24 - 1); /*0x100622591*/
        v27 = *(_QWORD *)(v24 + 7); /*0x100622595*/
        if ( *(_QWORD *)v27 ) /*0x100622599*/
          (*(void (__fastcall **)(__int64))v27)(v26); /*0x1006225a5*/
        v28 = *(_QWORD *)(v27 + 8); /*0x1006225a7*/
        if ( v28 ) /*0x1006225ae*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x1006225b7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 24, 8); /*0x1006225ca*/
      }
      LODWORD(v48) = std::process::id::ha72f58ec62264e78(); /*0x10062252a*/
      v45 = &v48; /*0x100622531*/
      *(_QWORD *)&v46 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10062253c*/
      v25 = std::io::default_write_fmt::h507cc066c54ef1ea(v51, &unk_1017C977F, &v45); /*0x10062254f*/
      if ( (v25 & 3) == 1 ) /*0x10062255c*/
      {
        v50 = v25 - 1; /*0x1006225da*/
        v29 = *(_QWORD *)(v25 - 1); /*0x1006225de*/
        v30 = *(_QWORD *)(v25 + 7); /*0x1006225e2*/
        if ( *(_QWORD *)v30 ) /*0x1006225e6*/
          (*(void (__fastcall **)(__int64))v30)(v29); /*0x1006225f2*/
        v31 = *(_QWORD *)(v30 + 8); /*0x1006225f4*/
        if ( v31 ) /*0x1006225fb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, *(_QWORD *)(v30 + 16)); /*0x100622604*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 24, 8); /*0x100622617*/
      }
      *(_DWORD *)(a1 + 8) = v51[0]; /*0x10062256b*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10062256f*/
      v18 = v41; /*0x100622572*/
      if ( v41 ) /*0x10062257c*/
        goto LABEL_22; /*0x10062257c*/
    }
  }
LABEL_23:
  if ( v33 ) /*0x10062245b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v33, 1); /*0x100622465*/
  return a1; /*0x10062246d*/
}