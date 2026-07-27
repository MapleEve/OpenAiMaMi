// __ZN13codexmate_lib4core5voice7runtime17VoiceRuntimeInner3new @ 0x100672b50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::VoiceRuntimeInner::new::h7f3f6820472582f0(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rax
  void *v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r13
  _DWORD *v9; // rax
  _DWORD *v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // rax
  void *v20; // rbx
  void *v21; // rax
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-48h]
  void *v25; // [rsp+30h] [rbp-40h]
  _QWORD *v26; // [rsp+38h] [rbp-38h]
  _QWORD *v27; // [rsp+40h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100672b64*/
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x100672b73*/
  if ( !v2 ) /*0x100672b7b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x100673157*/
  v3 = v2; /*0x100672b81*/
  qmemcpy(v2, "Cmd+Shift+Space", 15); /*0x100672b9c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(15, 1); /*0x100672b9f*/
  v4 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100672bae*/
  v25 = v3; /*0x100672bb6*/
  if ( !v4 ) /*0x100672bba*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100673166*/
  v5 = v4; /*0x100672bc0*/
  *v4 = 0x7265696669646F6DLL; /*0x100672bcd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x100672bd0*/
  v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100672bdf*/
  v26 = v5; /*0x100672be7*/
  if ( !v6 ) /*0x100672beb*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100673177*/
  v27 = v6; /*0x100672bf1*/
  *v6 = 0x7265696669646F6DLL; /*0x100672bf5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x100672bf8*/
  v7 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100672c07*/
  if ( !v7 ) /*0x100672c0f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100673188*/
  v8 = v7; /*0x100672c15*/
  *v7 = 0x7265696669646F6DLL; /*0x100672c18*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x100672c1b*/
  v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100672c2a*/
  if ( !v9 ) /*0x100672c32*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100673199*/
  v10 = v9; /*0x100672c38*/
  *v9 = 1869903201; /*0x100672c3b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100672c41*/
  v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100672c50*/
  if ( !v11 ) /*0x100672c58*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1006731aa*/
  v12 = v11; /*0x100672c5e*/
  *v11 = 1802723700; /*0x100672c61*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100672c6e*/
  v16 = v13; /*0x100672c70*/
  if ( *(_BYTE *)(v13 + 16) == 1 ) /*0x100672c77*/
  {
    v17 = *(_QWORD *)v13; /*0x100672c7d*/
    v18 = *(_QWORD *)(v16 + 8); /*0x100672c80*/
  }
  else
  {
    v17 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100673138*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            1,
            v14,
            v15);
    *(_QWORD *)v16 = v17; /*0x10067313d*/
    *(_QWORD *)(v16 + 8) = v18; /*0x100673140*/
    *(_BYTE *)(v16 + 16) = 1; /*0x100673144*/
  }
  *(_QWORD *)v16 = v17 + 1; /*0x100672c88*/
  v23 = v17; /*0x100672cb7*/
  v24 = v18; /*0x100672cbb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100672cbf*/
    &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
    1);
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100672cce*/
  if ( !v19 ) /*0x100672cd6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x1006731bb*/
  v20 = v19; /*0x100672cdc*/
  qmemcpy(v19, "appleSpeech", 11); /*0x100672ce9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1); /*0x100672cf3*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100672d02*/
  if ( !v21 ) /*0x100672d0a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1006731cc*/
  qmemcpy(v21, "Apple Speech", 12); /*0x100672d1a*/
  *(_BYTE *)(a1 + 860) = 0; /*0x100672d24*/
  *(_WORD *)(a1 + 858) = 771; /*0x100672d2d*/
  *(_QWORD *)(a1 + 40) = 15; /*0x100672d38*/
  *(_QWORD *)(a1 + 48) = v25; /*0x100672d45*/
  *(_QWORD *)(a1 + 56) = 15; /*0x100672d4a*/
  *(_QWORD *)(a1 + 776) = 0; /*0x100672d53*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100672d5f*/
  *(_QWORD *)(a1 + 72) = 1; /*0x100672d68*/
  *(_QWORD *)(a1 + 80) = 0; /*0x100672d71*/
  *(_QWORD *)(a1 + 88) = 8; /*0x100672d7a*/
  *(_QWORD *)(a1 + 96) = v26; /*0x100672d87*/
  *(_QWORD *)(a1 + 104) = 8; /*0x100672d8c*/
  *(_QWORD *)(a1 + 784) = 0; /*0x100672d95*/
  *(_QWORD *)(a1 + 792) = 0; /*0x100672da1*/
  *(_QWORD *)(a1 + 112) = 0; /*0x100672dad*/
  *(_QWORD *)(a1 + 120) = 1; /*0x100672db6*/
  *(_QWORD *)(a1 + 128) = 0; /*0x100672dbf*/
  *(_QWORD *)(a1 + 136) = 8; /*0x100672dcb*/
  *(_QWORD *)(a1 + 144) = v27; /*0x100672ddb*/
  *(_QWORD *)(a1 + 152) = 8; /*0x100672de3*/
  *(_QWORD *)(a1 + 808) = 0; /*0x100672def*/
  *(_QWORD *)(a1 + 800) = 0; /*0x100672dfb*/
  *(_QWORD *)(a1 + 160) = 0; /*0x100672e07*/
  *(_QWORD *)(a1 + 168) = 1; /*0x100672e13*/
  *(_QWORD *)(a1 + 176) = 0; /*0x100672e1f*/
  *(_QWORD *)(a1 + 184) = 8; /*0x100672e2b*/
  *(_QWORD *)(a1 + 192) = v8; /*0x100672e37*/
  *(_QWORD *)(a1 + 200) = 8; /*0x100672e3f*/
  *(_QWORD *)(a1 + 816) = 0; /*0x100672e4b*/
  *(_QWORD *)(a1 + 208) = 4; /*0x100672e57*/
  *(_QWORD *)(a1 + 216) = v10; /*0x100672e63*/
  *(_QWORD *)(a1 + 224) = 4; /*0x100672e6b*/
  *(_QWORD *)(a1 + 232) = 4; /*0x100672e77*/
  *(_QWORD *)(a1 + 240) = v12; /*0x100672e83*/
  *(_QWORD *)(a1 + 248) = 4; /*0x100672e8b*/
  *(_QWORD *)(a1 + 544) = 0x8000000000000000LL; /*0x100672ea1*/
  *(_QWORD *)(a1 + 568) = 0x8000000000000000LL; /*0x100672ea9*/
  *(_QWORD *)(a1 + 824) = 0; /*0x100672eb1*/
  *(_QWORD *)(a1 + 832) = 0; /*0x100672ebd*/
  *(_QWORD *)(a1 + 768) = v24; /*0x100672ecd*/
  *(_QWORD *)(a1 + 760) = v23; /*0x100672ed9*/
  *(_QWORD *)(a1 + 752) = 0; /*0x100672ee5*/
  *(_QWORD *)(a1 + 744) = 0; /*0x100672ef1*/
  *(_QWORD *)(a1 + 736) = 0; /*0x100672f01*/
  *(_QWORD *)(a1 + 728) = anon_4776471024d1e9bb78f2861cb2b51e1e_263; /*0x100672f09*/
  *(_QWORD *)(a1 + 256) = 0; /*0x100672f11*/
  *(_QWORD *)(a1 + 264) = 1; /*0x100672f1d*/
  *(_QWORD *)(a1 + 272) = 0; /*0x100672f29*/
  *(_QWORD *)(a1 + 280) = 0; /*0x100672f35*/
  *(_QWORD *)(a1 + 288) = 1; /*0x100672f41*/
  *(_QWORD *)(a1 + 304) = 0; /*0x100672f4d*/
  *(_QWORD *)(a1 + 296) = 0; /*0x100672f59*/
  *(_QWORD *)(a1 + 312) = 1; /*0x100672f65*/
  *(_QWORD *)(a1 + 328) = 0; /*0x100672f71*/
  *(_QWORD *)(a1 + 320) = 0; /*0x100672f7d*/
  *(_QWORD *)(a1 + 336) = 1; /*0x100672f89*/
  *(_QWORD *)(a1 + 352) = 0; /*0x100672f95*/
  *(_QWORD *)(a1 + 344) = 0; /*0x100672fa1*/
  *(_QWORD *)(a1 + 360) = 1; /*0x100672fad*/
  *(_QWORD *)(a1 + 376) = 0; /*0x100672fb9*/
  *(_QWORD *)(a1 + 368) = 0; /*0x100672fc5*/
  *(_QWORD *)(a1 + 384) = 1; /*0x100672fd1*/
  *(_QWORD *)(a1 + 392) = 0; /*0x100672fdd*/
  *(_QWORD *)(a1 + 400) = 11; /*0x100672fe9*/
  *(_QWORD *)(a1 + 408) = v20; /*0x100672ff5*/
  *(_QWORD *)(a1 + 416) = 11; /*0x100672ffd*/
  *(_QWORD *)(a1 + 424) = 12; /*0x100673009*/
  *(_QWORD *)(a1 + 432) = v21; /*0x100673015*/
  *(_QWORD *)(a1 + 440) = 12; /*0x10067301d*/
  *(_QWORD *)(a1 + 448) = 0; /*0x100673029*/
  *(_QWORD *)(a1 + 456) = 1; /*0x100673035*/
  *(_QWORD *)(a1 + 472) = 0; /*0x100673041*/
  *(_QWORD *)(a1 + 464) = 0; /*0x10067304d*/
  *(_QWORD *)(a1 + 480) = 1; /*0x100673059*/
  *(_QWORD *)(a1 + 488) = 0; /*0x100673065*/
  *(_QWORD *)a1 = 0; /*0x100673071*/
  *(_QWORD *)(a1 + 592) = 0x8000000000000000LL; /*0x100673079*/
  *(_QWORD *)(a1 + 616) = 0x8000000000000000LL; /*0x100673081*/
  *(_QWORD *)(a1 + 496) = 0; /*0x100673089*/
  *(_QWORD *)(a1 + 504) = 1; /*0x100673095*/
  *(_QWORD *)(a1 + 512) = 0; /*0x1006730a1*/
  *(_QWORD *)(a1 + 640) = 0x8000000000000000LL; /*0x1006730ad*/
  *(_QWORD *)(a1 + 520) = 0; /*0x1006730b5*/
  *(_QWORD *)(a1 + 528) = 1; /*0x1006730c1*/
  *(_QWORD *)(a1 + 536) = 0; /*0x1006730cd*/
  *(_WORD *)(a1 + 848) = 20; /*0x1006730d9*/
  *(_BYTE *)(a1 + 696) = 2; /*0x1006730e4*/
  *(_BYTE *)(a1 + 720) = 2; /*0x1006730ed*/
  *(_QWORD *)(a1 + 16) = 3; /*0x1006730f6*/
  *(_QWORD *)(a1 + 840) = 0; /*0x1006730ff*/
  *(_QWORD *)(a1 + 850) = 0x300010100000001LL; /*0x100673115*/
  *(_DWORD *)(a1 + 672) = 1000000000; /*0x10067311d*/
  return 0x300010100000001LL; /*0x100673129*/
}