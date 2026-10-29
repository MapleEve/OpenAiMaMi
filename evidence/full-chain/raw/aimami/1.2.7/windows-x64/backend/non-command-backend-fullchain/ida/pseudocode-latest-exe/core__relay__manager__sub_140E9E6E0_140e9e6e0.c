// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140e9e6e0 | successor of pre-update 0x140d81d50 | session <审计会话>
// match evidence: {"body_sim": 0.718, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
double __fastcall sub_140E9E6E0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int128 v6; // kr00_16
  __int128 v7; // kr10_16
  __int128 v8; // kr20_16
  __int64 v9; // r9
  __int64 v10; // r10
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  double result; // xmm0_8
  _BYTE v20[104]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v21[928]; // [rsp+98h] [rbp+18h] BYREF
  _BYTE v22[24]; // [rsp+438h] [rbp+3B8h] BYREF
  _BYTE v23[104]; // [rsp+450h] [rbp+3D0h] BYREF
  _BYTE v24[888]; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v25; // [rsp+830h] [rbp+7B0h]
  __int128 v26; // [rsp+838h] [rbp+7B8h]
  unsigned __int8 v27; // [rsp+850h] [rbp+7D0h]
  _QWORD v28[2]; // [rsp+860h] [rbp+7E0h] BYREF
  __int128 v29; // [rsp+870h] [rbp+7F0h] BYREF
  __int128 v30; // [rsp+880h] [rbp+800h]
  __int128 v31; // [rsp+890h] [rbp+810h]
  __int128 v32; // [rsp+8A0h] [rbp+820h]
  __int128 v33; // [rsp+8B0h] [rbp+830h]
  __int128 v34; // [rsp+8C0h] [rbp+840h]
  __int64 v35; // [rsp+8D8h] [rbp+858h]

  v35 = -2;
  v4 = *a2;
  v5 = *a2 + 16;
  sub_1407D5CC0(v20);
  v6 = *(_OWORD *)&v20[32];
  v29 = *(_OWORD *)&v20[48];
  v30 = *(_OWORD *)&v20[64];
  if ( *(_QWORD *)v20 != -1 )
  {
    *(_OWORD *)&v23[80] = *(_OWORD *)&v20[80];
    *(_QWORD *)&v23[16] = *(_QWORD *)&v20[16];
    *(_OWORD *)&v23[24] = *(_OWORD *)&v20[24];
    *(_QWORD *)&v23[40] = *(_QWORD *)&v20[40];
    *(_OWORD *)&v23[48] = v29;
    *(_OWORD *)&v23[64] = v30;
    *(_OWORD *)v23 = *(_OWORD *)v20;
LABEL_3:
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v23[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v23[64];
    v7 = *(_OWORD *)v23;
    v8 = *(_OWORD *)&v23[16];
    v9 = *(_QWORD *)&v23[32];
    *(_QWORD *)&v11 = *(_QWORD *)&v23[48];
    v10 = *(_QWORD *)&v23[40];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v23[48];
    *(_QWORD *)(a1 + 40) = v9;
    *(_QWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
LABEL_4:
    *(_QWORD *)a1 = -1;
    goto LABEL_21;
  }
  if ( *(_QWORD *)&v20[8] != -1 )
  {
    if ( *(_QWORD *)&v20[8] )
      sub_140001660(*(_QWORD *)&v20[16], *(_QWORD *)&v20[8], 1);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v6 + 1), v6, 1);
  }
  sub_1407E52E0(v20);
  if ( *(_DWORD *)v20 == -1 )
  {
    sub_1408D1F30(v23, v5);
    if ( *(_QWORD *)v23 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v23[80] = *(_OWORD *)&v20[80];
    *(_OWORD *)&v23[64] = *(_OWORD *)&v20[64];
    *(_OWORD *)&v23[48] = *(_OWORD *)&v20[48];
    *(_OWORD *)&v23[32] = *(_OWORD *)&v20[32];
    *(_OWORD *)&v23[16] = *(_OWORD *)&v20[16];
    *(_OWORD *)v23 = *(_OWORD *)v20;
    if ( *(_QWORD *)v20 != -1 )
      goto LABEL_3;
  }
  sub_140EB7850(v20, a2);
  sub_140EA81D0(v23, v4, v20);
  if ( *(_DWORD *)v23 == -1 )
  {
    sub_140292E20(v20);
    LOBYTE(v14) = 1;
    sub_140A5CBE0(v20, v5, v14);
    v15 = *(_QWORD *)v20;
    v29 = *(_OWORD *)&v20[8];
    v30 = *(_OWORD *)&v20[24];
    v31 = *(_OWORD *)&v20[40];
    v32 = *(_OWORD *)&v20[56];
    v33 = *(_OWORD *)&v20[72];
    v34 = *(_OWORD *)&v20[88];
    if ( *(_QWORD *)v20 == -1 )
    {
      *(_OWORD *)(a1 + 88) = v34;
      *(_OWORD *)(a1 + 72) = v33;
      v11 = v29;
      v17 = v30;
      v18 = v31;
      *(_OWORD *)(a1 + 56) = v32;
      *(_OWORD *)(a1 + 40) = v18;
      *(_OWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v11;
      goto LABEL_4;
    }
    sub_1419234B0(v24, v21, 928);
    *(_OWORD *)&v23[8] = v29;
    *(_OWORD *)&v23[24] = v30;
    *(_OWORD *)&v23[40] = v31;
    *(_OWORD *)&v23[56] = v32;
    *(_OWORD *)&v23[72] = v33;
    *(_OWORD *)&v23[88] = v34;
    *(_QWORD *)v23 = v15;
    v16 = qword_141AA1E90[v27];
    v28[0] = (char *)dword_141AA1EB0 + dword_141AA1EB0[v27];
    v28[1] = v16;
    *(_QWORD *)&v11 = v26;
    v29 = v26;
    *(_QWORD *)v20 = v28;
    *(_QWORD *)&v20[8] = sub_140191200;
    *(_QWORD *)&v20[16] = &v29;
    *(_QWORD *)&v20[24] = sub_1416CE600;
    sub_1416DAFA0(v22, &unk_141A9F718, v20);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStateDbSelecte, 17, (__int64)v22);
    sub_1403F7DF0(v20, v23);
    sub_1419234B0(a1, v20, 992);
    sub_140038710(v23);
    if ( v25 )
      *(double *)&v11 = sub_140001660(v26, v25, 1);
  }
  else
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v23[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v23[64];
    v11 = *(_OWORD *)v23;
    v12 = *(_OWORD *)&v23[16];
    v13 = *(_OWORD *)&v23[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v23[48];
    *(_OWORD *)(a1 + 40) = v13;
    *(_OWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = -1;
    sub_140292E20(v20);
  }
LABEL_21:
  *(_QWORD *)&result = v11;
  return result;
}
