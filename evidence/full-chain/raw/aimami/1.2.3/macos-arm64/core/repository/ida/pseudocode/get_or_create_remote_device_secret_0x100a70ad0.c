// __ZN13codexmate_lib4core10repository10Repository34get_or_create_remote_device_secret @ 0x100a70ad0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::get_or_create_remote_device_secret::h41ee1436abafe872(
        _QWORD *a1,
        _QWORD *a2)
{
  double v4; // xmm0_8
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  size_t v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  void *v15; // rax
  void *v16; // r13
  _WORD __dst[44]; // [rsp+0h] [rbp-170h] BYREF
  __int64 v19; // [rsp+58h] [rbp-118h]
  __int64 v20; // [rsp+60h] [rbp-110h]
  __int64 v21; // [rsp+68h] [rbp-108h]
  _BYTE v22[16]; // [rsp+98h] [rbp-D8h] BYREF
  _QWORD v23[12]; // [rsp+A8h] [rbp-C8h] BYREF
  __int64 *v24; // [rsp+108h] [rbp-68h] BYREF
  _BYTE *v25; // [rsp+110h] [rbp-60h] BYREF
  __int64 v26; // [rsp+118h] [rbp-58h] BYREF
  __int64 v27; // [rsp+120h] [rbp-50h]
  __int64 v28; // [rsp+128h] [rbp-48h]
  _QWORD *v29; // [rsp+130h] [rbp-40h] BYREF
  __int64 v30; // [rsp+138h] [rbp-38h]
  __int64 v31; // [rsp+140h] [rbp-30h]

  v4 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, (__int64)a2); /*0x100a70af1*/
  v5 = v19; /*0x100a70af6*/
  if ( !__OFSUB__(-v19, 1) ) /*0x100a70b03*/
  {
    v6 = v20; /*0x100a70b05*/
    v7 = v21; /*0x100a70b0c*/
    v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v20, v21); /*0x100a70b13*/
    v10 = v9; /*0x100a70b18*/
    if ( v9 ) /*0x100a70b1e*/
    {
      if ( v9 < 0 ) /*0x100a70b23*/
      {
        v11 = 0; /*0x100a70b29*/
        goto LABEL_5; /*0x100a70b29*/
      }
      v14 = (_QWORD *)v8; /*0x100a70c72*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x100a70c75*/
      v11 = 1; /*0x100a70c7a*/
      v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100a70c88*/
      if ( !v15 ) /*0x100a70c90*/
LABEL_5:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x100a70b2c*/
      v16 = v15; /*0x100a70c96*/
      v12 = v14; /*0x100a70c9c*/
      memcpy(v15, v14, v10); /*0x100a70ca2*/
      a1[1] = v10; /*0x100a70ca7*/
      a1[2] = v16; /*0x100a70cab*/
      a1[3] = v10; /*0x100a70caf*/
      goto LABEL_15; /*0x100a70caf*/
    }
  }
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v22); /*0x100a70b43*/
  v25 = v22; /*0x100a70b48*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v26); /*0x100a70b53*/
  v24 = &v26; /*0x100a70b58*/
  v23[0] = &v25; /*0x100a70b60*/
  v23[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a4d7c20b9399658; /*0x100a70b6e*/
  v23[2] = &v24; /*0x100a70b79*/
  v23[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a4d7c20b9399658; /*0x100a70b80*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v29, "\xC0\xC0", v23); /*0x100a70b99*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, &v29); /*0x100a70ba9*/
  v28 = v23[2]; /*0x100a70bc2*/
  v27 = v23[1]; /*0x100a70bd4*/
  v26 = v23[0]; /*0x100a70bd8*/
  if ( !__OFSUB__(-v5, 1) && v5 ) /*0x100a70bde*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v5, 1); /*0x100a70bef*/
  v21 = v28; /*0x100a70bf8*/
  v20 = v27; /*0x100a70c05*/
  v19 = v26; /*0x100a70c0a*/
  v12 = a2; /*0x100a70c1c*/
  codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v23, a2, (__int64)__dst, v4); /*0x100a70c1f*/
  if ( LODWORD(v23[0]) == 11 ) /*0x100a70c2b*/
  {
    a1[3] = v31; /*0x100a70c31*/
    v13 = v29; /*0x100a70c35*/
    a1[2] = v30; /*0x100a70c3d*/
    a1[1] = v13; /*0x100a70c41*/
LABEL_15:
    *a1 = 11; /*0x100a70cb3*/
    goto LABEL_16; /*0x100a70cb3*/
  }
  qmemcpy(a1, v23, 0x60u); /*0x100a70c56*/
  v12 = v29; /*0x100a70c59*/
  if ( v29 ) /*0x100a70c60*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x100a70c6b*/
LABEL_16:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v12); /*0x100a70cba*/
  return a1; /*0x100a70cc9*/
}