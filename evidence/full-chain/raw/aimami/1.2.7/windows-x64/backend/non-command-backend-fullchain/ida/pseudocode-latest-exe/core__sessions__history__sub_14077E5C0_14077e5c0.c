// win 1.2.7 latest-exe | module src/core/sessions/history.rs | ea 0x14077e5c0 | successor of pre-update 0x14019bdf0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_14077E5C0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // r12
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int128 v15; // rcx
  __int64 v16; // rcx
  char v17; // si
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  _BYTE *v23; // rdx
  __int64 v24; // r15
  __int64 v25; // r15
  __int128 v26; // rcx
  char v27; // al
  void *v28; // rdx
  char v29; // si
  _BYTE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r13
  _DWORD *v34; // rax
  char v35; // si
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r15
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  __int64 v42; // rax
  _BYTE *v43; // rbx
  __int64 v44; // rax
  _BYTE *v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  bool v54; // al
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rdx
  _QWORD *v62; // rsi
  void (__fastcall *v63)(__int64); // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  _OWORD v69[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v70; // [rsp+58h] [rbp-28h] BYREF
  __int64 v71; // [rsp+68h] [rbp-18h]
  __int64 v72; // [rsp+70h] [rbp-10h] BYREF
  __int64 v73; // [rsp+78h] [rbp-8h]
  __int64 v74; // [rsp+80h] [rbp+0h]
  _QWORD v75[3]; // [rsp+88h] [rbp+8h] BYREF
  __int64 v76; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v77; // [rsp+A8h] [rbp+28h]
  __int64 v78; // [rsp+B0h] [rbp+30h]
  _QWORD v79[3]; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v80; // [rsp+D8h] [rbp+58h]
  __int64 v81; // [rsp+E0h] [rbp+60h]
  _BYTE *v82; // [rsp+E8h] [rbp+68h]
  __int64 v83; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v84; // [rsp+F8h] [rbp+78h]
  _BYTE v85[17]; // [rsp+100h] [rbp+80h]
  _BYTE v86[23]; // [rsp+111h] [rbp+91h]
  __int16 v87; // [rsp+128h] [rbp+A8h]
  char v88; // [rsp+12Ah] [rbp+AAh]
  __int128 v89; // [rsp+130h] [rbp+B0h] BYREF
  char v90; // [rsp+140h] [rbp+C0h]
  _BYTE v91[39]; // [rsp+141h] [rbp+C1h]
  __int16 v92; // [rsp+168h] [rbp+E8h]
  char v93; // [rsp+16Ah] [rbp+EAh]
  __int128 v94; // [rsp+170h] [rbp+F0h] BYREF
  _BYTE v95[23]; // [rsp+180h] [rbp+100h]
  __int64 v96; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v97; // [rsp+1A8h] [rbp+128h]
  unsigned __int8 v98; // [rsp+1B0h] [rbp+130h]
  __int128 v99; // [rsp+1B1h] [rbp+131h]
  _BYTE v100[23]; // [rsp+1C1h] [rbp+141h]
  __int16 v101; // [rsp+1D8h] [rbp+158h]
  char v102; // [rsp+1DAh] [rbp+15Ah]
  __int64 v103; // [rsp+1E0h] [rbp+160h]
  HANDLE hObject; // [rsp+1E8h] [rbp+168h] BYREF
  _QWORD *v105; // [rsp+1F0h] [rbp+170h]
  __int64 v106; // [rsp+1F8h] [rbp+178h]
  _BYTE v107[56]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v108; // [rsp+238h] [rbp+1B8h]
  _BYTE v109[39]; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v110; // [rsp+288h] [rbp+208h]
  __int64 v111; // [rsp+290h] [rbp+210h]
  __int64 v112; // [rsp+298h] [rbp+218h]
  __int64 v113; // [rsp+2A0h] [rbp+220h]
  _QWORD *v114; // [rsp+2A8h] [rbp+228h]
  char v115; // [rsp+2B5h] [rbp+235h]
  char v116; // [rsp+2B6h] [rbp+236h]
  char v117; // [rsp+2B7h] [rbp+237h]
  __int64 v118; // [rsp+2B8h] [rbp+238h]

  v118 = -2;
  v5 = *(_QWORD **)(a3 + 8);
  v6 = *(_QWORD *)(a3 + 16);
  v103 = a2;
  v7 = sub_1416B19D0(a1, a2);
  if ( !v7 )
  {
    LOBYTE(v9) = 20;
    return sub_1416A8370(v9, aAtomicWriteMis, 28);
  }
  v10 = v7;
  v11 = v8;
  v107[0] = 1;
  v12 = sub_1416B9760(v107, v7, v8);
  if ( !v12 )
  {
    v114 = v5;
    sub_1407C8670(v75, a1, v103);
    LODWORD(v96) = GetCurrentProcessId();
    sub_141597890(v107);
    v89 = *(_OWORD *)v107;
    *(_QWORD *)v107 = v75;
    *(_QWORD *)&v107[8] = sub_1400015F0;
    *(_QWORD *)&v107[16] = &v96;
    *(_QWORD *)&v107[24] = sub_1416EACD0;
    *(_QWORD *)&v107[32] = &v89;
    *(_QWORD *)&v107[40] = sub_1402230B0;
    sub_1416DAFA0(&v72, &unk_141A4608E, v107);
    v112 = v73;
    sub_1416B18A0((unsigned int)&v76, v10, v11, v73, v74);
    if ( v72 )
      sub_140001660(v112, v72, 1);
    v112 = v77;
    v13 = v78;
    sub_1416B0AC0(&v83, a1, v103);
    sub_1416B0AC0(&v96, v112, v13);
    v14 = v84;
    *((_QWORD *)&v15 + 1) = v97;
    if ( v84 == v97
      && (_BYTE)v87 == (_BYTE)v101
      && HIBYTE(v87) == 2
      && HIBYTE(v101) == 2
      && v85[0] < 3u == v98 < 3u
      && !(unsigned int)sub_141923B40(v83, v96, v84) )
    {
      goto LABEL_16;
    }
    if ( v85[0] != 0xFF )
    {
      *(_QWORD *)&v109[31] = *(_QWORD *)&v86[15];
      *(_OWORD *)&v109[16] = *(_OWORD *)v86;
      *(_OWORD *)v109 = *(_OWORD *)&v85[1];
    }
    *(_QWORD *)&v89 = v83;
    *((_QWORD *)&v89 + 1) = v14;
    v90 = v85[0];
    *(_OWORD *)v91 = *(_OWORD *)v109;
    *(_OWORD *)&v91[16] = *(_OWORD *)&v109[16];
    *(_QWORD *)&v91[31] = *(_QWORD *)&v109[31];
    v92 = v87;
    v93 = v88;
    *(_QWORD *)&v15 = v96;
    if ( v98 != 0xFF )
    {
      *(_QWORD *)&v95[15] = *(_QWORD *)&v100[15];
      *(_OWORD *)v95 = *(_OWORD *)v100;
      v94 = v99;
    }
    *(_OWORD *)v107 = v15;
    v107[16] = v98;
    *(_OWORD *)&v107[17] = v94;
    *(_OWORD *)&v107[33] = *(_OWORD *)v95;
    *(_QWORD *)&v107[48] = *(_QWORD *)&v95[15];
    LOWORD(v108) = v101;
    BYTE2(v108) = v102;
    if ( (unsigned __int8)sub_140865EB0(&v89, v107) )
      goto LABEL_16;
    v19 = sub_1416B19D0(a1, v103);
    v21 = v20;
    v22 = sub_1416B19D0(v112, v13);
    v24 = v22;
    if ( v19 )
    {
      if ( v22 )
      {
        v3 = v23;
        sub_1416B0AC0(&v83, v19, v21);
        sub_1416B0AC0(&v96, v24, v3);
        v25 = v84;
        *((_QWORD *)&v26 + 1) = v97;
        if ( v84 == v97
          && (_BYTE)v87 == (_BYTE)v101
          && HIBYTE(v87) == 2
          && HIBYTE(v101) == 2
          && v85[0] < 3u == v98 < 3u
          && !(unsigned int)sub_141923B40(v83, v96, v84) )
        {
          goto LABEL_40;
        }
        if ( v85[0] != 0xFF )
        {
          *(_QWORD *)&v109[31] = *(_QWORD *)&v86[15];
          *(_OWORD *)&v109[16] = *(_OWORD *)v86;
          *(_OWORD *)v109 = *(_OWORD *)&v85[1];
        }
        *(_QWORD *)&v89 = v83;
        *((_QWORD *)&v89 + 1) = v25;
        v90 = v85[0];
        *(_OWORD *)v91 = *(_OWORD *)v109;
        *(_OWORD *)&v91[16] = *(_OWORD *)&v109[16];
        *(_QWORD *)&v91[31] = *(_QWORD *)&v109[31];
        v92 = v87;
        v93 = v88;
        *(_QWORD *)&v26 = v96;
        if ( v98 != 0xFF )
        {
          *(_QWORD *)&v95[15] = *(_QWORD *)&v100[15];
          *(_OWORD *)v95 = *(_OWORD *)v100;
          v94 = v99;
        }
        *(_OWORD *)v107 = v26;
        v107[16] = v98;
        *(_OWORD *)&v107[17] = v94;
        *(_OWORD *)&v107[33] = *(_OWORD *)v95;
        *(_QWORD *)&v107[48] = *(_QWORD *)&v95[15];
        LOWORD(v108) = v101;
        BYTE2(v108) = v102;
        if ( (unsigned __int8)sub_140865EB0(&v89, v107) )
        {
LABEL_40:
          sub_1416B0D00(&v89, v112, v13);
          *(_DWORD *)&v91[15] = 2;
          LODWORD(v83) = 0;
          v84 = 0;
          *(_DWORD *)v85 = 7;
          *(_QWORD *)&v85[4] = 0;
          *(_QWORD *)&v85[9] = 0x100000001LL;
          v27 = sub_1416BFE10(&v83, v112, v13);
          v12 = (__int64)v28;
          if ( (v27 & 1) != 0 )
            goto LABEL_162;
          hObject = v28;
          v117 = 1;
          sub_1407BD380(v107, &hObject, 0);
          if ( *(_DWORD *)v107 == 2 )
          {
            v12 = *(_QWORD *)&v107[8];
          }
          else
          {
            v70 = *(_OWORD *)v107;
            v71 = *(_QWORD *)&v107[16];
            *(_QWORD *)&v91[15] = *(_QWORD *)v107;
            *(_OWORD *)&v91[23] = *(_OWORD *)&v107[8];
            v117 = 1;
            sub_140C97730(&v96, 0x2000, &hObject);
            if ( !v6 )
              sub_14196B590(aHistoryAlwaysH, 25, &off_141A49340);
            v105 = &v114[34 * v6];
            v29 = *((_BYTE *)v105 - 112);
            switch ( v29 )
            {
              case 0:
                break;
              case 1:
                v109[1] = *((_BYTE *)v105 - 111);
                break;
              case 2:
                *(_OWORD *)&v109[8] = *(_OWORD *)(v105 - 13);
                break;
              case 3:
                sub_1416DB410(&v109[8], v105 - 13);
                break;
              case 4:
                sub_1401C07A0(&v109[8], *(v105 - 12), *(v105 - 11));
                break;
              case 5:
                sub_140A96800(&v109[8], v105 - 13);
                break;
            }
            v109[0] = v29;
            v30 = (_BYTE *)sub_1416724D0(aPayload_3, 7, v109);
            if ( v30 )
            {
              if ( *v30 == 5 )
              {
                sub_140A13D20(v107, v30 + 8, aHistoryBase, 12);
                if ( v107[0] != 0xFF )
                  sub_140032FF0(v107);
              }
            }
            if ( v109[0] == 5 )
            {
              v3 = &v109[8];
              sub_140A13D20(v107, &v109[8], aOrdinal, 7);
              if ( v107[0] != 0xFF )
                sub_140032FF0(v107);
              v33 = sub_1416724D0(aOrdinal, 7, v114 + 20);
              if ( v33 )
              {
                nullsub_1(v32, v31);
                v34 = (_DWORD *)sub_140001650(7, 1);
                if ( !v34 )
                  sub_14196B2DB(1, 7);
                *(_DWORD *)((char *)v34 + 3) = 1818324585;
                *v34 = 1768190575;
                v79[0] = 7;
                v79[1] = v34;
                v79[2] = 7;
                v35 = *(_BYTE *)v33;
                switch ( *(_BYTE *)v33 )
                {
                  case 0:
                    break;
                  case 1:
                    v107[1] = *(_BYTE *)(v33 + 1);
                    break;
                  case 2:
                    *(_OWORD *)&v107[8] = *(_OWORD *)(v33 + 8);
                    break;
                  case 3:
                    v115 = 1;
                    sub_1416DB410(&v107[8], v33 + 8);
                    break;
                  case 4:
                    v36 = *(_QWORD *)(v33 + 16);
                    v37 = *(_QWORD *)(v33 + 24);
                    v115 = 1;
                    sub_1401C07A0(&v107[8], v36, v37);
                    break;
                  case 5:
                    v115 = 1;
                    sub_140A96800(&v107[8], v33 + 8);
                    break;
                }
                v107[0] = v35;
                v115 = 0;
                sub_140A68320(&v94, &v109[8], v79, v107);
                if ( (_BYTE)v94 != 0xFF )
                  sub_140032FF0(&v94);
              }
            }
            v69[1] = *(_OWORD *)&v109[16];
            v69[0] = *(_OWORD *)v109;
            *(_QWORD *)v107 = &v96;
            v38 = sub_140786230(v69, v107);
            if ( v38 )
            {
              v12 = sub_14166EA20(v38);
              sub_140032FF0(v69);
              goto LABEL_156;
            }
            sub_140032FF0(v69);
            v12 = sub_140CB15E0(&v96, &unk_141A454D0, 3);
            if ( v12 )
            {
LABEL_156:
              sub_140CAE840(&v96);
            }
            else
            {
              v39 = 0x100003600LL;
              while ( v114 != v105 )
              {
                sub_1416C49D0(v107, v114[31], v114[32]);
                if ( *(_DWORD *)v107 == 2 )
                {
                  v12 = *(_QWORD *)&v107[8];
                  goto LABEL_156;
                }
                v40 = v114;
                if ( v108 != v114[7] || *(_QWORD *)&v107[48] != v114[6] )
                {
                  LOBYTE(v40) = 21;
                  v12 = sub_1416A8370(v40, asc_141A48FC2, 60);
                  goto LABEL_156;
                }
                sub_14082CFB0(v107, v114[31], v114[32]);
                v41 = *(_QWORD **)&v107[8];
                v113 = *(_QWORD *)&v107[8];
                v111 = *(_QWORD *)v107;
                if ( !*(_QWORD *)v107 )
                {
                  v12 = v113;
                  goto LABEL_156;
                }
                v42 = v114[24];
                LODWORD(v43) = 0;
                if ( v42 != 2 && (_DWORD)v42 == 1 && !v114[25] )
                {
                  v44 = sub_1416724D0(aOrdinal, 7, v114 + 20);
                  if ( v44 && *(_BYTE *)v44 == 2 && !*(_QWORD *)(v44 + 8) )
                  {
                    v41 = v114;
                    LOBYTE(v43) = *(_QWORD *)(v44 + 16) == v114[29];
                  }
                  else
                  {
                    LODWORD(v43) = 0;
                  }
                }
                v80 = v114 + 34;
                v81 = 0;
                v45 = nullptr;
                while ( 1 )
                {
LABEL_84:
                  v46 = v114[24];
                  if ( v46 == 2 )
                  {
                    LODWORD(v46) = 0;
                  }
                  else
                  {
                    v3 = (_BYTE *)v114[25];
                    if ( v46 == 1 && v3 == v45 )
                    {
                      LODWORD(v59) = 1;
                      if ( (_BYTE)v43 )
                        goto LABEL_129;
LABEL_124:
                      if ( v81 == 1 && v82 != (_BYTE *)-1LL )
                      {
                        v41 = v114;
                        if ( v82 + 1 == (_BYTE *)v114[29] )
                        {
LABEL_127:
                          if ( (_DWORD)v59 != 1 || (_BYTE *)v114[25] == v45 )
                            goto LABEL_129;
                        }
                      }
                      LOBYTE(v41) = 21;
                      v64 = sub_1416A8370(v41, asc_141A459AB, 51);
LABEL_140:
                      v12 = v64;
                      v63 = *(void (__fastcall **)(__int64))v113;
                      if ( !*(_QWORD *)v113 )
                      {
LABEL_154:
                        v66 = *(_QWORD *)(v113 + 8);
                        if ( v66 )
                          sub_140001660(v111, v66, *(_QWORD *)(v113 + 16));
                        goto LABEL_156;
                      }
LABEL_153:
                      v63(v111);
                      goto LABEL_154;
                    }
                  }
                  sub_14082D3F0(v107, v111, v113, 0x4000000);
                  v110 = *(_QWORD *)&v107[8];
                  v48 = *(_QWORD *)v107;
                  if ( *(_QWORD *)v107 == -1 )
                  {
                    v12 = v110;
                    v63 = *(void (__fastcall **)(__int64))v113;
                    if ( !*(_QWORD *)v113 )
                      goto LABEL_154;
                    goto LABEL_153;
                  }
                  if ( !*(_QWORD *)&v107[16] )
                    break;
                  v45 += *(_QWORD *)&v107[16];
                  if ( ((v45 > v3) & (unsigned __int8)v46) != 0 )
                  {
                    v106 = *(_QWORD *)v107;
                    LOBYTE(v47) = 21;
                    v12 = sub_1416A8370(v47, asc_141A4597E, 45);
LABEL_150:
                    if ( v106 )
                      sub_140001660(v110, v106, 1);
                    v63 = *(void (__fastcall **)(__int64))v113;
                    if ( !*(_QWORD *)v113 )
                      goto LABEL_154;
                    goto LABEL_153;
                  }
                  v41 = nullptr;
                  while ( 1 )
                  {
                    v49 = *((unsigned __int8 *)v41 + v110);
                    if ( v49 > 0x20 || !_bittest64(&v39, v49) )
                      break;
                    v41 = (_QWORD *)((char *)v41 + 1);
                    if ( *(_QWORD **)&v107[16] == v41 )
                    {
                      if ( *(_QWORD *)v107 )
                        sub_140001660(v110, *(_QWORD *)v107, 1);
                      goto LABEL_84;
                    }
                  }
                  v106 = *(_QWORD *)v107;
                  *(_QWORD *)v107 = v110;
                  *(_QWORD *)&v107[8] = *(_QWORD *)&v107[16];
                  *(_OWORD *)&v107[16] = 0;
                  vendor_json_parse_str_with_trailing_check(&v94, (__int128 *)v107);
                  if ( (_BYTE)v94 == 0xFF )
                  {
                    *(_QWORD *)v107 = *((_QWORD *)&v94 + 1);
                    LOBYTE(v50) = 21;
                    v12 = sub_1416A8370(v50, aJson_5, 53);
                    sub_140032F30(v107);
                    goto LABEL_150;
                  }
                  *(_OWORD *)v109 = v94;
                  *(_OWORD *)&v109[16] = *(_OWORD *)v95;
                  if ( *((_DWORD *)v114 + 48) != 2 )
                  {
                    v116 = 1;
                    v51 = sub_1416724D0(aOrdinal, 7, v109);
                    if ( !v51 || *(_BYTE *)v51 != 2 || *(_QWORD *)(v51 + 8) )
                    {
                      v116 = 1;
                      LOBYTE(v52) = 21;
                      v65 = sub_1416A8370(v52, asc_141A45938, 54);
LABEL_149:
                      v12 = v65;
                      sub_140032FF0(v109);
                      goto LABEL_150;
                    }
                    v53 = (unsigned int)v43;
                    v3 = *(_BYTE **)(v51 + 16);
                    v43 = (_BYTE *)v114[29];
                    if ( v3 >= v43 )
                    {
                      if ( (_DWORD)v46 != 1 )
                      {
                        sub_140032FF0(v109);
                        LOBYTE(v43) = v3 == v43;
                        v48 = v106;
                        break;
                      }
                      v116 = 1;
                      LOBYTE(v53) = 21;
                      v65 = sub_1416A8370(v53, asc_141A4590E, 42);
                      goto LABEL_149;
                    }
                    v54 = v3 <= v82;
                    v82 = v3;
                    v55 = (v54 & (unsigned __int8)v81) == 0;
                    v81 = 1;
                    LODWORD(v43) = v53;
                    if ( !v55 )
                    {
                      v116 = 1;
                      LOBYTE(v53) = 21;
                      v65 = sub_1416A8370(v53, asc_141A458D8, 54);
                      goto LABEL_149;
                    }
                  }
                  v116 = 1;
                  v56 = sub_1416724D0(aType_7, 4, v109);
                  if ( v56
                    && *(_BYTE *)v56 == 3
                    && *(_QWORD *)(v56 + 24) == 12
                    && !(**(_QWORD **)(v56 + 16) ^ 0x5F6E6F6973736573LL
                       | *(unsigned int *)(*(_QWORD *)(v56 + 16) + 8LL) ^ 0x6174656DLL) )
                  {
                    sub_140032FF0(v109);
                  }
                  else
                  {
                    *(_OWORD *)&v107[16] = *(_OWORD *)&v109[16];
                    *(_OWORD *)v107 = *(_OWORD *)v109;
                    *(_QWORD *)&v94 = &v96;
                    v57 = sub_140786230(v109, &v94);
                    if ( v57 )
                      v58 = sub_14166EA20(v57);
                    else
                      v58 = sub_140CB15E0(&v96, &unk_141A454D0, 3);
                    v12 = v58;
                    v116 = 0;
                    sub_140032FF0(v107);
                    if ( v12 )
                      goto LABEL_150;
                  }
                  if ( v106 )
                    sub_140001660(v110, v106, 1);
                }
                v41 = (_QWORD *)v110;
                if ( v48 )
                  sub_140001660(v110, v48, 1);
                v59 = v114[24];
                if ( v59 != 2 )
                {
                  if ( !(_BYTE)v43 )
                    goto LABEL_124;
                  goto LABEL_127;
                }
LABEL_129:
                sub_1416C49D0(v107, v114[31], v114[32]);
                if ( *(_DWORD *)v107 == 2 )
                {
                  v12 = *(_QWORD *)&v107[8];
                  v63 = *(void (__fastcall **)(__int64))v113;
                  if ( !*(_QWORD *)v113 )
                    goto LABEL_154;
                  goto LABEL_153;
                }
                v60 = v114;
                if ( v108 != v114[7] || *(_QWORD *)&v107[48] != v114[6] )
                {
                  LOBYTE(v60) = 21;
                  v64 = sub_1416A8370(v60, asc_141A48FC2, 60);
                  goto LABEL_140;
                }
                if ( *(_QWORD *)v113 )
                  (*(void (__fastcall **)(__int64))v113)(v111);
                v61 = *(_QWORD *)(v113 + 8);
                v62 = v80;
                v114 = v80;
                if ( v61 )
                {
                  sub_140001660(v111, v61, *(_QWORD *)(v113 + 16));
                  v114 = v62;
                }
              }
              v12 = sub_140CA1990(&v96);
              sub_140CAE840(&v96);
            }
            if ( v96 )
              sub_140001660(v97, v96, 1);
            if ( !v12 )
            {
              v117 = 1;
              v12 = sub_1416B21F0(&hObject);
              if ( !v12 )
              {
                CloseHandle(hObject);
                v117 = 0;
                v12 = sub_140833D60(v112, v13, &v70);
                if ( !v12 )
                {
                  v117 = 0;
                  v67 = sub_1407C9440(v112, v13, a1, v103);
                  v12 = v68;
                  if ( v67 != 1 )
                  {
                    *(_DWORD *)&v91[15] = 2;
                    sub_140779250(&v89);
                    v17 = 0;
                    goto LABEL_17;
                  }
                  v117 = 0;
                  v12 = sub_1407B7750(a1, v103, v68);
                }
LABEL_162:
                sub_14083E200(&v89);
                v17 = 1;
                if ( (_QWORD)v89 )
                  sub_140001660(*((_QWORD *)&v89 + 1), v89, 1);
                goto LABEL_17;
              }
            }
          }
          CloseHandle(hObject);
          goto LABEL_162;
        }
      }
    }
    else if ( !v22 )
    {
      goto LABEL_40;
    }
LABEL_16:
    LOBYTE(v16) = 20;
    v12 = sub_1416A8370(v16, aStagingMustBeA, 34);
    v17 = 1;
LABEL_17:
    if ( v76 )
      sub_140001660(v77, v76, 1);
    if ( v75[0] )
      sub_140001660(v75[1], v75[0], 1);
    if ( !v17 )
    {
      sub_1407B9160(v12);
      return 0;
    }
  }
  return v12;
}
