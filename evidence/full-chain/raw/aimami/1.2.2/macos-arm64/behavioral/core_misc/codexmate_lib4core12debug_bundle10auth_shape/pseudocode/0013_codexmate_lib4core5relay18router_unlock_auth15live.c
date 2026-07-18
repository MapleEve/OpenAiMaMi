// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x1005580d0 d=1
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h4dfb964e4d7ca71f(__int64 a1)
{
  unsigned int v1; // r15d
  const void *v2; // rbx
  size_t v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r12
  _BYTE *v7; // rax
  __int64 v9; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-D0h]
  __int64 v11; // [rsp+18h] [rbp-C8h]
  __int64 v12; // [rsp+20h] [rbp-C0h]
  __int64 v13; // [rsp+28h] [rbp-B8h]
  __int64 v14; // [rsp+30h] [rbp-B0h]
  __int64 v15[8]; // [rsp+A0h] [rbp-40h] BYREF

  v2 = *(const void **)(a1 + 32); /*0x1005580e2*/
  v3 = *(_QWORD *)(a1 + 40); /*0x1005580e6*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v9, v2, v3); /*0x1005580f7*/
  if ( (_DWORD)v9 == 1 ) /*0x100558103*/
  {
    if ( (v10 & 3) == 1 ) /*0x100558114*/
    {
      v4 = *(_QWORD *)(v10 + 7); /*0x10055811e*/
      if ( *(_QWORD *)v4 ) /*0x100558122*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v10 - 1)); /*0x10055812e*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x100558130*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100558142*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100558154*/
    }
    return 0; /*0x100558159*/
  }
  else
  {
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v9, v2, v3); /*0x10055816e*/
    v5 = v9; /*0x100558173*/
    if ( __OFSUB__(-v9, 1) ) /*0x10055817d*/
    {
      if ( (v10 & 3) == 1 ) /*0x100558191*/
      {
        v6 = *(_QWORD *)(v10 + 7); /*0x10055819b*/
        if ( *(_QWORD *)v6 ) /*0x10055819f*/
          (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v10 - 1)); /*0x1005581ab*/
        if ( *(_QWORD *)(v6 + 8) ) /*0x1005581ad*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005581bf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005581d1*/
      }
      LOBYTE(v1) = 3; /*0x1005581d6*/
    }
    else
    {
      v9 = v10; /*0x1005581ec*/
      v10 = v11; /*0x1005581f3*/
      v11 = 0; /*0x1005581fa*/
      v12 = 0; /*0x100558205*/
      v13 = v9; /*0x100558210*/
      v14 = v10; /*0x100558217*/
      serde_json::de::from_trait::hd7f835a315d0fab8(v15, &v9); /*0x100558229*/
      if ( LOBYTE(v15[0]) == 6 ) /*0x100558232*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h28d26b954bd02d15(v15); /*0x100558238*/
        LOBYTE(v1) = 3; /*0x10055823d*/
      }
      else
      {
        v12 = v15[3]; /*0x100558246*/
        v11 = v15[2]; /*0x100558251*/
        v10 = v15[1]; /*0x100558260*/
        v9 = v15[0]; /*0x100558267*/
        v7 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100558281*/
                        "aimami_router_unlock_auth",
                        0x19u,
                        (__int64)&v9);
        LOBYTE(v1) = 2; /*0x100558286*/
        if ( v7 && *v7 == 1 ) /*0x100558291*/
          LOBYTE(v1) = 2 - v7[1]; /*0x100558296*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v9); /*0x1005582a1*/
      }
      if ( v5 ) /*0x1005582a9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005582b6*/
    }
  }
  return v1; /*0x1005582be*/
}