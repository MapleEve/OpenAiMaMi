// __ZN13codexmate_lib4core13oauth_refresh31validate_token_endpoint_success @ 0x1007be790
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::validate_token_endpoint_success | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::oauth_refresh::validate_token_endpoint_success::heebea4e5df3cd844(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdx
  void *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi

  v3 = a2[1]; /*0x1007be7a0*/
  v4 = a2[2]; /*0x1007be7a4*/
  result = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v3, v4); /*0x1007be7ab*/
  if ( v6 ) /*0x1007be7b3*/
  {
    qmemcpy(a1, a2, 0x48u); /*0x1007be7c0*/
    return result; /*0x1007be7c0*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v4); /*0x1007be7c8*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x1007be7d7*/
  if ( !v7 ) /*0x1007be7df*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x1007be8dc*/
  qmemcpy(v7, "token endpoint returned an empty access_token", 45); /*0x1007be835*/
  a1[1] = 45; /*0x1007be838*/
  a1[2] = v7; /*0x1007be840*/
  a1[3] = 45; /*0x1007be844*/
  *a1 = 0x8000000000000000LL; /*0x1007be856*/
  if ( *a2 ) /*0x1007be859*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, *a2, 1); /*0x1007be869*/
  v8 = a2[3]; /*0x1007be86e*/
  if ( !(2 * v8) ) /*0x1007be872*/
  {
    v9 = a2[6]; /*0x1007be87f*/
    result = 2 * v9; /*0x1007be883*/
    if ( !(2 * v9) ) /*0x1007be883*/
      return result; /*0x1007be88e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[7], v9, 1); /*0x1007be8cd*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[4], v8, 1); /*0x1007be8a4*/
  v9 = a2[6]; /*0x1007be8a9*/
  result = 2 * v9; /*0x1007be8ad*/
  if ( 2 * v9 ) /*0x1007be8ad*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[7], v9, 1); /*0x1007be8b8*/
  return result; /*0x1007be894*/
}