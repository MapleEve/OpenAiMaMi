// module: codexmate_lib/commands/system
// addr: 0x140322890
// name: sub_140322890
// win 1.2.1 | module src/commands/system.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140322890(unsigned __int8 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v18[9]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v19[5]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+18h]
  __int64 v21; // [rsp+A0h] [rbp+20h]
  _QWORD *v22; // [rsp+A8h] [rbp+28h]
  __int64 v23; // [rsp+B0h] [rbp+30h]

  v23 = -2;
  v4 = *a1;
  result = **a1;
  if ( (unsigned int)result < 3 )
    return result;
  if ( (_DWORD)result == 3 )
  {
    v8 = v4[1];
    if ( !v8 )
      return result;
    v9 = v4[2];
    v10 = 1;
    return sub_140001660(v9, v8, v10);
  }
  if ( (_DWORD)result == 4 )
  {
    v6 = v4[2];
    v22 = v4;
    v20 = v4[3];
    v21 = 0;
    v19[4] = v6;
    while ( v20 != v21 )
    {
      ++v21;
      v7 = v6 + 32;
      sub_1402C3260();
      v6 = v7;
    }
    result = (__int64)v22;
    v15 = v22[1];
    if ( !v15 )
      return result;
    v9 = v22[2];
    v8 = 32 * v15;
    v10 = 8;
    return sub_140001660(v9, v8, v10);
  }
  v11 = v4[1];
  if ( v11 )
  {
    v12 = v4[2];
    v13 = v4[3];
    v18[1] = 0;
    v18[2] = v11;
    v18[3] = v12;
    v18[5] = 0;
    v18[6] = v11;
    v18[7] = v12;
    v14 = 1;
  }
  else
  {
    v14 = 0;
    v13 = 0;
  }
  v18[0] = v14;
  v18[4] = v14;
  v18[8] = v13;
  for ( result = sub_140308C30(v19, v18, v4, a4); v19[0]; result = sub_140308C30(v19, v18, v16, v17) )
  {
    v19[3] = v18;
    sub_140306A90(v19);
  }
  return result;
}