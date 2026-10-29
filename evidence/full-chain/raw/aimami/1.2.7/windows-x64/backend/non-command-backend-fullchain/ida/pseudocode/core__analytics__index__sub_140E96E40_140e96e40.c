// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140e96e40 | name sub_140E96E40
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E96E40(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rsi
  __int128 v6; // xmm0
  _OWORD v7[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h] BYREF
  __int128 v10; // [rsp+60h] [rbp-20h]
  __int128 v11; // [rsp+70h] [rbp-10h]
  __int128 v12; // [rsp+80h] [rbp+0h]
  __int64 v13; // [rsp+90h] [rbp+10h]
  _QWORD *v14; // [rsp+98h] [rbp+18h]
  __int64 v15; // [rsp+A0h] [rbp+20h]

  v15 = -2;
  result = a1[1];
  a1[1] = 0;
  if ( result )
  {
    v14 = a1 + 1;
    v13 = a1[8];
    v2 = v13;
    v3 = *((_OWORD *)a1 + 1);
    v4 = *((_OWORD *)a1 + 2);
    v12 = *((_OWORD *)a1 + 3);
    v11 = v4;
    v10 = v3;
    v5 = *a1;
    v9 = result;
    v13 = 0;
    v10 = 0;
    v7[0] = v3;
    *((_QWORD *)&v11 + 1) = 0;
    v7[1] = v4;
    v6 = v12;
    *(_QWORD *)&v12 = 0;
    v7[2] = v6;
    v8 = v2;
    sub_140E970D0(&v9);
    result = sub_1414018B0(v5, v7);
    if ( *v14 )
      return sub_140E970D0(v14);
  }
  return result;
}
