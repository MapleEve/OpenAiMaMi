// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hf0d34f012b3a48a0; addr: 0x100258c00; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
volatile signed __int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hf0d34f012b3a48a0(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        double a4)
{
  _QWORD *v5; // r13
  __int64 v6; // rsi
  volatile signed __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  volatile signed __int64 *result; // rax
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdx
  void *v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // r15
  __int16 v18; // dx
  int v19; // eax
  __int64 v20; // rdi
  bool v21; // zf
  char v22; // of
  __int64 v23; // rt0
  volatile signed __int64 *v24; // rax
  __int64 v25; // rt0
  volatile signed __int64 *v26; // rcx
  __int64 v27; // rt0
  char *v28; // rdi
  __int64 v29; // rdx
  size_t v30; // r14
  __int64 v31; // r13
  __int64 v32; // rdi
  char v33; // r14
  void *v34; // rsi
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r15
  volatile signed __int64 *v38; // r14
  __int64 v39; // rdi
  __int16 v40; // bx
  volatile signed __int64 *v41; // rbx
  __int64 v42; // rsi
  volatile signed __int64 *v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 **v50; // rdi
  __int64 v51; // rcx
  _WORD *v52; // rsi
  _QWORD *v53; // rdi
  volatile signed __int64 *v54; // rdx
  volatile signed __int64 v55; // rax
  int v56; // eax
  volatile signed __int64 *v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 *v61; // rax
  volatile signed __int64 *v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 **v66; // rdi
  __int64 v67; // rcx
  _WORD *v68; // rsi
  __int64 v69; // rax
  char v70[8]; // [rsp+8h] [rbp-248h] BYREF
  __int64 v71; // [rsp+10h] [rbp-240h]
  void *v72; // [rsp+18h] [rbp-238h]
  size_t v73; // [rsp+20h] [rbp-230h]
  _QWORD v74[3]; // [rsp+28h] [rbp-228h] BYREF
  _QWORD v75[2]; // [rsp+40h] [rbp-210h] BYREF
  __int64 *v76; // [rsp+50h] [rbp-200h] BYREF
  _QWORD v77[11]; // [rsp+58h] [rbp-1F8h] BYREF
  _QWORD *v78; // [rsp+B0h] [rbp-1A0h]
  _QWORD v79[12]; // [rsp+B8h] [rbp-198h] BYREF
  _WORD v80[74]; // [rsp+118h] [rbp-138h] BYREF
  char v81; // [rsp+1ACh] [rbp-A4h]
  volatile signed __int64 *v82; // [rsp+1B0h] [rbp-A0h]
  unsigned __int64 v83; // [rsp+1B8h] [rbp-98h]
  __int64 v84; // [rsp+1C0h] [rbp-90h] BYREF
  void *__src; // [rsp+1C8h] [rbp-88h]
  size_t __n; // [rsp+1D0h] [rbp-80h] BYREF
  _QWORD *v87; // [rsp+1D8h] [rbp-78h] BYREF
  _QWORD *v88; // [rsp+1E0h] [rbp-70h]
  size_t v89; // [rsp+1E8h] [rbp-68h]
  volatile signed __int64 *v90; // [rsp+1F0h] [rbp-60h] BYREF
  _QWORD *v91; // [rsp+1F8h] [rbp-58h]
  volatile signed __int64 *v92; // [rsp+200h] [rbp-50h]
  volatile signed __int64 *v93; // [rsp+208h] [rbp-48h]
  __int16 v94; // [rsp+216h] [rbp-3Ah]
  volatile signed __int64 *v95; // [rsp+218h] [rbp-38h]
  int v96; // [rsp+224h] [rbp-2Ch]

  v5 = a1; /*0x100258c17*/
  v6 = a2[2]; /*0x100258c24*/
  if ( *(_QWORD *)(v6 + 16) != 0x8000000000000000LL ) /*0x100258c30*/
  {
    result = (volatile signed __int64 *)_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100258ca9*/
                                          &v79[1],
                                          v6 + 16);
    v79[0] = 9; /*0x100258cae*/
    qmemcpy(a1, v79, 0x60u); /*0x100258cc8*/
    return result; /*0x100258cc8*/
  }
  v7 = (volatile signed __int64 *)a2[7]; /*0x100258c32*/
  if ( v7 )
  {
    if ( _InterlockedIncrement64(v7) <= 0 ) /*0x100258c43*/
      goto LABEL_126; /*0x100258c43*/
    v83 = 0x8000000000000000LL; /*0x100258c49*/
    v90 = v7; /*0x100258c50*/
    v8 = *(_QWORD *)(*a2 + 72LL); /*0x100258c57*/
    v82 = (volatile signed __int64 *)*a2; /*0x100258c5b*/
    std::fs::read_to_string::inner::hcce2334f4117b5b3(v79); /*0x100258c6d*/
    v9 = v79[0]; /*0x100258c72*/
    if ( v79[0] == v83 ) /*0x100258c80*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h9febf27e05e3c56c(v79); /*0x100258c8d*/
      LODWORD(v95) = 0; /*0x100258c92*/
      goto LABEL_12; /*0x100258c99*/
    }
    v8 = v79[1]; /*0x100258d4e*/
    v91 = (_QWORD *)v79[1]; /*0x100258d63*/
    codexmate_lib::core::relay::codex_writer::router_provider_base_url::he5f6fb0428e8d4e0(v79, v79[1], v79[2]); /*0x100258d67*/
    v11 = v79[0]; /*0x100258d6c*/
    if ( v79[0] == v83 )
    {
      LODWORD(v95) = 0; /*0x100258d80*/
      v5 = a1; /*0x100258d87*/
      if ( !v9 ) /*0x100258d8d*/
        goto LABEL_12; /*0x100258d8d*/
    }
    else
    {
      v17 = v79[1]; /*0x100258ea6*/
      v8 = v79[2]; /*0x100258ead*/
      LODWORD(v95) = codexmate_lib::core::relay::codex_writer::aimami_router_base_url_port::h27ad7eca58c3b3a5( /*0x100258ebc*/
                       v79[1],
                       v79[2]);
      v94 = v18; /*0x100258ebf*/
      if ( v11 ) /*0x100258ec6*/
      {
        v8 = v11; /*0x100258ed0*/
        a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v11, 1); /*0x100258ed3*/
      }
      v5 = a1; /*0x100258ed8*/
      if ( !v9 )
      {
LABEL_12:
        v12 = a2[3]; /*0x100258da0*/
        v91 = (_QWORD *)(v12 + 16); /*0x100258da9*/
        v13 = *(_QWORD *)(v12 + 16); /*0x100258dad*/
        if ( !v13 ) /*0x100258db5*/
          v13 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v91); /*0x100258efc*/
        std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x100258dbb*/
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100258dcd*/
        {
          v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v13); /*0x100258f04*/
          LOBYTE(v19) = v19 ^ 1; /*0x100258f09*/
          v96 = v19; /*0x100258f0b*/
          if ( *(_BYTE *)(v12 + 24) ) /*0x100258f0e*/
            goto LABEL_16; /*0x100258f16*/
        }
        else
        {
          v96 = 0; /*0x100258dd3*/
          if ( *(_BYTE *)(v12 + 24) ) /*0x100258dda*/
          {
LABEL_16:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v8, v14); /*0x100258de8*/
            v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100258dfa*/
            if ( !v15 ) /*0x100258e02*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100259a5d*/
            v16 = (unsigned __int64)v15; /*0x100258e08*/
            qmemcpy(v15, "relay proxy state lock is poisoned", 34); /*0x100258e3f*/
            if ( !(_BYTE)v96 /*0x10025935e*/
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(34) )
            {
              *(_BYTE *)(v12 + 24) = 1; /*0x10025936b*/
            }
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v91); /*0x100258e61*/
            *v5 = 10; /*0x100258e6d*/
            v5[1] = 34; /*0x100258e75*/
            *((_BYTE *)v5 + 16) = v16; /*0x100258e7d*/
            *((_BYTE *)v5 + 23) = HIBYTE(v16); /*0x100258e88*/
            *(_WORD *)((char *)v5 + 21) = HIDWORD(v16) >> 8; /*0x100258e90*/
            *(_DWORD *)((char *)v5 + 17) = v16 >> 8; /*0x100258e95*/
            v5[3] = 34; /*0x100258e99*/
LABEL_110:
            result = v90; /*0x10025999d*/
            if ( !_InterlockedDecrement64(v90) ) /*0x1002599a1*/
              return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hce23faefe97b630c(&v90); /*0x1002599ab*/
            return result; /*0x1002599ab*/
          }
        }
        v20 = v12 + 32; /*0x100258f1c*/
        v22 = 0; /*0x100258f21*/
        v21 = *(_QWORD *)(v12 + 32) == 0; /*0x100258f21*/
        v93 = (volatile signed __int64 *)(v12 + 32); /*0x100258f27*/
        if ( !v21 )
        {
          if ( (unsigned __int8)codexmate_lib::core::relay::manager::proxy_handle_port_accepts::he731fc5bcd57c34a( /*0x100258f31*/
                                  v20,
                                  v8) )
          {
            *v5 = 11; /*0x100258f3a*/
            if ( !(_BYTE)v96 /*0x1002599d3*/
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20) )
            {
              *(_BYTE *)(v12 + 24) = 1; /*0x1002599e0*/
            }
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v91); /*0x100258f5b*/
            goto LABEL_110; /*0x100258f60*/
          }
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
          {
            v76 = (__int64 *)(v12 + 48); /*0x100258f7e*/
            v77[0] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x100258f8c*/
            v79[6] = 2; /*0x100258f93*/
            v79[7] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
            v79[8] = 35; /*0x100258fac*/
            v79[10] = &unk_1018F3046; /*0x100258fbe*/
            v79[11] = &v76; /*0x100258fcc*/
            v79[0] = 0; /*0x100258fd3*/
            v79[1] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
            v79[2] = 35; /*0x100258fe5*/
            v79[3] = 0; /*0x100258ff0*/
            v79[4] = "src/core/relay/manager.rs"; /*0x100259002*/
            v79[5] = 25; /*0x100259009*/
            v79[9] = 0xAEF00000001LL; /*0x10025901e*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v87, v79); /*0x100259030*/
          }
          v22 = 0; /*0x10025903c*/
          if ( *v93 ) /*0x100259039*/
          {
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v93) ) /*0x100259041*/
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h7e35c44210fcccb4(v93); /*0x10025904b*/
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v12 + 40)) ) /*0x100259055*/
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(v12 + 40); /*0x100259060*/
          }
          *v93 = 0; /*0x100259069*/
        }
        v92 = (volatile signed __int64 *)a2[1]; /*0x100259074*/
        v23 = _InterlockedIncrement64(v92); /*0x100259078*/
        if ( !((v23 < 0) ^ v22 | (v23 == 0)) )
        {
          v24 = (volatile signed __int64 *)a2[6]; /*0x100259082*/
          v25 = _InterlockedIncrement64(v24); /*0x100259086*/
          if ( !((v25 < 0) ^ v22 | (v25 == 0)) )
          {
            v26 = v82; /*0x100259090*/
            v27 = _InterlockedIncrement64(v82); /*0x100259097*/
            if ( !((v27 < 0) ^ v22 | (v27 == 0)) )
            {
              v79[0] = v92; /*0x1002590ad*/
              v79[1] = v24; /*0x1002590b4*/
              v79[2] = v26; /*0x1002590bb*/
              v80[72] = (_WORD)v95; /*0x1002590c5*/
              v80[73] = v94; /*0x1002590d0*/
              v81 = 0; /*0x1002590d7*/
              v28 = v70; /*0x1002590e5*/
              tokio::runtime::runtime::Runtime::block_on::h61729eed2f4e61ac(v70, v90 + 2, v79, &off_101AA3A50); /*0x1002590f3*/
              if ( v70[0] )
              {
                __n = v73; /*0x100259110*/
                __src = v72; /*0x10025911b*/
                v84 = v71; /*0x100259122*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                {
                  v76 = &v84; /*0x100259144*/
                  v77[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100259152*/
                  v79[6] = 2; /*0x100259159*/
                  v79[7] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
                  v79[8] = 35; /*0x100259172*/
                  v79[10] = &unk_1018F30D3; /*0x100259184*/
                  v79[11] = &v76; /*0x100259192*/
                  v79[0] = 0; /*0x100259199*/
                  v79[1] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
                  v79[2] = 35; /*0x1002591ab*/
                  v79[3] = 0; /*0x1002591b6*/
                  v79[4] = "src/core/relay/manager.rs"; /*0x1002591c8*/
                  v79[5] = 25; /*0x1002591cf*/
                  v79[9] = 0xB0D00000001LL; /*0x1002591e4*/
                  v28 = (char *)&v87; /*0x1002591eb*/
                  _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v87, v79); /*0x1002591f6*/
                }
                v30 = __n; /*0x1002591fb*/
                if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100259202*/
                {
                  v31 = 0; /*0x100259208*/
                  goto LABEL_46; /*0x100259208*/
                }
                v34 = __src; /*0x100259297*/
                if ( __n ) /*0x10025929e*/
                {
                  v95 = (volatile signed __int64 *)__src; /*0x1002592a0*/
                  v35 = v5; /*0x1002592a4*/
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, __src, v29); /*0x1002592a7*/
                  v31 = 1; /*0x1002592ac*/
                  v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x1002592ba*/
                  if ( !v36 ) /*0x1002592c2*/
LABEL_46:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v30); /*0x10025920b*/
                  v37 = v36; /*0x1002592c8*/
                  v5 = v35; /*0x1002592cb*/
                  v34 = (void *)v95; /*0x1002592d5*/
                }
                else
                {
                  v37 = 1; /*0x1002592db*/
                }
                memcpy((void *)v37, v34, v30); /*0x1002592e7*/
                v87 = (_QWORD *)v30; /*0x1002592ec*/
                v88 = (_QWORD *)v37; /*0x1002592f0*/
                v89 = v30; /*0x1002592f4*/
                v38 = v92 + 2; /*0x1002592fc*/
                v39 = *((_QWORD *)v92 + 2); /*0x100259300*/
                if ( !v39 ) /*0x100259307*/
                  v39 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v92 + 2); /*0x1002596b7*/
                std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x10025930d*/
                if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100259322*/
                {
                  v56 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v39); /*0x1002596bf*/
                  LOBYTE(v56) = v56 ^ 1; /*0x1002596ca*/
                  LODWORD(v95) = v56; /*0x1002596cc*/
                  if ( *((_BYTE *)v92 + 24) ) /*0x1002596d3*/
                    goto LABEL_62; /*0x1002596d9*/
                }
                else
                {
                  LODWORD(v95) = 0; /*0x100259328*/
                  if ( *((_BYTE *)v92 + 24) ) /*0x100259333*/
                  {
LABEL_62:
                    if ( !(_BYTE)v95 /*0x100259a1f*/
                      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
                      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v39) )
                    {
                      *((_BYTE *)v92 + 24) = 1; /*0x100259a30*/
                    }
LABEL_103:
                    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v38); /*0x1002598eb*/
                    v79[0] = &v87; /*0x1002598f7*/
                    v79[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100259905*/
                    v53 = v74; /*0x100259913*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v74, &unk_1018F30D3, v79); /*0x100259921*/
                    v5[3] = v74[2]; /*0x10025992d*/
                    v69 = v74[0]; /*0x100259931*/
                    v5[2] = v74[1]; /*0x10025993f*/
                    v5[1] = v69; /*0x100259943*/
                    *v5 = 10; /*0x100259947*/
                    if ( v87 ) /*0x100259956*/
                    {
                      v53 = v88; /*0x100259958*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x100259961*/
                    }
                    if ( v84 ) /*0x100259970*/
                    {
                      v53 = __src; /*0x100259972*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v84, 1); /*0x10025997e*/
                    }
LABEL_107:
                    if ( !(_BYTE)v96 /*0x1002599c2*/
                      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
                      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v53) )
                    {
                      *(_BYTE *)(v12 + 24) = 1; /*0x1002599cb*/
                    }
                    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v91); /*0x100259998*/
                    goto LABEL_110; /*0x100259998*/
                  }
                }
                v93 = v38; /*0x1002596df*/
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v79, &v87); /*0x1002596ee*/
                v77[1] = v79[2]; /*0x1002596fa*/
                v77[0] = v79[1]; /*0x10025970f*/
                v76 = (__int64 *)v79[0]; /*0x100259716*/
                v57 = v92; /*0x10025971d*/
                v58 = *((_QWORD *)v92 + 10); /*0x100259721*/
                if ( v58 ) /*0x100259728*/
                  a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v92 + 11), v58, 1); /*0x100259733*/
                v59 = *((_QWORD *)v57 + 13); /*0x10025973b*/
                if ( v59 ) /*0x100259742*/
                  a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v57 + 14), v59, 1); /*0x10025974d*/
                v60 = *((_QWORD *)v57 + 16); /*0x100259759*/
                if ( v60 != v83 && v60 ) /*0x10025976c*/
                  a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v57 + 17), v60, 1); /*0x10025977a*/
                *((_QWORD *)v57 + 10) = 0; /*0x10025977f*/
                *((_QWORD *)v57 + 11) = 1; /*0x100259787*/
                *((_QWORD *)v57 + 12) = 0; /*0x10025978f*/
                *((_QWORD *)v57 + 13) = 0; /*0x100259797*/
                *((_QWORD *)v57 + 14) = 1; /*0x10025979f*/
                *((_QWORD *)v57 + 15) = 0; /*0x1002597a7*/
                *((_QWORD *)v57 + 18) = v77[1]; /*0x1002597b6*/
                v61 = v76; /*0x1002597ba*/
                *((_QWORD *)v57 + 17) = v77[0]; /*0x1002597c8*/
                *((_QWORD *)v57 + 16) = v61; /*0x1002597cc*/
                *((_WORD *)v57 + 76) = 0; /*0x1002597d0*/
                *((_BYTE *)v57 + 154) = 0; /*0x1002597da*/
                v62 = v57 + 4; /*0x1002597ed*/
                v38 = v93; /*0x1002597f8*/
                codexmate_lib::core::relay::storage::save_with_publication::h8386f416162b9d02(v79, v82 + 2, v62, a4); /*0x1002597fc*/
                if ( v79[0] == 11 )
                {
                  v66 = (__int64 **)v79[1]; /*0x10025981b*/
                  codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hd58b317faccf87e9(v79[1]); /*0x100259822*/
                }
                else
                {
                  qmemcpy(v77, &v79[1], sizeof(v77)); /*0x10025983f*/
                  v68 = v80; /*0x10025983f*/
                  v67 = 0; /*0x10025983f*/
                  v76 = (__int64 *)v79[0]; /*0x100259842*/
                  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                  {
                    v75[0] = &v76; /*0x100259860*/
                    v75[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x10025986e*/
                    v79[0] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
                    v79[1] = 35; /*0x100259883*/
                    v79[2] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
                    v79[3] = 35; /*0x100259895*/
                    v79[4] = &off_101AA3A80; /*0x1002598a7*/
                    v68 = v75; /*0x1002598b5*/
                    log::__private_api::log::hf5bade4875454669(&unk_1018F30F0, v75, 2, v79); /*0x1002598c8*/
                  }
                  v66 = &v76; /*0x1002598cd*/
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1( /*0x1002598d4*/
                    &v76,
                    v68,
                    v63,
                    v67,
                    v64,
                    v65);
                }
                if ( !(_BYTE)v95 /*0x100259a39*/
                  && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
                  && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v66) )
                {
                  *((_BYTE *)v92 + 24) = 1; /*0x100259a4a*/
                }
                goto LABEL_103; /*0x100259a4e*/
              }
              __n = v73; /*0x10025921f*/
              __src = v72; /*0x10025922a*/
              v84 = v71; /*0x100259231*/
              v95 = v92 + 2; /*0x100259240*/
              v32 = *((_QWORD *)v92 + 2); /*0x100259244*/
              if ( !v32 ) /*0x10025924b*/
                v32 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v95); /*0x10025937f*/
              std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a4); /*0x100259251*/
              if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10025925c*/
              {
                v33 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32) ^ 1; /*0x10025938f*/
                if ( *((_BYTE *)v92 + 24) ) /*0x100259397*/
                  goto LABEL_51; /*0x10025939d*/
              }
              else
              {
                v33 = 0; /*0x100259262*/
                if ( *((_BYTE *)v92 + 24) ) /*0x100259269*/
                {
LABEL_51:
                  if ( !v33 /*0x1002599eb*/
                    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
                    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32) )
                  {
                    *((_BYTE *)v92 + 24) = 1; /*0x1002599fc*/
                  }
LABEL_82:
                  v53 = (_QWORD *)*v95; /*0x10025961b*/
                  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v95); /*0x100259622*/
                  v79[2] = __n; /*0x10025962b*/
                  v79[1] = __src; /*0x100259640*/
                  v79[0] = v84; /*0x100259647*/
                  if ( *v93 ) /*0x100259652*/
                  {
                    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v93) ) /*0x10025965a*/
                    {
                      v53 = v93; /*0x100259660*/
                      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h7e35c44210fcccb4(v93); /*0x100259664*/
                    }
                    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v12 + 40)) ) /*0x10025966e*/
                    {
                      v53 = (_QWORD *)(v12 + 40); /*0x100259674*/
                      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(v12 + 40); /*0x100259679*/
                    }
                  }
                  v54 = v93; /*0x100259685*/
                  *((_QWORD *)v93 + 2) = v79[2]; /*0x100259689*/
                  v55 = v79[0]; /*0x10025968d*/
                  *((_QWORD *)v54 + 1) = v79[1]; /*0x10025969b*/
                  *v54 = v55; /*0x10025969f*/
                  *v5 = 11; /*0x1002596a2*/
                  goto LABEL_107; /*0x1002596aa*/
                }
              }
              v78 = v5; /*0x1002593a3*/
              v40 = __n; /*0x1002593ae*/
              v79[0] = &__n; /*0x1002593b2*/
              v79[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1002593c0*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v87, &anon_90096945ae5392e7faa4fe68e375fd44_402, v79); /*0x1002593d9*/
              v94 = v40; /*0x1002593de*/
              v79[0] = &__n; /*0x1002593e2*/
              v79[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1002593e9*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v76, &anon_90096945ae5392e7faa4fe68e375fd44_401, v79); /*0x100259405*/
              v79[0] = v87; /*0x100259412*/
              v79[1] = v88; /*0x100259419*/
              v79[2] = v89; /*0x100259424*/
              v79[3] = v76; /*0x100259439*/
              v79[4] = v77[0]; /*0x100259440*/
              v79[5] = v77[1]; /*0x10025944e*/
              v41 = v92; /*0x100259455*/
              v42 = *((_QWORD *)v92 + 10); /*0x100259459*/
              v43 = v82; /*0x100259460*/
              if ( v42 ) /*0x100259467*/
                a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v92 + 11), v42, 1); /*0x100259472*/
              v44 = *((_QWORD *)v41 + 13); /*0x100259477*/
              if ( v44 ) /*0x10025947e*/
                a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v41 + 14), v44, 1); /*0x100259489*/
              v45 = *((_QWORD *)v41 + 16); /*0x100259492*/
              if ( v45 != v83 && v45 ) /*0x1002594a5*/
                a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v41 + 17), v45, 1); /*0x1002594b3*/
              *((_QWORD *)v41 + 15) = v79[5]; /*0x1002594bf*/
              *((_QWORD *)v41 + 14) = v79[4]; /*0x1002594ca*/
              *((_QWORD *)v41 + 13) = v79[3]; /*0x1002594d5*/
              *((_QWORD *)v41 + 12) = v79[2]; /*0x1002594e0*/
              v46 = v79[0]; /*0x1002594e4*/
              *((_QWORD *)v41 + 11) = v79[1]; /*0x1002594f2*/
              *((_QWORD *)v41 + 10) = v46; /*0x1002594f6*/
              *((_QWORD *)v41 + 16) = v83; /*0x100259500*/
              *((_WORD *)v41 + 76) = v94; /*0x10025950b*/
              *((_BYTE *)v41 + 154) = 1; /*0x100259512*/
              codexmate_lib::core::relay::storage::save_with_publication::h8386f416162b9d02(v79, v43 + 2, v41 + 4, a4); /*0x10025952b*/
              if ( v79[0] == 11 )
              {
                v50 = (__int64 **)v79[1]; /*0x10025953d*/
                codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hd58b317faccf87e9(v79[1]); /*0x100259544*/
              }
              else
              {
                qmemcpy(v77, &v79[1], sizeof(v77)); /*0x100259561*/
                v52 = v80; /*0x100259561*/
                v51 = 0; /*0x100259561*/
                v76 = (__int64 *)v79[0]; /*0x100259564*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                {
                  v87 = &v76; /*0x100259582*/
                  v88 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8; /*0x10025958d*/
                  v79[0] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
                  v79[1] = 35; /*0x10025959f*/
                  v79[2] = "codexmate_lib::core::relay::managerROUTER_STATE_CONFLICT: route changed after this state snapshot; retry from current stateROUTER_STATE_CONFLICT: active route changes require a transition commit";
                  v79[3] = 35; /*0x1002595b1*/
                  v79[4] = &off_101AA3A68; /*0x1002595c3*/
                  v52 = &v87; /*0x1002595d1*/
                  log::__private_api::log::hf5bade4875454669(&unk_1018F309C, &v87, 2, v79); /*0x1002595e1*/
                }
                v50 = &v76; /*0x1002595e6*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1( /*0x1002595ed*/
                  &v76,
                  v52,
                  v47,
                  v51,
                  v48,
                  v49);
              }
              v5 = v78; /*0x1002595f2*/
              if ( !v33 /*0x100259a05*/
                && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
                && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v50) )
              {
                *((_BYTE *)v92 + 24) = 1; /*0x100259a16*/
              }
              goto LABEL_82; /*0x100259a1a*/
            }
          }
        }
LABEL_126:
        BUG(); /*0x100259a62*/
      }
    }
    v8 = v9; /*0x100258d98*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v9, 1); /*0x100258d9b*/
    goto LABEL_12; /*0x100258d9b*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, v6, a3); /*0x100258cd0*/
  result = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100258cdf*/
  if ( !result ) /*0x100258ce7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100259a6e*/
  qmemcpy((void *)result, "relay proxy runtime is unavailable", 34); /*0x100258d21*/
  *a1 = 10; /*0x100258d2a*/
  a1[1] = 34; /*0x100258d32*/
  a1[2] = result; /*0x100258d3a*/
  a1[3] = 34; /*0x100258d3e*/
  return result; /*0x1002599b0*/
}
