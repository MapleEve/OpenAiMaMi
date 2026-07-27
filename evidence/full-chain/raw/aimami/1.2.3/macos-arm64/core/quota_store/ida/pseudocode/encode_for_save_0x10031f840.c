// __ZN13codexmate_lib4core11quota_store15encode_for_save @ 0x10031f840 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::quota_store::encode_for_save::h1b527b913713be61(_QWORD *a1, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // r15
  int v4; // eax
  _BYTE *v5; // rax
  __int64 v6; // r14
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rsi
  _QWORD *v10; // r12
  _QWORD *v11; // r14
  __int64 v12; // r15
  __int64 v13; // r9
  size_t v14; // r12
  __int64 v15; // r13
  __int64 v16; // rcx
  _QWORD v18[4]; // [rsp+8h] [rbp-A8h] BYREF
  char v19; // [rsp+28h] [rbp-88h]
  void *__src; // [rsp+30h] [rbp-80h]
  __int64 v21; // [rsp+38h] [rbp-78h] BYREF
  __int64 v22; // [rsp+40h] [rbp-70h]
  __int64 v23; // [rsp+48h] [rbp-68h]
  __int64 v24; // [rsp+50h] [rbp-60h] BYREF
  int v25; // [rsp+58h] [rbp-58h] BYREF
  __int64 v26; // [rsp+60h] [rbp-50h] BYREF
  _BYTE *v27; // [rsp+68h] [rbp-48h]
  __int64 v28; // [rsp+70h] [rbp-40h]
  __int16 v29; // [rsp+78h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+80h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 32); /*0x10031f857*/
  v3 = *(_QWORD *)(a2 + 24); /*0x10031f85b*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hee2720bf590dd773(&v21); /*0x10031f863*/
  v24 = v3; /*0x10031f868*/
  v4 = 3; /*0x10031f870*/
  if ( v2 >= 4 ) /*0x10031f875*/
    v4 = v2; /*0x10031f875*/
  v25 = v4; /*0x10031f879*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v21, a2); /*0x10031f87c*/
  v5 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x10031f88b*/
  if ( !v5 ) /*0x10031f893*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10031fb14*/
  v26 = 128; /*0x10031f89d*/
  v27 = v5; /*0x10031f8a5*/
  v18[0] = &v26; /*0x10031f8ad*/
  v18[1] = &unk_1015E3B85; /*0x10031f8bb*/
  v18[2] = 2; /*0x10031f8c2*/
  v18[3] = 1; /*0x10031f8cd*/
  v19 = 0; /*0x10031f8d8*/
  *v5 = 123; /*0x10031f8df*/
  v28 = 1; /*0x10031f8e2*/
  v29 = 256; /*0x10031f8ea*/
  v30 = v18; /*0x10031f8f7*/
  v6 = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x10031f910*/
         &v29,
         &anon_b0ee9adff4519c22b647af231a5a39fa_26,
         13,
         &v25);
  if ( v6 ) /*0x10031f916*/
    goto LABEL_8; /*0x10031f916*/
  if ( (_BYTE)v29 ) /*0x10031f91c*/
    goto LABEL_6; /*0x10031f91c*/
  v6 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10031f941*/
         &v29,
         &anon_b0ee9adff4519c22b647af231a5a39fa_27,
         9,
         &v24);
  if ( v6 ) /*0x10031f947*/
    goto LABEL_8; /*0x10031f947*/
  if ( (_BYTE)v29 ) /*0x10031f9bc*/
  {
LABEL_6:
    v6 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10031f91e*/
    goto LABEL_8; /*0x10031f926*/
  }
  v6 = serde_core::ser::SerializeMap::serialize_entry::h0a5138ae050f571d( /*0x10031f9db*/
         &v29,
         &anon_b0ee9adff4519c22b647af231a5a39fa_28,
         5,
         &v21);
  if ( v6 ) /*0x10031f9e1*/
  {
LABEL_8:
    if ( v26 ) /*0x10031f950*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 1); /*0x10031f95b*/
    goto LABEL_10; /*0x10031f95b*/
  }
  if ( (v29 & 1) == 0 && HIBYTE(v29) ) /*0x10031f9f5*/
  {
    v10 = v30; /*0x10031f9fb*/
    v11 = (_QWORD *)*v30; /*0x10031f9ff*/
    v12 = v30[3] - 1LL; /*0x10031fa08*/
    v30[3] = v12; /*0x10031fa0b*/
    if ( *((_BYTE *)v10 + 32) == 1 ) /*0x10031fa16*/
    {
      alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(v11, "\n", 1); /*0x10031fa27*/
      if ( v12 ) /*0x10031fa2f*/
      {
        __src = (void *)v10[1]; /*0x10031fa36*/
        v14 = v10[2]; /*0x10031fa3a*/
        v15 = v11[2]; /*0x10031fa3f*/
        do /*0x10031fa6b*/
        {
          if ( v14 > *v11 - v15 ) /*0x10031fa4c*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10031fa83*/
              v11,
              v15,
              v14,
              1,
              1,
              v13);
            v15 = v11[2]; /*0x10031fa88*/
          }
          memcpy((void *)(v15 + v11[1]), __src, v14); /*0x10031fa5c*/
          v15 += v14; /*0x10031fa61*/
          v11[2] = v15; /*0x10031fa64*/
          --v12; /*0x10031fa68*/
        }
        while ( v12 ); /*0x10031fa6b*/
      }
    }
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10031fa9d*/
      v11,
      &anon_b0ee9adff4519c22b647af231a5a39fa_15,
      1);
  }
  v6 = (__int64)v27; /*0x10031faa6*/
  if ( !__OFSUB__(-v26, 1) ) /*0x10031fab0*/
  {
    v16 = v28; /*0x10031fab6*/
    a1[1] = v26; /*0x10031faba*/
    a1[2] = v6; /*0x10031fabe*/
    a1[3] = v16; /*0x10031fac2*/
    *a1 = 11; /*0x10031fac6*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he8c2e72f3314b210(&v21); /*0x10031fad1*/
    goto LABEL_28; /*0x10031fad1*/
  }
LABEL_10:
  *a1 = 3; /*0x10031f960*/
  a1[1] = v6; /*0x10031f967*/
  v7 = v23; /*0x10031f96b*/
  if ( v23 ) /*0x10031f972*/
  {
    v8 = (_QWORD *)(v22 + 128); /*0x10031f97c*/
    do /*0x10031f99a*/
    {
      v9 = *(v8 - 1); /*0x10031f9a0*/
      if ( v9 ) /*0x10031f9a7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v9, 1); /*0x10031f9b1*/
      v8 += 20; /*0x10031f990*/
      --v7; /*0x10031f997*/
    }
    while ( v7 ); /*0x10031f99a*/
  }
LABEL_28:
  if ( v21 ) /*0x10031fadd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 160 * v21, 8); /*0x10031faf0*/
  return a1; /*0x10031faf8*/
}