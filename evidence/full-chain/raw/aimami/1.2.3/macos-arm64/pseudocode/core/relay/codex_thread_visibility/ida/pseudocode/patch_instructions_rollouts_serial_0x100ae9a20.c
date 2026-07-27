// __ZN13codexmate_lib4core5relay23codex_thread_visibility34patch_instructions_rollouts_serial @ 0x100ae9a20
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::patch_instructions_rollouts_serial | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_instructions_rollouts_serial::hc0a99dbc7539a887(
        __int64 a1,
        __int64 a2,
        const void *a3,
        signed __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // r14
  _BYTE v18[96]; // [rsp+0h] [rbp-1E0h] BYREF
  __int64 v19[12]; // [rsp+60h] [rbp-180h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-120h] BYREF
  char *v21; // [rsp+C8h] [rbp-118h]
  __int64 v22; // [rsp+D0h] [rbp-110h]
  __int64 v23; // [rsp+D8h] [rbp-108h]
  const char *v24; // [rsp+E0h] [rbp-100h]
  __int64 v25; // [rsp+E8h] [rbp-F8h]
  __int64 v26; // [rsp+F0h] [rbp-F0h]
  void *v27; // [rsp+F8h] [rbp-E8h]
  __int64 v28; // [rsp+100h] [rbp-E0h]
  __int64 v29; // [rsp+108h] [rbp-D8h]
  void *v30; // [rsp+110h] [rbp-D0h]
  _QWORD *v31; // [rsp+118h] [rbp-C8h]
  _QWORD v32[4]; // [rsp+158h] [rbp-88h] BYREF
  _QWORD v33[2]; // [rsp+178h] [rbp-68h] BYREF
  signed __int64 v34; // [rsp+188h] [rbp-58h]
  const void *v35; // [rsp+190h] [rbp-50h]
  char *v36; // [rsp+198h] [rbp-48h]
  __int64 v37; // [rsp+1A0h] [rbp-40h]
  __int64 v38; // [rsp+1A8h] [rbp-38h]
  char v39[41]; // [rsp+1B7h] [rbp-29h] BYREF

  v34 = a4; /*0x100ae9a34*/
  v35 = a3; /*0x100ae9a38*/
  if ( !a2 ) /*0x100ae9a3f*/
    return 0; /*0x100ae9c8c*/
  v4 = a1; /*0x100ae9a45*/
  v5 = a1 + 24 * a2; /*0x100ae9a4c*/
  result = 0; /*0x100ae9a50*/
  v7 = &v20; /*0x100ae9a52*/
  v8 = 0; /*0x100ae9a59*/
  while ( 2 ) /*0x100ae9a5b*/
  {
    while ( 1 ) /*0x100ae9a5b*/
    {
      v38 = v8; /*0x100ae9a5b*/
      v37 = result; /*0x100ae9a5f*/
      for ( v4 += 24; ; v4 += 24 ) /*0x100ae9a63*/
      {
        v10 = *(_QWORD *)(v4 - 16); /*0x100ae9a97*/
        v11 = *(_QWORD *)(v4 - 8); /*0x100ae9a9c*/
        std::sys::fs::metadata::h32fa16d3052ea535(v7, v10, v11); /*0x100ae9aaa*/
        if ( (_DWORD)v20 != 1 ) /*0x100ae9ab6*/
          break; /*0x100ae9ab6*/
        if ( ((unsigned __int8)v21 & 3) == 1 ) /*0x100ae9ac7*/
        {
          v12 = v5; /*0x100ae9ac9*/
          v13 = v7; /*0x100ae9acc*/
          v36 = v21 - 1; /*0x100ae9ad3*/
          v14 = *(_QWORD *)(v21 - 1); /*0x100ae9ad7*/
          v15 = *(_QWORD *)(v21 + 7); /*0x100ae9adb*/
          if ( *(_QWORD *)v15 ) /*0x100ae9adf*/
            (*(void (__fastcall **)(__int64))v15)(v14); /*0x100ae9aeb*/
          v16 = *(_QWORD *)(v15 + 8); /*0x100ae9aed*/
          if ( v16 ) /*0x100ae9af4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x100ae9b01*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8); /*0x100ae9a7e*/
          v7 = v13; /*0x100ae9a83*/
          v5 = v12; /*0x100ae9a86*/
        }
        if ( v4 == v5 ) /*0x100ae9a89*/
          return v37; /*0x100ae9c88*/
      }
      codexmate_lib::core::relay::codex_thread_visibility::patch_single_rollout_instructions::h190340ec452b586f( /*0x100ae9b25*/
        v19,
        v10,
        v11,
        v35,
        v34);
      if ( LODWORD(v19[0]) == 11 ) /*0x100ae9b31*/
        break; /*0x100ae9b31*/
      qmemcpy(v18, v19, sizeof(v18)); /*0x100ae9b76*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae9b87*/
      {
        v33[0] = v10; /*0x100ae9b8d*/
        v33[1] = v11; /*0x100ae9b91*/
        v32[0] = v33; /*0x100ae9b99*/
        v32[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae9ba7*/
        v32[2] = v18; /*0x100ae9bab*/
        v32[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae9bb6*/
        v26 = 2; /*0x100ae9bba*/
        v27 = &unk_10167D5D6; /*0x100ae9bcc*/
        v28 = 51; /*0x100ae9bd3*/
        v30 = &unk_1017CB4A3; /*0x100ae9be5*/
        v31 = v32; /*0x100ae9bf3*/
        v20 = 0; /*0x100ae9bfa*/
        v21 = (char *)&unk_10167D5D6; /*0x100ae9c05*/
        v22 = 51; /*0x100ae9c0c*/
        v23 = 0; /*0x100ae9c17*/
        v24 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae9c29*/
        v25 = 41; /*0x100ae9c30*/
        v29 = 0x180100000001LL; /*0x100ae9c45*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v39, v7); /*0x100ae9c53*/
      }
      v17 = v38 + 1; /*0x100ae9c63*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v18); /*0x100ae9c69*/
      v8 = v17; /*0x100ae9c6e*/
      result = v37; /*0x100ae9c71*/
      if ( v4 == v5 ) /*0x100ae9c78*/
        return result; /*0x100ae9c78*/
    }
    result = LOBYTE(v19[1]) + v37; /*0x100ae9b41*/
    v8 = v38; /*0x100ae9b44*/
    if ( v4 != v5 ) /*0x100ae9b4b*/
      continue; /*0x100ae9b4b*/
    break;
  }
  return result; /*0x100ae9c8e*/
}