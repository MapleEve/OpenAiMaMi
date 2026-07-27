// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x1404993c0
// name: repair_if_needed
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_project_state::repair_if_needed | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall repair_if_needed(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  _BYTE v22[24]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  __int128 v27; // [rsp+80h] [rbp+0h]
  __int128 v28; // [rsp+90h] [rbp+10h]
  __int128 v29; // [rsp+118h] [rbp+98h] BYREF
  __int64 v30; // [rsp+128h] [rbp+A8h]
  __int128 v31; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v32; // [rsp+140h] [rbp+C0h]
  _QWORD v33[4]; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v34; // [rsp+168h] [rbp+E8h]
  __int64 v35; // [rsp+170h] [rbp+F0h]
  __int64 v36; // [rsp+178h] [rbp+F8h]
  __int64 v37; // [rsp+180h] [rbp+100h]
  __int64 v38; // [rsp+188h] [rbp+108h]
  __int64 v39; // [rsp+198h] [rbp+118h]
  __int64 v40; // [rsp+1A0h] [rbp+120h]
  __int64 v41; // [rsp+1B0h] [rbp+130h]
  __int64 v42; // [rsp+1B8h] [rbp+138h]
  __int128 v43; // [rsp+1C0h] [rbp+140h]
  __int64 v44; // [rsp+1D0h] [rbp+150h]
  __int64 v45; // [rsp+1D8h] [rbp+158h]
  __int64 v46; // [rsp+1E8h] [rbp+168h]
  __int64 v47; // [rsp+208h] [rbp+188h]
  char v48; // [rsp+232h] [rbp+1B2h]
  __int128 v49; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v50; // [rsp+248h] [rbp+1C8h]
  _BYTE v51[120]; // [rsp+250h] [rbp+1D0h]
  _QWORD v52[3]; // [rsp+2C8h] [rbp+248h] BYREF
  __int128 v53; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v54; // [rsp+2F0h] [rbp+270h]
  __int128 v55; // [rsp+300h] [rbp+280h]
  __int128 v56; // [rsp+310h] [rbp+290h]
  __int128 v57; // [rsp+320h] [rbp+2A0h]
  __int128 v58; // [rsp+330h] [rbp+2B0h]
  __int64 v59; // [rsp+348h] [rbp+2C8h]
  __int128 v60; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v61; // [rsp+360h] [rbp+2E0h]
  char v62; // [rsp+377h] [rbp+2F7h]
  __int64 v63; // [rsp+378h] [rbp+2F8h]

  v63 = -2;
  sub_1404A1A50(v33, a2);
  v62 = 1;
  stability_issue((__int64)v22, (__int64)v33);
  v5 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 == -1 )
  {
    v7 = v46;
    v8 = v47;
    v9 = v41;
    v10 = v42;
    nullsub_1(v4);
    v11 = sub_140001650(39, 1);
    if ( !v11 )
    {
      v52[2] = v10;
      v59 = v9;
      sub_1416C2D4B(1, 39);
    }
    *(_OWORD *)(v11 + 16) = xmmword_14175A8B6;
    *(_OWORD *)v11 = xmmword_14175A8A6;
    *(_QWORD *)(v11 + 31) = 0x8DA4E5AEBFE4809CuLL;
    *(_QWORD *)(a1 + 24) = -1;
    *(_QWORD *)(a1 + 56) = v9;
    *(_QWORD *)(a1 + 64) = v10;
    *(_OWORD *)(a1 + 72) = v43;
    *(_QWORD *)a1 = 39;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = 39;
    *(_QWORD *)(a1 + 88) = v7;
    *(_QWORD *)(a1 + 96) = v8;
    *(_QWORD *)(a1 + 104) = 0;
    *(_BYTE *)(a1 + 112) = 0;
    goto LABEL_22;
  }
  v61 = *(_QWORD *)&v22[16];
  v60 = *(_OWORD *)v22;
  if ( !v48 )
  {
    *(_QWORD *)v22 = &v60;
    *(_QWORD *)&v22[8] = sub_1400015F0;
    sub_14149C0F0(&v31, &unk_14175A83D, v22);
    *(_QWORD *)(a1 + 32) = v32;
    *(_OWORD *)(a1 + 16) = v31;
    *(_QWORD *)(a1 + 8) = 10;
LABEL_19:
    *(_QWORD *)a1 = -1;
LABEL_20:
    if ( (_QWORD)v60 )
      sub_140001660(*((_QWORD *)&v60 + 1), v60, 1);
LABEL_22:
    if ( v33[0] )
      sub_140001660(v33[1], v33[0], 1);
    if ( v37 != -1 && v37 )
      sub_140001660(v38, v37, 1);
    if ( v39 != -1 && v39 )
      sub_140001660(v40, v39, 1);
    if ( v5 != -1 && v41 != -1 && v41 )
      sub_140001660(v42, v41, 1);
    v15 = v36;
    if ( v36 )
    {
      v16 = (_QWORD *)(v35 + 8);
      do
      {
        v17 = *(v16 - 1);
        if ( v17 )
          sub_140001660(*v16, v17, 1);
        v16 += 3;
        --v15;
      }
      while ( v15 );
    }
    if ( v34 )
      sub_140001660(v35, 24 * v34, 8);
    if ( v44 != -1 && v44 )
      sub_140001660(v45, v44, 1);
    return a1;
  }
  repair((__int64)v22, a2);
  v6 = *(_QWORD *)v22;
  v53 = *(_OWORD *)&v22[8];
  v54 = v23;
  v55 = v24;
  v56 = v25;
  v57 = v26;
  v58 = v27;
  if ( *(_QWORD *)v22 == -1 )
  {
    *(_OWORD *)(a1 + 88) = v58;
    *(_OWORD *)(a1 + 72) = v57;
    v12 = v53;
    v13 = v54;
    v14 = v55;
    *(_OWORD *)(a1 + 56) = v56;
    *(_OWORD *)(a1 + 40) = v14;
    *(_OWORD *)(a1 + 24) = v13;
    *(_OWORD *)(a1 + 8) = v12;
    goto LABEL_19;
  }
  *(_OWORD *)&v51[104] = v28;
  *(_OWORD *)&v51[8] = v53;
  *(_OWORD *)&v51[24] = v54;
  *(_OWORD *)&v51[40] = v55;
  *(_OWORD *)&v51[56] = v56;
  *(_OWORD *)&v51[72] = v57;
  *(_OWORD *)&v51[88] = v58;
  *(_QWORD *)v51 = *(_QWORD *)v22;
  sub_1404A1A50(v22, a2);
  stability_issue((__int64)&v49, (__int64)v22);
  if ( (_QWORD)v49 != -1 )
  {
    *(_QWORD *)&v54 = v50;
    v53 = v49;
    v52[0] = &v53;
    v52[1] = sub_1400015F0;
    sub_14149C0F0(&v29, &unk_14175A86F, v52);
    *(_QWORD *)(a1 + 32) = v30;
    *(_OWORD *)(a1 + 16) = v29;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)a1 = -1;
    if ( (_QWORD)v53 )
      sub_140001660(*((_QWORD *)&v53 + 1), v53, 1);
    sub_14043F000(v22);
    if ( *(_QWORD *)&v51[24] != -1 && *(_QWORD *)&v51[24] )
      sub_140001660(*(_QWORD *)&v51[32], *(_QWORD *)&v51[24], 1);
    if ( *(_QWORD *)&v51[56] != -1 && *(_QWORD *)&v51[56] )
      sub_140001660(*(_QWORD *)&v51[64], *(_QWORD *)&v51[56], 1);
    if ( v6 )
      sub_140001660(*(_QWORD *)&v51[8], v6, 1);
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 112) = *(_QWORD *)&v51[112];
  *(_OWORD *)(a1 + 96) = *(_OWORD *)&v51[96];
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v51[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v51[64];
  v19 = *(_OWORD *)v51;
  v20 = *(_OWORD *)&v51[16];
  v21 = *(_OWORD *)&v51[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v51[48];
  *(_OWORD *)(a1 + 32) = v21;
  *(_OWORD *)(a1 + 16) = v20;
  *(_OWORD *)a1 = v19;
  sub_14043F000(v22);
  if ( (_QWORD)v60 )
    sub_140001660(*((_QWORD *)&v60 + 1), v60, 1);
  sub_14043F000(v33);
  return a1;
}