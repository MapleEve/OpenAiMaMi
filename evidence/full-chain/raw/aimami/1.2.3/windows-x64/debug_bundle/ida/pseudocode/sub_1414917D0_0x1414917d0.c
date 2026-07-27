// module: codexmate_lib/core/debug_bundle
// addr: 0x1414917d0
// name: sub_1414917D0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1414917D0(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 *v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 result; // rax
  bool v12; // cf
  unsigned __int64 v13; // r10
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // r12
  int v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]

  v4 = sub_141483320();
  v6 = v5;
  v7 = a2;
  v8 = 0;
  if ( (v4 & 1) != 0 )
    v8 = v6;
  v9 = *a2;
  v10 = a2[2];
  if ( v8 > *a2 - v10 )
  {
    result = 1;
    v12 = __CFADD__(v10, v8);
    v13 = v10 + v8;
    if ( v12 )
      return result;
    v14 = v4;
    v15 = 2 * v9;
    if ( v13 > 2 * v9 )
      v15 = v13;
    v16 = 8;
    if ( v15 >= 9 )
      v16 = v15;
    v17 = v7;
    sub_1416C2010((unsigned int)&v18, v9, v7[1], v16, 1, 1);
    if ( v18 == 1 )
      return 1;
    v7 = v17;
    v17[1] = v19;
    *v17 = v16;
    v4 = v14;
  }
  return sub_14146E220(a1, v7, v4, v6);
}