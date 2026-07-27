// __ZN13codexmate_lib4core5relay17proxy_passthrough17forward_to_openai28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10026fc30 | 基线 same-set
char __fastcall codexmate_lib::core::relay::proxy_passthrough::forward_to_openai::_$u7b$$u7b$closure$u7d$$u7d$::h38707532c597c01e(
        __int64 (__fastcall ***a1)(),
        __int64 a2,
        __int64 a3)
{
  __int64 (__fastcall ***v5)(); // r12
  _QWORD *v6; // r14
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r14
  char result; // al
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r12
  size_t v17; // r15
  __int64 v18; // r14
  __int16 v19; // r14
  const void *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdi
  __int16 v23; // r8
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 *v27; // rax
  __int64 (__fastcall **v28)(); // r15
  char v29; // r12
  __int64 v30; // rsi
  __int64 v31; // r15
  _BYTE v32[120]; // [rsp+8h] [rbp-5B8h] BYREF
  _BYTE v33[96]; // [rsp+80h] [rbp-540h] BYREF
  _QWORD v34[34]; // [rsp+E0h] [rbp-4E0h] BYREF
  __int64 (__fastcall **v35[16])(); // [rsp+1F0h] [rbp-3D0h] BYREF
  _QWORD v36[34]; // [rsp+270h] [rbp-350h] BYREF
  _QWORD v37[17]; // [rsp+380h] [rbp-240h] BYREF
  _QWORD __dst[34]; // [rsp+408h] [rbp-1B8h] BYREF
  _QWORD v39[12]; // [rsp+518h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v40)(); // [rsp+578h] [rbp-48h]
  __int64 *v41; // [rsp+580h] [rbp-40h]
  __int64 v42; // [rsp+588h] [rbp-38h]
  int v43; // [rsp+590h] [rbp-30h] BYREF
  __int16 v44; // [rsp+594h] [rbp-2Ch]
  char v45; // [rsp+597h] [rbp-29h]

  v5 = a1; /*0x10026fc4a*/
  switch ( *(_BYTE *)(a2 + 41) ) /*0x10026fc5f*/
  {
    case 0: /*0x10026fc5f*/
      v40 = a1; /*0x10026fc61*/
      *(_BYTE *)(a2 + 40) = 0; /*0x10026fc65*/
      v6 = *(_QWORD **)(a2 + 16); /*0x10026fc69*/
      v7 = *(_QWORD *)(a2 + 24); /*0x10026fc6d*/
      v42 = *(_QWORD *)(a2 + 32); /*0x10026fc75*/
      v8 = *(_BYTE *)(a2 + 42); /*0x10026fc79*/
      if ( (unsigned __int8)codexmate_lib::core::relay::proxy_passthrough::is_bearer_likely_missing::h09ed3414092fcf7b(v7) ) /*0x10026fc81*/
      {
        codexmate_lib::core::relay::proxy_passthrough::error_response::h71716868a9c3d7b2( /*0x10026fcaf*/
          v35,
          (_QWORD *)0x191,
          &unk_1015DE07C,
          0xD9u,
          &unk_1015DDC5D,
          0x1Bu);
LABEL_37:
        qmemcpy(v40, v35, 0x80u); /*0x1002702e9*/
        result = 1; /*0x1002702fc*/
        goto LABEL_38; /*0x1002702fc*/
      }
      codexmate_lib::core::relay::proxy_passthrough::build_passthrough_request_headers::h05d5fd2589246d0e(v33, v7); /*0x10026fcc3*/
      v9 = &unk_1015DDC8D; /*0x10026fccf*/
      if ( v8 ) /*0x10026fcd9*/
        v9 = &unk_1015DDCBC; /*0x10026fcd9*/
      *(_BYTE *)(a2 + 40) = 1; /*0x10026fce9*/
      reqwest::async_impl::client::Client::request::h7c49bfd56329fb46( /*0x10026fcfe*/
        __dst,
        *v6,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_845,
        v9,
        8LL * v8 + 47);
      *(_BYTE *)(a2 + 40) = 0; /*0x10026fd03*/
      qmemcpy(v39, v33, sizeof(v39)); /*0x10026fd1d*/
      reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(v36, __dst); /*0x10026fd2e*/
      v5 = v40; /*0x10026fd33*/
      reqwest::async_impl::request::RequestBuilder::json::hc3bd6ec843dbdd77(v34, v36); /*0x10026fd49*/
      *(_QWORD *)a2 = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(v34); /*0x10026fd5a*/
      *(_QWORD *)(a2 + 8) = v10; /*0x10026fd5d*/
LABEL_7:
      _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d( /*0x10026fd61*/
        __dst,
        a2,
        a3);
      v11 = __dst[0]; /*0x10026fd73*/
      if ( __dst[0] != 4 ) /*0x10026fd7e*/
      {
        v13 = __dst[1]; /*0x10026fd8f*/
        qmemcpy(v32, &__dst[2], sizeof(v32)); /*0x10026fda9*/
        core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a2); /*0x10026fdaf*/
        v40 = v5; /*0x10026fdb8*/
        if ( (_DWORD)v11 == 3 ) /*0x10026fdbc*/
        {
          v34[0] = v13; /*0x10026fdc2*/
          v36[0] = v34; /*0x10026fdd0*/
          v36[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x10026fdde*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9F62, v36); /*0x10026fdfa*/
          v14 = __dst[0]; /*0x10026fdff*/
          v15 = __dst[1]; /*0x10026fe06*/
          codexmate_lib::core::relay::proxy_passthrough::error_response::h71716868a9c3d7b2( /*0x10026fe30*/
            v35,
            (_QWORD *)0x1F6,
            (void *)__dst[1],
            __dst[2],
            &unk_1015DDEE5,
            0x13u);
          if ( v14 ) /*0x10026fe38*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x10026fe45*/
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v34); /*0x10026fe51*/
LABEL_36:
          *(_BYTE *)(a2 + 40) = 0; /*0x1002702e5*/
          goto LABEL_37; /*0x1002702e5*/
        }
        qmemcpy(&v37[2], v32, 0x78u); /*0x10026fe6e*/
        v37[0] = v11; /*0x10026fe71*/
        v37[1] = v13; /*0x10026fe78*/
        v16 = v37[10]; /*0x10026fe7f*/
        v17 = 4LL * v37[10]; /*0x10026fe86*/
        if ( v37[10] >> 62 != 0 || (unsigned __int64)(4LL * v37[10]) > 0x7FFFFFFFFFFFFFFELL ) /*0x10026fea5*/
        {
          v18 = 0; /*0x10026feac*/
          goto LABEL_15; /*0x10026feac*/
        }
        v19 = v37[13]; /*0x10026febf*/
        LOWORD(v41) = v37[11]; /*0x10026fece*/
        v20 = (const void *)v37[9]; /*0x10026fed2*/
        if ( v17 ) /*0x10026fedc*/
        {
          v42 = LOWORD(v37[13]); /*0x10026fede*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v33); /*0x10026fee2*/
          v18 = 2; /*0x10026fee7*/
          v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 2); /*0x10026fef5*/
          if ( !v21 ) /*0x10026fefd*/
LABEL_15:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v17); /*0x10026feaf*/
          v22 = v21; /*0x10026feff*/
          v19 = v42; /*0x10026ff02*/
        }
        else
        {
          v22 = 2; /*0x10026ff08*/
        }
        v42 = v22; /*0x10026ff0d*/
        memcpy((void *)v22, v20, v17); /*0x10026ff17*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfe8f8c941e9360dc(v36, &v37[3]); /*0x10026ff2a*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he9843f4b519c7ea4(__dst, &v37[6]); /*0x10026ff3d*/
        if ( v37[0] >= 2u ) /*0x10026ff4d*/
        {
          v34[1] = v37[2]; /*0x10026ff5d*/
          v34[0] = v37[1]; /*0x10026ff64*/
        }
        LOWORD(v39[11]) = (_WORD)v41; /*0x10026ff6f*/
        v39[9] = v42; /*0x10026ff77*/
        v39[10] = v16; /*0x10026ff7b*/
        v39[3] = v36[0]; /*0x10026ff8d*/
        v39[4] = v36[1]; /*0x10026ff94*/
        v39[5] = v36[2]; /*0x10026ffa2*/
        v39[6] = __dst[0]; /*0x10026ffb4*/
        v39[7] = __dst[1]; /*0x10026ffb8*/
        v39[8] = __dst[2]; /*0x10026ffc3*/
        v39[0] = v37[0]; /*0x10026ffc7*/
        v39[1] = v34[0]; /*0x10026ffdc*/
        v39[2] = v34[1]; /*0x10026ffe3*/
        http::response::Parts::new::h962418c42e7bc305(__dst); /*0x10026fff1*/
        qmemcpy(v34, &__dst[1], 0x60u); /*0x100270013*/
        v23 = __dst[13]; /*0x100270016*/
        v43 = *(_DWORD *)((char *)&__dst[13] + 2); /*0x100270024*/
        v44 = HIWORD(__dst[13]); /*0x10027002e*/
        if ( __dst[0] != 3 ) /*0x100270036*/
        {
          v23 = 200; /*0x10027004f*/
          if ( (unsigned __int16)(v19 - 1000) >= 0xFC7Cu ) /*0x100270055*/
            v23 = v19; /*0x100270055*/
          qmemcpy(v34, &__dst[1], 0x60u); /*0x100270068*/
          v44 = HIWORD(__dst[13]); /*0x100270070*/
          v43 = *(_DWORD *)((char *)&__dst[13] + 2); /*0x100270077*/
        }
        v36[0] = __dst[0]; /*0x10027007a*/
        qmemcpy(&v36[1], v34, 0x60u); /*0x100270094*/
        LOWORD(v36[13]) = v23; /*0x100270097*/
        *(_DWORD *)((char *)&v36[13] + 2) = v43; /*0x1002700a2*/
        HIWORD(v36[13]) = v44; /*0x1002700ac*/
        codexmate_lib::core::relay::proxy_passthrough::copy_response_headers_to_builder::hd61c366e5f16a0e6( /*0x1002700c8*/
          __dst,
          v39,
          v36);
        qmemcpy(v36, __dst, 0x70u); /*0x1002700e3*/
        v34[0] = "x-aimami-routerelay-responses-nativecodex native responses stream failedbuild error passthrough body failed"; /*0x1002700ed*/
        v34[1] = 14; /*0x1002700f4*/
        v34[2] = &unk_1015DE06A; /*0x100270106*/
        v34[3] = 18; /*0x10027010d*/
        http::response::Builder::and_then::h4e0760d990fde360(__dst, v36, v34); /*0x100270129*/
        qmemcpy(v36, __dst, 0x70u); /*0x100270141*/
        memcpy(__dst, v37, 0x88u); /*0x10027015a*/
        v24 = reqwest::async_impl::response::Response::bytes_stream::h4afb02b64d51c5f9(__dst); /*0x100270167*/
        v26 = v25; /*0x10027016a*/
        __dst[0] = v24; /*0x10027016d*/
        __dst[1] = v25; /*0x100270174*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v37); /*0x10027017b*/
        v27 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8); /*0x10027018a*/
        if ( !v27 ) /*0x100270192*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x10027031d*/
        v42 = v24; /*0x100270198*/
        *v27 = v24; /*0x10027019c*/
        v27[1] = v26; /*0x10027019f*/
        v28 = (__int64 (__fastcall **)())v27; /*0x1002701bd*/
        if ( v36[0] == 3 ) /*0x1002701c0*/
        {
          v41 = v27; /*0x1002701c6*/
          v45 = v36[1]; /*0x1002701ca*/
          v29 = BYTE1(v36[1]); /*0x1002701ce*/
          if ( *(_QWORD *)v26 ) /*0x1002701d1*/
            (*(void (__fastcall **)(__int64))v26)(v42); /*0x1002701de*/
          v30 = *(_QWORD *)(v26 + 8); /*0x1002701e0*/
          if ( v30 ) /*0x1002701ea*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v30, *(_QWORD *)(v26 + 16)); /*0x1002701f4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 16, 8); /*0x100270207*/
          LOBYTE(v43) = v45; /*0x100270210*/
          BYTE1(v43) = v29; /*0x100270213*/
          v34[0] = &v43; /*0x10027021b*/
          v34[1] = _$LT$http..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h4e78cc41db46f462; /*0x100270229*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9F87, v34); /*0x100270245*/
          v31 = __dst[1]; /*0x10027024a*/
          codexmate_lib::core::relay::proxy_passthrough::error_response::h71716868a9c3d7b2( /*0x100270274*/
            v35,
            (_QWORD *)0x1F4,
            (void *)__dst[1],
            __dst[2],
            &unk_1015DE155,
            0x16u);
          if ( __dst[0] ) /*0x100270283*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, __dst[0], 1); /*0x10027028d*/
        }
        else
        {
          memcpy((char *)&v35[1] + 2, (char *)&v36[1] + 2, 0x66u); /*0x1002702aa*/
          v35[0] = (__int64 (__fastcall **)())v36[0]; /*0x1002702af*/
          LOWORD(v35[1]) = v36[1]; /*0x1002702b6*/
          v35[14] = v28; /*0x1002702c4*/
          v35[15] = &off_101960298; /*0x1002702d2*/
        }
        core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v39); /*0x1002702e0*/
        goto LABEL_36; /*0x1002702e0*/
      }
      *v5 = (__int64 (__fastcall **)())3; /*0x10026fd80*/
      result = 3; /*0x10026fd88*/
LABEL_38:
      *(_BYTE *)(a2 + 41) = result; /*0x1002702fe*/
      return result;
    case 1: /*0x10026fc5f*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DA68); /*0x100270337*/
    case 2: /*0x10026fc5f*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195DA68); /*0x10027032b*/
    case 3: /*0x10026fc5f*/
      goto LABEL_7;
    case 4: /*0x10026fc5f*/
      JUMPOUT(0x100AB23D7LL); /*0x100ab23d7*/
    case 5: /*0x10026fc5f*/
      JUMPOUT(0x1002704C8LL); /*0x1002704c8*/
  }
}