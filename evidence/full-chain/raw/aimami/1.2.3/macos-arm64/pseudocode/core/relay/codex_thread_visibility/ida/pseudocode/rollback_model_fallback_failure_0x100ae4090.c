// __ZN13codexmate_lib4core5relay23codex_thread_visibility31rollback_model_fallback_failure @ 0x100ae4090
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::rollback_model_fallback_failure::h9a9d14f09ebdbde6(
        _QWORD *a1,
        const void *a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  _BYTE v8[96]; // [rsp+0h] [rbp-110h] BYREF
  _DWORD v9[24]; // [rsp+60h] [rbp-B0h] BYREF
  _QWORD v10[4]; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v11[6]; // [rsp+E0h] [rbp-30h] BYREF

  result = codexmate_lib::core::relay::codex_thread_visibility::restore_model_fallback_rollout_patches::h2c50efc7f6189325( /*0x100ae40b6*/
             v9,
             a4,
             a5);
  if ( v9[0] == 11 ) /*0x100ae40c2*/
  {
    qmemcpy(a1, a2, 0x60u); /*0x100ae40cf*/
    *((_BYTE *)a1 + 96) = a3; /*0x100ae40d2*/
  }
  else
  {
    qmemcpy(v8, v9, sizeof(v8)); /*0x100ae40ee*/
    v10[0] = a2; /*0x100ae40f1*/
    v10[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae40fc*/
    v10[2] = v8; /*0x100ae4100*/
    v10[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae4104*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v11, &unk_1017CB192, v10); /*0x100ae4117*/
    a1[3] = v11[2]; /*0x100ae4120*/
    v7 = v11[0]; /*0x100ae4124*/
    a1[2] = v11[1]; /*0x100ae412c*/
    a1[1] = v7; /*0x100ae4130*/
    *a1 = 10; /*0x100ae4134*/
    *((_BYTE *)a1 + 96) = 0; /*0x100ae413b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v8); /*0x100ae4147*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a2); /*0x100ae414f*/
  }
  return result; /*0x100ae4154*/
}