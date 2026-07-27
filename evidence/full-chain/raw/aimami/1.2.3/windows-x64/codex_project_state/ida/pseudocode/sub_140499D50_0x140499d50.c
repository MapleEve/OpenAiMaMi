// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140499d50
// name: sub_140499D50
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140499D50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  int v8; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int128 v11; // [rsp+40h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-30h]
  __int128 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+78h] [rbp-8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+0h]
  __int64 v16; // [rsp+88h] [rbp+8h]
  _BYTE v17[72]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v18; // [rsp+E0h] [rbp+60h]
  __int64 v19; // [rsp+E8h] [rbp+68h]

  v19 = -2;
  v9[0] = aThreads_0;
  v9[1] = 7;
  *(_QWORD *)v17 = v9;
  *(_QWORD *)&v17[8] = sub_14041F680;
  sub_14149C0F0(&v14, &unk_14175A94F, v17);
  v18 = v15;
  sub_14046F850(v17, a2, v15, v16);
  result = *(unsigned int *)v17;
  v10 = *(_OWORD *)&v17[8];
  v11 = *(_OWORD *)&v17[24];
  v12 = *(_OWORD *)&v17[40];
  v13 = *(_OWORD *)&v17[56];
  if ( *(_DWORD *)v17 == 1 )
  {
    v5 = v10;
    v6 = v11;
    v7 = v12;
    *(_OWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    if ( v14 )
      return sub_140001660(v18, v14, 1);
  }
  else
  {
    *(_OWORD *)&v17[48] = v13;
    *(_OWORD *)&v17[32] = v12;
    *(_OWORD *)&v17[16] = v11;
    *(_OWORD *)v17 = v10;
    if ( v14 )
      sub_140001660(v18, v14, 1);
    v8 = sub_1414B6B70(*(_QWORD *)&v17[56]);
    if ( v8 )
    {
      *(_QWORD *)a1 = 0x8000000000000013uLL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v8;
    }
    else
    {
      sub_14099A7E0(&v10, v17, 0);
      *(_QWORD *)(a1 + 24) = v11;
      *(_OWORD *)(a1 + 8) = v10;
      *(_QWORD *)a1 = -1;
    }
    return sub_14043D1B0(v17);
  }
  return result;
}