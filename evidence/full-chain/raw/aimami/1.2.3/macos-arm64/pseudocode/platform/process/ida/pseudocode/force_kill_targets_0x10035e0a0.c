// __ZN13codexmate_lib8platform7process18force_kill_targets @ 0x10035e0a0
__int64 __fastcall codexmate_lib::platform::process::force_kill_targets::hd831432c308f755c(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h816646216941c9a0( /*0x10035e0bb*/
    &v10,
    a2,
    a2 + 32 * a3);
  v3 = v12; /*0x10035e0c0*/
  if ( v12 ) /*0x10035e0c7*/
  {
    v4 = v11; /*0x10035e0c9*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v9, v11, v12, " | ps-ocodexmate_lib::platform::process", 3); /*0x10035e0e4*/
    a1[3] = v9[2]; /*0x10035e0ed*/
    v5 = v9[0]; /*0x10035e0f1*/
    a1[2] = v9[1]; /*0x10035e0f9*/
    a1[1] = v5; /*0x10035e0fd*/
    *a1 = 10; /*0x10035e101*/
    v6 = (_QWORD *)(v4 + 8); /*0x10035e108*/
    do /*0x10035e117*/
    {
      v7 = *(v6 - 1); /*0x10035e119*/
      if ( v7 ) /*0x10035e120*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v7, 1); /*0x10035e12a*/
      v6 += 3; /*0x10035e110*/
      --v3; /*0x10035e114*/
    }
    while ( v3 ); /*0x10035e117*/
  }
  else
  {
    *a1 = 11; /*0x10035e131*/
    v4 = v11; /*0x10035e138*/
  }
  result = v10; /*0x10035e13c*/
  if ( v10 ) /*0x10035e143*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24 * v10, 8); /*0x10035e15f*/
  return result; /*0x10035e155*/
}