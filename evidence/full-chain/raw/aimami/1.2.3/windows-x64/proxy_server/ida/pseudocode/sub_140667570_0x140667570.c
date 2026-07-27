// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140667570
// name: sub_140667570
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140667570(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // cc
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  _QWORD v16[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( (unsigned __int64)a3 >= 0x20 )
  {
    v13 = sub_1414A35B0(a2, a3);
    v10 = v13 <= a4;
    v11 = v13 - a4;
    if ( v10 )
      goto LABEL_3;
LABEL_7:
    v16[0] = a2;
    v16[1] = a2 + a3;
    v16[2] = v11;
    sub_1408CCF90(a1, v16);
    return;
  }
  v8 = sub_1414A3BD0(a2, a3);
  v10 = v8 <= a4;
  v11 = v8 - a4;
  if ( !v10 )
    goto LABEL_7;
LABEL_3:
  if ( a3 < 0 )
  {
    v12 = 0;
    goto LABEL_5;
  }
  if ( a3 )
  {
    nullsub_1(v9);
    v12 = 1;
    v14 = sub_140001650(a3, 1);
    if ( !v14 )
LABEL_5:
      sub_1416C2D4B(v12, a3);
    v15 = v14;
    sub_141684120(v14, a2, a3);
  }
  else
  {
    v15 = 1;
  }
  *a1 = a3;
  a1[1] = v15;
  a1[2] = a3;
}