// __ZN13codexmate_lib4core3mcp19set_optional_string @ 0x10084a610
// 1.2.3 NEW-delta | codexmate_lib::core::mcp::set_optional_string | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::mcp::set_optional_string::hc483d8d0488dd0fc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rdx
  __int64 result; // rax
  _DWORD *v10; // rdi
  _DWORD v11[44]; // [rsp+8h] [rbp-188h] BYREF
  _DWORD __dst[54]; // [rsp+B8h] [rbp-D8h] BYREF

  if ( a4 && (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a4, a5), v8) ) /*0x10084a646*/
  {
    _$LT$toml_edit..value..Value$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h9b73b1de15a8cca9( /*0x10084a655*/
      __dst,
      a4,
      a5);
    result = toml_edit::table::Table::insert::hb018739605f59eb7(v11, a1, a2, a3, __dst); /*0x10084a671*/
    if ( v11[0] == 12 ) /*0x10084a67d*/
      return result; /*0x10084a67d*/
    v10 = v11; /*0x10084a67f*/
  }
  else
  {
    result = toml_edit::table::Table::remove::hc792c60f6bbc5b1e(__dst); /*0x10084a698*/
    if ( __dst[0] == 12 ) /*0x10084a6a4*/
      return result; /*0x10084a6a4*/
    v10 = __dst; /*0x10084a6a6*/
  }
  return core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(v10); /*0x10084a6b2*/
}