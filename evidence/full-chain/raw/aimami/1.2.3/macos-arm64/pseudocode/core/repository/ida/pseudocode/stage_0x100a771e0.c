// __ZN13codexmate_lib4core10repository18SnapshotQuarantine5stage @ 0x100a771e0
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void **__fastcall codexmate_lib::core::repository::SnapshotQuarantine::stage::h35254a4b3594504b(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  __int64 v6; // r15
  __int64 v7; // r13
  void **result; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  size_t v11; // r15
  __int64 v12; // rbx
  void *v13; // rax
  __int64 *v14; // rsi
  size_t v15; // rcx
  __int64 v16; // r14
  void ***v17; // rbx
  void **v18; // r12
  __int64 v19; // r13
  size_t v20; // r13
  void *v21; // r12
  __int64 v22; // rax
  void *v23; // r15
  void **v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  void *v27; // rbx
  const void *v28; // r13
  void *v29; // r12
  void *v30; // r15
  char *v31; // r13
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  void **v38; // r14
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  void *v42; // r14
  __int64 v43; // rax
  void **v44; // rax
  void **v45; // rcx
  void **v46; // rax
  __int64 v47; // rdx
  void **v48; // r8
  _QWORD v49[3]; // [rsp+8h] [rbp-1D8h] BYREF
  _QWORD v50[3]; // [rsp+20h] [rbp-1C0h] BYREF
  __int64 v51; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-1A0h]
  __int64 v53; // [rsp+48h] [rbp-198h]
  __int64 v54; // [rsp+50h] [rbp-190h]
  __int64 v55; // [rsp+58h] [rbp-188h]
  __int64 v56; // [rsp+60h] [rbp-180h]
  void *v57; // [rsp+68h] [rbp-178h]
  void **v58; // [rsp+70h] [rbp-170h] BYREF
  void *v59; // [rsp+78h] [rbp-168h]
  size_t v60; // [rsp+80h] [rbp-160h]
  void **v61; // [rsp+88h] [rbp-158h] BYREF
  __int64 v62; // [rsp+90h] [rbp-150h]
  void *__dst; // [rsp+98h] [rbp-148h]
  size_t __n[9]; // [rsp+A0h] [rbp-140h] BYREF
  void **v65; // [rsp+120h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+128h] [rbp-B8h]
  size_t v67; // [rsp+130h] [rbp-B0h]
  void **v68; // [rsp+138h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+140h] [rbp-A0h]
  void **v70; // [rsp+148h] [rbp-98h]
  void **v71; // [rsp+150h] [rbp-90h]
  __int64 v72; // [rsp+158h] [rbp-88h]
  __int64 *v73; // [rsp+160h] [rbp-80h]
  __int64 v74; // [rsp+168h] [rbp-78h]
  void **v75; // [rsp+170h] [rbp-70h]
  void *v76; // [rsp+178h] [rbp-68h] BYREF
  void *v77; // [rsp+180h] [rbp-60h]
  size_t v78; // [rsp+188h] [rbp-58h]
  char v79; // [rsp+197h] [rbp-49h] BYREF
  __int64 v80; // [rsp+198h] [rbp-48h]
  void *v81; // [rsp+1A0h] [rbp-40h]
  void **v82; // [rsp+1A8h] [rbp-38h]
  void *__src; // [rsp+1B0h] [rbp-30h]

  v81 = a4; /*0x100a771f4*/
  LOWORD(v61) = 511; /*0x100a77201*/
  BYTE2(v61) = 1; /*0x100a7720a*/
  v6 = *(_QWORD *)(a2 + 200); /*0x100a77211*/
  v7 = *(_QWORD *)(a2 + 208); /*0x100a77218*/
  result = (void **)std::fs::DirBuilder::_create::h099c6e2853c95452(&v61, v6, v7); /*0x100a7722c*/
  if ( result ) /*0x100a77234*/
  {
    *a1 = 2; /*0x100a77236*/
    a1[1] = (__int64)result; /*0x100a7723d*/
    return result; /*0x100a77241*/
  }
  v73 = a1; /*0x100a77246*/
  v54 = a3; /*0x100a7724a*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v51, v6, v7, "account-removal-quarantine", 26); /*0x100a7726b*/
  v9 = v6; /*0x100a77285*/
  v72 = v52; /*0x100a7728b*/
  codexmate_lib::core::repository::canonical_managed_child_directory::h69ff115c8b001ccc(&v61, v6, v7, v52, v53, 1); /*0x100a77298*/
  v10 = (__int64)v61; /*0x100a7729d*/
  __src = __dst; /*0x100a772b2*/
  v11 = __n[0]; /*0x100a772b6*/
  if ( v61 != (void **)11 ) /*0x100a772c1*/
  {
    v12 = v62; /*0x100a7734b*/
    v14 = v73; /*0x100a77355*/
    v73[11] = __n[8]; /*0x100a77359*/
    v14[10] = __n[7]; /*0x100a77364*/
    v14[9] = __n[6]; /*0x100a7736f*/
    v14[8] = __n[5]; /*0x100a7737a*/
    v14[7] = __n[4]; /*0x100a77385*/
    v14[6] = __n[3]; /*0x100a77390*/
    v15 = __n[1]; /*0x100a77394*/
    v14[5] = __n[2]; /*0x100a773a2*/
    v14[4] = v15; /*0x100a773a6*/
LABEL_8:
    *v14 = v10; /*0x100a773aa*/
    v14[1] = v12; /*0x100a773ad*/
    result = (void **)__src; /*0x100a773b1*/
    v14[2] = (__int64)__src; /*0x100a773b5*/
    v14[3] = v11; /*0x100a773b9*/
    goto LABEL_9; /*0x100a773b9*/
  }
  v74 = v62; /*0x100a772c7*/
  if ( __OFSUB__(-v62, 1) ) /*0x100a772ce*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v61, v9); /*0x100a772d7*/
    v12 = 34; /*0x100a772dc*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100a772eb*/
    if ( !v13 ) /*0x100a772f3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100a77b09*/
    qmemcpy(v13, "Account quarantine was not created", 34); /*0x100a7732d*/
    __src = v13; /*0x100a77330*/
    v10 = 10; /*0x100a7733a*/
    v11 = 34; /*0x100a7733f*/
    v14 = v73; /*0x100a77345*/
    goto LABEL_8; /*0x100a77349*/
  }
  v16 = a2; /*0x100a773ec*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v61); /*0x100a773f6*/
  v17 = (void ***)v73; /*0x100a773fb*/
  v77 = (void *)v62; /*0x100a7740d*/
  v76 = v61; /*0x100a77411*/
  v65 = nullptr; /*0x100a77415*/
  v66 = 1; /*0x100a77420*/
  v67 = 0; /*0x100a7742b*/
  __dst = (void *)1610612768; /*0x100a77436*/
  v61 = (void **)&v65; /*0x100a77448*/
  v62 = (__int64)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a77456*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(&v76, &v61) ) /*0x100a77468*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a77ae6*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      &v79,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v18 = v65; /*0x100a77475*/
  v19 = v66; /*0x100a7747c*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v58, __src, v11, v66, v67); /*0x100a7749b*/
  if ( v18 ) /*0x100a774a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x100a774b0*/
  LOWORD(v61) = 511; /*0x100a774b5*/
  BYTE2(v61) = 0; /*0x100a774be*/
  v20 = v60; /*0x100a774cc*/
  v21 = v59; /*0x100a774da*/
  v80 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v61, v59, v60); /*0x100a774e5*/
  if ( v80 ) /*0x100a774ec*/
    goto LABEL_19; /*0x100a774ec*/
  v22 = std::sys::fs::set_permissions::hfb7e5143e400282f(__src, v11); /*0x100a774fa*/
  if ( v22 || (v22 = std::sys::fs::set_permissions::hfb7e5143e400282f(v21, v20)) != 0 ) /*0x100a77517*/
  {
    v80 = v22; /*0x100a77519*/
    goto LABEL_19; /*0x100a77519*/
  }
  std::sys::fs::canonicalize::h06efd38dcb2724a4(&v61, *(_QWORD *)(v16 + 248), *(_QWORD *)(v16 + 256)); /*0x100a7757d*/
  v80 = v62; /*0x100a7759a*/
  if ( v61 == (void **)0x8000000000000000LL ) /*0x100a775a1*/
  {
LABEL_19:
    v23 = __src; /*0x100a7751d*/
    *v17 = (void **)2; /*0x100a77521*/
    result = (void **)v80; /*0x100a77528*/
    v17[1] = (void **)v80; /*0x100a7752c*/
    v24 = v58; /*0x100a77530*/
    if ( v58 ) /*0x100a7753a*/
    {
      v25 = (__int64)v21; /*0x100a77541*/
      goto LABEL_21; /*0x100a77541*/
    }
    goto LABEL_22; /*0x100a7753a*/
  }
  v75 = v61; /*0x100a775a7*/
  v57 = __dst; /*0x100a775b2*/
  v67 = v60; /*0x100a775c0*/
  v66 = (__int64)v59; /*0x100a775d5*/
  v65 = v58; /*0x100a775dc*/
  v68 = nullptr; /*0x100a775e3*/
  v69 = 8; /*0x100a775ee*/
  v70 = nullptr; /*0x100a775f9*/
  LOBYTE(v71) = 1; /*0x100a77604*/
  v23 = __src; /*0x100a77612*/
  if ( !v81 ) /*0x100a77616*/
  {
LABEL_48:
    v17[7] = v71; /*0x100a778bb*/
    v17[6] = v70; /*0x100a778cd*/
    v17[5] = (void **)v69; /*0x100a778d8*/
    v17[4] = v68; /*0x100a778e3*/
    v17[3] = (void **)v67; /*0x100a778ee*/
    result = v65; /*0x100a778f2*/
    v17[2] = (void **)v66; /*0x100a77900*/
    v17[1] = result; /*0x100a77904*/
    *v17 = (void **)11; /*0x100a77908*/
    goto LABEL_64; /*0x100a7790f*/
  }
  v56 = 424LL * (_QWORD)v81; /*0x100a77623*/
  v26 = 0; /*0x100a7762a*/
  while ( 1 ) /*0x100a77650*/
  {
    v27 = v23; /*0x100a77650*/
    v28 = *(const void **)(v54 + v26 + 224); /*0x100a7765a*/
    v55 = v26; /*0x100a77662*/
    v29 = *(void **)(v54 + v26 + 232); /*0x100a77669*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v61, v29, 0, 1, 1); /*0x100a77684*/
    v82 = (void **)v62; /*0x100a77690*/
    if ( (_BYTE)v61 ) /*0x100a7769b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v82, __dst); /*0x100a77af8*/
    v30 = __dst; /*0x100a776a1*/
    memcpy(__dst, v28, (size_t)v29); /*0x100a776b1*/
    v81 = v30; /*0x100a776b9*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v61, v30, v29); /*0x100a776c3*/
    v23 = v27; /*0x100a776c8*/
    v17 = (void ***)v73; /*0x100a776cb*/
    if ( (_BYTE)v61 ) /*0x100a776d6*/
    {
      if ( (v62 & 3) == 1 ) /*0x100a776e7*/
      {
        v31 = (char *)(v62 - 1); /*0x100a776e9*/
        v32 = *(_QWORD *)(v62 - 1); /*0x100a776ed*/
        v33 = *(_QWORD *)(v62 + 7); /*0x100a776f1*/
        if ( *(_QWORD *)v33 ) /*0x100a776f5*/
          (*(void (__fastcall **)(__int64))v33)(v32); /*0x100a77700*/
        v34 = *(_QWORD *)(v33 + 8); /*0x100a77702*/
        if ( v34 ) /*0x100a77709*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16)); /*0x100a77712*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8); /*0x100a77724*/
        v23 = __src; /*0x100a77729*/
      }
      if ( v82 ) /*0x100a7773b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v82, 1); /*0x100a7774a*/
      goto LABEL_27; /*0x100a7774f*/
    }
    std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v61, v81, v29); /*0x100a7775e*/
    v35 = v62; /*0x100a77763*/
    if ( (_BYTE)v61 ) /*0x100a77771*/
    {
      *v17 = (void **)2; /*0x100a77914*/
      v17[1] = (void **)v35; /*0x100a7791b*/
      goto LABEL_61; /*0x100a7791f*/
    }
    if ( (v62 & 0xF00000000000LL) != 0x800000000000LL ) /*0x100a77791*/
    {
      v76 = v81; /*0x100a77928*/
      v77 = v29; /*0x100a7792c*/
      v61 = &v76; /*0x100a77934*/
      v62 = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a77942*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, &unk_1017C9ADA, &v61); /*0x100a7795e*/
      v17[3] = (void **)v50[2]; /*0x100a7796a*/
      v44 = (void **)v50[0]; /*0x100a7796e*/
      v45 = (void **)v50[1]; /*0x100a77975*/
LABEL_56:
      v17[2] = v45; /*0x100a77a17*/
      v17[1] = v44; /*0x100a77a1b*/
      *v17 = (void **)9; /*0x100a77a1f*/
      goto LABEL_61; /*0x100a77a26*/
    }
    v36 = std::path::Path::parent::h4c3ac26770731fbb(v81, v29); /*0x100a7779e*/
    if ( !v36 ) /*0x100a777a6*/
    {
      codexmate_lib::core::repository::SnapshotQuarantine::stage::_$u7b$$u7b$closure$u7d$$u7d$::h9a29045394e9bfc0(&v61); /*0x100a77988*/
LABEL_58:
      v46 = v61; /*0x100a77a34*/
      v47 = v62; /*0x100a77a3b*/
      v48 = (void **)__dst; /*0x100a77a42*/
      qmemcpy(v17 + 3, __n, 0x48u); /*0x100a77a59*/
      *v17 = v46; /*0x100a77a5c*/
      v17[1] = (void **)v47; /*0x100a77a5f*/
      v17[2] = v48; /*0x100a77a63*/
      goto LABEL_61; /*0x100a77a67*/
    }
    std::sys::fs::canonicalize::h06efd38dcb2724a4(&v61, v36, v37); /*0x100a777b2*/
    v38 = v61; /*0x100a777b7*/
    v39 = v62; /*0x100a777be*/
    if ( v61 == (void **)0x8000000000000000LL ) /*0x100a777d2*/
    {
      *v17 = (void **)2; /*0x100a77992*/
      v17[1] = (void **)v39; /*0x100a77999*/
      v23 = __src; /*0x100a7799d*/
      goto LABEL_61; /*0x100a779a1*/
    }
    if ( !(unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x100a777f4*/
                             v62,
                             __dst,
                             v80,
                             v57) )
    {
      if ( v38 ) /*0x100a779a9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x100a779b6*/
      v76 = v81; /*0x100a779bf*/
      v77 = v29; /*0x100a779c3*/
      v61 = &v76; /*0x100a779cb*/
      v62 = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a779d9*/
      v23 = __src; /*0x100a779f5*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, &unk_1017C7161, &v61); /*0x100a779f9*/
      v17[3] = (void **)v49[2]; /*0x100a77a05*/
      v44 = (void **)v49[0]; /*0x100a77a09*/
      v45 = (void **)v49[1]; /*0x100a77a10*/
      goto LABEL_56; /*0x100a77a10*/
    }
    if ( v38 ) /*0x100a777fd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x100a7780a*/
    v23 = __src; /*0x100a77816*/
    v40 = std::path::Path::file_name::hf6c2daad91e50ebf(v81, v29); /*0x100a7781a*/
    if ( !v40 ) /*0x100a77822*/
    {
      codexmate_lib::core::repository::SnapshotQuarantine::stage::_$u7b$$u7b$closure$u7d$$u7d$::h0392ddcedbba4a79(&v61); /*0x100a77a2f*/
      goto LABEL_58; /*0x100a77a2f*/
    }
    std::path::Path::_join::hb1a495d4f06b13b8(&v76, v66, v67, v40, v41); /*0x100a77840*/
    v42 = v77; /*0x100a77845*/
    v43 = std::sys::fs::rename::h7934e6142c921014(v81, (size_t)v29, v77, v78); /*0x100a77857*/
    if ( v43 ) /*0x100a7785f*/
      break; /*0x100a7785f*/
    v61 = v82; /*0x100a77869*/
    v62 = (__int64)v81; /*0x100a77874*/
    __dst = v29; /*0x100a7787b*/
    __n[2] = v78; /*0x100a7788d*/
    __n[1] = (size_t)v77; /*0x100a77899*/
    __n[0] = (size_t)v76; /*0x100a7789d*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5021e35a41cbad79(&v68, &v61); /*0x100a778b1*/
LABEL_27:
    v26 = v55 + 424; /*0x100a77635*/
    if ( v56 == v55 + 424 ) /*0x100a7764a*/
      goto LABEL_48; /*0x100a7764a*/
  }
  *v17 = (void **)2; /*0x100a77a69*/
  v17[1] = (void **)v43; /*0x100a77a70*/
  if ( v76 ) /*0x100a77a7b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v76, 1); /*0x100a77a85*/
LABEL_61:
  if ( v82 ) /*0x100a77a91*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v82, 1); /*0x100a77a9c*/
  result = (void **)core::ptr::drop_in_place$LT$codexmate_lib..core..repository..SnapshotQuarantine$GT$::h6e1d7d92363b2a89(&v65); /*0x100a77aa8*/
LABEL_64:
  v24 = v75; /*0x100a77aad*/
  if ( v75 ) /*0x100a77ab4*/
  {
    v25 = v80; /*0x100a77abf*/
LABEL_21:
    result = (void **)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x100a77544*/
  }
LABEL_22:
  if ( v74 ) /*0x100a77550*/
    result = (void **)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v74, 1); /*0x100a7755e*/
LABEL_9:
  if ( v51 ) /*0x100a773c7*/
    return (void **)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v51, 1); /*0x100a773d5*/
  return result; /*0x100a773da*/
}