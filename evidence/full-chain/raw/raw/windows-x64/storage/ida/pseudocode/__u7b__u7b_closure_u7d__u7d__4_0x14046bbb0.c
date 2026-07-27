// module: codexmate_lib/core/relay/storage
// addr: 0x14046bbb0
// name: __u7b__u7b_closure_u7d__u7d__4
// win 1.2.3 | = mac codexmate_lib::core::relay::storage::load::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h]
  _QWORD v7[4]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-8h]
  __int64 v9; // [rsp+60h] [rbp+0h]

  v9 = -2;
  v7[0] = a2;
  v7[1] = sub_1400015F0;
  v8 = a3;
  v7[2] = a3;
  v7[3] = sub_1400015F0;
  sub_14149C0F0(&v5, &unk_141758341, v7);
  *(_QWORD *)(a1 + 24) = v6;
  *(_OWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = 9;
  result = (__int64)v8;
  if ( *v8 )
    return sub_140001660(v8[1], *v8, 1);
  return result;
}