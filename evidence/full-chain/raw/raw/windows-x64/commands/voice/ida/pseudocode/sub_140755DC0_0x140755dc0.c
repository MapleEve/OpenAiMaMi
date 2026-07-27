// module: codexmate_lib/commands/voice
// addr: 0x140755dc0
// name: sub_140755DC0
// win 1.2.1 | module src/commands/voice.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140755DC0(__int64 a1, _QWORD *a2, __int128 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  char v16; // r9
  char v17; // r10
  char v18; // r11
  __int64 v19; // rdx
  int v20; // r10d
  int v21; // r9d
  __int128 v22; // rax
  __int64 v23; // r15
  __int128 v24; // xmm0
  _QWORD *v25; // rbx
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // rax
  __int64 v37; // r15
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int128 v41; // xmm0
  char v42; // di
  __int128 v43; // xmm0
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int128 v49; // [rsp+50h] [rbp-30h] BYREF
  __int128 v50; // [rsp+60h] [rbp-20h]
  __int128 v51; // [rsp+70h] [rbp-10h]
  __int128 v52; // [rsp+80h] [rbp+0h]
  __int128 v53; // [rsp+90h] [rbp+10h]
  __int128 v54; // [rsp+A0h] [rbp+20h]
  __int64 v55; // [rsp+B0h] [rbp+30h]
  __int16 v56; // [rsp+119h] [rbp+99h]
  __int64 v57; // [rsp+3E0h] [rbp+360h]
  int v58; // [rsp+3E8h] [rbp+368h]
  __int128 v59; // [rsp+2C00h] [rbp+2B80h] BYREF
  __int64 v60; // [rsp+2C10h] [rbp+2B90h]
  _BYTE v61[24]; // [rsp+2D48h] [rbp+2CC8h] BYREF
  _BYTE v62[24]; // [rsp+2D60h] [rbp+2CE0h] BYREF
  _BYTE v63[24]; // [rsp+2D78h] [rbp+2CF8h]
  __int128 v64; // [rsp+2D90h] [rbp+2D10h]
  __int128 v65; // [rsp+2DA0h] [rbp+2D20h]
  _DWORD *v66; // [rsp+2DB0h] [rbp+2D30h]
  __int64 v67; // [rsp+2DB8h] [rbp+2D38h]
  int v68; // [rsp+2DC0h] [rbp+2D40h]
  _BYTE v69[24]; // [rsp+3100h] [rbp+3080h] BYREF
  __int64 v70; // [rsp+3118h] [rbp+3098h]
  char v71[144]; // [rsp+3120h] [rbp+30A0h] BYREF
  _BYTE v72[24]; // [rsp+31B0h] [rbp+3130h] BYREF
  __int64 v73; // [rsp+31C8h] [rbp+3148h]
  char v74[72]; // [rsp+31D0h] [rbp+3150h] BYREF
  int v75; // [rsp+3218h] [rbp+3198h]
  _BYTE v76[24]; // [rsp+3260h] [rbp+31E0h] BYREF
  __int64 v77; // [rsp+3278h] [rbp+31F8h]
  __int128 v78; // [rsp+3280h] [rbp+3200h]
  __int128 v79; // [rsp+3290h] [rbp+3210h]
  __int128 v80; // [rsp+32A0h] [rbp+3220h]
  __int128 v81; // [rsp+33A8h] [rbp+3328h] BYREF
  __int64 v82; // [rsp+33B8h] [rbp+3338h]
  __int128 v83; // [rsp+33C0h] [rbp+3340h]
  __int64 v84; // [rsp+33D0h] [rbp+3350h]
  __int128 v85; // [rsp+33E0h] [rbp+3360h]
  __int64 v86; // [rsp+33F0h] [rbp+3370h]
  __int128 v87; // [rsp+3400h] [rbp+3380h]
  __int64 v88; // [rsp+3410h] [rbp+3390h]
  __int128 v89; // [rsp+3420h] [rbp+33A0h] BYREF
  __int64 v90; // [rsp+3430h] [rbp+33B0h]
  __int64 v91; // [rsp+3438h] [rbp+33B8h]
  __int128 v92; // [rsp+3440h] [rbp+33C0h] BYREF
  __int64 v93; // [rsp+3450h] [rbp+33D0h]
  __int128 v94; // [rsp+3460h] [rbp+33E0h] BYREF
  __int64 v95; // [rsp+3470h] [rbp+33F0h]
  __int128 v96; // [rsp+3478h] [rbp+33F8h] BYREF
  __int64 v97; // [rsp+3488h] [rbp+3408h]
  __int128 v98; // [rsp+3490h] [rbp+3410h] BYREF
  __int64 v99; // [rsp+34A0h] [rbp+3420h]
  __int128 v100; // [rsp+34A8h] [rbp+3428h] BYREF
  __int64 v101; // [rsp+34B8h] [rbp+3438h]
  __int64 v102; // [rsp+34C8h] [rbp+3448h] BYREF
  __int64 v103; // [rsp+34D0h] [rbp+3450h] BYREF
  __int64 v104; // [rsp+34D8h] [rbp+3458h]
  __int64 v105; // [rsp+34E0h] [rbp+3460h]
  __int64 v106; // [rsp+34E8h] [rbp+3468h]
  __int128 *v107; // [rsp+34F0h] [rbp+3470h]
  _QWORD *v108; // [rsp+34F8h] [rbp+3478h]
  __int64 v109; // [rsp+3500h] [rbp+3480h]
  _QWORD *v110; // [rsp+3508h] [rbp+3488h]
  char v111; // [rsp+3517h] [rbp+3497h]
  char v112; // [rsp+3518h] [rbp+3498h]
  char v113; // [rsp+3519h] [rbp+3499h]
  char v114; // [rsp+351Ah] [rbp+349Ah]
  char v115; // [rsp+351Bh] [rbp+349Bh]
  char v116; // [rsp+351Ch] [rbp+349Ch]
  char v117; // [rsp+351Dh] [rbp+349Dh]
  char v118; // [rsp+351Eh] [rbp+349Eh]
  char v119; // [rsp+351Fh] [rbp+349Fh]
  __int64 v120; // [rsp+3520h] [rbp+34A0h]

  v120 = -2;
  v108 = a4;
  v107 = a3;
  v7 = a2[1];
  v110 = a2;
  v8 = a2[2];
  v111 = 1;
  v91 = v7;
  sub_140A56620(&v103, v7, v8);
  v9 = v105;
  if ( v105 != 11 || (v10 = v104, *(_QWORD *)v104 ^ 0x657053656C707061LL | *(_QWORD *)(v104 + 3) ^ 0x686365657053656CLL) )
  {
    v113 = 1;
    sub_14149C500(&v49, &v103);
    v97 = *((_QWORD *)v107 + 2);
    v96 = *v107;
    v98 = *(_OWORD *)v108;
    v99 = v108[2];
    v101 = a5[2];
    v100 = *(_OWORD *)a5;
    v94 = v49;
    v95 = v50;
    v119 = 1;
    if ( (unsigned __int8)sub_14099C600(&v94) )
    {
      if ( v9 == 12 && !(*(_QWORD *)v104 ^ 0x75466E7579696C61LL | *(unsigned int *)(v104 + 8) ^ 0x7273416ELL) )
      {
        v119 = 1;
        sub_1412F4EE0(&v49);
        v56 = 257;
        sub_1412F50B0(v62, &v49);
        if ( *(_QWORD *)v62 == 2 )
        {
          *(_QWORD *)&v89 = *(_QWORD *)&v62[8];
          *(_QWORD *)v72 = &v89;
          *(_QWORD *)&v72[8] = sub_141490720;
          sub_14149C0F0(v76, &unk_1417889D9, v72);
          sub_1401DD260(v89);
          v41 = *(_OWORD *)v76;
          *(_OWORD *)v69 = *(_OWORD *)v76;
          *(_QWORD *)&v69[16] = *(_QWORD *)&v76[16];
          *(_QWORD *)(a1 + 24) = *(_QWORD *)&v76[16];
          *(_OWORD *)(a1 + 8) = v41;
          *(_QWORD *)a1 = -1;
          v119 = 1;
          sub_140016A00(&v49);
          v42 = 1;
        }
        else
        {
          v60 = *(_QWORD *)v63;
          v78 = *(_OWORD *)&v63[8];
          v79 = v64;
          v80 = v65;
          *(_OWORD *)v69 = *(_OWORD *)&v62[8];
          *(_QWORD *)&v69[16] = *(_QWORD *)v63;
          *(_OWORD *)&v76[8] = *(_OWORD *)&v62[8];
          v77 = *(_QWORD *)v63;
          *(_QWORD *)v76 = *(_QWORD *)v62;
          v114 = 1;
          sub_140016A00(&v49);
          v114 = 1;
          sub_14149C500(v69, &v100);
          sub_14149C500(&v59, &v96);
          sub_14149C500(&v49, &v98);
          nullsub_1(v44);
          v45 = (_DWORD *)sub_140001650(4, 1);
          if ( !v45 )
            sub_1416C2D4B(1, 4);
          *v45 = 1869903201;
          *(_QWORD *)&v62[16] = *(_QWORD *)&v69[16];
          *(_OWORD *)v62 = *(_OWORD *)v69;
          *(_OWORD *)v63 = v59;
          *(_QWORD *)&v63[16] = v60;
          v64 = v49;
          *(_QWORD *)&v65 = v50;
          *((_QWORD *)&v65 + 1) = 4;
          v66 = v45;
          v67 = 4;
          v68 = 16000;
          *(_QWORD *)&v49 = v62;
          BYTE8(v49) = 0;
          sub_14058C430((__int64 *)v72, (__int64)v76, (__int64)&v49, (__int64)&off_14178B3A8);
          if ( *(_QWORD *)v72 == -1 )
          {
            sub_1402C6460(v62);
            *(_QWORD *)&v62[16] = v108[2];
            *(_OWORD *)v62 = *(_OWORD *)v108;
            v114 = 0;
            sub_140ACDB60(&v49, v62);
            *(_QWORD *)(a1 + 96) = v55;
            *(_OWORD *)(a1 + 80) = v54;
            *(_OWORD *)(a1 + 64) = v53;
            v46 = v49;
            v47 = v50;
            v48 = v51;
            *(_OWORD *)(a1 + 48) = v52;
            *(_OWORD *)(a1 + 32) = v48;
            *(_OWORD *)(a1 + 16) = v47;
            *(_OWORD *)a1 = v46;
            v42 = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 24) = *(_QWORD *)&v72[16];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v72;
            *(_QWORD *)a1 = -1;
            if ( *(_QWORD *)v62 )
              sub_140001660(*(_QWORD *)&v62[8], *(_QWORD *)v62, 1);
            if ( *(_QWORD *)v63 )
              sub_140001660(*(_QWORD *)&v63[8], *(_QWORD *)v63, 1);
            if ( (_QWORD)v64 )
              sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
            if ( *((_QWORD *)&v65 + 1) )
              sub_140001660(v66, *((_QWORD *)&v65 + 1), 1);
            v42 = 1;
          }
          v119 = v42;
          sub_140016C90(v76);
        }
        if ( (_QWORD)v94 )
          sub_140001660(*((_QWORD *)&v94 + 1), v94, 1);
        v25 = v110;
        if ( (_QWORD)v96 )
          sub_140001660(*((_QWORD *)&v96 + 1), v96, 1);
        if ( v42 )
          goto LABEL_27;
LABEL_30:
        if ( (_QWORD)v100 )
          sub_140001660(*((_QWORD *)&v100 + 1), v100, 1);
        v29 = v103;
        if ( v103 )
        {
          v30 = v104;
LABEL_34:
          sub_140001660(v30, v29, 1);
          goto LABEL_35;
        }
        goto LABEL_35;
      }
      v12 = v101;
      while ( 1 )
      {
        v13 = v12;
        if ( !v12 )
          break;
        v14 = *((_QWORD *)&v100 + 1) + v12;
        v15 = *(char *)(*((_QWORD *)&v100 + 1) + v13 - 1);
        if ( v15 >= 0 )
        {
          v12 = v14 - 1 - *((_QWORD *)&v100 + 1);
          if ( v15 != 47 )
            break;
        }
        else
        {
          v16 = *(_BYTE *)(v14 - 2);
          if ( v16 >= -64 )
          {
            v19 = v14 - 2;
            v21 = v16 & 0x1F;
          }
          else
          {
            v17 = *(_BYTE *)(v14 - 3);
            if ( v17 >= -64 )
            {
              v19 = v14 - 3;
              v20 = v17 & 0xF;
            }
            else
            {
              v18 = *(_BYTE *)(v14 - 4);
              v19 = v14 - 4;
              v20 = ((v18 & 7) << 6) | v17 & 0x3F;
            }
            v21 = (v20 << 6) | v16 & 0x3F;
          }
          v12 = v19 - *((_QWORD *)&v100 + 1);
          if ( ((v21 << 6) | v15 & 0x3F) != 0x2F )
            break;
        }
      }
      *(_QWORD *)&v59 = *((_QWORD *)&v100 + 1);
      *((_QWORD *)&v59 + 1) = v13;
      v119 = 1;
      *(_QWORD *)&v22 = sub_14033BC10(*((_QWORD *)&v98 + 1), v99);
      *(_OWORD *)v76 = v22;
      *(_QWORD *)&v49 = &v59;
      *((_QWORD *)&v49 + 1) = sub_14041F680;
      *(_QWORD *)&v50 = v76;
      *((_QWORD *)&v50 + 1) = sub_14041F680;
      v119 = 1;
      sub_14149C0F0(v62, &unk_14178B36A, &v49);
      v106 = *(_QWORD *)&v62[8];
      v109 = *(_QWORD *)v62;
      v23 = *(_QWORD *)&v62[16];
      v118 = 1;
      v117 = 1;
      sub_141069E60(&v49);
      v57 = 15;
      v58 = 0;
      sub_141684120(v62, &v49, 928);
      v118 = 1;
      v117 = 1;
      sub_141068AB0(&v89, v62);
      if ( (_DWORD)v90 == -2 )
      {
        v102 = v89;
        *(_QWORD *)v62 = &v102;
        *(_QWORD *)&v62[8] = sub_141031F10;
        sub_14149C0F0(&v49, &unk_141788A0B, v62);
        v118 = 1;
        v117 = 1;
        sub_1406CB7B0(v102);
        v24 = v49;
        v83 = v49;
        v84 = v50;
        *(_QWORD *)(a1 + 24) = v50;
        *(_OWORD *)(a1 + 8) = v24;
        *(_QWORD *)a1 = -1;
        v25 = v110;
        if ( v109 )
          sub_140001660(v106, v109, 1);
        goto LABEL_23;
      }
      v83 = v89;
      v84 = v90;
      v92 = v89;
      v93 = v90;
      *(_QWORD *)v62 = v109;
      *(_QWORD *)&v62[8] = v106;
      *(_QWORD *)&v62[16] = v23;
      *(_QWORD *)&v50 = 0x101010101010101LL;
      v49 = xmmword_141786340;
      sub_14097EC10(v76, &v92, &v49, v62);
      v112 = 1;
      *(_QWORD *)&v36 = sub_14033BC10(*((_QWORD *)&v96 + 1), v97);
      *(_OWORD *)v62 = v36;
      *(_QWORD *)&v49 = v62;
      *((_QWORD *)&v49 + 1) = sub_14041F680;
      v112 = 1;
      sub_14149C0F0(v61, &unk_141786D00, &v49);
      v112 = 0;
      sub_1406C7390((unsigned int)&v59, (unsigned int)v76, (unsigned int)aAuthorization_1, 13, (__int64)v61, 0);
      sub_14103CF70(v69, &v59);
      v37 = *(_QWORD *)v69;
      if ( *(_QWORD *)v69 == -1 )
      {
        *(_QWORD *)v76 = *(_QWORD *)&v69[8];
        *(_QWORD *)v62 = v76;
        *(_QWORD *)&v62[8] = sub_141031F10;
        sub_14149C0F0(&v49, &unk_1417889F4, v62);
        sub_1406CB7B0(*(_QWORD *)v76);
        v43 = v49;
        v87 = v49;
        v88 = v50;
        *(_QWORD *)(a1 + 24) = v50;
        *(_OWORD *)(a1 + 8) = v43;
        *(_QWORD *)a1 = -1;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v92) )
        {
          v118 = 1;
          v117 = 0;
          sub_141018DA0(&v92);
        }
      }
      else
      {
        v86 = v70;
        v85 = *(_OWORD *)&v69[8];
        sub_141684120(v74, v71, 144);
        v88 = v86;
        v87 = v85;
        *(_OWORD *)&v72[8] = v85;
        v73 = v86;
        *(_QWORD *)v72 = v37;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v92) )
        {
          v116 = 1;
          v115 = 1;
          sub_141018DA0(&v92);
        }
        if ( (unsigned __int16)(v75 - 200) < 0x64u )
        {
          *(_QWORD *)&v62[16] = v99;
          *(_OWORD *)v62 = v98;
          v116 = 1;
          v115 = 0;
          sub_140ACDB60(&v49, v62);
          *(_QWORD *)(a1 + 96) = v55;
          *(_OWORD *)(a1 + 80) = v54;
          *(_OWORD *)(a1 + 64) = v53;
          v38 = v49;
          v39 = v50;
          v40 = v51;
          *(_OWORD *)(a1 + 48) = v52;
          *(_OWORD *)(a1 + 32) = v40;
          *(_OWORD *)(a1 + 16) = v39;
          *(_OWORD *)a1 = v38;
          v118 = 0;
          v117 = 0;
          sub_1406CCBE0(v72);
          v25 = v110;
          if ( (_QWORD)v94 )
            sub_140001660(*((_QWORD *)&v94 + 1), v94, 1);
          v27 = v96;
          if ( (_QWORD)v96 )
          {
            v28 = *((_QWORD *)&v96 + 1);
LABEL_29:
            sub_140001660(v28, v27, 1);
            goto LABEL_30;
          }
          goto LABEL_30;
        }
        LOWORD(v59) = v75;
        sub_141684120(&v49, v72, 176);
        v116 = 0;
        v115 = 1;
        sub_14101E160(v62, &v49);
        if ( *(_QWORD *)v62 == -1 )
        {
          *(_QWORD *)v76 = 0;
          *(_QWORD *)&v76[8] = 1;
          *(_QWORD *)&v76[16] = 0;
          v116 = 0;
          v115 = 1;
          sub_1406CB7B0(*(_QWORD *)&v62[8]);
        }
        else
        {
          *(_QWORD *)&v76[16] = *(_QWORD *)&v62[16];
          *(_OWORD *)v76 = *(_OWORD *)v62;
        }
        *(_QWORD *)&v49 = &v59;
        *((_QWORD *)&v49 + 1) = sub_14143ED80;
        *(_QWORD *)&v50 = v76;
        *((_QWORD *)&v50 + 1) = sub_1400015F0;
        sub_14149C0F0(&v81, &unk_14178B376, &v49);
        *(_QWORD *)(a1 + 24) = v82;
        *(_OWORD *)(a1 + 8) = v81;
        *(_QWORD *)a1 = -1;
        if ( *(_QWORD *)v76 )
          sub_140001660(*(_QWORD *)&v76[8], *(_QWORD *)v76, 1);
      }
    }
    else
    {
      nullsub_1(v11);
      v26 = (void *)sub_140001650(24, 1);
      if ( !v26 )
      {
        v119 = 1;
        sub_1416C2D4B(1, 24);
      }
      qmemcpy(v26, "ASR config is incomplete", 24);
      *(_QWORD *)(a1 + 8) = 24;
      *(_QWORD *)(a1 + 16) = v26;
      *(_QWORD *)(a1 + 24) = 24;
      *(_QWORD *)a1 = -1;
    }
    v25 = v110;
LABEL_23:
    if ( (_QWORD)v94 )
      sub_140001660(*((_QWORD *)&v94 + 1), v94, 1);
    if ( (_QWORD)v96 )
      sub_140001660(*((_QWORD *)&v96 + 1), v96, 1);
LABEL_27:
    v27 = v98;
    if ( !(_QWORD)v98 )
      goto LABEL_30;
    v28 = *((_QWORD *)&v98 + 1);
    goto LABEL_29;
  }
  nullsub_1(0);
  v32 = (void *)sub_140001650(12, 1);
  if ( !v32 )
  {
    v113 = 1;
    sub_1416C2D4B(1, 12);
  }
  qmemcpy(v32, "Apple Speech", 12);
  *(_QWORD *)v62 = 12;
  *(_QWORD *)&v62[8] = v32;
  *(_QWORD *)&v62[16] = 12;
  v113 = 1;
  sub_140ACDB60(&v49, v62);
  *(_QWORD *)(a1 + 96) = v55;
  *(_OWORD *)(a1 + 80) = v54;
  *(_OWORD *)(a1 + 64) = v53;
  v33 = v49;
  v34 = v50;
  v35 = v51;
  *(_OWORD *)(a1 + 48) = v52;
  *(_OWORD *)(a1 + 32) = v35;
  *(_OWORD *)(a1 + 16) = v34;
  *(_OWORD *)a1 = v33;
  if ( v103 )
    sub_140001660(v10, v103, 1);
  v25 = v110;
  if ( *a5 )
    sub_140001660(a5[1], *a5, 1);
  if ( *v108 )
    sub_140001660(v108[1], *v108, 1);
  v29 = *(_QWORD *)v107;
  if ( *(_QWORD *)v107 )
  {
    v30 = *((_QWORD *)v107 + 1);
    goto LABEL_34;
  }
LABEL_35:
  if ( *v25 )
    sub_140001660(v91, *v25, 1);
  return a1;
}