// win 1.2.7 latest-exe | module src/core/relay/codex_project_state.rs | ea 0x140227a80 | successor of pre-update 0x1403ece70 | session <审计会话>
// match evidence: {"body_sim": 0.877, "str_ov": 0, "anchor": 0.235, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
unsigned __int64 *__fastcall sub_140227A80(unsigned __int64 *a1, _QWORD *a2)
{
  __int128 *v4; // r13
  __int128 *v5; // r8
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  bool v8; // al
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  _OWORD *v13; // rcx
  unsigned __int64 v14; // rbx
  __int128 v15; // xmm0
  __int64 v16; // rax
  _BYTE v18[31]; // [rsp+21h] [rbp-3Fh]
  __int128 *v19; // [rsp+58h] [rbp-8h]

  v4 = (__int128 *)a2[1];
  v5 = (__int128 *)a2[3];
  v6 = ((char *)v5 - (char *)v4) / 0x18uLL;
  v7 = 32 * v6;
  v8 = (unsigned __int64)((char *)v5 - (char *)v4) > 0xBFFFFFFFFFFFFFE8uLL;
  v9 = 0x7FFFFFFFFFFFFFF8LL;
  if ( v8 || 32 * v6 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v10 = 0;
    goto LABEL_3;
  }
  if ( !v7 )
  {
    v12 = 8;
    v6 = 0;
    if ( v4 != v5 )
      goto LABEL_7;
LABEL_13:
    v14 = 0;
    v16 = a2[2];
    if ( !v16 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v19 = v5;
  LOBYTE(v9) = v8 || v7 > 0x7FFFFFFFFFFFFFF8LL;
  nullsub_1(v9, (0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)((char *)v5 - (char *)v4)) >> 64);
  v10 = 8;
  v11 = sub_140001650(v7, 8);
  if ( !v11 )
LABEL_3:
    sub_14196B2DB(v10, v7);
  v12 = v11;
  v5 = v19;
  if ( v4 == v19 )
    goto LABEL_13;
LABEL_7:
  v13 = (_OWORD *)(v12 + 1);
  v14 = 0;
  do
  {
    *(_QWORD *)&v18[23] = *((_QWORD *)v4 + 2);
    v15 = *v4;
    v4 = (__int128 *)((char *)v4 + 24);
    *(_OWORD *)&v18[7] = v15;
    *((_BYTE *)v13 - 1) = 3;
    *v13 = *(_OWORD *)v18;
    *(_OWORD *)((char *)v13 + 15) = *(_OWORD *)&v18[15];
    ++v14;
    v13 += 2;
  }
  while ( v4 != v5 );
  v16 = a2[2];
  if ( v16 )
LABEL_10:
    sub_140001660(*a2, 24 * v16, 8);
LABEL_11:
  *a1 = v6;
  a1[1] = v12;
  a1[2] = v14;
  return a1;
}
