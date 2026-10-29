// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407f69e0 | successor of pre-update 0x14024f710 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.892, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_1407F69E0(__int64 a1, __int128 *a2, char a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // rdi
  _OWORD *v11; // rcx
  _OWORD v12[5]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v13; // [rsp+98h] [rbp+18h]
  __int128 v14; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h]
  __int128 v16; // [rsp+C0h] [rbp+40h]
  __int64 v17; // [rsp+D0h] [rbp+50h]
  _BYTE v18[96]; // [rsp+D8h] [rbp+58h]
  _QWORD *v19; // [rsp+138h] [rbp+B8h]
  __int64 v20; // [rsp+140h] [rbp+C0h]

  v20 = -2;
  v7 = a6[1];
  v19 = a6;
  v8 = a6[2];
  sub_1407F2550((__int64)v12, a2, a3);
  if ( LODWORD(v12[0]) == -1 )
  {
    v11 = v19;
    *(_QWORD *)(a1 + 16) = v19[2];
    *(_OWORD *)a1 = *v11;
    *(_QWORD *)(a1 + 24) = -1;
  }
  else
  {
    sub_140213580(&v14, v7, v7 + 424 * v8);
    *(_OWORD *)&v18[80] = v13;
    *(_OWORD *)&v18[64] = v12[4];
    *(_OWORD *)&v18[48] = v12[3];
    *(_OWORD *)&v18[32] = v12[2];
    *(_OWORD *)&v18[16] = v12[1];
    *(_OWORD *)v18 = v12[0];
    v17 = v15;
    v9 = v14;
    v16 = v14;
    *(_QWORD *)(a1 + 112) = *((_QWORD *)&v13 + 1);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v18[72];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v18[56];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v18[40];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v18[24];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v18[8];
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v18;
    *(_OWORD *)a1 = v9;
    if ( v8 )
    {
      v10 = v7;
      do
      {
        sub_1401B1290(v10);
        v10 += 424;
        --v8;
      }
      while ( v8 );
    }
    if ( *v19 )
      sub_140001660(v7, 424LL * *v19, 8);
  }
}
