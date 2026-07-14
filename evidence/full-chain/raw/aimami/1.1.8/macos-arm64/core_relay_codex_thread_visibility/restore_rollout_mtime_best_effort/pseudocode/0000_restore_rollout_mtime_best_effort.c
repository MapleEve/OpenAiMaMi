// mac 1.1.8 behavioral restore_rollout_mtime_best_effort 0x10040bc70 d=0
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_rollout_mtime_best_effort::h6e84f9477c2c8362(
        const void *a1,
        size_t a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r13
  char v9[8]; // [rsp+8h] [rbp-118h] BYREF
  int v10; // [rsp+10h] [rbp-110h]
  __int64 v11; // [rsp+18h] [rbp-108h]
  int v12; // [rsp+20h] [rbp-100h]
  int v13; // [rsp+30h] [rbp-F0h]
  char v14[4]; // [rsp+38h] [rbp-E8h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-E4h]
  __int64 v16; // [rsp+40h] [rbp-E0h]
  __int64 v17; // [rsp+48h] [rbp-D8h]
  const char *v18; // [rsp+50h] [rbp-D0h]
  __int64 v19; // [rsp+58h] [rbp-C8h]
  __int64 v20; // [rsp+60h] [rbp-C0h]
  const char *v21; // [rsp+68h] [rbp-B8h]
  __int64 v22; // [rsp+70h] [rbp-B0h]
  __int64 v23; // [rsp+78h] [rbp-A8h]
  const char *v24; // [rsp+80h] [rbp-A0h]
  __int64 v25; // [rsp+88h] [rbp-98h]
  __int64 v26; // [rsp+90h] [rbp-90h]
  void *v27; // [rsp+98h] [rbp-88h]
  const void ***v28; // [rsp+A0h] [rbp-80h]
  const void **v29; // [rsp+A8h] [rbp-78h] BYREF
  __int64 (*v30)(); // [rsp+B0h] [rbp-70h]
  __int64 *v31; // [rsp+B8h] [rbp-68h]
  __int64 (__fastcall *v32)(_QWORD, _QWORD); // [rsp+C0h] [rbp-60h]
  const void *v33; // [rsp+C8h] [rbp-58h] BYREF
  size_t v34; // [rsp+D0h] [rbp-50h]
  unsigned int v35; // [rsp+D8h] [rbp-48h] BYREF
  int v36; // [rsp+DCh] [rbp-44h] BYREF
  __int16 v37; // [rsp+E0h] [rbp-40h]
  int v38; // [rsp+E2h] [rbp-3Eh]
  __int16 v39; // [rsp+E6h] [rbp-3Ah]
  __int64 v40; // [rsp+E8h] [rbp-38h] BYREF

  if ( a4 != 1000000000 ) /*0x10040bc8a*/
  {
    v10 = 1000000000; /*0x10040bc96*/
    v13 = 1000000000; /*0x10040bca0*/
    v11 = a3; /*0x10040bcaa*/
    v12 = a4; /*0x10040bcb1*/
    v36 = 0; /*0x10040bcb7*/
    v37 = 438; /*0x10040bcbe*/
    v38 = 256; /*0x10040bcc4*/
    v39 = 0; /*0x10040bccb*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa((__int64)v14, (__int64)&v36, a1, a2); /*0x10040bce6*/
    if ( v14[0] ) /*0x10040bcf2*/
    {
      v4 = v16; /*0x10040bcf8*/
      v40 = v16; /*0x10040bcff*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10040bd11*/
      {
        v33 = a1; /*0x10040bd17*/
        v34 = a2; /*0x10040bd1b*/
        v29 = &v33; /*0x10040bd23*/
        v30 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10040bd2e*/
        v31 = &v40; /*0x10040bd36*/
        v32 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10040bd41*/
        v23 = 2; /*0x10040bd45*/
        v24 = "codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040bd57*/
        v25 = 51; /*0x10040bd5e*/
        v27 = &unk_1012287BC; /*0x10040bd70*/
        v28 = &v29; /*0x10040bd7b*/
        v17 = 0; /*0x10040bd7f*/
        v18 = "codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040bd8a*/
        v19 = 51; /*0x10040bd91*/
        v20 = 0; /*0x10040bd9c*/
        v21 = "src/core/relay/codex_thread_visibility.rs"; /*0x10040bdae*/
        v22 = 41; /*0x10040bdb5*/
        v26 = 0x6DD00000001LL; /*0x10040bdca*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x10040bddc*/
        v4 = v40; /*0x10040bde1*/
      }
      if ( (v4 & 3) == 1 ) /*0x10040bded*/
      {
        v5 = *(_QWORD *)(v4 + 7); /*0x10040bdfb*/
        if ( *(_QWORD *)v5 ) /*0x10040bdff*/
          (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v4 - 1)); /*0x10040be0b*/
        if ( *(_QWORD *)(v5 + 8) ) /*0x10040be0d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040be1f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040be31*/
      }
    }
    else
    {
      v6 = v15; /*0x10040be3b*/
      v35 = v15; /*0x10040be41*/
      v7 = std::fs::File::set_times::had0248e52bff5c3b(&v35, v9); /*0x10040be4f*/
      if ( v7 ) /*0x10040be57*/
      {
        v40 = v7; /*0x10040be5d*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10040be6f*/
        {
          v33 = a1; /*0x10040be75*/
          v34 = a2; /*0x10040be79*/
          v29 = &v33; /*0x10040be81*/
          v30 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10040be8c*/
          v31 = &v40; /*0x10040be94*/
          v32 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10040be9f*/
          v23 = 2; /*0x10040bea3*/
          v24 = "codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040beb5*/
          v25 = 51; /*0x10040bebc*/
          v27 = &unk_10122877F; /*0x10040bece*/
          v28 = &v29; /*0x10040bed9*/
          v17 = 0; /*0x10040bedd*/
          v18 = "codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x10040bee8*/
          v19 = 51; /*0x10040beef*/
          v20 = 0; /*0x10040befa*/
          v21 = "src/core/relay/codex_thread_visibility.rs"; /*0x10040bf0c*/
          v22 = 41; /*0x10040bf13*/
          v26 = 0x6D600000001LL; /*0x10040bf28*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x10040bf3a*/
          v7 = v40; /*0x10040bf3f*/
        }
        if ( (v7 & 3) == 1 ) /*0x10040bf4b*/
        {
          v8 = *(_QWORD *)(v7 + 7); /*0x10040bf55*/
          if ( *(_QWORD *)v8 ) /*0x10040bf59*/
            (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(v7 - 1)); /*0x10040bf65*/
          if ( *(_QWORD *)(v8 + 8) ) /*0x10040bf67*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040bf77*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040bf89*/
        }
      }
      close_NOCANCEL(v6); /*0x10040bf90*/
    }
  }
}