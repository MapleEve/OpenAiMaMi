// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a3c790 | successor of pre-update 0x140e1f630 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.556, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140A3C790(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int128 *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  int v13; // r15d
  int v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm3
  __int128 v28; // xmm4
  __int128 v29; // xmm5
  __int64 v30; // r8
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  _QWORD v36[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v37; // [rsp+38h] [rbp-48h] BYREF
  __int128 v38; // [rsp+48h] [rbp-38h]
  __int128 v39; // [rsp+58h] [rbp-28h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  __int128 v41; // [rsp+70h] [rbp-10h] BYREF
  __int128 v42; // [rsp+88h] [rbp+8h] BYREF
  __int128 v43; // [rsp+98h] [rbp+18h]
  __int128 v44; // [rsp+A8h] [rbp+28h]
  __int64 v45; // [rsp+B8h] [rbp+38h]
  __int128 *v46; // [rsp+C0h] [rbp+40h]
  __int64 v47; // [rsp+C8h] [rbp+48h]
  __int64 v48; // [rsp+D0h] [rbp+50h]
  __int64 v49; // [rsp+D8h] [rbp+58h]
  char v50; // [rsp+E7h] [rbp+67h] BYREF
  __int64 v51; // [rsp+E8h] [rbp+68h]
  __int64 v52; // [rsp+F0h] [rbp+70h]

  v52 = -2;
  v46 = a4;
  if ( a3 < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v47 = a3;
  if ( a3 )
  {
    nullsub_1(a1, a2);
    v6 = 1;
    v9 = sub_140001650(a3, 1);
    if ( !v9 )
LABEL_3:
      sub_14196B2DB(v6, a3);
    v48 = v9;
    sub_1419234B0(v9, a2, a3);
  }
  else
  {
    v48 = 1;
  }
  sub_141597890(&v37);
  v41 = v37;
  *(_QWORD *)&v42 = 0;
  *((_QWORD *)&v42 + 1) = 1;
  *(_QWORD *)&v43 = 0;
  *(_QWORD *)&v38 = 1610612768;
  *(_QWORD *)&v37 = &v42;
  *((_QWORD *)&v37 + 1) = &off_141A6D298;
  if ( (unsigned __int8)sub_141598A30(&v41, &v37) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v50,
      (unsigned int)&unk_141A69A18,
      (__int64)&off_141A6D350);
  v49 = *((_QWORD *)&v42 + 1);
  v51 = v42;
  if ( (unsigned __int64)v43 <= 0x10 )
  {
    if ( (_QWORD)v43 != 16 )
LABEL_11:
      sub_14196B4F0(DWORD2(v42), v43, 0, 16, (__int64)&off_141A6A5B8);
  }
  else if ( *(char *)(*((_QWORD *)&v42 + 1) + 16LL) <= -65 )
  {
    goto LABEL_11;
  }
  v36[0] = *((_QWORD *)&v42 + 1);
  v36[1] = 16;
  *(_QWORD *)&v42 = v36;
  *((_QWORD *)&v42 + 1) = sub_140191200;
  sub_1416DAFA0(&v37, &unk_141A6A5D0, &v42);
  if ( v51 )
    sub_140001660(v49, v51, 1);
  v49 = *((_QWORD *)&v37 + 1);
  v51 = v37;
  v10 = v38;
  sub_1414331D0(&v41);
  v12 = v41;
  v13 = ((int)v41 >> 13) - 1;
  v14 = 0;
  if ( (int)v41 >> 13 <= 0 )
  {
    v15 = (1 - ((int)v41 >> 13)) / 0x190u + 1;
    v11 = 400 * v15;
    v13 += v11;
    v14 = -146097 * v15;
  }
  v16 = DWORD1(v41);
  *(_QWORD *)&v42 = -1;
  *(_QWORD *)&v37 = -1;
  v17 = sub_1416AE140(v11);
  v22 = v17;
  if ( *(_BYTE *)(v17 + 16) == 1 )
  {
    v23 = *(_QWORD *)v17;
    v24 = *(_QWORD *)(v22 + 8);
  }
  else
  {
    v23 = sub_1416C5230(v19, v18, v20, v21);
    *(_QWORD *)v22 = v23;
    *(_QWORD *)(v22 + 8) = v24;
    *(_BYTE *)(v22 + 16) = 1;
  }
  *(_QWORD *)v22 = v23 + 1;
  v25 = *v46;
  v26 = v46[1];
  v27 = *a5;
  v28 = a5[1];
  v29 = a5[2];
  *(_OWORD *)(a1 + 400) = v46[2];
  *(_OWORD *)(a1 + 384) = v26;
  *(_OWORD *)(a1 + 368) = v25;
  *(_OWORD *)(a1 + 416) = v27;
  *(_OWORD *)(a1 + 432) = v28;
  *(_OWORD *)(a1 + 448) = v29;
  v30 = v47;
  *(_QWORD *)(a1 + 80) = v47;
  *(_QWORD *)(a1 + 88) = v48;
  *(_QWORD *)(a1 + 96) = v30;
  *(_QWORD *)(a1 + 104) = v51;
  *(_QWORD *)(a1 + 112) = v49;
  *(_QWORD *)(a1 + 120) = v10;
  *(_QWORD *)(a1 + 464) = v16
                        + 86400LL
                        * (int)(((v13 / 100) >> 2)
                              + ((1461 * v13) >> 2)
                              + v14
                              + ((v12 >> 4) & 0x1FF)
                              - v13 / 100
                              - 719163);
  *(_BYTE *)(a1 + 476) = 0;
  *(_QWORD *)(a1 + 232) = v45;
  v31 = v42;
  v32 = v43;
  *(_OWORD *)(a1 + 216) = v44;
  *(_OWORD *)(a1 + 200) = v32;
  *(_OWORD *)(a1 + 184) = v31;
  *(_QWORD *)(a1 + 288) = v40;
  v33 = v38;
  v34 = v39;
  *(_OWORD *)(a1 + 240) = v37;
  *(_OWORD *)(a1 + 256) = v33;
  *(_OWORD *)(a1 + 272) = v34;
  *(_OWORD *)(a1 + 320) = *(_OWORD *)&off_141A68E20;
  *(_OWORD *)(a1 + 336) = xmmword_141A68E30;
  *(_QWORD *)(a1 + 352) = v23;
  *(_QWORD *)(a1 + 360) = v24;
  *(_DWORD *)(a1 + 472) = 0;
  *(_BYTE *)(a1 + 477) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 8;
  *(_OWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = 1;
  *(_QWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 296) = -1;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  return a1;
}
