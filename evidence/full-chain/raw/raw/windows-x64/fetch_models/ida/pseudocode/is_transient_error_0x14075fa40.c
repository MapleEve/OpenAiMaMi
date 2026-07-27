// module: codexmate_lib/core/relay/fetch_models
// addr: 0x14075fa40
// name: is_transient_error
// win 1.2.3 | = mac codexmate_lib::core::relay::fetch_models::is_transient_error | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall is_transient_error(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // [rsp+28h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp-8h]

  v9 = -2;
  sub_14149A6B0(&v5, a1, a2);
  v3 = v7;
  v8 = v6;
  LOBYTE(v2) = 1;
  if ( !(unsigned __int8)sub_1407BE9C0(aRequestFailed, 14, v6, v7)
    && !(unsigned __int8)sub_1407BE9C0(aTimedOut_0, 9, v8, v3)
    && !(unsigned __int8)sub_1407BE9C0(aTimeout_2, 7, v8, v3) )
  {
    v2 = sub_1407BE9C0(aConnection, 10, v8, v3);
  }
  if ( v5 )
    sub_140001660(v8, v5, 1);
  return v2;
}