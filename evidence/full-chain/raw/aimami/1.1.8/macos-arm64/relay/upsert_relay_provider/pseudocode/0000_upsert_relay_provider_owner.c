// mac 1.1.8 upsert_relay_provider node va=0x1004c5a20 depth=0
// upsert_relay_provider_owner
__int64 __fastcall codexmate_lib::commands::relay::upsert_relay_provider::hfeea186fcef12259(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  _WORD *v7; // rax
  _WORD *v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // r12
  __int64 v12; // [rsp+8h] [rbp-2C8h] BYREF
  _BYTE v13[224]; // [rsp+10h] [rbp-2C0h] BYREF
  _BYTE v14[96]; // [rsp+F0h] [rbp-1E0h] BYREF
  _QWORD v15[29]; // [rsp+150h] [rbp-180h] BYREF
  _QWORD v16[3]; // [rsp+238h] [rbp-98h] BYREF
  __int64 v17; // [rsp+250h] [rbp-80h]
  __int64 v18; // [rsp+258h] [rbp-78h]
  __int64 v19; // [rsp+260h] [rbp-70h]
  __int64 v20; // [rsp+268h] [rbp-68h]
  __int64 v21; // [rsp+270h] [rbp-60h]
  __int64 v22; // [rsp+278h] [rbp-58h]
  __int64 v23; // [rsp+280h] [rbp-50h] BYREF
  __int64 v24; // [rsp+288h] [rbp-48h]
  __int64 v25; // [rsp+290h] [rbp-40h]
  __int64 v26; // [rsp+298h] [rbp-38h] BYREF
  __int64 v27; // [rsp+2A0h] [rbp-30h]
  __int64 v28; // [rsp+2A8h] [rbp-28h]

  codexmate_lib::core::relay::manager::RelayManager::upsert::h032d95ab4c0adfd5(&v12, a3, a4); /*0x1004c5a45*/
  if ( __OFSUB__(-v12, 1) ) /*0x1004c5a54*/
  {
    qmemcpy(v14, v13, sizeof(v14)); /*0x1004c5a76*/
    v26 = 0; /*0x1004c5a79*/
    v27 = 1; /*0x1004c5a81*/
    v28 = 0; /*0x1004c5a89*/
    v16[2] = 1610612768; /*0x1004c5a91*/
    v16[0] = &v26; /*0x1004c5aa0*/
    v16[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c5aae*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c5abf*/
                            v14,
                            v16) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c5c77*/
        "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
        55,
        &v23,
        &anon_3e4c14ac1826b92abbb84b981a88c995_940,
        &anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v23 = v26; /*0x1004c5ad4*/
    v24 = v27; /*0x1004c5ad8*/
    v25 = v28; /*0x1004c5ae0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v13); /*0x1004c5ae7*/
    v5 = v23; /*0x1004c5afa*/
    v6 = v24; /*0x1004c5afe*/
    v17 = v23; /*0x1004c5b02*/
    v18 = v24; /*0x1004c5b06*/
    v19 = v25; /*0x1004c5b0a*/
    *(_QWORD *)(a1 + 24) = v25; /*0x1004c5b0e*/
    *(_QWORD *)(a1 + 16) = v6; /*0x1004c5b12*/
    *(_QWORD *)(a1 + 8) = v5; /*0x1004c5b16*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1004c5b1a*/
  }
  else
  {
    v22 = *(_QWORD *)&v13[16]; /*0x1004c5b26*/
    v21 = *(_QWORD *)&v13[8]; /*0x1004c5b31*/
    v20 = *(_QWORD *)v13; /*0x1004c5b35*/
    memcpy(&v15[4], &v13[24], 0xC8u); /*0x1004c5b4c*/
    v17 = *(_QWORD *)v13; /*0x1004c5b59*/
    v15[1] = *(_QWORD *)v13; /*0x1004c5b61*/
    v15[2] = *(_QWORD *)&v13[8]; /*0x1004c5b68*/
    v15[3] = *(_QWORD *)&v13[16]; /*0x1004c5b6f*/
    v15[0] = v12; /*0x1004c5b76*/
    codexmate_lib::commands::tray_menu::refresh_tray_menu::h44710b774bcd0619(a2); /*0x1004c5b80*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2); /*0x1004c5b85*/
    v7 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004c5b94*/
    if ( !v7 ) /*0x1004c5b9c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004c5c88*/
    v8 = v7; /*0x1004c5ba2*/
    *v7 = 27503; /*0x1004c5ba5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1004c5baa*/
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004c5bb9*/
    if ( !v9 ) /*0x1004c5bc1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004c5c99*/
    v10 = v9; /*0x1004c5bc7*/
    *(_DWORD *)((char *)v9 + 3) = 1936942435; /*0x1004c5bca*/
    *v9 = 1667462483; /*0x1004c5bd1*/
    memcpy((void *)(a1 + 72), v15, 0xE8u); /*0x1004c5be7*/
    *(_QWORD *)a1 = 2; /*0x1004c5bec*/
    *(_QWORD *)(a1 + 8) = v8; /*0x1004c5bf3*/
    *(_QWORD *)(a1 + 16) = 2; /*0x1004c5bf7*/
    *(_QWORD *)(a1 + 24) = 7; /*0x1004c5bff*/
    *(_QWORD *)(a1 + 32) = v10; /*0x1004c5c07*/
    *(_QWORD *)(a1 + 40) = 7; /*0x1004c5c0b*/
    *(_QWORD *)(a1 + 48) = 0; /*0x1004c5c13*/
    *(_QWORD *)(a1 + 56) = 8; /*0x1004c5c1b*/
    *(_QWORD *)(a1 + 64) = 0; /*0x1004c5c23*/
    *(_DWORD *)(a1 + 304) = 1; /*0x1004c5c2b*/
    *(_BYTE *)(a1 + 308) = 1; /*0x1004c5c36*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a2); /*0x1004c5c41*/
  return a1; /*0x1004c5c49*/
}