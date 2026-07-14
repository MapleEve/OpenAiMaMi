// mac 1.1.8 force_kill_codex node va=0x100337df0 depth=3
// alloc3vec16in_place_collect18from_iter_in_place
unsigned __int64 *__fastcall alloc::vec::in_place_collect::from_iter_in_place::hdbff3a2a33c05b22(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v15; // [rsp+0h] [rbp-60h]
  __int64 v16; // [rsp+18h] [rbp-48h]
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-30h]

  v2 = *a2; /*0x100337e08*/
  v3 = a2[2]; /*0x100337e0b*/
  v16 = 32 * v3; /*0x100337e24*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hc7e5b92d5b95f3f2( /*0x100337e3b*/
    a2,
    v2,
    v2,
    a2 + 4,
    a2[3]);
  v17 = 32 * v3 / 0x18uLL; /*0x100337e47*/
  v7 = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)(v6 - v2) >> 3); /*0x100337e5c*/
  v18 = v2; /*0x100337e60*/
  v15 = v2; /*0x100337e64*/
  v8 = a2[1]; /*0x100337e70*/
  v9 = a2[3]; /*0x100337e74*/
  a2[2] = 0; /*0x100337e78*/
  *a2 = 8; /*0x100337e80*/
  a2[1] = 8; /*0x100337e87*/
  a2[3] = 8; /*0x100337e8f*/
  v10 = v9 - v8; /*0x100337e97*/
  if ( v10 ) /*0x100337e9a*/
  {
    v11 = v10 >> 5; /*0x100337e9c*/
    v12 = v8 + 16; /*0x100337ea0*/
    do /*0x100337eb7*/
    {
      if ( *(_QWORD *)(v12 - 8) ) /*0x100337eb9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100337ecc*/
      v12 += 32; /*0x100337eb0*/
      --v11; /*0x100337eb4*/
    }
    while ( v11 ); /*0x100337eb7*/
  }
  if ( v16 != 24 * v17 && v3 != 0 ) /*0x100337ed6*/
  {
    v13 = 8; /*0x100337ef7*/
    if ( v16 ) /*0x100337eff*/
    {
      v13 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_realloc(v18, v16, 8, 24 * v17, v4, v5, v15, v7, v3); /*0x100337f0d*/
      if ( !v13 ) /*0x100337f13*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24 * v17); /*0x100337f1d*/
    }
  }
  else
  {
    v13 = v18; /*0x100337f24*/
  }
  *a1 = v17; /*0x100337f30*/
  a1[1] = v13; /*0x100337f33*/
  a1[2] = v7; /*0x100337f37*/
  return a1; /*0x100337f3b*/
}