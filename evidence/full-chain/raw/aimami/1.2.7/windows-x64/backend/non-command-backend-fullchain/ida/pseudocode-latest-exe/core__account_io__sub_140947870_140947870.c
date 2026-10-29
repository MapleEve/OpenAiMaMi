// win 1.2.7 latest-exe | module src/core/account_io.rs | ea 0x140947870 | successor of pre-update 0x14020a0c0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.884, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140947870(__int128 *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int128 a5, __int128 *a6)
{
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  const char *v12; // rbx
  __int64 v13; // r12
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rdi
  __int64 v18; // rbx
  void *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // r14
  unsigned __int64 v31; // rdx
  const char *v32; // rdx
  unsigned __int64 v33; // r14
  __int64 (__fastcall *v34)(unsigned __int64); // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // rdi
  _OWORD v47[6]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v48; // [rsp+90h] [rbp+10h] BYREF
  __int64 v49; // [rsp+A0h] [rbp+20h]
  __int128 v50; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+38h]
  __int128 v52; // [rsp+C0h] [rbp+40h]
  __int128 v53; // [rsp+D0h] [rbp+50h]
  __int128 v54; // [rsp+E0h] [rbp+60h]
  __int128 v55; // [rsp+F0h] [rbp+70h]
  __int128 v56; // [rsp+100h] [rbp+80h] BYREF
  __int128 v57; // [rsp+110h] [rbp+90h]
  __int128 v58; // [rsp+120h] [rbp+A0h]
  __int128 v59; // [rsp+130h] [rbp+B0h]
  __int128 v60; // [rsp+140h] [rbp+C0h]
  __int128 v61; // [rsp+150h] [rbp+D0h]
  _QWORD v62[3]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v63[3]; // [rsp+178h] [rbp+F8h] BYREF
  __int128 v64; // [rsp+190h] [rbp+110h] BYREF
  __int128 v65; // [rsp+1A0h] [rbp+120h]
  __int128 v66; // [rsp+1B0h] [rbp+130h]
  __int128 v67; // [rsp+1C0h] [rbp+140h]
  _QWORD v68[3]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v69; // [rsp+258h] [rbp+1D8h] BYREF
  unsigned __int64 v70; // [rsp+268h] [rbp+1E8h]
  __int128 v71; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v72; // [rsp+280h] [rbp+200h]
  __int128 v73; // [rsp+290h] [rbp+210h]
  __int128 v74; // [rsp+2A0h] [rbp+220h]
  __int64 v75; // [rsp+320h] [rbp+2A0h]
  const char *v76; // [rsp+328h] [rbp+2A8h]
  const char *v77; // [rsp+330h] [rbp+2B0h]
  const char *v78; // [rsp+338h] [rbp+2B8h]
  unsigned __int64 v79; // [rsp+340h] [rbp+2C0h]
  const char *v80; // [rsp+348h] [rbp+2C8h] BYREF
  unsigned __int64 v81; // [rsp+350h] [rbp+2D0h] BYREF
  const char *v82; // [rsp+358h] [rbp+2D8h]
  __int64 v83; // [rsp+360h] [rbp+2E0h]
  _BYTE v84[72]; // [rsp+368h] [rbp+2E8h]
  __int64 v85; // [rsp+3B8h] [rbp+338h]
  __int64 v86; // [rsp+3C0h] [rbp+340h]
  __int64 v87; // [rsp+3D0h] [rbp+350h]
  __int64 v88; // [rsp+3D8h] [rbp+358h]
  unsigned __int64 v89; // [rsp+3F8h] [rbp+378h]
  HANDLE v90; // [rsp+400h] [rbp+380h] BYREF
  HANDLE hObject; // [rsp+408h] [rbp+388h] BYREF
  _QWORD *v92; // [rsp+410h] [rbp+390h]
  __int64 v93; // [rsp+418h] [rbp+398h]
  __int64 v94; // [rsp+420h] [rbp+3A0h]
  char v95; // [rsp+42Eh] [rbp+3AEh]
  char v96; // [rsp+42Fh] [rbp+3AFh]
  __int64 v97; // [rsp+430h] [rbp+3B0h]
  char v98; // [rsp+43Eh] [rbp+3BEh]
  char v99; // [rsp+43Fh] [rbp+3BFh]
  __int64 v100; // [rsp+440h] [rbp+3C0h]

  v100 = -2;
  result = (__int64)a6;
  v69 = a5;
  if ( !a4 )
  {
    a1[5] = a6[5];
    a1[4] = a6[4];
    v14 = *a6;
    v15 = a6[1];
    v16 = a6[2];
    a1[3] = a6[3];
    a1[2] = v16;
    a1[1] = v15;
    *a1 = v14;
    return result;
  }
  v92 = a2;
  v75 = a4;
  v9 = a3 + 104 * a4;
  sub_140C69E20(&v80, a3, v9);
  v10 = (__int64)v80;
  v11 = v81;
  v12 = v82;
  v13 = v83;
  if ( v80 != (const char *)-1LL )
  {
    v74 = *(_OWORD *)&v84[48];
    v73 = *(_OWORD *)&v84[32];
    v72 = *(_OWORD *)&v84[16];
    v71 = *(_OWORD *)v84;
LABEL_25:
    v23 = v11;
LABEL_26:
    v80 = (const char *)v10;
    v81 = v23;
    v82 = v12;
    v83 = v13;
    *(_OWORD *)v84 = v71;
    *(_OWORD *)&v84[16] = v72;
    *(_OWORD *)&v84[32] = v73;
    *(_OWORD *)&v84[48] = v74;
    *(_QWORD *)&v64 = &v69;
    *((_QWORD *)&v64 + 1) = sub_140191200;
    *(_QWORD *)&v65 = a6;
    *((_QWORD *)&v65 + 1) = sub_140D76130;
    *(_QWORD *)&v66 = &v80;
    *((_QWORD *)&v66 + 1) = sub_140D76130;
    sub_1416DAFA0(&v48, &unk_141A5BB57, &v64);
    *((_QWORD *)a1 + 3) = v49;
    *(__int128 *)((char *)a1 + 8) = v48;
    *(_QWORD *)a1 = 10;
    sub_140906570(&v80);
    return sub_140906570(a6);
  }
  v89 = v81;
  v68[0] = v81;
  v77 = v82;
  v68[1] = v82;
  v68[2] = v83;
  v17 = v92[33];
  v18 = v92[34];
  sub_1416B18A0((unsigned int)&v71, v17, v18, (unsigned int)aLiveAuthLockli, 15);
  v97 = *((_QWORD *)&v71 + 1);
  sub_140C97180((unsigned int)&v80, DWORD2(v71), v72, (unsigned int)&aLiveAuthLockli[15], 9);
  v10 = (__int64)v80;
  v70 = a3;
  if ( v80 != (const char *)-1LL )
  {
    v94 = (__int64)v82;
    v13 = v83;
    v64 = *(_OWORD *)v84;
    v65 = *(_OWORD *)&v84[16];
    v66 = *(_OWORD *)&v84[32];
    v67 = *(_OWORD *)&v84[48];
    v19 = (void *)v81;
    v20 = v71;
    if ( !(_QWORD)v71 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v19 = (void *)v81;
  v20 = v71;
  if ( (_QWORD)v71 )
LABEL_7:
    sub_140001660(v97, v20, 1);
LABEL_8:
  if ( (_DWORD)v10 != -1 )
  {
    v74 = v67;
    v73 = v66;
    v72 = v65;
    v71 = v64;
LABEL_22:
    sub_1402350E0(v68);
    if ( v89 )
      sub_140001660(v77, 8 * v89, 8);
    v12 = (const char *)v94;
    v11 = (unsigned __int64)v19;
    goto LABEL_25;
  }
  hObject = v19;
  sub_1416B18A0((unsigned int)&v71, v17, v18, (unsigned int)aAccountDomainL, 20);
  v97 = *((_QWORD *)&v71 + 1);
  sub_140C97180((unsigned int)&v80, DWORD2(v71), v72, (unsigned int)&aAccountDomainL[20], 13);
  v10 = (__int64)v80;
  if ( v80 != (const char *)-1LL )
  {
    v94 = (__int64)v82;
    v13 = v83;
    v64 = *(_OWORD *)v84;
    v65 = *(_OWORD *)&v84[16];
    v66 = *(_OWORD *)&v84[32];
    v67 = *(_OWORD *)&v84[48];
    v19 = (void *)v81;
    v21 = v71;
    if ( !(_QWORD)v71 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v19 = (void *)v81;
  v21 = v71;
  if ( (_QWORD)v71 )
LABEL_14:
    sub_140001660(v97, v21, 1);
LABEL_15:
  if ( (_DWORD)v10 != -1 )
  {
    v74 = v67;
    v73 = v66;
    v72 = v65;
    v71 = v64;
    goto LABEL_17;
  }
  v90 = v19;
  sub_140947290(&v56, v92[37], v92[38]);
  v23 = v70;
  if ( (_DWORD)v56 != -1 )
  {
    v47[5] = v61;
    v47[4] = v60;
    v47[3] = v59;
    v47[2] = v58;
    v47[1] = v57;
    v47[0] = v56;
    v12 = (const char *)v92[5];
    v24 = v92[6];
    sub_140718ED0(&v71, v12, v24);
    v93 = v71;
    if ( (_QWORD)v71 == -2 )
    {
      v99 = 1;
      sub_1416C49D0(&v80, v12, v24);
      if ( (_DWORD)v80 == 2 )
      {
        v25 = v81;
        v26 = v81 & 3;
        if ( (unsigned int)(v26 - 2) >= 2 )
        {
LABEL_34:
          if ( v26 )
          {
            v81 = v25 - 1;
            LOBYTE(v80) = 3;
            v99 = 1;
            sub_1416EBAD0(&v81);
          }
        }
        v97 = -1;
        v10 = -1;
        goto LABEL_49;
      }
      goto LABEL_48;
    }
    v99 = 1;
    if ( (unsigned __int8)sub_14071CE40(&v71) )
    {
      sub_1406C3160(&v71);
      v97 = -1;
      v10 = -1;
LABEL_51:
      sub_140906570(v47);
      if ( v10 != -1 )
      {
        v74 = v55;
        v73 = v54;
        v72 = v53;
        v71 = v52;
        sub_140CAF5C0(&v90);
        CloseHandle(v90);
        v19 = (void *)v97;
LABEL_17:
        v22 = sub_14143F370(&hObject);
        if ( v22 && (unsigned int)(v22 & 3) - 2 >= 2 && (v22 & 3) != 0 )
        {
          v81 = v22 - 1;
          LOBYTE(v80) = 3;
          sub_1416EBAD0(&v81);
        }
        CloseHandle(hObject);
        goto LABEL_22;
      }
      v93 = v13;
      goto LABEL_56;
    }
    v99 = 1;
    if ( !(unsigned __int8)sub_14071C530(&v71) )
    {
LABEL_48:
      v80 = (const char *)v47;
      v81 = (unsigned __int64)sub_140D76130;
      v99 = 1;
      sub_1416DAFA0(v62, &unk_141A5BC62, &v80);
      v97 = v62[0];
      v94 = v62[1];
      v10 = 10;
      v13 = v62[2];
      if ( v93 == -2 )
      {
LABEL_49:
        sub_140906570((char *)&v71 + 8);
        goto LABEL_51;
      }
LABEL_50:
      sub_1406C3160(&v71);
      goto LABEL_51;
    }
    sub_1419234B0(&v64, &v71, 176);
    sub_140719C90(&v80, &v64, v12, v24);
    if ( (_DWORD)v80 == 2 )
    {
      v10 = v81;
      v97 = (__int64)v82;
      v94 = v83;
      v13 = *(_QWORD *)v84;
      v52 = *(_OWORD *)&v84[8];
      v53 = *(_OWORD *)&v84[24];
      v54 = *(_OWORD *)&v84[40];
      v55 = *(_OWORD *)&v84[56];
      goto LABEL_50;
    }
    v39 = *(_QWORD *)&v84[40];
    v40 = *(_QWORD *)&v84[32];
    v12 = *(const char **)&v84[56];
    v93 = *(_QWORD *)&v84[64];
    v41 = v85;
    v94 = v86;
    v42 = v87;
    v97 = v88;
    if ( v82 )
    {
      v76 = *(const char **)&v84[56];
      v43 = v85;
      v44 = v87;
      v45 = *(_QWORD *)&v84[40];
      sub_140001660(v83, v82, 1);
      v39 = v45;
      v42 = v44;
      v41 = v43;
      v12 = v76;
    }
    if ( v40 )
      sub_140001660(v39, v40, 1);
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v93, v12, 1);
      if ( (unsigned __int64)(v41 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_115:
        if ( (unsigned __int64)(v42 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_117;
        goto LABEL_116;
      }
    }
    else if ( (unsigned __int64)(v41 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_115;
    }
    sub_140001660(v94, v41, 1);
    if ( (unsigned __int64)(v42 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_117:
      v97 = *(_QWORD *)&v84[8];
      v13 = *(_QWORD *)&v84[24];
      v94 = *(_QWORD *)&v84[16];
      v46 = v71;
      sub_1406C3160(&v64);
      v10 = -1;
      if ( v46 != -2 )
        goto LABEL_51;
      goto LABEL_49;
    }
LABEL_116:
    sub_140001660(v97, v42, 1);
    goto LABEL_117;
  }
  v97 = *((_QWORD *)&v56 + 1);
  v27 = v92[5];
  v12 = (const char *)v92[6];
  v96 = 1;
  sub_140718ED0(&v80, v27, v12);
  if ( v97 == -1 )
  {
    *(_QWORD *)&v64 = -1;
  }
  else
  {
    v28 = *((_QWORD *)&v57 + 1);
    v94 = v57;
    v64 = v58;
    *(_QWORD *)&v65 = v59;
    if ( *((_QWORD *)&v57 + 1) )
    {
      v13 = v94;
      do
      {
        sub_1401AE3E0(v13);
        v13 += 424;
        --v28;
      }
      while ( v28 );
    }
    if ( v97 )
      sub_140001660(v94, 424 * v97, 8);
  }
  v96 = 0;
  sub_14094AAE0((unsigned int)&v71, (unsigned int)&v80, v27, (_DWORD)v12, (__int64)&v64);
  v94 = *((_QWORD *)&v71 + 1);
  v97 = v71;
  v93 = v72;
LABEL_56:
  *(_QWORD *)&v71 = 0;
  v76 = (const char *)v92[41];
  v92 = (_QWORD *)v92[42];
  v29 = 0;
  while ( v23 != v9 )
  {
    v13 = v9 - 104;
    if ( v97 == -1 || v93 != *(_QWORD *)(v9 - 88) || (unsigned int)sub_141923B40(v94, *(_QWORD *)(v9 - 96), v93) )
    {
      v30 = *(_QWORD *)(v9 - 72);
      v12 = *(const char **)(v9 - 64);
      sub_14071E1C0((unsigned int)&v80, v30, (_DWORD)v12, (_DWORD)v76, (__int64)v92);
      if ( (_DWORD)v80 != -1 )
      {
        sub_140906570(&v80);
        goto LABEL_58;
      }
      sub_1416CC450(&v80, v30, v12);
      v25 = (unsigned __int64)v80;
      v31 = v81;
      v78 = v80;
      if ( v80 == (const char *)-1LL )
      {
        v12 = (const char *)(v81 & 3);
        switch ( v81 & 3 )
        {
          case 0uLL:
            v33 = v81;
            v98 = 1;
            v34 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v26, v81) + 8);
            v98 = 1;
            LOBYTE(v35) = v34(HIDWORD(v33));
            v31 = v33;
            break;
          case 1uLL:
            v35 = HIDWORD(v81);
            break;
          default:
            goto LABEL_34;
        }
        if ( !(_BYTE)v35 && *(_QWORD *)(v9 - 24) == -1 )
        {
          *(_QWORD *)&v64 = v31;
          v98 = 0;
          sub_140036080(&v64);
          v9 -= 104;
        }
        else
        {
          *(_QWORD *)&v71 = ++v29;
          if ( (unsigned int)((_DWORD)v12 - 2) >= 2 && v12 )
          {
            *((_QWORD *)&v64 + 1) = v31 - 1;
            LOBYTE(v64) = 3;
            sub_1416EBAD0((char *)&v64 + 8);
          }
          v9 -= 104;
        }
      }
      else
      {
        v79 = v81;
        if ( v82 == *(const char **)(v9 - 32) && !(unsigned int)sub_141923B40(v79, *(_QWORD *)(v9 - 40), v82) )
        {
          if ( *(_QWORD *)(v9 - 24) == -1 )
          {
            v36 = sub_1416C4110(v30, v12);
            *(_QWORD *)&v64 = v36;
            if ( !v36 )
              goto LABEL_68;
            v95 = 1;
            v12 = (const char *)v36;
            if ( !(unsigned __int8)sub_140930C70(v36) )
            {
              v80 = v12;
              v95 = 0;
              sub_140036080(&v80);
              goto LABEL_68;
            }
            v32 = v12;
          }
          else if ( (sub_1407C8880(v30, v12, *(_QWORD *)(v9 - 16), *(_QWORD *)(v9 - 8)) & 1) == 0 )
          {
            sub_1407B9160(v32);
            goto LABEL_68;
          }
          *(_QWORD *)&v71 = ++v29;
          if ( ((unsigned __int8)v32 & 3u) - 2 >= 2 && ((unsigned __int8)v32 & 3) != 0 )
          {
            v81 = (unsigned __int64)(v32 - 1);
            LOBYTE(v80) = 3;
            sub_1416EBAD0(&v81);
          }
        }
        else
        {
          *(_QWORD *)&v71 = ++v29;
        }
LABEL_68:
        v9 -= 104;
        if ( v78 )
        {
          sub_140001660(v79, v78, 1);
          v9 = v13;
        }
      }
    }
    else
    {
LABEL_58:
      *(_QWORD *)&v71 = ++v29;
      v9 -= 104;
    }
  }
  if ( v29 )
  {
    *(_QWORD *)&v64 = v75;
    v80 = (const char *)&v71;
    v81 = (unsigned __int64)sub_1416EBAE0;
    v82 = (const char *)&v64;
    v83 = (__int64)sub_1416EBAE0;
    sub_1416DAFA0(v63, &unk_141A5BA2B, &v80);
    v23 = v63[0];
    v12 = (const char *)v63[1];
    v10 = 10;
    v13 = v63[2];
  }
  else
  {
    v10 = -1;
  }
  if ( (unsigned __int64)(v97 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v94, v97, 1);
  v37 = sub_14143F370(&v90);
  if ( v37 && (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
  {
    v81 = v37 - 1;
    LOBYTE(v80) = 3;
    sub_1416EBAD0(&v81);
  }
  CloseHandle(v90);
  v38 = sub_14143F370(&hObject);
  if ( v38 && (unsigned int)(v38 & 3) - 2 >= 2 && (v38 & 3) != 0 )
  {
    v81 = v38 - 1;
    LOBYTE(v80) = 3;
    sub_1416EBAD0(&v81);
  }
  CloseHandle(hObject);
  sub_1402350E0(v68);
  if ( v89 )
    sub_140001660(v77, 8 * v89, 8);
  if ( v29 )
    goto LABEL_26;
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    *(_QWORD *)&v71 = v75;
    *(_QWORD *)&v64 = &v71;
    *((_QWORD *)&v64 + 1) = sub_1416EBAE0;
    *(_QWORD *)&v65 = &v69;
    *((_QWORD *)&v65 + 1) = sub_140191200;
    v80 = aCodexmateLibCo_37;
    v81 = 31;
    v82 = aCodexmateLibCo_37;
    v83 = 31;
    *(_QWORD *)v84 = &off_141A5BAF8;
    sub_140AF72B0(&unk_141A5BA97, &v64, 2, &v80);
  }
  v80 = (const char *)&v69;
  v81 = (unsigned __int64)sub_140191200;
  v82 = (const char *)a6;
  v83 = (__int64)sub_140D76130;
  sub_1416DAFA0(&v50, &unk_141A5BB2F, &v80);
  *((_QWORD *)a1 + 3) = v51;
  *(__int128 *)((char *)a1 + 8) = v50;
  *(_QWORD *)a1 = 10;
  return sub_140906570(a6);
}
