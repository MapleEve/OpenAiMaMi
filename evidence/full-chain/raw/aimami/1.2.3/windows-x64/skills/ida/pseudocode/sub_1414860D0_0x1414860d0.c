// module: codexmate_lib/core/skills
// addr: 0x1414860d0
// name: sub_1414860D0
// win 1.2.1 | module src/core/skills.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1414860D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // [rsp+28h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-50h]
  _QWORD v8[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  __int64 v14; // [rsp+80h] [rbp+0h]

  v14 = -2;
  sub_14148D770(&v9, a1, a2);
  v3 = v10;
  if ( v9 == -1 )
    return v3;
  v8[0] = v9;
  v8[1] = v10;
  v8[2] = v11;
  LOBYTE(v2) = 1;
  sub_14148A880(&v6, v8, v2);
  v3 = v7;
  if ( v6 == -1 )
    return v3;
  v13 = v6;
  v12 = v7;
  result = sub_1414888D0();
  if ( v13 )
  {
    v5 = result;
    sub_140001660(v12, 2 * v13, 2);
    return v5;
  }
  return result;
}