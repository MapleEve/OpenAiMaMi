// __ZN13codexmate_lib4core5relay7storage43preserve_state_before_provider_id_migration @ 0x1008b1760 | 基线 same-set
void __fastcall codexmate_lib::core::relay::storage::preserve_state_before_provider_id_migration::h4f6a820344463645(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 *v14; // rax
  int v15; // edx
  unsigned __int128 v16; // kr00_16
  char v17; // r13
  void *v18; // r15
  __int64 v19; // r15
  unsigned __int128 **v20; // r12
  size_t v21; // r14
  unsigned __int128 **v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // r13
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rsi
  __int64 *v32; // rax
  void *v33; // rax
  _QWORD *v34; // rcx
  _OWORD **v35; // rdi
  void *v36; // rsi
  unsigned __int128 *v37; // rbx
  _OWORD **v38; // r13
  _QWORD *v39; // rax
  void *v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rsi
  _QWORD *v43; // rax
  unsigned __int128 *v44; // [rsp+8h] [rbp-158h] BYREF
  void *__s1; // [rsp+10h] [rbp-150h]
  char *v46; // [rsp+18h] [rbp-148h]
  __int64 (__fastcall *v47)(); // [rsp+20h] [rbp-140h]
  unsigned __int128 v48; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-A8h]
  __int64 v51; // [rsp+C0h] [rbp-A0h]
  unsigned __int128 **v52; // [rsp+C8h] [rbp-98h]
  size_t __n; // [rsp+D0h] [rbp-90h]
  void *__s2; // [rsp+D8h] [rbp-88h]
  __int64 v55; // [rsp+E0h] [rbp-80h] BYREF
  unsigned __int128 **v56; // [rsp+E8h] [rbp-78h]
  size_t v57; // [rsp+F0h] [rbp-70h]
  __int64 v58; // [rsp+F8h] [rbp-68h]
  _QWORD *v59; // [rsp+100h] [rbp-60h]
  __int64 v60; // [rsp+108h] [rbp-58h]
  __int64 *v61; // [rsp+110h] [rbp-50h] BYREF
  void *v62; // [rsp+118h] [rbp-48h]
  char *v63; // [rsp+120h] [rbp-40h]
  __int64 v64; // [rsp+128h] [rbp-38h]
  char v65; // [rsp+137h] [rbp-29h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8(&v49, a2, a3, "state-migration-backups", 23); /*0x1008b1791*/
  LOWORD(v44) = 511; /*0x1008b1796*/
  BYTE2(v44) = 1; /*0x1008b179f*/
  v7 = v50; /*0x1008b17a6*/
  v8 = v50; /*0x1008b17bb*/
  v64 = v51; /*0x1008b17be*/
  v60 = v50; /*0x1008b17c2*/
  v9 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v44, v50, v51); /*0x1008b17c6*/
  if ( v9 ) /*0x1008b17ce*/
  {
    v55 = v9; /*0x1008b17d4*/
    v61 = &v55; /*0x1008b17dc*/
    v62 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008b17e7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v44, &unk_1017C62A9, &v61); /*0x1008b17fd*/
    v61 = (__int64 *)v44; /*0x1008b1810*/
    v62 = __s1; /*0x1008b1814*/
    v63 = v46; /*0x1008b181f*/
    if ( (v55 & 3) == 1 ) /*0x1008b182f*/
    {
      v10 = v55 - 1; /*0x1008b1831*/
      v11 = *(_QWORD *)(v55 - 1); /*0x1008b1835*/
      v12 = *(_QWORD *)(v55 + 7); /*0x1008b1839*/
      if ( *(_QWORD *)v12 ) /*0x1008b183d*/
        (*(void (__fastcall **)(__int64))v12)(v11); /*0x1008b1849*/
      v13 = *(_QWORD *)(v12 + 8); /*0x1008b184b*/
      if ( v13 ) /*0x1008b1853*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1008b185d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8); /*0x1008b186f*/
      v7 = v60; /*0x1008b1874*/
    }
    a1[3] = v63; /*0x1008b187c*/
    v14 = v61; /*0x1008b1880*/
    a1[2] = v62; /*0x1008b1888*/
    a1[1] = v14; /*0x1008b188c*/
    *a1 = 10; /*0x1008b1890*/
    goto LABEL_46; /*0x1008b1897*/
  }
  v61 = (__int64 *)std::time::SystemTime::now::h1fe79e41f9d5677f(&v44, v8); /*0x1008b18a1*/
  LODWORD(v62) = v15; /*0x1008b18a5*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v44, &v61, 0, 0); /*0x1008b18b7*/
  __s2 = a4; /*0x1008b18bc*/
  __n = a5; /*0x1008b18c3*/
  v59 = a1; /*0x1008b18ca*/
  v16 = (unsigned __int64)__s1 * (unsigned __int128)0x3E8uLL + (unsigned int)v46 / 0xF4240uLL; /*0x1008b18eb*/
  v17 = 0; /*0x1008b18f2*/
  if ( (_BYTE)v44 ) /*0x1008b18fc*/
    v16 = 0u; /*0x1008b1900*/
  v48 = v16; /*0x1008b1904*/
  while ( 1 ) /*0x1008b1955*/
  {
    v65 = v17; /*0x1008b1955*/
    v44 = &v48; /*0x1008b1960*/
    __s1 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x1008b196e*/
    v46 = &v65; /*0x1008b1979*/
    v47 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b; /*0x1008b1987*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v61, &unk_1017C62D5, &v44); /*0x1008b19a0*/
    v18 = v62; /*0x1008b19a5*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v55, v7, v64, v62, v63); /*0x1008b19bb*/
    if ( v61 ) /*0x1008b19c7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v61, 1); /*0x1008b19d1*/
    v19 = v55; /*0x1008b19d6*/
    v20 = v56; /*0x1008b19da*/
    v21 = v57; /*0x1008b19de*/
    v22 = &v44; /*0x1008b19e2*/
    v23 = (__int64)v56; /*0x1008b19e9*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v44, v56, v57); /*0x1008b19ef*/
    if ( (_DWORD)v44 != 1 ) /*0x1008b19fb*/
    {
      if ( v19 ) /*0x1008b1a04*/
      {
        v22 = v20; /*0x1008b1a0f*/
        v23 = v19; /*0x1008b1a12*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x1008b1a15*/
      }
      goto LABEL_14; /*0x1008b1a1a*/
    }
    if ( ((unsigned __int8)__s1 & 3) != 1 ) /*0x1008b192f*/
    {
      if ( v19 != 0x8000000000000000LL ) /*0x1008b1942*/
        break; /*0x1008b1942*/
      goto LABEL_14; /*0x1008b1942*/
    }
    v52 = (unsigned __int128 **)((char *)__s1 - 1); /*0x1008b1a23*/
    v58 = *(_QWORD *)((char *)__s1 - 1); /*0x1008b1a2e*/
    v24 = *(_QWORD *)((char *)__s1 + 7); /*0x1008b1a32*/
    if ( *(_QWORD *)v24 ) /*0x1008b1a36*/
      (*(void (__fastcall **)(__int64))v24)(v58); /*0x1008b1a42*/
    v25 = *(_QWORD *)(v24 + 8); /*0x1008b1a48*/
    if ( v25 ) /*0x1008b1a4f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v25, *(_QWORD *)(v24 + 16)); /*0x1008b1a55*/
    v23 = 24; /*0x1008b1a5a*/
    v22 = v52; /*0x1008b1a64*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 24, 8); /*0x1008b1a6b*/
    v7 = v60; /*0x1008b1a70*/
    if ( v19 != 0x8000000000000000LL ) /*0x1008b1a81*/
      break; /*0x1008b1a81*/
LABEL_14:
    if ( ++v17 == 100 ) /*0x1008b194f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v23); /*0x1008b1b86*/
      v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x1008b1b95*/
      if ( !v33 ) /*0x1008b1b9d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 61); /*0x1008b1de5*/
      qmemcpy(v33, "cannot allocate relay state provider-id migration backup path", 61); /*0x1008b1c0f*/
      v34 = v59; /*0x1008b1c12*/
      *v59 = 10; /*0x1008b1c16*/
      v34[1] = 61; /*0x1008b1c1d*/
      v34[2] = v33; /*0x1008b1c25*/
      v34[3] = 61; /*0x1008b1c29*/
      goto LABEL_46; /*0x1008b1c31*/
    }
  }
  v26 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1008b1a87*/
          v20,
          v21,
          (__int64)__s2,
          __n,
          1);
  v27 = v59; /*0x1008b1aa9*/
  if ( v26 ) /*0x1008b1aad*/
  {
    v55 = v26; /*0x1008b1ab3*/
    v61 = &v55; /*0x1008b1abb*/
    v62 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008b1ac6*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v44, &unk_1017C6276, &v61); /*0x1008b1adc*/
    v61 = (__int64 *)v44; /*0x1008b1aef*/
    v62 = __s1; /*0x1008b1af3*/
    v63 = v46; /*0x1008b1afe*/
    if ( (v55 & 3) == 1 ) /*0x1008b1b0e*/
    {
      v28 = v55 - 1; /*0x1008b1b10*/
      v29 = *(_QWORD *)(v55 - 1); /*0x1008b1b14*/
      v30 = *(_QWORD *)(v55 + 7); /*0x1008b1b18*/
      if ( *(_QWORD *)v30 ) /*0x1008b1b1c*/
        (*(void (__fastcall **)(__int64))v30)(v29); /*0x1008b1b27*/
      v31 = *(_QWORD *)(v30 + 8); /*0x1008b1b29*/
      if ( v31 ) /*0x1008b1b30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, *(_QWORD *)(v30 + 16)); /*0x1008b1b39*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24, 8); /*0x1008b1b4b*/
      v7 = v60; /*0x1008b1b50*/
      v27 = v59; /*0x1008b1b54*/
    }
    v27[3] = v63; /*0x1008b1b5c*/
    v32 = v61; /*0x1008b1b60*/
    v27[2] = v62; /*0x1008b1b68*/
    v27[1] = v32; /*0x1008b1b6c*/
    *v27 = 10; /*0x1008b1b70*/
    if ( !v19 ) /*0x1008b1b7b*/
    {
LABEL_46:
      v42 = v49; /*0x1008b1d72*/
      if ( v49 ) /*0x1008b1d7c*/
        goto LABEL_47; /*0x1008b1d7c*/
      return; /*0x1008b1d7c*/
    }
LABEL_45:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x1008b1d62*/
    goto LABEL_46; /*0x1008b1d6d*/
  }
  v35 = &v44; /*0x1008b1c36*/
  v36 = v20; /*0x1008b1c3d*/
  std::fs::read::inner::h6a30c15c40add28b(&v44, v20, v21); /*0x1008b1c43*/
  v37 = v44; /*0x1008b1c48*/
  v38 = (_OWORD **)__s1; /*0x1008b1c4f*/
  if ( v44 == (unsigned __int128 *)0x8000000000000000LL ) /*0x1008b1c63*/
  {
    v39 = v59; /*0x1008b1c65*/
    *v59 = 2; /*0x1008b1c69*/
    v39[1] = v38; /*0x1008b1c70*/
    goto LABEL_44; /*0x1008b1c74*/
  }
  if ( v46 != (char *)__n || (v35 = (_OWORD **)__s1, v36 = __s2, memcmp(__s1, __s2, __n)) ) /*0x1008b1c93*/
  {
    if ( v37 ) /*0x1008b1ca3*/
    {
      v35 = v38; /*0x1008b1caa*/
      v36 = v37; /*0x1008b1cad*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 1); /*0x1008b1cb0*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35, v36); /*0x1008b1cb5*/
    v40 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x1008b1cc4*/
    if ( !v40 ) /*0x1008b1ccc*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x1008b1df6*/
    qmemcpy(v40, "relay state provider-id migration backup verification failed", 60); /*0x1008b1d30*/
    v41 = v59; /*0x1008b1d3a*/
    *v59 = 10; /*0x1008b1d3e*/
    v41[1] = 60; /*0x1008b1d45*/
    v41[2] = v40; /*0x1008b1d4d*/
    v41[3] = 60; /*0x1008b1d51*/
LABEL_44:
    v7 = v60; /*0x1008b1d59*/
    if ( !v19 ) /*0x1008b1d60*/
      goto LABEL_46; /*0x1008b1d60*/
    goto LABEL_45; /*0x1008b1d60*/
  }
  if ( v37 ) /*0x1008b1da0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 1); /*0x1008b1dad*/
  v43 = v59; /*0x1008b1db2*/
  v59[1] = v19; /*0x1008b1db6*/
  v43[2] = v20; /*0x1008b1dba*/
  v43[3] = v21; /*0x1008b1dbe*/
  *v43 = 11; /*0x1008b1dc2*/
  v42 = v49; /*0x1008b1dc9*/
  v7 = v60; /*0x1008b1dd3*/
  if ( v49 ) /*0x1008b1dd7*/
LABEL_47:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v42, 1); /*0x1008b1d7e*/
}