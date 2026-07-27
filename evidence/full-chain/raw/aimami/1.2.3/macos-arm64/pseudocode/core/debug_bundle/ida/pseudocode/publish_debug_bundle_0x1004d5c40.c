// __ZN13codexmate_lib4core12debug_bundle20publish_debug_bundle @ 0x1004d5c40 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::core::debug_bundle::publish_debug_bundle::hc5eef72ec3296fd9(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5)
{
  void *v7; // r13
  _QWORD *v8; // rbx
  char *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rcx
  signed __int64 v16; // r13
  const void *v17; // rsi
  char *v18; // r15
  const void *v19; // r14
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r12
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  volatile signed __int64 *result; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 i; // rax
  __int64 v33; // rsi
  __int64 j; // rax
  __int64 v35; // rsi
  size_t v36; // r15
  __int64 v37; // r14
  __int64 v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // r12
  __int64 v43; // rsi
  _QWORD *v44; // rcx
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // r13
  __int64 v48; // rsi
  _OWORD v49[5]; // [rsp+10h] [rbp-370h] BYREF
  __int64 v50; // [rsp+60h] [rbp-320h] BYREF
  __int128 v51; // [rsp+68h] [rbp-318h]
  _QWORD v52[3]; // [rsp+78h] [rbp-308h] BYREF
  __int64 v53; // [rsp+90h] [rbp-2F0h] BYREF
  __int128 v54; // [rsp+98h] [rbp-2E8h]
  char v55; // [rsp+B8h] [rbp-2C8h] BYREF
  _BYTE __dst[136]; // [rsp+F8h] [rbp-288h] BYREF
  __int64 v57; // [rsp+180h] [rbp-200h]
  __int64 v58; // [rsp+188h] [rbp-1F8h]
  __int64 v59; // [rsp+190h] [rbp-1F0h] BYREF
  __int64 v60; // [rsp+198h] [rbp-1E8h] BYREF
  __int64 v61; // [rsp+1A0h] [rbp-1E0h]
  __int64 v62; // [rsp+1A8h] [rbp-1D8h]
  void *v63; // [rsp+1B0h] [rbp-1D0h]
  __int64 v64; // [rsp+1B8h] [rbp-1C8h]
  size_t v65; // [rsp+1C0h] [rbp-1C0h]
  _QWORD v66[13]; // [rsp+1C8h] [rbp-1B8h] BYREF
  _QWORD __src[17]; // [rsp+230h] [rbp-150h] BYREF
  __int64 v68; // [rsp+2B8h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+2C0h] [rbp-C0h]
  volatile signed __int64 *v70; // [rsp+2D0h] [rbp-B0h] BYREF
  signed __int64 v71; // [rsp+2D8h] [rbp-A8h]
  __int128 v72; // [rsp+2E0h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+2F0h] [rbp-90h]
  __int128 *v74; // [rsp+2F8h] [rbp-88h] BYREF
  __int64 (__fastcall *v75)(); // [rsp+300h] [rbp-80h]
  __int64 v76; // [rsp+308h] [rbp-78h]
  _QWORD *v77; // [rsp+310h] [rbp-70h]
  _BYTE v78[24]; // [rsp+318h] [rbp-68h] BYREF
  __int128 v79; // [rsp+330h] [rbp-50h] BYREF
  __int128 *v80; // [rsp+340h] [rbp-40h]
  __int64 (__fastcall *v81)(); // [rsp+348h] [rbp-38h]

  v7 = a2; /*0x1004d5c5a*/
  v8 = a1; /*0x1004d5c5d*/
  v61 = a4; /*0x1004d5c60*/
  v53 = a4; /*0x1004d5c67*/
  v54 = (unsigned __int64)a5; /*0x1004d5c6e*/
  zip::read::_$LT$impl$u20$zip..read..zip_archive..ZipArchive$LT$R$GT$$GT$::new::hb01808466886fc98(v66, &v53); /*0x1004d5c8e*/
  if ( !v66[0] ) /*0x1004d5c9d*/
  {
    v80 = (__int128 *)v66[3]; /*0x1004d6071*/
    v79 = *(_OWORD *)&v66[1]; /*0x1004d6087*/
    v74 = &v79; /*0x1004d608f*/
    v75 = _$LT$zip..result..ZipError$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee28b71fd8f1b3c; /*0x1004d609d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v53, &unk_1017BF6B6, &v74); /*0x1004d60b6*/
    v26 = v53; /*0x1004d60bb*/
    *(_OWORD *)v78 = v54; /*0x1004d60cd*/
    core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h1af0e0357529f8d4(v79, *((_QWORD *)&v79 + 1)); /*0x1004d60e0*/
    result = *(volatile signed __int64 **)v78; /*0x1004d60e5*/
    *(_QWORD *)&v72 = *(_QWORD *)v78; /*0x1004d60ed*/
    *(_QWORD *)&v49[0] = *(_QWORD *)v78; /*0x1004d60f8*/
    *(_OWORD *)((char *)v49 + 8) = *(_OWORD *)&v78[8]; /*0x1004d60ff*/
LABEL_36:
    qmemcpy(v8 + 2, v49, 0x50u); /*0x1004d623c*/
    *v8 = 10; /*0x1004d624f*/
    v8[1] = v26; /*0x1004d6256*/
    return result; /*0x1004d626b*/
  }
  v65 = a3; /*0x1004d5ca3*/
  v64 = a5; /*0x1004d5caa*/
  v77 = a1; /*0x1004d5cb1*/
  v68 = v66[0]; /*0x1004d5cca*/
  v69 = *(_OWORD *)&v66[1]; /*0x1004d5cd1*/
  v70 = (volatile signed __int64 *)v66[3]; /*0x1004d5cdf*/
  v74 = nullptr; /*0x1004d5ce6*/
  v76 = 0; /*0x1004d5cf1*/
  v62 = *(_QWORD *)(v66[3] + 80LL); /*0x1004d5cfd*/
  if ( v62 ) /*0x1004d5d07*/
  {
    v9 = &v55; /*0x1004d5d0d*/
    v10 = 0; /*0x1004d5d22*/
    v63 = a2; /*0x1004d5d24*/
    while ( 1 ) /*0x1004d5d2b*/
    {
      v59 = v10; /*0x1004d5d2b*/
      zip::read::_$LT$impl$u20$zip..read..zip_archive..ZipArchive$LT$R$GT$$GT$::by_index_with_optional_password::hac3432f322646960( /*0x1004d5d3a*/
        v66,
        &v68,
        v10,
        0);
      v11 = v66[0]; /*0x1004d5d3f*/
      if ( v66[0] == 3 ) /*0x1004d5d4a*/
      {
        v73 = v66[3]; /*0x1004d6498*/
        v72 = *(_OWORD *)&v66[1]; /*0x1004d64ad*/
        *(_QWORD *)&v79 = &v59; /*0x1004d64bb*/
        *((_QWORD *)&v79 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004d64c6*/
        v80 = &v72; /*0x1004d64d1*/
        v81 = _$LT$zip..result..ZipError$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee28b71fd8f1b3c; /*0x1004d64dc*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017BF68B, &v79); /*0x1004d64ef*/
        v26 = *(_QWORD *)v78; /*0x1004d64f4*/
        v79 = *(_OWORD *)&v78[8]; /*0x1004d6500*/
        core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h1af0e0357529f8d4(v72, *((_QWORD *)&v72 + 1)); /*0x1004d6516*/
        v49[0] = v79; /*0x1004d6523*/
        goto LABEL_19; /*0x1004d6531*/
      }
      v58 = v66[4]; /*0x1004d5d5f*/
      v57 = v66[3]; /*0x1004d5d66*/
      *((_QWORD *)v9 + 7) = v66[12]; /*0x1004d5d71*/
      *((_QWORD *)v9 + 6) = v66[11]; /*0x1004d5d79*/
      *((_QWORD *)v9 + 5) = v66[10]; /*0x1004d5d81*/
      *((_QWORD *)v9 + 4) = v66[9]; /*0x1004d5d89*/
      *((_QWORD *)v9 + 3) = v66[8]; /*0x1004d5d91*/
      *((_QWORD *)v9 + 2) = v66[7]; /*0x1004d5d99*/
      v12 = v66[5]; /*0x1004d5d9d*/
      *((_QWORD *)v9 + 1) = v66[6]; /*0x1004d5da5*/
      *(_QWORD *)v9 = v12; /*0x1004d5da9*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x1004d5dbf*/
      v13 = &v53; /*0x1004d5dc4*/
      if ( v11 == 2 ) /*0x1004d5dcf*/
        v13 = (__int64 *)v66[1]; /*0x1004d5dd1*/
      ++v10; /*0x1004d5dd8*/
      v14 = *(_OWORD *)&v66[1]; /*0x1004d5ddb*/
      v15 = v57; /*0x1004d5de2*/
      *((_QWORD *)v9 - 1) = v58; /*0x1004d5dfe*/
      *((_QWORD *)v9 - 2) = v15; /*0x1004d5e02*/
      v53 = v11; /*0x1004d5e06*/
      v54 = v14; /*0x1004d5e0d*/
      v16 = v13[9]; /*0x1004d5e14*/
      if ( v16 < 0 ) /*0x1004d5e1b*/
      {
        v20 = 0; /*0x1004d6112*/
        goto LABEL_23; /*0x1004d6112*/
      }
      v17 = (const void *)v13[8]; /*0x1004d5e21*/
      if ( v16 ) /*0x1004d5e25*/
      {
        v18 = v9; /*0x1004d5e27*/
        v19 = (const void *)v13[8]; /*0x1004d5e2a*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v17); /*0x1004d5e2d*/
        v20 = 1; /*0x1004d5e32*/
        v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x1004d5e40*/
        if ( !v21 ) /*0x1004d5e48*/
        {
          v71 = v16; /*0x1004d66b2*/
LABEL_23:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v71); /*0x1004d6115*/
        }
        v17 = v19; /*0x1004d5e4e*/
        v9 = v18; /*0x1004d5e51*/
      }
      else
      {
        v21 = 1; /*0x1004d5e56*/
      }
      v22 = v21; /*0x1004d5e61*/
      memcpy((void *)v21, v17, v16); /*0x1004d5e64*/
      *(_QWORD *)v78 = v16; /*0x1004d5e69*/
      v71 = v22; /*0x1004d5e6d*/
      *(_QWORD *)&v78[8] = v22; /*0x1004d5e74*/
      *(_QWORD *)&v78[16] = v16; /*0x1004d5e78*/
      v23 = std::io::copy::stack_buffer_copy::h6d2d36e54ea4d1d6((__int64)&v53); /*0x1004d5e87*/
      v7 = v63; /*0x1004d5e95*/
      if ( (v23 & 1) != 0 ) /*0x1004d5e9c*/
        break; /*0x1004d5e9c*/
      *(_OWORD *)&v66[1] = *(_OWORD *)&v78[8]; /*0x1004d5eb5*/
      v66[0] = *(_QWORD *)v78; /*0x1004d5ebc*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(&v74, v66); /*0x1004d5ecd*/
      core::ptr::drop_in_place$LT$zip..read..ZipFile$LT$std..io..cursor..Cursor$LT$$RF$$u5b$u8$u5d$$GT$$GT$$GT$::h61f49f56952ecac9(&v53); /*0x1004d5ed9*/
      if ( v62 == v10 ) /*0x1004d5eec*/
        goto LABEL_14; /*0x1004d5eec*/
    }
    *(_QWORD *)&v72 = v24; /*0x1004d6561*/
    v66[0] = v78; /*0x1004d656c*/
    v66[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d657a*/
    v66[2] = &v72; /*0x1004d6588*/
    v66[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004d6596*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v79, &unk_1017BF6D7, v66); /*0x1004d65af*/
    v66[0] = *((_QWORD *)&v79 + 1); /*0x1004d65bc*/
    v26 = v79; /*0x1004d65bc*/
    v66[1] = v80; /*0x1004d65c7*/
    if ( (v72 & 3) == 1 ) /*0x1004d65dd*/
    {
      v45 = v72 - 1; /*0x1004d65df*/
      v46 = *(_QWORD *)(v72 - 1); /*0x1004d65e3*/
      v47 = *(_QWORD *)(v72 + 7); /*0x1004d65e7*/
      if ( *(_QWORD *)v47 ) /*0x1004d65eb*/
        (*(void (__fastcall **)(__int64))v47)(v46); /*0x1004d65f7*/
      v48 = *(_QWORD *)(v47 + 8); /*0x1004d65f9*/
      if ( v48 ) /*0x1004d6600*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v48, *(_QWORD *)(v47 + 16)); /*0x1004d6609*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 24, 8); /*0x1004d661b*/
    }
    qmemcpy(v49, v66, sizeof(v49)); /*0x1004d6633*/
    if ( *(_QWORD *)v78 ) /*0x1004d663d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v78[8], *(_QWORD *)v78, 1); /*0x1004d6648*/
    core::ptr::drop_in_place$LT$zip..read..ZipFile$LT$std..io..cursor..Cursor$LT$$RF$$u5b$u8$u5d$$GT$$GT$$GT$::h61f49f56952ecac9(&v53); /*0x1004d6654*/
    goto LABEL_19; /*0x1004d6659*/
  }
LABEL_14:
  v52[0] = &off_101964068; /*0x1004d5ef2*/
  v52[1] = &off_1019640E8; /*0x1004d5f07*/
  v52[2] = &v74; /*0x1004d5f15*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2535f47646c2eb25( /*0x1004d5f2a*/
    &v79,
    v52);
  if ( v80 ) /*0x1004d5f36*/
  {
    v25 = *((_QWORD *)&v79 + 1); /*0x1004d5f3c*/
    alloc::str::join_generic_copy::ha9d2732844b8793d(v66, *((_QWORD *)&v79 + 1), v80, ", ", 2); /*0x1004d5f57*/
    v54 = *(_OWORD *)&v66[1]; /*0x1004d5f78*/
    v53 = v66[0]; /*0x1004d5f7f*/
    v66[0] = &v53; /*0x1004d5f8d*/
    v66[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d5f9b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v50, &unk_1017BF650, v66); /*0x1004d5fb7*/
    if ( v53 ) /*0x1004d5fc6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v53, 1); /*0x1004d5fd4*/
    v26 = v50; /*0x1004d5fd9*/
    v49[0] = v51; /*0x1004d5fe7*/
    if ( (_QWORD)v79 ) /*0x1004d6003*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 16 * v79, 8); /*0x1004d6011*/
LABEL_19:
    if ( v74 ) /*0x1004d6020*/
    {
      v27 = v76; /*0x1004d602a*/
      v66[1] = 0; /*0x1004d602e*/
      v66[2] = v74; /*0x1004d6039*/
      v66[3] = v75; /*0x1004d6040*/
      v66[5] = 0; /*0x1004d6047*/
      v66[6] = v74; /*0x1004d6052*/
      v66[7] = v75; /*0x1004d6059*/
      v28 = 1; /*0x1004d6060*/
    }
    else
    {
      v28 = 0; /*0x1004d6198*/
      v27 = 0; /*0x1004d619a*/
    }
    v66[0] = v28; /*0x1004d619c*/
    v66[4] = v28; /*0x1004d61a3*/
    v66[8] = v27; /*0x1004d61aa*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v53, v66); /*0x1004d61bf*/
    for ( i = v53; v53; i = v53 ) /*0x1004d61ce*/
    {
      v33 = *(_QWORD *)(i + 24LL * *((_QWORD *)&v54 + 1) + 8); /*0x1004d61eb*/
      if ( v33 ) /*0x1004d61f3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(i + 24LL * *((_QWORD *)&v54 + 1) + 16), v33, 1); /*0x1004d6203*/
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v53, v66); /*0x1004d620e*/
    }
    result = v70; /*0x1004d621f*/
    if ( !_InterlockedDecrement64(v70) ) /*0x1004d6226*/
      result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h23d147e93cc57aee(&v70); /*0x1004d6233*/
    v8 = v77; /*0x1004d6238*/
    goto LABEL_36; /*0x1004d6238*/
  }
  if ( (_QWORD)v79 ) /*0x1004d612d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v79 + 1), 16 * v79, 8); /*0x1004d613c*/
  if ( v74 ) /*0x1004d614e*/
  {
    v30 = v76; /*0x1004d6158*/
    v66[1] = 0; /*0x1004d615c*/
    v66[2] = v74; /*0x1004d6167*/
    v66[3] = v75; /*0x1004d616e*/
    v66[5] = 0; /*0x1004d6175*/
    v66[6] = v74; /*0x1004d6180*/
    v66[7] = v75; /*0x1004d6187*/
    v31 = 1; /*0x1004d618e*/
  }
  else
  {
    v31 = 0; /*0x1004d626c*/
    v30 = 0; /*0x1004d626e*/
  }
  v66[0] = v31; /*0x1004d6270*/
  v66[4] = v31; /*0x1004d6277*/
  v66[8] = v30; /*0x1004d627e*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v53, v66); /*0x1004d6296*/
  for ( j = v53; v53; j = v53 ) /*0x1004d62a5*/
  {
    v35 = *(_QWORD *)(j + 24LL * *((_QWORD *)&v54 + 1) + 8); /*0x1004d62cb*/
    if ( v35 ) /*0x1004d62d3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(j + 24LL * *((_QWORD *)&v54 + 1) + 16), v35, 1); /*0x1004d62e3*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v53, v66); /*0x1004d62ee*/
  }
  if ( !_InterlockedDecrement64(v70) ) /*0x1004d6306*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h23d147e93cc57aee(&v70); /*0x1004d6313*/
  v36 = v65; /*0x1004d631e*/
  v37 = v64; /*0x1004d632f*/
  v38 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v7, v65, v61, v64, 0); /*0x1004d633c*/
  if ( v38 ) /*0x1004d6344*/
  {
    *(_QWORD *)&v79 = v38; /*0x1004d634a*/
    *(_QWORD *)&v49[0] = v7; /*0x1004d634e*/
    *((_QWORD *)&v49[0] + 1) = v36; /*0x1004d6355*/
    v66[0] = v49; /*0x1004d6363*/
    v66[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004d6371*/
    v66[2] = &v79; /*0x1004d6378*/
    v66[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004d6386*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v53, &unk_1017BF601, v66); /*0x1004d63a2*/
    v66[0] = v53; /*0x1004d63b5*/
    *(_OWORD *)&v66[1] = v54; /*0x1004d63bc*/
    v39 = v77; /*0x1004d63dd*/
    if ( (v79 & 3) == 1 ) /*0x1004d63e1*/
    {
      v40 = v79 - 1; /*0x1004d63e3*/
      v41 = *(_QWORD *)(v79 - 1); /*0x1004d63e7*/
      v42 = *(_QWORD *)(v79 + 7); /*0x1004d63eb*/
      if ( *(_QWORD *)v42 ) /*0x1004d63ef*/
        (*(void (__fastcall **)(__int64))v42)(v41); /*0x1004d63fb*/
      v43 = *(_QWORD *)(v42 + 8); /*0x1004d63fd*/
      if ( v43 ) /*0x1004d6405*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v43, *(_QWORD *)(v42 + 16)); /*0x1004d640f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 24, 8); /*0x1004d6421*/
    }
    v39[3] = v66[2]; /*0x1004d642d*/
    result = (volatile signed __int64 *)v66[0]; /*0x1004d6431*/
    v39[2] = v66[1]; /*0x1004d643f*/
    v39[1] = result; /*0x1004d6443*/
    goto LABEL_52; /*0x1004d6443*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v66, v7, v36); /*0x1004d6460*/
  if ( LODWORD(v66[0]) == 1 ) /*0x1004d646c*/
  {
    result = (volatile signed __int64 *)v66[1]; /*0x1004d6472*/
    v44 = v77; /*0x1004d6479*/
    *v77 = 2; /*0x1004d647d*/
    v44[1] = result; /*0x1004d6484*/
  }
  else
  {
    result = (volatile signed __int64 *)__src[0]; /*0x1004d6536*/
    v60 = __src[0]; /*0x1004d653d*/
    v39 = v77; /*0x1004d6547*/
    if ( __src[0] != v37 ) /*0x1004d654b*/
    {
      v53 = v37; /*0x1004d665e*/
      v66[0] = &v53; /*0x1004d6665*/
      v66[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004d6673*/
      v66[2] = &v60; /*0x1004d6681*/
      v66[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004d668f*/
      result = (volatile signed __int64 *)alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1004d66a8*/
                                            v77 + 1,
                                            &unk_1017BF5C5,
                                            v66);
LABEL_52:
      *v39 = 10; /*0x1004d6447*/
      return result; /*0x1004d644e*/
    }
    v77[1] = v37; /*0x1004d6551*/
    *v39 = 11; /*0x1004d6555*/
  }
  return result; /*0x1004d625a*/
}