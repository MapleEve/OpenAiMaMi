// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1006c2eb0 depth=1
// _::from_iter
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hea3ae4d77c087400(
        unsigned __int64 *a1,
        const void *a2)
{
  unsigned __int64 *result; // rax
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 i; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _BYTE v10[72]; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v12[3]; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int64 *v13; // [rsp+78h] [rbp-48h]
  unsigned __int64 v14; // [rsp+80h] [rbp-40h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp-38h]
  __int64 v16; // [rsp+90h] [rbp-30h]

  _$LT$core..iter..adapters..flatten..Flatten$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h163f2d99f24a7ff2(v12); /*0x1006c2ece*/
  if ( __OFSUB__(-v12[0], 1) ) /*0x1006c2eda*/
  {
    *a1 = 0; /*0x1006c2edf*/
    a1[1] = 8; /*0x1006c2ee6*/
    a1[2] = 0; /*0x1006c2eee*/
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$rusqlite..row..MappedRows$LT$codexmate_lib..core..relay..codex_diagnostic..check_legacy_migrated_threads..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h03ef5c3a8f33dd86( /*0x1006c2ef9*/
      a2,
      a2);
    return a1; /*0x1006c2efe*/
  }
  else
  {
    v13 = a1; /*0x1006c2f06*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c2f0e*/
    v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x60u, 8u); /*0x1006c2f1d*/
    if ( !v3 ) /*0x1006c2f25*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 96); /*0x1006c3036*/
    v4 = (_QWORD *)v3; /*0x1006c2f2b*/
    *(_QWORD *)(v3 + 16) = v12[2]; /*0x1006c2f32*/
    v5 = v12[0]; /*0x1006c2f37*/
    v4[1] = v12[1]; /*0x1006c2f3f*/
    *v4 = v5; /*0x1006c2f44*/
    v14 = 4; /*0x1006c2f48*/
    v15 = v4; /*0x1006c2f50*/
    v16 = 1; /*0x1006c2f54*/
    qmemcpy(v10, a2, sizeof(v10)); /*0x1006c2f6b*/
    v6 = 1; /*0x1006c2f6e*/
    for ( i = 3; ; i += 3 ) /*0x1006c2f74*/
    {
      _$LT$core..iter..adapters..flatten..Flatten$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h163f2d99f24a7ff2(v11); /*0x1006c2faf*/
      if ( v11[0] == 0x8000000000000000LL ) /*0x1006c2fc5*/
        break; /*0x1006c2fc5*/
      if ( v6 == v14 ) /*0x1006c2fcb*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v14, v6, 1, 8, 0x18u); /*0x1006c2fe8*/
        v4 = v15; /*0x1006c2fed*/
      }
      v4[i + 2] = v11[2]; /*0x1006c2f84*/
      v8 = v11[0]; /*0x1006c2f89*/
      v4[i + 1] = v11[1]; /*0x1006c2f91*/
      v4[i] = v8; /*0x1006c2f96*/
      v16 = ++v6; /*0x1006c2f9d*/
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$rusqlite..row..MappedRows$LT$codexmate_lib..core..relay..codex_diagnostic..check_legacy_migrated_threads..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h03ef5c3a8f33dd86( /*0x1006c2ffa*/
      v10,
      v10);
    result = v13; /*0x1006c3003*/
    v13[2] = v16; /*0x1006c3007*/
    v9 = v14; /*0x1006c300b*/
    result[1] = (unsigned __int64)v15; /*0x1006c3013*/
    *result = v9; /*0x1006c3017*/
  }
  return result; /*0x1006c301a*/
}