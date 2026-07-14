// codexmate_lib::core::relay::config_takeover::inspect
// addr: 0x1004aa0c0
// decompiled via 反编译器 MCP (mac) live 1.1.8 IDB, session <审计会话>

__int64 __fastcall codexmate_lib::core::relay::config_takeover::inspect::hfe47fd05e43f4241(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+18h] [rbp-98h] BYREF
  __int64 v11; // [rsp+20h] [rbp-90h]
  __int64 v12; // [rsp+28h] [rbp-88h]
  __int64 v13; // [rsp+30h] [rbp-80h]
  __int64 v14; // [rsp+38h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-70h]
  __int64 v16; // [rsp+48h] [rbp-68h] BYREF
  __int64 v17; // [rsp+50h] [rbp-60h]
  __int64 v18; // [rsp+58h] [rbp-58h]
  __int64 v19; // [rsp+60h] [rbp-50h]
  __int64 v20; // [rsp+68h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp-40h]
  __int64 v22; // [rsp+78h] [rbp-38h]
  __int64 v23; // [rsp+80h] [rbp-30h]
  __int64 v24; // [rsp+88h] [rbp-28h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v16, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64)); /*0x1004aa0e5*/
  v2 = v16; /*0x1004aa0ea*/
  if ( __OFSUB__(-v16, 1) ) /*0x1004aa0f1*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9(&v16); /*0x1004aa0fa*/
    v3 = 1; /*0x1004aa0ff*/
    v2 = 0; /*0x1004aa105*/
    v4 = 0; /*0x1004aa107*/
  }
  else
  {
    v3 = v17; /*0x1004aa10b*/
    v4 = v18; /*0x1004aa10f*/
  }
  codexmate_lib::core::relay::config_takeover::split_foreign_surface::he0de35c28ba2f794(&v16, v3, v4); /*0x1004aa11a*/
  v15 = v24; /*0x1004aa123*/
  v14 = v23; /*0x1004aa12b*/
  v13 = v22; /*0x1004aa133*/
  v12 = v21; /*0x1004aa13b*/
  v11 = v20; /*0x1004aa146*/
  v10 = v19; /*0x1004aa155*/
  if ( v16 ) /*0x1004aa15f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1004aa16a*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h209ee31401286561( /*0x1004aa18c*/
    v9,
    v11,
    v11 + 24 * v12);
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hcc9b523235a5ffd1( /*0x1004aa1a8*/
    &v16,
    v14,
    v14 + 48 * v15);
  v5 = codexmate_lib::core::relay::config_takeover::backup_exists::h400c494af663f2d1(a2); /*0x1004aa1b0*/
  *(_QWORD *)(a1 + 16) = v9[2]; /*0x1004aa1bc*/
  v6 = v9[0]; /*0x1004aa1c0*/
  *(_QWORD *)(a1 + 8) = v9[1]; /*0x1004aa1ce*/
  *(_QWORD *)a1 = v6; /*0x1004aa1d2*/
  v7 = v17; /*0x1004aa1d9*/
  *(_QWORD *)(a1 + 24) = v16; /*0x1004aa1dd*/
  *(_QWORD *)(a1 + 32) = v7; /*0x1004aa1e1*/
  *(_QWORD *)(a1 + 40) = v18; /*0x1004aa1e9*/
  *(_BYTE *)(a1 + 48) = v5; /*0x1004aa1ed*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::ha8245968002ac0b2(&v10); /*0x1004aa1f8*/
  if ( v2 ) /*0x1004aa200*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v2, 1); /*0x1004aa20d*/
  return a1; /*0x1004aa215*/
}
