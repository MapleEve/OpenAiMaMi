// win 1.2.7 | module src/core/relay/router_unlock_auth.rs | ea 0x140f5f660 | name sub_140F5F660
// win 1.2.7 | module src/core/relay/router_unlock_auth.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F5F660(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(unsigned __int64); // rax
  char v17; // al
  char v18; // cl
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edi
  int v22; // r15d
  __int64 result; // rax
  __int64 v24; // rax
  bool v25; // bl
  __int64 v26; // rax
  __int64 v27; // rcx
  __int128 v28; // kr10_16
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // r14
  __int128 v33; // kr30_16
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  int v37; // r14d
  int v38; // r15d
  bool v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int128 v45; // kr50_16
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // r14
  __int128 v58; // kr70_16
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm2
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  __int64 v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 v70; // rdx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int64 v74; // rbx
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // [rsp+30h] [rbp-50h] BYREF
  __int64 v81; // [rsp+38h] [rbp-48h]
  __int64 v82; // [rsp+40h] [rbp-40h]
  __int128 v83; // [rsp+50h] [rbp-30h] BYREF
  __int128 v84; // [rsp+60h] [rbp-20h]
  __int128 v85; // [rsp+70h] [rbp-10h]
  __int128 v86; // [rsp+80h] [rbp+0h]
  __int128 v87; // [rsp+90h] [rbp+10h]
  unsigned __int64 v88; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v89[3]; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v90[24]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v91; // [rsp+D8h] [rbp+58h]
  __int128 v92; // [rsp+E8h] [rbp+68h]
  __int128 v93; // [rsp+F8h] [rbp+78h]
  __int128 v94; // [rsp+108h] [rbp+88h]
  __int64 *v95; // [rsp+118h] [rbp+98h] BYREF
  __int64 (__fastcall *v96)(_QWORD, _QWORD); // [rsp+120h] [rbp+A0h]
  __int64 v97; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v98; // [rsp+130h] [rbp+B0h]
  __int64 v99; // [rsp+138h] [rbp+B8h]
  __int64 v100; // [rsp+148h] [rbp+C8h]
  unsigned __int64 v101; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v102; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v103; // [rsp+168h] [rbp+E8h]
  __int128 v104; // [rsp+178h] [rbp+F8h]
  __int128 v105; // [rsp+188h] [rbp+108h]
  __int128 v106; // [rsp+198h] [rbp+118h]
  __int128 v107; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v108; // [rsp+1B8h] [rbp+138h]
  __int64 v109; // [rsp+1C0h] [rbp+140h]
  char v110; // [rsp+1CEh] [rbp+14Eh] BYREF
  char v111; // [rsp+1CFh] [rbp+14Fh]
  __int64 v112; // [rsp+1D0h] [rbp+150h]

  v112 = -2;
  v4 = a2[97];
  v5 = a2[98];
  sub_1416828D0((unsigned int)&v80, v4, v5, (unsigned int)&unk_141A626B6, 30);
  sub_1416828D0((unsigned int)&v97, v4, v5, (unsigned int)&unk_141A62698, 30);
  sub_1416828D0((unsigned int)&v88, v4, v5, (unsigned int)&unk_141A626B6, 30);
  v109 = v89[0];
  sub_14169D1D0(v90, v89[0], v89[1]);
  v8 = *(_QWORD *)&v90[8];
  v108 = *(_QWORD *)&v90[8];
  if ( *(_QWORD *)v90 == -1 )
  {
    v15 = v90[8] & 3;
    switch ( v90[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(*(_QWORD *)&v90[8] + 16LL) )
          goto LABEL_28;
        goto LABEL_34;
      case 1:
        if ( !*(_BYTE *)(*(_QWORD *)&v90[8] + 31LL) )
          goto LABEL_34;
        goto LABEL_28;
      case 2:
        v111 = 1;
        v16 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v7, v6) + 8);
        v111 = 1;
        v17 = v16(HIDWORD(v108));
        v8 = v108;
        if ( !v17 )
          goto LABEL_34;
        goto LABEL_28;
      case 3:
        if ( v90[12] )
        {
LABEL_28:
          v101 = v8;
          v18 = v8;
          v19 = v8;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v95 = (__int64 *)&v101;
            v96 = sub_1416BB0B0;
            *(_QWORD *)&v105 = 2;
            *((_QWORD *)&v105 + 1) = aCodexmateLibCo_44;
            *(_QWORD *)&v106 = 46;
            *(_QWORD *)&v107 = &unk_141A6275C;
            *((_QWORD *)&v107 + 1) = &v95;
            *(_QWORD *)&v102 = 0;
            *((_QWORD *)&v102 + 1) = aCodexmateLibCo_44;
            v103 = 0x2Eu;
            *(_QWORD *)&v104 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v104 + 1) = 36;
            *((_QWORD *)&v106 + 1) = 0x26800000001LL;
            sub_1414D53A0(&v110, &v102);
            v18 = v101;
            v19 = v101;
          }
          v20 = v18 & 3;
          if ( (unsigned int)(v20 - 2) >= 2 && v20 )
          {
            *((_QWORD *)&v102 + 1) = v19 - 1;
            LOBYTE(v102) = 3;
            v111 = 0;
            sub_1416BCB00((char *)&v102 + 8);
          }
        }
        else
        {
LABEL_34:
          if ( (unsigned int)(v15 - 2) >= 2 && v15 )
          {
            *((_QWORD *)&v102 + 1) = v108 - 1;
            LOBYTE(v102) = 3;
            v111 = 0;
            sub_1416BCB00((char *)&v102 + 8);
          }
        }
        if ( v88 )
          sub_140001660(v109, v88, 1);
        break;
    }
    goto LABEL_39;
  }
  v100 = *(_QWORD *)v90;
  v102 = *(_OWORD *)&v90[8];
  v103 = 0;
  v104 = *(_OWORD *)&v90[8];
  sub_14062E340(v90, &v102);
  v9 = *(_QWORD *)v90;
  if ( *(_QWORD *)v90 == -2 )
  {
    v101 = *(_QWORD *)&v90[8];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v95 = (__int64 *)&v101;
      v96 = sub_14163CE40;
      *(_QWORD *)&v105 = 2;
      *((_QWORD *)&v105 + 1) = aCodexmateLibCo_44;
      *(_QWORD *)&v106 = 46;
      *(_QWORD *)&v107 = &unk_141A626D4;
      *((_QWORD *)&v107 + 1) = &v95;
      *(_QWORD *)&v102 = 0;
      *((_QWORD *)&v102 + 1) = aCodexmateLibCo_44;
      v103 = 0x2Eu;
      *(_QWORD *)&v104 = aSrcCoreRelayRo_1;
      *((_QWORD *)&v104 + 1) = 36;
      *((_QWORD *)&v106 + 1) = 0x26F00000001LL;
      sub_1414D53A0(&v110, &v102);
    }
    sub_14002F910(&v101);
    v10 = v100;
    if ( v100 )
      goto LABEL_6;
  }
  else
  {
    v87 = v94;
    v86 = v93;
    v85 = v92;
    v84 = v91;
    v83 = *(_OWORD *)&v90[8];
    v10 = v100;
    if ( v100 )
LABEL_6:
      sub_140001660(v108, v10, 1);
  }
  if ( v88 )
    sub_140001660(v109, v88, 1);
  if ( v9 == -2 )
  {
LABEL_39:
    switch ( (unsigned __int8)sub_140F5F300(a2) )
    {
      case 0u:
        v21 = v98;
        v22 = v99;
        sub_141695A00(&v102, v98, v99);
        if ( (_DWORD)v102 == 2 )
        {
          if ( (BYTE8(v102) & 3u) - 2 >= 2 && (BYTE8(v102) & 3) != 0 )
          {
            --*((_QWORD *)&v102 + 1);
            LOBYTE(v102) = 3;
            sub_1416BCB00((char *)&v102 + 8);
          }
          goto LABEL_52;
        }
        sub_140F60D60((unsigned int)&v102, v21, v22, (unsigned int)&unk_141A62862, 21);
        v32 = *((_QWORD *)&v102 + 1);
        result = v102;
        v33 = v103;
        if ( (_QWORD)v102 == -1 )
        {
          if ( *((_QWORD *)&v102 + 1) != -1 )
          {
            v109 = *((_QWORD *)&v102 + 1);
            v49 = a2[5];
            v50 = a2[6];
            v108 = v103;
            if ( (sub_140222E10(v49, v50, v103, *((_QWORD *)&v103 + 1)) & 1) != 0 )
            {
              result = sub_140EBC760(&v102);
              *(_OWORD *)(a1 + 80) = v107;
              *(_OWORD *)(a1 + 64) = v106;
              v52 = v102;
              v53 = v103;
              v54 = v104;
              *(_OWORD *)(a1 + 48) = v105;
              *(_OWORD *)(a1 + 32) = v54;
              *(_OWORD *)(a1 + 16) = v53;
              *(_OWORD *)a1 = v52;
              goto LABEL_91;
            }
            sub_1401BD710(v51, v51);
            v32 = v109;
            if ( v109 )
              sub_140001660(v108, v109, 1);
          }
          v25 = v32 != -1;
          goto LABEL_105;
        }
        v34 = v104;
        v35 = v105;
        v36 = v106;
        *(_OWORD *)(a1 + 80) = v107;
        *(_OWORD *)(a1 + 64) = v36;
        *(_OWORD *)(a1 + 48) = v35;
        *(_OWORD *)(a1 + 32) = v34;
        *(_OWORD *)(a1 + 16) = v33;
        *(_QWORD *)a1 = result;
        *(_QWORD *)(a1 + 8) = v32;
        goto LABEL_130;
      case 1u:
        v21 = v98;
        v22 = v99;
        sub_141695A00(&v102, v98, v99);
        if ( (_DWORD)v102 != 2 )
          goto LABEL_62;
        v24 = *((_QWORD *)&v102 + 1);
        if ( (BYTE8(v102) & 3u) - 2 < 2 || (BYTE8(v102) & 3) == 0 )
          goto LABEL_57;
        goto LABEL_56;
      case 2u:
        v21 = v98;
        v22 = v99;
        sub_141695A00(&v102, v98, v99);
        if ( (_DWORD)v102 == 2 )
        {
          v24 = *((_QWORD *)&v102 + 1);
          if ( (BYTE8(v102) & 3u) - 2 >= 2 && (BYTE8(v102) & 3) != 0 )
          {
LABEL_56:
            *((_QWORD *)&v102 + 1) = v24 - 1;
            LOBYTE(v102) = 3;
            sub_1416BCB00((char *)&v102 + 8);
          }
LABEL_57:
          v26 = sub_141695140(a2[5], a2[6]);
          if ( v26 )
          {
            v88 = v26;
            *(_QWORD *)v90 = &v88;
            *(_QWORD *)&v90[8] = sub_1416BB0B0;
            sub_1416ABFD0(&v102, &unk_141A58110, v90);
            *(_OWORD *)v90 = v102;
            *(_QWORD *)&v90[16] = v103;
            if ( (v88 & 3) - 2 >= 2 && (v88 & 3) != 0 )
            {
              *((_QWORD *)&v83 + 1) = v88 - 1;
              LOBYTE(v83) = 3;
              sub_1416BCB00((char *)&v83 + 8);
            }
            result = *(_QWORD *)&v90[16];
            *(_QWORD *)(a1 + 24) = *(_QWORD *)&v90[16];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v90;
            *(_QWORD *)a1 = 10;
LABEL_130:
            v78 = v97;
            if ( v97 )
            {
              v79 = v98;
LABEL_132:
              result = sub_140001660(v79, v78, 1);
            }
            goto LABEL_133;
          }
        }
        else
        {
LABEL_62:
          sub_140F60D60((unsigned int)&v102, v21, v22, (unsigned int)&unk_141A62877, 8);
          v27 = *((_QWORD *)&v102 + 1);
          result = v102;
          v28 = v103;
          if ( (_QWORD)v102 != -1 )
          {
            v29 = v104;
            v30 = v105;
            v31 = v106;
            *(_OWORD *)(a1 + 80) = v107;
            *(_OWORD *)(a1 + 64) = v31;
            *(_OWORD *)(a1 + 48) = v30;
            *(_OWORD *)(a1 + 32) = v29;
            *(_OWORD *)(a1 + 16) = v28;
            *(_QWORD *)a1 = result;
            *(_QWORD *)(a1 + 8) = v27;
            goto LABEL_130;
          }
          if ( *((_QWORD *)&v102 + 1) != -1 )
          {
            v109 = *((_QWORD *)&v102 + 1);
            v40 = a2[5];
            v41 = a2[6];
            v108 = v103;
            if ( (sub_140222E10(v40, v41, v103, *((_QWORD *)&v103 + 1)) & 1) != 0 )
            {
              v88 = v42;
              *(_QWORD *)v90 = &v88;
              *(_QWORD *)&v90[8] = sub_1416BB0B0;
              sub_1416ABFD0(&v102, &unk_141A57FEE, v90);
              *(_OWORD *)v90 = v102;
              *(_QWORD *)&v90[16] = v103;
              if ( (v88 & 3) - 2 >= 2 && (v88 & 3) != 0 )
              {
                *((_QWORD *)&v83 + 1) = v88 - 1;
                LOBYTE(v83) = 3;
                sub_1416BCB00((char *)&v83 + 8);
              }
              *(_QWORD *)a1 = 10;
              *(_OWORD *)(a1 + 8) = *(_OWORD *)v90;
              result = *(_QWORD *)&v90[16];
              *(_QWORD *)(a1 + 24) = *(_QWORD *)&v90[16];
LABEL_91:
              v55 = v109;
              if ( v109 )
              {
                v56 = v108;
LABEL_129:
                result = sub_140001660(v56, v55, 1);
              }
              goto LABEL_130;
            }
            sub_1401BD710(v42, v42);
            v25 = 1;
            if ( v109 )
              sub_140001660(v108, v109, 1);
            goto LABEL_105;
          }
          result = sub_140F62060((unsigned int)&v102, a2[5], a2[6], (unsigned int)&unk_141A6287F, 32);
          if ( (_DWORD)v102 != -1 )
            goto LABEL_107;
        }
        v25 = 1;
LABEL_105:
        result = sub_140F62060((unsigned int)&v102, v21, v22, (unsigned int)&unk_141A6289F, 34);
        if ( (_DWORD)v102 == -1 )
        {
          result = sub_140F62060((unsigned int)&v102, v81, v82, (unsigned int)&unk_141A628C1, 34);
          if ( (_DWORD)v102 == -1 )
          {
            *(_BYTE *)(a1 + 8) = v25;
LABEL_109:
            *(_QWORD *)a1 = -1;
            goto LABEL_130;
          }
        }
LABEL_107:
        *(_OWORD *)(a1 + 80) = v107;
        *(_OWORD *)(a1 + 64) = v106;
        v65 = v102;
        v66 = v103;
        v67 = v104;
        *(_OWORD *)(a1 + 48) = v105;
        *(_OWORD *)(a1 + 32) = v67;
        *(_OWORD *)(a1 + 16) = v66;
        *(_OWORD *)a1 = v65;
        goto LABEL_130;
      case 3u:
        v21 = v98;
        v22 = v99;
LABEL_52:
        v25 = 0;
        goto LABEL_105;
      case 4u:
        result = *(_QWORD *)off_1421E6EC0;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v105 = 2;
          *((_QWORD *)&v105 + 1) = aCodexmateLibCo_44;
          *(_QWORD *)&v106 = 46;
          *(_QWORD *)&v107 = &unk_141A628E3;
          *((_QWORD *)&v107 + 1) = 175;
          *(_QWORD *)&v102 = 0;
          *((_QWORD *)&v102 + 1) = aCodexmateLibCo_44;
          v103 = 0x2Eu;
          *(_QWORD *)&v104 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v104 + 1) = 36;
          *((_QWORD *)&v106 + 1) = 0xDA00000001LL;
          result = sub_1414D53A0(&v110, &v102);
        }
        *(_BYTE *)(a1 + 8) = 0;
        goto LABEL_109;
    }
  }
  *(_QWORD *)v90 = v9;
  *(_OWORD *)&v90[8] = v83;
  v91 = v84;
  v92 = v85;
  v93 = v86;
  v94 = v87;
  switch ( (unsigned __int8)sub_140F5F300(a2) )
  {
    case 0u:
      if ( !BYTE8(v94) )
        goto LABEL_74;
      v37 = v98;
      v38 = v99;
      sub_141695A00(&v102, v98, v99);
      if ( (_DWORD)v102 == 2 )
      {
        if ( (BYTE8(v102) & 3u) - 2 >= 2 && (BYTE8(v102) & 3) != 0 )
        {
          --*((_QWORD *)&v102 + 1);
          LOBYTE(v102) = 3;
          sub_1416BCB00((char *)&v102 + 8);
        }
        goto LABEL_74;
      }
      sub_140F60D60((unsigned int)&v102, v37, v38, (unsigned int)&unk_141A62790, 26);
      v57 = *((_QWORD *)&v102 + 1);
      result = v102;
      v58 = v103;
      if ( (_QWORD)v102 != -1 )
      {
        v59 = v104;
        v60 = v105;
        v61 = v106;
        *(_OWORD *)(a1 + 80) = v107;
        *(_OWORD *)(a1 + 64) = v61;
        *(_OWORD *)(a1 + 48) = v60;
        *(_OWORD *)(a1 + 32) = v59;
        *(_OWORD *)(a1 + 16) = v58;
        *(_QWORD *)a1 = result;
        *(_QWORD *)(a1 + 8) = v57;
        goto LABEL_120;
      }
      if ( *((_QWORD *)&v102 + 1) != -1 )
      {
        v109 = *((_QWORD *)&v102 + 1);
        v68 = a2[5];
        v69 = a2[6];
        v108 = v103;
        if ( (sub_140222E10(v68, v69, v103, *((_QWORD *)&v103 + 1)) & 1) != 0 )
        {
          result = sub_140EBC8C0(&v102);
          goto LABEL_113;
        }
        sub_1401BD710(v70, v70);
        v57 = v109;
        if ( v109 )
          sub_140001660(v108, v109, 1);
      }
      v39 = v57 != -1;
      goto LABEL_117;
    case 1u:
    case 2u:
      if ( !BYTE8(v94) )
        goto LABEL_16;
      v11 = v98;
      v12 = v99;
      sub_141695A00(&v102, v98, v99);
      if ( (_DWORD)v102 != 2 )
      {
        sub_140F60D60((unsigned int)&v102, v11, v12, (unsigned int)&unk_141A627AA, 13);
        v44 = *((_QWORD *)&v102 + 1);
        result = v102;
        v45 = v103;
        if ( (_QWORD)v102 == -1 )
        {
          if ( *((_QWORD *)&v102 + 1) == -1 )
          {
            result = sub_140F62060((unsigned int)&v102, a2[5], a2[6], (unsigned int)&unk_141A627B7, 23);
            if ( (_DWORD)v102 != -1 )
            {
LABEL_119:
              *(_OWORD *)(a1 + 80) = v107;
              *(_OWORD *)(a1 + 64) = v106;
              v75 = v102;
              v76 = v103;
              v77 = v104;
              *(_OWORD *)(a1 + 48) = v105;
              *(_OWORD *)(a1 + 32) = v77;
              *(_OWORD *)(a1 + 16) = v76;
              *(_OWORD *)a1 = v75;
              goto LABEL_120;
            }
            goto LABEL_116;
          }
          v109 = *((_QWORD *)&v102 + 1);
          v62 = a2[5];
          v63 = a2[6];
          v108 = v103;
          if ( (sub_140222E10(v62, v63, v103, *((_QWORD *)&v103 + 1)) & 1) == 0 )
          {
            sub_1401BD710(v64, v64);
            v39 = 1;
            if ( v109 )
              sub_140001660(v108, v109, 1);
            goto LABEL_117;
          }
          result = sub_140EBC810(&v102);
LABEL_113:
          *(_OWORD *)(a1 + 80) = v107;
          *(_OWORD *)(a1 + 64) = v106;
          v71 = v102;
          v72 = v103;
          v73 = v104;
          *(_OWORD *)(a1 + 48) = v105;
          *(_OWORD *)(a1 + 32) = v73;
          *(_OWORD *)(a1 + 16) = v72;
          *(_OWORD *)a1 = v71;
          if ( v109 )
            result = sub_140001660(v108, v109, 1);
        }
        else
        {
          v46 = v104;
          v47 = v105;
          v48 = v106;
          *(_OWORD *)(a1 + 80) = v107;
          *(_OWORD *)(a1 + 64) = v48;
          *(_OWORD *)(a1 + 48) = v47;
          *(_OWORD *)(a1 + 32) = v46;
          *(_OWORD *)(a1 + 16) = v45;
          *(_QWORD *)a1 = result;
          *(_QWORD *)(a1 + 8) = v44;
        }
LABEL_120:
        if ( v9 != -1 && v9 )
          result = sub_140001660(*(_QWORD *)&v90[8], v9, 1);
        if ( (_QWORD)v91 != -1 && (_QWORD)v91 )
          result = sub_140001660(*((_QWORD *)&v91 + 1), v91, 1);
        v55 = *((_QWORD *)&v92 + 1);
        if ( *((_QWORD *)&v92 + 1) != -1 && *((_QWORD *)&v92 + 1) )
        {
          v56 = v93;
          goto LABEL_129;
        }
        goto LABEL_130;
      }
      if ( (BYTE8(v102) & 3u) - 2 >= 2 && (BYTE8(v102) & 3) != 0 )
      {
        --*((_QWORD *)&v102 + 1);
        LOBYTE(v102) = 3;
        sub_1416BCB00((char *)&v102 + 8);
      }
LABEL_16:
      v13 = a2[5];
      v14 = a2[6];
      sub_141695A00(&v102, v13, v14);
      if ( (_DWORD)v102 == 2 )
      {
        if ( (BYTE8(v102) & 3u) - 2 >= 2 && (BYTE8(v102) & 3) != 0 )
        {
          --*((_QWORD *)&v102 + 1);
          LOBYTE(v102) = 3;
          sub_1416BCB00((char *)&v102 + 8);
        }
        goto LABEL_116;
      }
      v43 = sub_141695140(v13, v14);
      if ( v43 )
      {
        v95 = (__int64 *)v43;
        *(_QWORD *)&v83 = &v95;
        *((_QWORD *)&v83 + 1) = sub_1416BB0B0;
        sub_1416ABFD0(&v102, &unk_141A580A0, &v83);
        v83 = v102;
        *(_QWORD *)&v84 = v103;
        if ( ((unsigned __int8)v95 & 3u) - 2 >= 2 && ((unsigned __int8)v95 & 3) != 0 )
        {
          v89[0] = (char *)v95 - 1;
          LOBYTE(v88) = 3;
          sub_1416BCB00(v89);
        }
        result = v84;
        *(_QWORD *)(a1 + 24) = v84;
        *(_OWORD *)(a1 + 8) = v83;
        *(_QWORD *)a1 = 10;
        goto LABEL_120;
      }
LABEL_116:
      v39 = 1;
LABEL_117:
      v74 = v98;
      result = sub_140F62060((unsigned int)&v102, v98, v99, (unsigned int)&unk_141A627CE, 25);
      if ( (_DWORD)v102 != -1 )
        goto LABEL_119;
      result = sub_140F62060((unsigned int)&v102, v81, v82, (unsigned int)&unk_141A627E7, 25);
      if ( (_DWORD)v102 != -1 )
        goto LABEL_119;
      *(_BYTE *)(a1 + 8) = v39;
      *(_QWORD *)a1 = -1;
      if ( v9 != -1 && v9 )
        result = sub_140001660(*(_QWORD *)&v90[8], v9, 1);
      if ( (_QWORD)v91 != -1 && (_QWORD)v91 )
        result = sub_140001660(*((_QWORD *)&v91 + 1), v91, 1);
      if ( *((_QWORD *)&v92 + 1) != -1 && *((_QWORD *)&v92 + 1) )
        result = sub_140001660(v93, *((_QWORD *)&v92 + 1), 1);
      v78 = v97;
      if ( v97 )
      {
        v79 = v74;
        goto LABEL_132;
      }
LABEL_133:
      if ( v80 )
        return sub_140001660(v81, v80, 1);
      return result;
    case 3u:
LABEL_74:
      v39 = 0;
      goto LABEL_117;
    case 4u:
      result = *(_QWORD *)off_1421E6EC0;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v105 = 2;
        *((_QWORD *)&v105 + 1) = aCodexmateLibCo_44;
        *(_QWORD *)&v106 = 46;
        *(_QWORD *)&v107 = &unk_141A62800;
        *((_QWORD *)&v107 + 1) = 197;
        *(_QWORD *)&v102 = 0;
        *((_QWORD *)&v102 + 1) = aCodexmateLibCo_44;
        v103 = 0x2Eu;
        *(_QWORD *)&v104 = aSrcCoreRelayRo_1;
        *((_QWORD *)&v104 + 1) = 36;
        *((_QWORD *)&v106 + 1) = 0x10F00000001LL;
        result = sub_1414D53A0(&v110, &v102);
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = -1;
      goto LABEL_120;
  }
}
