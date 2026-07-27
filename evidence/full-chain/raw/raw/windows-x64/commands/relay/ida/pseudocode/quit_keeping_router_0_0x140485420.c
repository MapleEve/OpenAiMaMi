// module: codexmate_lib/commands/relay
// addr: 0x140485420
// name: quit_keeping_router_0
// win 1.2.3 | = mac codexmate_lib::commands::relay::quit_keeping_router | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall quit_keeping_router_0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  void *v6; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-8h]
  __int64 v10; // [rsp+50h] [rbp+0h]

  v10 = -2;
  v9 = a2;
  if ( (unsigned __int8)sub_14084FB80(a3) )
  {
    nullsub_1(v4);
    v5 = sub_140001650(54, 1);
    if ( !v5 )
      sub_1416C2D4B(1, 54);
    *(_OWORD *)(v5 + 32) = xmmword_1417590B9;
    *(_OWORD *)(v5 + 16) = xmmword_1417590A9;
    *(_OWORD *)v5 = xmmword_141759099;
    *(_QWORD *)(v5 + 46) = 0xBA87E58080E98D86uLL;
    *a1 = 54;
    a1[1] = v5;
    a1[2] = 54;
  }
  else
  {
    nullsub_1(v4);
    v6 = (void *)sub_140001650(47, 1);
    if ( !v6 )
      sub_1416C2D4B(1, 47);
    qmemcpy(v6, "user chose to quit while keeping router enabled", 47);
    v8[0] = 47;
    v8[1] = v6;
    v8[2] = 47;
    sub_1403565C0((unsigned int)aExitGuard_0, 10, (unsigned int)aKeepRouterExit, 16, (__int64)v8);
    byte_141EC930C = 1;
    sub_1401B4A10(v9, 0);
    *a1 = -1;
  }
  sub_140014150(v9);
  return a1;
}