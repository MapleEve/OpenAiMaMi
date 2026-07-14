// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1005321a0 depth=1
// codexmate_lib4core10repository10Repository27confirm_pending_auto_switch
_QWORD *__fastcall codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::h1073089d7a95a9cd(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  size_t v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  void *v8; // rax
  void *v9; // r15
  void *v10; // rax
  _QWORD *v12; // r15
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rsi
  signed __int64 v18; // r14
  void *v19; // rax
  __int64 v20; // [rsp+10h] [rbp-B90h] BYREF
  _BYTE v21[96]; // [rsp+18h] [rbp-B88h] BYREF
  _QWORD v22[103]; // [rsp+78h] [rbp-B28h] BYREF
  __int64 v23; // [rsp+3B0h] [rbp-7F0h] BYREF
  __int128 v24; // [rsp+3B8h] [rbp-7E8h]
  __int64 v25; // [rsp+3C8h] [rbp-7D8h]
  __int64 v26; // [rsp+3D0h] [rbp-7D0h]
  __int64 v27; // [rsp+3D8h] [rbp-7C8h]
  __int64 v28; // [rsp+3E0h] [rbp-7C0h]
  __int64 v29; // [rsp+3E8h] [rbp-7B8h]
  __int64 v30; // [rsp+3F0h] [rbp-7B0h]
  __int64 v31; // [rsp+3F8h] [rbp-7A8h]
  __int64 v32; // [rsp+400h] [rbp-7A0h]
  __int64 v33; // [rsp+408h] [rbp-798h]
  __int64 v34; // [rsp+410h] [rbp-790h]
  _QWORD __dst[73]; // [rsp+418h] [rbp-788h] BYREF
  _DWORD v36[24]; // [rsp+660h] [rbp-540h] BYREF
  _BYTE v37[928]; // [rsp+6C0h] [rbp-4E0h] BYREF
  _QWORD v38[22]; // [rsp+A60h] [rbp-140h] BYREF
  signed __int64 v39; // [rsp+B10h] [rbp-90h] BYREF
  __int64 v40; // [rsp+B18h] [rbp-88h]
  __int64 v41; // [rsp+B28h] [rbp-78h] BYREF
  __int64 v42; // [rsp+B30h] [rbp-70h]
  __int64 v43; // [rsp+B48h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B50h] [rbp-50h]
  __int64 v45; // [rsp+B58h] [rbp-48h]
  __int64 v46; // [rsp+B60h] [rbp-40h]
  void *__s2; // [rsp+B68h] [rbp-38h]
  _QWORD *v48; // [rsp+B70h] [rbp-30h]

  codexmate_lib::core::repository::Repository::load_pending_auto_switch::he8817545a8701b54(v37); /*0x1005321c1*/
  if ( *(_QWORD *)v37 != 2 ) /*0x1005321d1*/
  {
    v27 = *(_QWORD *)&v37[40]; /*0x100532264*/
    v28 = *(_QWORD *)&v37[48]; /*0x100532272*/
    v29 = *(_QWORD *)&v37[56]; /*0x100532280*/
    v30 = *(_QWORD *)&v37[64]; /*0x10053228e*/
    v31 = *(_QWORD *)&v37[72]; /*0x10053229c*/
    v32 = *(_QWORD *)&v37[80]; /*0x1005322aa*/
    v33 = *(_QWORD *)&v37[88]; /*0x1005322b8*/
    v34 = *(_QWORD *)&v37[96]; /*0x1005322c6*/
    memcpy(__dst, &v37[104], sizeof(__dst)); /*0x1005322e0*/
    v23 = *(_QWORD *)v37; /*0x1005322ec*/
    v24 = *(_OWORD *)&v37[8]; /*0x1005322f3*/
    v25 = *(_QWORD *)&v37[24]; /*0x1005322fa*/
    v26 = *(_QWORD *)&v37[32]; /*0x100532301*/
    codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(v37); /*0x100532312*/
    qmemcpy(v38, &v37[8], 0x60u); /*0x100532331*/
    if ( *(_QWORD *)v37 == 2 ) /*0x100532338*/
    {
      qmemcpy(a1 + 1, v38, 0x60u); /*0x10053234a*/
      *a1 = 2; /*0x10053234d*/
LABEL_23:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&v23); /*0x100532582*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&__dst[29]); /*0x100532595*/
      return a1; /*0x100532595*/
    }
    v48 = a2; /*0x100532359*/
    memcpy(v22, &v37[104], sizeof(v22)); /*0x100532370*/
    qmemcpy(v21, v38, sizeof(v21)); /*0x100532388*/
    v20 = *(_QWORD *)v37; /*0x10053238b*/
    if ( v22[87] ) /*0x10053239c*/
    {
      v3 = v22[86]; /*0x1005323a2*/
      v4 = 336LL * v22[87]; /*0x1005323a9*/
      __s2 = (void *)__dst[52]; /*0x1005323b7*/
      v5 = __dst[53]; /*0x1005323bb*/
      v6 = 0; /*0x1005323c2*/
      while ( *(_QWORD *)(v3 + v6 + 192) != v5 || memcmp(*(const void **)(v3 + v6 + 184), __s2, v5) ) /*0x100532400*/
      {
        v6 += 336; /*0x1005323d0*/
        if ( v4 == v6 ) /*0x1005323da*/
          goto LABEL_17; /*0x1005323da*/
      }
      if ( *(_DWORD *)(v3 + v6 + 128) == 2 || (*(_BYTE *)(v3 + v6 + 168) & 0xFE) != 2 ) /*0x10053241e*/
      {
        v12 = v48; /*0x1005325af*/
        codexmate_lib::core::account_io::make_snapshot_path::hac8fc92af1f6b2a1(&v43, v48[31], v48[32], __s2, v5); /*0x1005325cc*/
        v13 = v44; /*0x1005325d1*/
        v14 = v45; /*0x1005325d5*/
        std::sys::fs::metadata::h32fa16d3052ea535(v37, v44, v45); /*0x1005325e6*/
        if ( v37[0] ) /*0x1005325f2*/
        {
          if ( (v37[8] & 3) == 1 ) /*0x100532603*/
          {
            v46 = *(_QWORD *)&v37[8] - 1LL; /*0x10053260d*/
            v15 = *(_QWORD *)(*(_QWORD *)&v37[8] - 1LL); /*0x100532611*/
            v16 = *(_QWORD *)(*(_QWORD *)&v37[8] + 7LL); /*0x100532615*/
            if ( *(_QWORD *)v16 ) /*0x100532619*/
              (*(void (__fastcall **)(__int64))v16)(v15); /*0x100532624*/
            v17 = *(_QWORD *)(v16 + 8); /*0x100532626*/
            if ( v17 ) /*0x10053262d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x100532636*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8); /*0x100532649*/
            v12 = v48; /*0x10053264e*/
          }
        }
        else
        {
          codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(v38, v13, v14); /*0x100532664*/
          if ( v38[0] == 0x8000000000000001LL ) /*0x10053267a*/
          {
            core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$codexmate_lib..core..models..CoreError$GT$$GT$::h5af4bc4f79a79011(v38); /*0x100532683*/
          }
          else
          {
            memcpy(v37, v38, 0xB0u); /*0x1005326a0*/
            codexmate_lib::core::repository::Repository::api_proxy_config::haed0cfef93c6b306(&v41, v12); /*0x1005326ac*/
            codexmate_lib::core::oauth_refresh::ensure_fresh_token::hfa129aada8ffa5c2( /*0x1005326d4*/
              (unsigned int)&v39,
              v13,
              v14,
              (unsigned int)v37,
              (unsigned int)&v41,
              0,
              0);
            v18 = v39; /*0x1005326d9*/
            if ( v39 >= (__int64)0x8000000000000002LL ) /*0x1005326f0*/
            {
              codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8( /*0x10053277a*/
                v36,
                v12[61],
                v12[62]);
              if ( v36[0] != 10 ) /*0x100532786*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v36); /*0x10053278f*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100532794*/
              v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(62, 1); /*0x1005327a3*/
              if ( !v19 ) /*0x1005327ab*/
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 62); /*0x1005328c4*/
              qmemcpy(v19, "Candidate token is no longer valid, please try another account", 62); /*0x10053281d*/
              a1[1] = 9; /*0x100532820*/
              a1[2] = 62; /*0x100532828*/
              a1[3] = v19; /*0x100532830*/
              a1[4] = 62; /*0x100532834*/
              *a1 = 2; /*0x10053283c*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h40b7342e872fb8df( /*0x10053284d*/
                v18,
                v40);
              if ( 2 * v41 ) /*0x100532856*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1); /*0x10053286c*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hebf4dd6d55e528d5(v37); /*0x100532878*/
              if ( v43 ) /*0x100532884*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v43, 1); /*0x100532892*/
              goto LABEL_22; /*0x100532897*/
            }
            core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h40b7342e872fb8df( /*0x1005326fc*/
              v39,
              v40);
            if ( 2 * v41 ) /*0x100532705*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1); /*0x10053271b*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::hebf4dd6d55e528d5(v37); /*0x100532727*/
          }
        }
        codexmate_lib::core::repository::Repository::switch_account::h68a1834c14920488(a1, v12, __s2, v5); /*0x100532739*/
        if ( v43 ) /*0x100532745*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v43, 1); /*0x10053274f*/
LABEL_22:
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::hd95344f83d5f5579(&v20); /*0x100532576*/
        goto LABEL_23; /*0x10053257d*/
      }
      codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8(v37, v48[61], v48[62]); /*0x10053243d*/
      if ( *(_DWORD *)v37 != 10 ) /*0x100532449*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v37); /*0x100532452*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100532457*/
      v7 = 72; /*0x10053245c*/
      v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1); /*0x10053246c*/
      if ( v8 ) /*0x100532474*/
      {
        v9 = v8; /*0x10053247a*/
        memcpy(v8, "Candidate account credentials have expired since the suggestion was made", 0x48u); /*0x10053248c*/
        a1[1] = 9; /*0x100532491*/
        a1[2] = 72; /*0x100532499*/
        a1[3] = v9; /*0x1005324a1*/
        a1[4] = 72; /*0x1005324a5*/
LABEL_21:
        *a1 = 2; /*0x10053256f*/
        goto LABEL_22; /*0x10053256f*/
      }
    }
    else
    {
LABEL_17:
      codexmate_lib::core::repository::Repository::clear_auto_switch_snooze::h26b55fa4377a60a8(v37, v48[61], v48[62]); /*0x1005324b2*/
      if ( *(_DWORD *)v37 != 10 ) /*0x1005324d7*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v37); /*0x1005324e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005324e5*/
      v7 = 42; /*0x1005324ea*/
      v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x1005324fa*/
      if ( v10 ) /*0x100532502*/
      {
        qmemcpy(v10, "Candidate account no longer exists locally", 42); /*0x10053254a*/
        a1[1] = 7; /*0x100532553*/
        a1[2] = 42; /*0x10053255b*/
        a1[3] = v10; /*0x100532563*/
        a1[4] = 42; /*0x100532567*/
        goto LABEL_21; /*0x100532567*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x1005328b3*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005321d3*/
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1005321e2*/
  if ( !v2 ) /*0x1005321ea*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x1005328a6*/
  qmemcpy(v2, "No pending auto-switch request", 30); /*0x100532224*/
  a1[1] = 7; /*0x100532227*/
  a1[2] = 30; /*0x10053222f*/
  a1[3] = v2; /*0x100532237*/
  a1[4] = 30; /*0x10053223b*/
  *a1 = 2; /*0x100532243*/
  return a1; /*0x10053259d*/
}