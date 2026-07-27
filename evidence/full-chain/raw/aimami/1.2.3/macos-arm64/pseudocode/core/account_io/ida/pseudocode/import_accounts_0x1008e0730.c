// __ZN13codexmate_lib4core10account_io15import_accounts28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008e0730
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::import_accounts::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::account_io::import_accounts::_$u7b$$u7b$closure$u7d$$u7d$::hedc9f3e017ac7377(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 result; // rax

  a1[2] = a2[5]; /*0x1008e0742*/
  v2 = a2[3]; /*0x1008e0746*/
  a1[1] = a2[4]; /*0x1008e074e*/
  *a1 = v2; /*0x1008e0752*/
  v3 = a2[1]; /*0x1008e0755*/
  v4 = a2[2]; /*0x1008e0759*/
  if ( v4 ) /*0x1008e0760*/
  {
    v5 = a2[1]; /*0x1008e0762*/
    do /*0x1008e0782*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v5); /*0x1008e0773*/
      v5 += 424; /*0x1008e0778*/
      --v4; /*0x1008e077f*/
    }
    while ( v4 ); /*0x1008e0782*/
  }
  result = *a2; /*0x1008e0784*/
  if ( *a2 ) /*0x1008e0784*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 424 * result, 8); /*0x1008e07a3*/
  return result; /*0x1008e079b*/
}