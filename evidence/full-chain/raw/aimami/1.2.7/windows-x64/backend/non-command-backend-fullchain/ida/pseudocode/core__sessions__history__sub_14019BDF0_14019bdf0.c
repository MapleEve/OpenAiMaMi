// win 1.2.7 | module src/core/sessions/history.rs | ea 0x14019bdf0 | name sub_14019BDF0
// win 1.2.7 | module src/core/sessions/history.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14019BDF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // r14d
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  _BYTE *v12; // r15
  __int128 v13; // rcx
  __int64 v14; // rcx
  char v15; // si
  __int64 v16; // rdx
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // r15
  __int64 v24; // r12
  __int128 v25; // rcx
  char v26; // al
  void *v27; // rdx
  char v28; // si
  _BYTE *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r12
  _DWORD *v32; // rax
  char v33; // si
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r12
  _QWORD *v38; // rcx
  _QWORD *v39; // rcx
  __int64 v40; // rax
  _BYTE *v41; // rbx
  __int64 v42; // rax
  _BYTE *v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rcx
  __int64 v46; // r9
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  bool v52; // al
  bool v53; // zf
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rsi
  void (__fastcall *v61)(__int64); // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  _BOOL8 v65; // rax
  __int64 v66; // rdx
  _OWORD v67[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v68; // [rsp+50h] [rbp-30h] BYREF
  __int64 v69; // [rsp+60h] [rbp-20h]
  __int64 v70; // [rsp+68h] [rbp-18h] BYREF
  __int64 v71; // [rsp+70h] [rbp-10h]
  __int64 v72; // [rsp+78h] [rbp-8h]
  _QWORD v73[3]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v74; // [rsp+98h] [rbp+18h] BYREF
  __int64 v75; // [rsp+A0h] [rbp+20h]
  __int64 v76; // [rsp+A8h] [rbp+28h]
  _QWORD v77[4]; // [rsp+B8h] [rbp+38h] BYREF
  _QWORD *v78; // [rsp+D8h] [rbp+58h]
  __int64 v79; // [rsp+E0h] [rbp+60h]
  _BYTE *v80; // [rsp+E8h] [rbp+68h]
  __int128 v81; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v82[23]; // [rsp+100h] [rbp+80h]
  __int64 v83; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE *v84; // [rsp+128h] [rbp+A8h]
  _BYTE v85[17]; // [rsp+130h] [rbp+B0h]
  _BYTE v86[23]; // [rsp+141h] [rbp+C1h]
  __int16 v87; // [rsp+158h] [rbp+D8h]
  char v88; // [rsp+15Ah] [rbp+DAh]
  __int128 v89; // [rsp+160h] [rbp+E0h] BYREF
  char v90; // [rsp+170h] [rbp+F0h]
  _BYTE v91[39]; // [rsp+171h] [rbp+F1h]
  __int16 v92; // [rsp+198h] [rbp+118h]
  char v93; // [rsp+19Ah] [rbp+11Ah]
  __int64 v94; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE *v95; // [rsp+1A8h] [rbp+128h]
  unsigned __int8 v96; // [rsp+1B0h] [rbp+130h]
  __int128 v97; // [rsp+1B1h] [rbp+131h]
  _BYTE v98[23]; // [rsp+1C1h] [rbp+141h]
  __int16 v99; // [rsp+1D8h] [rbp+158h]
  char v100; // [rsp+1DAh] [rbp+15Ah]
  __int64 v101; // [rsp+1E0h] [rbp+160h]
  HANDLE hObject; // [rsp+1E8h] [rbp+168h] BYREF
  _QWORD *v103; // [rsp+1F0h] [rbp+170h]
  __int64 v104; // [rsp+1F8h] [rbp+178h]
  _BYTE v105[56]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v106; // [rsp+238h] [rbp+1B8h]
  _BYTE v107[39]; // [rsp+260h] [rbp+1E0h] BYREF
  unsigned __int64 v108; // [rsp+288h] [rbp+208h]
  __int64 v109; // [rsp+290h] [rbp+210h]
  __int64 v110; // [rsp+298h] [rbp+218h]
  unsigned __int64 v111; // [rsp+2A0h] [rbp+220h]
  _QWORD *v112; // [rsp+2A8h] [rbp+228h]
  char v113; // [rsp+2B5h] [rbp+235h]
  char v114; // [rsp+2B6h] [rbp+236h]
  char v115; // [rsp+2B7h] [rbp+237h]
  __int64 v116; // [rsp+2B8h] [rbp+238h]

  v116 = -2;
  v112 = *(_QWORD **)(a3 + 8);
  v4 = *(_QWORD *)(a3 + 16);
  v101 = a2;
  v5 = sub_141682A00(a1, a2);
  if ( !v5 )
  {
    LOBYTE(v7) = 20;
    return sub_1416793A0(v7, aAtomicWriteMis, 28);
  }
  v8 = v5;
  v9 = v6;
  v105[0] = 1;
  v10 = sub_14168A790(v105, v5, v6);
  if ( !v10 )
  {
    sub_140222C00(v73, a1, v101);
    LODWORD(v94) = GetCurrentProcessId();
    sub_141568C20(v105);
    v89 = *(_OWORD *)v105;
    *(_QWORD *)v105 = v73;
    *(_QWORD *)&v105[8] = sub_1400015F0;
    *(_QWORD *)&v105[16] = &v94;
    *(_QWORD *)&v105[24] = sub_1416BBD00;
    *(_QWORD *)&v105[32] = &v89;
    *(_QWORD *)&v105[40] = sub_14028A180;
    sub_1416ABFD0(&v70, &unk_1419D537B, v105);
    v110 = v71;
    sub_1416828D0((unsigned int)&v74, v8, v9, v71, v72);
    if ( v70 )
      sub_140001660(v110, v70, 1);
    v110 = v75;
    v11 = v76;
    sub_141681AF0(&v83, a1, v101);
    sub_141681AF0(&v94, v110, v11);
    v12 = v84;
    *((_QWORD *)&v13 + 1) = v95;
    if ( v84 == v95
      && (_BYTE)v87 == (_BYTE)v99
      && HIBYTE(v87) == 2
      && HIBYTE(v99) == 2
      && v85[0] < 3u == v96 < 3u
      && !(unsigned int)sub_1418F4B70(v83, v94) )
    {
      goto LABEL_16;
    }
    if ( v85[0] != 0xFF )
    {
      *(_QWORD *)&v107[31] = *(_QWORD *)&v86[15];
      *(_OWORD *)&v107[16] = *(_OWORD *)v86;
      *(_OWORD *)v107 = *(_OWORD *)&v85[1];
    }
    *(_QWORD *)&v89 = v83;
    *((_QWORD *)&v89 + 1) = v12;
    v90 = v85[0];
    *(_OWORD *)v91 = *(_OWORD *)v107;
    *(_OWORD *)&v91[16] = *(_OWORD *)&v107[16];
    *(_QWORD *)&v91[31] = *(_QWORD *)&v107[31];
    v92 = v87;
    v93 = v88;
    *(_QWORD *)&v13 = v94;
    if ( v96 != 0xFF )
    {
      *(_QWORD *)&v82[15] = *(_QWORD *)&v98[15];
      *(_OWORD *)v82 = *(_OWORD *)v98;
      v81 = v97;
    }
    *(_OWORD *)v105 = v13;
    v105[16] = v96;
    *(_OWORD *)&v105[17] = v81;
    *(_OWORD *)&v105[33] = *(_OWORD *)v82;
    *(_QWORD *)&v105[48] = *(_QWORD *)&v82[15];
    LOWORD(v106) = v99;
    BYTE2(v106) = v100;
    if ( (unsigned __int8)sub_140D2A460(&v89, v105) )
      goto LABEL_16;
    v18 = sub_141682A00(a1, v101);
    v20 = v19;
    v21 = sub_141682A00(v110, v11);
    v23 = (_BYTE *)v21;
    if ( v18 )
    {
      if ( v21 )
      {
        v24 = v22;
        sub_141681AF0(&v83, v18, v20);
        sub_141681AF0(&v94, v23, v24);
        v23 = v84;
        *((_QWORD *)&v25 + 1) = v95;
        if ( v84 == v95
          && (_BYTE)v87 == (_BYTE)v99
          && HIBYTE(v87) == 2
          && HIBYTE(v99) == 2
          && v85[0] < 3u == v96 < 3u
          && !(unsigned int)sub_1418F4B70(v83, v94) )
        {
          goto LABEL_40;
        }
        if ( v85[0] != 0xFF )
        {
          *(_QWORD *)&v107[31] = *(_QWORD *)&v86[15];
          *(_OWORD *)&v107[16] = *(_OWORD *)v86;
          *(_OWORD *)v107 = *(_OWORD *)&v85[1];
        }
        *(_QWORD *)&v89 = v83;
        *((_QWORD *)&v89 + 1) = v23;
        v90 = v85[0];
        *(_OWORD *)v91 = *(_OWORD *)v107;
        *(_OWORD *)&v91[16] = *(_OWORD *)&v107[16];
        *(_QWORD *)&v91[31] = *(_QWORD *)&v107[31];
        v92 = v87;
        v93 = v88;
        *(_QWORD *)&v25 = v94;
        if ( v96 != 0xFF )
        {
          *(_QWORD *)&v82[15] = *(_QWORD *)&v98[15];
          *(_OWORD *)v82 = *(_OWORD *)v98;
          v81 = v97;
        }
        *(_OWORD *)v105 = v25;
        v105[16] = v96;
        *(_OWORD *)&v105[17] = v81;
        *(_OWORD *)&v105[33] = *(_OWORD *)v82;
        *(_QWORD *)&v105[48] = *(_QWORD *)&v82[15];
        LOWORD(v106) = v99;
        BYTE2(v106) = v100;
        if ( (unsigned __int8)sub_140D2A460(&v89, v105) )
        {
LABEL_40:
          sub_141681D30(&v89, v110, v11);
          *(_DWORD *)&v91[15] = 2;
          LODWORD(v83) = 0;
          v84 = nullptr;
          *(_DWORD *)v85 = 7;
          *(_QWORD *)&v85[4] = 0;
          *(_QWORD *)&v85[9] = 0x100000001LL;
          v26 = sub_141690E40(&v83);
          v10 = (unsigned __int64)v27;
          if ( (v26 & 1) != 0 )
            goto LABEL_162;
          hObject = v27;
          v115 = 1;
          sub_1401C4CF0(v105, &hObject, 0);
          if ( *(_DWORD *)v105 == 2 )
          {
            v10 = *(_QWORD *)&v105[8];
          }
          else
          {
            v68 = *(_OWORD *)v105;
            v69 = *(_QWORD *)&v105[16];
            *(_QWORD *)&v91[15] = *(_QWORD *)v105;
            *(_OWORD *)&v91[23] = *(_OWORD *)&v105[8];
            v115 = 1;
            sub_140C17DF0(&v94, 0x2000, &hObject);
            if ( !v4 )
              sub_141938FE0(aHistoryAlwaysH, 25, &off_1419DB518);
            v103 = &v112[34 * v4];
            v28 = *((_BYTE *)v103 - 112);
            switch ( v28 )
            {
              case 0:
                break;
              case 1:
                v107[1] = *((_BYTE *)v103 - 111);
                break;
              case 2:
                *(_OWORD *)&v107[8] = *(_OWORD *)(v103 - 13);
                break;
              case 3:
                sub_1416AC440(&v107[8], v103 - 13);
                break;
              case 4:
                sub_1403918C0(&v107[8], *(v103 - 12), *(v103 - 11));
                break;
              case 5:
                sub_140E8D7E0(&v107[8], v103 - 13);
                break;
            }
            v107[0] = v28;
            v29 = (_BYTE *)sub_1416419F0(aPayload_0, 7, v107);
            if ( v29 )
            {
              if ( *v29 == 5 )
              {
                sub_140DED130(v105, v29 + 8, aHistoryBase, 12);
                if ( v105[0] != 0xFF )
                  sub_14002F9D0(v105);
              }
            }
            if ( v107[0] == 5 )
            {
              v23 = &v107[8];
              sub_140DED130(v105, &v107[8], aOrdinal, 7);
              if ( v105[0] != 0xFF )
                sub_14002F9D0(v105);
              v31 = sub_1416419F0(aOrdinal, 7, v112 + 20);
              if ( v31 )
              {
                nullsub_1(v30);
                v32 = (_DWORD *)sub_140001650(7, 1);
                if ( !v32 )
                  sub_141938D2B(1, 7);
                *(_DWORD *)((char *)v32 + 3) = 1818324585;
                *v32 = 1768190575;
                v77[0] = 7;
                v77[1] = v32;
                v77[2] = 7;
                v33 = *(_BYTE *)v31;
                switch ( *(_BYTE *)v31 )
                {
                  case 0:
                    break;
                  case 1:
                    v105[1] = *(_BYTE *)(v31 + 1);
                    break;
                  case 2:
                    *(_OWORD *)&v105[8] = *(_OWORD *)(v31 + 8);
                    break;
                  case 3:
                    v113 = 1;
                    sub_1416AC440(&v105[8], v31 + 8);
                    break;
                  case 4:
                    v34 = *(_QWORD *)(v31 + 16);
                    v35 = *(_QWORD *)(v31 + 24);
                    v113 = 1;
                    sub_1403918C0(&v105[8], v34, v35);
                    break;
                  case 5:
                    v113 = 1;
                    sub_140E8D7E0(&v105[8], v31 + 8);
                    break;
                }
                v105[0] = v33;
                v113 = 0;
                sub_140E72AA0(&v81, &v107[8], v77, v105);
                if ( (_BYTE)v81 != 0xFF )
                  sub_14002F9D0(&v81);
              }
            }
            v67[1] = *(_OWORD *)&v107[16];
            v67[0] = *(_OWORD *)v107;
            v36 = sub_1401979E0(&v94, v67);
            if ( v36 )
            {
              v10 = sub_14163EE90(v36);
              sub_14002F9D0(v67);
              goto LABEL_156;
            }
            sub_14002F9D0(v67);
            v10 = sub_140C9F5E0(&v94, asc_1419D6548, 3);
            if ( v10 )
            {
LABEL_156:
              sub_140C9C560(&v94);
            }
            else
            {
              v37 = 0x100003600LL;
              while ( v112 != v103 )
              {
                v77[3] = v112 + 30;
                sub_140BAE350(v105);
                if ( *(_DWORD *)v105 == 2 )
                {
                  v10 = *(_QWORD *)&v105[8];
                  goto LABEL_156;
                }
                v38 = v112;
                if ( v106 != v112[7] || *(_QWORD *)&v105[48] != v112[6] )
                {
                  LOBYTE(v38) = 21;
                  v10 = sub_1416793A0(v38, asc_1419D964C, 60);
                  goto LABEL_156;
                }
                sub_140275D00(v105, v112[31], v112[32]);
                v39 = *(_QWORD **)&v105[8];
                v111 = *(_QWORD *)&v105[8];
                v109 = *(_QWORD *)v105;
                if ( !*(_QWORD *)v105 )
                {
                  v10 = v111;
                  goto LABEL_156;
                }
                v40 = v112[24];
                LODWORD(v41) = 0;
                if ( v40 != 2 && (_DWORD)v40 == 1 && !v112[25] )
                {
                  v42 = sub_1416419F0(aOrdinal, 7, v112 + 20);
                  if ( v42 && *(_BYTE *)v42 == 2 && !*(_QWORD *)(v42 + 8) )
                  {
                    v39 = v112;
                    LOBYTE(v41) = *(_QWORD *)(v42 + 16) == v112[29];
                  }
                  else
                  {
                    LODWORD(v41) = 0;
                  }
                }
                v78 = v112 + 34;
                v79 = 0;
                v43 = nullptr;
                while ( 1 )
                {
LABEL_84:
                  v44 = v112[24];
                  if ( v44 == 2 )
                  {
                    LODWORD(v44) = 0;
                  }
                  else
                  {
                    v23 = (_BYTE *)v112[25];
                    if ( v44 == 1 && v23 == v43 )
                    {
                      LODWORD(v57) = 1;
                      if ( (_BYTE)v41 )
                        goto LABEL_129;
LABEL_124:
                      if ( v79 == 1 && v80 != (_BYTE *)-1LL )
                      {
                        v39 = v112;
                        if ( v80 + 1 == (_BYTE *)v112[29] )
                        {
LABEL_127:
                          if ( (_DWORD)v57 != 1 || (_BYTE *)v112[25] == v43 )
                            goto LABEL_129;
                        }
                      }
                      LOBYTE(v39) = 21;
                      v62 = sub_1416793A0(v39, asc_1419D43CA, 51);
LABEL_140:
                      v10 = v62;
                      v61 = *(void (__fastcall **)(__int64))v111;
                      if ( !*(_QWORD *)v111 )
                      {
LABEL_154:
                        v64 = *(_QWORD *)(v111 + 8);
                        if ( v64 )
                          sub_140001660(v109, v64, *(_QWORD *)(v111 + 16));
                        goto LABEL_156;
                      }
LABEL_153:
                      v61(v109);
                      goto LABEL_154;
                    }
                  }
                  sub_140276120(v105, v109, v111, 0x4000000);
                  v108 = *(_QWORD *)&v105[8];
                  v46 = *(_QWORD *)v105;
                  if ( *(_QWORD *)v105 == -1 )
                  {
                    v10 = v108;
                    v61 = *(void (__fastcall **)(__int64))v111;
                    if ( !*(_QWORD *)v111 )
                      goto LABEL_154;
                    goto LABEL_153;
                  }
                  if ( !*(_QWORD *)&v105[16] )
                    break;
                  v43 += *(_QWORD *)&v105[16];
                  if ( ((v43 > v23) & (unsigned __int8)v44) != 0 )
                  {
                    v104 = *(_QWORD *)v105;
                    LOBYTE(v45) = 21;
                    v10 = sub_1416793A0(v45, asc_1419D439D, 45);
LABEL_150:
                    if ( v104 )
                      sub_140001660(v108, v104, 1);
                    v61 = *(void (__fastcall **)(__int64))v111;
                    if ( !*(_QWORD *)v111 )
                      goto LABEL_154;
                    goto LABEL_153;
                  }
                  v39 = nullptr;
                  while ( 1 )
                  {
                    v47 = *((unsigned __int8 *)v39 + v108);
                    if ( v47 > 0x20 || !_bittest64(&v37, v47) )
                      break;
                    v39 = (_QWORD *)((char *)v39 + 1);
                    if ( *(_QWORD **)&v105[16] == v39 )
                    {
                      if ( *(_QWORD *)v105 )
                        sub_140001660(v108, *(_QWORD *)v105, 1);
                      goto LABEL_84;
                    }
                  }
                  v104 = *(_QWORD *)v105;
                  *(_QWORD *)v105 = v108;
                  *(_QWORD *)&v105[8] = *(_QWORD *)&v105[16];
                  *(_OWORD *)&v105[16] = 0;
                  sub_14062F970(&v81, v105);
                  if ( (_BYTE)v81 == 0xFF )
                  {
                    *(_QWORD *)v105 = *((_QWORD *)&v81 + 1);
                    LOBYTE(v48) = 21;
                    v10 = sub_1416793A0(v48, aJson_4, 53);
                    sub_14002F910(v105);
                    goto LABEL_150;
                  }
                  *(_OWORD *)v107 = v81;
                  *(_OWORD *)&v107[16] = *(_OWORD *)v82;
                  if ( *((_DWORD *)v112 + 48) != 2 )
                  {
                    v114 = 1;
                    v49 = sub_1416419F0(aOrdinal, 7, v107);
                    if ( !v49 || *(_BYTE *)v49 != 2 || *(_QWORD *)(v49 + 8) )
                    {
                      v114 = 1;
                      LOBYTE(v50) = 21;
                      v63 = sub_1416793A0(v50, asc_1419D4357, 54);
LABEL_149:
                      v10 = v63;
                      sub_14002F9D0(v107);
                      goto LABEL_150;
                    }
                    v51 = (unsigned int)v41;
                    v23 = *(_BYTE **)(v49 + 16);
                    v41 = (_BYTE *)v112[29];
                    if ( v23 >= v41 )
                    {
                      if ( (_DWORD)v44 != 1 )
                      {
                        sub_14002F9D0(v107);
                        LOBYTE(v41) = v23 == v41;
                        v46 = v104;
                        break;
                      }
                      v114 = 1;
                      LOBYTE(v51) = 21;
                      v63 = sub_1416793A0(v51, asc_1419D432D, 42);
                      goto LABEL_149;
                    }
                    v52 = v23 <= v80;
                    v80 = v23;
                    v53 = (v52 & (unsigned __int8)v79) == 0;
                    v79 = 1;
                    LODWORD(v41) = v51;
                    if ( !v53 )
                    {
                      v114 = 1;
                      LOBYTE(v51) = 21;
                      v63 = sub_1416793A0(v51, asc_1419D42F7, 54);
                      goto LABEL_149;
                    }
                  }
                  v114 = 1;
                  v54 = sub_1416419F0(aType_3, 4, v107);
                  if ( v54
                    && *(_BYTE *)v54 == 3
                    && *(_QWORD *)(v54 + 24) == 12
                    && !(**(_QWORD **)(v54 + 16) ^ 0x5F6E6F6973736573LL
                       | *(unsigned int *)(*(_QWORD *)(v54 + 16) + 8LL) ^ 0x6174656DLL) )
                  {
                    sub_14002F9D0(v107);
                  }
                  else
                  {
                    *(_OWORD *)&v105[16] = *(_OWORD *)&v107[16];
                    *(_OWORD *)v105 = *(_OWORD *)v107;
                    v55 = sub_1401979E0(&v94, v105);
                    if ( v55 )
                      v56 = sub_14163EE90(v55);
                    else
                      v56 = sub_140C9F5E0(&v94, asc_1419D6548, 3);
                    v10 = v56;
                    v114 = 0;
                    sub_14002F9D0(v105);
                    if ( v10 )
                      goto LABEL_150;
                  }
                  if ( v104 )
                    sub_140001660(v108, v104, 1);
                }
                v39 = (_QWORD *)v108;
                if ( v46 )
                  sub_140001660(v108, v46, 1);
                v57 = v112[24];
                if ( v57 != 2 )
                {
                  if ( !(_BYTE)v41 )
                    goto LABEL_124;
                  goto LABEL_127;
                }
LABEL_129:
                sub_140BAE350(v105);
                if ( *(_DWORD *)v105 == 2 )
                {
                  v10 = *(_QWORD *)&v105[8];
                  v61 = *(void (__fastcall **)(__int64))v111;
                  if ( !*(_QWORD *)v111 )
                    goto LABEL_154;
                  goto LABEL_153;
                }
                v58 = v112;
                if ( v106 != v112[7] || *(_QWORD *)&v105[48] != v112[6] )
                {
                  LOBYTE(v58) = 21;
                  v62 = sub_1416793A0(v58, asc_1419D964C, 60);
                  goto LABEL_140;
                }
                if ( *(_QWORD *)v111 )
                  (*(void (__fastcall **)(__int64))v111)(v109);
                v59 = *(_QWORD *)(v111 + 8);
                v60 = v78;
                v112 = v78;
                if ( v59 )
                {
                  sub_140001660(v109, v59, *(_QWORD *)(v111 + 16));
                  v112 = v60;
                }
              }
              v10 = sub_140C20F40(&v94);
              sub_140C9C560(&v94);
            }
            if ( v94 )
              sub_140001660(v95, v94, 1);
            if ( !v10 )
            {
              v115 = 1;
              v10 = sub_141683220(&hObject);
              if ( !v10 )
              {
                CloseHandle(hObject);
                v115 = 0;
                v10 = sub_1402814E0(v110, v11, &v68);
                if ( !v10 )
                {
                  v115 = 0;
                  v65 = sub_1402239D0(v110, v11, a1, v101);
                  v10 = v66;
                  if ( !v65 )
                  {
                    *(_DWORD *)&v91[15] = 2;
                    sub_1401959A0(&v89);
                    v15 = 0;
                    goto LABEL_17;
                  }
                  v115 = 0;
                  v10 = sub_1401AED70(a1, v101, v66);
                }
LABEL_162:
                sub_140283FB0((__int64)&v89);
                v15 = 1;
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
    else if ( !v21 )
    {
      goto LABEL_40;
    }
LABEL_16:
    LOBYTE(v14) = 20;
    v10 = sub_1416793A0(v14, aStagingMustBeA, 34);
    v15 = 1;
LABEL_17:
    if ( v74 )
      sub_140001660(v75, v74, 1);
    v16 = v73[0];
    if ( v73[0] )
      sub_140001660(v73[1], v73[0], 1);
    if ( !v15 )
    {
      sub_1401BD710(v10, v16);
      return 0;
    }
  }
  return v10;
}
