// __ZN13codexmate_lib4core5relay23codex_thread_visibility33restore_rollout_mtime_best_effort @ 0x100ae8800 | 基线 same-set
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_rollout_mtime_best_effort::h1815d59067547dd1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rsi
  char v15[8]; // [rsp+8h] [rbp-118h] BYREF
  int v16; // [rsp+10h] [rbp-110h]
  __int64 v17; // [rsp+18h] [rbp-108h]
  int v18; // [rsp+20h] [rbp-100h]
  int v19; // [rsp+30h] [rbp-F0h]
  char v20[4]; // [rsp+38h] [rbp-E8h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-E4h]
  __int64 v22; // [rsp+40h] [rbp-E0h]
  __int64 v23; // [rsp+48h] [rbp-D8h] BYREF
  void *v24; // [rsp+50h] [rbp-D0h]
  __int64 v25; // [rsp+58h] [rbp-C8h]
  __int64 v26; // [rsp+60h] [rbp-C0h]
  const char *v27; // [rsp+68h] [rbp-B8h]
  __int64 v28; // [rsp+70h] [rbp-B0h]
  __int64 v29; // [rsp+78h] [rbp-A8h]
  void *v30; // [rsp+80h] [rbp-A0h]
  __int64 v31; // [rsp+88h] [rbp-98h]
  __int64 v32; // [rsp+90h] [rbp-90h]
  void *v33; // [rsp+98h] [rbp-88h]
  __int64 **v34; // [rsp+A0h] [rbp-80h]
  __int64 *v35; // [rsp+A8h] [rbp-78h] BYREF
  __int64 (__fastcall *v36)(_QWORD, _QWORD); // [rsp+B0h] [rbp-70h]
  __int64 *v37; // [rsp+B8h] [rbp-68h]
  __int64 (__fastcall *v38)(_QWORD, _QWORD); // [rsp+C0h] [rbp-60h]
  __int64 v39; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-50h]
  unsigned int v41; // [rsp+D8h] [rbp-48h] BYREF
  int v42; // [rsp+DCh] [rbp-44h] BYREF
  __int16 v43; // [rsp+E0h] [rbp-40h]
  int v44; // [rsp+E2h] [rbp-3Eh]
  __int16 v45; // [rsp+E6h] [rbp-3Ah]
  __int64 v46; // [rsp+E8h] [rbp-38h] BYREF
  _BYTE v47[41]; // [rsp+F7h] [rbp-29h] BYREF

  if ( a4 != 1000000000 ) /*0x100ae881a*/
  {
    v16 = 1000000000; /*0x100ae8826*/
    v19 = 1000000000; /*0x100ae8830*/
    v17 = a3; /*0x100ae883a*/
    v18 = a4; /*0x100ae8841*/
    v42 = 0; /*0x100ae8847*/
    v43 = 438; /*0x100ae884e*/
    v44 = 256; /*0x100ae8854*/
    v45 = 0; /*0x100ae885b*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(v20, &v42, a1, a2); /*0x100ae8876*/
    if ( v20[0] ) /*0x100ae8882*/
    {
      v4 = v22; /*0x100ae8888*/
      v46 = v22; /*0x100ae888f*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae88a1*/
      {
        v39 = a1; /*0x100ae88a7*/
        v40 = a2; /*0x100ae88ab*/
        v35 = &v39; /*0x100ae88b3*/
        v36 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae88be*/
        v37 = &v46; /*0x100ae88c6*/
        v38 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100ae88d1*/
        v29 = 2; /*0x100ae88d5*/
        v30 = &unk_10167D5D6; /*0x100ae88e7*/
        v31 = 51; /*0x100ae88ee*/
        v33 = &unk_1017CB2E1; /*0x100ae8900*/
        v34 = &v35; /*0x100ae890b*/
        v23 = 0; /*0x100ae890f*/
        v24 = &unk_10167D5D6; /*0x100ae891a*/
        v25 = 51; /*0x100ae8921*/
        v26 = 0; /*0x100ae892c*/
        v27 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae893e*/
        v28 = 41; /*0x100ae8945*/
        v32 = 0xDC700000001LL; /*0x100ae895a*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v47, &v23); /*0x100ae896c*/
        v4 = v46; /*0x100ae8971*/
      }
      if ( (v4 & 3) == 1 ) /*0x100ae897d*/
      {
        v5 = v4 - 1; /*0x100ae8983*/
        v6 = *(_QWORD *)(v4 - 1); /*0x100ae8987*/
        v7 = *(_QWORD *)(v4 + 7); /*0x100ae898b*/
        if ( *(_QWORD *)v7 ) /*0x100ae898f*/
          (*(void (__fastcall **)(__int64))v7)(v6); /*0x100ae899b*/
        v8 = *(_QWORD *)(v7 + 8); /*0x100ae899d*/
        if ( v8 ) /*0x100ae89a5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x100ae89af*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x100ae89c1*/
      }
    }
    else
    {
      v9 = v21; /*0x100ae89cb*/
      v41 = v21; /*0x100ae89d1*/
      v10 = std::fs::File::set_times::had0248e52bff5c3b(&v41, v15); /*0x100ae89df*/
      if ( v10 ) /*0x100ae89e7*/
      {
        v46 = v10; /*0x100ae89ed*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae89ff*/
        {
          v39 = a1; /*0x100ae8a05*/
          v40 = a2; /*0x100ae8a09*/
          v35 = &v39; /*0x100ae8a11*/
          v36 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae8a1c*/
          v37 = &v46; /*0x100ae8a24*/
          v38 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100ae8a2f*/
          v29 = 2; /*0x100ae8a33*/
          v30 = &unk_10167D5D6; /*0x100ae8a45*/
          v31 = 51; /*0x100ae8a4c*/
          v33 = &unk_1017CB2A4; /*0x100ae8a5e*/
          v34 = &v35; /*0x100ae8a69*/
          v23 = 0; /*0x100ae8a6d*/
          v24 = &unk_10167D5D6; /*0x100ae8a78*/
          v25 = 51; /*0x100ae8a7f*/
          v26 = 0; /*0x100ae8a8a*/
          v27 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae8a9c*/
          v28 = 41; /*0x100ae8aa3*/
          v32 = 0xDC000000001LL; /*0x100ae8ab8*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v47, &v23); /*0x100ae8aca*/
          v10 = v46; /*0x100ae8acf*/
        }
        if ( (v10 & 3) == 1 ) /*0x100ae8adb*/
        {
          v11 = v10 - 1; /*0x100ae8add*/
          v12 = *(_QWORD *)(v10 - 1); /*0x100ae8ae1*/
          v13 = *(_QWORD *)(v10 + 7); /*0x100ae8ae5*/
          if ( *(_QWORD *)v13 ) /*0x100ae8ae9*/
            (*(void (__fastcall **)(__int64))v13)(v12); /*0x100ae8af5*/
          v14 = *(_QWORD *)(v13 + 8); /*0x100ae8af7*/
          if ( v14 ) /*0x100ae8afe*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100ae8b07*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8); /*0x100ae8b19*/
        }
      }
      close_NOCANCEL(v9); /*0x100ae8b20*/
    }
  }
}