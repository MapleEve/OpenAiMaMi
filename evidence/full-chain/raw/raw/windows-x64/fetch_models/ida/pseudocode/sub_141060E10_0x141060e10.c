// module: codexmate_lib/core/relay/fetch_models
// addr: 0x141060e10
// name: sub_141060E10
// win 1.2.1 | module src/core/relay/fetch_models.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141060E10(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-B0h]
  __int128 v13; // [rsp+30h] [rbp-A8h]
  __int128 v14; // [rsp+40h] [rbp-98h]
  __int128 v15; // [rsp+50h] [rbp-88h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  __int64 v17; // [rsp+70h] [rbp-68h]
  __int64 v18; // [rsp+78h] [rbp-60h] BYREF
  __int64 v19; // [rsp+80h] [rbp-58h]
  __int128 v20; // [rsp+88h] [rbp-50h]
  __int128 v21; // [rsp+98h] [rbp-40h]
  __int128 v22; // [rsp+A8h] [rbp-30h]
  __int128 v23; // [rsp+B8h] [rbp-20h]
  __int64 v24; // [rsp+C8h] [rbp-10h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v14 = 0;
  v11 = 0;
  *(_QWORD *)&v13 = 0;
  ((void (__fastcall *)(__int64 *, __int64 *, __int64, __int64))sub_141447EC0)(&v18, &v11, v3, v4);
  if ( v18 == -1 )
  {
    LOWORD(v11) = 0;
    v10 = sub_141023E30(&v11, (unsigned __int8)v19);
  }
  else
  {
    v13 = v20;
    v14 = v21;
    v15 = v22;
    v16 = v23;
    v17 = v24;
    v11 = v18;
    v12 = v19;
    if ( (_BYTE)v23 )
    {
      *(_QWORD *)(a1 + 80) = v17;
      *(_OWORD *)(a1 + 64) = v16;
      v5 = v11;
      v6 = v12;
      v7 = v13;
      v8 = v14;
      *(_OWORD *)(a1 + 48) = v15;
      *(_OWORD *)(a1 + 32) = v8;
      *(_OWORD *)(a1 + 16) = v7;
      *(_QWORD *)a1 = v5;
      *(_QWORD *)(a1 + 8) = v6;
      return a1;
    }
    v10 = sub_141031DC0(&v11);
  }
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = -1;
  return a1;
}