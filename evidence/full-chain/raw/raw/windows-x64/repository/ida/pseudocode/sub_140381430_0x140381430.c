// module: codexmate_lib/core/repository
// addr: 0x140381430
// name: sub_140381430
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140381430(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 result; // rax
  __int128 v8; // xmm0
  __int64 v9; // rdi
  __int128 v10; // [rsp+20h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]
  __int64 v16; // [rsp+60h] [rbp+0h]

  v16 = -2;
  v4 = *(_QWORD *)(a2 + 8);
  v15 = a2;
  v5 = *(_QWORD *)(a2 + 16);
  v14 = v4;
  sub_14148D3C0(&v11, v4, v5);
  v6 = v11;
  if ( v11 != -1 )
  {
    v10 = v12;
LABEL_3:
    result = v15;
    v8 = *(_OWORD *)v15;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(v15 + 16);
    *(_OWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 40) = v6;
    *(_OWORD *)(a1 + 48) = v10;
    *(_QWORD *)a1 = -1;
    return result;
  }
  v9 = v12;
  if ( !(unsigned __int8)sub_1403887F0(v12) )
  {
    v13 = v9;
    sub_140018650(&v13);
    goto LABEL_3;
  }
  *(_QWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = v9;
  result = v15;
  if ( *(_QWORD *)v15 )
    return sub_140001660(v14, *(_QWORD *)v15, 1);
  return result;
}