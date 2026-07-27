// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1412f2740
// name: sub_1412F2740
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1412F2740(__int64 a1, unsigned __int64 a2)
{
  _QWORD v3[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a2 >> 61 )
  {
    v3[0] = &unk_141958D08;
    v3[1] = sub_1414AC520;
    sub_1416C32C0(&unk_141958D10, v3, &off_141958F18);
  }
  *(_WORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 2 * a2;
  return a1;
}