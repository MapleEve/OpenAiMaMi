// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1413064d0
// name: sub_1413064D0
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1413064D0(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int128 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+48h] [rbp-10h]

  sub_141311970(&v5);
  v2 = v6;
  if ( v5 == -1 )
  {
    v3 = 2;
  }
  else
  {
    sub_1412EAC20((unsigned int)&v5, v5, v6, 3, (__int64)&off_14195B548);
    v3 = v5;
    if ( v5 != 2 )
    {
      *(_QWORD *)(a1 + 32) = v8;
      *(_OWORD *)(a1 + 16) = v7;
    }
    v2 = v6;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = v3;
  return a1;
}