// module: codexmate_lib/core/relay/router_reconciler
// addr: 0x14054f5e0
// name: sub_14054F5E0
// win 1.2.1 | module src/core/relay/router_reconciler.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_14054F5E0(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *result; // rax
  _BYTE v11[24]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v14; // [rsp+90h] [rbp+10h] BYREF
  int v15; // [rsp+98h] [rbp+18h]
  _QWORD v16[2]; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int128 v17; // [rsp+B0h] [rbp+30h] BYREF
  char v18; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h]

  v19 = -2;
  v18 = a1;
  v16[0] = a2;
  v16[1] = a3;
  v14 = a4;
  v15 = a5;
  v6 = sub_141471AC0(&v14);
  v17 = 0x3E8 * (unsigned __int128)(unsigned __int64)v6 + v7 / 0xF4240uLL;
  v8 = a6[1];
  v9 = a6[2];
  v13[0] = v8;
  v13[1] = v9;
  v12[0] = &v18;
  v12[1] = sub_14057ADC0;
  v12[2] = v16;
  v12[3] = sub_14041F680;
  v12[4] = &v17;
  v12[5] = sub_1414A9600;
  v12[6] = v13;
  v12[7] = sub_14041F680;
  sub_14149C0F0(v11, &unk_141760658, v12);
  sub_1403565C0((unsigned int)aRouterTransiti_0, 17, (unsigned int)aPhaseTiming, 12, (__int64)v11);
  result = a6;
  if ( *a6 )
    return (_QWORD *)sub_140001660(v8, *a6, 1);
  return result;
}