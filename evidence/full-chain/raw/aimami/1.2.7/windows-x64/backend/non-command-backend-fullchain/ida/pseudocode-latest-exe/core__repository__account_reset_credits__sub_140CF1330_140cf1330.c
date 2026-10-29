// win 1.2.7 latest-exe | module src/core/repository/account_reset_credits.rs | ea 0x140cf1330 | successor of pre-update 0x1401bcb70 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.606, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_140CF1330(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r9
  void *v21; // rax
  __int64 v22; // rbx
  __int64 v24; // r13
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rdx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // r15
  __int128 v33; // kr00_16
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // [rsp+20h] [rbp-60h]
  __int64 v45; // [rsp+30h] [rbp-50h] BYREF
  __int128 v46; // [rsp+38h] [rbp-48h]
  __int128 v47; // [rsp+48h] [rbp-38h]
  __int128 v48; // [rsp+58h] [rbp-28h]
  __int128 v49; // [rsp+68h] [rbp-18h]
  __int128 v50; // [rsp+78h] [rbp-8h]
  __int128 v51; // [rsp+88h] [rbp+8h]
  __int128 v52; // [rsp+98h] [rbp+18h]
  __int128 v53; // [rsp+A8h] [rbp+28h]
  __int128 v54; // [rsp+B8h] [rbp+38h]
  __int128 v55; // [rsp+C8h] [rbp+48h]
  __int64 v56; // [rsp+D8h] [rbp+58h]
  __int64 v57; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v58; // [rsp+E8h] [rbp+68h]
  __int128 v59; // [rsp+F8h] [rbp+78h]
  __int128 v60; // [rsp+108h] [rbp+88h]
  __int128 v61; // [rsp+118h] [rbp+98h]
  __int128 v62; // [rsp+128h] [rbp+A8h]
  __int128 v63; // [rsp+138h] [rbp+B8h]
  char v64[72]; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v65; // [rsp+190h] [rbp+110h]
  __int64 v66; // [rsp+198h] [rbp+118h]
  __int64 v67; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v68; // [rsp+1D8h] [rbp+158h]
  __int128 v69; // [rsp+1E8h] [rbp+168h]
  __int128 v70; // [rsp+1F8h] [rbp+178h]
  __int128 v71; // [rsp+208h] [rbp+188h]
  __int128 v72; // [rsp+218h] [rbp+198h]
  __int128 v73; // [rsp+228h] [rbp+1A8h]
  __int128 v74; // [rsp+238h] [rbp+1B8h]
  __int128 v75; // [rsp+248h] [rbp+1C8h]
  __int128 v76; // [rsp+258h] [rbp+1D8h]
  __int128 v77; // [rsp+268h] [rbp+1E8h]
  __int64 v78; // [rsp+278h] [rbp+1F8h]
  __int64 v79; // [rsp+280h] [rbp+200h] BYREF
  __int128 v80; // [rsp+288h] [rbp+208h]
  __int128 v81; // [rsp+298h] [rbp+218h]
  __int128 v82; // [rsp+2A8h] [rbp+228h]
  __int128 v83; // [rsp+2B8h] [rbp+238h]
  __int128 v84; // [rsp+2C8h] [rbp+248h]
  __int128 v85; // [rsp+2D8h] [rbp+258h]
  __int128 v86; // [rsp+2E8h] [rbp+268h]
  __int128 v87; // [rsp+2F8h] [rbp+278h]
  __int128 v88; // [rsp+308h] [rbp+288h]
  __int128 v89; // [rsp+318h] [rbp+298h]
  __int64 v90; // [rsp+328h] [rbp+2A8h]
  __int128 v91; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v92; // [rsp+340h] [rbp+2C0h]
  __int128 v93; // [rsp+350h] [rbp+2D0h]
  __int128 v94; // [rsp+360h] [rbp+2E0h]
  __int128 v95; // [rsp+370h] [rbp+2F0h]
  __int64 v96; // [rsp+380h] [rbp+300h]
  __int128 v97; // [rsp+390h] [rbp+310h]
  __int128 v98; // [rsp+3A0h] [rbp+320h]
  __int128 v99; // [rsp+3B0h] [rbp+330h]
  __int128 v100; // [rsp+3C0h] [rbp+340h]
  __int128 v101; // [rsp+3D0h] [rbp+350h]
  __int128 v102; // [rsp+3E0h] [rbp+360h]
  _BYTE v103[104]; // [rsp+3F0h] [rbp+370h] BYREF
  _OWORD v104[4]; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v105; // [rsp+498h] [rbp+418h]
  __int128 v106; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v107; // [rsp+4F0h] [rbp+470h]
  __int128 v108; // [rsp+500h] [rbp+480h]
  __int128 v109; // [rsp+510h] [rbp+490h]
  __int128 v110; // [rsp+520h] [rbp+4A0h]
  __int128 v111; // [rsp+530h] [rbp+4B0h]
  _QWORD *v112; // [rsp+5D8h] [rbp+558h]
  __int64 v113; // [rsp+5E0h] [rbp+560h]
  char v114; // [rsp+5EFh] [rbp+56Fh]
  __int64 v115; // [rsp+5F0h] [rbp+570h]

  v115 = -2;
  sub_140CFB3B0(v103, a2[37], a2[38]);
  v9 = *(_QWORD *)v103;
  v106 = *(_OWORD *)&v103[8];
  v107 = *(_OWORD *)&v103[24];
  v108 = *(_OWORD *)&v103[40];
  v109 = *(_OWORD *)&v103[56];
  v110 = *(_OWORD *)&v103[72];
  v10 = *(_QWORD *)&v103[88];
  *(_QWORD *)&v111 = *(_QWORD *)&v103[88];
  if ( *(_QWORD *)v103 != -1 )
  {
    a1[11] = v111;
    *(_OWORD *)(a1 + 9) = v110;
    v11 = v106;
    v12 = v107;
    v13 = v108;
    *(_OWORD *)(a1 + 7) = v109;
    *(_OWORD *)(a1 + 5) = v13;
    *(_OWORD *)(a1 + 3) = v12;
    *(_OWORD *)(a1 + 1) = v11;
    *a1 = v9;
    return a1;
  }
  v112 = a1;
  v96 = v111;
  v95 = v110;
  v94 = v109;
  v93 = v108;
  v92 = v107;
  v91 = v106;
  v14 = *((_QWORD *)&v106 + 1);
  v15 = v107;
  if ( !(_QWORD)v107 )
  {
LABEL_11:
    nullsub_1(v10, v8);
    v21 = (void *)sub_140001650(30, 1);
    if ( !v21 )
      sub_14196B2DB(1, 30);
    qmemcpy(v21, "Account is no longer available", 30);
    a1 = v112;
    *v112 = 9;
    a1[1] = 30;
    a1[2] = v21;
    a1[3] = 30;
    goto LABEL_13;
  }
  v16 = 424 * v107;
  v17 = 0;
  while ( *(_QWORD *)(v14 + v17 + 208) != a4 || (unsigned int)sub_141923B40(*(_QWORD *)(v14 + v17 + 200), a3, a4) )
  {
    v17 += 424;
    if ( v16 == v17 )
      goto LABEL_11;
  }
  v18 = *(_QWORD *)(v14 + v17 + 224);
  v19 = *(_QWORD *)(v14 + v17 + 232);
  v20 = a2[41];
  v44 = a2[42];
  v113 = v18;
  sub_14071E1C0((unsigned int)v103, v18, v19, v20, v44);
  a1 = v112;
  if ( *(_DWORD *)v103 != -1 )
  {
    v111 = *(_OWORD *)&v103[80];
    v110 = *(_OWORD *)&v103[64];
    v109 = *(_OWORD *)&v103[48];
    v108 = *(_OWORD *)&v103[32];
    v107 = *(_OWORD *)&v103[16];
    v106 = *(_OWORD *)v103;
    if ( *(_QWORD *)v103 == -1 )
      goto LABEL_26;
LABEL_40:
    *((_OWORD *)a1 + 5) = v111;
    *((_OWORD *)a1 + 4) = v110;
    v33 = v106;
    v34 = v107;
    v35 = v108;
    *((_OWORD *)a1 + 3) = v109;
    *((_OWORD *)a1 + 2) = v35;
    *((_OWORD *)a1 + 1) = v34;
    *(_OWORD *)a1 = v33;
LABEL_13:
    if ( *((_QWORD *)&v92 + 1) != -1 && *((_QWORD *)&v92 + 1) )
      sub_140001660(v93, *((_QWORD *)&v92 + 1), 1);
    if ( v15 )
    {
      v22 = v14;
      do
      {
        sub_1401AE3E0(v22);
        v22 += 424;
        --v15;
      }
      while ( v15 );
    }
    if ( (_QWORD)v91 )
      sub_140001660(v14, 424 * v91, 8);
    return a1;
  }
  sub_1416C4520(v103, v113, v19);
  if ( *(_DWORD *)v103 == 2 )
  {
    *(_QWORD *)&v106 = 2;
    *((_QWORD *)&v106 + 1) = *(_QWORD *)&v103[8];
    goto LABEL_40;
  }
  if ( (v103[76] & 0x10) != 0 || (*(_DWORD *)&v103[80] & 0x20000000) != 0 && (*(_WORD *)&v103[76] & 0x400) != 0 )
  {
    v57 = v113;
    *(_QWORD *)&v58 = v19;
    *(_QWORD *)v103 = &v57;
    *(_QWORD *)&v103[8] = sub_1416CE600;
    sub_1416DAFA0((char *)&v106 + 8, &unk_141A3E0BE, v103);
    *(_QWORD *)&v106 = 9;
    goto LABEL_40;
  }
LABEL_26:
  sub_14070E690((__int64)v103, v113, v19);
  v24 = *(_QWORD *)v103;
  v106 = *(_OWORD *)&v103[8];
  v107 = *(_OWORD *)&v103[24];
  v108 = *(_OWORD *)&v103[40];
  v109 = *(_OWORD *)&v103[56];
  v110 = *(_OWORD *)&v103[72];
  v111 = *(_OWORD *)&v103[88];
  if ( *(_QWORD *)v103 == -1 )
  {
    *((_OWORD *)a1 + 5) = v111;
    *((_OWORD *)a1 + 4) = v110;
    v29 = v106;
    v30 = v107;
    v31 = v108;
    *((_OWORD *)a1 + 3) = v109;
    *((_OWORD *)a1 + 2) = v31;
    *((_OWORD *)a1 + 1) = v30;
    *(_OWORD *)a1 = v29;
    goto LABEL_13;
  }
  sub_1419234B0(v64, v104, 136);
  v58 = v106;
  v59 = v107;
  v60 = v108;
  v61 = v109;
  v62 = v110;
  v63 = v111;
  v57 = v24;
  sub_140890830(v103, &v57, a3, a4);
  v106 = *(_OWORD *)&v103[8];
  v107 = *(_OWORD *)&v103[24];
  v108 = *(_OWORD *)&v103[40];
  v109 = *(_OWORD *)&v103[56];
  v110 = *(_OWORD *)&v103[72];
  v111 = *(_OWORD *)&v103[88];
  if ( *(_QWORD *)v103 == -2 )
  {
    *((_OWORD *)a1 + 5) = v111;
    *((_OWORD *)a1 + 4) = v110;
    v25 = v106;
    v26 = v107;
    v27 = v108;
    *((_OWORD *)a1 + 3) = v109;
    *((_OWORD *)a1 + 2) = v27;
    *((_OWORD *)a1 + 1) = v26;
    *(_OWORD *)a1 = v25;
    v28 = v65;
    if ( v65 != -1 )
      goto LABEL_29;
    goto LABEL_31;
  }
  v90 = v105;
  v89 = v104[3];
  v88 = v104[2];
  v87 = v104[1];
  v86 = v104[0];
  v80 = v106;
  v81 = v107;
  v82 = v108;
  v83 = v109;
  v84 = v110;
  v85 = v111;
  v79 = *(_QWORD *)v103;
  sub_14070E690((__int64)&v106, a2[5], a2[6]);
  v32 = v106;
  if ( (_QWORD)v106 == -1 )
  {
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v113 = v106;
      *(_QWORD *)v103 = aCodexmateLibCo_45;
      *(_QWORD *)&v103[8] = 54;
      *(_QWORD *)&v103[16] = aCodexmateLibCo_45;
      *(_QWORD *)&v103[24] = 54;
      *(_QWORD *)&v103[32] = &off_141A94238;
      v114 = 1;
      sub_140AF72B0(aAimamiAccounts_0, 203, 2, v103);
    }
    sub_140CB3AA0(&v106);
  }
  else
  {
    if ( (_DWORD)v106 != 2 && *((_QWORD *)&v109 + 1) == a4 && !(unsigned int)sub_141923B40(v109, a3, a4) )
    {
      v113 = v32;
      sub_1419234B0(v103, &v106, 240);
      sub_140890830(&v45, v103, a3, a4);
      v97 = v46;
      v98 = v47;
      v99 = v48;
      v100 = v49;
      v101 = v50;
      v102 = v51;
      if ( v45 == -2 )
      {
        *((_OWORD *)a1 + 5) = v102;
        *((_OWORD *)a1 + 4) = v101;
        v41 = v97;
        v42 = v98;
        v43 = v99;
        *((_OWORD *)a1 + 3) = v100;
        *((_OWORD *)a1 + 2) = v43;
        *((_OWORD *)a1 + 1) = v42;
        *(_OWORD *)a1 = v41;
        sub_1406C3110(&v106);
        sub_1400378C0(&v79);
        v28 = v65;
        if ( v65 != -1 )
        {
LABEL_29:
          if ( v28 )
            sub_140001660(v66, v28, 1);
        }
LABEL_31:
        if ( (_DWORD)v24 != 2 )
          sub_140037800(&v57);
        goto LABEL_13;
      }
      v78 = v56;
      v77 = v55;
      v76 = v54;
      v75 = v53;
      v74 = v52;
      v68 = v97;
      v69 = v98;
      v70 = v99;
      v71 = v100;
      v72 = v101;
      v73 = v102;
      v67 = v45;
      if ( (unsigned __int8)sub_140EBCBC0(&v79, &v67) )
      {
        sub_1400378C0(&v67);
      }
      else
      {
        sub_1400378C0(&v79);
        sub_1419234B0(&v79, &v67, 176);
      }
    }
    sub_1406C3110(&v106);
  }
  sub_14071C680(&v106, &v79);
  if ( (_QWORD)v106 == -1 )
  {
    sub_140CEDDD0(v103);
    *((_OWORD *)a1 + 5) = *(_OWORD *)&v103[80];
    *((_OWORD *)a1 + 4) = *(_OWORD *)&v103[64];
    v38 = *(_OWORD *)v103;
    v39 = *(_OWORD *)&v103[16];
    v40 = *(_OWORD *)&v103[32];
    *((_OWORD *)a1 + 3) = *(_OWORD *)&v103[48];
    *((_OWORD *)a1 + 2) = v40;
    *((_OWORD *)a1 + 1) = v39;
    *(_OWORD *)a1 = v38;
  }
  else
  {
    v36 = v106;
    v37 = v107;
    *(_OWORD *)(a1 + 5) = v108;
    *(_OWORD *)(a1 + 3) = v37;
    *(_OWORD *)(a1 + 1) = v36;
    *a1 = -1;
  }
  sub_1400378C0(&v79);
  if ( v65 != -1 && v65 )
    sub_140001660(v66, v65, 1);
  if ( (_DWORD)v24 != 2 )
    sub_140037800(&v57);
  sub_140037470(&v91);
  return a1;
}
