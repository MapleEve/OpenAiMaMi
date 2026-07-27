// module: codexmate_lib/core/relay/router_unlock_auth
// addr: 0x14046b670
// name: __u7b__u7b_closure_u7d__u7d__2
// win 1.2.3 | = mac codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__2(__int64 a1, __int64 a2)
{
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int64 v5; // [rsp+30h] [rbp-20h]
  _QWORD v6[2]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v7[3]; // [rsp+48h] [rbp-8h] BYREF

  v7[1] = -2;
  v7[0] = a2;
  v6[0] = v7;
  v6[1] = sub_141490720;
  sub_14149C0F0(&v4, &unk_141757957, v6);
  *(_QWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 10;
  return sub_140018650(v7);
}