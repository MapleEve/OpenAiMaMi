// win 1.2.7 latest-exe | module src/core/oauth_login.rs | ea 0x1401dce50 | successor of pre-update 0x1402b4c10 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.7, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1401DCE50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdi
  void *v35; // rbx
  __int16 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // r13
  char *v39; // rdi
  __int64 *v40; // r12
  _BYTE *v41; // r14
  char v42; // al
  char v43; // al
  __int64 v44; // r15
  __int64 v45; // rdx
  char v46; // al
  bool v47; // al
  __int64 v48; // rdi
  bool v49; // zf
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  char v56; // al
  char *v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // r12
  __int128 v60; // [rsp+100h] [rbp+80h] BYREF
  __int128 v61; // [rsp+110h] [rbp+90h]
  __int128 v62; // [rsp+120h] [rbp+A0h]
  __int128 v63; // [rsp+130h] [rbp+B0h]
  __int128 v64; // [rsp+140h] [rbp+C0h]
  __int128 v65; // [rsp+150h] [rbp+D0h]
  __int128 v66; // [rsp+160h] [rbp+E0h]
  __int128 v67; // [rsp+170h] [rbp+F0h]
  __int128 v68; // [rsp+1E0h] [rbp+160h]
  __int64 v69; // [rsp+1F0h] [rbp+170h]
  char v70; // [rsp+2E8h] [rbp+268h]
  __int128 v71; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v72; // [rsp+300h] [rbp+280h]
  __int128 v73; // [rsp+310h] [rbp+290h]
  __int128 v74; // [rsp+320h] [rbp+2A0h]
  __int128 v75; // [rsp+330h] [rbp+2B0h]
  __int128 v76; // [rsp+340h] [rbp+2C0h]
  __int128 v77; // [rsp+350h] [rbp+2D0h]
  __int128 v78; // [rsp+360h] [rbp+2E0h]
  _QWORD v79[3]; // [rsp+378h] [rbp+2F8h] BYREF
  __int128 v80; // [rsp+390h] [rbp+310h]
  __int128 v81; // [rsp+3A0h] [rbp+320h]
  __int128 v82; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v83; // [rsp+3C0h] [rbp+340h]
  __int128 v84; // [rsp+3D0h] [rbp+350h]
  __int128 v85; // [rsp+3E0h] [rbp+360h]
  __int128 v86; // [rsp+3F0h] [rbp+370h]
  __int128 v87; // [rsp+400h] [rbp+380h]
  __int128 v88; // [rsp+410h] [rbp+390h]
  __int128 v89; // [rsp+420h] [rbp+3A0h]
  __int128 v90; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v91; // [rsp+440h] [rbp+3C0h]
  __int128 v92; // [rsp+450h] [rbp+3D0h]
  __int128 v93; // [rsp+460h] [rbp+3E0h]
  __int128 v94; // [rsp+470h] [rbp+3F0h]
  __int128 v95; // [rsp+480h] [rbp+400h]
  __int128 v96; // [rsp+490h] [rbp+410h]
  __int128 v97; // [rsp+4A0h] [rbp+420h]
  __int128 v98; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v99; // [rsp+4C0h] [rbp+440h]
  const char *v100; // [rsp+4D0h] [rbp+450h]
  __int64 v101; // [rsp+4D8h] [rbp+458h]
  __int16 v102; // [rsp+4E0h] [rbp+460h]
  void *v103; // [rsp+4E8h] [rbp+468h]
  __int64 v104; // [rsp+4F0h] [rbp+470h]
  __int128 v105; // [rsp+500h] [rbp+480h]
  __int128 v106; // [rsp+510h] [rbp+490h]
  __int128 v107; // [rsp+520h] [rbp+4A0h]
  __int128 v108; // [rsp+530h] [rbp+4B0h]
  __int128 v109; // [rsp+540h] [rbp+4C0h]
  __int64 v110; // [rsp+550h] [rbp+4D0h]
  __int64 v111; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v112; // [rsp+560h] [rbp+4E0h]
  __int64 v113; // [rsp+568h] [rbp+4E8h]
  __int128 v114; // [rsp+570h] [rbp+4F0h]
  __int128 v115; // [rsp+580h] [rbp+500h] BYREF
  const char *v116; // [rsp+590h] [rbp+510h]
  __int64 v117; // [rsp+598h] [rbp+518h]
  __int64 v118; // [rsp+5A8h] [rbp+528h]
  __int64 v119; // [rsp+5B0h] [rbp+530h]
  __int128 *v120; // [rsp+5B8h] [rbp+538h]
  __int64 v121; // [rsp+5C0h] [rbp+540h]
  __int64 v122; // [rsp+5C8h] [rbp+548h]
  char v123; // [rsp+5D6h] [rbp+556h]
  char v124; // [rsp+5D7h] [rbp+557h]
  __int64 v125; // [rsp+5D8h] [rbp+558h]

  v125 = -2;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a2 + 536);
  v122 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_BYTE *)(a2 + 541) = 0;
      sub_1419234B0(a2 + 272, a2, 224);
      *(_DWORD *)(v4 + 537) = 16777473;
      *(_OWORD *)(v4 + 544) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 496) = v4 + 240;
      nullsub_1(v8, v7);
      v9 = sub_140001650(16, 8);
      if ( !v9 )
        sub_14196B2C1(8, 16);
      v10 = v9;
      *(_QWORD *)v9 = v4 + 240;
      *(_BYTE *)(v9 + 8) = 0;
      *(_QWORD *)(v4 + 560) = v9;
      v11 = &off_141A41780;
      *(_QWORD *)(v4 + 568) = &off_141A41780;
      goto LABEL_9;
    case 1LL:
      sub_14196B990(&off_141A07D88);
    case 2LL:
      sub_14196B9B0(&off_141A07D88);
    case 3LL:
      v10 = *(_QWORD *)(a2 + 560);
      v11 = *(__int64 (__fastcall ***)())(v4 + 568);
LABEL_9:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v11[3])(&v60, v10, a3);
      if ( (_QWORD)v60 == -1 )
      {
        *(_QWORD *)a1 = -1;
        v43 = 3;
        goto LABEL_62;
      }
      v81 = v61;
      v80 = v60;
      v121 = *(_QWORD *)(v122 + 560);
      v120 = *(__int128 **)(v122 + 568);
      if ( *(_QWORD *)v120 )
        (*(void (__fastcall **)(__int64))v120)(v121);
      v15 = *((_QWORD *)v120 + 1);
      if ( v15 )
        sub_140001660(v121, v15, *((_QWORD *)v120 + 2));
      v16 = v122;
      *(_BYTE *)(v122 + 539) = 1;
      v17 = v81;
      *(_OWORD *)(v16 + 504) = v80;
      *(_OWORD *)(v16 + 520) = v17;
      *(_BYTE *)(v16 + 538) = 0;
      sub_1419234B0(&v60, v16 + 272, 224);
      *(_BYTE *)(v16 + 537) = 0;
      v18 = *(_QWORD *)(v16 + 496);
      v68 = *(_OWORD *)(v16 + 544);
      v69 = v18;
      v70 = 0;
      nullsub_1(v20, v19);
      v21 = sub_140001650(496, 8);
      if ( !v21 )
        sub_14196B2C1(8, 496);
      v12 = v21;
      sub_1419234B0(v21, &v60, 496);
      *(_QWORD *)(v16 + 544) = v12;
      v13 = &off_141A0A210;
      *(_QWORD *)(v16 + 552) = &off_141A0A210;
LABEL_16:
      ((void (__fastcall *)(__int128 *, __int64, __int64))v13[3])(&v60, v12, a3);
      if ( (_BYTE)v60 == 0xFF )
      {
        *(_QWORD *)a1 = -1;
        v43 = 4;
        goto LABEL_62;
      }
      v110 = v65;
      v109 = v64;
      v108 = v63;
      v107 = v62;
      v106 = v61;
      v105 = v60;
      v121 = *(_QWORD *)(v122 + 544);
      v120 = *(__int128 **)(v122 + 552);
      if ( *(_QWORD *)v120 )
        (*(void (__fastcall **)(__int64))v120)(v121);
      v4 = v122;
      v14 = (__int128 *)(v122 + 544);
      v22 = *((_QWORD *)v120 + 1);
      if ( v22 )
        sub_140001660(v121, v22, *((_QWORD *)v120 + 2));
      *(_WORD *)(v4 + 539) = 0;
      *(_BYTE *)(v4 + 541) = 0;
      v23 = *(_OWORD *)(v4 + 520);
      v60 = *(_OWORD *)(v4 + 504);
      v61 = v23;
      v62 = v105;
      v63 = v106;
      v64 = v107;
      v65 = v108;
      v66 = v109;
      *(_QWORD *)&v67 = v110;
      *((_QWORD *)v14 + 14) = v110;
      v14[6] = v66;
      v14[5] = v65;
      v14[4] = v64;
      v24 = v60;
      v25 = v61;
      v26 = v62;
      v14[3] = v63;
      v14[2] = v26;
      v14[1] = v25;
      *v14 = v24;
      *(_BYTE *)(v4 + 664) = 0;
LABEL_22:
      v27 = *v14;
      v120 = v14;
      v115 = v14[1];
      v114 = v27;
      *(_QWORD *)&v95 = *(_QWORD *)(v4 + 656);
      v94 = *(_OWORD *)(v4 + 640);
      v28 = *(_OWORD *)(v4 + 576);
      v29 = *(_OWORD *)(v4 + 592);
      v30 = *(_OWORD *)(v4 + 608);
      v93 = *(_OWORD *)(v4 + 624);
      v92 = v30;
      v91 = v29;
      v90 = v28;
      sub_1401E87D0(&v111, &v90, *((_QWORD *)&v114 + 1), v115);
      if ( v111 != -2 )
      {
        v121 = v111;
        v119 = v112;
        v37 = v113;
        v38 = *((_QWORD *)&v115 + 1);
        v39 = (char *)(*((_QWORD *)&v115 + 1) + 16LL);
        LOBYTE(v32) = 1;
        if ( _InterlockedCompareExchange8((volatile signed __int8 *)(*((_QWORD *)&v115 + 1) + 16LL), 1, 0) )
        {
          v124 = 1;
          sub_141969A30(v39);
        }
        v40 = off_142240260;
        if ( 2 * *off_142240260 )
        {
          v124 = 1;
          v56 = sub_14196A710(v32, v31, v33);
          v41 = (_BYTE *)(v38 + 17);
          v32 = *(unsigned __int8 *)(v38 + 17);
          if ( (_BYTE)v32 )
          {
            if ( !v56 )
            {
LABEL_32:
              v42 = *v39;
              *v39 = 0;
              if ( v42 == 2 )
              {
                v124 = 1;
                WakeByAddressSingle(v39);
              }
              goto LABEL_43;
            }
LABEL_31:
            if ( 2 * *v40 )
            {
              v124 = 1;
              if ( !(unsigned __int8)sub_14196A710(v32, v31, v33) )
                *v41 = 1;
            }
            goto LABEL_32;
          }
          v44 = *(_QWORD *)(v38 + 24);
          v45 = *(_QWORD *)(v38 + 32);
          *(_QWORD *)(v38 + 24) = 0;
          if ( !v56 )
          {
LABEL_38:
            v46 = *v39;
            *v39 = 0;
            if ( v46 == 2 )
            {
              v124 = 1;
              v57 = v39;
              v58 = v45;
              WakeByAddressSingle(v57);
              v45 = v58;
            }
            if ( v44 )
            {
              v111 = v121;
              v112 = v119;
              v113 = v37;
              v124 = 0;
              sub_140B38700(v79, v45, &v111);
              if ( v79[0] <= 0LL )
              {
                v47 = v79[0] == -2;
                v36 = 410;
                if ( v79[0] == -2 )
                  v36 = 200;
              }
              else
              {
                sub_140001660(v79[1], v79[0], 1);
                v36 = 410;
                v47 = 0;
              }
              v48 = v121;
LABEL_46:
              v49 = !v47 || v48 == -1;
              v34 = 637;
              if ( !v49 )
                v34 = 643;
              v35 = &unk_141A0708D;
              if ( !v49 )
                v35 = &unk_141A0730A;
              v72 = xmmword_141A07078;
              v71 = xmmword_141A07068;
              sub_140032260(&v90);
              if ( (_QWORD)v114 )
                sub_140001660(*((_QWORD *)&v114 + 1), v114, 1);
              if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v115 + 1)) )
                goto LABEL_53;
              goto LABEL_54;
            }
LABEL_43:
            v36 = 410;
            v48 = v121;
            if ( v121 > 0 )
              sub_140001660(v119, v121, 1);
            v47 = 0;
            goto LABEL_46;
          }
        }
        else
        {
          v41 = (_BYTE *)(v38 + 17);
          if ( *(_BYTE *)(v38 + 17) )
            goto LABEL_31;
          v44 = *(_QWORD *)(v38 + 24);
          v45 = *(_QWORD *)(v38 + 32);
          *(_QWORD *)(v38 + 24) = 0;
        }
        if ( 2 * *v40 )
        {
          v124 = 1;
          v59 = v45;
          if ( !(unsigned __int8)sub_14196A710(v32, v45, v33) )
            *v41 = 1;
          v45 = v59;
        }
        goto LABEL_38;
      }
      v72 = xmmword_141A07078;
      v71 = xmmword_141A07068;
      sub_140032260(&v90);
      if ( (_QWORD)v114 )
        sub_140001660(*((_QWORD *)&v114 + 1), v114, 1);
      v34 = 637;
      v35 = &unk_141A0708D;
      v36 = 400;
      if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v115 + 1)) )
LABEL_53:
        sub_140CA3E60((char *)&v115 + 8);
LABEL_54:
      v98 = v71;
      v99 = v72;
      *(_BYTE *)(v122 + 664) = 1;
      v100 = aClose_4;
      v101 = 5;
      v102 = v36;
      v103 = v35;
      v104 = v34;
      v116 = aClose_4;
      v117 = 5;
      v115 = v99;
      v114 = v98;
      v123 = 1;
      sub_14075A190(&v71, v35, v34);
      v97 = v78;
      v96 = v77;
      v95 = v76;
      v94 = v75;
      v93 = v74;
      v92 = v73;
      v91 = v72;
      v90 = v71;
      v123 = 0;
      sub_140760B20(&v60, &v98, &v90);
      if ( (_DWORD)v60 == -1 )
      {
        v123 = 0;
        sub_140B586E0(&v82);
      }
      else
      {
        v88 = v66;
        v87 = v65;
        v86 = v64;
        v85 = v63;
        v84 = v62;
        v83 = v61;
        v82 = v60;
        v89 = v67;
        WORD4(v88) = v36;
      }
      v50 = v122;
      *(_BYTE *)(v122 + 541) = 0;
      *(_BYTE *)(v50 + 539) = 0;
      *(_WORD *)(v50 + 537) = 0;
      v51 = *(_QWORD *)(v50 + 240);
      if ( v51 )
        sub_140001660(*(_QWORD *)(v50 + 248), v51, 1);
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v50 + 264)) )
        sub_140CA3E60(v122 + 264);
      *(_OWORD *)(a1 + 112) = v89;
      *(_OWORD *)(a1 + 96) = v88;
      *(_OWORD *)(a1 + 80) = v87;
      *(_OWORD *)(a1 + 64) = v86;
      v52 = v82;
      v53 = v83;
      v54 = v84;
      *(_OWORD *)(a1 + 48) = v85;
      *(_OWORD *)(a1 + 32) = v54;
      *(_OWORD *)(a1 + 16) = v53;
      *(_OWORD *)a1 = v52;
      v43 = 1;
LABEL_62:
      *(_BYTE *)(v122 + 536) = v43;
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
          v118 = a2 + 544;
          sub_14196B990(&off_141A075A8);
        }
        v118 = a2 + 544;
        sub_14196B9B0(&off_141A075A8);
      }
      goto LABEL_22;
  }
}
