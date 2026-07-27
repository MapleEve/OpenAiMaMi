// module: codexmate_lib/core/oauth_login
// addr: 0x14037e3e0
// name: sub_14037E3E0
// win 1.2.1 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14037E3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  __int64 v12; // rbx
  __int64 (__fastcall **v13)(); // rax
  __int128 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  void *v33; // rdi
  __int16 v34; // r14
  __int64 v35; // rbx
  __int64 v36; // r13
  char *v37; // rdi
  __int64 *v38; // r12
  _BYTE *v39; // r14
  char v40; // al
  char v41; // al
  __int64 v42; // r15
  __int64 v43; // rdx
  char v44; // al
  bool v45; // bl
  __int64 v46; // rdi
  bool v47; // al
  bool v48; // zf
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  char v55; // al
  char *v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // r12
  __int128 v59; // [rsp+100h] [rbp+80h] BYREF
  __int128 v60; // [rsp+110h] [rbp+90h]
  __int128 v61; // [rsp+120h] [rbp+A0h]
  __int128 v62; // [rsp+130h] [rbp+B0h]
  __int128 v63; // [rsp+140h] [rbp+C0h]
  __int128 v64; // [rsp+150h] [rbp+D0h]
  __int128 v65; // [rsp+160h] [rbp+E0h]
  __int128 v66; // [rsp+170h] [rbp+F0h]
  __int128 v67; // [rsp+1E0h] [rbp+160h]
  __int64 v68; // [rsp+1F0h] [rbp+170h]
  char v69; // [rsp+2E8h] [rbp+268h]
  __int128 v70; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v71; // [rsp+300h] [rbp+280h]
  __int128 v72; // [rsp+310h] [rbp+290h]
  __int128 v73; // [rsp+320h] [rbp+2A0h]
  __int128 v74; // [rsp+330h] [rbp+2B0h]
  __int128 v75; // [rsp+340h] [rbp+2C0h]
  __int128 v76; // [rsp+350h] [rbp+2D0h]
  __int128 v77; // [rsp+360h] [rbp+2E0h]
  _QWORD v78[3]; // [rsp+378h] [rbp+2F8h] BYREF
  __int128 v79; // [rsp+390h] [rbp+310h]
  __int128 v80; // [rsp+3A0h] [rbp+320h]
  __int128 v81; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v82; // [rsp+3C0h] [rbp+340h]
  __int128 v83; // [rsp+3D0h] [rbp+350h]
  __int128 v84; // [rsp+3E0h] [rbp+360h]
  __int128 v85; // [rsp+3F0h] [rbp+370h]
  __int128 v86; // [rsp+400h] [rbp+380h]
  __int128 v87; // [rsp+410h] [rbp+390h]
  __int128 v88; // [rsp+420h] [rbp+3A0h]
  __int128 v89; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v90; // [rsp+440h] [rbp+3C0h]
  __int128 v91; // [rsp+450h] [rbp+3D0h]
  __int128 v92; // [rsp+460h] [rbp+3E0h]
  __int128 v93; // [rsp+470h] [rbp+3F0h]
  __int128 v94; // [rsp+480h] [rbp+400h]
  __int128 v95; // [rsp+490h] [rbp+410h]
  __int128 v96; // [rsp+4A0h] [rbp+420h]
  __int128 v97; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v98; // [rsp+4C0h] [rbp+440h]
  const char *v99; // [rsp+4D0h] [rbp+450h]
  __int64 v100; // [rsp+4D8h] [rbp+458h]
  __int16 v101; // [rsp+4E0h] [rbp+460h]
  void *v102; // [rsp+4E8h] [rbp+468h]
  __int64 v103; // [rsp+4F0h] [rbp+470h]
  __int128 v104; // [rsp+500h] [rbp+480h]
  __int128 v105; // [rsp+510h] [rbp+490h]
  __int128 v106; // [rsp+520h] [rbp+4A0h]
  __int128 v107; // [rsp+530h] [rbp+4B0h]
  __int128 v108; // [rsp+540h] [rbp+4C0h]
  __int64 v109; // [rsp+550h] [rbp+4D0h]
  __int64 v110; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v111; // [rsp+560h] [rbp+4E0h]
  __int64 v112; // [rsp+568h] [rbp+4E8h]
  __int128 v113; // [rsp+570h] [rbp+4F0h]
  __int128 v114; // [rsp+580h] [rbp+500h] BYREF
  const char *v115; // [rsp+590h] [rbp+510h]
  __int64 v116; // [rsp+598h] [rbp+518h]
  __int64 v117; // [rsp+5A8h] [rbp+528h]
  __int64 v118; // [rsp+5B0h] [rbp+530h]
  __int128 *v119; // [rsp+5B8h] [rbp+538h]
  __int64 v120; // [rsp+5C0h] [rbp+540h]
  __int64 v121; // [rsp+5C8h] [rbp+548h]
  char v122; // [rsp+5D6h] [rbp+556h]
  char v123; // [rsp+5D7h] [rbp+557h]
  __int64 v124; // [rsp+5D8h] [rbp+558h]

  v124 = -2;
  v5 = a2;
  v7 = *(unsigned __int8 *)(a2 + 536);
  v121 = a2;
  switch ( v7 )
  {
    case 0LL:
      *(_BYTE *)(a2 + 541) = 0;
      sub_141684120(a2 + 272, a2, 224);
      *(_DWORD *)(v5 + 537) = 16777473;
      *(_OWORD *)(v5 + 544) = *(_OWORD *)(v5 + 224);
      *(_QWORD *)(v5 + 496) = v5 + 240;
      nullsub_1(v8);
      v9 = sub_140001650(16, 8);
      if ( !v9 )
        sub_1416C2D31(8, 16);
      v10 = v9;
      *(_QWORD *)v9 = v5 + 240;
      *(_BYTE *)(v9 + 8) = 0;
      *(_QWORD *)(v5 + 560) = v9;
      v11 = &off_1417B6278;
      *(_QWORD *)(v5 + 568) = &off_1417B6278;
      goto LABEL_9;
    case 1LL:
      sub_1416C3400(&off_14174DA90, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_14174DA90, a2, a3, a4);
    case 3LL:
      v10 = *(_QWORD *)(a2 + 560);
      v11 = *(__int64 (__fastcall ***)())(v5 + 568);
LABEL_9:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v11[3])(&v59, v10, a3);
      if ( (_QWORD)v59 == -1 )
      {
        *(_QWORD *)a1 = -1;
        v41 = 3;
        goto LABEL_64;
      }
      v80 = v60;
      v79 = v59;
      v120 = *(_QWORD *)(v121 + 560);
      v119 = *(__int128 **)(v121 + 568);
      if ( *(_QWORD *)v119 )
        (*(void (__fastcall **)(__int64))v119)(v120);
      v15 = *((_QWORD *)v119 + 1);
      if ( v15 )
        sub_140001660(v120, v15, *((_QWORD *)v119 + 2));
      v16 = v121;
      *(_BYTE *)(v121 + 539) = 1;
      v17 = v80;
      *(_OWORD *)(v16 + 504) = v79;
      *(_OWORD *)(v16 + 520) = v17;
      *(_BYTE *)(v16 + 538) = 0;
      sub_141684120(&v59, v16 + 272, 224);
      *(_BYTE *)(v16 + 537) = 0;
      v18 = *(_QWORD *)(v16 + 496);
      v67 = *(_OWORD *)(v16 + 544);
      v68 = v18;
      v69 = 0;
      nullsub_1(v19);
      v20 = sub_140001650(496, 8);
      if ( !v20 )
        sub_1416C2D31(8, 496);
      v12 = v20;
      sub_141684120(v20, &v59, 496);
      *(_QWORD *)(v16 + 544) = v12;
      v13 = &off_1417537F0;
      *(_QWORD *)(v16 + 552) = &off_1417537F0;
LABEL_16:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v13[3])(&v59, v12, a3);
      if ( (_BYTE)v59 == 0xFF )
      {
        *(_QWORD *)a1 = -1;
        v41 = 4;
        goto LABEL_64;
      }
      v109 = v64;
      v108 = v63;
      v107 = v62;
      v106 = v61;
      v105 = v60;
      v104 = v59;
      v120 = *(_QWORD *)(v121 + 544);
      v119 = *(__int128 **)(v121 + 552);
      if ( *(_QWORD *)v119 )
        (*(void (__fastcall **)(__int64))v119)(v120);
      v5 = v121;
      v14 = (__int128 *)(v121 + 544);
      v21 = *((_QWORD *)v119 + 1);
      if ( v21 )
        sub_140001660(v120, v21, *((_QWORD *)v119 + 2));
      *(_WORD *)(v5 + 539) = 0;
      *(_BYTE *)(v5 + 541) = 0;
      v22 = *(_OWORD *)(v5 + 520);
      v59 = *(_OWORD *)(v5 + 504);
      v60 = v22;
      v61 = v104;
      v62 = v105;
      v63 = v106;
      v64 = v107;
      v65 = v108;
      *(_QWORD *)&v66 = v109;
      *((_QWORD *)v14 + 14) = v109;
      v14[6] = v65;
      v14[5] = v64;
      v14[4] = v63;
      v23 = v59;
      v24 = v60;
      v25 = v61;
      v14[3] = v62;
      v14[2] = v25;
      v14[1] = v24;
      *v14 = v23;
      *(_BYTE *)(v5 + 664) = 0;
LABEL_22:
      v26 = *v14;
      v119 = v14;
      v114 = v14[1];
      v113 = v26;
      *(_QWORD *)&v94 = *(_QWORD *)(v5 + 656);
      v93 = *(_OWORD *)(v5 + 640);
      v27 = *(_OWORD *)(v5 + 576);
      v28 = *(_OWORD *)(v5 + 592);
      v29 = *(_OWORD *)(v5 + 608);
      v92 = *(_OWORD *)(v5 + 624);
      v91 = v29;
      v90 = v28;
      v89 = v27;
      sub_1403C4930(&v110, &v89, *((_QWORD *)&v113 + 1), v114);
      if ( v110 != -2 )
      {
        v120 = v110;
        v118 = v111;
        v35 = v112;
        v36 = *((_QWORD *)&v114 + 1);
        v37 = (char *)(*((_QWORD *)&v114 + 1) + 16LL);
        LOBYTE(v31) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(*((_QWORD *)&v114 + 1) + 16LL), 1, 0) )
        {
          v123 = 1;
          sub_1416C15B0(v37);
        }
        v38 = off_141EC90B8;
        if ( 2 * *off_141EC90B8 )
        {
          v123 = 1;
          v55 = sub_1416C2250(v31, v30);
          v39 = (_BYTE *)(v36 + 17);
          v31 = *(unsigned __int8 *)(v36 + 17);
          if ( (_BYTE)v31 )
          {
            if ( !v55 )
            {
LABEL_32:
              v40 = *v37;
              *v37 = 0;
              if ( v40 == 2 )
              {
                v123 = 1;
                WakeByAddressSingle(v37);
              }
              goto LABEL_45;
            }
LABEL_31:
            if ( 2 * *v38 )
            {
              v123 = 1;
              if ( !(unsigned __int8)sub_1416C2250(v31, v30) )
                *v39 = 1;
            }
            goto LABEL_32;
          }
          v42 = *(_QWORD *)(v36 + 24);
          v43 = *(_QWORD *)(v36 + 32);
          *(_QWORD *)(v36 + 24) = 0;
          if ( !v55 )
          {
LABEL_38:
            v44 = *v37;
            *v37 = 0;
            if ( v44 == 2 )
            {
              v123 = 1;
              v56 = v37;
              v57 = v43;
              WakeByAddressSingle(v56);
              v43 = v57;
            }
            if ( v42 )
            {
              v110 = v120;
              v111 = v118;
              v112 = v35;
              v123 = 0;
              sub_140843D60(v78, v43, &v110);
              if ( v78[0] <= 0xFFFFFFFFFFFFFFFDuLL )
              {
                if ( v78[0] )
                  sub_140001660(v78[1], v78[0], 1);
                v34 = 410;
                v45 = 0;
              }
              else
              {
                v45 = v78[0] == -2;
                v34 = 410;
                if ( v78[0] == -2 )
                  v34 = 200;
              }
              v46 = v120;
LABEL_48:
              v71 = xmmword_14174CDA8;
              v70 = xmmword_14174CD98;
              sub_1402C3580(&v89);
              v47 = v46 != -1;
              v33 = &unk_14174CDBD;
              v48 = !v45 || !v47;
              if ( v45 && v47 )
                v33 = &unk_14174D03A;
              v32 = 637;
              if ( !v48 )
                v32 = 643;
              if ( (_QWORD)v113 )
                sub_140001660(*((_QWORD *)&v113 + 1), v113, 1);
              if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v114 + 1)) )
                goto LABEL_55;
              goto LABEL_56;
            }
LABEL_45:
            v34 = 410;
            v46 = v120;
            if ( v120 > 0 )
              sub_140001660(v118, v120, 1);
            v45 = 0;
            goto LABEL_48;
          }
        }
        else
        {
          v39 = (_BYTE *)(v36 + 17);
          if ( *(_BYTE *)(v36 + 17) )
            goto LABEL_31;
          v42 = *(_QWORD *)(v36 + 24);
          v43 = *(_QWORD *)(v36 + 32);
          *(_QWORD *)(v36 + 24) = 0;
        }
        if ( 2 * *v38 )
        {
          v123 = 1;
          v58 = v43;
          if ( !(unsigned __int8)sub_1416C2250(v31, v43) )
            *v39 = 1;
          v43 = v58;
        }
        goto LABEL_38;
      }
      v71 = xmmword_14174CDA8;
      v70 = xmmword_14174CD98;
      sub_1402C3580(&v89);
      if ( (_QWORD)v113 )
        sub_140001660(*((_QWORD *)&v113 + 1), v113, 1);
      v32 = 637;
      v33 = &unk_14174CDBD;
      v34 = 400;
      if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v114 + 1)) )
LABEL_55:
        sub_140574610((char *)&v114 + 8);
LABEL_56:
      v97 = v70;
      v98 = v71;
      *(_BYTE *)(v121 + 664) = 1;
      v99 = aClose_5;
      v100 = 5;
      v101 = v34;
      v102 = v33;
      v103 = v32;
      v115 = aClose_5;
      v116 = 5;
      v114 = v98;
      v113 = v97;
      v122 = 1;
      sub_1406B27E0(&v70, v33, v32);
      v96 = v77;
      v95 = v76;
      v94 = v75;
      v93 = v74;
      v92 = v73;
      v91 = v72;
      v90 = v71;
      v89 = v70;
      v122 = 0;
      sub_1407B8C00(&v59, &v97, &v89);
      if ( (_DWORD)v59 == -1 )
      {
        v122 = 0;
        sub_140B99180(&v81);
      }
      else
      {
        v87 = v65;
        v86 = v64;
        v85 = v63;
        v84 = v62;
        v83 = v61;
        v82 = v60;
        v81 = v59;
        v88 = v66;
        WORD4(v87) = v34;
      }
      v49 = v121;
      *(_BYTE *)(v121 + 541) = 0;
      *(_BYTE *)(v49 + 539) = 0;
      *(_WORD *)(v49 + 537) = 0;
      v50 = *(_QWORD *)(v49 + 240);
      if ( v50 )
        sub_140001660(*(_QWORD *)(v49 + 248), v50, 1);
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v49 + 264)) )
        sub_140574610(v121 + 264);
      *(_OWORD *)(a1 + 112) = v88;
      *(_OWORD *)(a1 + 96) = v87;
      *(_OWORD *)(a1 + 80) = v86;
      *(_OWORD *)(a1 + 64) = v85;
      v51 = v81;
      v52 = v82;
      v53 = v83;
      *(_OWORD *)(a1 + 48) = v84;
      *(_OWORD *)(a1 + 32) = v53;
      *(_OWORD *)(a1 + 16) = v52;
      *(_OWORD *)a1 = v51;
      v41 = 1;
LABEL_64:
      *(_BYTE *)(v121 + 536) = v41;
      return a1;
    case 4LL:
      v12 = *(_QWORD *)(a2 + 544);
      v13 = *(__int64 (__fastcall ***)())(a2 + 552);
      goto LABEL_16;
    case 5LL:
      v14 = (__int128 *)(a2 + 544);
      if ( *(_BYTE *)(a2 + 664) )
      {
        if ( *(_BYTE *)(a2 + 664) == 1 )
        {
          v117 = a2 + 544;
          sub_1416C3400(&off_14174D2D8, a2, a3, a4);
        }
        v117 = a2 + 544;
        sub_1416C3420(&off_14174D2D8, a2, a3, a4);
      }
      goto LABEL_22;
  }
}