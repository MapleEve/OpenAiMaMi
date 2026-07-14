// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1006b9a90 depth=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h020dd271e9092000(
        unsigned __int64 *a1,
        __int64 *a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // r14
  unsigned __int64 *result; // rax
  __int64 v7; // rbx
  char *v8; // rax
  char *v9; // rbx
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rbx
  char *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-270h] BYREF
  __int64 v19; // [rsp+8h] [rbp-268h]
  _BYTE __src[224]; // [rsp+10h] [rbp-260h] BYREF
  _QWORD v21[30]; // [rsp+F0h] [rbp-180h] BYREF
  unsigned __int64 *v22; // [rsp+1E0h] [rbp-90h]
  char *v23; // [rsp+1E8h] [rbp-88h]
  __int64 v24; // [rsp+1F0h] [rbp-80h]
  _QWORD *v25; // [rsp+1F8h] [rbp-78h] BYREF
  _QWORD *v26; // [rsp+200h] [rbp-70h]
  __int64 v27; // [rsp+208h] [rbp-68h] BYREF
  _QWORD v28[2]; // [rsp+210h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+220h] [rbp-50h] BYREF
  char *v30; // [rsp+228h] [rbp-48h]
  __int64 v31; // [rsp+230h] [rbp-40h]
  _QWORD *v32; // [rsp+238h] [rbp-38h] BYREF
  __int64 *v33; // [rsp+240h] [rbp-30h]

  v22 = a1; /*0x1006b9aa4*/
  v25 = a2 + 3; /*0x1006b9ab3*/
  v26 = a2 + 2; /*0x1006b9ab7*/
  v2 = (_QWORD *)*a2; /*0x1006b9abb*/
  v3 = (_QWORD *)a2[1]; /*0x1006b9abe*/
  if ( (_QWORD *)*a2 == v3 ) /*0x1006b9ac5*/
  {
LABEL_4:
    result = v22; /*0x1006b9b12*/
    *v22 = 0; /*0x1006b9b19*/
    result[1] = 8; /*0x1006b9b20*/
    result[2] = 0; /*0x1006b9b28*/
  }
  else
  {
    while ( 1 ) /*0x1006b9ad0*/
    {
      v4 = v2; /*0x1006b9ad0*/
      v2 += 3; /*0x1006b9ad3*/
      *a2 = (__int64)v2; /*0x1006b9ad7*/
      core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::h6671ec758757b925( /*0x1006b9aeb*/
        &v18,
        &v25,
        *v26,
        v4);
      v5 = v19; /*0x1006b9af0*/
      if ( v19 != 0x8000000000000000LL ) /*0x1006b9b04*/
        break; /*0x1006b9b04*/
      ++*v26; /*0x1006b9b0a*/
      if ( v2 == v3 ) /*0x1006b9b10*/
        goto LABEL_4; /*0x1006b9b10*/
    }
    v7 = v18; /*0x1006b9b35*/
    memcpy(&v21[2], __src, 0xE0u); /*0x1006b9b4f*/
    ++*v26; /*0x1006b9b58*/
    v21[0] = v7; /*0x1006b9b5b*/
    v21[1] = v5; /*0x1006b9b62*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006b9b69*/
    v8 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x3C0u, 8u); /*0x1006b9b78*/
    if ( !v8 ) /*0x1006b9b80*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 960); /*0x1006b9d48*/
    v9 = v8; /*0x1006b9b86*/
    memcpy(v8, v21, 0xF0u); /*0x1006b9b98*/
    v29 = 4; /*0x1006b9b9d*/
    v23 = v9; /*0x1006b9ba5*/
    v30 = v9; /*0x1006b9bac*/
    v31 = 1; /*0x1006b9bb0*/
    v28[1] = a2[4]; /*0x1006b9bbc*/
    v28[0] = a2[3]; /*0x1006b9bc4*/
    v27 = a2[2]; /*0x1006b9bcc*/
    v10 = (_QWORD *)*a2; /*0x1006b9bd0*/
    v11 = (_QWORD *)a2[1]; /*0x1006b9bd3*/
    v26 = v11; /*0x1006b9bd7*/
    v25 = v10; /*0x1006b9bdb*/
    v32 = v28; /*0x1006b9be7*/
    v33 = &v27; /*0x1006b9beb*/
    if ( v10 != v11 ) /*0x1006b9bf2*/
    {
      v24 = 1; /*0x1006b9bfd*/
      do /*0x1006b9d01*/
      {
        while ( 1 ) /*0x1006b9c10*/
        {
          v12 = v10; /*0x1006b9c10*/
          v10 += 3; /*0x1006b9c13*/
          v25 = v10; /*0x1006b9c17*/
          core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::h6671ec758757b925( /*0x1006b9c28*/
            &v18,
            &v32,
            *v33,
            v12);
          v13 = v19; /*0x1006b9c2d*/
          if ( v19 != 0x8000000000000000LL ) /*0x1006b9c41*/
            break; /*0x1006b9c41*/
          ++*v33; /*0x1006b9c47*/
          if ( v10 == v11 ) /*0x1006b9c4d*/
            goto LABEL_14; /*0x1006b9c4d*/
        }
        v14 = v18; /*0x1006b9c54*/
        memcpy(&v21[2], __src, 0xE0u); /*0x1006b9c6e*/
        ++*v33; /*0x1006b9c77*/
        v21[0] = v14; /*0x1006b9c7a*/
        v21[1] = v13; /*0x1006b9c81*/
        v15 = v24; /*0x1006b9c88*/
        v16 = v23; /*0x1006b9c90*/
        if ( v24 == v29 ) /*0x1006b9c97*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1006b9cb0*/
            &v29,
            v24,
            1,
            8,
            0xF0u);
          v16 = v30; /*0x1006b9cb5*/
        }
        v23 = v16; /*0x1006b9cc0*/
        memcpy(&v16[240 * v15], v21, 0xF0u); /*0x1006b9cd6*/
        v24 = v15 + 1; /*0x1006b9cde*/
        v31 = v15 + 1; /*0x1006b9ce2*/
        v32 = v28; /*0x1006b9cea*/
        v33 = &v27; /*0x1006b9cf2*/
        v10 = v25; /*0x1006b9cf6*/
        v11 = v26; /*0x1006b9cfa*/
      }
      while ( v25 != v26 ); /*0x1006b9d01*/
    }
LABEL_14:
    result = v22; /*0x1006b9d07*/
    v22[2] = v31; /*0x1006b9d12*/
    v17 = v29; /*0x1006b9d16*/
    result[1] = (unsigned __int64)v30; /*0x1006b9d1e*/
    *result = v17; /*0x1006b9d22*/
  }
  return result; /*0x1006b9d25*/
}