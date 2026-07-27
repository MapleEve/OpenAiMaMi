// __ZN13codexmate_lib4core10repository10Repository25get_mystery_unlock_grants @ 0x100a62dc0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::get_mystery_unlock_grants::hc56668c9e73b309a(
        _QWORD *a1,
        _QWORD *a2)
{
  double v2; // xmm0_8
  int v3; // edx
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD v8[12]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v9[5]; // [rsp+60h] [rbp-100h] BYREF
  _WORD __dst[8]; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+98h] [rbp-C8h]
  __int64 v12; // [rsp+A0h] [rbp-C0h]
  __int64 v13; // [rsp+B0h] [rbp-B0h]
  __int64 v14; // [rsp+B8h] [rbp-A8h]
  __int64 v15; // [rsp+C0h] [rbp-A0h]
  __int64 v16; // [rsp+C8h] [rbp-98h]
  __int64 v17; // [rsp+D0h] [rbp-90h]
  __int64 v18; // [rsp+E0h] [rbp-80h]
  __int64 v19; // [rsp+E8h] [rbp-78h]
  __int64 v20; // [rsp+F8h] [rbp-68h]
  __int64 v21; // [rsp+100h] [rbp-60h]
  __int64 v22; // [rsp+120h] [rbp-40h] BYREF
  int v23; // [rsp+128h] [rbp-38h]
  unsigned __int64 v24; // [rsp+130h] [rbp-30h] BYREF

  v2 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, (__int64)a2); /*0x100a62de1*/
  v22 = std::time::SystemTime::now::h1fe79e41f9d5677f(__dst, a2); /*0x100a62dee*/
  v23 = v3; /*0x100a62df2*/
  std::time::SystemTime::duration_since::had059553cab94f96(v8, &v22, 0, 0); /*0x100a62e07*/
  if ( LOBYTE(v8[0]) ) /*0x100a62e13*/
    v4 = 0; /*0x100a62e15*/
  else
    v4 = 1000LL * v8[1] + LODWORD(v8[2]) / 0xF4240uLL; /*0x100a62e35*/
  v24 = v4; /*0x100a62e38*/
  v5 = v15; /*0x100a62e3c*/
  v9[0] = v14; /*0x100a62e5a*/
  v9[1] = v14; /*0x100a62e61*/
  v9[2] = v13; /*0x100a62e68*/
  v9[3] = v14 + 40 * v15; /*0x100a62e6f*/
  v9[4] = &v24; /*0x100a62e7a*/
  alloc::vec::in_place_collect::from_iter_in_place::hafd6fd509ec887bf(v8, v9, v2); /*0x100a62e92*/
  v15 = v8[2]; /*0x100a62ea5*/
  v14 = v8[1]; /*0x100a62eb8*/
  v13 = v8[0]; /*0x100a62ebd*/
  if ( v8[2] == v5 /*0x100a62eea*/
    || (codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v8, a2, (__int64)__dst, v2),
        LODWORD(v8[0]) == 11) )
  {
    a1[3] = v15; /*0x100a62ef5*/
    v6 = v13; /*0x100a62ef9*/
    a1[2] = v14; /*0x100a62f02*/
    a1[1] = v6; /*0x100a62f06*/
    *a1 = 11; /*0x100a62f0a*/
    if ( v11 ) /*0x100a62f1b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100a62f29*/
    if ( !__OFSUB__(-v16, 1) && v16 ) /*0x100a62f47*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100a62f55*/
    if ( v18 != 0x8000000000000000LL && v18 ) /*0x100a62f66*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x100a62f71*/
    if ( v20 != 0x8000000000000000LL && v20 ) /*0x100a62f82*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x100a62f8d*/
  }
  else
  {
    qmemcpy(a1, v8, 0x60u); /*0x100a62fa3*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v9); /*0x100a62fad*/
  }
  return a1; /*0x100a62fb5*/
}