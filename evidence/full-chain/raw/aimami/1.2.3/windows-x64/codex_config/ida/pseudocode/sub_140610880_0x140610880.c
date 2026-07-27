// module: codexmate_lib/core/codex_config
// addr: 0x140610880
// name: sub_140610880
// win 1.2.1 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140610880(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // dl
  _QWORD *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  __int128 v22; // kr20_16
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // r8
  unsigned __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 *v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // r13
  unsigned __int128 v36; // kr30_16
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  unsigned __int128 v40; // [rsp+28h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-48h]
  void *v42; // [rsp+48h] [rbp-38h]
  unsigned __int128 v43; // [rsp+50h] [rbp-30h]
  __int128 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+70h] [rbp-10h]
  __int128 v46; // [rsp+80h] [rbp+0h]
  char v47[144]; // [rsp+90h] [rbp+10h] BYREF
  _OWORD v48[2]; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v49[72]; // [rsp+140h] [rbp+C0h]
  char v50[152]; // [rsp+188h] [rbp+108h] BYREF
  unsigned __int64 v51; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v52; // [rsp+228h] [rbp+1A8h]
  unsigned __int64 v53; // [rsp+230h] [rbp+1B0h]
  __int64 v54; // [rsp+238h] [rbp+1B8h]
  __int64 v55; // [rsp+240h] [rbp+1C0h]
  __int64 v56; // [rsp+248h] [rbp+1C8h]
  unsigned __int128 v57; // [rsp+250h] [rbp+1D0h]
  __int128 v58; // [rsp+260h] [rbp+1E0h]
  __int128 v59; // [rsp+270h] [rbp+1F0h]
  __int128 v60; // [rsp+280h] [rbp+200h]
  _QWORD v61[2]; // [rsp+290h] [rbp+210h] BYREF
  unsigned __int128 v62; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v63; // [rsp+2B0h] [rbp+230h]
  __int128 v64; // [rsp+2C0h] [rbp+240h]
  __int128 v65; // [rsp+2D0h] [rbp+250h]
  __int64 v66; // [rsp+2E0h] [rbp+260h]
  __int64 v67; // [rsp+2E8h] [rbp+268h]
  __int64 v68; // [rsp+2F0h] [rbp+270h]
  __int64 v69; // [rsp+2F8h] [rbp+278h]
  __int64 v70; // [rsp+300h] [rbp+280h]
  __int64 *v71; // [rsp+308h] [rbp+288h]
  __int64 v72; // [rsp+310h] [rbp+290h]
  __int64 v73; // [rsp+318h] [rbp+298h]
  __int64 v74; // [rsp+320h] [rbp+2A0h]
  unsigned __int128 v75; // [rsp+328h] [rbp+2A8h]
  char v76; // [rsp+33Fh] [rbp+2BFh] BYREF
  __int64 v77; // [rsp+340h] [rbp+2C0h]

  v77 = -2;
  v61[0] = a4;
  v61[1] = a5;
  v67 = a2;
  v66 = a3;
  v8 = sub_1414740B0(a2, a3);
  if ( v8 )
  {
    LOBYTE(v48[0]) = 1;
    v10 = sub_14147B9A0(v48, v8, v9);
    if ( v10 )
    {
      *a1 = 2;
      a1[1] = v10;
      return a1;
    }
  }
  v11 = *(_QWORD *)(a6 + 8);
  v55 = v11;
  v56 = *(_QWORD *)(a6 + 16);
  v12 = 1;
  v13 = 0;
  v14 = off_141EC8D80;
  v71 = a1;
  while ( 1 )
  {
    if ( (v13 & 1) != 0 || v12 > 3 )
    {
      *(_QWORD *)&v48[0] = v61;
      *((_QWORD *)&v48[0] + 1) = sub_14041F680;
      sub_14149C0F0(a1 + 1, &unk_14176663E, v48);
      *a1 = 10;
      return a1;
    }
    v15 = v12 + 1;
    LOBYTE(v11) = v12 == 3;
    v52 = v11;
    if ( v12 == 3 )
      v15 = 3;
    v53 = v15;
    v51 = v12;
    sub_14148D130(v48, v67, v66);
    v16 = *((_QWORD *)&v48[0] + 1);
    v70 = *(_QWORD *)&v48[0];
    if ( *(_QWORD *)&v48[0] == -1 )
    {
      if ( (unsigned __int8)sub_14065FAD0(*((_QWORD *)&v48[0] + 1)) )
      {
        *a1 = 2;
        a1[1] = v16;
        a1[2] = v6;
        a1[3] = v68;
        return a1;
      }
      *(_QWORD *)&v40 = v16;
      sub_140018650(&v40);
      v18 = 1;
      v17 = 0;
      v70 = 0;
    }
    else
    {
      v17 = *(_QWORD *)&v48[1];
      v18 = *((_QWORD *)&v48[0] + 1);
    }
    v73 = v18;
    upsert_mcp_server_0(v48, v18, v17, a6);
    v74 = *((_QWORD *)&v48[0] + 1);
    v19 = *(_QWORD *)&v48[0];
    v20 = *((_QWORD *)&v48[1] + 1);
    if ( *(_QWORD *)&v48[0] != -1 )
    {
      v60 = *(_OWORD *)&v49[48];
      v59 = *(_OWORD *)&v49[32];
      v58 = *(_OWORD *)&v49[16];
      v57 = *(_OWORD *)v49;
      *((_QWORD *)&v75 + 1) = *(_QWORD *)&v48[1];
      *(_QWORD *)&v75 = v74;
LABEL_43:
      v28 = v57;
      v29 = v58;
      v30 = v59;
      v31 = v71;
      *((_OWORD *)v71 + 5) = v60;
      *((_OWORD *)v31 + 4) = v30;
      *((_OWORD *)v31 + 3) = v29;
      *((_OWORD *)v31 + 2) = v28;
      v31[2] = *((_QWORD *)&v75 + 1);
      v31[3] = v20;
      *v31 = v19;
      a1 = v31;
      v31[1] = v75;
      v32 = v73;
      goto LABEL_55;
    }
    v68 = v17;
    v69 = *(_QWORD *)&v48[1];
    sub_1409E6C90(v48, *(_QWORD *)&v48[1], *((_QWORD *)&v48[1] + 1));
    v19 = *((_QWORD *)&v48[0] + 1);
    v21 = *(_QWORD *)&v48[0];
    v22 = v48[1];
    v62 = *(_OWORD *)&v49[8];
    v63 = *(_OWORD *)&v49[24];
    v64 = *(_OWORD *)&v49[40];
    v65 = *(_OWORD *)&v49[56];
    if ( *(_QWORD *)&v48[0] == 2 )
    {
      v75 = v48[1];
      v57 = v62;
      v58 = v63;
      v59 = v64;
      v60 = v65;
      v20 = *(_QWORD *)v49;
    }
    else
    {
      *((_QWORD *)&v75 + 1) = *(_QWORD *)v49;
      sub_141684120(v47, v50, 144);
      v41 = v22;
      v42 = *((void **)&v75 + 1);
      v46 = v65;
      v45 = v64;
      v44 = v63;
      v43 = v62;
      v40 = __PAIR128__(v19, v21);
      sub_1409E7A10((__int64)v48, (__int64)&v40, v55, v56);
      v19 = *(_QWORD *)&v48[0];
      if ( *(_QWORD *)&v48[0] == -1 )
      {
        sub_1409E6E60(*((_QWORD *)&v48[0] + 1), a6);
        *(_QWORD *)&v62 = 0;
        *((_QWORD *)&v62 + 1) = 1;
        *(_QWORD *)&v63 = 0;
        *(_QWORD *)&v48[1] = 1610612768;
        *(_QWORD *)&v48[0] = &v62;
        *((_QWORD *)&v48[0] + 1) = &off_14177D5F8;
        if ( (unsigned __int8)sub_140FC4B40(&v40, v48) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_4,
            55,
            (unsigned int)&v76,
            (unsigned int)&unk_141769668,
            (__int64)&off_14177D6B0);
        v75 = v62;
        v20 = v63;
        sub_1405E5330((unsigned __int64 *)&v40);
        v14 = off_141EC8D80;
        v23 = v68;
        if ( v74 )
          sub_140001660(v69, v74, 1);
        goto LABEL_22;
      }
      v75 = *(_OWORD *)((char *)v48 + 8);
      v20 = *((_QWORD *)&v48[1] + 1);
      v57 = *(_OWORD *)v49;
      v58 = *(_OWORD *)&v49[16];
      v59 = *(_OWORD *)&v49[32];
      v60 = *(_OWORD *)&v49[48];
      sub_1405E5330((unsigned __int64 *)&v40);
      v14 = off_141EC8D80;
    }
    v23 = v68;
    if ( v74 )
      sub_140001660(v69, v74, 1);
    if ( v19 != -1 )
      goto LABEL_43;
LABEL_22:
    if ( v20 == v23 && !(unsigned int)sub_1416847B0(*((_QWORD *)&v75 + 1), v73, v23) )
    {
      a1 = v71;
      *v71 = -1;
LABEL_49:
      v32 = v73;
      v36 = v75;
      goto LABEL_53;
    }
    sub_14148D130(v48, v67, v66);
    v24 = *((_QWORD *)&v48[0] + 1);
    if ( *(_QWORD *)&v48[0] == -1 )
    {
      if ( (unsigned __int8)sub_14065FAD0(*((_QWORD *)&v48[0] + 1)) )
      {
        v35 = v71;
        *v71 = 2;
        v35[1] = v24;
        a1 = v35;
        v35[2] = v72;
        v35[3] = v54;
        goto LABEL_49;
      }
      *(_QWORD *)&v40 = v24;
      sub_140018650(&v40);
      v72 = 1;
      v25 = 0;
      v74 = 0;
    }
    else
    {
      v74 = *(_QWORD *)&v48[0];
      v25 = *(_QWORD *)&v48[1];
      v72 = *((_QWORD *)&v48[0] + 1);
    }
    v54 = v25;
    v26 = v25 == v23;
    v27 = v23;
    v6 = v73;
    a1 = v71;
    if ( v26 && !(unsigned int)sub_1416847B0(v72, v73, v27) )
      break;
    if ( *v14 >= 2u )
    {
      *(_QWORD *)&v40 = v61;
      *((_QWORD *)&v40 + 1) = sub_14041F680;
      *(_QWORD *)&v41 = &v51;
      *((_QWORD *)&v41 + 1) = sub_1414AC520;
      v42 = &unk_141766688;
      *(_QWORD *)&v43 = sub_1414AC520;
      *(_QWORD *)&v48[0] = 0;
      *((_QWORD *)&v48[0] + 1) = aCodexmateLibCo_2;
      v48[1] = 0x21u;
      *(_QWORD *)v49 = aSrcCoreCodexCo;
      *(_QWORD *)&v49[8] = 24;
      *(_QWORD *)&v49[16] = 2;
      *(_QWORD *)&v49[24] = aCodexmateLibCo_2;
      *(_QWORD *)&v49[32] = 33;
      *(_QWORD *)&v49[40] = 0x1B00000001LL;
      *(_QWORD *)&v49[48] = &unk_141766690;
      *(_QWORD *)&v49[56] = &v40;
      sub_1412C36A0(&v76, v48);
      v6 = v73;
    }
    if ( v74 )
      sub_140001660(v72, v74, 1);
    if ( (_QWORD)v75 )
      sub_140001660(*((_QWORD *)&v75 + 1), v75, 1);
    if ( v70 )
      sub_140001660(v6, v70, 1);
    v12 = v53;
    v13 = v52;
  }
  v33 = sub_1408726C0(v67, v66, *((__int64 *)&v75 + 1), v20);
  if ( v33 )
  {
    *(_QWORD *)&v62 = v33;
    *(_QWORD *)&v48[0] = v61;
    *((_QWORD *)&v48[0] + 1) = sub_14041F680;
    *(_QWORD *)&v48[1] = &v62;
    *((_QWORD *)&v48[1] + 1) = sub_141490720;
    sub_14149C0F0(&v40, &unk_141767240, v48);
    v48[0] = v40;
    *(_QWORD *)&v48[1] = v41;
    sub_140018650(&v62);
    a1[3] = *(_QWORD *)&v48[1];
    *(_OWORD *)(a1 + 1) = v48[0];
    v34 = 10;
  }
  else
  {
    v34 = -1;
  }
  *a1 = v34;
  v32 = v73;
  v36 = v75;
  if ( v74 )
  {
    v37 = *((_QWORD *)&v75 + 1);
    v38 = v75;
    sub_140001660(v72, v74, 1);
    v36 = __PAIR128__(v37, v38);
  }
LABEL_53:
  if ( (_QWORD)v36 )
    sub_140001660(*((_QWORD *)&v36 + 1), v36, 1);
LABEL_55:
  if ( v70 )
    sub_140001660(v32, v70, 1);
  return a1;
}