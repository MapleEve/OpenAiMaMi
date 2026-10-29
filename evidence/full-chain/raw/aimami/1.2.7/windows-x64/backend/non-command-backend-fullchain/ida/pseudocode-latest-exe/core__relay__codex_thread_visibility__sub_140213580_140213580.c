// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x140213580 | successor of pre-update 0x1403dcc10 | session <审计会话>
// match evidence: {"body_sim": 0.853, "str_ov": 0, "anchor": 0.169, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
_QWORD *__fastcall sub_140213580(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdx
  _QWORD v14[22]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[22]; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v16; // [rsp+188h] [rbp+108h] BYREF
  __int64 v17; // [rsp+198h] [rbp+118h]
  __int64 v18; // [rsp+1A0h] [rbp+120h]

  v18 = -2;
  if ( a2 == a3 )
  {
LABEL_17:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    return a1;
  }
  v5 = a2;
  while ( *(_QWORD *)(v5 + 24) == -1 )
  {
    v15[0] = -1;
LABEL_4:
    v5 += 424;
    if ( v5 == a3 )
      goto LABEL_17;
  }
  sub_14083E5B0(v15, v5 + 24);
  if ( v15[0] == -1 )
    goto LABEL_4;
  nullsub_1(v7, v6);
  v8 = sub_140001650(704, 8);
  if ( !v8 )
    sub_14196B2DB(8, 704);
  v9 = v8;
  v10 = v5 + 424;
  sub_1419234B0(v8, v15, 176);
  *(_QWORD *)&v16 = 4;
  *((_QWORD *)&v16 + 1) = v9;
  v17 = 1;
  v11 = 1;
LABEL_10:
  v12 = v10;
  while ( v12 != a3 )
  {
    v10 = v12 + 424;
    if ( *(_QWORD *)(v12 + 24) == -1 )
    {
      v14[0] = -1;
      goto LABEL_10;
    }
    sub_14083E5B0(v14, v12 + 24);
    v12 = v10;
    if ( v14[0] != -1 )
    {
      if ( v11 == (_QWORD)v16 )
      {
        sub_141939070((unsigned int)&v16, v11, 1, 8, 176);
        v9 = *((_QWORD *)&v16 + 1);
      }
      sub_1419234B0(v9 + 176 * v11++, v14, 176);
      v17 = v11;
      goto LABEL_10;
    }
  }
  a1[2] = v17;
  *(_OWORD *)a1 = v16;
  return a1;
}
