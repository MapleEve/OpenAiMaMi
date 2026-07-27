// __ZN13codexmate_lib15launched_hidden @ 0x1006f2c60
bool codexmate_lib::launched_hidden::hdca70e9ee16aa088()
{
  __int64 v0; // rbx
  int v1; // r13d
  bool v2; // r12
  unsigned __int64 v3; // r14
  _QWORD *v4; // r15
  __int64 v5; // rsi
  __int64 v7; // [rsp+0h] [rbp-60h] BYREF
  _QWORD *v8; // [rsp+8h] [rbp-58h]
  __int64 v9; // [rsp+10h] [rbp-50h]
  __int64 v10; // [rsp+18h] [rbp-48h] BYREF
  __int64 v11; // [rsp+20h] [rbp-40h]
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h]

  std::env::args::he28e7e7a8b8590aa(&v10); /*0x1006f2c78*/
  while ( 1 ) /*0x1006f2c9e*/
  {
    _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6ffda47e6f9e9ab(&v7, &v10); /*0x1006f2c9e*/
    v0 = v7; /*0x1006f2ca3*/
    if ( __OFSUB__(-v7, 1) ) /*0x1006f2cad*/
      break; /*0x1006f2cad*/
    if ( v9 == 8 ) /*0x1006f2cb8*/
    {
      v1 = 0; /*0x1006f2cba*/
      v2 = *v8 != 0x6E65646469682D2DLL; /*0x1006f2cca*/
      if ( v7 ) /*0x1006f2cd1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1006f2cdb*/
      LOBYTE(v1) = v2; /*0x1006f2c90*/
      if ( !v1 ) /*0x1006f2c96*/
        break; /*0x1006f2c96*/
    }
    else if ( v7 ) /*0x1006f2cf3*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1006f2cfd*/
    }
  }
  if ( v13 != v11 ) /*0x1006f2d22*/
  {
    v3 = (v13 - v11) / 0x18uLL; /*0x1006f2d27*/
    v4 = (_QWORD *)(v11 + 8); /*0x1006f2d2b*/
    do /*0x1006f2d47*/
    {
      v5 = *(v4 - 1); /*0x1006f2d49*/
      if ( v5 ) /*0x1006f2d50*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v4, v5, 1); /*0x1006f2d5a*/
      v4 += 3; /*0x1006f2d40*/
      --v3; /*0x1006f2d44*/
    }
    while ( v3 ); /*0x1006f2d47*/
  }
  if ( v12 ) /*0x1006f2d68*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24 * v12, 8); /*0x1006f2d7b*/
  return !__OFSUB__(-v0, 1); /*0x1006f2d86*/
}