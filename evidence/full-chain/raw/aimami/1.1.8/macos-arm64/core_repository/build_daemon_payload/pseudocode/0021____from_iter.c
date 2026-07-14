// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x1006c2c80 depth=2
// _::from_iter
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he9c406b362287699(
        unsigned __int64 *a1,
        __int64 *a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // r13
  _QWORD *v4; // rbx
  char *v5; // rax
  char *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rdx
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  char *v12; // rax
  unsigned __int64 *result; // rax
  unsigned __int64 v14; // rdx
  _DWORD __src[84]; // [rsp+0h] [rbp-1D0h] BYREF
  _QWORD *v16; // [rsp+150h] [rbp-80h] BYREF
  _QWORD *v17; // [rsp+158h] [rbp-78h] BYREF
  _QWORD *v18; // [rsp+160h] [rbp-70h]
  _QWORD v19[3]; // [rsp+168h] [rbp-68h] BYREF
  unsigned __int64 *v20; // [rsp+180h] [rbp-50h]
  char *v21; // [rsp+188h] [rbp-48h]
  unsigned __int64 v22; // [rsp+190h] [rbp-40h] BYREF
  char *v23; // [rsp+198h] [rbp-38h]
  __int64 v24; // [rsp+1A0h] [rbp-30h]

  v20 = a1; /*0x1006c2c97*/
  v17 = a2 + 2; /*0x1006c2c9f*/
  v2 = (_QWORD *)*a2; /*0x1006c2ca3*/
  v3 = (_QWORD *)a2[1]; /*0x1006c2ca6*/
  do /*0x1006c2ce9*/
  {
    if ( v2 == v3 ) /*0x1006c2cc3*/
    {
      result = v20; /*0x1006c2e00*/
      *v20 = 0; /*0x1006c2e04*/
      result[1] = 8; /*0x1006c2e0b*/
      result[2] = 0; /*0x1006c2e13*/
      return result; /*0x1006c2e1b*/
    }
    v4 = v2 + 45; /*0x1006c2cc9*/
    *a2 = (__int64)(v2 + 45); /*0x1006c2cd0*/
    core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::hf974e027255e39bd( /*0x1006c2cda*/
      __src,
      &v17);
    v2 = v4; /*0x1006c2ce6*/
  }
  while ( __src[0] == 2 ); /*0x1006c2ce9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c2ceb*/
  v5 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x540u, 8u); /*0x1006c2cfa*/
  if ( !v5 ) /*0x1006c2d02*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 1344); /*0x1006c2e54*/
  v6 = v5; /*0x1006c2d08*/
  memcpy(v5, __src, 0x150u); /*0x1006c2d1d*/
  v22 = 4; /*0x1006c2d22*/
  v21 = v6; /*0x1006c2d2a*/
  v23 = v6; /*0x1006c2d2e*/
  v24 = 1; /*0x1006c2d32*/
  v19[2] = a2[4]; /*0x1006c2d3f*/
  v19[1] = a2[3]; /*0x1006c2d48*/
  v19[0] = a2[2]; /*0x1006c2d51*/
  v7 = (_QWORD *)*a2; /*0x1006c2d55*/
  v18 = (_QWORD *)a2[1]; /*0x1006c2d5e*/
  v17 = v7; /*0x1006c2d62*/
  v8 = 1; /*0x1006c2d6a*/
LABEL_6:
  v16 = v19; /*0x1006c2d74*/
  v9 = v17; /*0x1006c2d78*/
  v10 = v18; /*0x1006c2d7c*/
  while ( v9 != v10 ) /*0x1006c2d83*/
  {
    v11 = v9 + 45; /*0x1006c2d89*/
    v17 = v9 + 45; /*0x1006c2d90*/
    core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnMut$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_mut::hf974e027255e39bd( /*0x1006c2d9a*/
      __src,
      &v16);
    v9 = v11; /*0x1006c2da6*/
    if ( __src[0] != 2 ) /*0x1006c2da9*/
    {
      v12 = v21; /*0x1006c2daf*/
      if ( v8 == v22 ) /*0x1006c2db3*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v22, v8, 1, 8, 0x150u); /*0x1006c2dcc*/
        v12 = v23; /*0x1006c2dd1*/
      }
      v21 = v12; /*0x1006c2ddc*/
      memcpy(&v12[336 * v8++], __src, 0x150u); /*0x1006c2deb*/
      v24 = v8; /*0x1006c2df3*/
      goto LABEL_6; /*0x1006c2dfb*/
    }
  }
  result = v20; /*0x1006c2e21*/
  v20[2] = v24; /*0x1006c2e25*/
  v14 = v22; /*0x1006c2e29*/
  result[1] = (unsigned __int64)v23; /*0x1006c2e31*/
  *result = v14; /*0x1006c2e35*/
  return result; /*0x1006c2e38*/
}