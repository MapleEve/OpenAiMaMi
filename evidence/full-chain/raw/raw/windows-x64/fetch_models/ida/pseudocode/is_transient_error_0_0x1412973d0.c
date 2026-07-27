// module: codexmate_lib/core/relay/fetch_models
// addr: 0x1412973d0
// name: is_transient_error_0
// win 1.2.3 | = mac codexmate_lib::core::relay::fetch_models::is_transient_error | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall is_transient_error_0(__int64 *a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+60h] [rbp-8h] BYREF

  v2 = *a1;
  v4 = v2 + 8;
  return sub_1414A1C00(
           a2,
           (unsigned int)aXcbdisplayhand,
           16,
           (unsigned int)&unk_141944277,
           10,
           v2,
           (__int64)&unk_141943FF8,
           (__int64)"screen",
           6,
           (__int64)&v4,
           (__int64)&unk_141944018);
}