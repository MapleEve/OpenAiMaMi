// __ZN13codexmate_lib4core5relay7breaker17select_candidates @ 0x100914cc0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::breaker::select_candidates::h3a550ff84efdf330(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  _QWORD v10[8]; // [rsp+0h] [rbp-120h] BYREF
  __int64 v11[5]; // [rsp+40h] [rbp-E0h] BYREF
  _QWORD v12[4]; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD v13[4]; // [rsp+88h] [rbp-98h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v17; // [rsp+C0h] [rbp-60h]
  __int64 v18; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-50h]
  __int64 v20; // [rsp+D8h] [rbp-48h]
  __int64 v21; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-38h]
  __int64 v23; // [rsp+F0h] [rbp-30h]

  v14 = a4; /*0x100914cd7*/
  v4 = *(_QWORD *)(a2 + 40); /*0x100914cdb*/
  if ( v4 ) /*0x100914ce2*/
  {
    v6 = *(_QWORD *)(a2 + 32) + 24 * v4; /*0x100914cf3*/
    v11[0] = *(_QWORD *)(a2 + 32); /*0x100914cf7*/
    v11[1] = v6; /*0x100914cfe*/
    v11[2] = 0; /*0x100914d05*/
    v11[3] = a2; /*0x100914d10*/
    v11[4] = (__int64)v12; /*0x100914d1e*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2294e423e2d234f4( /*0x100914d30*/
      &v15,
      v11);
    v7 = v17; /*0x100914d35*/
    if ( v17 ) /*0x100914d3c*/
    {
      v8 = v16; /*0x100914d42*/
      v13[0] = v12; /*0x100914d46*/
      if ( v17 != 1 ) /*0x100914d51*/
      {
        if ( v17 >= 0x15 ) /*0x100914ebf*/
          core::slice::sort::stable::driftsort_main::hbe90d7e4222f9f03(v16, v17, v13); /*0x100914eea*/
        else
          core::slice::sort::shared::smallsort::insertion_sort_shift_left::hee3c6e9bdb4ad9bd(v16, v17, 1, v13); /*0x100914ed3*/
      }
      v21 = 0; /*0x100914d65*/
      v22 = 8; /*0x100914d6d*/
      v23 = 0; /*0x100914d75*/
      v18 = 0; /*0x100914d7d*/
      v19 = 8; /*0x100914d85*/
      v20 = 0; /*0x100914d8d*/
      v12[0] = v8; /*0x100914d95*/
      v12[1] = v8; /*0x100914d9c*/
      v12[2] = v15; /*0x100914da3*/
      v12[3] = v8 + 240 * v7; /*0x100914daa*/
      v13[0] = a3; /*0x100914db1*/
      v13[1] = &v14; /*0x100914dbc*/
      v13[2] = &v21; /*0x100914dc7*/
      v13[3] = &v18; /*0x100914dd2*/
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hcb0bccb77d219fca( /*0x100914de4*/
        v12,
        v13);
      v10[0] = v22; /*0x100914e0f*/
      v10[1] = v22; /*0x100914e16*/
      v10[2] = v21; /*0x100914e1d*/
      v10[3] = v22 + 232 * v23; /*0x100914e24*/
      v10[4] = v19; /*0x100914e2b*/
      v10[5] = v19; /*0x100914e32*/
      v10[6] = v18; /*0x100914e39*/
      v10[7] = v19 + 232 * v20; /*0x100914e40*/
      ((void (__fastcall *)(_QWORD *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hec4611e38125c229)( /*0x100914e51*/
        a1,
        v10);
    }
    else
    {
      *a1 = 0; /*0x100914e71*/
      a1[1] = 8; /*0x100914e78*/
      a1[2] = 0; /*0x100914e80*/
      if ( v15 ) /*0x100914e8f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 240 * v15, 8); /*0x100914ea1*/
    }
  }
  else
  {
    *a1 = 0; /*0x100914e58*/
    a1[1] = 8; /*0x100914e5f*/
    a1[2] = 0; /*0x100914e67*/
  }
  return a1; /*0x100914ea9*/
}