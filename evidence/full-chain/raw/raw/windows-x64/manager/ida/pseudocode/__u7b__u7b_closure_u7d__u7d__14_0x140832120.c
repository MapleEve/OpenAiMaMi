// module: codexmate_lib/core/relay/manager
// addr: 0x140832120
// name: __u7b__u7b_closure_u7d__u7d__14
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__14(__int64 a1, __int64 a2)
{
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int64 v5; // [rsp+30h] [rbp-20h]
  _QWORD v6[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp-8h]
  __int64 v8; // [rsp+50h] [rbp+0h]

  v8 = -2;
  v7 = a2;
  v6[0] = a2;
  v6[1] = sub_140B036A0;
  sub_14149C0F0(&v4, &unk_141795738, v6);
  *(_QWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 10;
  return sub_1407DA310(v7);
}