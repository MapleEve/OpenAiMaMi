// win 1.2.7 latest-exe | module src/core/relay/router_unlock_auth.rs | ea 0x1407cf3f0 | successor of pre-update 0x140f5f660 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
double __fastcall sub_1407CF3F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int128 v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r12
  unsigned __int8 (__fastcall *v17)(unsigned __int64); // rax
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rax
  bool v25; // bl
  __int64 v26; // rax
  __int128 v27; // kr00_16
  __int128 v28; // kr10_16
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v31; // rax
  __int64 v32; // rbx
  __int128 v33; // kr30_16
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // r14
  __int64 v37; // r12
  bool v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rax
  __int128 v41; // kr40_16
  __int128 v42; // kr50_16
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int64 v45; // rdx
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r14
  __int128 v52; // kr70_16
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v55; // rdx
  __int128 v56; // xmm1
  __int128 v57; // xmm2
  __int64 v58; // rdx
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  __int64 v61; // rbx
  __int128 v62; // xmm1
  __int128 v63; // xmm2
  __int64 v64; // rdx
  __int64 v65; // rcx
  double result; // xmm0_8
  __int128 v67; // [rsp+30h] [rbp-50h] BYREF
  __int128 v68; // [rsp+40h] [rbp-40h]
  __int128 v69; // [rsp+50h] [rbp-30h]
  __int128 v70; // [rsp+60h] [rbp-20h]
  __int128 v71; // [rsp+70h] [rbp-10h]
  __int64 v72; // [rsp+80h] [rbp+0h] BYREF
  __int64 v73; // [rsp+88h] [rbp+8h]
  __int64 v74; // [rsp+90h] [rbp+10h]
  __int64 v75; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v76[3]; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v77[24]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v78; // [rsp+D8h] [rbp+58h]
  __int128 v79; // [rsp+E8h] [rbp+68h]
  __int128 v80; // [rsp+F8h] [rbp+78h]
  __int128 v81; // [rsp+108h] [rbp+88h]
  __int64 v82; // [rsp+120h] [rbp+A0h]
  unsigned __int64 *v83; // [rsp+128h] [rbp+A8h] BYREF
  __int64 (__fastcall *v84)(_QWORD, _QWORD); // [rsp+130h] [rbp+B0h]
  __int64 v85; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v86; // [rsp+140h] [rbp+C0h]
  __int64 v87; // [rsp+148h] [rbp+C8h]
  unsigned __int64 v88; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v89; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v90; // [rsp+170h] [rbp+F0h]
  __int128 v91; // [rsp+180h] [rbp+100h]
  __int128 v92; // [rsp+190h] [rbp+110h]
  __int128 v93; // [rsp+1A0h] [rbp+120h]
  __int128 v94; // [rsp+1B0h] [rbp+130h]
  __int64 v95; // [rsp+1C0h] [rbp+140h]
  __int64 v96; // [rsp+1C8h] [rbp+148h]
  char v97; // [rsp+1D6h] [rbp+156h] BYREF
  char v98; // [rsp+1D7h] [rbp+157h]
  __int64 v99; // [rsp+1D8h] [rbp+158h]

  v99 = -2;
  v4 = a2[97];
  v5 = a2[98];
  sub_1416B18A0((unsigned int)&v72, v4, v5, (unsigned int)&unk_141A499DE, 30);
  sub_1416B18A0((unsigned int)&v85, v4, v5, (unsigned int)&unk_141A499C0, 30);
  sub_1416B18A0((unsigned int)&v75, v4, v5, (unsigned int)&unk_141A499DE, 30);
  v96 = v76[0];
  sub_1416CC1A0(v77, v76[0], v76[1]);
  v8 = *(_QWORD *)&v77[8];
  if ( *(_QWORD *)v77 == -1 )
  {
    switch ( v77[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(*(_QWORD *)&v77[8] + 16LL) )
          goto LABEL_26;
        goto LABEL_32;
      case 1:
        if ( !*(_BYTE *)(*(_QWORD *)&v77[8] + 31LL) )
          goto LABEL_32;
        goto LABEL_26;
      case 2:
        v98 = 1;
        v17 = *(unsigned __int8 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v7, v6) + 8);
        v98 = 1;
        if ( v17(HIDWORD(v8)) )
          goto LABEL_26;
        goto LABEL_32;
      case 3:
        if ( v77[12] )
        {
LABEL_26:
          v88 = v8;
          v18 = v8;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v83 = &v88;
            v84 = sub_1416EA080;
            *(_QWORD *)&v92 = 2;
            *((_QWORD *)&v92 + 1) = aCodexmateLibCo_31;
            *(_QWORD *)&v93 = 46;
            *(_QWORD *)&v94 = &unk_141A49A84;
            *((_QWORD *)&v94 + 1) = &v83;
            *(_QWORD *)&v89 = 0;
            *((_QWORD *)&v89 + 1) = aCodexmateLibCo_31;
            v90 = 0x2Eu;
            *(_QWORD *)&v91 = aSrcCoreRelayRo_0;
            *((_QWORD *)&v91 + 1) = 36;
            *((_QWORD *)&v93 + 1) = 0x26800000001LL;
            sub_141503E20(&v97, &v89);
            v18 = v88;
            v8 = v88;
          }
          v19 = v18 & 3;
          if ( (unsigned int)(v19 - 2) >= 2 && v19 )
            goto LABEL_34;
        }
        else
        {
LABEL_32:
          if ( (v8 & 3) - 2 >= 2 && (v8 & 3) != 0 )
          {
LABEL_34:
            *((_QWORD *)&v89 + 1) = v8 - 1;
            LOBYTE(v89) = 3;
            v98 = 0;
            sub_1416EBAD0((char *)&v89 + 8);
          }
        }
        if ( v75 )
          *(double *)&v9 = sub_140001660(v96, v75, 1);
        goto LABEL_37;
    }
  }
  v95 = *(_QWORD *)v77;
  v89 = *(_OWORD *)&v77[8];
  *(_QWORD *)&v9 = 0;
  v90 = 0;
  v82 = *(_QWORD *)&v77[8];
  v91 = *(_OWORD *)&v77[8];
  sub_140D8C8B0(v77, &v89);
  v10 = *(_QWORD *)v77;
  if ( *(_QWORD *)v77 == -2 )
  {
    v88 = *(_QWORD *)&v77[8];
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v83 = &v88;
      v84 = sub_14166FAD0;
      *(_QWORD *)&v92 = 2;
      *((_QWORD *)&v92 + 1) = aCodexmateLibCo_31;
      *(_QWORD *)&v93 = 46;
      *(_QWORD *)&v94 = &unk_141A499FC;
      *((_QWORD *)&v94 + 1) = &v83;
      *(_QWORD *)&v89 = 0;
      *((_QWORD *)&v89 + 1) = aCodexmateLibCo_31;
      v90 = 0x2Eu;
      *(_QWORD *)&v91 = aSrcCoreRelayRo_0;
      *((_QWORD *)&v91 + 1) = 36;
      *((_QWORD *)&v93 + 1) = 0x26F00000001LL;
      sub_141503E20(&v97, &v89);
    }
    sub_140032F30(&v88);
    v11 = v95;
    v12 = v82;
    if ( v95 )
      goto LABEL_6;
  }
  else
  {
    v71 = v81;
    *(_QWORD *)&v9 = *(_QWORD *)&v77[8];
    v70 = v80;
    v69 = v79;
    v68 = v78;
    v67 = *(_OWORD *)&v77[8];
    v11 = v95;
    v12 = v82;
    if ( v95 )
LABEL_6:
      *(double *)&v9 = sub_140001660(v12, v11, 1);
  }
  if ( v75 )
    *(double *)&v9 = sub_140001660(v96, v75, 1);
  if ( v10 == -2 )
  {
LABEL_37:
    v20 = a2[5];
    v21 = a2[6];
    switch ( (unsigned __int8)sub_1407CF080(v20, v21) )
    {
      case 0u:
        v22 = v86;
        v23 = v87;
        sub_1416C49D0(&v89, v86, v87);
        if ( (_DWORD)v89 == 2 )
        {
          if ( (BYTE8(v89) & 3u) - 2 >= 2 && (BYTE8(v89) & 3) != 0 )
          {
            --*((_QWORD *)&v89 + 1);
            LOBYTE(v89) = 3;
            sub_1416EBAD0((char *)&v89 + 8);
          }
          goto LABEL_50;
        }
        *(double *)&v9 = sub_1407D0A60((__int64)&v89, v22, v23, (__int64)&unk_141A49BA3, 21);
        v32 = *((_QWORD *)&v89 + 1);
        v31 = v89;
        v33 = v90;
        if ( (_QWORD)v89 == -1 )
        {
          if ( *((_QWORD *)&v89 + 1) != -1 )
          {
            v96 = *((_QWORD *)&v89 + 1);
            v95 = v90;
            if ( (sub_1407C8880(v20, v21, v90, *((_QWORD *)&v90 + 1)) & 1) != 0 )
            {
              sub_1407B7BD0(&v89);
              goto LABEL_88;
            }
            sub_1407B9160(v45);
            v32 = v96;
            if ( v96 )
              *(double *)&v9 = sub_140001660(v95, v96, 1);
          }
          v25 = v32 != -1;
          goto LABEL_102;
        }
        v9 = v91;
        v34 = v92;
        v35 = v93;
        *(_OWORD *)(a1 + 80) = v94;
        *(_OWORD *)(a1 + 64) = v35;
        *(_OWORD *)(a1 + 48) = v34;
        *(_OWORD *)(a1 + 32) = v9;
        *(_OWORD *)(a1 + 16) = v33;
        *(_QWORD *)a1 = v31;
        *(_QWORD *)(a1 + 8) = v32;
        goto LABEL_127;
      case 1u:
        v22 = v86;
        v23 = v87;
        sub_1416C49D0(&v89, v86, v87);
        if ( (_DWORD)v89 != 2 )
          goto LABEL_60;
        v24 = *((_QWORD *)&v89 + 1);
        if ( (BYTE8(v89) & 3u) - 2 < 2 || (BYTE8(v89) & 3) == 0 )
          goto LABEL_55;
        goto LABEL_54;
      case 2u:
        v22 = v86;
        v23 = v87;
        sub_1416C49D0(&v89, v86, v87);
        if ( (_DWORD)v89 == 2 )
        {
          v24 = *((_QWORD *)&v89 + 1);
          if ( (BYTE8(v89) & 3u) - 2 >= 2 && (BYTE8(v89) & 3) != 0 )
          {
LABEL_54:
            *((_QWORD *)&v89 + 1) = v24 - 1;
            LOBYTE(v89) = 3;
            sub_1416EBAD0((char *)&v89 + 8);
          }
LABEL_55:
          v26 = sub_1416C4110(v20, v21);
          if ( v26 )
          {
            v75 = v26;
            *(_QWORD *)v77 = &v75;
            *(_QWORD *)&v77[8] = sub_1416EA080;
            sub_1416DAFA0(&v89, &unk_141A4722F, v77);
            *(_OWORD *)v77 = v89;
            *(_QWORD *)&v77[16] = v90;
            if ( (unsigned int)(v75 & 3) - 2 >= 2 && (v75 & 3) != 0 )
            {
              *((_QWORD *)&v67 + 1) = v75 - 1;
              LOBYTE(v67) = 3;
              sub_1416EBAD0((char *)&v67 + 8);
            }
            *(_QWORD *)(a1 + 24) = *(_QWORD *)&v77[16];
            *(_QWORD *)&v9 = *(_QWORD *)v77;
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v77;
            *(_QWORD *)a1 = 10;
LABEL_127:
            v64 = v85;
            if ( v85 )
            {
              v65 = v86;
LABEL_129:
              *(double *)&v9 = sub_140001660(v65, v64, 1);
            }
            goto LABEL_130;
          }
        }
        else
        {
LABEL_60:
          *(double *)&v9 = sub_1407D0A60((__int64)&v89, v22, v23, (__int64)&unk_141A49BB8, 8);
          v27 = v89;
          v28 = v90;
          if ( (_QWORD)v89 != -1 )
          {
            v9 = v91;
            v29 = v92;
            v30 = v93;
            *(_OWORD *)(a1 + 80) = v94;
            *(_OWORD *)(a1 + 64) = v30;
            *(_OWORD *)(a1 + 48) = v29;
            *(_OWORD *)(a1 + 32) = v9;
            *(_OWORD *)(a1 + 16) = v28;
            *(_OWORD *)a1 = v27;
            goto LABEL_127;
          }
          if ( *((_QWORD *)&v89 + 1) != -1 )
          {
            v96 = *((_QWORD *)&v89 + 1);
            v95 = v90;
            if ( (sub_1407C8880(v20, v21, v90, *((_QWORD *)&v90 + 1)) & 1) != 0 )
            {
              sub_1407B7B20(&v89);
LABEL_88:
              *(_OWORD *)(a1 + 80) = v94;
              *(_OWORD *)(a1 + 64) = v93;
              v9 = v89;
              v46 = v90;
              v47 = v91;
              *(_OWORD *)(a1 + 48) = v92;
              *(_OWORD *)(a1 + 32) = v47;
              *(_OWORD *)(a1 + 16) = v46;
              *(_OWORD *)a1 = v9;
              v48 = v96;
              if ( v96 )
              {
                v49 = v95;
LABEL_126:
                *(double *)&v9 = sub_140001660(v49, v48, 1);
              }
              goto LABEL_127;
            }
            sub_1407B9160(v39);
            v25 = 1;
            if ( v96 )
              *(double *)&v9 = sub_140001660(v95, v96, 1);
            goto LABEL_102;
          }
          sub_1407D1B90((unsigned int)&v89, v20, v21, (unsigned int)&unk_141A49BC0, 32);
          if ( (_DWORD)v89 != -1 )
            goto LABEL_104;
        }
        v25 = 1;
LABEL_102:
        sub_1407D1B90((unsigned int)&v89, v22, v23, (unsigned int)&unk_141A49BE0, 34);
        if ( (_DWORD)v89 == -1 )
        {
          sub_1407D1B90((unsigned int)&v89, v73, v74, (unsigned int)&unk_141A49C02, 34);
          if ( (_DWORD)v89 == -1 )
          {
            *(_BYTE *)(a1 + 8) = v25;
LABEL_106:
            *(_QWORD *)a1 = -1;
            goto LABEL_127;
          }
        }
LABEL_104:
        *(_OWORD *)(a1 + 80) = v94;
        *(_OWORD *)(a1 + 64) = v93;
        v9 = v89;
        v56 = v90;
        v57 = v91;
        *(_OWORD *)(a1 + 48) = v92;
        *(_OWORD *)(a1 + 32) = v57;
        *(_OWORD *)(a1 + 16) = v56;
        *(_OWORD *)a1 = v9;
        goto LABEL_127;
      case 3u:
        LODWORD(v22) = v86;
        LODWORD(v23) = v87;
LABEL_50:
        v25 = 0;
        goto LABEL_102;
      case 4u:
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v92 = 2;
          *((_QWORD *)&v92 + 1) = aCodexmateLibCo_31;
          *(_QWORD *)&v93 = 46;
          *(_QWORD *)&v94 = &unk_141A49C24;
          *((_QWORD *)&v94 + 1) = 175;
          *(_QWORD *)&v89 = 0;
          *((_QWORD *)&v89 + 1) = aCodexmateLibCo_31;
          v90 = 0x2Eu;
          *(_QWORD *)&v91 = aSrcCoreRelayRo_0;
          *((_QWORD *)&v91 + 1) = 36;
          *((_QWORD *)&v93 + 1) = 0xDA00000001LL;
          sub_141503E20(&v97, &v89);
        }
        *(_BYTE *)(a1 + 8) = 0;
        goto LABEL_106;
    }
  }
  *(_QWORD *)v77 = v10;
  *(_OWORD *)&v77[8] = v67;
  v78 = v68;
  v79 = v69;
  v80 = v70;
  *(_QWORD *)&v9 = v71;
  v81 = v71;
  v13 = a2[5];
  v14 = a2[6];
  switch ( (unsigned __int8)sub_1407CF080(v13, v14) )
  {
    case 0u:
      if ( !BYTE8(v81) )
        goto LABEL_74;
      v36 = v86;
      v37 = v87;
      sub_1416C49D0(&v89, v86, v87);
      if ( (_DWORD)v89 == 2 )
      {
        if ( (BYTE8(v89) & 3u) - 2 >= 2 && (BYTE8(v89) & 3) != 0 )
        {
          --*((_QWORD *)&v89 + 1);
          LOBYTE(v89) = 3;
          sub_1416EBAD0((char *)&v89 + 8);
        }
        goto LABEL_74;
      }
      *(double *)&v9 = sub_1407D0A60((__int64)&v89, v36, v37, (__int64)&unk_141A49AD1, 26);
      v51 = *((_QWORD *)&v89 + 1);
      v50 = v89;
      v52 = v90;
      if ( (_QWORD)v89 != -1 )
      {
        v9 = v91;
        v53 = v92;
        v54 = v93;
        *(_OWORD *)(a1 + 80) = v94;
        *(_OWORD *)(a1 + 64) = v54;
        *(_OWORD *)(a1 + 48) = v53;
        *(_OWORD *)(a1 + 32) = v9;
        *(_OWORD *)(a1 + 16) = v52;
        *(_QWORD *)a1 = v50;
        *(_QWORD *)(a1 + 8) = v51;
        goto LABEL_117;
      }
      if ( *((_QWORD *)&v89 + 1) != -1 )
      {
        v96 = *((_QWORD *)&v89 + 1);
        v95 = v90;
        if ( (sub_1407C8880(v13, v14, v90, *((_QWORD *)&v90 + 1)) & 1) != 0 )
        {
          sub_1407B7D30(&v89);
          goto LABEL_110;
        }
        sub_1407B9160(v58);
        v51 = v96;
        if ( v96 )
          *(double *)&v9 = sub_140001660(v95, v96, 1);
      }
      v38 = v51 != -1;
      goto LABEL_114;
    case 1u:
    case 2u:
      if ( !BYTE8(v81) )
        goto LABEL_16;
      v15 = v86;
      v16 = v87;
      sub_1416C49D0(&v89, v86, v87);
      if ( (_DWORD)v89 != 2 )
      {
        *(double *)&v9 = sub_1407D0A60((__int64)&v89, v15, v16, (__int64)&unk_141A49AEB, 13);
        v41 = v89;
        v42 = v90;
        if ( (_QWORD)v89 == -1 )
        {
          if ( *((_QWORD *)&v89 + 1) == -1 )
          {
            sub_1407D1B90((unsigned int)&v89, v13, v14, (unsigned int)&unk_141A49AF8, 23);
            if ( (_DWORD)v89 != -1 )
            {
LABEL_116:
              *(_OWORD *)(a1 + 80) = v94;
              *(_OWORD *)(a1 + 64) = v93;
              v9 = v89;
              v62 = v90;
              v63 = v91;
              *(_OWORD *)(a1 + 48) = v92;
              *(_OWORD *)(a1 + 32) = v63;
              *(_OWORD *)(a1 + 16) = v62;
              *(_OWORD *)a1 = v9;
              goto LABEL_117;
            }
            goto LABEL_113;
          }
          v96 = *((_QWORD *)&v89 + 1);
          v95 = v90;
          if ( (sub_1407C8880(v13, v14, v90, *((_QWORD *)&v90 + 1)) & 1) == 0 )
          {
            sub_1407B9160(v55);
            v38 = 1;
            if ( v96 )
              *(double *)&v9 = sub_140001660(v95, v96, 1);
            goto LABEL_114;
          }
          sub_1407B7C80(&v89);
LABEL_110:
          *(_OWORD *)(a1 + 80) = v94;
          *(_OWORD *)(a1 + 64) = v93;
          v9 = v89;
          v59 = v90;
          v60 = v91;
          *(_OWORD *)(a1 + 48) = v92;
          *(_OWORD *)(a1 + 32) = v60;
          *(_OWORD *)(a1 + 16) = v59;
          *(_OWORD *)a1 = v9;
          if ( v96 )
            *(double *)&v9 = sub_140001660(v95, v96, 1);
        }
        else
        {
          v9 = v91;
          v43 = v92;
          v44 = v93;
          *(_OWORD *)(a1 + 80) = v94;
          *(_OWORD *)(a1 + 64) = v44;
          *(_OWORD *)(a1 + 48) = v43;
          *(_OWORD *)(a1 + 32) = v9;
          *(_OWORD *)(a1 + 16) = v42;
          *(_OWORD *)a1 = v41;
        }
LABEL_117:
        if ( v10 != -1 && v10 )
          *(double *)&v9 = sub_140001660(*(_QWORD *)&v77[8], v10, 1);
        if ( (_QWORD)v78 != -1 && (_QWORD)v78 )
          *(double *)&v9 = sub_140001660(*((_QWORD *)&v78 + 1), v78, 1);
        v48 = *((_QWORD *)&v79 + 1);
        if ( *((_QWORD *)&v79 + 1) != -1 && *((_QWORD *)&v79 + 1) )
        {
          v49 = v80;
          goto LABEL_126;
        }
        goto LABEL_127;
      }
      if ( (BYTE8(v89) & 3u) - 2 >= 2 && (BYTE8(v89) & 3) != 0 )
      {
        --*((_QWORD *)&v89 + 1);
        LOBYTE(v89) = 3;
        sub_1416EBAD0((char *)&v89 + 8);
      }
LABEL_16:
      sub_1416C49D0(&v89, v13, v14);
      if ( (_DWORD)v89 == 2 )
      {
        if ( (BYTE8(v89) & 3u) - 2 >= 2 && (BYTE8(v89) & 3) != 0 )
        {
          --*((_QWORD *)&v89 + 1);
          LOBYTE(v89) = 3;
          sub_1416EBAD0((char *)&v89 + 8);
        }
        goto LABEL_113;
      }
      v40 = sub_1416C4110(v13, v14);
      if ( v40 )
      {
        v83 = (unsigned __int64 *)v40;
        *(_QWORD *)&v67 = &v83;
        *((_QWORD *)&v67 + 1) = sub_1416EA080;
        sub_1416DAFA0(&v89, &unk_141A471BF, &v67);
        v67 = v89;
        *(_QWORD *)&v68 = v90;
        if ( ((unsigned __int8)v83 & 3u) - 2 >= 2 && ((unsigned __int8)v83 & 3) != 0 )
        {
          v76[0] = (char *)v83 - 1;
          LOBYTE(v75) = 3;
          sub_1416EBAD0(v76);
        }
        *(_QWORD *)(a1 + 24) = v68;
        *(_QWORD *)&v9 = v67;
        *(_OWORD *)(a1 + 8) = v67;
        *(_QWORD *)a1 = 10;
        goto LABEL_117;
      }
LABEL_113:
      v38 = 1;
LABEL_114:
      v61 = v86;
      sub_1407D1B90((unsigned int)&v89, v86, v87, (unsigned int)&unk_141A49B0F, 25);
      if ( (_DWORD)v89 != -1 )
        goto LABEL_116;
      sub_1407D1B90((unsigned int)&v89, v73, v74, (unsigned int)&unk_141A49B28, 25);
      if ( (_DWORD)v89 != -1 )
        goto LABEL_116;
      *(_BYTE *)(a1 + 8) = v38;
      *(_QWORD *)a1 = -1;
      if ( v10 != -1 && v10 )
        *(double *)&v9 = sub_140001660(*(_QWORD *)&v77[8], v10, 1);
      if ( (_QWORD)v78 != -1 && (_QWORD)v78 )
        *(double *)&v9 = sub_140001660(*((_QWORD *)&v78 + 1), v78, 1);
      if ( *((_QWORD *)&v79 + 1) != -1 && *((_QWORD *)&v79 + 1) )
        *(double *)&v9 = sub_140001660(v80, *((_QWORD *)&v79 + 1), 1);
      v64 = v85;
      if ( v85 )
      {
        v65 = v61;
        goto LABEL_129;
      }
LABEL_130:
      if ( v72 )
        *(double *)&v9 = sub_140001660(v73, v72, 1);
      *(_QWORD *)&result = v9;
      return result;
    case 3u:
LABEL_74:
      v38 = 0;
      goto LABEL_114;
    case 4u:
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v92 = 2;
        *((_QWORD *)&v92 + 1) = aCodexmateLibCo_31;
        *(_QWORD *)&v93 = 46;
        *(_QWORD *)&v94 = &unk_141A49B41;
        *((_QWORD *)&v94 + 1) = 197;
        *(_QWORD *)&v89 = 0;
        *((_QWORD *)&v89 + 1) = aCodexmateLibCo_31;
        v90 = 0x2Eu;
        *(_QWORD *)&v91 = aSrcCoreRelayRo_0;
        *((_QWORD *)&v91 + 1) = 36;
        *((_QWORD *)&v93 + 1) = 0x10F00000001LL;
        sub_141503E20(&v97, &v89);
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = -1;
      goto LABEL_117;
  }
}
