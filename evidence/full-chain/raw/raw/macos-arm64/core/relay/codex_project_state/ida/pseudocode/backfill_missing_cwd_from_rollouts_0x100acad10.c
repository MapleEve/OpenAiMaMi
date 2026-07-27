// __ZN13codexmate_lib4core5relay19codex_project_state34backfill_missing_cwd_from_rollouts28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100acad10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::backfill_missing_cwd_from_rollouts::_$u7b$$u7b$closure$u7d$$u7d$::hcbc11ef7ee9e0361(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x100acad21*/
  v5[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100acad2c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017C1CA0, v5); /*0x100acad3f*/
  a1[3] = v4[2]; /*0x100acad48*/
  v2 = v4[0]; /*0x100acad4c*/
  a1[2] = v4[1]; /*0x100acad54*/
  a1[1] = v2; /*0x100acad58*/
  *a1 = 10; /*0x100acad5c*/
  return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(a2); /*0x100acad6b*/
}