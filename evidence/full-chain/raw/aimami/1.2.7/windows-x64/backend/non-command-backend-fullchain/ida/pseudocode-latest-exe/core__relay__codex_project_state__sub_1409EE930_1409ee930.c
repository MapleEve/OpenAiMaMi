// win 1.2.7 latest-exe | module src/core/relay/codex_project_state.rs | ea 0x1409ee930 | successor of pre-update 0x140f63010 | session <审计会话>
// match evidence: {"body_sim": 0.847, "str_ov": 0, "anchor": 0.475, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
void __fastcall sub_1409EE930(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  __int128 v9; // xmm0
  int v10; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[10]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8h]
  __int128 v13; // [rsp+80h] [rbp+0h] BYREF
  __int128 v14; // [rsp+90h] [rbp+10h]
  __int64 v15; // [rsp+A0h] [rbp+20h]

  v15 = -2;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    sub_140A2DA60(&v13, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v7 = *((_QWORD *)&v13 + 1);
    v4 = v14;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 976);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a2 + 968);
      nullsub_1(a1, a2);
      v6 = sub_140001650(v4, 1);
      if ( !v6 )
        sub_14196B2DB(1, v4);
      v7 = v6;
      *(_QWORD *)&v13 = v4;
      *((_QWORD *)&v13 + 1) = v6;
      sub_1419234B0(v6, v5, v4);
      *(_QWORD *)&v14 = v4;
    }
    else
    {
      *(_QWORD *)&v13 = 0;
      *((_QWORD *)&v13 + 1) = 1;
      *(_QWORD *)&v14 = 0;
      v7 = 1;
    }
    BYTE8(v14) = *(_BYTE *)(a2 + 984);
  }
  v12 = v7;
  sub_1416C49D0(&v10, v7, v4);
  if ( v10 == 2 )
  {
    if ( (v11[0] & 3) - 2 >= 2 && (v11[0] & 3) != 0 )
    {
      --v11[0];
      LOBYTE(v10) = 3;
      sub_1416EBAD0(v11);
    }
    v8 = v13;
    *(_QWORD *)a1 = -1;
    if ( v8 )
      sub_140001660(v12, v8, 1);
  }
  else
  {
    v9 = v13;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v9;
  }
}
