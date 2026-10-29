// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_continuation::Exchange::resume::_$u7b$$u7b$closure$u7d$$u7d$::h64c1a23dfbd9f2c5; addr: 0x100877f00; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:38Z
char __fastcall codexmate_lib::core::relay::anthropic_continuation::Exchange::resume::_$u7b$$u7b$closure$u7d$$u7d$::h64c1a23dfbd9f2c5(
        _QWORD *__dst,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdi
  void *v10; // rax
  __int64 v11; // rdx
  size_t v12; // r12
  __int64 v13; // r13
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r12
  char result; // al
  __int64 v23; // r15
  __int64 v24; // r12
  unsigned __int16 v25; // r15
  size_t v26; // rcx
  char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r12
  char *v30; // r13
  __int64 v31; // rax
  __int64 v32; // r15
  _QWORD v33[34]; // [rsp+0h] [rbp-600h] BYREF
  _BYTE v34[96]; // [rsp+110h] [rbp-4F0h] BYREF
  _BYTE v35[120]; // [rsp+170h] [rbp-490h] BYREF
  _QWORD v36[34]; // [rsp+1E8h] [rbp-418h] BYREF
  __int64 v37; // [rsp+2F8h] [rbp-308h] BYREF
  __int64 v38; // [rsp+300h] [rbp-300h]
  _QWORD v39[15]; // [rsp+308h] [rbp-2F8h] BYREF
  unsigned __int16 v40; // [rsp+408h] [rbp-1F8h] BYREF
  __int64 v41; // [rsp+410h] [rbp-1F0h] BYREF
  _QWORD v42[15]; // [rsp+418h] [rbp-1E8h] BYREF
  _QWORD __src[17]; // [rsp+490h] [rbp-170h] BYREF
  void *v44; // [rsp+518h] [rbp-E8h]
  __int64 v45; // [rsp+520h] [rbp-E0h]
  __int64 v46; // [rsp+528h] [rbp-D8h]
  __int64 v47; // [rsp+530h] [rbp-D0h]
  __int64 v48; // [rsp+538h] [rbp-C8h]
  __int64 v49; // [rsp+540h] [rbp-C0h]
  __int64 v50; // [rsp+548h] [rbp-B8h]
  _QWORD __dsta[22]; // [rsp+550h] [rbp-B0h] BYREF

  switch ( *((_BYTE *)a2 + 97) ) /*0x100877f2f*/
  {
    case 0: /*0x100877f2f*/
      v5 = a2[11]; /*0x100877f31*/
      a2[10] = v5; /*0x100877f35*/
      *((_BYTE *)a2 + 96) = 1; /*0x100877f39*/
      a2[3] = a2[7]; /*0x100877f41*/
      a2[2] = a2[6]; /*0x100877f49*/
      v6 = a2[4]; /*0x100877f4d*/
      a2[1] = a2[5]; /*0x100877f55*/
      *a2 = v6; /*0x100877f59*/
      if ( !*(_QWORD *)(v5 + 160) ) /*0x100877f64*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5); /*0x100877fd5*/
        v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x100877fe4*/
        if ( !v14 ) /*0x100877fec*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43); /*0x1008787a6*/
        qmemcpy(v14, "Anthropic server continuation limit reached", 43); /*0x100878034*/
        __dsta[1] = 43; /*0x10087803e*/
        __dsta[2] = v14; /*0x100878049*/
        __dsta[3] = 43; /*0x100878050*/
        goto LABEL_49; /*0x10087805b*/
      }
      v7 = v5 + 120; /*0x100877f66*/
      if ( !codexmate_lib::core::relay::anthropic_continuation::enabled::haea608ea83d8d12d(v7) ) /*0x100877f71*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7); /*0x100878060*/
        v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(55, 1); /*0x10087806f*/
        if ( !v15 ) /*0x100878077*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 55); /*0x1008787b7*/
        qmemcpy(v15, "Anthropic paused without a supported server search tool", 55); /*0x1008780db*/
        __dsta[1] = 55; /*0x1008780de*/
        __dsta[2] = v15; /*0x1008780e9*/
        __dsta[3] = 55; /*0x1008780f0*/
        goto LABEL_49; /*0x1008780fb*/
      }
      v8 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100877f86*/
                       &anon_5fc5982723cbea77922f0a3a965b6f67_208,
                       7,
                       a2);
      if ( !v8 ) /*0x100877f8e*/
        v8 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100877f90*/
      if ( *(_BYTE *)v8 != 4 ) /*0x100877f9a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&anon_5fc5982723cbea77922f0a3a965b6f67_208); /*0x100878100*/
        v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x10087810f*/
        if ( !v16 ) /*0x100878117*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x1008787c8*/
        qmemcpy(v16, "Invalid Anthropic paused content", 32); /*0x100878151*/
        __dsta[1] = 32; /*0x100878154*/
        __dsta[2] = v16; /*0x10087815f*/
        __dsta[3] = 32; /*0x100878166*/
LABEL_49:
        __dsta[4] = &xmmword_10181FE30; /*0x1008785f7*/
        __dsta[5] = 16; /*0x100878605*/
        LOWORD(__dsta[6]) = 502; /*0x100878610*/
        goto LABEL_50; /*0x100878610*/
      }
      v9 = v8[2]; /*0x100877fa0*/
      v10 = (void *)codexmate_lib::core::relay::translator::anthropic_message::validate_pause::h1bb08092034a707f( /*0x100877fa8*/
                      v9,
                      v8[3]);
      if ( v10 ) /*0x100877fb0*/
      {
        v12 = v11; /*0x100877fb6*/
        if ( v11 < 0 ) /*0x100877fbc*/
        {
          v13 = 0; /*0x100877fc2*/
          goto LABEL_10; /*0x100877fc2*/
        }
        if ( v11 ) /*0x100878566*/
        {
          v44 = v10; /*0x100878568*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9); /*0x10087856f*/
          v13 = 1; /*0x100878574*/
          v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x100878582*/
          if ( !v31 ) /*0x10087858a*/
LABEL_10:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x100877fc5*/
          v32 = v31; /*0x100878590*/
          v10 = v44; /*0x100878593*/
        }
        else
        {
          v32 = 1; /*0x1008785ce*/
        }
        memcpy((void *)v32, v10, v12); /*0x1008785dd*/
        __dsta[1] = v12; /*0x1008785e2*/
        __dsta[2] = v32; /*0x1008785e9*/
        __dsta[3] = v12; /*0x1008785f0*/
        goto LABEL_49; /*0x1008785f0*/
      }
      v17 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087818a*/
                       "messagesadaptiverequiredrejectedmsg_stopmarkdown",
                       8u);
      if ( *v17 != 4 ) /*0x100878192*/
      {
        _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb9b5f057545b6527(__dsta); /*0x1008785c7*/
        goto LABEL_51; /*0x1008785cc*/
      }
      *((_BYTE *)a2 + 96) = 0; /*0x10087819c*/
      v39[1] = a2[3]; /*0x1008781a4*/
      v39[0] = a2[2]; /*0x1008781af*/
      v18 = *a2; /*0x1008781b6*/
      v38 = a2[1]; /*0x1008781bd*/
      v37 = v18; /*0x1008781c4*/
      alloc::vec::Vec$LT$T$C$A$GT$::push::h06142f81efde1b5e(v17 + 8, &v37); /*0x1008781d5*/
      --*(_QWORD *)(a2[10] + 160); /*0x1008781de*/
      v19 = a2[10]; /*0x1008781e5*/
      if ( *(_QWORD *)(v19 + 176) ) /*0x1008781e9*/
        codexmate_lib::core::relay::anthropic_trace::Trace::attempt::he7474744415ac7a9( /*0x100878206*/
          (__int64 *)(v19 + 176),
          (char *)(v19 + 120),
          1);
      reqwest::async_impl::client::Client::post::hbc2d599e6be6c1c3(&v37); /*0x100878221*/
      _$LT$http..header..map..HeaderMap$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8e1a6257d89beb7d( /*0x100878231*/
        v34,
        a2[10]);
      reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(v36, &v37); /*0x10087824b*/
      reqwest::async_impl::request::RequestBuilder::json::h0e032959ec44bfc7(v33, v36); /*0x100878266*/
      a2[8] = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(v33); /*0x100878277*/
      a2[9] = v20; /*0x10087827b*/
LABEL_21:
      _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d( /*0x10087827f*/
        &v37,
        a2 + 8,
        a3);
      v21 = v37; /*0x100878292*/
      if ( v37 == 4 ) /*0x10087829d*/
      {
        *__dst = 4; /*0x10087829f*/
        result = 3; /*0x1008782a6*/
        goto LABEL_54; /*0x1008782a8*/
      }
      v23 = v38; /*0x1008782ad*/
      qmemcpy(v35, v39, sizeof(v35)); /*0x1008782c7*/
      core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h47ce72da1e4a790c(a2[8], a2[9]); /*0x1008782d2*/
      if ( (_DWORD)v21 == 3 ) /*0x1008782db*/
      {
        codexmate_lib::core::relay::anthropic_continuation::Failure::network::hc3136953d19bf4f0((__int64)&v41, v23); /*0x1008782ea*/
        v50 = v42[4]; /*0x1008782f4*/
        v49 = v42[3]; /*0x100878300*/
        v48 = v42[2]; /*0x10087830c*/
        __dsta[1] = v41; /*0x100878321*/
        __dsta[2] = v42[0]; /*0x100878328*/
        __dsta[3] = v42[1]; /*0x10087832f*/
        __dsta[4] = v42[2]; /*0x100878336*/
        __dsta[5] = v42[3]; /*0x10087833d*/
        __dsta[6] = v42[4]; /*0x100878344*/
LABEL_50:
        __dsta[0] = 3; /*0x100878616*/
        goto LABEL_51; /*0x100878616*/
      }
      v41 = v23; /*0x10087834d*/
      qmemcpy(v42, v35, sizeof(v42)); /*0x100878367*/
      v50 = v42[4]; /*0x100878371*/
      v49 = v42[3]; /*0x10087837f*/
      v48 = v42[2]; /*0x10087838d*/
      v47 = v42[1]; /*0x10087839b*/
      v46 = v42[0]; /*0x1008783b0*/
      v45 = v23; /*0x1008783b7*/
      qmemcpy(&__src[7], &v35[40], 0x50u); /*0x1008783d1*/
      __src[1] = v23; /*0x1008783e2*/
      __src[2] = v42[0]; /*0x1008783e9*/
      __src[3] = v42[1]; /*0x1008783f7*/
      __src[4] = v42[2]; /*0x100878405*/
      __src[5] = v42[3]; /*0x100878413*/
      __src[6] = v42[4]; /*0x100878421*/
      __src[0] = v21; /*0x100878428*/
      v24 = a2[10]; /*0x10087842f*/
      v25 = __src[13]; /*0x10087843c*/
      if ( *(_QWORD *)(v24 + 176) ) /*0x100878433*/
      {
        http::header::name::HdrName::from_bytes::ha3c925ff81c76b25(&v37, "content-type", 12, __src); /*0x100878464*/
        if ( v37 == 2 || (v37 & 1) == 0 ) /*0x100878478*/
        {
          v27 = nullptr; /*0x1008784ea*/
        }
        else
        {
          if ( v39[0] >= __src[5] ) /*0x10087848b*/
            core::panicking::panic_bounds_check::h56740b1198b22635( /*0x1008787d6*/
              v39[0],
              __src[5],
              &anon_ce2d7e055d4ebd72bdfc640dd1dd85ab_925);
          v27 = *(char **)(__src[4] + 104LL * v39[0] + 32); /*0x10087849c*/
          v26 = *(_QWORD *)(__src[4] + 104LL * v39[0] + 40); /*0x1008784a1*/
          if ( v26 ) /*0x1008784a9*/
          {
            v28 = 0; /*0x1008784af*/
            while ( (unsigned __int8)(v27[v28] - 32) < 0x5Fu || v27[v28] == 9 ) /*0x1008784da*/
            {
              if ( v26 == ++v28 ) /*0x1008784e6*/
                goto LABEL_35; /*0x1008784e6*/
            }
            v27 = nullptr; /*0x10087877d*/
          }
          else
          {
            v26 = 0; /*0x10087865e*/
          }
        }
LABEL_35:
        codexmate_lib::core::relay::anthropic_trace::Trace::headers::h7a8732cb24305bf1( /*0x1008784ec*/
          (char *)(v24 + 176),
          v25,
          v27,
          v26);
      }
      if ( (unsigned __int16)(v25 - 200) <= 0x63u ) /*0x100878509*/
      {
        memcpy(__dsta, __src, 0x88u); /*0x10087851e*/
        goto LABEL_53; /*0x100878523*/
      }
      v29 = 19; /*0x10087852c*/
      v30 = "upstream_http_errorupstream_connection_error"; /*0x100878532*/
      switch ( v25 ) /*0x100878552*/
      {
        case 0x190u: /*0x100878552*/
        case 0x1A6u: /*0x100878552*/
          v29 = 21; /*0x100878554*/
          v30 = "invalid_request_errorauthentication_errornot_found_errorrequest_too_largeupstream_http_errorupstream_connection_error"; /*0x10087855a*/
          break; /*0x100878561*/
        case 0x191u: /*0x100878552*/
          v29 = 20; /*0x100878674*/
          v30 = "authentication_errornot_found_errorrequest_too_largeupstream_http_errorupstream_connection_error"; /*0x10087867a*/
          break; /*0x100878681*/
        case 0x192u: /*0x100878552*/
        case 0x195u: /*0x100878552*/
        case 0x196u: /*0x100878552*/
        case 0x197u: /*0x100878552*/
        case 0x198u: /*0x100878552*/
        case 0x199u: /*0x100878552*/
        case 0x19Au: /*0x100878552*/
        case 0x19Bu: /*0x100878552*/
        case 0x19Cu: /*0x100878552*/
        case 0x19Eu: /*0x100878552*/
        case 0x19Fu: /*0x100878552*/
        case 0x1A0u: /*0x100878552*/
        case 0x1A1u: /*0x100878552*/
        case 0x1A2u: /*0x100878552*/
        case 0x1A3u: /*0x100878552*/
        case 0x1A4u: /*0x100878552*/
        case 0x1A5u: /*0x100878552*/
        case 0x1A7u: /*0x100878552*/
        case 0x1A8u: /*0x100878552*/
        case 0x1A9u: /*0x100878552*/
        case 0x1AAu: /*0x100878552*/
        case 0x1ABu: /*0x100878552*/
        case 0x1ACu: /*0x100878552*/
          break;
        case 0x193u: /*0x100878552*/
          v29 = 16; /*0x100878665*/
          v30 = (char *)&xmmword_10181FE40; /*0x10087866b*/
          break; /*0x100878672*/
        case 0x194u: /*0x100878552*/
          v29 = 15; /*0x1008786a1*/
          v30 = "not_found_errorrequest_too_largeupstream_http_errorupstream_connection_error"; /*0x1008786a7*/
          break; /*0x1008786a7*/
        case 0x19Du: /*0x100878552*/
          v29 = 17; /*0x100878692*/
          v30 = "request_too_largeupstream_http_errorupstream_connection_error"; /*0x100878698*/
          break; /*0x10087869f*/
        case 0x1ADu: /*0x100878552*/
          v29 = 16; /*0x100878683*/
          v30 = (char *)&xmmword_10181FE50; /*0x100878689*/
          break; /*0x100878690*/
        default:
          if ( v25 == 503 || v25 == 529 ) /*0x1008785a8*/
          {
            v29 = 16; /*0x1008785ae*/
            v30 = (char *)&xmmword_10181FE60; /*0x1008785b4*/
          }
          break; /*0x1008785bb*/
      }
      v33[0] = v30; /*0x1008786ae*/
      v33[1] = v29; /*0x1008786b5*/
      v40 = v25; /*0x1008786bc*/
      v36[0] = &v40; /*0x1008786cb*/
      v36[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1008786d9*/
      v36[2] = v33; /*0x1008786e7*/
      v36[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1008786f5*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37, &unk_101A3A73E, v36); /*0x100878711*/
      LOWORD(v39[3]) = v25; /*0x100878716*/
      __dsta[1] = v37; /*0x10087872c*/
      __dsta[2] = v38; /*0x100878733*/
      __dsta[3] = v39[0]; /*0x100878741*/
      __dsta[4] = v30; /*0x100878748*/
      __dsta[5] = v29; /*0x10087874f*/
      __dsta[6] = v39[3]; /*0x10087875d*/
      __dsta[0] = 3; /*0x100878761*/
      core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h0240dfd7ed22fc0e(__src); /*0x100878773*/
LABEL_51:
      if ( *((_BYTE *)a2 + 96) ) /*0x100878621*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(a2); /*0x10087862a*/
LABEL_53:
      *((_BYTE *)a2 + 96) = 0; /*0x10087862f*/
      memcpy(__dst, __dsta, 0x88u); /*0x100878642*/
      result = 1; /*0x100878647*/
LABEL_54:
      *((_BYTE *)a2 + 97) = result; /*0x100878649*/
      return result;
    case 1: /*0x100877f2f*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101C031D0); /*0x100878797*/
    case 2: /*0x100877f2f*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101C031D0); /*0x10087878b*/
    case 3: /*0x100877f2f*/
      goto LABEL_21;
  }
}