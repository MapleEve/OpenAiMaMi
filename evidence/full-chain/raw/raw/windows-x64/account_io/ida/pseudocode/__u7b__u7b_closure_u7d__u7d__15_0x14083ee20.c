// module: codexmate_lib/core/account_io
// addr: 0x14083ee20
// name: __u7b__u7b_closure_u7d__u7d__15
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_io::parse_import_file::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__15(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rdx
  __int128 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  _QWORD v9[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp-8h]
  __int64 v12; // [rsp+60h] [rbp+0h]

  v12 = -2;
  v10 = a2;
  v9[0] = &v10;
  v9[1] = sub_14142D3F0;
  sub_14149C0F0(&v7, &unk_141795D81, v9);
  *(_QWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = 9;
  v3 = *v10;
  v4 = *v10 == 1;
  v11 = v10;
  if ( v4 )
  {
    sub_140018650(v10 + 1);
  }
  else if ( !v3 )
  {
    v5 = v11[2];
    if ( v5 )
      sub_140001660(v11[1], v5, 1);
  }
  return sub_140001660(v11, 40, 8);
}
