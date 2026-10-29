// win 1.2.7 | module src/core/analytics/parser/tokens.rs | ea 0x140ec03e0 | name sub_140EC03E0
// win 1.2.7 | module src/core/analytics/parser/tokens.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140EC03E0(_QWORD *a1, _BYTE *a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // al
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // al
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // al
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  bool v20; // al
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // cl
  __int64 v25; // rcx
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]

  if ( *a2 != 5 )
  {
    *a1 = 2;
    return;
  }
  v6 = sub_1416419F0(aInputTokens_2, 12, a2);
  if ( !v6 )
  {
    v9 = 0;
    goto LABEL_11;
  }
  if ( *(_BYTE *)v6 != 2 )
    goto LABEL_8;
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v8 = v7 >= 0;
    goto LABEL_9;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v8 = 1;
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
LABEL_9:
  v27 = v7;
  v9 = v8 & (unsigned __int8)(v7 >= 0);
LABEL_11:
  v10 = sub_1416419F0(aOutputTokens_2, 13, a2);
  if ( v10 )
  {
    if ( *(_BYTE *)v10 != 2 || (v11 = *(_QWORD *)(v10 + 8), v11 == 2) )
    {
      v12 = 0;
    }
    else if ( (_DWORD)v11 == 1 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = 1;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = v11 >= 0;
    }
    v26 = v11;
    v13 = v12 & (unsigned __int8)(v11 >= 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = sub_1416419F0(aReasoningOutpu, 23, a2);
  if ( v14 )
  {
    if ( *(_BYTE *)v14 != 2 || (v15 = *(_QWORD *)(v14 + 8), v15 == 2) )
    {
      v16 = 0;
    }
    else
    {
      v2 = *(_QWORD *)(v14 + 16);
      v16 = (_DWORD)v15 == 1 || v2 >= 0;
    }
    v17 = v16 & (unsigned __int8)(v2 >= 0);
  }
  else
  {
    v17 = 0;
  }
  v18 = sub_1416419F0(aCachedInputTok_0, 19, a2);
  if ( v18 )
  {
    if ( *(_BYTE *)v18 != 2 || (v19 = *(_QWORD *)(v18 + 8), v19 == 2) )
    {
      v20 = 0;
    }
    else
    {
      v3 = *(_QWORD *)(v18 + 16);
      v20 = (_DWORD)v19 == 1 || v3 >= 0;
    }
    v21 = v20 & (unsigned __int8)(v3 >= 0);
  }
  else
  {
    v21 = 0;
  }
  v22 = sub_1416419F0(aTotalTokens_1, 12, a2);
  if ( v22 )
  {
    if ( *(_BYTE *)v22 != 2 || (v23 = *(_QWORD *)(v22 + 8), v23 == 2) )
    {
      v24 = 0;
    }
    else
    {
      v22 = *(_QWORD *)(v22 + 16);
      v24 = (_DWORD)v23 == 1 || v22 >= 0;
    }
    v25 = v24 & (unsigned __int8)(v22 >= 0);
  }
  else
  {
    v25 = 0;
  }
  *a1 = v9;
  a1[1] = v27;
  a1[2] = v13;
  a1[3] = v26;
  a1[4] = v17;
  a1[5] = v2;
  a1[6] = v21;
  a1[7] = v3;
  a1[8] = v25;
  a1[9] = v22;
}
