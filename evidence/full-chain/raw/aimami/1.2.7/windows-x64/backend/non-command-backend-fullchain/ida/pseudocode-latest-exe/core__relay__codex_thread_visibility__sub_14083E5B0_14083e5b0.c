// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x14083e5b0 | successor of pre-update 0x140284530 | session <审计会话>
// match evidence: {"body_sim": 0.904, "str_ov": 0, "anchor": 0.278, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_14083E5B0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // bl
  bool v8; // zf
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h]
  __m256i v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+80h] [rbp+0h]
  __m256i v17; // [rsp+90h] [rbp+10h]
  __int128 v18; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h]
  __int64 v20; // [rsp+D0h] [rbp+50h]
  _BYTE v21[24]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v22; // [rsp+F0h] [rbp+70h]
  __int64 v23; // [rsp+F8h] [rbp+78h]

  v23 = -2;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    nullsub_1(a1, a2);
    v6 = sub_140001650(v4, 1);
    if ( !v6 )
      sub_14196B2DB(1, v4);
    v20 = v6;
    sub_1419234B0(v6, v5, v4);
    v7 = *(_BYTE *)(a2 + 24);
    v8 = *(_QWORD *)(a2 + 32) == -1;
    v22 = v4;
    if ( !v8 )
    {
LABEL_4:
      sub_1416DB410(v21, a2 + 32);
      sub_1416DB410(&v18, a2 + 56);
      v17.m256i_i64[0] = *(_QWORD *)&v21[16];
      v16 = *(_OWORD *)v21;
      *(_OWORD *)&v17.m256i_u64[1] = v18;
      v17.m256i_i64[3] = v19;
      v4 = v22;
      if ( *(_QWORD *)(a2 + 80) != -1 )
        goto LABEL_5;
LABEL_9:
      *(_QWORD *)&v14 = -1;
      if ( *(_QWORD *)(a2 + 128) != -1 )
        goto LABEL_6;
LABEL_10:
      v9 = -1;
      goto LABEL_11;
    }
  }
  else
  {
    v20 = 1;
    v7 = *(_BYTE *)(a2 + 24);
    v8 = *(_QWORD *)(a2 + 32) == -1;
    v22 = 0;
    if ( !v8 )
      goto LABEL_4;
  }
  *(_QWORD *)&v16 = -1;
  if ( *(_QWORD *)(a2 + 80) == -1 )
    goto LABEL_9;
LABEL_5:
  sub_1416DB410(v21, a2 + 80);
  sub_1416DB410(&v18, a2 + 104);
  v15.m256i_i64[0] = *(_QWORD *)&v21[16];
  v14 = *(_OWORD *)v21;
  *(_OWORD *)&v15.m256i_u64[1] = v18;
  v15.m256i_i64[3] = v19;
  v4 = v22;
  if ( *(_QWORD *)(a2 + 128) == -1 )
    goto LABEL_10;
LABEL_6:
  sub_1416DB410(v21, a2 + 128);
  sub_1416DB410(&v18, a2 + 152);
  v9 = *(_QWORD *)v21;
  v11 = *(_OWORD *)&v21[8];
  v12 = v18;
  v13 = v19;
  v4 = v22;
LABEL_11:
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 16) = v4;
  *(_BYTE *)(a1 + 24) = v7;
  *(_OWORD *)(a1 + 32) = v16;
  *(__m256i *)(a1 + 48) = v17;
  *(_OWORD *)(a1 + 80) = v14;
  *(__m256i *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 128) = v9;
  *(_OWORD *)(a1 + 136) = v11;
  *(_OWORD *)(a1 + 152) = v12;
  *(_QWORD *)(a1 + 168) = v13;
  return v13;
}
