// module: codexmate_lib/core/relay/router_reconciler
// addr: 0x140566720
// name: __u7b__u7b_closure_u7d__u7d__5
// win 1.2.3 | = mac codexmate_lib::core::relay::router_reconciler::reconcile_router_on::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__5(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  _QWORD v8[3]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v9; // [rsp+50h] [rbp-30h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h]
  unsigned __int64 *v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // [rsp+70h] [rbp-10h]
  unsigned __int64 *v13; // [rsp+78h] [rbp-8h]
  __int64 v14; // [rsp+80h] [rbp+0h]

  v14 = -2;
  v13 = a4;
  v11 = a4;
  v12 = sub_140B036A0;
  sub_14149C0F0(v8, &unk_141760AD7, &v11);
  sub_14054F5E0(0, (__int64)aProjectState, 13, a2, a3, v8);
  v11 = v13;
  v12 = sub_140B036A0;
  sub_14149C0F0(&v9, &unk_141760AED, &v11);
  *(_QWORD *)(a1 + 24) = v10;
  *(_OWORD *)(a1 + 8) = v9;
  *(_QWORD *)a1 = 10;
  return sub_14052DB80(v13);
}