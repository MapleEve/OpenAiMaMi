// __ZN13codexmate_lib4core5relay7manager12RelayManager3new @ 0x10027da60 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::new::h83030f45c801f289(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rsi
  void *v7; // rbx
  void *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rsi
  void *v13; // rax
  void *v14; // rax
  void *v15; // r14
  bool v16; // r13
  void *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // rax
  char v26; // of
  __int64 v27; // rt0
  __int64 v28; // r12
  void *v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _BYTE __dst[296]; // [rsp+8h] [rbp-5C8h] BYREF
  _QWORD v34[37]; // [rsp+130h] [rbp-4A0h] BYREF
  _QWORD v35[38]; // [rsp+258h] [rbp-378h] BYREF
  _QWORD v36[12]; // [rsp+388h] [rbp-248h] BYREF
  _QWORD *v37; // [rsp+3E8h] [rbp-1E8h]
  _QWORD __src[44]; // [rsp+3F0h] [rbp-1E0h] BYREF
  void *v39; // [rsp+550h] [rbp-80h]
  void *v40; // [rsp+558h] [rbp-78h]
  __int64 (__fastcall *v41)(_QWORD, _QWORD); // [rsp+560h] [rbp-70h]
  __int64 v42; // [rsp+568h] [rbp-68h]
  _QWORD *v43; // [rsp+570h] [rbp-60h] BYREF
  __int64 (__fastcall *v44)(_QWORD, _QWORD); // [rsp+578h] [rbp-58h]
  void *v45; // [rsp+580h] [rbp-50h]
  _QWORD *v46; // [rsp+588h] [rbp-48h] BYREF
  void *v47; // [rsp+590h] [rbp-40h]
  unsigned __int64 v48; // [rsp+598h] [rbp-38h]
  bool v49; // [rsp+5A7h] [rbp-29h]

  __src[43] = a2; /*0x10027da77*/
  v42 = a2; /*0x10027da7e*/
  v3 = a2 + 16; /*0x10027da82*/
  codexmate_lib::core::relay::storage::load::hd75f6a87da16e8b3(v35); /*0x10027da90*/
  if ( !__OFSUB__(0, v35[0]) ) /*0x10027daa8*/
  {
    memcpy(__dst, v35, sizeof(__dst)); /*0x10027dd41*/
    memcpy(v34, v35, sizeof(v34)); /*0x10027dd55*/
LABEL_7:
    v48 = 0x8000000000000000LL; /*0x10027dd5a*/
    if ( (unsigned __int8)codexmate_lib::core::relay::storage::hydrate_secrets::h1c618d5f9f9faa8f(v3, v34) ) /*0x10027dd68*/
    {
      v48 = 0x8000000000000000LL; /*0x10027dd83*/
      codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v36, v3, v34); /*0x10027dd8a*/
      if ( LODWORD(v36[0]) != 11 ) /*0x10027dd96*/
      {
        qmemcpy(v35, v36, 0x60u); /*0x10027ddb2*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10027ddc3*/
        {
          v43 = v35; /*0x10027ddc9*/
          v44 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027ddd4*/
          __src[6] = 2; /*0x10027ddd8*/
          __src[7] = "codexmate_lib::core::relay::manager"; /*0x10027ddea*/
          __src[8] = 35; /*0x10027ddf1*/
          __src[10] = &unk_1017BA8C1; /*0x10027de03*/
          __src[11] = &v43; /*0x10027de0e*/
          __src[0] = 0; /*0x10027de15*/
          __src[1] = "codexmate_lib::core::relay::manager"; /*0x10027de20*/
          __src[2] = 35; /*0x10027de27*/
          __src[3] = 0; /*0x10027de32*/
          __src[4] = "src/core/relay/manager.rs"; /*0x10027de44*/
          __src[5] = 25; /*0x10027de4b*/
          __src[9] = 0x8800000001LL; /*0x10027de60*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v46, __src); /*0x10027de72*/
        }
        v48 = 0x8000000000000000LL; /*0x10027de7e*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v35); /*0x10027de82*/
      }
    }
    v48 = 0x8000000000000000LL; /*0x10027de87*/
    goto LABEL_13; /*0x10027de87*/
  }
  qmemcpy(v34, &v35[1], 0x60u); /*0x10027dac4*/
  v36[0] = v34; /*0x10027dac7*/
  v36[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027dad5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1015DEA04, v36); /*0x10027daf4*/
  v43 = (_QWORD *)__src[0]; /*0x10027db07*/
  v44 = (__int64 (__fastcall *)(_QWORD, _QWORD))__src[1]; /*0x10027db0b*/
  v45 = (void *)__src[2]; /*0x10027db16*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 ) /*0x10027db27*/
  {
    v36[0] = &v43; /*0x10027db31*/
    v36[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027db3f*/
    __src[6] = 1; /*0x10027db46*/
    __src[7] = "codexmate_lib::core::relay::manager"; /*0x10027db58*/
    __src[8] = 35; /*0x10027db5f*/
    __src[10] = &unk_1017BA8A8; /*0x10027db71*/
    __src[11] = v36; /*0x10027db78*/
    __src[0] = 0; /*0x10027db7f*/
    __src[1] = "codexmate_lib::core::relay::manager"; /*0x10027db8a*/
    __src[2] = 35; /*0x10027db91*/
    __src[3] = 0; /*0x10027db9c*/
    __src[4] = "src/core/relay/manager.rs"; /*0x10027dbae*/
    __src[5] = 25; /*0x10027dbb5*/
    __src[9] = 0x7C00000001LL; /*0x10027dbca*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v46, __src); /*0x10027dbdc*/
  }
  LODWORD(__src[36]) = 10; /*0x10027dbe1*/
  __src[0] = 0; /*0x10027dbeb*/
  __src[1] = 8; /*0x10027dbf6*/
  __src[2] = 0; /*0x10027dc01*/
  __src[3] = 0; /*0x10027dc0c*/
  __src[4] = 8; /*0x10027dc17*/
  __src[5] = 0; /*0x10027dc22*/
  __src[6] = 0; /*0x10027dc2d*/
  __src[7] = 1; /*0x10027dc38*/
  __src[8] = 0; /*0x10027dc43*/
  __src[9] = 0; /*0x10027dc4e*/
  __src[10] = 1; /*0x10027dc59*/
  __src[11] = 0; /*0x10027dc64*/
  __src[12] = 0x8000000000000000LL; /*0x10027dc6f*/
  LOWORD(__src[15]) = 0; /*0x10027dc76*/
  BYTE2(__src[15]) = 0; /*0x10027dc7f*/
  WORD2(__src[36]) = 0; /*0x10027dc86*/
  __src[16] = 0x8000000000000000LL; /*0x10027dc8f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v36, &v43); /*0x10027dca1*/
  __src[14] = v36[2]; /*0x10027dcb4*/
  __src[13] = v36[1]; /*0x10027dcc6*/
  __src[12] = v36[0]; /*0x10027dcca*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10027dce0*/
  v4 = v43; /*0x10027dce5*/
  v41 = v44; /*0x10027dced*/
  v40 = v45; /*0x10027dcf5*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v34); /*0x10027dd00*/
  memcpy(v34, __dst, sizeof(v34)); /*0x10027dd18*/
  v48 = (unsigned __int64)v4; /*0x10027dd1d*/
  if ( v4 == (_QWORD *)0x8000000000000000LL ) /*0x10027dd24*/
    goto LABEL_7; /*0x10027dd24*/
LABEL_13:
  tokio::runtime::builder::Builder::new_multi_thread::h7adc9fbb1b1c0c49(__src); /*0x10027de8b*/
  v5 = tokio::runtime::builder::Builder::worker_threads::h8b9bdc2a3d19ed6d(__src, 2, &off_10195DC48); /*0x10027deaf*/
  *(_WORD *)(v5 + 213) = 257; /*0x10027deb2*/
  tokio::runtime::builder::Builder::thread_name::h31ffc5229d361a39(v5, "aimami-relay-rt", 15); /*0x10027deca*/
  v6 = v5; /*0x10027ded9*/
  tokio::runtime::builder::Builder::build::h7c8409c594394733(v36, v5); /*0x10027dedc*/
  if ( LODWORD(v36[0]) == 2 ) /*0x10027dee8*/
  {
    v39 = nullptr; /*0x10027def1*/
    if ( (v36[1] & 3) == 1 ) /*0x10027df01*/
    {
      v9 = v36[1] - 1LL; /*0x10027df6e*/
      v10 = *(_QWORD *)(v36[1] - 1LL); /*0x10027df72*/
      v11 = *(_QWORD *)(v36[1] + 7LL); /*0x10027df76*/
      if ( *(_QWORD *)v11 ) /*0x10027df7a*/
        (*(void (__fastcall **)(__int64))v11)(v10); /*0x10027df85*/
      v12 = *(_QWORD *)(v11 + 8); /*0x10027df87*/
      if ( v12 ) /*0x10027df8e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x10027df97*/
      v6 = 24; /*0x10027df9c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8); /*0x10027dfa9*/
      v7 = nullptr; /*0x10027dfae*/
    }
    else
    {
      v7 = nullptr; /*0x10027df03*/
    }
  }
  else
  {
    qmemcpy(&v35[2], v36, 0x58u); /*0x10027df1d*/
    v35[0] = 1; /*0x10027df20*/
    v35[1] = 1; /*0x10027df2b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v35[13], &v36[11]); /*0x10027df36*/
    v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(104, 8); /*0x10027df45*/
    if ( !v8 ) /*0x10027df4d*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 104); /*0x10027e479*/
    v7 = v8; /*0x10027df53*/
    qmemcpy(v8, v35, 0x68u); /*0x10027df65*/
    v6 = (__int64)&v35[13]; /*0x10027df65*/
    v39 = v8; /*0x10027df68*/
  }
  core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h2ec0ded306a9acaf(__src); /*0x10027dfc1*/
  if ( !v7 ) /*0x10027dfc9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v6); /*0x10027dfcf*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x10027dfde*/
    if ( !v13 ) /*0x10027dfe6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47); /*0x10027e48a*/
    qmemcpy(v13, "relay tokio runtime init failed; proxy disabled", 47); /*0x10027e03c*/
    v35[0] = 47; /*0x10027e03f*/
    v35[1] = v13; /*0x10027e04a*/
    v35[2] = 47; /*0x10027e051*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 ) /*0x10027e069*/
    {
      v36[0] = v35; /*0x10027e076*/
      v36[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027e084*/
      __src[6] = 1; /*0x10027e08b*/
      __src[7] = "codexmate_lib::core::relay::manager"; /*0x10027e09d*/
      __src[8] = 35; /*0x10027e0a4*/
      __src[10] = &unk_1017BA8F2; /*0x10027e0b6*/
      __src[11] = v36; /*0x10027e0bd*/
      __src[0] = 0; /*0x10027e0c4*/
      __src[1] = "codexmate_lib::core::relay::manager"; /*0x10027e0cf*/
      __src[2] = 35; /*0x10027e0d6*/
      __src[3] = 0; /*0x10027e0e1*/
      __src[4] = "src/core/relay/manager.rs"; /*0x10027e0f3*/
      __src[5] = 25; /*0x10027e0fa*/
      __src[9] = 0x9500000001LL; /*0x10027e10f*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v46, __src); /*0x10027e121*/
    }
    if ( v34[12] == 0x8000000000000000LL ) /*0x10027e12d*/
    {
      v34[14] = v35[2]; /*0x10027e13d*/
      v34[13] = v35[1]; /*0x10027e14f*/
      v34[12] = v35[0]; /*0x10027e153*/
    }
    else if ( v35[0] ) /*0x10027e162*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35[1], v35[0], 1); /*0x10027e170*/
    }
  }
  __src[42] = v42; /*0x10027e179*/
  memcpy((char *)v35 + 7, v34, 0x128u); /*0x10027e193*/
  __src[0] = 1; /*0x10027e198*/
  __src[1] = 1; /*0x10027e1a3*/
  __src[2] = 0; /*0x10027e1ae*/
  LOBYTE(__src[3]) = 0; /*0x10027e1b9*/
  memcpy((char *)&__src[3] + 1, v35, 0x12Fu); /*0x10027e1d3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2((char *)&__src[3] + 1, v35); /*0x10027e1d8*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(328, 8); /*0x10027e1e7*/
  v15 = v14; /*0x10027e1ec*/
  v16 = v14 == nullptr; /*0x10027e1f2*/
  if ( !v14 ) /*0x10027e1f6*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 328); /*0x10027e41f*/
  v17 = v14; /*0x10027e208*/
  memcpy(v14, __src, 0x148u); /*0x10027e20b*/
  v47 = v15; /*0x10027e210*/
  __src[41] = v15; /*0x10027e214*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src); /*0x10027e21b*/
  v18 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 8); /*0x10027e22a*/
  if ( !v18 ) /*0x10027e232*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 40); /*0x10027e430*/
  v19 = v18; /*0x10027e238*/
  *v18 = 1; /*0x10027e23b*/
  v18[1] = 1; /*0x10027e242*/
  v18[2] = v48; /*0x10027e24e*/
  v18[3] = v41; /*0x10027e256*/
  v18[4] = v40; /*0x10027e25e*/
  v46 = v18; /*0x10027e262*/
  __src[0] = 1; /*0x10027e266*/
  __src[1] = 1; /*0x10027e271*/
  __src[2] = 0; /*0x10027e27c*/
  LOBYTE(__src[3]) = 0; /*0x10027e287*/
  __src[4] = 0; /*0x10027e28e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(40, 8); /*0x10027e299*/
  v20 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 8); /*0x10027e2a8*/
  if ( !v20 ) /*0x10027e2b0*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 56); /*0x10027e441*/
  v21 = v20; /*0x10027e2b6*/
  v49 = v16; /*0x10027e2b9*/
  v20[6] = __src[6]; /*0x10027e2c4*/
  v20[5] = __src[5]; /*0x10027e2cf*/
  v20[4] = __src[4]; /*0x10027e2da*/
  v20[3] = __src[3]; /*0x10027e2e5*/
  v20[2] = __src[2]; /*0x10027e2f0*/
  v22 = __src[0]; /*0x10027e2f4*/
  v21[1] = __src[1]; /*0x10027e302*/
  *v21 = v22; /*0x10027e306*/
  v43 = v21; /*0x10027e309*/
  __src[0] = 1; /*0x10027e30d*/
  __src[1] = 1; /*0x10027e318*/
  __src[2] = 0; /*0x10027e323*/
  LOBYTE(__src[3]) = 0; /*0x10027e32e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(56, 8); /*0x10027e335*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10027e344*/
  if ( !v23 ) /*0x10027e34c*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x10027e457*/
  v24 = (_QWORD *)v23; /*0x10027e352*/
  v40 = v7; /*0x10027e355*/
  *(_QWORD *)(v23 + 24) = __src[3]; /*0x10027e360*/
  *(_QWORD *)(v23 + 16) = __src[2]; /*0x10027e36b*/
  v25 = __src[0]; /*0x10027e36f*/
  v24[1] = __src[1]; /*0x10027e37d*/
  *v24 = v25; /*0x10027e381*/
  v36[0] = v24; /*0x10027e385*/
  v26 = 0; /*0x10027e393*/
  if ( _$LT$codexmate_lib..core..relay..codex_mutation..CodexMutationGate$u20$as$u20$core..default..Default$GT$::default::GATE::hed2a629fe336de41 ) /*0x10027e396*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h055199c4ede5bc6a(&_$LT$codexmate_lib..core..relay..codex_mutation..CodexMutationGate$u20$as$u20$core..default..Default$GT$::default::GATE::hed2a629fe336de41); /*0x10027e465*/
  v37 = a1; /*0x10027e39c*/
  v27 = _InterlockedIncrement64((volatile signed __int64 *)qword_1019FF098); /*0x10027e3aa*/
  if ( (v27 < 0) ^ v26 | (v27 == 0) ) /*0x10027e3ae*/
    BUG(); /*0x10027e48f*/
  v28 = qword_1019FF098; /*0x10027e3b4*/
  v35[0] = qword_1019FF098; /*0x10027e3bb*/
  v29 = v40; /*0x10027e3c2*/
  __src[0] = v40; /*0x10027e3c6*/
  v30 = codexmate_lib::core::relay::breaker::new_store::h503f38586f412c42(); /*0x10027e3cd*/
  v31 = v37; /*0x10027e3d6*/
  *v37 = v42; /*0x10027e3dd*/
  v31[1] = v47; /*0x10027e3e4*/
  v31[2] = v19; /*0x10027e3e8*/
  v31[3] = v21; /*0x10027e3ec*/
  v31[4] = v24; /*0x10027e3f0*/
  v31[5] = v28; /*0x10027e3f4*/
  v31[7] = v29; /*0x10027e3f8*/
  v31[6] = v30; /*0x10027e3fc*/
  return v31; /*0x10027e403*/
}