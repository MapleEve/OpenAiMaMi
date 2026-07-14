// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x100407990 depth=1
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::cleanup_orphan_router_threads::h1d9f327bcb57816c(
        __int64 a1)
{
  double result; // xmm0_8
  _BYTE v2[96]; // [rsp+0h] [rbp-140h] BYREF
  _DWORD v3[24]; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v4; // [rsp+C0h] [rbp-80h]
  const char *v5; // [rsp+C8h] [rbp-78h]
  __int64 v6; // [rsp+D0h] [rbp-70h]
  __int64 v7; // [rsp+D8h] [rbp-68h]
  const char *v8; // [rsp+E0h] [rbp-60h]
  __int64 v9; // [rsp+E8h] [rbp-58h]
  __int64 v10; // [rsp+F0h] [rbp-50h]
  const char *v11; // [rsp+F8h] [rbp-48h]
  __int64 v12; // [rsp+100h] [rbp-40h]
  __int64 v13; // [rsp+108h] [rbp-38h]
  void *v14; // [rsp+110h] [rbp-30h]
  _QWORD *v15; // [rsp+118h] [rbp-28h]
  _QWORD v16[2]; // [rsp+120h] [rbp-20h] BYREF

  codexmate_lib::core::relay::codex_thread_visibility::cleanup_orphan_router_threads_strict::hf5be99b87a5d8469(v3, a1); /*0x1004079a6*/
  if ( v3[0] != 10 ) /*0x1004079b2*/
  {
    qmemcpy(v2, v3, sizeof(v2)); /*0x1004079ce*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1004079df*/
    {
      v16[0] = v2; /*0x1004079e5*/
      v16[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1004079f0*/
      v10 = 2; /*0x1004079f4*/
      v11 = "codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x100407a03*/
      v12 = 51; /*0x100407a07*/
      v14 = &anon_0eedd02070250de7472aa97ee6b1a8ea_659; /*0x100407a16*/
      v15 = v16; /*0x100407a1e*/
      v4 = 0; /*0x100407a22*/
      v5 = "codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x100407a2a*/
      v6 = 51; /*0x100407a2e*/
      v7 = 0; /*0x100407a36*/
      v8 = "src/core/relay/codex_thread_visibility.rs"; /*0x100407a45*/
      v9 = 41; /*0x100407a49*/
      v13 = 0xC400000001LL; /*0x100407a5b*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x100407a67*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v2); /*0x100407a73*/
  }
  return result; /*0x100407a78*/
}