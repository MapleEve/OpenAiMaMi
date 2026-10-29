// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x140227770 | successor of pre-update 0x1403ec9e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.941, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140227770(__int64 a1, __int128 *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r14
  __int128 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rax
  _OWORD v14[4]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h]
  __int128 v18; // [rsp+80h] [rbp+0h]
  __int64 v19; // [rsp+98h] [rbp+18h]
  __int64 v20; // [rsp+A0h] [rbp+20h]

  v20 = -2;
  v2 = *((_QWORD *)a2 + 8);
  if ( v2 > 0x555555555555555LL )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( 24 * v2 )
  {
    v5 = a2;
    nullsub_1(a1, a2);
    v3 = 8;
    v6 = sub_140001650(24 * v2, 8);
    a2 = v5;
    v7 = v6;
    v8 = v2;
    if ( !v7 )
LABEL_3:
      sub_14196B2DB(v3, 24 * v2);
  }
  else
  {
    v7 = 8;
    v8 = 0;
  }
  *(_QWORD *)&v18 = v8;
  *((_QWORD *)&v18 + 1) = v7;
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v14[3] = a2[3];
  v14[2] = v11;
  v14[1] = v10;
  v14[0] = v9;
  v15 = v2;
  v19 = 0;
  while ( 1 )
  {
    v12 = sub_140A99A30(v14);
    if ( !v12 )
      break;
    sub_1416DB410(&v16, v12);
    *(_QWORD *)(v7 + 16) = v17;
    *(_OWORD *)v7 = v16;
    ++v19;
    v7 += 24;
  }
  *(_QWORD *)(a1 + 16) = v19;
  *(_OWORD *)a1 = v18;
  return a1;
}
