// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x100417b60 depth=0
// request_existing_instance_activation_with_url_owner
__int64 __fastcall codexmate_lib::platform::single_instance::request_existing_instance_activation_with_url::h508a73c29234ec64(
        void *__src,
        __int64 __n)
{
  unsigned __int64 v2; // r14
  void *v4; // rbx
  size_t v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rax
  unsigned __int8 *v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  char *v27; // rax
  __int64 v28; // rcx
  size_t v29; // rbx
  __int64 v30; // r15
  __int64 v31; // r12
  void (__fastcall *v32)(__int64); // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  _UNKNOWN **v36; // rax
  __int64 v38; // r15
  _QWORD v39[2]; // [rsp+0h] [rbp-120h] BYREF
  size_t v40[3]; // [rsp+10h] [rbp-110h] BYREF
  size_t v41; // [rsp+28h] [rbp-F8h] BYREF
  void *v42; // [rsp+30h] [rbp-F0h]
  size_t v43; // [rsp+38h] [rbp-E8h]
  __int64 v44; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-D8h] BYREF
  __int64 (__fastcall **v46)(); // [rsp+50h] [rbp-D0h]
  __int64 v47; // [rsp+58h] [rbp-C8h]
  _QWORD v48[3]; // [rsp+60h] [rbp-C0h] BYREF
  _QWORD v49[2]; // [rsp+78h] [rbp-A8h] BYREF
  unsigned __int64 **v50; // [rsp+88h] [rbp-98h] BYREF
  unsigned __int64 **v51; // [rsp+90h] [rbp-90h]
  size_t __na; // [rsp+98h] [rbp-88h]
  void *v53; // [rsp+A0h] [rbp-80h]
  void *__srca; // [rsp+A8h] [rbp-78h]
  __int64 (__fastcall **v55)(); // [rsp+B0h] [rbp-70h]
  size_t v56; // [rsp+B8h] [rbp-68h]
  unsigned __int64 *v57; // [rsp+C0h] [rbp-60h] BYREF
  __int64 (__fastcall *v58)(_QWORD, _QWORD); // [rsp+C8h] [rbp-58h]
  unsigned int v59; // [rsp+D4h] [rbp-4Ch] BYREF
  __int128 v60; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-38h]
  __int64 (__fastcall *v62)(); // [rsp+F0h] [rbp-30h]

  v2 = __n; /*0x100417b74*/
  codexmate_lib::platform::single_instance::activation_request_path::h25d20e85da257612(&v41); /*0x100417b81*/
  v4 = v42; /*0x100417b86*/
  v5 = v43; /*0x100417b8d*/
  codexmate_lib::platform::single_instance::prepare_activation_dir::hdcba006b9aaea08f((size_t *)&v45, (__int64)v42, v43); /*0x100417ba1*/
  v6 = v45; /*0x100417ba6*/
  if ( !__OFSUB__(-v45, 1) ) /*0x100417bb3*/
    goto LABEL_69; /*0x100417bb3*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566((unsigned __int64 *)&v50); /*0x100417bc0*/
  *(_QWORD *)&v60 = 0; /*0x100417bc5*/
  *((_QWORD *)&v60 + 1) = 1; /*0x100417bcd*/
  v61 = 0; /*0x100417bd5*/
  v47 = 1610612768; /*0x100417bdd*/
  v45 = (__int64)&v60; /*0x100417bec*/
  v46 = &anon_0eedd02070250de7472aa97ee6b1a8ea_902; /*0x100417bfa*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100417c0f*/
                          (__int64)&v50,
                          (__int64)&v45) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100418309*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_903,
      55,
      (__int64)&v57,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_917,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_905);
  v53 = v4; /*0x100417c1c*/
  v55 = *((__int64 (__fastcall ***)())&v60 + 1); /*0x100417c32*/
  v7 = v60; /*0x100417c32*/
  v8 = v61; /*0x100417c36*/
  if ( __src ) /*0x100417c3d*/
  {
    if ( __n < 0 ) /*0x100417c42*/
    {
      v9 = 0; /*0x100417c44*/
      goto LABEL_6; /*0x100417c44*/
    }
    v56 = v5; /*0x100417c68*/
    if ( __n ) /*0x100417c6c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100417c6e*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x100417c7b*/
      v9 = 1; /*0x100417c80*/
      if ( !v10 ) /*0x100417c88*/
LABEL_6:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, __n); /*0x100417c46*/
      v5 = v10; /*0x100417c8a*/
    }
    else
    {
      v5 = 1; /*0x100417c8f*/
    }
    memcpy((void *)v5, __src, __n); /*0x100417c9e*/
  }
  else
  {
    v56 = v5; /*0x100417c5f*/
    v2 = 0x8000000000000000LL; /*0x100417c63*/
  }
  v45 = v7; /*0x100417ca3*/
  v46 = v55; /*0x100417cae*/
  v47 = v8; /*0x100417cb5*/
  v48[0] = v2; /*0x100417cbc*/
  v48[1] = v5; /*0x100417cc3*/
  v48[2] = v2; /*0x100417cca*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100417cd1*/
  v11 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x80u, 1u); /*0x100417ce0*/
  if ( !v11 ) /*0x100417ce8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10041835c*/
  *(_QWORD *)&v60 = 128; /*0x100417cee*/
  *((_QWORD *)&v60 + 1) = v11; /*0x100417cf6*/
  v57 = (unsigned __int64 *)&v60; /*0x100417cfe*/
  *v11 = 123; /*0x100417d02*/
  v61 = 1; /*0x100417d05*/
  LOWORD(v50) = 512; /*0x100417d0d*/
  v51 = &v57; /*0x100417d1a*/
  v12 = (unsigned __int8 *)v46; /*0x100417d21*/
  v13 = v47; /*0x100417d28*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d( /*0x100417d3b*/
    &v57,
    1,
    (unsigned __int8 *)&anon_0eedd02070250de7472aa97ee6b1a8ea_797,
    5u);
  v14 = v57; /*0x100417d4a*/
  v15 = v57[2]; /*0x100417d4e*/
  if ( *v57 == v15 ) /*0x100417d55*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v57, v15, 1, 1, 1u); /*0x100418323*/
    v15 = v14[2]; /*0x100418328*/
  }
  *(_BYTE *)(v14[1] + v15) = 58; /*0x100417d5f*/
  v16 = v15 + 1; /*0x100417d63*/
  v14[2] = v16; /*0x100417d66*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(&v57, v16, v12, v13); /*0x100417d77*/
  serde_core::ser::SerializeMap::serialize_entry::h544b962a0ac81076( /*0x100417d96*/
    (__int64)&v50,
    (__int64)"urldev.aimami.desktopaimami-activate.requestfailed to spawn thread",
    3,
    v48);
  if ( ((unsigned __int8)v50 & 1) == 0 && BYTE1(v50) ) /*0x100417dab*/
  {
    v21 = *v51; /*0x100417db4*/
    v22 = (*v51)[2]; /*0x100417db7*/
    if ( **v51 == v22 ) /*0x100417dbe*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v51, v22, 1, 1, 1u); /*0x100418344*/
      v22 = v21[2]; /*0x100418349*/
    }
    *(_BYTE *)(v21[1] + v22) = 125; /*0x100417dc8*/
    v21[2] = v22 + 1; /*0x100417dcf*/
  }
  v23 = v60; /*0x100417dd3*/
  if ( (_QWORD)v60 == 0x8000000000000000LL ) /*0x100417dde*/
  {
    v57 = *((unsigned __int64 **)&v60 + 1); /*0x100417de0*/
    v50 = &v57; /*0x100417de4*/
    v51 = (unsigned __int64 **)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100417df2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v60, byte_101229194, (unsigned __int64)&v50); /*0x100417e0b*/
    if ( *v57 == 1 ) /*0x100417e1b*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f((__int64 *)v57 + 1); /*0x1004180e0*/
    }
    else if ( !*v57 && v57[2] ) /*0x100417e2a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417e40*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004180f2*/
    v6 = v60; /*0x1004180f7*/
    goto LABEL_61; /*0x1004180ff*/
  }
  v24 = v61; /*0x100417e4a*/
  v55 = *((__int64 (__fastcall ***)())&v60 + 1); /*0x100417e56*/
  v25 = std::path::Path::file_name::hf6c2daad91e50ebf(v53, v56, v17, v18, v19, v20); /*0x100417e5a*/
  if ( v25 ) /*0x100417e62*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e((__int64)&v60, v25, v26); /*0x100417e6b*/
    v27 = "aimami-activate.requestfailed to spawn thread"; /*0x100417e74*/
    if ( !(_BYTE)v60 ) /*0x100417e7b*/
      v27 = *((char **)&v60 + 1); /*0x100417e7b*/
    v28 = 23; /*0x100417e80*/
    if ( !(_BYTE)v60 ) /*0x100417e85*/
      v28 = v61; /*0x100417e85*/
  }
  else
  {
    v28 = 23; /*0x100417e8c*/
    v27 = "aimami-activate.requestfailed to spawn thread"; /*0x100417e91*/
  }
  v39[0] = v27; /*0x100417e98*/
  v39[1] = v28; /*0x100417e9f*/
  *(_QWORD *)&v60 = v39; /*0x100417ead*/
  *((_QWORD *)&v60 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100417eb8*/
  v61 = (__int64)&v45; /*0x100417ec3*/
  v62 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100417ece*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v40, byte_10122918A, (unsigned __int64)&v60); /*0x100417ee4*/
  std::path::Path::_with_file_name::h86e79e0aa4e97973(&v50, v53, v56, v40[1], v40[2]); /*0x100417f09*/
  if ( v40[0] ) /*0x100417f18*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417f22*/
  LODWORD(v60) = 0; /*0x100417f27*/
  WORD2(v60) = 438; /*0x100417f2e*/
  *(_DWORD *)((char *)&v60 + 6) = 16777472; /*0x100417f34*/
  WORD5(v60) = 1; /*0x100417f3b*/
  v29 = __na; /*0x100417f54*/
  __srca = v51; /*0x100417f69*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa((__int64)v49, (__int64)&v60, v51, __na); /*0x100417f70*/
  if ( LODWORD(v49[0]) == 1 ) /*0x100417f7c*/
  {
    v44 = v49[1]; /*0x100417f89*/
    v57 = (unsigned __int64 *)&v44; /*0x100417f97*/
    v58 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100417fa2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v60, byte_1012291E0, (unsigned __int64)&v57); /*0x100417fb5*/
    if ( (v44 & 3) != 1 ) /*0x100417fc9*/
      goto LABEL_57; /*0x100417fc9*/
    v30 = *(_QWORD *)(v44 - 1); /*0x100417fd3*/
    v31 = *(_QWORD *)(v44 + 7); /*0x100417fd7*/
    v32 = *(void (__fastcall **)(__int64))v31; /*0x100417fdb*/
    if ( !*(_QWORD *)v31 ) /*0x100417fe2*/
      goto LABEL_40; /*0x100417fe2*/
    goto LABEL_39; /*0x100417fe2*/
  }
  v59 = HIDWORD(v49[0]); /*0x10041801d*/
  v33 = std::io::Write::write_all::h82bde2235fecb8a8(&v59, v55, v24); /*0x10041802b*/
  if ( v33 ) /*0x100418033*/
  {
    v49[0] = v33; /*0x100418039*/
    v57 = v49; /*0x100418040*/
    v58 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10041804b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v60, byte_1012291BC, (unsigned __int64)&v57); /*0x10041805e*/
    if ( (v49[0] & 3) == 1 ) /*0x100418072*/
    {
      v34 = *(_QWORD *)(v49[0] + 7LL); /*0x10041807c*/
      if ( *(_QWORD *)v34 ) /*0x100418080*/
        (*(void (__fastcall **)(_QWORD))v34)(*(_QWORD *)(v49[0] - 1LL)); /*0x10041808c*/
      if ( *(_QWORD *)(v34 + 8) ) /*0x10041808e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004180a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004180b2*/
    }
    v6 = v60; /*0x1004180b7*/
    close_NOCANCEL(v59); /*0x1004180c2*/
    if ( !v50 ) /*0x1004180d1*/
      goto LABEL_59; /*0x1004180d1*/
    goto LABEL_58; /*0x1004180d1*/
  }
  close_NOCANCEL(v59); /*0x100418107*/
  v35 = std::sys::fs::rename::h7934e6142c921014(__srca, v29, v53, v56); /*0x10041811b*/
  if ( v35 ) /*0x100418123*/
  {
    v49[0] = v35; /*0x100418129*/
    v36 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__srca, v29); /*0x100418137*/
    if ( ((unsigned __int8)v36 & 3) == 1 ) /*0x100418144*/
    {
      v56 = (size_t)v36 - 1; /*0x1004182a5*/
      v38 = *(__int64 *)((char *)v36 + 7); /*0x1004182ad*/
      if ( *(_QWORD *)v38 ) /*0x1004182b1*/
        (*(void (__fastcall **)(_QWORD))v38)(*(_UNKNOWN **)((char *)v36 - 1)); /*0x1004182bc*/
      if ( *(_QWORD *)(v38 + 8) ) /*0x1004182be*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004182ce*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004182e1*/
    }
    v57 = v49; /*0x10041814a*/
    v58 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100418155*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v60, byte_101229205, (unsigned __int64)&v57); /*0x100418168*/
    if ( (v49[0] & 3) != 1 ) /*0x10041817c*/
    {
LABEL_57:
      v6 = v60; /*0x100418182*/
      if ( !v50 ) /*0x100418194*/
        goto LABEL_59; /*0x100418194*/
      goto LABEL_58; /*0x100418194*/
    }
    v30 = *(_QWORD *)(v49[0] - 1LL); /*0x100418280*/
    v31 = *(_QWORD *)(v49[0] + 7LL); /*0x100418284*/
    v32 = *(void (__fastcall **)(__int64))v31; /*0x100418288*/
    if ( !*(_QWORD *)v31 ) /*0x10041828f*/
    {
LABEL_40:
      if ( *(_QWORD *)(v31 + 8) ) /*0x100417fe9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417ffb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10041800d*/
      goto LABEL_57; /*0x100418012*/
    }
LABEL_39:
    v32(v30); /*0x100417fe4*/
    goto LABEL_40; /*0x100417fe7*/
  }
  v6 = 0x8000000000000000LL; /*0x100418264*/
  if ( v50 ) /*0x100418271*/
LABEL_58:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100418196*/
LABEL_59:
  if ( v23 ) /*0x1004181a7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004181b5*/
LABEL_61:
  if ( v45 ) /*0x1004181c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004181d2*/
  if ( !(2LL * v48[0]) ) /*0x1004181de*/
  {
    LOBYTE(v23) = 1; /*0x1004181eb*/
    if ( v6 == 0x8000000000000000LL ) /*0x1004181f1*/
      goto LABEL_65; /*0x1004181f1*/
LABEL_69:
    if ( v6 ) /*0x100418241*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10041824e*/
    LODWORD(v23) = 0; /*0x100418253*/
    if ( v41 ) /*0x100418260*/
      goto LABEL_66; /*0x100418260*/
    return (unsigned int)v23; /*0x100418260*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100418231*/
  LOBYTE(v23) = 1; /*0x100418236*/
  if ( v6 != 0x8000000000000000LL ) /*0x10041823c*/
    goto LABEL_69; /*0x10041823c*/
LABEL_65:
  if ( v41 ) /*0x1004181fd*/
LABEL_66:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004181ff*/
  return (unsigned int)v23; /*0x100418213*/
}