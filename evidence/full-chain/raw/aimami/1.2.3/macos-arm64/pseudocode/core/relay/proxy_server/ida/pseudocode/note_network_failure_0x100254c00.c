// __ZN13codexmate_lib4core5relay12proxy_server12ProxyContext20note_network_failure @ 0x100254c00 | 基线 same-set
signed __int64 __fastcall codexmate_lib::core::relay::proxy_server::ProxyContext::note_network_failure::h1ac7213a89a53d0c(
        __int64 a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // ecx
  signed __int64 v5; // rcx
  __int64 v6; // rdx
  signed __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rtt
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _BYTE *v14; // r13
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  volatile signed __int64 *v18; // rbx
  char v19; // r14
  _BYTE *v20; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+8h] [rbp-C8h]
  __int64 v22; // [rsp+10h] [rbp-C0h]
  __int64 v23; // [rsp+18h] [rbp-B8h] BYREF
  char *v24; // [rsp+20h] [rbp-B0h]
  __int64 v25; // [rsp+28h] [rbp-A8h]
  __int64 v26; // [rsp+30h] [rbp-A0h]
  const char *v27; // [rsp+38h] [rbp-98h]
  __int64 v28; // [rsp+40h] [rbp-90h]
  __int64 v29; // [rsp+48h] [rbp-88h]
  char *v30; // [rsp+50h] [rbp-80h]
  __int64 v31; // [rsp+58h] [rbp-78h]
  __int64 v32; // [rsp+60h] [rbp-70h]
  char *v33; // [rsp+68h] [rbp-68h]
  __int64 v34; // [rsp+70h] [rbp-60h]
  _QWORD v35[2]; // [rsp+78h] [rbp-58h] BYREF
  _BYTE *v36; // [rsp+88h] [rbp-48h] BYREF
  __int64 v37; // [rsp+90h] [rbp-40h]
  __int64 v38; // [rsp+98h] [rbp-38h]
  int v39; // [rsp+A0h] [rbp-30h]
  _BYTE v40[41]; // [rsp+A7h] [rbp-29h] BYREF

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v23); /*0x100254c1e*/
  v2 = ((int)v23 >> 13) - 1; /*0x100254c2e*/
  v3 = 0; /*0x100254c31*/
  if ( (int)v23 >> 13 <= 0 ) /*0x100254c35*/
  {
    v4 = (1 - ((int)v23 >> 13)) / 0x190u + 1; /*0x100254c49*/
    v2 += 400 * v4; /*0x100254c51*/
    v3 = -146097 * v4; /*0x100254c53*/
  }
  v5 = 1000 /*0x100254cbb*/
     * (HIDWORD(v23)
      + 86400LL
      * (int)(((v2 / 100) >> 2) + ((1461 * v2) >> 2) + v3 + (((unsigned int)v23 >> 4) & 0x1FF) - v2 / 100 - 719163))
     + (unsigned int)v24 / 0xF4240uLL;
  v6 = *(_QWORD *)(a1 + 40); /*0x100254cbe*/
  result = *(_QWORD *)(v6 + 16); /*0x100254cc2*/
  v8 = (v5 - result >= 0) + 0x7FFFFFFFFFFFFFFFLL; /*0x100254cd9*/
  v9 = v5 - result; /*0x100254cdf*/
  if ( __OFSUB__(v5, result) ) /*0x100254cdf*/
    v9 = (v5 - result >= 0) + 0x7FFFFFFFFFFFFFFFLL; /*0x100254ce2*/
  if ( v9 >= 15000 ) /*0x100254ced*/
  {
    v10 = *(_QWORD *)(v6 + 16); /*0x100254cf3*/
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), v5, result); /*0x100254cf3*/
    if ( v10 == result ) /*0x100254cf9*/
    {
      v11 = &v20; /*0x100254cff*/
      codexmate_lib::core::relay::proxy_server::build_upstream_client::h5f1660336de15931(&v20); /*0x100254d06*/
      if ( v20 == (_BYTE *)0x8000000000000000LL ) /*0x100254d17*/
      {
        v35[0] = v21; /*0x100254d24*/
        v14 = *(_BYTE **)(a1 + 24); /*0x100254d28*/
        if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 4, 0) ) /*0x100254d30*/
        {
          v11 = v14 + 16; /*0x100254f6b*/
          v8 = 1; /*0x100254f6e*/
          std::sys::sync::rwlock::queue::RwLock::lock_contended::h2e6bbd4ced889521(v14 + 16, 1); /*0x100254f73*/
        }
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100254d4a*/
        {
          v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v8, v12, v13); /*0x100254f7d*/
          LOBYTE(v15) = v15 ^ 1; /*0x100254f82*/
        }
        else
        {
          v15 = 0; /*0x100254d50*/
        }
        v36 = v14 + 16; /*0x100254d5a*/
        LOBYTE(v37) = v15; /*0x100254d5e*/
        v16 = v35[0]; /*0x100254d61*/
        if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v14 + 4)) ) /*0x100254d6d*/
        {
          v11 = v14 + 32; /*0x100254d73*/
          v39 = v15; /*0x100254d76*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(v14 + 32, v8); /*0x100254d79*/
          LOBYTE(v15) = v39; /*0x100254d7e*/
        }
        *((_QWORD *)v14 + 4) = v16; /*0x100254d81*/
        v17 = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100254d8b*/
        v18 = (volatile signed __int64 *)(v14 + 16); /*0x100254d92*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x100254d95*/
        {
          v19 = v15; /*0x100254d9b*/
          v29 = 3; /*0x100254d9e*/
          v30 = "codexmate_lib::core::relay::proxy_serverstream"; /*0x100254db0*/
          v31 = 40; /*0x100254db4*/
          v33 = "[AiMaMi][codex-router] upstream client rebuilt after network failure (re-read system proxy)codexmate_lib::core::relay::proxy_serverstream"; /*0x100254dc3*/
          v34 = 183; /*0x100254dc7*/
          v23 = 0; /*0x100254dcf*/
          v24 = "codexmate_lib::core::relay::proxy_serverstream"; /*0x100254dda*/
          v25 = 40; /*0x100254de1*/
          v26 = 0; /*0x100254dec*/
          v27 = "src/core/relay/proxy_server.rs"; /*0x100254dfe*/
          v28 = 30; /*0x100254e05*/
          v32 = 0xED00000001LL; /*0x100254e1a*/
          v11 = v40; /*0x100254e1e*/
          v8 = (__int64)&v23; /*0x100254e22*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v40, &v23); /*0x100254e29*/
          LOBYTE(v15) = v19; /*0x100254e2e*/
        }
        if ( !(_BYTE)v15 /*0x100254f89*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v8, v12, v17) )
        {
          v14[24] = 1; /*0x100254f96*/
        }
        result = _InterlockedCompareExchange64(v18, 0, 1); /*0x100254e4f*/
        if ( result != 1 ) /*0x100254e54*/
          return std::sys::sync::rwlock::queue::RwLock::unlock_contended::h1eb4e9bf83e339e8(v18, result); /*0x100254e60*/
      }
      else
      {
        v38 = v22; /*0x100254e71*/
        v37 = v21; /*0x100254e83*/
        v36 = v20; /*0x100254e87*/
        result = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100254e92*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100254e99*/
        {
          v35[0] = &v36; /*0x100254ea3*/
          v35[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100254eae*/
          v29 = 2; /*0x100254eb2*/
          v30 = "codexmate_lib::core::relay::proxy_serverstream"; /*0x100254ec4*/
          v31 = 40; /*0x100254ec8*/
          v33 = (char *)&unk_1017B990D; /*0x100254ed7*/
          v34 = (__int64)v35; /*0x100254edf*/
          v23 = 0; /*0x100254ee3*/
          v24 = "codexmate_lib::core::relay::proxy_serverstream"; /*0x100254eee*/
          v25 = 40; /*0x100254ef5*/
          v26 = 0; /*0x100254f00*/
          v27 = "src/core/relay/proxy_server.rs"; /*0x100254f12*/
          v28 = 30; /*0x100254f19*/
          v32 = 0xF200000001LL; /*0x100254f2e*/
          result = _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v40, &v23); /*0x100254f3d*/
        }
        if ( v36 ) /*0x100254f49*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x100254f54*/
      }
    }
  }
  return result; /*0x100254f59*/
}