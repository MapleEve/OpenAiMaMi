// __ZN13codexmate_lib4core5relay17router_reconciler19reconcile_router_on28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100326330 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::reconcile_router_on::_$u7b$$u7b$closure$u7d$$u7d$::h9c5015906a0d02ff(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // [rsp+40h] [rbp-30h]

  v10 = a4; /*0x10032634d*/
  v11 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100326358*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_1017BBEA5, &v10); /*0x10032636b*/
  codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
    0,
    (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
    13,
    a2,
    a3,
    v8);
  v10 = a4; /*0x10032638d*/
  v11 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100326391*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v9, &unk_1017BBEBB, &v10); /*0x1003263a4*/
  a1[3] = v9[2]; /*0x1003263ad*/
  v6 = v9[0]; /*0x1003263b1*/
  a1[2] = v9[1]; /*0x1003263b9*/
  a1[1] = v6; /*0x1003263bd*/
  *a1 = 10; /*0x1003263c1*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a4); /*0x1003263d0*/
}