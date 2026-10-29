// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x1402285c0 | successor of pre-update 0x1403ed710 | session <审计会话>
// match evidence: {"body_sim": 0.862, "str_ov": 0, "anchor": 0.169, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
_QWORD *__fastcall sub_1402285C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int128 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rbx
  _BYTE *v11; // r14
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-20h]
  __int64 v20; // [rsp+28h] [rbp-18h]
  __int64 v21; // [rsp+38h] [rbp-8h]

  v5 = 0x97B425ED097B425FuLL * (unsigned __int128)(unsigned __int64)(a3 - a2);
  if ( a3 == a2 )
  {
    v19 = 0;
    v20 = 8;
    v6 = 0;
  }
  else
  {
    v6 = *((_QWORD *)&v5 + 1) >> 7;
    v7 = 32LL * (*((_QWORD *)&v5 + 1) >> 7);
    nullsub_1(0x97B425ED097B425FuLL, *((_QWORD *)&v5 + 1));
    v8 = sub_140001650(v7, 8);
    if ( !v8 )
      sub_14196B2DB(8, v7);
    v19 = v6;
    v20 = v8;
    v10 = (_BYTE *)(a2 + 24);
    v11 = (_BYTE *)(v8 + 24);
    v12 = 0;
    do
    {
      v14 = *((_QWORD *)v10 - 1);
      v15 = 1;
      if ( v14 )
      {
        v21 = v12;
        v16 = *((_QWORD *)v10 - 2);
        nullsub_1(v12, v9);
        v17 = sub_140001650(v14, 1);
        if ( !v17 )
          sub_14196B2DB(1, v14);
        v15 = v17;
        sub_1419234B0(v17, v16, v14);
        v12 = v21;
      }
      v13 = *v10;
      *((_QWORD *)v11 - 3) = v14;
      *((_QWORD *)v11 - 2) = v15;
      *((_QWORD *)v11 - 1) = v14;
      *v11 = v13;
      ++v12;
      v10 += 216;
      v11 += 32;
    }
    while ( v6 != v12 );
  }
  a1[2] = v6;
  *a1 = v19;
  a1[1] = v20;
  return a1;
}
