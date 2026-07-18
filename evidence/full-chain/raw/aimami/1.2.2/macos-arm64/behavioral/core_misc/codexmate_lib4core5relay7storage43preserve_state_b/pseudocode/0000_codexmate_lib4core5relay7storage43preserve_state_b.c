// mac 1.2.2 NEW codexmate_lib4core5relay7storage43preserve_state_b 0x10042ae80 d=0
_QWORD *__fastcall codexmate_lib::core::relay::storage::preserve_state_before_provider_id_migration::h2147cd996723b7e7(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        void *a4,
        size_t a5)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  _QWORD *result; // rax
  int v11; // edx
  unsigned __int128 v12; // kr00_16
  char v13; // bl
  __int64 *v14; // r13
  size_t v15; // r14
  __int64 *v16; // r15
  _BYTE *v17; // r12
  size_t v18; // r13
  _QWORD *v19; // rcx
  __int64 v20; // rax
  size_t v21; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // r14
  size_t v24; // rbx
  void *v25; // r13
  _QWORD *v26; // rcx
  size_t *v27; // [rsp+8h] [rbp-158h] BYREF
  void *__s1; // [rsp+10h] [rbp-150h]
  char *v29; // [rsp+18h] [rbp-148h]
  __int64 (__fastcall *v30)(); // [rsp+20h] [rbp-140h]
  unsigned __int128 v31; // [rsp+A0h] [rbp-C0h] BYREF
  size_t v32; // [rsp+B8h] [rbp-A8h] BYREF
  const void *v33; // [rsp+C0h] [rbp-A0h]
  size_t v34; // [rsp+C8h] [rbp-98h]
  size_t __n; // [rsp+D0h] [rbp-90h]
  void *__s2; // [rsp+D8h] [rbp-88h]
  size_t v37; // [rsp+E0h] [rbp-80h] BYREF
  _BYTE *v38; // [rsp+E8h] [rbp-78h]
  size_t v39; // [rsp+F0h] [rbp-70h]
  const void *v40; // [rsp+F8h] [rbp-68h]
  _QWORD *v41; // [rsp+100h] [rbp-60h]
  size_t *v42; // [rsp+108h] [rbp-58h] BYREF
  _BYTE *v43; // [rsp+110h] [rbp-50h]
  char *v44; // [rsp+118h] [rbp-48h]
  size_t v45; // [rsp+120h] [rbp-40h]
  size_t v46; // [rsp+128h] [rbp-38h]
  char v47; // [rsp+137h] [rbp-29h] BYREF

  v7 = a1; /*0x10042ae9a*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v32, a2, a3, "state-migration-backups", 0x17u); /*0x10042aeb1*/
  LOWORD(v27) = 511; /*0x10042aeb6*/
  BYTE2(v27) = 1; /*0x10042aebf*/
  v40 = v33; /*0x10042aedb*/
  v46 = v34; /*0x10042aedf*/
  v8 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v27, v33); /*0x10042aee3*/
  if ( !v8 ) /*0x10042aeeb*/
  {
    v42 = (size_t *)std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10042afd0*/
    LODWORD(v43) = v11; /*0x10042afd4*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)&v27, (__int64)&v42, 0, 0); /*0x10042afe6*/
    __s2 = a4; /*0x10042afeb*/
    __n = a5; /*0x10042aff2*/
    v41 = a1; /*0x10042aff9*/
    v12 = (unsigned __int64)__s1 * (unsigned __int128)0x3E8uLL + (unsigned int)v29 / 0xF4240uLL; /*0x10042b01a*/
    v13 = 0; /*0x10042b021*/
    if ( (_BYTE)v27 ) /*0x10042b02a*/
      v12 = 0u; /*0x10042b02e*/
    v31 = v12; /*0x10042b032*/
    v14 = (__int64 *)&v27; /*0x10042b040*/
    while ( 1 ) /*0x10042b129*/
    {
      while ( 1 ) /*0x10042b072*/
      {
        v47 = v13; /*0x10042b072*/
        v27 = (size_t *)&v31; /*0x10042b07c*/
        __s1 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x10042b08a*/
        v29 = &v47; /*0x10042b095*/
        v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b; /*0x10042b0a3*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v42, byte_1016F1EDD, (unsigned __int64)v14); /*0x10042b0b8*/
        std::path::Path::_join::hb1a495d4f06b13b8(&v37, v40, v46, v43, (size_t)v44); /*0x10042b0d4*/
        if ( v42 ) /*0x10042b0e0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b0ea*/
        v45 = v37; /*0x10042b0f3*/
        v15 = v39; /*0x10042b0fb*/
        v16 = v14; /*0x10042b0ff*/
        v17 = v38; /*0x10042b105*/
        std::sys::fs::metadata::h32fa16d3052ea535(v14, v38, v39); /*0x10042b10b*/
        v18 = (size_t)v27; /*0x10042b110*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x10042b121*/
          (__int64)v27,
          (__int64)__s1);
        if ( v18 ) /*0x10042b129*/
          break; /*0x10042b129*/
        if ( v45 ) /*0x10042b136*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b140*/
        v14 = v16; /*0x10042b145*/
        if ( ++v13 == 100 ) /*0x10042b14d*/
        {
LABEL_21:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10042b153*/
          result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x3Du, 1u); /*0x10042b162*/
          if ( !result ) /*0x10042b16a*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x10042b4d9*/
          qmemcpy(result, "cannot allocate relay state provider-id migration backup path", 61); /*0x10042b1dc*/
          v19 = v41; /*0x10042b1df*/
          *v41 = 9; /*0x10042b1e3*/
          v19[1] = 61; /*0x10042b1ea*/
          v19[2] = result; /*0x10042b1f2*/
          v19[3] = 61; /*0x10042b1f6*/
          if ( v32 ) /*0x10042b208*/
            return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b208*/
          return result; /*0x10042b208*/
        }
      }
      v14 = v16; /*0x10042b05e*/
      if ( v45 != 0x8000000000000000LL ) /*0x10042b061*/
        break; /*0x10042b061*/
      if ( ++v13 == 100 ) /*0x10042b06c*/
        goto LABEL_21; /*0x10042b06c*/
    }
    v20 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hd5da3edf4306a101( /*0x10042b230*/
            v17,
            v15,
            (__int64)__s2,
            __n,
            1);
    v21 = v45; /*0x10042b238*/
    if ( v20 ) /*0x10042b23c*/
    {
      v37 = v20; /*0x10042b242*/
      v42 = &v37; /*0x10042b24a*/
      v43 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10042b255*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v27, byte_1016F1F10, (unsigned __int64)&v42); /*0x10042b26b*/
      v42 = v27; /*0x10042b27e*/
      v43 = __s1; /*0x10042b282*/
      v44 = v29; /*0x10042b28d*/
      v22 = v41; /*0x10042b29d*/
      if ( (v37 & 3) == 1 ) /*0x10042b2a1*/
      {
        v23 = *(_QWORD *)(v37 + 7); /*0x10042b2ab*/
        if ( *(_QWORD *)v23 ) /*0x10042b2af*/
          (*(void (__fastcall **)(_QWORD, unsigned __int8 *, _QWORD *))v23)(*(_QWORD *)(v37 - 1), byte_1016F1F10, v41); /*0x10042b2ba*/
        if ( *(_QWORD *)(v23 + 8) ) /*0x10042b2bc*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b2cc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b2de*/
        v22 = v41; /*0x10042b2e3*/
        v21 = v45; /*0x10042b2e7*/
      }
      v22[3] = v44; /*0x10042b2ef*/
      result = v42; /*0x10042b2f3*/
      v22[2] = v43; /*0x10042b2fb*/
      v22[1] = result; /*0x10042b2ff*/
      *v22 = 9; /*0x10042b303*/
      if ( v21 ) /*0x10042b30d*/
        goto LABEL_32; /*0x10042b30d*/
    }
    else
    {
      std::fs::read::inner::h6a30c15c40add28b(&v27, v17, v15); /*0x10042b358*/
      v24 = (size_t)v27; /*0x10042b35d*/
      v25 = __s1; /*0x10042b364*/
      if ( v27 == (size_t *)0x8000000000000000LL ) /*0x10042b378*/
      {
        result = v41; /*0x10042b37a*/
        *v41 = 2; /*0x10042b37e*/
        result[1] = v25; /*0x10042b385*/
        if ( v45 ) /*0x10042b390*/
LABEL_32:
          result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b30f*/
      }
      else
      {
        if ( v29 == (char *)__n && !memcmp(__s1, __s2, __n) ) /*0x10042b3b9*/
        {
          if ( v24 ) /*0x10042b48d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b49a*/
          result = v41; /*0x10042b49f*/
          v41[1] = v45; /*0x10042b4a7*/
          result[2] = v17; /*0x10042b4ab*/
          result[3] = v15; /*0x10042b4af*/
          *result = 10; /*0x10042b4b3*/
          if ( v32 ) /*0x10042b4c4*/
            return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b4c4*/
          return result; /*0x10042b4c4*/
        }
        if ( v24 ) /*0x10042b3c2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b3cf*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10042b3d4*/
        result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x3Cu, 1u); /*0x10042b3e3*/
        if ( !result ) /*0x10042b3eb*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x10042b4ea*/
        qmemcpy(result, "relay state provider-id migration backup verification failed", 60); /*0x10042b44f*/
        v26 = v41; /*0x10042b459*/
        *v41 = 9; /*0x10042b45d*/
        v26[1] = 60; /*0x10042b464*/
        v26[2] = result; /*0x10042b46c*/
        v26[3] = 60; /*0x10042b470*/
        if ( v45 ) /*0x10042b47f*/
          goto LABEL_32; /*0x10042b47f*/
      }
    }
    if ( !v32 ) /*0x10042b329*/
      return result; /*0x10042b329*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b329*/
  }
  v37 = v8; /*0x10042aef1*/
  v42 = &v37; /*0x10042aef9*/
  v43 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10042af04*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v27, byte_1016F1F43, (unsigned __int64)&v42); /*0x10042af1a*/
  v42 = v27; /*0x10042af2d*/
  v43 = __s1; /*0x10042af31*/
  v44 = v29; /*0x10042af3c*/
  if ( (v37 & 3) == 1 ) /*0x10042af4c*/
  {
    v9 = *(_QWORD *)(v37 + 7); /*0x10042af59*/
    if ( *(_QWORD *)v9 ) /*0x10042af5d*/
      (*(void (__fastcall **)(_QWORD))v9)(*(_QWORD *)(v37 - 1)); /*0x10042af69*/
    if ( *(_QWORD *)(v9 + 8) ) /*0x10042af6b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042af7d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042af8f*/
    v7 = a1; /*0x10042af94*/
  }
  v7[3] = v44; /*0x10042af9b*/
  result = v42; /*0x10042af9f*/
  v7[2] = v43; /*0x10042afa7*/
  v7[1] = result; /*0x10042afab*/
  *v7 = 9; /*0x10042afaf*/
  if ( v32 ) /*0x10042afc0*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042b32b*/
  return result; /*0x10042b339*/
}