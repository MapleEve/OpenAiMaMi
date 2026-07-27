// __ZN13codexmate_lib8platform15single_instance45request_existing_instance_activation_with_url @ 0x10035aae0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::single_instance::request_existing_instance_activation_with_url::h28b76a3b410e291e(
        __int64 *__src,
        signed __int64 __n)
{
  void *v4; // rbx
  size_t v5; // r12
  unsigned __int64 v6; // r13
  __int64 ***v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdi
  size_t v12; // rbx
  __int64 v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // r14
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v19; // r15
  void *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // rsi
  void *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rbx
  __int64 v38; // r15
  __int64 v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rsi
  _BYTE v44[24]; // [rsp+0h] [rbp-120h] BYREF
  _QWORD v45[2]; // [rsp+18h] [rbp-108h] BYREF
  __int64 v46; // [rsp+28h] [rbp-F8h] BYREF
  void *v47; // [rsp+30h] [rbp-F0h]
  size_t v48; // [rsp+38h] [rbp-E8h]
  void *v49; // [rsp+40h] [rbp-E0h]
  __int64 v50; // [rsp+48h] [rbp-D8h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+50h] [rbp-D0h]
  __int64 v52; // [rsp+58h] [rbp-C8h]
  signed __int64 v53; // [rsp+60h] [rbp-C0h] BYREF
  size_t v54; // [rsp+68h] [rbp-B8h]
  signed __int64 v55; // [rsp+70h] [rbp-B0h]
  __int64 v56; // [rsp+78h] [rbp-A8h] BYREF
  _QWORD v57[2]; // [rsp+80h] [rbp-A0h] BYREF
  void *v58; // [rsp+90h] [rbp-90h]
  __int64 **v59; // [rsp+98h] [rbp-88h] BYREF
  void *__srca; // [rsp+A0h] [rbp-80h]
  size_t __na; // [rsp+A8h] [rbp-78h]
  __int64 *v62; // [rsp+B0h] [rbp-70h] BYREF
  __int64 (__fastcall *v63)(_QWORD, _QWORD); // [rsp+B8h] [rbp-68h]
  __int64 (__fastcall **v64)(); // [rsp+C0h] [rbp-60h]
  unsigned int v65; // [rsp+CCh] [rbp-54h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-48h]
  __int64 v68; // [rsp+E0h] [rbp-40h]
  __int64 (__fastcall *v69)(); // [rsp+E8h] [rbp-38h]
  size_t v70; // [rsp+F0h] [rbp-30h]

  codexmate_lib::platform::single_instance::activation_request_path::hb58f9774144637eb((__int64)&v46); /*0x10035ab01*/
  v4 = v47; /*0x10035ab06*/
  v5 = v48; /*0x10035ab0d*/
  codexmate_lib::platform::single_instance::prepare_activation_dir::h902d2372d45b757d( /*0x10035ab21*/
    (unsigned __int64 *)&v50,
    (__int64)v47,
    v48);
  v6 = v50; /*0x10035ab26*/
  if ( !__OFSUB__(-v50, 1) ) /*0x10035ab33*/
  {
    v12 = (size_t)v51; /*0x10035abd6*/
LABEL_33:
    if ( v6 ) /*0x10035adef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v6, 1); /*0x10035adfc*/
    LODWORD(v15) = 0; /*0x10035ae01*/
    goto LABEL_36; /*0x10035ae01*/
  }
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v59); /*0x10035ab40*/
  v66 = 0; /*0x10035ab45*/
  v67 = 1; /*0x10035ab4d*/
  v68 = 0; /*0x10035ab55*/
  v52 = 1610612768; /*0x10035ab5d*/
  v50 = (__int64)&v66; /*0x10035ab6c*/
  v51 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10035ab7a*/
  v7 = &v59; /*0x10035ab81*/
  v8 = &v50; /*0x10035ab88*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x10035ab8f*/
                          &v59,
                          &v50) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035b20f*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      &v62,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v58 = v4; /*0x10035ab9c*/
  v9 = v66; /*0x10035abad*/
  v64 = (__int64 (__fastcall **)())v67; /*0x10035abb5*/
  v10 = v68; /*0x10035abb9*/
  if ( __src ) /*0x10035abc0*/
  {
    if ( __n < 0 ) /*0x10035abc5*/
    {
      v11 = 0; /*0x10035abc7*/
      goto LABEL_6; /*0x10035abc7*/
    }
    v70 = v5; /*0x10035abeb*/
    if ( __n ) /*0x10035abef*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v59, &v50); /*0x10035abf1*/
      v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10035abfe*/
      v11 = 1; /*0x10035ac03*/
      if ( !v13 ) /*0x10035ac0b*/
LABEL_6:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, __n); /*0x10035abc9*/
      v5 = v13; /*0x10035ac0d*/
    }
    else
    {
      v5 = 1; /*0x10035ac12*/
    }
    v7 = (__int64 ***)v5; /*0x10035ac18*/
    v8 = __src; /*0x10035ac1b*/
    memcpy((void *)v5, __src, __n); /*0x10035ac21*/
  }
  else
  {
    v70 = v5; /*0x10035abe2*/
    __n = 0x8000000000000000LL; /*0x10035abe6*/
  }
  v50 = v9; /*0x10035ac26*/
  v51 = v64; /*0x10035ac31*/
  v52 = v10; /*0x10035ac38*/
  v53 = __n; /*0x10035ac3f*/
  v54 = v5; /*0x10035ac46*/
  v55 = __n; /*0x10035ac4d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v8); /*0x10035ac54*/
  v14 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x10035ac63*/
  if ( !v14 ) /*0x10035ac6b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10035b27b*/
  v66 = 128; /*0x10035ac71*/
  v67 = (__int64)v14; /*0x10035ac79*/
  v62 = &v66; /*0x10035ac81*/
  *v14 = 123; /*0x10035ac85*/
  v68 = 1; /*0x10035ac88*/
  LOWORD(v59) = 256; /*0x10035ac90*/
  __srca = &v62; /*0x10035ac9d*/
  v15 = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10035accd*/
          &v59,
          &anon_b0ee9adff4519c22b647af231a5a39fa_280,
          5,
          &v50);
  if ( v15 ) /*0x10035acd3*/
    goto LABEL_19; /*0x10035acd3*/
  if ( (_BYTE)v59 == 1 ) /*0x10035acdc*/
  {
    v15 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10035ace3*/
    goto LABEL_19; /*0x10035ace6*/
  }
  v15 = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10035ad07*/
          &v59,
          &anon_b0ee9adff4519c22b647af231a5a39fa_673,
          3,
          &v53);
  if ( v15 ) /*0x10035ad0d*/
  {
LABEL_19:
    if ( v66 ) /*0x10035ad1a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x10035ad25*/
LABEL_21:
    v62 = (__int64 *)v15; /*0x10035ad2a*/
    v59 = &v62; /*0x10035ad2e*/
    __srca = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10035ad3c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66, &unk_1017BCB9A, &v59); /*0x10035ad52*/
    v16 = v62; /*0x10035ad57*/
    if ( *v62 == 1 ) /*0x10035ad62*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v62 + 1); /*0x10035ad86*/
    }
    else if ( !*v62 ) /*0x10035ad5b*/
    {
      v17 = v62[2]; /*0x10035ad69*/
      if ( v17 ) /*0x10035ad70*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62[1], v17, 1); /*0x10035ad7b*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 40, 8); /*0x10035ad98*/
    v6 = v66; /*0x10035ad9d*/
    v12 = v67; /*0x10035ada1*/
    goto LABEL_27; /*0x10035ada1*/
  }
  if ( ((unsigned __int8)v59 & 1) == 0 && BYTE1(v59) ) /*0x10035ae46*/
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10035ae5b*/
      *(_QWORD *)__srca,
      &anon_b0ee9adff4519c22b647af231a5a39fa_15,
      1);
  v15 = v67; /*0x10035ae64*/
  v64 = (__int64 (__fastcall **)())v66; /*0x10035ae68*/
  if ( v66 == 0x8000000000000000LL ) /*0x10035ae6f*/
    goto LABEL_21; /*0x10035ae6f*/
  v19 = v68; /*0x10035ae75*/
  v20 = v58; /*0x10035ae79*/
  v21 = std::path::Path::file_name::hf6c2daad91e50ebf(v58, v70); /*0x10035ae87*/
  if ( v21 ) /*0x10035ae8f*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(&v66, v21, v22); /*0x10035ae98*/
    v23 = "aimami-activate.requestfailed to spawn threadaimami-single-instance.lock"; /*0x10035aea1*/
    if ( !(_BYTE)v66 ) /*0x10035aea8*/
      v23 = (char *)v67; /*0x10035aea8*/
    v24 = 23; /*0x10035aead*/
    if ( !(_BYTE)v66 ) /*0x10035aeb2*/
      v24 = v68; /*0x10035aeb2*/
  }
  else
  {
    v24 = 23; /*0x10035aeb9*/
    v23 = "aimami-activate.requestfailed to spawn threadaimami-single-instance.lock"; /*0x10035aebe*/
  }
  v45[0] = v23; /*0x10035aec5*/
  v45[1] = v24; /*0x10035aecc*/
  v66 = (__int64)v45; /*0x10035aeda*/
  v67 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10035aee5*/
  v68 = (__int64)&v50; /*0x10035aee9*/
  v69 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035aef4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v44, &unk_1017BCB47, &v66); /*0x10035af0a*/
  std::path::Path::with_file_name::h9410a0f8570e3a41(&v59, v20, v70, v44); /*0x10035af24*/
  std::fs::File::create::hc5a762d818070fad(v57, &v59); /*0x10035af3a*/
  if ( LODWORD(v57[0]) == 1 ) /*0x10035af46*/
  {
    v56 = v57[1]; /*0x10035af53*/
    v62 = &v56; /*0x10035af61*/
    v63 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035af6c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66, &unk_1017BCBC2, &v62); /*0x10035af7f*/
    if ( (v56 & 3) == 1 ) /*0x10035af93*/
    {
      v25 = v56 - 1; /*0x10035af95*/
      v26 = *(_QWORD *)(v56 - 1); /*0x10035af99*/
      v27 = *(_QWORD *)(v56 + 7); /*0x10035af9d*/
      if ( *(_QWORD *)v27 ) /*0x10035afa1*/
        (*(void (__fastcall **)(__int64))v27)(v26); /*0x10035afad*/
      v28 = *(_QWORD *)(v27 + 8); /*0x10035afaf*/
      if ( v28 ) /*0x10035afb6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x10035afbf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x10035afd1*/
    }
    v6 = v66; /*0x10035afd6*/
    v12 = v67; /*0x10035afda*/
  }
  else
  {
    v65 = HIDWORD(v57[0]); /*0x10035afe9*/
    v29 = std::io::Write::write_all::he2fd9a54c4cbfe2a(&v65, v15, v19); /*0x10035aff6*/
    if ( !v29 ) /*0x10035affe*/
    {
      close_NOCANCEL(v65); /*0x10035b0cc*/
      v34 = __srca; /*0x10035b0d1*/
      v12 = __na; /*0x10035b0d5*/
      v35 = std::sys::fs::rename::h7934e6142c921014(__srca, __na, v58, v70); /*0x10035b0ea*/
      if ( v35 ) /*0x10035b0f2*/
      {
        v57[0] = v35; /*0x10035b0f8*/
        v36 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v34, v12); /*0x10035b105*/
        if ( (v36 & 3) == 1 ) /*0x10035b112*/
        {
          v49 = v34; /*0x10035b216*/
          v41 = v36 - 1; /*0x10035b220*/
          v70 = *(_QWORD *)(v36 - 1); /*0x10035b227*/
          v42 = *(_QWORD *)(v36 + 7); /*0x10035b22b*/
          if ( *(_QWORD *)v42 ) /*0x10035b22f*/
            (*(void (__fastcall **)(size_t))v42)(v70); /*0x10035b23b*/
          v43 = *(_QWORD *)(v42 + 8); /*0x10035b23d*/
          if ( v43 ) /*0x10035b244*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v43, *(_QWORD *)(v42 + 16)); /*0x10035b24e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 24, 8); /*0x10035b260*/
          v34 = v49; /*0x10035b265*/
        }
        v62 = v57; /*0x10035b118*/
        v63 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035b123*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66, &unk_1017BCB75, &v62); /*0x10035b136*/
        if ( (v57[0] & 3) == 1 ) /*0x10035b14a*/
        {
          v37 = v34; /*0x10035b14c*/
          v70 = v57[0] - 1LL; /*0x10035b153*/
          v38 = *(_QWORD *)(v57[0] - 1LL); /*0x10035b157*/
          v39 = *(_QWORD *)(v57[0] + 7LL); /*0x10035b15b*/
          if ( *(_QWORD *)v39 ) /*0x10035b15f*/
            (*(void (__fastcall **)(__int64))v39)(v38); /*0x10035b16b*/
          v40 = *(_QWORD *)(v39 + 8); /*0x10035b16d*/
          if ( v40 ) /*0x10035b174*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v40, *(_QWORD *)(v39 + 16)); /*0x10035b17d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, 24, 8); /*0x10035b190*/
          v34 = v37; /*0x10035b195*/
        }
        v6 = v66; /*0x10035b198*/
        v12 = v67; /*0x10035b19c*/
      }
      else
      {
        v6 = 0x8000000000000000LL; /*0x10035b1a2*/
      }
      if ( v59 ) /*0x10035b1af*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v59, 1); /*0x10035b1b9*/
      if ( v64 ) /*0x10035b1c5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v64, 1); /*0x10035b1cf*/
      core::ptr::drop_in_place$LT$codexmate_lib..platform..single_instance..ActivationRecord$GT$::h68947280de452c93(&v50); /*0x10035b1db*/
      LOBYTE(v15) = 1; /*0x10035b1e0*/
      if ( v6 != 0x8000000000000000LL ) /*0x10035b1e6*/
        goto LABEL_33; /*0x10035b1e6*/
      goto LABEL_36; /*0x10035b1e6*/
    }
    v57[0] = v29; /*0x10035b004*/
    v62 = v57; /*0x10035b00b*/
    v63 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035b016*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66, &unk_1017BCB51, &v62); /*0x10035b029*/
    if ( (v57[0] & 3) == 1 ) /*0x10035b03d*/
    {
      v30 = v57[0] - 1LL; /*0x10035b03f*/
      v31 = *(_QWORD *)(v57[0] - 1LL); /*0x10035b043*/
      v32 = *(_QWORD *)(v57[0] + 7LL); /*0x10035b047*/
      if ( *(_QWORD *)v32 ) /*0x10035b04b*/
        (*(void (__fastcall **)(__int64))v32)(v31); /*0x10035b057*/
      v33 = *(_QWORD *)(v32 + 8); /*0x10035b059*/
      if ( v33 ) /*0x10035b060*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v33, *(_QWORD *)(v32 + 16)); /*0x10035b069*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24, 8); /*0x10035b07b*/
    }
    v6 = v66; /*0x10035b080*/
    v12 = v67; /*0x10035b084*/
    close_NOCANCEL(v65); /*0x10035b08b*/
  }
  if ( v59 ) /*0x10035b09a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__srca, v59, 1); /*0x10035b0a5*/
  if ( v64 ) /*0x10035b0b1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v64, 1); /*0x10035b0bf*/
LABEL_27:
  if ( v50 ) /*0x10035adaf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x10035adbd*/
  if ( v53 != 0x8000000000000000LL && v53 ) /*0x10035add1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v53, 1); /*0x10035addf*/
  LOBYTE(v15) = 1; /*0x10035ade4*/
  if ( v6 != 0x8000000000000000LL ) /*0x10035adea*/
    goto LABEL_33; /*0x10035adea*/
LABEL_36:
  if ( v46 ) /*0x10035ae0e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x10035ae1c*/
  return (unsigned int)v15; /*0x10035ae24*/
}