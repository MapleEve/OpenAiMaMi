// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404c6990
// name: collect_provider_convergence_targets
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall collect_provider_convergence_targets(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  int v7; // eax
  __int128 v8; // kr00_16
  __int64 v9; // rbx
  __int128 v10; // kr10_16
  _QWORD v11[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h] BYREF
  __int128 v17; // [rsp+80h] [rbp+0h]
  __int128 v18; // [rsp+90h] [rbp+10h]
  __int128 v19; // [rsp+A0h] [rbp+20h]
  __int128 v20; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h]
  _BYTE v22[72]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v23; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v24; // [rsp+130h] [rbp+B0h]
  __int128 v25; // [rsp+140h] [rbp+C0h]
  __int128 v26; // [rsp+150h] [rbp+D0h]
  __int64 v27; // [rsp+168h] [rbp+E8h]

  v27 = -2;
  sub_14046F850(v22, a2, aSelectIdRollou, 118);
  if ( *(_DWORD *)v22 == 1 )
  {
    v26 = *(_OWORD *)&v22[56];
    v25 = *(_OWORD *)&v22[40];
    v24 = *(_OWORD *)&v22[24];
    v23 = *(_OWORD *)&v22[8];
    v11[0] = &v23;
    v11[1] = sub_140FB8910;
    sub_14149C0F0(&v20, &unk_141757F45, v11);
    v16 = v20;
    *(_QWORD *)&v17 = v21;
    result = sub_14043D020(&v23);
    v4 = v16;
    v5 = v17;
    v6 = v18;
    v15 = v19;
    v14 = v18;
    v13 = v17;
    v12 = v16;
    *(_OWORD *)(a1 + 56) = v19;
    *(_OWORD *)(a1 + 40) = v6;
    *(_OWORD *)(a1 + 24) = v5;
    *(_OWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 10;
    return result;
  }
  v12 = *(_OWORD *)&v22[8];
  v16 = *(_OWORD *)&v22[8];
  v17 = *(_OWORD *)&v22[24];
  v18 = *(_OWORD *)&v22[40];
  v19 = *(_OWORD *)&v22[56];
  v7 = sub_1414B6B70(*(_QWORD *)&v22[64]);
  if ( v7 )
  {
    *(_OWORD *)v22 = 0x8000000000000013uLL;
    *(_QWORD *)&v22[16] = v7;
    *(_QWORD *)&v12 = v22;
    *((_QWORD *)&v12 + 1) = sub_140FB8910;
    sub_14149C0F0(&v23, &unk_141757F6A, &v12);
    v8 = v23;
    v9 = v24;
    sub_14043D020(v22);
  }
  else
  {
    sub_140988870(&v23, &v16, 0);
    if ( (_QWORD)v23 == -1 )
    {
      *(_QWORD *)v22 = v24;
      *(_QWORD *)&v22[8] = v24;
      *(_QWORD *)&v22[16] = *((_QWORD *)&v23 + 1);
      *(_QWORD *)&v22[24] = v24 + 96LL * *((_QWORD *)&v24 + 1);
      sub_1402CA920(&v23, v22);
      *(_QWORD *)(a1 + 24) = v24;
      *(_OWORD *)(a1 + 8) = v23;
      *(_QWORD *)a1 = -1;
      return sub_14043D1B0(&v16);
    }
    *(_OWORD *)&v22[48] = v26;
    *(_OWORD *)&v22[32] = v25;
    *(_OWORD *)&v22[16] = v24;
    *(_OWORD *)v22 = v23;
    *(_QWORD *)&v20 = v22;
    *((_QWORD *)&v20 + 1) = sub_140FB8910;
    sub_14149C0F0(&v12, &unk_141757F8C, &v20);
    v10 = v12;
    v9 = v13;
    sub_14043D020(v22);
    v8 = v10;
  }
  *(_QWORD *)a1 = 10;
  *(_OWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 24) = v9;
  return sub_14043D1B0(&v16);
}