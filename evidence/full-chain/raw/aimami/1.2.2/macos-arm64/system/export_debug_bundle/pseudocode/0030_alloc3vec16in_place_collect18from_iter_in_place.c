// mac 1.2.2 NEW export_debug_bundle 0x1004fa770 d=1
unsigned __int64 *__fastcall alloc::vec::in_place_collect::from_iter_in_place::hf4d2c5ba0444e472(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v13; // [rsp+18h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-30h]

  v2 = *a2; /*0x1004fa788*/
  v3 = a2[2]; /*0x1004fa78b*/
  v13 = 32 * v3; /*0x1004fa7a4*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h818395f4e0af37de( /*0x1004fa7bb*/
    a2,
    v2,
    v2,
    a2 + 4,
    a2[3]);
  v14 = 32 * v3 / 0x18uLL; /*0x1004fa7c7*/
  v5 = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)(v4 - v2) >> 3); /*0x1004fa7dc*/
  v15 = v2; /*0x1004fa7e0*/
  v6 = a2[1]; /*0x1004fa7f0*/
  v7 = a2[3]; /*0x1004fa7f4*/
  a2[2] = 0; /*0x1004fa7f8*/
  *a2 = 8; /*0x1004fa800*/
  a2[1] = 8; /*0x1004fa807*/
  a2[3] = 8; /*0x1004fa80f*/
  v8 = v7 - v6; /*0x1004fa817*/
  if ( v8 ) /*0x1004fa81a*/
  {
    v9 = v8 >> 5; /*0x1004fa81c*/
    v10 = v6 + 16; /*0x1004fa820*/
    do /*0x1004fa837*/
    {
      if ( *(_QWORD *)(v10 - 8) ) /*0x1004fa839*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004fa84c*/
      v10 += 32; /*0x1004fa830*/
      --v9; /*0x1004fa834*/
    }
    while ( v9 ); /*0x1004fa837*/
  }
  if ( v13 != 24 * v14 && v3 != 0 ) /*0x1004fa856*/
  {
    v11 = 8; /*0x1004fa877*/
    if ( v13 ) /*0x1004fa87f*/
    {
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_realloc(v15, v13, 8, 24 * v14); /*0x1004fa88d*/
      if ( !v11 ) /*0x1004fa893*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24 * v14); /*0x1004fa89d*/
    }
  }
  else
  {
    v11 = v15; /*0x1004fa8a4*/
  }
  *a1 = v14; /*0x1004fa8b0*/
  a1[1] = v11; /*0x1004fa8b3*/
  a1[2] = v5; /*0x1004fa8b7*/
  return a1; /*0x1004fa8bb*/
}