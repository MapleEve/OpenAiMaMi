// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407ef070 | successor of pre-update 0x140247b30 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.767, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1407EF070(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v8; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rsi
  double result; // xmm0_8
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  _BYTE v23[176]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v24[176]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v25; // [rsp+188h] [rbp+108h] BYREF
  __int128 v26; // [rsp+190h] [rbp+110h]
  __int128 v27; // [rsp+1A0h] [rbp+120h]
  __int128 v28; // [rsp+1B0h] [rbp+130h]
  __int128 v29; // [rsp+1C0h] [rbp+140h]
  __int128 v30; // [rsp+1D0h] [rbp+150h]
  __int128 v31; // [rsp+1E0h] [rbp+160h]
  __int128 v32; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v33; // [rsp+340h] [rbp+2C0h]
  _BYTE v34[96]; // [rsp+348h] [rbp+2C8h] BYREF
  __int128 v35; // [rsp+4D8h] [rbp+458h] BYREF
  __int64 v36; // [rsp+4E8h] [rbp+468h]
  __int128 v37; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 v38; // [rsp+500h] [rbp+480h]
  char v39; // [rsp+50Fh] [rbp+48Fh]
  __int64 v40; // [rsp+510h] [rbp+490h]

  v40 = -2;
  v5 = 424 * a3;
  if ( a3 > 0x4D4873ECADE304LL )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v8 = a2;
  if ( v5 )
  {
    v10 = a3;
    nullsub_1(a1, a2);
    v6 = 8;
    v11 = sub_140001650(v5, 8);
    if ( !v11 )
LABEL_3:
      sub_14196B2DB(v6, v5);
    a3 = v10;
    v12 = v10;
  }
  else
  {
    v11 = 8;
    v12 = 0;
  }
  *(_QWORD *)&v37 = v12;
  *((_QWORD *)&v37 + 1) = v11;
  v38 = 0;
  *(_QWORD *)&v35 = 0;
  *((_QWORD *)&v35 + 1) = 8;
  v36 = 0;
  v13 = v8 + 104 * a3;
  while ( v8 != v13 )
  {
    sub_1407EA1D0(&v25, v8, a4, a5);
    if ( v25 == -1 )
    {
      *(_OWORD *)&v34[80] = v31;
      *(_OWORD *)&v34[64] = v30;
      *(_OWORD *)&v34[48] = v29;
      *(_OWORD *)&v34[32] = v28;
      *(_OWORD *)&v34[16] = v27;
      *(_OWORD *)v34 = v26;
      v33 = v36;
      v32 = v35;
      *(_OWORD *)a1 = v35;
      *(_QWORD *)(a1 + 16) = v33;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v34;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v34[8];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v34[24];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v34[40];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v34[56];
      result = *(double *)&v34[72];
      *(_OWORD *)(a1 + 96) = *(_OWORD *)&v34[72];
      *(_QWORD *)(a1 + 112) = *(_QWORD *)&v34[88];
      v21 = v38;
      if ( v38 )
      {
        v22 = *((_QWORD *)&v37 + 1);
        do
        {
          sub_1401B1290(v22);
          v22 += 424;
          --v21;
        }
        while ( v21 );
      }
      if ( (_QWORD)v37 )
      {
        v19 = *((_QWORD *)&v37 + 1);
        v20 = 424 * v37;
        return sub_140001660(v19, v20, 8);
      }
      return result;
    }
    sub_1419234B0(&v32, &v25, 424);
    if ( *(_QWORD *)v34 != -1 )
    {
      v39 = 1;
      sub_14083E5B0(v23, v34);
      sub_1419234B0(v24, v23, 176);
      v14 = v36;
      if ( v36 == (_QWORD)v35 )
        sub_14193A230(&v35);
      sub_1419234B0(*((_QWORD *)&v35 + 1) + 176 * v14, v24, 176);
      v36 = v14 + 1;
    }
    v15 = v38;
    if ( v38 == (_QWORD)v37 )
      sub_141939AC0(&v37);
    v8 += 104;
    sub_1419234B0(*((_QWORD *)&v37 + 1) + 424 * v15, &v32, 424);
    v38 = v15 + 1;
  }
  *(_QWORD *)(a1 + 16) = v38;
  result = *(double *)&v37;
  *(_OWORD *)a1 = v37;
  *(_QWORD *)(a1 + 24) = -1;
  v17 = v36;
  if ( v36 )
  {
    v18 = *((_QWORD *)&v35 + 1);
    do
    {
      sub_1401B1470(v18);
      v18 += 176;
      --v17;
    }
    while ( v17 );
  }
  if ( (_QWORD)v35 )
  {
    v19 = *((_QWORD *)&v35 + 1);
    v20 = 176 * v35;
    return sub_140001660(v19, v20, 8);
  }
  return result;
}
