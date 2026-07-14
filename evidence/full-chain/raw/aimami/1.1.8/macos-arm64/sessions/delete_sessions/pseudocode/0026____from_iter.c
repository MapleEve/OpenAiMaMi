// mac 1.1.8 delete_sessions node va=0x1006bb190 depth=1
// _::from_iter
__int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h195594696fa269ac(
        __int64 *a1)
{
  __int64 *v1; // r14
  __int64 v2; // rax
  _QWORD *v3; // r14
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 i; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+18h] [rbp-78h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-60h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-30h]

  v1 = a1; /*0x1006bb1a4*/
  _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75266e45b4c186d2(v11); /*0x1006bb1ab*/
  if ( __OFSUB__(-v11[0], 1) ) /*0x1006bb1b7*/
  {
    *a1 = 0; /*0x1006bb1bc*/
    a1[1] = 8; /*0x1006bb1c3*/
    a1[2] = 0; /*0x1006bb1cb*/
  }
  else
  {
    v12 = a1; /*0x1006bb1d8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006bb1e0*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x60u, 8u); /*0x1006bb1ef*/
    if ( !v2 ) /*0x1006bb1f7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 96); /*0x1006bb307*/
    v3 = (_QWORD *)v2; /*0x1006bb1fd*/
    *(_QWORD *)(v2 + 16) = v11[2]; /*0x1006bb204*/
    v4 = v11[0]; /*0x1006bb208*/
    v3[1] = v11[1]; /*0x1006bb210*/
    *v3 = v4; /*0x1006bb214*/
    v13 = 4; /*0x1006bb217*/
    v14 = v3; /*0x1006bb21f*/
    v15 = 1; /*0x1006bb223*/
    v5 = 1; /*0x1006bb248*/
    for ( i = 3; ; i += 3 ) /*0x1006bb24e*/
    {
      _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75266e45b4c186d2(v10); /*0x1006bb28c*/
      if ( v10[0] == 0x8000000000000000LL ) /*0x1006bb2a2*/
        break; /*0x1006bb2a2*/
      if ( v5 == v13 ) /*0x1006bb2a8*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v13, v5, 1, 8, 24); /*0x1006bb2c5*/
        v3 = v14; /*0x1006bb2ca*/
      }
      v3[i + 2] = v10[2]; /*0x1006bb264*/
      v7 = v10[0]; /*0x1006bb269*/
      v3[i + 1] = v10[1]; /*0x1006bb271*/
      v3[i] = v7; /*0x1006bb276*/
      v15 = ++v5; /*0x1006bb27d*/
    }
    v1 = v12; /*0x1006bb2d4*/
    v12[2] = v15; /*0x1006bb2d8*/
    v8 = v13; /*0x1006bb2dc*/
    v1[1] = (__int64)v14; /*0x1006bb2e4*/
    *v1 = v8; /*0x1006bb2e8*/
  }
  return v1; /*0x1006bb2ee*/
}