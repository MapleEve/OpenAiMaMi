// __ZN13codexmate_lib4core20account_coordination22acquire_snapshot_locks28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1007bea10
// 1.2.3 NEW-delta | codexmate_lib::core::account_coordination::acquire_snapshot_locks::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::account_coordination::acquire_snapshot_locks::_$u7b$$u7b$closure$u7d$$u7d$::hfe97ea06b640110c(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v10; // [rsp+8h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-40h]
  __int64 v12; // [rsp+18h] [rbp-38h]
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h]

  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)&v13, a1, a2); /*0x1007bea2d*/
  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)&v10, a3, a4); /*0x1007bea3c*/
  v6 = v14; /*0x1007bea41*/
  v7 = v11; /*0x1007bea49*/
  v8 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(v14, v15, v11, v12); /*0x1007bea5c*/
  if ( v10 ) /*0x1007bea66*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v10, 1); /*0x1007bea70*/
  if ( v13 ) /*0x1007bea7c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v13, 1); /*0x1007bea86*/
  return v8; /*0x1007bea8e*/
}