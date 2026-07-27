// __ZN13codexmate_lib4core5relay23codex_thread_visibility32revert_convergence_rollout_patch @ 0x100ae6e30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::revert_convergence_rollout_patch::hc77c01e88ccade68(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _BYTE v3[96]; // [rsp+0h] [rbp-180h] BYREF
  _DWORD v4[24]; // [rsp+60h] [rbp-120h] BYREF
  _QWORD v5[12]; // [rsp+C0h] [rbp-C0h] BYREF
  _QWORD v6[6]; // [rsp+120h] [rbp-60h] BYREF
  _QWORD v7[2]; // [rsp+150h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+160h] [rbp-20h] BYREF
  _BYTE v9[9]; // [rsp+177h] [rbp-9h] BYREF

  v8[0] = "provider-normalizemissing-rollout repair"; /*0x100ae6e46*/
  v8[1] = 18; /*0x100ae6e4a*/
  result = codexmate_lib::core::relay::codex_thread_visibility::restore_convergence_rollout_patch::h09310c7abde0e37f( /*0x100ae6e5c*/
             v4,
             a1);
  if ( v4[0] != 11 ) /*0x100ae6e68*/
  {
    qmemcpy(v3, v4, sizeof(v3)); /*0x100ae6e84*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae6e95*/
    {
      v2 = *(_QWORD *)(a1 + 16); /*0x100ae6e9f*/
      v7[0] = *(_QWORD *)(a1 + 8); /*0x100ae6ea3*/
      v7[1] = v2; /*0x100ae6ea7*/
      v6[0] = v8; /*0x100ae6eaf*/
      v6[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ae6eba*/
      v6[2] = v7; /*0x100ae6ec2*/
      v6[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae6ecd*/
      v6[4] = v3; /*0x100ae6ed1*/
      v6[5] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae6edc*/
      v5[6] = 2; /*0x100ae6ee0*/
      v5[7] = &unk_10167D5D6; /*0x100ae6ef2*/
      v5[8] = 51; /*0x100ae6ef9*/
      v5[10] = &unk_1017CB23F; /*0x100ae6f08*/
      v5[11] = v6; /*0x100ae6f10*/
      v5[0] = 0; /*0x100ae6f14*/
      v5[1] = &unk_10167D5D6; /*0x100ae6f1f*/
      v5[2] = 51; /*0x100ae6f26*/
      v5[3] = 0; /*0x100ae6f31*/
      v5[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae6f43*/
      v5[5] = 41; /*0x100ae6f4a*/
      v5[9] = 0x82E00000001LL; /*0x100ae6f5f*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v9, v5); /*0x100ae6f6e*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v3); /*0x100ae6f7a*/
  }
  return result; /*0x100ae6f7f*/
}