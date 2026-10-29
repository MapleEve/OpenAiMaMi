// win 1.2.7 latest-exe | module src/core/codex_app_server/deletion.rs | ea 0x1401f3630 | successor of pre-update 0x141010840 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
double __fastcall sub_1401F3630(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  char *v13; // rbx
  __int64 v14; // rdx
  char *v15; // rdi
  char *v16; // rsi
  char *v17; // rax
  char *v18; // r15
  char v19; // cl
  char v20; // r12
  __int64 v21; // rax
  __int64 v22; // r13
  bool v23; // cf
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rdx
  char *v27; // r15
  char *v28; // rdx
  char *v29; // rcx
  unsigned __int64 v30; // rsi
  char *v31; // rbx
  char *v32; // r14
  char *v33; // rdi
  char *v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int8 *v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned __int64 v40; // r15
  char v41; // r13
  __int64 v42; // rdi
  unsigned int v43; // r12d
  int v44; // r12d
  int v45; // eax
  unsigned __int8 v46; // dl
  int v47; // r12d
  __int64 v48; // rax
  char v49; // r9
  unsigned int v50; // r8d
  double result; // xmm0_8
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rax
  _BYTE *v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rcx
  _DWORD *v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rsi
  bool v63; // zf
  __int64 v64; // r14
  _BYTE *v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // edx
  __int64 v75; // rsi
  _QWORD v76[2]; // [rsp+28h] [rbp-58h] BYREF
  char v77[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v78; // [rsp+40h] [rbp-40h]
  __int64 v79; // [rsp+48h] [rbp-38h]
  __int64 v80; // [rsp+50h] [rbp-30h]
  _QWORD *v81; // [rsp+58h] [rbp-28h] BYREF
  __int64 v82; // [rsp+60h] [rbp-20h]
  __int64 v83; // [rsp+68h] [rbp-18h]
  __int64 v84; // [rsp+70h] [rbp-10h]
  __int128 *v85; // [rsp+78h] [rbp-8h]
  __int64 (__fastcall *v86)(); // [rsp+80h] [rbp+0h]
  char *v87; // [rsp+88h] [rbp+8h]
  __int64 (__fastcall *v88)(_QWORD, _QWORD); // [rsp+90h] [rbp+10h]
  char *v89; // [rsp+98h] [rbp+18h]
  __int64 v90; // [rsp+A0h] [rbp+20h]
  __int64 v91; // [rsp+A8h] [rbp+28h] BYREF
  char *v92; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v93; // [rsp+B8h] [rbp+38h]
  __int128 v94; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v95; // [rsp+D0h] [rbp+50h]
  __int128 v96; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v97; // [rsp+F0h] [rbp+70h]
  __int64 v98; // [rsp+F8h] [rbp+78h]
  const char *v99; // [rsp+100h] [rbp+80h]
  __int64 v100; // [rsp+108h] [rbp+88h]
  __int64 v101; // [rsp+110h] [rbp+90h]
  const char *v102; // [rsp+118h] [rbp+98h]
  __int64 v103; // [rsp+120h] [rbp+A0h]
  __int64 v104; // [rsp+128h] [rbp+A8h]
  void *v105; // [rsp+130h] [rbp+B0h]
  _QWORD *v106; // [rsp+138h] [rbp+B8h]
  char *v107; // [rsp+140h] [rbp+C0h]
  __int64 v108; // [rsp+148h] [rbp+C8h]
  __int128 v109; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v110; // [rsp+160h] [rbp+E0h]
  char *v111; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v112; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v113; // [rsp+178h] [rbp+F8h]
  char *v114; // [rsp+180h] [rbp+100h]
  char v115; // [rsp+18Fh] [rbp+10Fh] BYREF
  char *v116; // [rsp+190h] [rbp+110h]
  char *v117; // [rsp+198h] [rbp+118h]
  unsigned __int64 v118; // [rsp+1A0h] [rbp+120h]
  char v119; // [rsp+1AEh] [rbp+12Eh] BYREF
  char v120; // [rsp+1AFh] [rbp+12Fh]
  __int64 v121; // [rsp+1B0h] [rbp+130h]

  v121 = -2;
  v76[0] = a1;
  v76[1] = a2;
  v119 = a3;
  if ( dword_1422390B0 )
    v8 = 0;
  else
    v8 = qword_142239098;
  sub_14072B5B0((__int64)&v91, a6, a7, v8);
  v11 = v93;
  v90 = a4;
  if ( v93 )
  {
    nullsub_1(v10, v9);
    v12 = sub_140001650(v11, 1);
    if ( !v12 )
      sub_14196B2DB(1, v11);
  }
  else
  {
    v12 = 1;
  }
  v112 = v11;
  v113 = v12;
  v114 = nullptr;
  v13 = v92;
  v14 = (__int64)&v92[v11];
  v117 = nullptr;
  v108 = v12;
  v111 = (char *)v12;
  v15 = nullptr;
  v116 = v92;
  v118 = 0;
  if ( v92 != &v92[v11] )
  {
    do
    {
      while ( 1 )
      {
        v17 = v13;
        v18 = v15;
        v19 = *v13;
        if ( *v13 >= 0 )
        {
          ++v13;
        }
        else if ( (unsigned __int8)v19 < 0xE0u )
        {
          v13 += 2;
        }
        else
        {
          v13 = &v13[-((unsigned __int8)v19 < 0xF0u) + 4];
        }
        v15 = &v13[v15 - v17];
        v16 = &v18[-v118];
        if ( (unsigned __int64)v18 >= v118 )
          break;
        if ( v13 == (char *)v14 )
          goto LABEL_9;
      }
      v89 = (char *)v14;
      v81 = nullptr;
      v82 = 2;
      v83 = 36;
      v84 = 32;
      v107 = &v116[(_QWORD)v18];
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        v22 = *(&v83 + v21);
        v23 = __CFADD__(v18, v22);
        v24 = (unsigned __int64)&v18[v22];
        if ( !v23 && v24 <= v11 && (v18 == (char *)v11 || (!v18 || *v107 > -65) && (v24 == v11 || v116[v24] >= -64)) )
        {
          sub_141597C30(&v96, v107, *(&v83 + v21));
          if ( (_DWORD)v96 == -1 )
            break;
        }
        v21 = 1;
        v63 = (v20 & 1) == 0;
        v20 = 1;
        if ( !v63 )
          goto LABEL_40;
      }
      if ( v11 != v118 && (v118 && v116[v118] <= -65 || v18 != (char *)v11 && *v107 <= -65) )
        sub_14196B4F0((_DWORD)v116, v11, v118, (_DWORD)v18, (__int64)&off_141A08FC8);
      v25 = v112;
      if ( (unsigned __int64)v16 > v112 - (unsigned __int64)v117 )
      {
        sub_141939070((unsigned int)&v112, (_DWORD)v117, (_DWORD)v16, 1, 1);
        v27 = v114;
        v25 = v112;
        v108 = v113;
        v111 = (char *)v113;
        v26 = v118;
      }
      else
      {
        v26 = v118;
        v63 = v18 == (char *)v118;
        v27 = v117;
        if ( v63 )
          goto LABEL_37;
      }
      sub_1419234B0(&v111[(_QWORD)v27], &v116[v26], v16);
LABEL_37:
      v114 = &v27[(_QWORD)v16];
      v28 = &v27[(_QWORD)v16];
      if ( v25 - (unsigned __int64)&v27[(_QWORD)v16] <= 7 )
      {
        sub_141939070((unsigned int)&v112, (_DWORD)v28, 8, 1, 1);
        v29 = (char *)v113;
        v28 = v114;
      }
      else
      {
        v29 = (char *)v108;
      }
      *(_QWORD *)&v28[(_QWORD)v29] = 0x5D4441455248545BLL;
      v117 = v28 + 8;
      v114 = v28 + 8;
      v108 = (__int64)v29;
      v111 = v29;
      v118 = v24;
LABEL_40:
      v14 = (__int64)v89;
    }
    while ( v13 != v89 );
  }
LABEL_9:
  if ( v118 )
  {
    if ( v11 <= v118 )
    {
      if ( v11 != v118 )
LABEL_12:
        sub_14196B4F0((_DWORD)v116, v11, v118, v11, (__int64)&off_141A08F18);
    }
    else if ( v116[v118] < -64 )
    {
      goto LABEL_12;
    }
  }
  v30 = v11 - v118;
  if ( v11 - v118 > v112 - (unsigned __int64)v117 )
  {
    sub_141939070((unsigned int)&v112, (_DWORD)v117, v11 - v118, 1, 1);
    v33 = (char *)v113;
    v117 = v114;
    v34 = (char *)v113;
    goto LABEL_49;
  }
  if ( v11 != v118 )
  {
    v33 = (char *)v113;
    v34 = v111;
LABEL_49:
    v31 = v117;
    sub_1419234B0(&v34[(_QWORD)v117], &v116[v118], v30);
    v32 = v33;
    goto LABEL_50;
  }
  v31 = v117;
  v32 = v111;
LABEL_50:
  *(_QWORD *)&v96 = 0;
  *((_QWORD *)&v96 + 1) = 1;
  v97 = 0;
  v63 = &v31[v30] == nullptr;
  v35 = (unsigned __int64)&v31[v30];
  v114 = (char *)v35;
  if ( !v63 )
  {
    v72 = v35 & 3;
    LODWORD(v73) = 1000;
    if ( (v35 >> 2) - ((v72 == 0) - 1LL) < 0x3E8 )
      v73 = (v35 >> 2) - ((v72 == 0) - 1LL);
    sub_141939070((unsigned int)&v96, 0, v73, 1, 1);
  }
  v36 = (unsigned __int8 *)&v32[v35];
  v37 = 999;
  v38 = (__int64)&v96;
  while ( v32 != (char *)v36 )
  {
    v39 = (unsigned __int8)*v32;
    if ( *v32 < 0 )
    {
      v44 = v39 & 0x1F;
      v14 = v32[1] & 0x3F;
      if ( (unsigned __int8)v39 > 0xDFu )
      {
        v14 = (unsigned int)((_DWORD)v14 << 6);
        v45 = v14 | v32[2] & 0x3F;
        if ( (unsigned __int8)*v32 < 0xF0u )
        {
          v32 += 3;
          v43 = v45 | (v44 << 12);
          v42 = v97;
          if ( v43 >= 0x80 )
          {
LABEL_64:
            if ( v43 >= 0x800 )
              v40 = 4LL - (v43 < 0x10000);
            else
              v40 = 2;
            v41 = 0;
            goto LABEL_68;
          }
        }
        else
        {
          v46 = v32[3];
          v32 += 4;
          v47 = (v44 & 7) << 18;
          v14 = (v45 << 6) | v46 & 0x3Fu;
LABEL_61:
          v43 = v14 | v47;
          v42 = v97;
          if ( v43 >= 0x80 )
            goto LABEL_64;
        }
        v40 = 1;
        v41 = 1;
        goto LABEL_68;
      }
      v32 += 2;
      v47 = v44 << 6;
      goto LABEL_61;
    }
    ++v32;
    v40 = 1;
    v41 = 1;
    v42 = v97;
    v43 = v39;
LABEL_68:
    if ( v40 > (__int64)v96 - v42 )
    {
      sub_141939070((unsigned int)&v96, v42, v40, 1, 1);
      v38 = (__int64)&v96;
    }
    v48 = *((_QWORD *)&v96 + 1);
    if ( v41 )
    {
      *(_BYTE *)(*((_QWORD *)&v96 + 1) + v42) = v43;
    }
    else
    {
      v49 = v43 & 0x3F | 0x80;
      v14 = v43 >> 6;
      if ( v43 >= 0x800 )
      {
        LOBYTE(v14) = v14 & 0x3F | 0x80;
        v50 = v43 >> 12;
        if ( v43 > 0xFFFF )
        {
          *(_BYTE *)(*((_QWORD *)&v96 + 1) + v42) = (v43 >> 18) | 0xF0;
          *(_BYTE *)(v48 + v42 + 1) = v50 & 0x3F | 0x80;
          *(_BYTE *)(v48 + v42 + 2) = v14;
          *(_BYTE *)(v48 + v42 + 3) = v49;
        }
        else
        {
          *(_BYTE *)(*((_QWORD *)&v96 + 1) + v42) = v50 | 0xE0;
          *(_BYTE *)(v48 + v42 + 1) = v14;
          *(_BYTE *)(v48 + v42 + 2) = v49;
        }
      }
      else
      {
        LOBYTE(v14) = v14 | 0xC0;
        *(_BYTE *)(*((_QWORD *)&v96 + 1) + v42) = v14;
        *(_BYTE *)(v48 + v42 + 1) = v49;
      }
    }
    v97 = v42 + v40;
    v23 = v37-- == 0;
    if ( v23 )
      break;
  }
  v110 = v97;
  result = *(double *)&v96;
  v109 = v96;
  if ( v32 != (char *)v36 )
  {
    v52 = v110;
    if ( (unsigned __int64)(v109 - v110) <= 0xD )
    {
      sub_141939070((unsigned int)&v109, v110, 14, 1, 1);
      v52 = v110;
    }
    v53 = *((_QWORD *)&v109 + 1);
    *(_QWORD *)(*((_QWORD *)&v109 + 1) + v52 + 6) = 0x5D64657461636E75LL;
    v38 = 0x6E7572745B2E2E2ELL;
    *(_QWORD *)(v53 + v52) = 0x6E7572745B2E2E2ELL;
    v14 = v52 + 14;
    v110 = v14;
  }
  if ( *(_QWORD *)off_14223FF10 < 2u )
    goto LABEL_101;
  if ( v90 != 1 )
  {
    nullsub_1(v38, v14);
    v59 = (_DWORD *)sub_140001650(4, 1);
    if ( !v59 )
      sub_14196B2DB(1, 4);
    *v59 = 1701736302;
    *(_QWORD *)&v94 = 4;
    *((_QWORD *)&v94 + 1) = v59;
    v95 = 4;
    v62 = v110;
    v63 = v110 == 0;
    if ( v110 >= 0 )
      goto LABEL_95;
    goto LABEL_87;
  }
  nullsub_1(v38, v14);
  if ( a5 < 0 )
  {
    v54 = 20;
    v57 = 1;
    v65 = (_BYTE *)sub_140001650(20, 1);
    if ( !v65 )
    {
      v120 = 0;
      sub_14196B2DB(1, 20);
    }
    v56 = v65;
    *(_QWORD *)&v96 = 20;
    *((_QWORD *)&v96 + 1) = v65;
    *v65 = 45;
    v97 = 1;
    v58 = -a5;
  }
  else
  {
    v54 = 19;
    v55 = sub_140001650(19, 1);
    if ( !v55 )
    {
      v120 = 0;
      sub_14196B2DB(1, 19);
    }
    v56 = (_BYTE *)v55;
    *(_QWORD *)&v96 = 19;
    *((_QWORD *)&v96 + 1) = v55;
    v97 = 0;
    v57 = 0;
    v58 = a5;
  }
  v120 = 1;
  v66 = sub_1416E1730(v58, &v81, 19);
  v67 = v60;
  if ( v60 > v54 - v57 )
  {
    v120 = 1;
    v74 = v57;
    v75 = v66;
    sub_141939070((unsigned int)&v96, v74, v67, 1, 1);
    v66 = v75;
    v56 = *((_BYTE **)&v96 + 1);
    v57 = v97;
LABEL_93:
    sub_1419234B0(&v56[v57], v66, v67);
  }
  else if ( v60 )
  {
    goto LABEL_93;
  }
  result = *(double *)&v96;
  v94 = v96;
  v95 = v67 + v57;
  v62 = v110;
  v63 = v110 == 0;
  if ( v110 < 0 )
  {
LABEL_87:
    v64 = 0;
    goto LABEL_88;
  }
LABEL_95:
  if ( v63 )
  {
    v70 = 1;
    goto LABEL_99;
  }
  v68 = *((_QWORD *)&v109 + 1);
  nullsub_1(v61, v60);
  v64 = 1;
  v69 = sub_140001650(v62, 1);
  if ( !v69 )
LABEL_88:
    sub_14196B2DB(v64, v62);
  v70 = v69;
  result = sub_1419234B0(v69, v68, v62);
LABEL_99:
  v77[0] = 3;
  v78 = v62;
  v79 = v70;
  v80 = v62;
  v81 = v76;
  v82 = (__int64)sub_140191200;
  v83 = (__int64)&v119;
  v84 = (__int64)sub_14021FD50;
  v85 = &v94;
  v86 = sub_1400015F0;
  v87 = v77;
  v88 = sub_14166C3A0;
  v101 = 2;
  v102 = "aimami::session_deletecodexmate_lib::core::codex_app_server::deletion";
  v103 = 22;
  v105 = &unk_141A08F30;
  v106 = &v81;
  *(_QWORD *)&v96 = 0;
  *((_QWORD *)&v96 + 1) = "codexmate_lib::core::codex_app_server::deletion";
  v97 = 47;
  v98 = 0;
  v99 = aSrcCoreCodexAp;
  v100 = 37;
  v104 = 0xDA00000001LL;
  sub_141503E20(&v115, &v96);
  sub_1401AB4D0(v77, v71);
  if ( (_QWORD)v94 )
    result = sub_140001660(*((_QWORD *)&v94 + 1), v94, 1);
LABEL_101:
  if ( (_QWORD)v109 )
    result = sub_140001660(*((_QWORD *)&v109 + 1), v109, 1);
  if ( v112 )
    result = sub_140001660(v113, v112, 1);
  if ( v91 )
    return sub_140001660(v92, v91, 1);
  return result;
}
