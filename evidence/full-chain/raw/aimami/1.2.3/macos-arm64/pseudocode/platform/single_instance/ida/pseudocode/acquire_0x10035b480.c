// __ZN13codexmate_lib8platform15single_instance7acquire @ 0x10035b480
__int64 __fastcall codexmate_lib::platform::single_instance::acquire::h8eb3ff90bed1750e(__int64 a1)
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
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rsi
  _QWORD v30[2]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-C0h]
  __int64 v33; // [rsp+28h] [rbp-B8h]
  __int64 v34; // [rsp+34h] [rbp-ACh] BYREF
  int v35; // [rsp+3Ch] [rbp-A4h]
  int v36; // [rsp+40h] [rbp-A0h] BYREF
  int v37; // [rsp+44h] [rbp-9Ch]
  __int64 v38; // [rsp+48h] [rbp-98h]
  __int64 v39; // [rsp+50h] [rbp-90h] BYREF
  __int64 v40; // [rsp+58h] [rbp-88h]
  __int64 v41; // [rsp+60h] [rbp-80h]
  __int64 v42; // [rsp+68h] [rbp-78h] BYREF
  __int64 **v43; // [rsp+70h] [rbp-70h] BYREF
  __int128 v44; // [rsp+78h] [rbp-68h]
  __int64 (__fastcall *v45)(); // [rsp+88h] [rbp-58h]
  __int64 *v46; // [rsp+90h] [rbp-50h] BYREF
  __int128 v47; // [rsp+98h] [rbp-48h]
  __int64 v48; // [rsp+A8h] [rbp-38h]
  _DWORD v49[11]; // [rsp+B4h] [rbp-2Ch] BYREF

  dirs::data_dir::hb6650a44a938f2dc(&v43); /*0x10035b49b*/
  if ( __OFSUB__(0, v43) ) /*0x10035b4a2*/
  {
    std::env::temp_dir::h8078010294fc1613(&v46); /*0x10035b4ac*/
  }
  else
  {
    v47 = v44; /*0x10035b4c3*/
    v46 = (__int64 *)v43; /*0x10035b4c7*/
  }
  v2 = v47; /*0x10035b4cb*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10035b4ea*/
    &v31,
    v47,
    *((_QWORD *)&v47 + 1),
    "dev.aimami.desktopaimami-activate.requestfailed to spawn threadaimami-single-instance.lock",
    18);
  if ( v46 ) /*0x10035b4f6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v46, 1); /*0x10035b500*/
  LOWORD(v43) = 511; /*0x10035b505*/
  BYTE2(v43) = 1; /*0x10035b50b*/
  v3 = v32; /*0x10035b50f*/
  v4 = v33; /*0x10035b516*/
  v5 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v43, v32, v33); /*0x10035b527*/
  if ( v5 ) /*0x10035b52f*/
  {
    v39 = v5; /*0x10035b535*/
    v46 = &v39; /*0x10035b543*/
    *(_QWORD *)&v47 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035b54e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v43, &unk_1017BCBF0, &v46); /*0x10035b561*/
    if ( (v39 & 3) == 1 ) /*0x10035b575*/
    {
      v6 = v39 - 1; /*0x10035b577*/
      v7 = *(_QWORD *)(v39 - 1); /*0x10035b57b*/
      v8 = *(_QWORD *)(v39 + 7); /*0x10035b57f*/
      if ( *(_QWORD *)v8 ) /*0x10035b583*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x10035b58f*/
      v9 = *(_QWORD *)(v8 + 8); /*0x10035b591*/
      if ( v9 ) /*0x10035b598*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x10035b5a1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x10035b5b3*/
    }
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v44 + 1); /*0x10035b5bc*/
    v10 = v43; /*0x10035b5c0*/
    *(_QWORD *)(a1 + 8) = v44; /*0x10035b5c8*/
    *(_QWORD *)a1 = v10; /*0x10035b5cc*/
    goto LABEL_23; /*0x10035b5cf*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v39, v3, v4, "aimami-single-instance.lock", 27); /*0x10035b5ee*/
  v34 = 0x10101B600000000LL; /*0x10035b5fd*/
  v35 = 0x10000; /*0x10035b604*/
  v11 = v40; /*0x10035b60e*/
  v12 = v41; /*0x10035b615*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v36, &v34, v40, v41); /*0x10035b62d*/
  if ( v36 == 1 ) /*0x10035b639*/
  {
    v42 = v38; /*0x10035b646*/
    v30[0] = v11; /*0x10035b64a*/
    v30[1] = v12; /*0x10035b651*/
    v43 = (__int64 **)v30; /*0x10035b65f*/
    *(_QWORD *)&v44 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10035b66a*/
    *((_QWORD *)&v44 + 1) = &v42; /*0x10035b672*/
    v45 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035b67d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v46, &unk_1017BCC1C, &v43); /*0x10035b690*/
    if ( (v42 & 3) == 1 ) /*0x10035b6a1*/
    {
      v48 = v42 - 1; /*0x10035b6a7*/
      v13 = *(_QWORD *)(v42 - 1); /*0x10035b6ab*/
      v14 = *(_QWORD *)(v42 + 7); /*0x10035b6af*/
      if ( *(_QWORD *)v14 ) /*0x10035b6b3*/
        (*(void (__fastcall **)(__int64))v14)(v13); /*0x10035b6bf*/
      v15 = *(_QWORD *)(v14 + 8); /*0x10035b6c1*/
      if ( v15 ) /*0x10035b6c9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x10035b6d3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 24, 8); /*0x10035b6e6*/
    }
    v16 = v46; /*0x10035b6eb*/
    v17 = v47; /*0x10035b6ef*/
    *(_DWORD *)(a1 + 20) = HIDWORD(v47); /*0x10035b6f5*/
    *(_QWORD *)(a1 + 12) = *(_QWORD *)((char *)&v47 + 4); /*0x10035b6fd*/
    *(_QWORD *)a1 = v16; /*0x10035b701*/
    *(_DWORD *)(a1 + 8) = v17; /*0x10035b704*/
    v18 = v39; /*0x10035b708*/
    if ( v39 ) /*0x10035b712*/
LABEL_22:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v18, 1); /*0x10035b714*/
  }
  else
  {
    v20 = (unsigned int)v37; /*0x10035b74f*/
    v49[0] = v37; /*0x10035b755*/
    if ( flock(v37, 6) ) /*0x10035b75d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, 6); /*0x10035b766*/
      v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x10035b775*/
      if ( !v21 ) /*0x10035b77d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x10035b8fb*/
      qmemcpy(v21, "AiMaMi is already running", 25); /*0x10035b7a9*/
      *(_QWORD *)a1 = 25; /*0x10035b7b0*/
      *(_QWORD *)(a1 + 8) = v21; /*0x10035b7b7*/
      *(_QWORD *)(a1 + 16) = 25; /*0x10035b7bb*/
      close_NOCANCEL(v49[0]); /*0x10035b7c6*/
      v18 = v39; /*0x10035b7cb*/
      if ( v39 ) /*0x10035b7d5*/
        goto LABEL_22; /*0x10035b7d5*/
    }
    else
    {
      v22 = std::fs::File::set_len::h17c826d1834dc19c(v49, 0); /*0x10035b7e6*/
      if ( (v22 & 3) == 1 ) /*0x10035b7f3*/
      {
        v48 = v22 - 1; /*0x10035b85d*/
        v24 = *(_QWORD *)(v22 - 1); /*0x10035b861*/
        v25 = *(_QWORD *)(v22 + 7); /*0x10035b865*/
        if ( *(_QWORD *)v25 ) /*0x10035b869*/
          (*(void (__fastcall **)(__int64))v25)(v24); /*0x10035b875*/
        v26 = *(_QWORD *)(v25 + 8); /*0x10035b877*/
        if ( v26 ) /*0x10035b87e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v26, *(_QWORD *)(v25 + 16)); /*0x10035b887*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 24, 8); /*0x10035b89a*/
      }
      LODWORD(v46) = std::process::id::ha72f58ec62264e78(); /*0x10035b7fa*/
      v43 = &v46; /*0x10035b801*/
      *(_QWORD *)&v44 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10035b80c*/
      v23 = std::io::default_write_fmt::hb9dcd6bd862f2367((__int64)v49, (__int64)&unk_1017BCBE7, (__int64)&v43); /*0x10035b81f*/
      if ( (v23 & 3) == 1 ) /*0x10035b82c*/
      {
        v48 = v23 - 1; /*0x10035b8aa*/
        v27 = *(_QWORD *)(v23 - 1); /*0x10035b8ae*/
        v28 = *(_QWORD *)(v23 + 7); /*0x10035b8b2*/
        if ( *(_QWORD *)v28 ) /*0x10035b8b6*/
          (*(void (__fastcall **)(__int64))v28)(v27); /*0x10035b8c2*/
        v29 = *(_QWORD *)(v28 + 8); /*0x10035b8c4*/
        if ( v29 ) /*0x10035b8cb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16)); /*0x10035b8d4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 24, 8); /*0x10035b8e7*/
      }
      *(_DWORD *)(a1 + 8) = v49[0]; /*0x10035b83b*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10035b83f*/
      v18 = v39; /*0x10035b842*/
      if ( v39 ) /*0x10035b84c*/
        goto LABEL_22; /*0x10035b84c*/
    }
  }
LABEL_23:
  if ( v31 ) /*0x10035b72b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v31, 1); /*0x10035b735*/
  return a1; /*0x10035b73d*/
}