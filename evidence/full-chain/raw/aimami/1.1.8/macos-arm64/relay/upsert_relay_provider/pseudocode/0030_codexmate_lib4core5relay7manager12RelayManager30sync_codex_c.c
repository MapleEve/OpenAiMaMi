// mac 1.1.8 upsert_relay_provider node va=0x1005c8130 depth=2
// codexmate_lib4core5relay7manager12RelayManager30sync_codex_config_with_outcome
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9(
        _BYTE *a1,
        __int64 *a2,
        double a3,
        double a4)
{
  char *v5; // rsi
  __int64 v6; // r15
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r14
  char v10; // r13
  unsigned __int64 v11; // rbx
  int v12; // r13d
  __int64 v13; // r12
  __int64 v14; // r15
  char v15; // al
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  char v18; // al
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r15
  bool v27; // zf
  bool v28; // bl
  char v29; // bl
  _QWORD *v30; // rdi
  unsigned __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // r14
  unsigned __int64 v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // r14
  _QWORD *v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rdi
  _QWORD *v42; // r15
  __int64 v43; // rsi
  __int64 v44; // r12
  __int64 v45; // rdi
  char v47[8]; // [rsp+10h] [rbp-340h] BYREF
  __int64 v48; // [rsp+18h] [rbp-338h]
  __int64 v49; // [rsp+20h] [rbp-330h]
  char v50[24]; // [rsp+90h] [rbp-2C0h] BYREF
  _BYTE v51[192]; // [rsp+A8h] [rbp-2A8h] BYREF
  _QWORD v52[12]; // [rsp+168h] [rbp-1E8h] BYREF
  _QWORD v53[2]; // [rsp+1C8h] [rbp-188h] BYREF
  __int64 v54; // [rsp+1D8h] [rbp-178h]
  _QWORD v55[12]; // [rsp+1E0h] [rbp-170h] BYREF
  __int64 v56; // [rsp+240h] [rbp-110h] BYREF
  __int64 v57; // [rsp+248h] [rbp-108h]
  __int64 v58; // [rsp+250h] [rbp-100h]
  __int64 v59; // [rsp+258h] [rbp-F8h]
  __int64 v60; // [rsp+260h] [rbp-F0h]
  __int64 v61; // [rsp+268h] [rbp-E8h]
  _QWORD v62[12]; // [rsp+270h] [rbp-E0h] BYREF
  __int64 v63; // [rsp+2D0h] [rbp-80h] BYREF
  __int64 v64; // [rsp+2D8h] [rbp-78h]
  __int64 v65; // [rsp+2E0h] [rbp-70h]
  __int64 v66; // [rsp+2E8h] [rbp-68h] BYREF
  __int64 v67; // [rsp+2F0h] [rbp-60h]
  __int64 v68; // [rsp+2F8h] [rbp-58h]
  _QWORD *v69; // [rsp+300h] [rbp-50h]
  __int64 v70; // [rsp+308h] [rbp-48h]
  unsigned __int64 v71; // [rsp+310h] [rbp-40h]
  char v72; // [rsp+31Fh] [rbp-31h] BYREF
  _BYTE *v73; // [rsp+320h] [rbp-30h]

  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v47, (__int64)a2, a3, a4); /*0x1005c8151*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb0cd45ccd5800c5b( /*0x1005c816f*/
    &v66,
    v48,
    v48 + 232 * v49);
  v73 = a1; /*0x1005c8174*/
  v5 = v47; /*0x1005c817c*/
  codexmate_lib::core::relay::manager::valid_codex_active_ids::h98d8c646eef162e0(&v63, v47); /*0x1005c8183*/
  v6 = a2[2]; /*0x1005c8188*/
  v69 = (_QWORD *)(v6 + 16); /*0x1005c8191*/
  v7 = *(_QWORD **)(v6 + 16); /*0x1005c8195*/
  if ( !v7 ) /*0x1005c819c*/
    v7 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v69); /*0x1005c8201*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c819e*/
  v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x1005c81b7*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005c81be*/
  {
    v10 = 0; /*0x1005c81c0*/
    if ( *(_BYTE *)(v6 + 24) ) /*0x1005c81c3*/
      goto LABEL_5; /*0x1005c81ca*/
LABEL_9:
    if ( *(_QWORD *)(v6 + 32) ) /*0x1005c821b*/
    {
      v55[0] = v6 + 40; /*0x1005c8226*/
      v55[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1005c8234*/
      v5 = (char *)&unk_101226DFC; /*0x1005c823b*/
      v7 = v62; /*0x1005c8242*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v62, &unk_101226DFC, v55); /*0x1005c8250*/
      v71 = v62[0]; /*0x1005c825c*/
      v70 = v62[1]; /*0x1005c8267*/
      v54 = v62[2]; /*0x1005c8272*/
      if ( v10 ) /*0x1005c827c*/
        goto LABEL_14; /*0x1005c827c*/
    }
    else
    {
      v71 = 0x8000000000000000LL; /*0x1005c828a*/
      if ( v10 ) /*0x1005c8291*/
      {
LABEL_14:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v69, v5, v8, a3, a4); /*0x1005c829f*/
        v11 = v71; /*0x1005c82ab*/
        goto LABEL_15; /*0x1005c82ab*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005c895b*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, v5, v8, a3, a4) )
    {
      *(_BYTE *)(v6 + 24) = 1; /*0x1005c8968*/
    }
    goto LABEL_14; /*0x1005c896d*/
  }
  v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, v47, v8, a3, a4) ^ 1; /*0x1005c820e*/
  if ( !*(_BYTE *)(v6 + 24) ) /*0x1005c8212*/
    goto LABEL_9; /*0x1005c8219*/
LABEL_5:
  if ( !v10 /*0x1005c8944*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, v47, v8, a3, a4) )
  {
    *(_BYTE *)(v6 + 24) = 1; /*0x1005c8951*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v69, v47, v8, a3, a4); /*0x1005c81e4*/
  v11 = 0x8000000000000000LL; /*0x1005c81e9*/
LABEL_15:
  v71 = v11; /*0x1005c82af*/
  if ( v51[188] == 1 ) /*0x1005c82ba*/
  {
    v9 = v68; /*0x1005c82c0*/
    if ( v68 ) /*0x1005c82c7*/
    {
      v12 = v65; /*0x1005c82cd*/
      if ( v65 ) /*0x1005c82d4*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v55, v50); /*0x1005c82e8*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v62, v51); /*0x1005c82fb*/
        v58 = v55[2]; /*0x1005c8307*/
        v57 = v55[1]; /*0x1005c831c*/
        v56 = v55[0]; /*0x1005c8323*/
        v59 = v62[0]; /*0x1005c8338*/
        v60 = v62[1]; /*0x1005c833f*/
        v61 = v62[2]; /*0x1005c834d*/
        v13 = *a2; /*0x1005c8354*/
        v14 = v13 + 16; /*0x1005c8358*/
        v15 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(v13 + 16); /*0x1005c8360*/
        codexmate_lib::core::relay::codex_catalog::write_catalog::hd6fdf4aec3d5e977( /*0x1005c8393*/
          (unsigned int)v52,
          v13 + 16,
          v67,
          v9,
          v64,
          v12,
          (__int64)&v56,
          v15 != 1);
        if ( LODWORD(v52[0]) == 10 ) /*0x1005c839f*/
        {
          v16 = v52[1]; /*0x1005c83a5*/
          v9 = v52[2]; /*0x1005c83ac*/
          v14 = v52[3]; /*0x1005c83b3*/
          v17 = v56; /*0x1005c83ba*/
          if ( !v56 ) /*0x1005c83c4*/
          {
LABEL_21:
            if ( v59 ) /*0x1005c83e1*/
              a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v59, 1); /*0x1005c83ef*/
            v18 = 1; /*0x1005c83f4*/
            v19 = v14; /*0x1005c8400*/
            goto LABEL_34; /*0x1005c8403*/
          }
        }
        else
        {
          qmemcpy(v55, v52, sizeof(v55)); /*0x1005c884b*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c885c*/
          {
            v53[0] = v55; /*0x1005c8862*/
            v53[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c8870*/
            v62[6] = 2; /*0x1005c8877*/
            v62[7] = "codexmate_lib::core::relay::manager"; /*0x1005c8889*/
            v62[8] = 35; /*0x1005c8890*/
            v62[10] = &unk_10122C746; /*0x1005c88a2*/
            v62[11] = v53; /*0x1005c88b0*/
            v62[0] = 0; /*0x1005c88b7*/
            v62[1] = "codexmate_lib::core::relay::manager"; /*0x1005c88c2*/
            v62[2] = 35; /*0x1005c88c9*/
            v62[3] = 0; /*0x1005c88d4*/
            v62[4] = "src/core/relay/manager.rs"; /*0x1005c88e6*/
            v62[5] = 25; /*0x1005c88ed*/
            v62[9] = 0x42300000001LL; /*0x1005c8902*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v72, v62); /*0x1005c8914*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v55); /*0x1005c8920*/
          v16 = 0x8000000000000000LL; /*0x1005c8925*/
          v17 = v56; /*0x1005c892f*/
          if ( !v56 ) /*0x1005c8939*/
            goto LABEL_21; /*0x1005c8939*/
        }
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v17, 1); /*0x1005c83d2*/
        goto LABEL_21; /*0x1005c83d2*/
      }
    }
  }
  v13 = *a2; /*0x1005c8408*/
  v20 = codexmate_lib::core::relay::codex_catalog::remove_catalog::hcf6d074d01d400b7(v13 + 16); /*0x1005c8411*/
  if ( v20 ) /*0x1005c8419*/
  {
    v52[0] = v20; /*0x1005c841f*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c8434*/
    {
      v55[0] = v52; /*0x1005c8441*/
      v55[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1005c844f*/
      v62[6] = 2; /*0x1005c8456*/
      v62[7] = "codexmate_lib::core::relay::manager"; /*0x1005c8468*/
      v62[8] = 35; /*0x1005c846f*/
      v62[10] = &unk_10122C716; /*0x1005c8481*/
      v62[11] = v55; /*0x1005c848f*/
      v62[0] = 0; /*0x1005c8496*/
      v62[1] = "codexmate_lib::core::relay::manager"; /*0x1005c84a1*/
      v62[2] = 35; /*0x1005c84a8*/
      v62[3] = 0; /*0x1005c84b3*/
      v62[4] = "src/core/relay/manager.rs"; /*0x1005c84c5*/
      v62[5] = 25; /*0x1005c84cc*/
      v62[9] = 0x42B00000001LL; /*0x1005c84e1*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v72, v62); /*0x1005c84f3*/
      v20 = v52[0]; /*0x1005c84f8*/
    }
    if ( (v20 & 3) == 1 ) /*0x1005c8507*/
    {
      v21 = v20 - 1; /*0x1005c8509*/
      v22 = *(_QWORD *)(v20 - 1); /*0x1005c850d*/
      v23 = *(_QWORD *)(v20 + 7); /*0x1005c8511*/
      if ( *(_QWORD *)v23 ) /*0x1005c8515*/
        (*(void (__fastcall **)(__int64))v23)(v22); /*0x1005c8520*/
      v24 = *(_QWORD *)(v23 + 8); /*0x1005c8522*/
      if ( v24 ) /*0x1005c8529*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x1005c8532*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8); /*0x1005c8544*/
      v11 = v71; /*0x1005c8549*/
    }
  }
  v18 = 0; /*0x1005c854d*/
  v16 = 0x8000000000000000LL; /*0x1005c8559*/
LABEL_34:
  v25 = 0; /*0x1005c855c*/
  v26 = v9; /*0x1005c8564*/
  if ( v16 == 0x8000000000000000LL ) /*0x1005c8567*/
    v9 = 0; /*0x1005c8567*/
  v27 = v11 == 0x8000000000000000LL; /*0x1005c856b*/
  v28 = v11 != 0x8000000000000000LL; /*0x1005c856e*/
  if ( !v27 ) /*0x1005c8571*/
    v25 = v70; /*0x1005c8571*/
  v55[0] = v67; /*0x1005c857c*/
  v55[1] = v68; /*0x1005c8587*/
  v55[2] = v64; /*0x1005c8592*/
  v55[3] = v65; /*0x1005c859d*/
  v55[4] = v25; /*0x1005c85a4*/
  v55[5] = v54; /*0x1005c85b2*/
  v29 = (v16 != 0x8000000000000000LL) & v18 & v28; /*0x1005c85b9*/
  LOBYTE(v55[8]) = v29; /*0x1005c85bb*/
  v55[6] = v9; /*0x1005c85c1*/
  v55[7] = v19; /*0x1005c85c8*/
  codexmate_lib::core::relay::codex_writer::apply_codex_state::h57ffc59d60ac1cd7(v62, v13 + 16, v55); /*0x1005c85e4*/
  v30 = v73; /*0x1005c85f0*/
  if ( LODWORD(v62[0]) == 10 ) /*0x1005c85f4*/
  {
    v73[8] = v29; /*0x1005c85f6*/
    *v30 = 10; /*0x1005c85f9*/
    if ( 2 * v16 ) /*0x1005c8600*/
    {
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v16, 1); /*0x1005c868e*/
      v31 = v71; /*0x1005c8693*/
      if ( !(2 * v71) ) /*0x1005c86a2*/
      {
LABEL_41:
        v32 = v64; /*0x1005c8622*/
        v33 = v65; /*0x1005c8626*/
        if ( !v65 ) /*0x1005c862d*/
          goto LABEL_53; /*0x1005c862d*/
        goto LABEL_49; /*0x1005c862d*/
      }
    }
    else
    {
      v31 = v71; /*0x1005c860d*/
      if ( !(2 * v71) ) /*0x1005c8611*/
        goto LABEL_41; /*0x1005c861c*/
    }
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v31, 1); /*0x1005c86b1*/
    v32 = v64; /*0x1005c86b6*/
    v33 = v65; /*0x1005c86ba*/
    if ( !v65 ) /*0x1005c86c1*/
    {
LABEL_53:
      if ( v63 ) /*0x1005c86f8*/
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24 * v63, 8); /*0x1005c870a*/
      v39 = v67; /*0x1005c870f*/
      v40 = v68 + 1; /*0x1005c8717*/
      v41 = v67; /*0x1005c871a*/
      while ( v40 != 1 ) /*0x1005c8724*/
      {
        --v40; /*0x1005c8731*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(a3); /*0x1005c8734*/
        v41 += 232; /*0x1005c8739*/
      }
      goto LABEL_69; /*0x1005c8724*/
    }
LABEL_49:
    v37 = (_QWORD *)(v32 + 8); /*0x1005c86c3*/
    do /*0x1005c86d7*/
    {
      v38 = *(v37 - 1); /*0x1005c86d9*/
      if ( v38 ) /*0x1005c86e0*/
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v37, v38, 1); /*0x1005c86ea*/
      v37 += 3; /*0x1005c86d0*/
      --v33; /*0x1005c86d4*/
    }
    while ( v33 ); /*0x1005c86d7*/
    goto LABEL_53; /*0x1005c86d7*/
  }
  qmemcpy(v73, v62, 0x60u); /*0x1005c8644*/
  if ( 2 * v16 ) /*0x1005c8647*/
  {
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v16, 1); /*0x1005c8749*/
    v34 = v71; /*0x1005c874e*/
    if ( !(2 * v71) ) /*0x1005c875d*/
    {
LABEL_45:
      v35 = v64; /*0x1005c866d*/
      v36 = v65; /*0x1005c8671*/
      if ( !v65 ) /*0x1005c8678*/
        goto LABEL_64; /*0x1005c8678*/
LABEL_60:
      v42 = (_QWORD *)(v35 + 8); /*0x1005c877e*/
      do /*0x1005c8797*/
      {
        v43 = *(v42 - 1); /*0x1005c8799*/
        if ( v43 ) /*0x1005c87a0*/
          a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v43, 1); /*0x1005c87aa*/
        v42 += 3; /*0x1005c8790*/
        --v36; /*0x1005c8794*/
      }
      while ( v36 ); /*0x1005c8797*/
      goto LABEL_64; /*0x1005c8797*/
    }
  }
  else
  {
    v34 = v71; /*0x1005c8658*/
    if ( !(2 * v71) ) /*0x1005c865c*/
      goto LABEL_45; /*0x1005c8667*/
  }
  a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v34, 1); /*0x1005c876c*/
  v35 = v64; /*0x1005c8771*/
  v36 = v65; /*0x1005c8775*/
  if ( v65 ) /*0x1005c877c*/
    goto LABEL_60; /*0x1005c877c*/
LABEL_64:
  if ( v63 ) /*0x1005c87b8*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24 * v63, 8); /*0x1005c87ca*/
  v39 = v67; /*0x1005c87cf*/
  v44 = v68 + 1; /*0x1005c87d7*/
  v45 = v67; /*0x1005c87da*/
  while ( v44 != 1 ) /*0x1005c87e4*/
  {
    --v44; /*0x1005c87ed*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(a3); /*0x1005c87f0*/
    v45 += 232; /*0x1005c87f5*/
  }
LABEL_69:
  if ( v66 ) /*0x1005c8801*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 232 * v66, 8); /*0x1005c8812*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v47); /*0x1005c8823*/
}