// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x1402275f0 | successor of pre-update 0x1403ec7b0 | session <审计会话>
// match evidence: {"body_sim": 0.585, "str_ov": 0, "anchor": 0.278, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
unsigned __int64 *__fastcall sub_1402275F0(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int128 v12; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]
  unsigned __int64 v17; // [rsp+58h] [rbp-8h]
  __int64 v18; // [rsp+60h] [rbp+0h]

  v18 = -2;
  v3 = a2[2];
  if ( !v3 )
  {
    v15 = 0;
LABEL_7:
    v16 = 8;
    v6 = 0;
    goto LABEL_8;
  }
  v4 = *a2;
  v5 = a2[1];
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v5 - *a2) >> 3);
  if ( v3 < v6 )
    v6 = a2[2];
  v7 = 24 * v6;
  if ( v6 > 0x555555555555555LL )
    sub_14196B2DB(0, v7);
  if ( v5 == v4 )
  {
    v15 = v6;
    goto LABEL_7;
  }
  nullsub_1(0x555555555555555LL, v7);
  v9 = sub_140001650(24 * v6, 8);
  if ( !v9 )
    sub_14196B2DB(8, 24 * v6);
  v10 = v9;
  v15 = v6;
  v16 = v9;
  v11 = 0;
  do
  {
    v14 = v11;
    sub_1416DB410(&v12, v4);
    v11 = v14 + 1;
    *(_QWORD *)(v10 + 16) = v13;
    *(_OWORD *)v10 = v12;
    v4 += 24;
    v10 += 24;
  }
  while ( v6 != v11 );
LABEL_8:
  v17 = v6;
  a1[2] = v6;
  *a1 = v15;
  a1[1] = v16;
  return a1;
}
