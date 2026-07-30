// __ZN13codexmate_lib23router_exit_guard_state @ 0x1002cae90 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::router_exit_guard_state::h6b29b0469bd502b8(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  _BYTE v18[320]; // [rsp+8h] [rbp-2A8h] BYREF
  __int64 v19; // [rsp+148h] [rbp-168h] BYREF
  __int64 v20; // [rsp+150h] [rbp-160h]
  __int64 v21; // [rsp+158h] [rbp-158h]
  __int64 v22; // [rsp+160h] [rbp-150h]
  __int64 v23; // [rsp+168h] [rbp-148h]
  __int64 v24; // [rsp+170h] [rbp-140h]
  __int64 v25; // [rsp+178h] [rbp-138h]
  __int64 v26; // [rsp+180h] [rbp-130h]
  __int64 v27; // [rsp+190h] [rbp-120h]
  __int64 v28; // [rsp+198h] [rbp-118h]
  __int64 v29; // [rsp+1A8h] [rbp-108h]
  __int64 v30; // [rsp+1B0h] [rbp-100h]
  __int64 v31; // [rsp+1C8h] [rbp-E8h]
  __int64 v32; // [rsp+1D0h] [rbp-E0h]
  __int64 v33; // [rsp+1D8h] [rbp-D8h]
  _BYTE v34[208]; // [rsp+1E0h] [rbp-D0h] BYREF

  v2 = tauri::state::StateManager::try_get::hcfa8a16beb3902e1(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 4872LL) + 16LL); /*0x1002caeb6*/
  if ( v2 ) /*0x1002caebe*/
  {
    v3 = v2; /*0x1002caec0*/
    LOBYTE(v1) = 2; /*0x1002caecb*/
    if ( !(unsigned __int8)codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::h122d4241889eb036(v2) ) /*0x1002caec6*/
    {
      codexmate_lib::core::relay::manager::RelayManager::snapshot::hdbd948221248bbf9(v18, v3); /*0x1002caee2*/
      codexmate_lib::core::relay::storage::sanitize_for_export::hb002c0af222266d5(&v19, v18); /*0x1002caef1*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v18); /*0x1002caefd*/
      v1 = v34[164]; /*0x1002caf02*/
      v4 = v20; /*0x1002caf06*/
      v5 = v21 + 1; /*0x1002caf14*/
      v6 = v20; /*0x1002caf17*/
      while ( v5 != 1 ) /*0x1002caf24*/
      {
        --v5; /*0x1002caf2d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h00dce6580f232421(); /*0x1002caf30*/
        v6 += 232; /*0x1002caf35*/
      }
      if ( v19 ) /*0x1002caf4b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 232 * v19, 8); /*0x1002caf5c*/
      v7 = v23; /*0x1002caf61*/
      v8 = v24; /*0x1002caf68*/
      if ( v24 ) /*0x1002caf72*/
      {
        v9 = (_QWORD *)(v23 + 8); /*0x1002caf74*/
        do /*0x1002caf87*/
        {
          v10 = *(v9 - 1); /*0x1002caf89*/
          if ( v10 ) /*0x1002caf91*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x1002caf9c*/
          v9 += 3; /*0x1002caf80*/
          --v8; /*0x1002caf84*/
        }
        while ( v8 ); /*0x1002caf87*/
      }
      if ( v22 ) /*0x1002cafad*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24 * v22, 8); /*0x1002cafbf*/
      if ( v25 ) /*0x1002cafce*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1002cafdc*/
      if ( v27 ) /*0x1002cafeb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1002caff9*/
      if ( !__OFSUB__(-v29, 1) && v29 ) /*0x1002cb00d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x1002cb01b*/
      v11 = v32; /*0x1002cb020*/
      v12 = v33; /*0x1002cb027*/
      if ( v33 ) /*0x1002cb031*/
      {
        v13 = (_QWORD *)(v32 + 56); /*0x1002cb03d*/
        do /*0x1002cb057*/
        {
          v14 = *(v13 - 7); /*0x1002cb059*/
          if ( v14 ) /*0x1002cb060*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v13 - 6), v14, 1); /*0x1002cb06b*/
          v15 = *(v13 - 4); /*0x1002cb070*/
          if ( v15 ) /*0x1002cb077*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v13 - 3), v15, 1); /*0x1002cb082*/
          v16 = *(v13 - 1); /*0x1002cb087*/
          if ( v16 != 0x8000000000000000LL && v16 ) /*0x1002cb093*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v16, 1); /*0x1002cb09e*/
          v13 += 9; /*0x1002cb050*/
          --v12; /*0x1002cb054*/
        }
        while ( v12 ); /*0x1002cb057*/
      }
      if ( v31 ) /*0x1002cb0af*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 72 * v31, 8); /*0x1002cb0c1*/
      core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h1f55fedefc5102aa(v34); /*0x1002cb0cd*/
    }
  }
  else
  {
    return 0; /*0x1002caf3a*/
  }
  return v1; /*0x1002cb0d4*/
}