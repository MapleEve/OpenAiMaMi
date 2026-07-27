// __ZN13codexmate_lib4core12debug_bundle14read_tail_text @ 0x1004c7b90 | 基线 same-set
void *__fastcall codexmate_lib::core::debug_bundle::read_tail_text::hee98d69dc208f230(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  void *result; // rax
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  size_t v10; // rax
  void *v11; // r15
  size_t v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rdx
  void *v22; // r12
  const void *v23; // r15
  size_t v24; // r14
  size_t v25; // r13
  void *v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-F8h] BYREF
  void *__src; // [rsp+10h] [rbp-F0h]
  size_t v29; // [rsp+18h] [rbp-E8h]
  __int64 v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+A0h] [rbp-60h] BYREF
  void *__dst; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+B8h] [rbp-48h] BYREF
  size_t __n; // [rsp+C8h] [rbp-38h]
  _DWORD v38[11]; // [rsp+D4h] [rbp-2Ch] BYREF

  LODWORD(v36) = 0; /*0x1004c7bad*/
  WORD2(v36) = 438; /*0x1004c7bb4*/
  *(_DWORD *)((char *)&v36 + 6) = 1; /*0x1004c7bba*/
  WORD5(v36) = 0; /*0x1004c7bc1*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v27, &v36, a2, a3); /*0x1004c7bd6*/
  if ( (_DWORD)v27 == 1 ) /*0x1004c7be2*/
  {
    result = __src; /*0x1004c7be4*/
    *a1 = 2; /*0x1004c7beb*/
    a1[1] = result; /*0x1004c7bf2*/
    return result; /*0x1004c7bf6*/
  }
  v38[0] = HIDWORD(v27); /*0x1004c7c01*/
  std::fs::File::metadata::h408606eff73040af(&v27, v38); /*0x1004c7c0f*/
  if ( (_DWORD)v27 != 1 ) /*0x1004c7c1b*/
  {
    if ( v32 > 0x100000 ) /*0x1004c7c42*/
    {
      if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(v38, 0, v32 - 1048577) & 1) != 0 ) /*0x1004c7c58*/
      {
        *a1 = 2; /*0x1004c7c5a*/
        a1[1] = v5; /*0x1004c7c61*/
        return (void *)close_NOCANCEL(v38[0]); /*0x1004c7c65*/
      }
      v33 = 0; /*0x1004c7cb0*/
      __dst = (void *)1; /*0x1004c7cb8*/
      v35 = 0; /*0x1004c7cc0*/
      if ( (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::ha15f997b66051ab4(v38, &v33) & 1) != 0 ) /*0x1004c7cda*/
      {
        *a1 = 2; /*0x1004c7cdc*/
        a1[1] = v8; /*0x1004c7ce3*/
LABEL_32:
        v7 = v33; /*0x1004c7e79*/
        if ( !v33 ) /*0x1004c7e80*/
          return (void *)close_NOCANCEL(v38[0]); /*0x1004c7e80*/
        v26 = __dst; /*0x1004c7e82*/
LABEL_38:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v7, 1); /*0x1004c7ec2*/
        return (void *)close_NOCANCEL(v38[0]); /*0x1004c7ec7*/
      }
      v14 = v35; /*0x1004c7d39*/
      if ( v35 ) /*0x1004c7d40*/
      {
        if ( *(_BYTE *)__dst == 10 ) /*0x1004c7d4d*/
        {
          v15 = v35 - 1; /*0x1004c7d56*/
          memmove(__dst, (char *)__dst + 1, v35 - 1); /*0x1004c7d5c*/
          v16 = v15; /*0x1004c7d61*/
          v35 = v15; /*0x1004c7d64*/
LABEL_28:
          alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v36, __dst, v16); /*0x1004c7dfd*/
          v23 = *((const void **)&v36 + 1); /*0x1004c7e0e*/
          v22 = (void *)v36; /*0x1004c7e0e*/
          v24 = __n; /*0x1004c7e18*/
          if ( __OFSUB__(-(__int64)v36, 1) ) /*0x1004c7e15*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v27, __n, 0, 1, 1); /*0x1004c7e35*/
            v22 = __src; /*0x1004c7e3a*/
            if ( (_DWORD)v27 == 1 ) /*0x1004c7e48*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__src, v29); /*0x1004c7ef0*/
            v25 = v29; /*0x1004c7e4e*/
            memcpy((void *)v29, v23, v24); /*0x1004c7e5e*/
            v23 = (const void *)v25; /*0x1004c7e63*/
          }
          a1[1] = v22; /*0x1004c7e66*/
          a1[2] = v23; /*0x1004c7e6a*/
          a1[3] = v24; /*0x1004c7e6e*/
          *a1 = 11; /*0x1004c7e72*/
          goto LABEL_32; /*0x1004c7e72*/
        }
        v19 = 1; /*0x1004c7d98*/
        while ( v35 != v19 ) /*0x1004c7da0*/
        {
          v20 = v19 + 1; /*0x1004c7da2*/
          if ( *((_BYTE *)__dst + v19++) == 10 ) /*0x1004c7da6*/
          {
            v35 = 0; /*0x1004c7daf*/
            v30 = v20; /*0x1004c7dbe*/
            v31 = v14 - v20; /*0x1004c7dc5*/
            v27 = (__int64)__dst; /*0x1004c7dcc*/
            __src = (char *)__dst + v20; /*0x1004c7dd3*/
            v29 = (size_t)&v33; /*0x1004c7dda*/
            _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8627efe835877640(&v27); /*0x1004c7de8*/
            v16 = v35; /*0x1004c7ded*/
            goto LABEL_28; /*0x1004c7df1*/
          }
        }
      }
      v35 = 0; /*0x1004c7df3*/
      v16 = 0; /*0x1004c7dfb*/
      goto LABEL_28; /*0x1004c7dfb*/
    }
    *(_QWORD *)&v36 = 0; /*0x1004c7c6a*/
    *((_QWORD *)&v36 + 1) = 1; /*0x1004c7c72*/
    __n = 0; /*0x1004c7c7a*/
    if ( (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::ha15f997b66051ab4(v38, &v36) & 1) != 0 ) /*0x1004c7c91*/
    {
      *a1 = 2; /*0x1004c7c93*/
      a1[1] = v6; /*0x1004c7c9a*/
      v7 = v36; /*0x1004c7c9e*/
      if ( !(_QWORD)v36 ) /*0x1004c7ca5*/
        return (void *)close_NOCANCEL(v38[0]); /*0x1004c7ca5*/
LABEL_37:
      v26 = *((void **)&v36 + 1); /*0x1004c7ebe*/
      goto LABEL_38; /*0x1004c7ebe*/
    }
    v9 = *((_QWORD *)&v36 + 1); /*0x1004c7cec*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v27, *((_QWORD *)&v36 + 1), __n); /*0x1004c7cfb*/
    v10 = v27; /*0x1004c7d00*/
    v11 = __src; /*0x1004c7d07*/
    v12 = v29; /*0x1004c7d14*/
    if ( __OFSUB__(-v27, 1) ) /*0x1004c7d11*/
    {
      if ( (v29 & 0x8000000000000000LL) != 0LL ) /*0x1004c7d24*/
      {
        v13 = 0; /*0x1004c7d26*/
        goto LABEL_16; /*0x1004c7d26*/
      }
      if ( v29 ) /*0x1004c7d6d*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v27, v9); /*0x1004c7d73*/
        v13 = 1; /*0x1004c7d78*/
        v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1004c7d86*/
        if ( !v17 ) /*0x1004c7d8e*/
LABEL_16:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x1004c7d29*/
        v18 = v17; /*0x1004c7d90*/
      }
      else
      {
        v18 = 1; /*0x1004c7e88*/
      }
      memcpy((void *)v18, v11, v12); /*0x1004c7e97*/
      v10 = v12; /*0x1004c7e9c*/
      v11 = (void *)v18; /*0x1004c7e9f*/
    }
    a1[1] = v10; /*0x1004c7ea2*/
    a1[2] = v11; /*0x1004c7ea6*/
    a1[3] = v12; /*0x1004c7eaa*/
    *a1 = 11; /*0x1004c7eae*/
    v7 = v36; /*0x1004c7eb5*/
    if ( !(_QWORD)v36 ) /*0x1004c7ebc*/
      return (void *)close_NOCANCEL(v38[0]); /*0x1004c7ebc*/
    goto LABEL_37; /*0x1004c7ebc*/
  }
  v4 = __src; /*0x1004c7c1d*/
  *a1 = 2; /*0x1004c7c24*/
  a1[1] = v4; /*0x1004c7c2b*/
  return (void *)close_NOCANCEL(v38[0]); /*0x1004c7ed4*/
}