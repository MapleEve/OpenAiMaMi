// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14066b940
// name: build_upstream_direct_client
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::build_upstream_direct_client | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall build_upstream_direct_client(__int64 a1)
{
  __int64 v2; // rdx
  _BYTE v4[912]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v5; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v6; // [rsp+3C8h] [rbp+348h]
  _BYTE v7[680]; // [rsp+748h] [rbp+6C8h] BYREF
  __int64 v8; // [rsp+9F0h] [rbp+970h]
  int v9; // [rsp+9F8h] [rbp+978h]
  __int64 v10; // [rsp+A10h] [rbp+990h]
  int v11; // [rsp+A18h] [rbp+998h]
  __int64 v12; // [rsp+A30h] [rbp+9B0h]
  int v13; // [rsp+A38h] [rbp+9B8h]
  __int64 v14; // [rsp+A80h] [rbp+A00h]
  _QWORD v15[2]; // [rsp+AD8h] [rbp+A58h] BYREF
  _QWORD v16[5]; // [rsp+AE8h] [rbp+A68h] BYREF

  v16[1] = -2;
  sub_14104B490(v7);
  v12 = 300;
  v13 = 0;
  v8 = 30;
  v9 = 0;
  v14 = 10;
  v10 = 60;
  v11 = 0;
  sub_141684120(v4, v7, 912);
  sub_1410484B0(&v5, v4);
  if ( sub_141042BD0(&v5) == 1 )
  {
    v16[0] = v2;
    v15[0] = v16;
    v15[1] = sub_141031F10;
    sub_14149C0F0(&v5, &unk_141768450, v15);
    sub_1405E12D0(v16);
    *(_QWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)a1 = -1;
  }
  return a1;
}