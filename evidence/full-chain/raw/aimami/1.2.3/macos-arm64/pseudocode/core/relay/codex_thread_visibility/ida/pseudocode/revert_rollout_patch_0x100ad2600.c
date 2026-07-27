// __ZN13codexmate_lib4core5relay23codex_thread_visibility20revert_rollout_patch @ 0x100ad2600 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::revert_rollout_patch::h42679fb362ff687a(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 result; // rax
  _BYTE v4[96]; // [rsp+8h] [rbp-188h] BYREF
  _DWORD v5[24]; // [rsp+68h] [rbp-128h] BYREF
  _QWORD v6[12]; // [rsp+C8h] [rbp-C8h] BYREF
  _QWORD v7[6]; // [rsp+128h] [rbp-68h] BYREF
  _QWORD v8[2]; // [rsp+158h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+168h] [rbp-28h] BYREF
  _BYTE v10[17]; // [rsp+17Fh] [rbp-11h] BYREF

  v9[0] = "model-catalogthread model convergencerelay_model_catalogconvergedSELECT id, rollout_path, model_provider, COAL" /*0x100ad2615*/
          "ESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY idthread-rollout-repairs";
  v9[1] = 13; /*0x100ad2619*/
  v1 = a1[1]; /*0x100ad2621*/
  v2 = a1[2]; /*0x100ad2625*/
  result = codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h49193b4a14eef084( /*0x100ad264a*/
             v5,
             v1,
             v2,
             a1[4],
             a1[5],
             a1[7],
             a1[8]);
  if ( v5[0] != 11 ) /*0x100ad2656*/
  {
    qmemcpy(v4, v5, sizeof(v4)); /*0x100ad2672*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ad2683*/
    {
      v8[0] = v1; /*0x100ad2689*/
      v8[1] = v2; /*0x100ad268d*/
      v7[0] = v9; /*0x100ad2695*/
      v7[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ad26a0*/
      v7[2] = v8; /*0x100ad26a8*/
      v7[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad26b3*/
      v7[4] = v4; /*0x100ad26b7*/
      v7[5] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ad26c2*/
      v6[6] = 2; /*0x100ad26c6*/
      v6[7] = &unk_10167D5D6; /*0x100ad26d8*/
      v6[8] = 51; /*0x100ad26df*/
      v6[10] = &unk_1017CA676; /*0x100ad26f1*/
      v6[11] = v7; /*0x100ad26f9*/
      v6[0] = 0; /*0x100ad26fd*/
      v6[1] = &unk_10167D5D6; /*0x100ad2708*/
      v6[2] = 51; /*0x100ad270f*/
      v6[3] = 0; /*0x100ad271a*/
      v6[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ad272c*/
      v6[5] = 41; /*0x100ad2733*/
      v6[9] = 0x7E500000001LL; /*0x100ad2748*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v10, v6); /*0x100ad2757*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v4); /*0x100ad2763*/
  }
  return result; /*0x100ad2768*/
}