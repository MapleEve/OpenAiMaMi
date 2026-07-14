// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x100542970 depth=0
_QWORD *__fastcall codexmate_lib::core::relay::breaker::select_candidates::h582ee45b5235e65f(
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
  _QWORD v11[5]; // [rsp+40h] [rbp-E0h] BYREF
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

  v14 = a4; /*0x100542987*/
  v4 = *(_QWORD *)(a2 + 40); /*0x10054298b*/
  if ( v4 ) /*0x100542992*/
  {
    v6 = *(_QWORD *)(a2 + 32) + 24 * v4; /*0x1005429a3*/
    v11[0] = *(_QWORD *)(a2 + 32); /*0x1005429a7*/
    v11[1] = v6; /*0x1005429ae*/
    v11[2] = 0; /*0x1005429b5*/
    v11[3] = a2; /*0x1005429c0*/
    v11[4] = v12; /*0x1005429ce*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h020dd271e9092000( /*0x1005429e0*/
      &v15,
      v11);
    v7 = v17; /*0x1005429e5*/
    if ( v17 ) /*0x1005429ec*/
    {
      v8 = v16; /*0x1005429f2*/
      v13[0] = v12; /*0x1005429f6*/
      if ( v17 != 1 ) /*0x100542a01*/
      {
        if ( v17 >= 0x15 ) /*0x100542b6f*/
          core::slice::sort::stable::driftsort_main::h935150ab5093fa6f(v16, v17, v13); /*0x100542b9a*/
        else
          core::slice::sort::shared::smallsort::insertion_sort_shift_left::he504178d0cbc8924(v16, v17, 1, v13); /*0x100542b83*/
      }
      v21 = 0; /*0x100542a15*/
      v22 = 8; /*0x100542a1d*/
      v23 = 0; /*0x100542a25*/
      v18 = 0; /*0x100542a2d*/
      v19 = 8; /*0x100542a35*/
      v20 = 0; /*0x100542a3d*/
      v12[0] = v8; /*0x100542a45*/
      v12[1] = v8; /*0x100542a4c*/
      v12[2] = v15; /*0x100542a53*/
      v12[3] = v8 + 240 * v7; /*0x100542a5a*/
      v13[0] = a3; /*0x100542a61*/
      v13[1] = &v14; /*0x100542a6c*/
      v13[2] = &v21; /*0x100542a77*/
      v13[3] = &v18; /*0x100542a82*/
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hdcd1906d68679446( /*0x100542a94*/
        v12,
        v13);
      v10[0] = v22; /*0x100542abf*/
      v10[1] = v22; /*0x100542ac6*/
      v10[2] = v21; /*0x100542acd*/
      v10[3] = v22 + 232 * v23; /*0x100542ad4*/
      v10[4] = v19; /*0x100542adb*/
      v10[5] = v19; /*0x100542ae2*/
      v10[6] = v18; /*0x100542ae9*/
      v10[7] = v19 + 232 * v20; /*0x100542af0*/
      ((void (__fastcall *)(_QWORD *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5937507b05244171)( /*0x100542b01*/
        a1,
        v10);
    }
    else
    {
      *a1 = 0; /*0x100542b21*/
      a1[1] = 8; /*0x100542b28*/
      a1[2] = 0; /*0x100542b30*/
      if ( v15 ) /*0x100542b3f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100542b51*/
    }
  }
  else
  {
    *a1 = 0; /*0x100542b08*/
    a1[1] = 8; /*0x100542b0f*/
    a1[2] = 0; /*0x100542b17*/
  }
  return a1; /*0x100542b59*/
}