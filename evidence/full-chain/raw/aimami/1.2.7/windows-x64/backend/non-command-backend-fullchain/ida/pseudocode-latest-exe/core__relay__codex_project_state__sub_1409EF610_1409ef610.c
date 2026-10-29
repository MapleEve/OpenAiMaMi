// win 1.2.7 latest-exe | module src/core/relay/codex_project_state.rs | ea 0x1409ef610 | successor of pre-update 0x140f63d10 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.782, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_1409EF610(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  int v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-30h]
  __int128 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+78h] [rbp-8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+0h]
  __int64 v15; // [rsp+88h] [rbp+8h]
  _BYTE v16[72]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v17; // [rsp+E0h] [rbp+60h]
  __int64 v18; // [rsp+E8h] [rbp+68h]

  v18 = -2;
  v8[0] = aThreads_5;
  v8[1] = 7;
  *(_QWORD *)v16 = v8;
  *(_QWORD *)&v16[8] = sub_140191200;
  sub_1416DAFA0(&v13, &unk_141A5C41E, v16);
  v17 = v14;
  sub_140930990(v16, a2, v14, v15);
  v9 = *(_OWORD *)&v16[8];
  v10 = *(_OWORD *)&v16[24];
  v11 = *(_OWORD *)&v16[40];
  v12 = *(_OWORD *)&v16[56];
  if ( *(_DWORD *)v16 == 1 )
  {
    v4 = v9;
    v5 = v10;
    v6 = v11;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    if ( v13 )
      sub_140001660(v17, v13, 1);
  }
  else
  {
    *(_OWORD *)&v16[48] = v12;
    *(_OWORD *)&v16[32] = v11;
    *(_OWORD *)&v16[16] = v10;
    *(_OWORD *)v16 = v9;
    if ( v13 )
      sub_140001660(v17, v13, 1);
    v7 = sub_1417D8600(*(_QWORD *)&v16[56]);
    if ( v7 )
    {
      *(_QWORD *)a1 = 0x8000000000000013uLL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v7;
    }
    else
    {
      sub_140865500(&v9, v16, 0);
      *(_QWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = -1;
    }
    sub_140904890(v16);
  }
}
