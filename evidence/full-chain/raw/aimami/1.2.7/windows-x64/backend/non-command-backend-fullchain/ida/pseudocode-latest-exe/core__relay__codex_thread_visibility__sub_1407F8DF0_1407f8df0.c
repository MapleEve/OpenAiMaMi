// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407f8df0 | successor of pre-update 0x140251c90 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.958, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_1407F8DF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  char v5; // al
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  const char *v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  int v13; // eax
  __int128 v14; // kr10_16
  __int64 v15; // rbx
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  char *v18; // rbx
  __int64 v19; // r12
  char *v20; // r14
  __int128 v21; // kr20_16
  __int128 v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int128 v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+60h] [rbp-20h]
  __int128 v27; // [rsp+70h] [rbp-10h]
  _OWORD v28[3]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v29; // [rsp+B0h] [rbp+30h]
  unsigned __int64 *v30; // [rsp+C0h] [rbp+40h] BYREF
  char *v31; // [rsp+C8h] [rbp+48h]
  __int64 v32; // [rsp+D0h] [rbp+50h]
  _QWORD v33[2]; // [rsp+100h] [rbp+80h] BYREF
  __int128 v34; // [rsp+110h] [rbp+90h] BYREF
  __int128 v35; // [rsp+120h] [rbp+A0h]
  __int128 v36; // [rsp+130h] [rbp+B0h]
  __int128 v37; // [rsp+140h] [rbp+C0h]
  __int128 v38; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v39; // [rsp+160h] [rbp+E0h]
  __int128 v40; // [rsp+170h] [rbp+F0h]
  __int128 v41; // [rsp+180h] [rbp+100h]
  unsigned __int64 v42; // [rsp+190h] [rbp+110h] BYREF
  _BYTE v43[65]; // [rsp+198h] [rbp+118h]
  _BYTE v44[23]; // [rsp+1D9h] [rbp+159h]
  __int64 v45; // [rsp+1F0h] [rbp+170h]
  __int64 v46; // [rsp+1F8h] [rbp+178h]
  __int64 v47; // [rsp+200h] [rbp+180h]

  v47 = -2;
  sub_1407D8740(&v42);
  v4 = v42;
  v5 = v43[0];
  if ( v42 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v44[15];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)v44;
    v6 = *(_OWORD *)&v43[1];
    v7 = *(_OWORD *)&v43[17];
    v8 = *(_OWORD *)&v43[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v43[49];
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 9) = v6;
    *(_QWORD *)a1 = v4;
    *(_BYTE *)(a1 + 8) = v5;
    return;
  }
  v9 = (const char *)&unk_141A4BE36;
  if ( (v43[0] & 1) != 0 )
    v9 = aModel_1;
  v33[0] = v9;
  v33[1] = v43[0] | 4LL;
  *(_QWORD *)&v38 = v33;
  *((_QWORD *)&v38 + 1) = sub_140191200;
  sub_1416DAFA0(&v34, &unk_141A4BE3A, &v38);
  v45 = *((_QWORD *)&v34 + 1);
  v46 = v34;
  sub_1407C4200(&v42, a2, *((_QWORD *)&v34 + 1), v35);
  if ( (_DWORD)v42 != 1 )
  {
    v24 = *(_OWORD *)v43;
    v25 = *(_OWORD *)&v43[16];
    v26 = *(_OWORD *)&v43[32];
    v27 = *(_OWORD *)&v43[48];
    v28[0] = *(_OWORD *)v43;
    v28[1] = *(_OWORD *)&v43[16];
    v28[2] = *(_OWORD *)&v43[32];
    v29 = *(_OWORD *)&v43[48];
    if ( v46 )
      sub_140001660(v45, v46, 1);
    v13 = sub_1417D8600(*((_QWORD *)&v29 + 1));
    if ( v13 )
    {
      v42 = 0x8000000000000013uLL;
      *(_QWORD *)v43 = 0;
      *(_QWORD *)&v43[8] = v13;
      *(_QWORD *)&v38 = &v42;
      *((_QWORD *)&v38 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v34, &unk_141A4796F, &v38);
      v14 = v34;
      v15 = v35;
      sub_1407785F0(&v42);
    }
    else
    {
      v42 = -1;
      *(_QWORD *)&v38 = &v42;
      *((_QWORD *)&v38 + 1) = v28;
      *(_QWORD *)&v39 = 0;
      sub_140204DA0(&v30, &v38);
      v16 = v42;
      if ( v42 == -1 )
      {
        v42 = (unsigned __int64)v31;
        *(_QWORD *)v43 = v31;
        *(_QWORD *)&v43[8] = v30;
        *(_QWORD *)&v43[16] = &v31[120 * v32];
        sub_1401B4A80(&v34, &v42);
        *(_QWORD *)(a1 + 24) = v35;
        *(_OWORD *)(a1 + 8) = v34;
        *(_QWORD *)a1 = -1;
        goto LABEL_20;
      }
      v46 = *(_QWORD *)v43;
      v17 = *(_QWORD *)&v43[8];
      v45 = *(_QWORD *)&v43[16];
      v34 = *(_OWORD *)&v43[24];
      v35 = *(_OWORD *)&v43[40];
      v18 = v31;
      v19 = v32;
      if ( v32 )
      {
        v20 = v31;
        do
        {
          sub_1401B3850(v20);
          v20 += 120;
          --v19;
        }
        while ( v19 );
      }
      if ( v30 )
        sub_140001660(v18, 120LL * (_QWORD)v30, 8);
      *(_OWORD *)&v43[40] = v35;
      *(_OWORD *)&v43[24] = v34;
      v42 = v16;
      *(_QWORD *)v43 = v46;
      *(_QWORD *)&v43[8] = v17;
      *(_QWORD *)&v43[16] = v45;
      v30 = &v42;
      v31 = (char *)sub_14142D4D0;
      sub_1416DAFA0(&v38, &unk_141A47991, &v30);
      v21 = v38;
      v15 = v39;
      sub_1407785F0(&v42);
      v14 = v21;
    }
    *(_QWORD *)a1 = 10;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 24) = v15;
LABEL_20:
    sub_140778780(v28);
    return;
  }
  v37 = *(_OWORD *)&v43[48];
  v36 = *(_OWORD *)&v43[32];
  v35 = *(_OWORD *)&v43[16];
  v34 = *(_OWORD *)v43;
  *(_QWORD *)&v38 = &v34;
  *((_QWORD *)&v38 + 1) = sub_14142D4D0;
  sub_1416DAFA0(&v22, &unk_141A4794A, &v38);
  v38 = v22;
  *(_QWORD *)&v39 = v23;
  sub_1407785F0(&v34);
  v10 = v38;
  v11 = v39;
  v12 = v40;
  v24 = v38;
  v25 = v39;
  v26 = v40;
  v27 = v41;
  *(_OWORD *)(a1 + 56) = v41;
  *(_OWORD *)(a1 + 40) = v12;
  *(_OWORD *)(a1 + 24) = v11;
  *(_OWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = 10;
  if ( v46 )
    sub_140001660(v45, v46, 1);
}
