// __ZN13codexmate_lib4core5relay7manager12RelayManager9bootstrap @ 0x100283340 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::bootstrap::hd174d2210f708377(__int64 a1)
{
  __int64 **v1; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  _BOOL8 v9; // rcx
  unsigned __int8 v11; // r14
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _BYTE __dst[776]; // [rsp+10h] [rbp-8C0h] BYREF
  _QWORD v31[12]; // [rsp+318h] [rbp-5B8h] BYREF
  __int64 v32; // [rsp+378h] [rbp-558h] BYREF
  char v33; // [rsp+43Ch] [rbp-494h]
  _QWORD __src[97]; // [rsp+440h] [rbp-490h] BYREF
  _QWORD v35[2]; // [rsp+748h] [rbp-188h] BYREF
  __int64 v36; // [rsp+758h] [rbp-178h]
  __int64 v37; // [rsp+760h] [rbp-170h]
  __int64 v38[12]; // [rsp+768h] [rbp-168h] BYREF
  __int64 v39; // [rsp+7C8h] [rbp-108h] BYREF
  __int64 v40; // [rsp+7D0h] [rbp-100h]
  __int64 *v41; // [rsp+7D8h] [rbp-F8h]
  __int64 v42; // [rsp+7E0h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+7E8h] [rbp-E8h]
  __int64 v44; // [rsp+7F0h] [rbp-E0h]
  _QWORD *v45; // [rsp+7F8h] [rbp-D8h] BYREF
  __int64 (__fastcall *v46)(_QWORD, _QWORD); // [rsp+800h] [rbp-D0h]
  _QWORD v47[9]; // [rsp+810h] [rbp-C0h] BYREF
  __int64 *v48; // [rsp+858h] [rbp-78h] BYREF
  __int64 v49; // [rsp+860h] [rbp-70h]
  char *v50; // [rsp+868h] [rbp-68h]
  __int64 v51; // [rsp+870h] [rbp-60h]
  _UNKNOWN **v52; // [rsp+878h] [rbp-58h]
  __int64 v53; // [rsp+880h] [rbp-50h]
  int v54; // [rsp+88Ch] [rbp-44h]
  __int64 v55; // [rsp+890h] [rbp-40h]
  _QWORD *v56; // [rsp+898h] [rbp-38h]
  unsigned __int8 v57; // [rsp+8A4h] [rbp-2Ch] BYREF
  unsigned __int8 v58; // [rsp+8A5h] [rbp-2Bh] BYREF
  char v59; // [rsp+8A6h] [rbp-2Ah]
  _BYTE v60[41]; // [rsp+8A7h] [rbp-29h] BYREF

  v1 = *(__int64 ***)(a1 + 16); /*0x100283354*/
  if ( __OFSUB__(0, v1[2]) ) /*0x10028335a*/
  {
    v3 = *(_QWORD *)(a1 + 32); /*0x100283371*/
    v4 = (_QWORD *)(v3 + 16); /*0x100283375*/
    v5 = *(_BYTE **)(v3 + 16); /*0x100283379*/
    if ( !v5 ) /*0x100283380*/
      v5 = (_BYTE *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 16); /*0x1002844ac*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100283386*/
    v53 = 0x7FFFFFFFFFFFFFFFLL; /*0x100283399*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1002833a0*/
    {
      v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, v1, v6, 0x7FFFFFFFFFFFFFFFLL); /*0x1002844b4*/
      LOBYTE(v7) = v7 ^ 1; /*0x1002844b9*/
    }
    else
    {
      v7 = 0; /*0x1002833a6*/
    }
    v8 = *(unsigned __int8 *)(v3 + 24); /*0x1002833a8*/
    v9 = (_BYTE)v8 != 0; /*0x1002833b0*/
    *(_QWORD *)&__dst[8] = v3 + 16; /*0x1002833b3*/
    v54 = v7; /*0x1002833ba*/
    __dst[16] = v7; /*0x1002833bd*/
    *(_QWORD *)__dst = v9; /*0x1002833c3*/
    if ( (_BYTE)v8 ) /*0x1002833ca*/
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x1002833de*/
      {
        __src[6] = 2; /*0x1002833e4*/
        __src[7] = "codexmate_lib::core::relay::manager"; /*0x1002833f6*/
        __src[8] = 35; /*0x1002833fd*/
        __src[10] = &unk_1015DEBCC; /*0x10028340f*/
        __src[11] = 153; /*0x100283416*/
        __src[0] = 0; /*0x100283421*/
        __src[1] = "codexmate_lib::core::relay::manager"; /*0x10028342c*/
        __src[2] = 35; /*0x100283433*/
        __src[3] = 0; /*0x10028343e*/
        __src[4] = "src/core/relay/manager.rs"; /*0x100283450*/
        __src[5] = 25; /*0x100283457*/
        __src[9] = 0xC100000001LL; /*0x10028346c*/
        v5 = v60; /*0x100283473*/
        v1 = (__int64 **)__src; /*0x100283477*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, __src); /*0x10028347e*/
      }
      goto LABEL_65; /*0x100283483*/
    }
    codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hc950904f39b7e9e1( /*0x1002835a1*/
      (__int64)v31,
      (_QWORD *)a1);
    if ( LODWORD(v31[0]) != 11 ) /*0x1002835ad*/
    {
      qmemcpy(__dst, v31, 0x60u); /*0x1002835c9*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1002835da*/
      {
        v38[0] = (__int64)__dst; /*0x1002835e0*/
        v38[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1002835ee*/
        __src[6] = 2; /*0x1002835f5*/
        __src[7] = "codexmate_lib::core::relay::manager"; /*0x100283607*/
        __src[8] = 35; /*0x10028360e*/
        __src[10] = &unk_1017BA210; /*0x100283620*/
        __src[11] = v38; /*0x10028362e*/
        __src[0] = 0; /*0x100283635*/
        __src[1] = "codexmate_lib::core::relay::manager"; /*0x100283640*/
        __src[2] = 35; /*0x100283647*/
        __src[3] = 0; /*0x100283652*/
        __src[4] = "src/core/relay/manager.rs"; /*0x100283664*/
        __src[5] = 25; /*0x10028366b*/
        __src[9] = 0x8FF00000001LL; /*0x100283680*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, __src); /*0x100283692*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x10028369e*/
    }
    if ( (unsigned __int8)codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151() ) /*0x1002836a3*/
    {
      codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)v31, a1); /*0x1002836ba*/
      v56 = (_QWORD *)(v3 + 16); /*0x1002836bf*/
      v11 = v33 ^ 1; /*0x1002836cb*/
      v58 = v33 ^ 1; /*0x1002836cf*/
      v12 = *(_QWORD *)a1 + 16LL; /*0x1002836d7*/
      codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::resolve_inner::h0014a02535f56cc8(__src); /*0x1002836e7*/
      if ( __src[0] == 0x8000000000000000LL ) /*0x1002836f3*/
      {
        qmemcpy(v38, &__src[1], sizeof(v38)); /*0x10028370f*/
        v1 = (__int64 **)&__src[13]; /*0x10028370f*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100283720*/
        {
          v47[0] = v38; /*0x100283726*/
          v47[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100283734*/
          *(_QWORD *)&__dst[48] = 2; /*0x10028373b*/
          *(_QWORD *)&__dst[56] = "codexmate_lib::core::relay::manager"; /*0x10028374d*/
          *(_QWORD *)&__dst[64] = 35; /*0x100283754*/
          *(_QWORD *)&__dst[80] = &unk_1017BAA83; /*0x100283766*/
          *(_QWORD *)&__dst[88] = v47; /*0x100283774*/
          *(_QWORD *)__dst = 0; /*0x10028377b*/
          *(_QWORD *)&__dst[8] = "codexmate_lib::core::relay::manager"; /*0x100283786*/
          *(_QWORD *)&__dst[16] = 35; /*0x10028378d*/
          *(_QWORD *)&__dst[24] = 0; /*0x100283798*/
          *(_QWORD *)&__dst[32] = "src/core/relay/manager.rs"; /*0x1002837aa*/
          *(_QWORD *)&__dst[40] = 25; /*0x1002837b1*/
          *(_QWORD *)&__dst[72] = 0xCE00000001LL; /*0x1002837c6*/
          v1 = (__int64 **)__dst; /*0x1002837d1*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, __dst); /*0x1002837d8*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v38); /*0x1002837e4*/
        v4 = v56; /*0x1002837e9*/
      }
      else
      {
        memcpy(__dst, __src, sizeof(__dst)); /*0x100283a1b*/
        codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c( /*0x100283a36*/
          &v42,
          *(__m128i **)(a1 + 24),
          (const __m128i *)__dst,
          v58,
          0);
        codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7( /*0x100283a42*/
          &v48,
          (_QWORD *)a1);
        v14 = v44; /*0x100283a47*/
        if ( v44 | (unsigned __int64)v48 ^ 0x8000000000000000LL ) /*0x100283a62*/
        {
          v47[0] = v44; /*0x100283ba5*/
          LOBYTE(v45) = v48 != (__int64 *)0x8000000000000000LL; /*0x100283baf*/
          __src[0] = v47; /*0x100283bbd*/
          __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100283bcb*/
          __src[2] = &v45; /*0x100283bd9*/
          __src[3] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100283be7*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, &unk_1017BAC7F, __src); /*0x100283c03*/
          v55 = v38[0]; /*0x100283c0f*/
          v18 = v38[1]; /*0x100283c13*/
          codexmate_lib::core::relay::transition_journal::write::heff5963509896719( /*0x100283c43*/
            v38,
            v12,
            v11,
            &unk_1015DCC60,
            16,
            v38[1],
            v38[2]);
          if ( LODWORD(v38[0]) != 11 ) /*0x100283c4f*/
          {
            qmemcpy(__src, v38, 0x60u); /*0x100283c6b*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100283c7c*/
            {
              v45 = __src; /*0x100283c7e*/
              v46 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100283c8c*/
              v47[0] = "codexmate_lib::core::relay::manager"; /*0x100283c9a*/
              v47[1] = 35; /*0x100283ca1*/
              v47[2] = "codexmate_lib::core::relay::manager"; /*0x100283cac*/
              v47[3] = 35; /*0x100283cb3*/
              v47[4] = &off_10195DDB0; /*0x100283cc5*/
              log::__private_api::log::h719f4907c7336ae9(&unk_1017BACC0, &v45, 2, v47); /*0x100283ce6*/
            }
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x100283cf2*/
          }
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100283d05*/
          {
            codexmate_lib::core::relay::manager::format_invariant_violations::h98c34c0a81bbfce4(v47, v43, v14); /*0x100283d1f*/
            __src[0] = &v58; /*0x100283d28*/
            __src[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e; /*0x100283d36*/
            __src[2] = v47; /*0x100283d3d*/
            __src[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100283d4b*/
            __src[4] = &v48; /*0x100283d56*/
            __src[5] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hc3b1fe1208aa09e9; /*0x100283d64*/
            v38[0] = (__int64)"codexmate_lib::core::relay::manager"; /*0x100283d72*/
            v38[1] = 35; /*0x100283d79*/
            v38[2] = (__int64)"codexmate_lib::core::relay::manager"; /*0x100283d84*/
            v38[3] = 35; /*0x100283d8b*/
            v38[4] = (__int64)&off_10195DDC8; /*0x100283d9d*/
            log::__private_api::log::h719f4907c7336ae9(&unk_1017BAD0A, __src, 2, v38); /*0x100283dbe*/
            if ( v47[0] ) /*0x100283dcd*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[1], v47[0], 1); /*0x100283ddb*/
          }
          if ( v55 ) /*0x100283de7*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v55, 1); /*0x100283df1*/
        }
        else
        {
          codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v12); /*0x100283a6e*/
        }
        if ( v48 != (__int64 *)0x8000000000000000LL && v48 ) /*0x100283e0c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x100283e17*/
        v19 = v43; /*0x100283e1c*/
        if ( v14 ) /*0x100283e26*/
        {
          v20 = 32 * v14; /*0x100283e28*/
          v21 = 0; /*0x100283e2c*/
          do /*0x100283e47*/
          {
            v22 = *(_QWORD *)(v19 + v21); /*0x100283e49*/
            if ( v22 ) /*0x100283e50*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + v21 + 8), v22, 1); /*0x100283e5c*/
            v21 += 32; /*0x100283e40*/
          }
          while ( v20 != v21 ); /*0x100283e47*/
        }
        if ( v42 ) /*0x100283e6d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 32 * v42, 8); /*0x100283e7b*/
        core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(__dst); /*0x100283e87*/
        v1 = *(__int64 ***)&__dst[744]; /*0x100283e8c*/
        v4 = v56; /*0x100283e96*/
        if ( *(_QWORD *)&__dst[744] ) /*0x100283e9a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[752], *(_QWORD *)&__dst[744], 1); /*0x100283ea8*/
      }
      v5 = v31; /*0x100283ead*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v31); /*0x100283eb4*/
      goto LABEL_65; /*0x100283eb4*/
    }
    codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x10028380a*/
      v31,
      a1 + 40,
      &unk_1015DEAA9,
      33);
    if ( LODWORD(v31[0]) != 11 ) /*0x100283816*/
    {
      qmemcpy(__dst, v31, 0x60u); /*0x100283926*/
      v1 = (__int64 **)&v32; /*0x100283926*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100283937*/
      {
        v38[0] = (__int64)__dst; /*0x10028393d*/
        v38[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10028394b*/
        __src[6] = 2; /*0x100283952*/
        __src[7] = "codexmate_lib::core::relay::manager"; /*0x100283964*/
        __src[8] = 35; /*0x10028396b*/
        __src[10] = &unk_1017BAABB; /*0x10028397d*/
        __src[11] = v38; /*0x10028398b*/
        __src[0] = 0; /*0x100283992*/
        __src[1] = "codexmate_lib::core::relay::manager"; /*0x10028399d*/
        __src[2] = 35; /*0x1002839a4*/
        __src[3] = 0; /*0x1002839af*/
        __src[4] = "src/core/relay/manager.rs"; /*0x1002839c1*/
        __src[5] = 25; /*0x1002839c8*/
        __src[9] = 0x20600000001LL; /*0x1002839dd*/
        v1 = (__int64 **)__src; /*0x1002839e8*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, __src); /*0x1002839ef*/
      }
      v5 = __dst; /*0x1002839f4*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x1002839fb*/
      goto LABEL_65; /*0x100283a00*/
    }
    v55 = v31[1]; /*0x100283823*/
    v59 = v31[2]; /*0x10028382e*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)v31, a1); /*0x10028383b*/
    v57 = v33 ^ 1; /*0x100283849*/
    v13 = *(_QWORD *)a1 + 16LL; /*0x100283850*/
    codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::resolve_inner::h0014a02535f56cc8(__src); /*0x100283860*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x10028386c*/
    {
      qmemcpy(v38, &__src[1], sizeof(v38)); /*0x100283888*/
      v1 = (__int64 **)&__src[13]; /*0x100283888*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100283899*/
      {
        v48 = v38; /*0x10028389b*/
        v49 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1002838a6*/
        v47[0] = "codexmate_lib::core::relay::manager"; /*0x1002838b1*/
        v47[1] = 35; /*0x1002838b8*/
        v47[2] = "codexmate_lib::core::relay::manager"; /*0x1002838c3*/
        v47[3] = 35; /*0x1002838ca*/
        v47[4] = &off_10195DCA8; /*0x1002838dc*/
        v1 = &v48; /*0x1002838ea*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017BAA83, &v48, 2, v47); /*0x1002838fa*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v38); /*0x100283906*/
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x100283a8e*/
      codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c( /*0x100283aa9*/
        &v39,
        *(__m128i **)(a1 + 24),
        (const __m128i *)__dst,
        v57,
        0);
      codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7( /*0x100283ab8*/
        &v45,
        (_QWORD *)a1);
      v15 = v41; /*0x100283abd*/
      if ( v41 || v45 != (_QWORD *)0x8000000000000000LL ) /*0x100283ade*/
      {
        codexmate_lib::core::relay::transition_journal::read::h98e7602a0e4c21b7(v38); /*0x100283ef7*/
        if ( v38[0] != 0x8000000000000000LL ) /*0x100283f0d*/
        {
          qmemcpy(__src, v38, 0x48u); /*0x100283f29*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100283f3a*/
          {
            v47[0] = &__src[8]; /*0x100283f4e*/
            v47[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e; /*0x100283f5c*/
            v47[2] = __src; /*0x100283f63*/
            v47[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100283f71*/
            v47[4] = &__src[7]; /*0x100283f78*/
            v47[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100283f86*/
            v48 = (__int64 *)"codexmate_lib::core::relay::manager"; /*0x100283f94*/
            v49 = 35; /*0x100283f98*/
            v50 = "codexmate_lib::core::relay::manager"; /*0x100283fa0*/
            v51 = 35; /*0x100283fa4*/
            v52 = &off_10195DC60; /*0x100283fb3*/
            log::__private_api::log::h719f4907c7336ae9(&unk_1017BA985, v47, 2, &v48); /*0x100283fce*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..transition_journal..TransitionJournal$GT$::hd4b34470d7a6df77(__src); /*0x100283fda*/
        }
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100283fed*/
        {
          v48 = v15; /*0x100283ff3*/
          codexmate_lib::core::relay::manager::format_invariant_violations::h98c34c0a81bbfce4(v47, v40, v15); /*0x10028400b*/
          __src[0] = &v57; /*0x100284014*/
          __src[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e; /*0x100284022*/
          __src[2] = &v48; /*0x10028402d*/
          __src[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10028403b*/
          __src[4] = v47; /*0x100284042*/
          __src[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100284050*/
          __src[6] = &v45; /*0x10028405e*/
          __src[7] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hc3b1fe1208aa09e9; /*0x10028406c*/
          v38[0] = (__int64)"codexmate_lib::core::relay::manager"; /*0x10028407a*/
          v38[1] = 35; /*0x100284081*/
          v38[2] = (__int64)"codexmate_lib::core::relay::manager"; /*0x10028408c*/
          v38[3] = 35; /*0x100284093*/
          v38[4] = (__int64)&off_10195DC78; /*0x1002840a5*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017BA9E0, __src, 2, v38); /*0x1002840c6*/
          if ( v47[0] ) /*0x1002840d5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[1], v47[0], 1); /*0x1002840e3*/
        }
        codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_locked_from_with_writer_policy::hf7a5f317757b1502( /*0x100284104*/
          v38,
          a1,
          (__int64)&unk_1015DEACA,
          19,
          1);
        if ( LODWORD(v38[0]) == 11 ) /*0x100284110*/
        {
          v56 = (_QWORD *)(v3 + 16); /*0x100284116*/
          qmemcpy(v47, &v38[1], sizeof(v47)); /*0x10028412d*/
          v23 = v47[7] + 24LL * v47[8]; /*0x100284146*/
          v48 = (__int64 *)v47[7]; /*0x10028414b*/
          v49 = v47[7]; /*0x10028414f*/
          v50 = (char *)v47[6]; /*0x100284153*/
          v51 = v23; /*0x100284157*/
          if ( v47[8] ) /*0x100284168*/
          {
            v24 = v47[7] + 24LL; /*0x100284175*/
            while ( 1 ) /*0x100284197*/
            {
              v26 = *(_QWORD *)(v24 - 24); /*0x100284197*/
              v27 = *(_QWORD *)(v24 - 16); /*0x10028419b*/
              v37 = *(_QWORD *)(v24 - 8); /*0x1002841a3*/
              v36 = v27; /*0x1002841aa*/
              if ( v26 == 0x8000000000000000LL ) /*0x1002841be*/
                break; /*0x1002841be*/
              v42 = v26; /*0x1002841c4*/
              v44 = v37; /*0x1002841d9*/
              v43 = v36; /*0x1002841dd*/
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1002841ee*/
              {
                v35[0] = &v42; /*0x1002841fb*/
                v35[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100284209*/
                __src[6] = 3; /*0x100284210*/
                __src[7] = "codexmate_lib::core::relay::manager"; /*0x10028421b*/
                __src[8] = 35; /*0x100284222*/
                __src[10] = &unk_1017BAA35; /*0x100284234*/
                __src[11] = v35; /*0x100284242*/
                __src[0] = 0; /*0x100284249*/
                __src[1] = "codexmate_lib::core::relay::manager"; /*0x100284254*/
                __src[2] = 35; /*0x10028425b*/
                __src[3] = 0; /*0x100284266*/
                __src[4] = "src/core/relay/manager.rs"; /*0x100284278*/
                __src[5] = 25; /*0x10028427f*/
                __src[9] = 0x23000000001LL; /*0x100284294*/
                _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, __src); /*0x1002842a6*/
                v26 = v42; /*0x1002842ab*/
              }
              if ( v26 ) /*0x1002842b5*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v26, 1); /*0x1002842c7*/
              v25 = v24 - 24; /*0x100284182*/
              v24 += 24; /*0x100284186*/
              if ( v25 + 24 == v23 ) /*0x100284191*/
              {
                v24 = v23; /*0x100284379*/
                break; /*0x100284379*/
              }
            }
            v49 = v24; /*0x10028437c*/
          }
          _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9b2ebb73e163c75e(&v48); /*0x10028438e*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(v47); /*0x10028439a*/
          if ( v47[0] ) /*0x1002843a9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[1], 24LL * v47[0], 8); /*0x1002843bf*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v47[3]); /*0x1002843cb*/
          v4 = v56; /*0x1002843da*/
          if ( v47[3] ) /*0x1002843de*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[4], 24LL * v47[3], 8); /*0x1002843f4*/
        }
        else
        {
          qmemcpy(__src, v38, 0x60u); /*0x1002842e7*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100284302*/
          {
            v48 = __src; /*0x100284304*/
            v49 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10028430f*/
            v47[0] = "codexmate_lib::core::relay::manager"; /*0x10028431a*/
            v47[1] = 35; /*0x100284321*/
            v47[2] = "codexmate_lib::core::relay::manager"; /*0x10028432c*/
            v47[3] = 35; /*0x100284333*/
            v47[4] = &off_10195DC90; /*0x100284345*/
            log::__private_api::log::h719f4907c7336ae9(&unk_1017BAA53, &v48, 2, v47); /*0x100284363*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x10028436f*/
        }
        if ( v45 != (_QWORD *)0x8000000000000000LL && v45 ) /*0x100284408*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x100284416*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc6482919635162e2(&v39); /*0x100284422*/
        if ( v39 ) /*0x100284431*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 32 * v39, 8); /*0x100284443*/
        core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(__dst); /*0x10028444f*/
        v1 = *(__int64 ***)&__dst[744]; /*0x100284454*/
        if ( *(_QWORD *)&__dst[744] ) /*0x10028445e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[752], *(_QWORD *)&__dst[744], 1); /*0x10028446c*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v31); /*0x100284478*/
        if ( !v59 /*0x1002844f0*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v53) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31, v1, v28, v29) )
        {
          *(_BYTE *)(v55 + 8) = 1; /*0x1002844fd*/
        }
        goto LABEL_42; /*0x100284501*/
      }
      codexmate_lib::core::relay::transition_journal::clear::h6304c1e96f53a964(v13); /*0x100283ae7*/
      if ( v45 != (_QWORD *)0x8000000000000000LL && v45 ) /*0x100283b05*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x100283b13*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc6482919635162e2(&v39); /*0x100283b1f*/
      if ( v39 ) /*0x100283b2e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 32 * v39, 8); /*0x100283b40*/
      core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(__dst); /*0x100283b4c*/
      v1 = *(__int64 ***)&__dst[744]; /*0x100283b51*/
      if ( *(_QWORD *)&__dst[744] ) /*0x100283b5b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[752], *(_QWORD *)&__dst[744], 1); /*0x100283b69*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v31); /*0x100283b75*/
    if ( !v59 /*0x1002844d6*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v53) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31, v1, v16, v17) )
    {
      *(_BYTE *)(v55 + 8) = 1; /*0x1002844e7*/
    }
LABEL_42:
    v5 = *(_BYTE **)v55; /*0x100283b94*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v55); /*0x100283b9b*/
LABEL_65:
    if ( !(_BYTE)v54 /*0x1002844c0*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v53) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, v1, v8, v9) )
    {
      *(_BYTE *)(v3 + 24) = 1; /*0x1002844cd*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100283eec*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v31[1], v1 + 2); /*0x100283493*/
  v31[0] = 9; /*0x100283498*/
  qmemcpy(__dst, v31, 0x60u); /*0x1002834b9*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 ) /*0x1002834c9*/
  {
    v38[0] = (__int64)__dst; /*0x1002834cf*/
    v38[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1002834dd*/
    __src[6] = 1; /*0x1002834e4*/
    __src[7] = "codexmate_lib::core::relay::manager"; /*0x1002834f6*/
    __src[8] = 35; /*0x1002834fd*/
    __src[10] = &unk_1017BAC53; /*0x10028350f*/
    __src[11] = v38; /*0x10028351d*/
    __src[0] = 0; /*0x100283524*/
    __src[1] = "codexmate_lib::core::relay::manager"; /*0x10028352f*/
    __src[2] = 35; /*0x100283536*/
    __src[3] = 0; /*0x100283541*/
    __src[4] = "src/core/relay/manager.rs"; /*0x100283553*/
    __src[5] = 25; /*0x10028355a*/
    __src[9] = 0xBB00000001LL; /*0x10028356f*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v60, __src); /*0x100283581*/
  }
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x100283edb*/
}