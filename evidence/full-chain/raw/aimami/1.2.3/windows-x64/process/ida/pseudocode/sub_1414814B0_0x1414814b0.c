// module: codexmate_lib/platform/process
// addr: 0x1414814b0
// name: sub_1414814B0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1414814B0(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  int v10; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+68h] [rbp-8h]
  __int64 v17; // [rsp+70h] [rbp+0h]

  v10 = 0;
  sub_1414769B0((unsigned int)v11, a2, (unsigned int)&v10, 1, 0);
  v3 = v11[0];
  v4 = v12;
  if ( v12 != 2 )
  {
    v5 = v11[1];
    v6 = v15;
    v7 = v16;
    v8 = v17;
    a1[2] = v14;
    a1[3] = v6;
    a1[4] = v7;
    a1[5] = v8;
    a1[6] = v3;
    v3 = v13;
    a1[7] = v5;
  }
  a1[1] = v3;
  *a1 = v4;
  return a1;
}