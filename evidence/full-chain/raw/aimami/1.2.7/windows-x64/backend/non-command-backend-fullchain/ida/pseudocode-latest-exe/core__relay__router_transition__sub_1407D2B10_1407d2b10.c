// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x1407d2b10 | successor of pre-update 0x141022a10 | session <审计会话>
// match evidence: {"body_sim": 0.685, "str_ov": 0, "anchor": 2.226, "conf": true, "verdict": "CONFIRMED_FINAL"}
void __fastcall sub_1407D2B10(
        __int64 a1,
        __int64 (__fastcall *a2)(),
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int8 a10)
{
  unsigned int v10; // edi
  int v11; // r13d
  int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // rdi
  unsigned __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rdx
  _QWORD *v48; // rdi
  __int64 v49; // r15
  __int64 v50; // r15
  __int64 v51; // r12
  __int64 v52; // rbx
  unsigned __int64 v53; // r14
  __int64 i; // r13
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int128 v59; // kr00_16
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // rdi
  __int64 v66; // r12
  unsigned __int64 v67; // r14
  __int64 v68; // r15
  __int64 j; // rbx
  unsigned __int64 v70; // r14
  _OWORD *v71; // rcx
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int64 v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rdx
  const char *v78; // rdi
  __int64 v79; // rax
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  _QWORD *v83; // rax
  __int64 v84; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v85; // [rsp+58h] [rbp-28h]
  __int128 v86; // [rsp+60h] [rbp-20h]
  __int128 v87; // [rsp+70h] [rbp-10h]
  __int128 v88; // [rsp+80h] [rbp+0h]
  __int128 v89; // [rsp+90h] [rbp+10h]
  __int64 v90; // [rsp+A0h] [rbp+20h]
  __int64 v91; // [rsp+B0h] [rbp+30h]
  __int64 v92; // [rsp+B8h] [rbp+38h]
  __int128 v93; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v94; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v95; // [rsp+E0h] [rbp+60h]
  __int128 v96; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v97; // [rsp+100h] [rbp+80h]
  __int64 v98; // [rsp+110h] [rbp+90h] BYREF
  __int64 v99; // [rsp+118h] [rbp+98h]
  _BYTE v100[80]; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v101; // [rsp+170h] [rbp+F0h]
  __int64 v102; // [rsp+188h] [rbp+108h]
  __int64 v103; // [rsp+190h] [rbp+110h]
  __int64 v104; // [rsp+198h] [rbp+118h] BYREF
  __int64 (__fastcall *v105)(); // [rsp+1A0h] [rbp+120h]
  unsigned __int64 v106; // [rsp+1A8h] [rbp+128h]
  __int64 v107; // [rsp+1B8h] [rbp+138h]
  __int64 v108; // [rsp+1C0h] [rbp+140h]
  const char *v109; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v110; // [rsp+1D0h] [rbp+150h]
  __int64 v111; // [rsp+1E0h] [rbp+160h]
  __int64 (__fastcall *v112)(); // [rsp+1E8h] [rbp+168h]
  __int64 (__fastcall *v113)(); // [rsp+1F0h] [rbp+170h]
  __int64 v114; // [rsp+1F8h] [rbp+178h]
  __int64 v115; // [rsp+200h] [rbp+180h]
  bool v116; // [rsp+20Eh] [rbp+18Eh]
  unsigned __int8 v117; // [rsp+20Fh] [rbp+18Fh]
  __int64 v118; // [rsp+210h] [rbp+190h]

  v118 = -2;
  v99 = a4;
  v117 = a3;
  v113 = a2;
  v111 = a1;
  v107 = a9;
  v102 = a8;
  v92 = a7;
  v115 = a5;
  sub_1414331D0(v100);
  v10 = *(_DWORD *)v100;
  v11 = (*(int *)v100 >> 13) - 1;
  v12 = 0;
  v91 = a6;
  if ( *(int *)v100 >> 13 <= 0 )
  {
    v13 = (1 - (*(int *)v100 >> 13)) / 0x190u + 1;
    v11 += 400 * v13;
    v12 = -146097 * v13;
  }
  v14 = *(unsigned int *)&v100[4];
  v15 = *(unsigned int *)&v100[8];
  sub_1407D5CC0(v100);
  v16 = *(_QWORD *)v100;
  v93 = *(_OWORD *)&v100[8];
  v94 = *(_OWORD *)&v100[24];
  v95 = *(_OWORD *)&v100[40];
  v96 = *(_OWORD *)&v100[56];
  v97 = *(_QWORD *)&v100[72];
  if ( *(_QWORD *)v100 != -1 )
  {
    v17 = v111;
    *(_OWORD *)(v111 + 80) = v101;
    *(_QWORD *)(v17 + 72) = v97;
    v18 = v93;
    v19 = v94;
    v20 = v95;
    *(_OWORD *)(v17 + 56) = v96;
    *(_OWORD *)(v17 + 40) = v20;
    *(_OWORD *)(v17 + 24) = v19;
    *(_OWORD *)(v17 + 8) = v18;
    *(_QWORD *)v17 = v16;
    return;
  }
  v21 = (unsigned __int64)(1374389535LL * v11) >> 63;
  v22 = (unsigned int)((v11 / 100) >> 2);
  v23 = 1000 * (v14 + 86400LL * (int)(v22 + ((1461 * v11) >> 2) + v12 + ((v10 >> 4) & 0x1FF) - v11 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v15) >> 50);
  v86 = v93;
  v87 = v94;
  v88 = v95;
  v89 = v96;
  v90 = v97;
  v24 = v93;
  if ( ((_QWORD)v93 == -1) | a10 )
  {
    v25 = v23;
    if ( (_QWORD)v93 == -1 )
      goto LABEL_20;
    v26 = *((_QWORD *)&v86 + 1);
  }
  else
  {
    v26 = *((_QWORD *)&v86 + 1);
    if ( (_QWORD)v87 == 10 )
    {
      v22 = **((_QWORD **)&v86 + 1) ^ 0x697474696D6D6F63LL
          | *(unsigned __int16 *)(*((_QWORD *)&v86 + 1) + 8LL) ^ 0x676ELL;
      if ( !v22 )
      {
        v34 = *((_QWORD *)v113 + 97);
        v35 = *((_QWORD *)v113 + 98);
        v116 = (_QWORD)v93 == -1;
        sub_1407D3B80(v34, v35, v117, v99, v115, v91);
        nullsub_1(v37, v36);
        v38 = sub_140001650(170, 1);
        if ( !v38 )
        {
          v116 = (_QWORD)v93 == -1;
          sub_14196B2DB(1, 170);
        }
        v39 = v38;
        sub_1419234B0(v38, aRouterCommitRe, 170);
        v40 = (_QWORD *)v111;
        *(_QWORD *)v111 = 10;
        v40[1] = 170;
        v40[2] = v39;
        v40[3] = 170;
        if ( v24 )
          sub_140001660(v26, v24, 1);
        if ( *((_QWORD *)&v87 + 1) != -1 && *((_QWORD *)&v87 + 1) )
          sub_140001660(v88, *((_QWORD *)&v87 + 1), 1);
        return;
      }
    }
  }
  v25 = v89;
  if ( (_BYTE)v90 == v117 )
  {
    if ( (_QWORD)v93 )
      sub_140001660(v26, v93, 1);
    if ( (unsigned __int64)(*((_QWORD *)&v87 + 1) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_20;
LABEL_19:
    sub_140001660(v88, *((_QWORD *)&v87 + 1), 1);
    goto LABEL_20;
  }
  if ( (_QWORD)v93 )
    sub_140001660(v26, v93, 1);
  v25 = v23;
  if ( (unsigned __int64)(*((_QWORD *)&v87 + 1) - 1LL) < 0xFFFFFFFFFFFFFFFEuLL )
    goto LABEL_19;
LABEL_20:
  v27 = v115;
  if ( v115 < 0 )
  {
    v28 = 0;
    goto LABEL_22;
  }
  if ( v115 )
  {
    nullsub_1(v22, v21);
    v28 = 1;
    v27 = v115;
    v29 = sub_140001650(v115, 1);
    if ( !v29 )
    {
LABEL_22:
      v116 = 1;
      sub_14196B2DB(v28, v27);
    }
    v114 = v29;
    sub_1419234B0(v29, v99, v27);
    if ( v102 )
      goto LABEL_26;
  }
  else
  {
    v114 = 1;
    if ( v102 )
    {
LABEL_26:
      if ( v107 < 0 )
      {
        v30 = 0;
        v31 = v107;
        goto LABEL_28;
      }
      if ( v107 )
      {
        nullsub_1(v22, v21);
        v30 = 1;
        v31 = v107;
        v32 = sub_140001650(v107, 1);
        if ( !v32 )
LABEL_28:
          sub_14196B2DB(v30, v31);
        v33 = v32;
        sub_1419234B0(v32, v102, v31);
        v21 = v33;
      }
      else
      {
        v21 = 1;
        v31 = 0;
      }
      goto LABEL_41;
    }
  }
  v31 = -1;
LABEL_41:
  BYTE1(v97) = 1;
  LOBYTE(v97) = v117;
  *(_QWORD *)&v93 = v115;
  *((_QWORD *)&v93 + 1) = v114;
  *(_QWORD *)&v94 = v115;
  *(_QWORD *)&v96 = v25;
  *((_QWORD *)&v96 + 1) = v23;
  *((_QWORD *)&v94 + 1) = v31;
  v85 = v21;
  *(_QWORD *)&v95 = v21;
  v103 = v31;
  *((_QWORD *)&v95 + 1) = v31;
  nullsub_1(v114, v21);
  v41 = sub_140001650(128, 1);
  if ( !v41 )
    sub_14196B2DB(1, 128);
  v104 = 128;
  v105 = (__int64 (__fastcall *)())v41;
  *(_QWORD *)v100 = &v104;
  *(_QWORD *)&v100[8] = asc_141A45D28;
  *(_QWORD *)&v100[16] = 2;
  *(_QWORD *)&v100[24] = 1;
  v100[32] = 0;
  *(_BYTE *)v41 = 123;
  LOBYTE(v109) = 0;
  *(_QWORD *)&v110 = v100;
  *(_BYTE *)(v41 + 1) = 10;
  *(_WORD *)(v41 + 2) = 8224;
  v106 = 4;
  sub_14077A600(v100, v42, aSchemaversion_0, 13);
  v43 = *(_QWORD *)v100;
  v44 = *(_QWORD *)(*(_QWORD *)v100 + 16LL);
  if ( (unsigned __int64)(**(_QWORD **)v100 - v44) <= 1 )
  {
    sub_141939070(*(_DWORD *)v100, v44, 2, 1, 1);
    v44 = *(_QWORD *)(v43 + 16);
  }
  *(_WORD *)(*(_QWORD *)(v43 + 8) + v44) = 8250;
  *(_QWORD *)(v43 + 16) = v44 + 2;
  v45 = *(_QWORD *)v100;
  v46 = *(_QWORD *)(*(_QWORD *)v100 + 16LL);
  if ( **(_QWORD **)v100 == v46 )
  {
    sub_141939070(*(_DWORD *)v100, v46, 1, 1, 1);
    v46 = *(_QWORD *)(v45 + 16);
  }
  *(_BYTE *)(*(_QWORD *)(v45 + 8) + v46) = 49;
  v47 = v46 + 1;
  *(_QWORD *)(v45 + 16) = v47;
  v100[32] = 1;
  v48 = *(_QWORD **)v100;
  v49 = *(_QWORD *)(*(_QWORD *)v100 + 16LL);
  if ( (unsigned __int64)(**(_QWORD **)v100 - v49) <= 1 )
  {
    sub_141939070(*(_DWORD *)v100, v49, 2, 1, 1);
    v49 = v48[2];
  }
  *(_WORD *)(v48[1] + v49) = 2604;
  v50 = v49 + 2;
  v48[2] = v50;
  v51 = *(_QWORD *)&v100[24];
  if ( *(_QWORD *)&v100[24] )
  {
    v52 = *(_QWORD *)&v100[8];
    v53 = *(_QWORD *)&v100[16];
    for ( i = 0; i != v51; ++i )
    {
      if ( v53 > *v48 - v50 )
      {
        sub_141939070((_DWORD)v48, v50, v53, 1, 1);
        v50 = v48[2];
      }
      else if ( !v53 )
      {
        goto LABEL_51;
      }
      sub_1419234B0(v50 + v48[1], v52, v53);
LABEL_51:
      v50 += v53;
      v48[2] = v50;
    }
  }
  BYTE1(v109) = 2;
  sub_14077A600(v100, v47, aTarget_0, 6);
  v55 = *(_QWORD *)v100;
  v56 = *(_QWORD *)(*(_QWORD *)v100 + 16LL);
  if ( (unsigned __int64)(**(_QWORD **)v100 - v56) <= 1 )
  {
    sub_141939070(*(_DWORD *)v100, v56, 2, 1, 1);
    v56 = *(_QWORD *)(v55 + 16);
  }
  *(_WORD *)(*(_QWORD *)(v55 + 8) + v56) = 8250;
  v57 = v56 + 2;
  *(_QWORD *)(v55 + 16) = v57;
  if ( v117 )
    sub_14077A600(v100, v57, &unk_141A46350, 9);
  else
    sub_14077A600(v100, v57, aRouteron_0, 8);
  v100[32] = 1;
  sub_14079DAC0(&v109, aPhase, 5, &v93);
  if ( (_BYTE)v109
    || (sub_1407A1A50(&v109, aStartedatms, 11, &v96), (_BYTE)v109)
    || (sub_1407A1A50(&v109, aUpdatedatms, 11, (char *)&v96 + 8), (_BYTE)v109) )
  {
    v58 = sub_141967030();
    if ( v104 )
      sub_140001660(v105, v104, 1);
    goto LABEL_66;
  }
  sub_14079B8D0(&v109, aReason, 6, (char *)&v94 + 8);
  if ( !(_BYTE)v109 && BYTE1(v109) )
  {
    v64 = v110;
    v65 = *(_QWORD **)v110;
    v66 = *(_QWORD *)(v110 + 24) - 1LL;
    *(_QWORD *)(v110 + 24) = v66;
    if ( *(_BYTE *)(v64 + 32) == 1 )
    {
      sub_1401E6F40(v65, &unk_141A454D0, 1);
      if ( v66 )
      {
        v112 = *(__int64 (__fastcall **)())(v64 + 8);
        v67 = *(_QWORD *)(v64 + 16);
        v68 = v65[2];
        for ( j = 0; j != v66; ++j )
        {
          if ( v67 > *v65 - v68 )
          {
            sub_141939070((_DWORD)v65, v68, v67, 1, 1);
            v68 = v65[2];
          }
          else if ( !v67 )
          {
            goto LABEL_77;
          }
          sub_1419234B0(v68 + v65[1], v112, v67);
LABEL_77:
          v68 += v67;
          v65[2] = v68;
        }
      }
    }
    sub_1401E6F40(v65, asc_141A46C14, 1);
  }
  v58 = (__int64)v105;
  if ( v104 == -1 )
  {
LABEL_66:
    v109 = (const char *)v58;
    v104 = (__int64)&v109;
    v105 = (__int64 (__fastcall *)())sub_14166FAD0;
    sub_1416DAFA0(v100, &unk_141A472B0, &v104);
    v59 = *(_OWORD *)v100;
    v60 = *(_QWORD *)&v100[16];
    sub_140032F30(&v109);
    v61 = v111;
    *(_QWORD *)v111 = 10;
    *(_OWORD *)(v61 + 8) = v59;
    *(_QWORD *)(v61 + 24) = v60;
    v62 = v115;
    v63 = v103;
LABEL_67:
    if ( v62 )
    {
      sub_140001660(v114, v62, 1);
      v63 = v103;
    }
    if ( v63 > 0 )
      sub_140001660(v85, v63, 1);
    return;
  }
  v108 = v104;
  v112 = v105;
  v70 = v106;
  if ( v106 > 0x100000 )
  {
    v109 = aNewPhaseRecord;
    *(_QWORD *)&v110 = 39;
    v104 = (__int64)&v109;
    v105 = sub_140191200;
    sub_1416DAFA0(&v100[8], &unk_141A4609C, &v104);
    *(_QWORD *)v100 = 9;
    v71 = (_OWORD *)v111;
    *(_OWORD *)(v111 + 80) = v101;
    v72 = *(_OWORD *)&v100[16];
    v73 = *(_OWORD *)&v100[32];
    v74 = *(_OWORD *)&v100[48];
    v71[4] = *(_OWORD *)&v100[64];
    v71[3] = v74;
    v71[2] = v73;
    v71[1] = v72;
    *v71 = *(_OWORD *)v100;
LABEL_92:
    v62 = v115;
    v63 = v103;
    if ( v108 )
    {
      sub_140001660(v112, v108, 1);
      v63 = v103;
      v62 = v115;
    }
    goto LABEL_67;
  }
  v75 = *((_QWORD *)v113 + 97);
  v76 = *((_QWORD *)v113 + 98);
  sub_1416B18A0((unsigned int)&v104, v75, v76, (unsigned int)&unk_141A49F47, 30);
  v113 = v105;
  if ( sub_1407C8880(v105, v106, v112, v70) == 1 )
  {
    v98 = v77;
    *(_QWORD *)v100 = &v98;
    *(_QWORD *)&v100[8] = sub_1416EA080;
    sub_1416DAFA0(&v109, &unk_141A472DF, v100);
    v78 = v109;
    *(_OWORD *)v100 = v110;
    if ( (unsigned int)(v98 & 3) - 2 >= 2 && (v98 & 3) != 0 )
    {
      v84 = v98 - 1;
      sub_1416EBAD0(&v84);
    }
    v79 = v111;
    *(_OWORD *)(v111 + 80) = *(_OWORD *)&v100[64];
    v80 = *(_OWORD *)v100;
    v81 = *(_OWORD *)&v100[16];
    v82 = *(_OWORD *)&v100[32];
    *(_OWORD *)(v79 + 64) = *(_OWORD *)&v100[48];
    *(_OWORD *)(v79 + 48) = v82;
    *(_OWORD *)(v79 + 32) = v81;
    *(_OWORD *)(v79 + 16) = v80;
    *(_QWORD *)v79 = 10;
    *(_QWORD *)(v79 + 8) = v78;
    if ( v104 )
      sub_140001660(v113, v104, 1);
    goto LABEL_92;
  }
  v114 = v77;
  if ( v104 )
    sub_140001660(v113, v104, 1);
  sub_1407D3B80(v75, v76, v117, v99, v115, v91);
  v83 = (_QWORD *)v111;
  *(_QWORD *)(v111 + 8) = v114;
  *v83 = -1;
  if ( v108 )
    sub_140001660(v112, v108, 1);
  sub_14002F660(&v93);
}
