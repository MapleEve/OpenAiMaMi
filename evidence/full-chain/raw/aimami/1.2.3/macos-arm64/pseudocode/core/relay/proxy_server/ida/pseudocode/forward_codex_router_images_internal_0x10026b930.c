// __ZN13codexmate_lib4core5relay12proxy_server36forward_codex_router_images_internal28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10026b930 | 基线 same-set
char __fastcall codexmate_lib::core::relay::proxy_server::forward_codex_router_images_internal::_$u7b$$u7b$closure$u7d$$u7d$::hed832e095bd6e40d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r12
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  _BYTE *v18; // rdi
  size_t v19; // r15
  const void *v20; // r13
  __int64 *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // r13
  _QWORD *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // rax
  _BYTE *v29; // rdi
  bool v30; // zf
  size_t v31; // rdx
  const void *v32; // rsi
  __int64 v33; // r14
  volatile signed __int64 *v34; // r12
  unsigned __int64 v35; // rax
  bool v36; // of
  unsigned __int64 v37; // rtt
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 *v43; // r12
  _BYTE *v44; // r14
  __int64 v45; // r15
  __int64 *v46; // r13
  __int64 v47; // rax
  char result; // al
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // rt0
  signed __int64 v55; // rax
  signed __int64 v56; // rcx
  signed __int64 v57; // rtt
  signed __int64 v58; // rtt
  unsigned __int16 v59; // [rsp+0h] [rbp-800h]
  _BYTE v60[96]; // [rsp+8h] [rbp-7F8h] BYREF
  _BYTE v61[120]; // [rsp+68h] [rbp-798h] BYREF
  _BYTE v62[120]; // [rsp+E0h] [rbp-720h] BYREF
  _QWORD __dst[34]; // [rsp+158h] [rbp-6A8h] BYREF
  _QWORD v64[2]; // [rsp+268h] [rbp-598h] BYREF
  _BYTE v65[120]; // [rsp+278h] [rbp-588h] BYREF
  _BYTE v66[96]; // [rsp+2F0h] [rbp-510h] BYREF
  __int64 v67; // [rsp+350h] [rbp-4B0h] BYREF
  _BYTE v68[120]; // [rsp+358h] [rbp-4A8h] BYREF
  _BYTE v69[128]; // [rsp+3D0h] [rbp-430h] BYREF
  _QWORD v70[15]; // [rsp+450h] [rbp-3B0h] BYREF
  _QWORD v71[16]; // [rsp+4C8h] [rbp-338h] BYREF
  _QWORD __src[34]; // [rsp+548h] [rbp-2B8h] BYREF
  __int64 v73; // [rsp+658h] [rbp-1A8h] BYREF
  __int64 *v74; // [rsp+660h] [rbp-1A0h]
  _QWORD v75[32]; // [rsp+668h] [rbp-198h] BYREF
  _QWORD *v76; // [rsp+768h] [rbp-98h]
  __int64 v77; // [rsp+770h] [rbp-90h]
  __int64 *v78; // [rsp+778h] [rbp-88h]
  __int64 v79; // [rsp+780h] [rbp-80h]
  __int64 v80; // [rsp+788h] [rbp-78h] BYREF
  __int64 v81; // [rsp+790h] [rbp-70h]
  __int64 v82; // [rsp+798h] [rbp-68h]
  __int64 v83; // [rsp+7A0h] [rbp-60h]
  __int64 v84; // [rsp+7A8h] [rbp-58h] BYREF
  __int64 v85; // [rsp+7B0h] [rbp-50h]
  __int64 *v86; // [rsp+7B8h] [rbp-48h]
  _BYTE *v87; // [rsp+7C0h] [rbp-40h]
  _BYTE *v88; // [rsp+7C8h] [rbp-38h]
  __int64 v89; // [rsp+7D0h] [rbp-30h]

  v3 = a3; /*0x10026b944*/
  v76 = a1; /*0x10026b94a*/
  switch ( *(_BYTE *)(a2 + 425) ) /*0x10026b966*/
  {
    case 0: /*0x10026b966*/
      v85 = a3; /*0x10026b968*/
      v5 = *(_QWORD **)(a2 + 96); /*0x10026b96c*/
      *(_QWORD *)(a2 + 136) = v5; /*0x10026b970*/
      v87 = (_BYTE *)(a2 + 144); /*0x10026b983*/
      qmemcpy((void *)(a2 + 144), (const void *)a2, 0x60u); /*0x10026b98a*/
      v6 = a2 + 96; /*0x10026b98a*/
      *(_BYTE *)(a2 + 426) = 1; /*0x10026b98d*/
      v84 = *(_QWORD *)(a2 + 128); /*0x10026b99b*/
      v83 = *(_QWORD *)(a2 + 120); /*0x10026b9a3*/
      v7 = *(_QWORD *)(a2 + 104); /*0x10026b9a7*/
      v82 = *(_QWORD *)(a2 + 112); /*0x10026b9af*/
      v81 = v7; /*0x10026b9b3*/
      LOBYTE(v89) = *(_BYTE *)(a2 + 424); /*0x10026b9be*/
      v8 = *v5; /*0x10026b9c1*/
      v9 = (__int64 *)(*v5 + 16LL); /*0x10026b9c4*/
      v10 = *v9; /*0x10026b9c8*/
      if ( !*v9 ) /*0x10026b9c8*/
        v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(*v5 + 16LL); /*0x10026c3bf*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v10); /*0x10026b9d5*/
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10026b9e4*/
        v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, v6, v11, v12) ^ 1; /*0x10026c3cf*/
      else
        v13 = 0; /*0x10026b9f0*/
      v14 = *(_BYTE *)(v8 + 24); /*0x10026b9f3*/
      v74 = v9; /*0x10026b9ff*/
      LOBYTE(v75[0]) = v13; /*0x10026ba06*/
      v73 = v14 != 0; /*0x10026ba0d*/
      if ( v14 ) /*0x10026ba14*/
      {
        codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x10026ba3f*/
          v69,
          500,
          "state poisoned::toolsimage_url[AiMaMi] image_url rejected by upstream; retrying with text fallbackexpect",
          14,
          &unk_1015DDC78,
          0x15u);
        if ( !v13 /*0x10026c3d8*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v69,
                                 500,
                                 v15,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v8 + 24) = 1; /*0x10026c3e5*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x10026ba62*/
      }
      else
      {
        LOBYTE(v88) = *(_BYTE *)(v8 + 324); /*0x10026bd01*/
        if ( !v13 /*0x10026c3ef*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v10,
                                 v6,
                                 v11,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v8 + 24) = 1; /*0x10026c3fc*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x10026bd22*/
        if ( (_BYTE)v88 ) /*0x10026bd2b*/
        {
          if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 16LL) + 16LL) != 1 ) /*0x10026bd47*/
          {
            v30 = (_BYTE)v89 == 0; /*0x10026be05*/
            v31 = 25; /*0x10026be0e*/
            if ( (_BYTE)v89 ) /*0x10026be13*/
              v31 = 19; /*0x10026be13*/
            v32 = &unk_1015DE1D5; /*0x10026be1e*/
            if ( (_BYTE)v89 ) /*0x10026be25*/
              v32 = &unk_1015DE1EE; /*0x10026be25*/
            *(_QWORD *)(a2 + 240) = v32; /*0x10026be29*/
            v19 = 56; /*0x10026be35*/
            if ( !v30 ) /*0x10026be3b*/
              v19 = 50; /*0x10026be3b*/
            v20 = &unk_1015DE16B; /*0x10026be46*/
            if ( !v30 ) /*0x10026be4d*/
              v20 = &unk_1015DE1A3; /*0x10026be4d*/
            *(_QWORD *)(a2 + 248) = v31; /*0x10026be51*/
            *(_QWORD *)(a2 + 256) = v20; /*0x10026be58*/
            *(_QWORD *)(a2 + 264) = v19; /*0x10026be5f*/
            codexmate_lib::core::relay::proxy_server::record_codex_openai_images_route::h9cb3a0a0833de5b1( /*0x10026be76*/
              *(_QWORD **)(a2 + 136),
              v32,
              v31,
              v20,
              v19,
              0,
              v59);
            v33 = *(_QWORD *)(*(_QWORD *)(a2 + 136) + 24LL); /*0x10026be82*/
            v34 = (volatile signed __int64 *)(v33 + 16); /*0x10026be86*/
            v35 = *(_QWORD *)(v33 + 16); /*0x10026be8a*/
            while ( v35 <= 0xFFFFFFFFFFFFFFEFLL && v35 != 1 && (v35 & 2) == 0 ) /*0x10026bea9*/
            {
              v37 = v35; /*0x10026beba*/
              v35 = _InterlockedCompareExchange64(v34, (v35 | 1) + 16, v35); /*0x10026beba*/
              v36 = __OFSUB__(v37, v35); /*0x10026beba*/
              if ( v37 == v35 ) /*0x10026bec0*/
                goto LABEL_79; /*0x10026bec0*/
            }
            std::sys::sync::rwlock::queue::RwLock::lock_contended::h2e6bbd4ced889521(v33 + 16, 0); /*0x10026c2af*/
LABEL_79:
            v54 = _InterlockedIncrement64(*(volatile signed __int64 **)(v33 + 32)); /*0x10026c2b4*/
            if ( (v54 < 0) ^ v36 | (v54 == 0) ) /*0x10026c2c1*/
              BUG(); /*0x10026c46a*/
            v88 = *(_BYTE **)(v33 + 32); /*0x10026c2cb*/
            v55 = *(_QWORD *)(v33 + 16); /*0x10026c2cf*/
            while ( 1 ) /*0x10026c2fc*/
            {
              while ( (v55 & 2) == 0 ) /*0x10026c2fc*/
              {
                v56 = (v55 - 17) | 1; /*0x10026c2e7*/
                if ( v55 == 17 ) /*0x10026c2ee*/
                  v56 = 0; /*0x10026c2ee*/
                v57 = v55; /*0x10026c2f2*/
                v55 = _InterlockedCompareExchange64(v34, v56, v55); /*0x10026c2f2*/
                if ( v57 == v55 ) /*0x10026c2f8*/
                  goto LABEL_87; /*0x10026c2f8*/
              }
              if ( (v55 & 8) == 0 ) /*0x10026c300*/
              {
                std::sys::sync::rwlock::queue::RwLock::read_unlock_contended::hf5a509ae31aa9ac3(v33 + 16, v55); /*0x10026c3ad*/
LABEL_87:
                v17 = a2 + 272; /*0x10026c315*/
                *(_QWORD *)(a2 + 272) = v88; /*0x10026c320*/
                *(_BYTE *)(a2 + 426) = 0; /*0x10026c327*/
                v70[3] = v84; /*0x10026c332*/
                v70[2] = v83; /*0x10026c33d*/
                v70[1] = v82; /*0x10026c34c*/
                v70[0] = v81; /*0x10026c353*/
                v86 = (__int64 *)(a2 + 280); /*0x10026c36d*/
                qmemcpy((void *)(a2 + 280), v70, 0x78u); /*0x10026c371*/
                *(_QWORD *)(a2 + 400) = a2 + 272; /*0x10026c374*/
                v18 = v87; /*0x10026c37b*/
                *(_QWORD *)(a2 + 408) = v87; /*0x10026c37f*/
                v88 = (_BYTE *)(a2 + 416); /*0x10026c38d*/
                *(_BYTE *)(a2 + 416) = 0; /*0x10026c391*/
                *(_BYTE *)(a2 + 417) = v89; /*0x10026c39c*/
LABEL_15:
                v21 = v86; /*0x10026bad3*/
                *(_QWORD *)(a2 + 336) = v86[3]; /*0x10026bae2*/
                *(_QWORD *)(a2 + 328) = v21[2]; /*0x10026baed*/
                v22 = *v21; /*0x10026baf4*/
                *(_QWORD *)(a2 + 320) = v21[1]; /*0x10026bafb*/
                *(_QWORD *)(a2 + 312) = v22; /*0x10026bb02*/
                *(_QWORD *)(a2 + 360) = v20; /*0x10026bb09*/
                *(_QWORD *)(a2 + 368) = v19; /*0x10026bb10*/
                *(_QWORD *)(a2 + 376) = v17; /*0x10026bb17*/
                *(_QWORD *)(a2 + 384) = v18; /*0x10026bb1e*/
                JUMPOUT(0x10026BB25LL); /*0x10026bb25*/
              }
              v58 = v55; /*0x10026c30d*/
              v55 = _InterlockedCompareExchange64(v34, v55 & 0xFFFFFFFFFFFFFFF6LL, v55); /*0x10026c30d*/
              if ( v58 == v55 ) /*0x10026c313*/
                goto LABEL_87; /*0x10026c313*/
            }
          }
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x10026bd72*/
            v69,
            401,
            &unk_1015DDBE8,
            117,
            &unk_1015DDC5D,
            0x1Bu);
        }
        else
        {
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a( /*0x10026bddd*/
            v69,
            503,
            &unk_1015DDB66,
            115,
            &unk_1015DDBD9,
            0xFu);
        }
      }
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v81 + 32))(&v84, v82, v83); /*0x10026bdf2*/
      *(_BYTE *)(a2 + 426) = 0; /*0x10026bdf5*/
      v29 = v87; /*0x10026bdfc*/
      goto LABEL_76; /*0x10026be00*/
    case 1: /*0x10026b966*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D7F8); /*0x10026c419*/
    case 2: /*0x10026b966*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D7F8); /*0x10026c40d*/
    case 3: /*0x10026b966*/
      v88 = (_BYTE *)(a2 + 416); /*0x10026ba73*/
      v16 = *(unsigned __int8 *)(a2 + 416); /*0x10026ba77*/
      v86 = (__int64 *)(a2 + 280); /*0x10026ba85*/
      switch ( v16 ) /*0x10026ba97*/
      {
        case 0LL: /*0x10026ba97*/
          v85 = a3; /*0x10026ba99*/
          v17 = *(_QWORD *)(a2 + 400); /*0x10026ba9d*/
          v18 = *(_BYTE **)(a2 + 408); /*0x10026baa4*/
          v19 = 56; /*0x10026bab7*/
          if ( *(_BYTE *)(a2 + 417) ) /*0x10026baab*/
            v19 = 50; /*0x10026babd*/
          v20 = &unk_1015DE16B; /*0x10026bac8*/
          if ( *(_BYTE *)(a2 + 417) ) /*0x10026baab*/
            v20 = &unk_1015DE1A3; /*0x10026bacf*/
          goto LABEL_15; /*0x10026bacf*/
        case 1LL: /*0x10026ba97*/
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DA98); /*0x10026c433*/
        case 2LL: /*0x10026ba97*/
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195DA98); /*0x10026c425*/
        case 3LL: /*0x10026ba97*/
          v23 = (_BYTE *)(a2 + 394); /*0x10026bb39*/
          switch ( *(_BYTE *)(a2 + 394) ) /*0x10026bb5c*/
          {
            case 0: /*0x10026bb5c*/
              v87 = (_BYTE *)(a2 + 394); /*0x10026bb5e*/
              v85 = a3; /*0x10026bb62*/
              v24 = *(_QWORD **)(a2 + 376); /*0x10026bb66*/
              v25 = *(_QWORD *)(a2 + 384); /*0x10026bb6d*/
              v26 = *(_QWORD *)(a2 + 360); /*0x10026bb74*/
              v27 = *(_QWORD *)(a2 + 368); /*0x10026bb7b*/
              *(_BYTE *)(a2 + 393) = 0; /*0x10026bb82*/
              *(_BYTE *)(a2 + 392) = 1; /*0x10026bb89*/
              v80 = *(_QWORD *)(a2 + 336); /*0x10026bb94*/
              v79 = *(_QWORD *)(a2 + 328); /*0x10026bb9c*/
              v28 = *(_QWORD *)(a2 + 312); /*0x10026bba0*/
              v89 = a2 + 312; /*0x10026bba3*/
              v78 = *(__int64 **)(a2 + 320); /*0x10026bbab*/
              v77 = v28; /*0x10026bbb2*/
              if ( (unsigned __int8)codexmate_lib::core::relay::proxy_passthrough::is_bearer_likely_missing::h09ed3414092fcf7b() ) /*0x10026bbbc*/
              {
                codexmate_lib::core::relay::proxy_passthrough::error_response::h71716868a9c3d7b2( /*0x10026bbea*/
                  &v67,
                  401,
                  &unk_1015DE201,
                  159,
                  &unk_1015DDC5D,
                  27);
                v23 = v87; /*0x10026bbef*/
                if ( !*(_BYTE *)(a2 + 392) ) /*0x10026bbf3*/
                  goto LABEL_62; /*0x10026bbfa*/
                goto LABEL_60; /*0x10026bbfa*/
              }
              codexmate_lib::core::relay::proxy_passthrough::build_passthrough_request_headers::h05d5fd2589246d0e( /*0x10026bc0f*/
                v66,
                v25);
              *(_BYTE *)(a2 + 393) = 1; /*0x10026bc14*/
              reqwest::async_impl::client::Client::request::h7c49bfd56329fb46( /*0x10026bc33*/
                &v73,
                *v24,
                &anon_39a6e93098609d65551b0fc4eadbbbd9_845,
                v26,
                v27);
              *(_BYTE *)(a2 + 393) = 0; /*0x10026bc38*/
              qmemcpy(v60, v66, sizeof(v60)); /*0x10026bc55*/
              reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(__src, &v73); /*0x10026bc66*/
              v3 = v85; /*0x10026bc6b*/
              v23 = v87; /*0x10026bc6f*/
              *(_BYTE *)(a2 + 392) = 0; /*0x10026bc73*/
              v75[1] = v80; /*0x10026bc7e*/
              v75[0] = v79; /*0x10026bc89*/
              v74 = v78; /*0x10026bc9e*/
              v73 = v77; /*0x10026bca5*/
              if ( __src[0] == 2 ) /*0x10026bcb7*/
              {
                memcpy(__dst, __src, sizeof(__dst)); /*0x10026bcd0*/
                (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v73 + 32))(&v75[1], v74, v75[0]); /*0x10026bcf1*/
              }
              else
              {
                if ( __src[0] ) /*0x10026bd85*/
                {
                  if ( __src[1] ) /*0x10026bd95*/
                  {
                    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(__src[1] + 32LL))(&__src[4], __src[2], __src[3]); /*0x10026bdb0*/
                  }
                  else
                  {
                    v38 = __src[2]; /*0x10026bec7*/
                    v39 = __src[3]; /*0x10026bece*/
                    if ( *(_QWORD *)__src[3] ) /*0x10026bed5*/
                      (*(void (__fastcall **)(_QWORD))__src[3])(__src[2]); /*0x10026bee1*/
                    v40 = *(_QWORD *)(v39 + 8); /*0x10026bee3*/
                    if ( v40 ) /*0x10026beeb*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v40, *(_QWORD *)(v39 + 16)); /*0x10026bef5*/
                  }
                }
                __src[0] = 1; /*0x10026befa*/
                __src[1] = v73; /*0x10026bf13*/
                __src[2] = v74; /*0x10026bf1a*/
                __src[3] = v75[0]; /*0x10026bf28*/
                __src[4] = v75[1]; /*0x10026bf36*/
                memcpy(__dst, __src, sizeof(__dst)); /*0x10026bf50*/
              }
              *(_QWORD *)(a2 + 344) = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(__dst); /*0x10026bf61*/
              *(_QWORD *)(a2 + 352) = v41; /*0x10026bf68*/
LABEL_54:
              _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d( /*0x10026bf6f*/
                &v73,
                a2 + 344,
                v3);
              v42 = v73; /*0x10026bf88*/
              if ( v73 == 4 ) /*0x10026bf93*/
              {
                *v23 = 3; /*0x10026bf95*/
LABEL_63:
                *v88 = 3; /*0x10026c100*/
                *v76 = 3; /*0x10026c10e*/
                result = 3; /*0x10026c115*/
                goto LABEL_77; /*0x10026c117*/
              }
              v43 = v74; /*0x10026bf9f*/
              qmemcpy(v61, v75, sizeof(v61)); /*0x10026bfb9*/
              core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2 + 344); /*0x10026bfbf*/
              if ( (_DWORD)v42 == 3 ) /*0x10026bfc8*/
              {
                v44 = v23; /*0x10026bfce*/
                __dst[0] = v43; /*0x10026bfd1*/
                __src[0] = __dst; /*0x10026bfdf*/
                __src[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x10026bfed*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v73, &unk_1017B9FA9, __src); /*0x10026c009*/
                v45 = v73; /*0x10026c00e*/
                v46 = v74; /*0x10026c015*/
                codexmate_lib::core::relay::proxy_passthrough::error_response::h71716868a9c3d7b2( /*0x10026c03f*/
                  &v67,
                  502,
                  v74,
                  v75[0],
                  &unk_1015DDEE5,
                  19);
                if ( v45 ) /*0x10026c047*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x10026c054*/
                core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(__dst); /*0x10026c060*/
                *(_BYTE *)(a2 + 393) = 0; /*0x10026c065*/
                v23 = v44; /*0x10026c06c*/
                if ( *(_BYTE *)(a2 + 392) ) /*0x10026c06f*/
LABEL_60:
                  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(v77 + 32))(&v80, v78, v79); /*0x10026c078*/
              }
              else
              {
                v64[0] = v42; /*0x10026c093*/
                v64[1] = v43; /*0x10026c09a*/
                qmemcpy(v65, v61, sizeof(v65)); /*0x10026c0b4*/
                codexmate_lib::core::relay::proxy_passthrough::stream_images_upstream_response::h45927e73268ab7cc( /*0x10026c0c5*/
                  &v67,
                  v64);
                *(_BYTE *)(a2 + 393) = 0; /*0x10026c0ca*/
              }
LABEL_62:
              *(_BYTE *)(a2 + 392) = 0; /*0x10026c0d1*/
              v47 = v67; /*0x10026c0d8*/
              qmemcpy(v62, v68, sizeof(v62)); /*0x10026c0f2*/
              *v23 = 1; /*0x10026c0f5*/
              if ( v47 == 3 ) /*0x10026c0fe*/
                goto LABEL_63; /*0x10026c0fe*/
              *(_BYTE *)(a2 + 416) = 1; /*0x10026c11c*/
              qmemcpy(&v71[1], v62, 0x78u); /*0x10026c136*/
              v71[0] = v47; /*0x10026c139*/
              if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 272)) ) /*0x10026c147*/
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a2 + 272, __dst); /*0x10026c154*/
              _$LT$$RF$str$u20$as$u20$http..header..map..as_header_name..Sealed$GT$::find::h6639e9683dd8a52e( /*0x10026c173*/
                &v73,
                "x-aimami-reasoninput",
                15,
                v71);
              if ( (_BYTE)v73 ) /*0x10026c17f*/
              {
                if ( v75[0] >= v71[5] ) /*0x10026c196*/
                  core::panicking::panic_bounds_check::h56740b1198b22635( /*0x10026c465*/
                    v75[0],
                    v71[5],
                    &anon_39a6e93098609d65551b0fc4eadbbbd9_907,
                    v49);
                v50 = *(_QWORD *)(v71[4] + 104LL * v75[0] + 40); /*0x10026c1a7*/
                if ( v50 ) /*0x10026c1af*/
                {
                  v51 = *(_QWORD *)(v71[4] + 104LL * v75[0] + 32); /*0x10026c1b1*/
                  v52 = 0; /*0x10026c1b6*/
                  while ( (unsigned __int8)(*(_BYTE *)(v51 + v52) - 32) < 0x5Fu || *(_BYTE *)(v51 + v52) == 9 ) /*0x10026c1da*/
                  {
                    if ( v50 == ++v52 ) /*0x10026c1e2*/
                    {
                      if ( v50 == 19 ) /*0x10026c1e8*/
                      {
                        v53 = _mm_or_si128( /*0x10026c203*/
                                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v51), (__m128i)xmmword_1015DCA80),
                                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v51 + 3)), (__m128i)xmmword_1015DCA70));
                        if ( _mm_testz_si128(v53, v53) ) /*0x10026c207*/
                          codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(*(_QWORD *)(a2 + 136)); /*0x10026c215*/
                      }
                      break; /*0x10026c215*/
                    }
                  }
                }
              }
              codexmate_lib::core::relay::proxy_server::record_codex_openai_images_route::h9cb3a0a0833de5b1( /*0x10026c21a*/
                *(_QWORD **)(a2 + 136),
                *(const void **)(a2 + 240),
                *(_QWORD *)(a2 + 248),
                *(const void **)(a2 + 256),
                *(_QWORD *)(a2 + 264),
                1,
                v71[13]);
              qmemcpy(v69, v71, sizeof(v69)); /*0x10026c264*/
              *(_BYTE *)(a2 + 426) = 0; /*0x10026c267*/
              v29 = (_BYTE *)(a2 + 144); /*0x10026c26e*/
LABEL_76:
              core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v29); /*0x10026c275*/
              qmemcpy(v76, v69, 0x80u); /*0x10026c28d*/
              result = 1; /*0x10026c290*/
LABEL_77:
              *(_BYTE *)(a2 + 425) = result; /*0x10026c292*/
              return result;
            case 1: /*0x10026bb5c*/
              v89 = a2 + 312; /*0x10026c44c*/
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DA80); /*0x10026c457*/
            case 2: /*0x10026bb5c*/
              JUMPOUT(0x10026C43ALL); /*0x10026c43a*/
            case 3: /*0x10026bb5c*/
              v89 = a2 + 312; /*0x10026bd79*/
              goto LABEL_54; /*0x10026bd7d*/
          }
      }
  }
}