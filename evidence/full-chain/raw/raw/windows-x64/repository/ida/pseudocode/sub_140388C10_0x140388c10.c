// module: codexmate_lib/core/repository
// addr: 0x140388c10
// name: sub_140388C10
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140388C10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+68h] [rbp-18h]
  __int128 v18; // [rsp+78h] [rbp-8h]
  __int128 v19; // [rsp+88h] [rbp+8h]
  __int128 v20; // [rsp+98h] [rbp+18h]
  __int64 v21; // [rsp+A8h] [rbp+28h]
  __int64 v22; // [rsp+B0h] [rbp+30h]
  __int64 v23; // [rsp+B8h] [rbp+38h]
  __int64 v24; // [rsp+C0h] [rbp+40h]

  v24 = -2;
  sub_14148D130(&v15, a2, a3);
  result = v15;
  v5 = v16;
  if ( v15 == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v5;
    return result;
  }
  v23 = v15;
  v11[0] = v16;
  v11[1] = v17;
  v12 = 0;
  v22 = v16;
  v13 = v16;
  v14 = v17;
  sub_1408A6390(&v15, v11);
  v6 = v15;
  result = v16;
  if ( v15 != -1 )
  {
    *(_QWORD *)(a1 + 88) = v21;
    v7 = v17;
    v8 = v18;
    v9 = v19;
    *(_OWORD *)(a1 + 72) = v20;
    *(_OWORD *)(a1 + 56) = v9;
    *(_OWORD *)(a1 + 40) = v8;
    *(_OWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)a1 = -1;
    v10 = v23;
    if ( !v23 )
      return result;
    return sub_140001660(v22, v10, 1);
  }
  *(_QWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = result;
  v10 = v23;
  if ( v23 )
    return sub_140001660(v22, v10, 1);
  return result;
}