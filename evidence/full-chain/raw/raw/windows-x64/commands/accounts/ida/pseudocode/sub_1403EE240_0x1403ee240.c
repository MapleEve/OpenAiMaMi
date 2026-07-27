// module: codexmate_lib/commands/accounts
// addr: 0x1403ee240
// name: sub_1403EE240
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403EE240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v6; // xmm6
  __int64 v10; // rsi
  int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r14
  int v22; // r8d
  char v23; // al
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int32 v27; // edx
  char *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 result; // rax
  unsigned int v36; // eax
  char v37; // r14
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // r11
  char v43; // cl
  int v44; // r14d
  __int64 v45; // rdx
  unsigned int v46; // eax
  char v47; // r8
  char v48; // r14
  __int64 v49; // r11
  __int64 v50; // r10
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // r14d
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int128 v59; // xmm1
  __int128 v60; // xmm1
  _BYTE *v61; // r12
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // r14
  _OWORD v65[51]; // [rsp+30h] [rbp-50h] BYREF
  _BOOL8 v66; // [rsp+360h] [rbp+2E0h] BYREF
  char *v67; // [rsp+368h] [rbp+2E8h]
  char v68; // [rsp+370h] [rbp+2F0h]
  __int64 v69; // [rsp+598h] [rbp+518h]
  __int64 v70; // [rsp+5A0h] [rbp+520h]
  __int64 v71; // [rsp+5A8h] [rbp+528h]
  __int64 v72; // [rsp+5D0h] [rbp+550h]
  __int128 v73; // [rsp+5D8h] [rbp+558h]
  char v74; // [rsp+5E8h] [rbp+568h]
  __int64 v75; // [rsp+5F0h] [rbp+570h]
  char v76; // [rsp+5FCh] [rbp+57Ch]
  __int64 v77; // [rsp+608h] [rbp+588h]
  __int64 v78; // [rsp+610h] [rbp+590h]
  __int64 v79; // [rsp+618h] [rbp+598h] BYREF
  __int128 v80; // [rsp+620h] [rbp+5A0h]
  __int64 v81; // [rsp+630h] [rbp+5B0h]
  __int128 v82; // [rsp+638h] [rbp+5B8h]
  __int128 v83; // [rsp+648h] [rbp+5C8h]
  __int128 v84; // [rsp+658h] [rbp+5D8h]
  __int128 v85; // [rsp+668h] [rbp+5E8h]
  __int128 v86; // [rsp+678h] [rbp+5F8h]
  char v87; // [rsp+688h] [rbp+608h]
  __int64 v88; // [rsp+690h] [rbp+610h]
  __int64 v89; // [rsp+698h] [rbp+618h]
  __int64 v90; // [rsp+6A0h] [rbp+620h]
  __int64 v91; // [rsp+6A8h] [rbp+628h]
  __int64 v92; // [rsp+6B0h] [rbp+630h]
  __int64 v93; // [rsp+6B8h] [rbp+638h]
  _BYTE v94[816]; // [rsp+6C0h] [rbp+640h] BYREF
  __m256i v95; // [rsp+9F0h] [rbp+970h] BYREF
  __int64 v96; // [rsp+A10h] [rbp+990h]
  __int64 v97; // [rsp+A18h] [rbp+998h]
  __int64 v98; // [rsp+A30h] [rbp+9B0h]
  __int64 v99; // [rsp+A38h] [rbp+9B8h]
  __int128 v100; // [rsp+A40h] [rbp+9C0h]
  __int128 v101; // [rsp+A50h] [rbp+9D0h]
  __int64 v102; // [rsp+A60h] [rbp+9E0h]
  __int128 v103; // [rsp+A68h] [rbp+9E8h]
  __int128 v104; // [rsp+A78h] [rbp+9F8h]
  __int64 v105; // [rsp+A88h] [rbp+A08h]
  __int64 v106; // [rsp+A90h] [rbp+A10h]
  __int64 v107; // [rsp+A98h] [rbp+A18h]
  char v108; // [rsp+AA0h] [rbp+A20h]
  _DWORD v109[19]; // [rsp+AA1h] [rbp+A21h]
  __int128 v110; // [rsp+AF0h] [rbp+A70h]
  __int64 v111; // [rsp+B00h] [rbp+A80h]
  __int128 v112; // [rsp+B08h] [rbp+A88h]
  __int64 v113; // [rsp+B18h] [rbp+A98h]
  __int128 v114; // [rsp+B20h] [rbp+AA0h]
  __int64 v115; // [rsp+B30h] [rbp+AB0h]
  char v116; // [rsp+B42h] [rbp+AC2h]
  char v117; // [rsp+B43h] [rbp+AC3h]
  char v118; // [rsp+B44h] [rbp+AC4h]
  char v119; // [rsp+B45h] [rbp+AC5h]
  char v120; // [rsp+B46h] [rbp+AC6h]
  char v121; // [rsp+B47h] [rbp+AC7h]
  char v122; // [rsp+B48h] [rbp+AC8h]
  __int128 v123; // [rsp+D20h] [rbp+CA0h]
  __int128 v124; // [rsp+D30h] [rbp+CB0h]
  __int128 v125; // [rsp+D40h] [rbp+CC0h]
  __int128 v126; // [rsp+D50h] [rbp+CD0h]
  __int64 v127; // [rsp+D68h] [rbp+CE8h]
  __int64 v128; // [rsp+D70h] [rbp+CF0h]
  __int64 v129; // [rsp+D78h] [rbp+CF8h]
  char v130; // [rsp+D87h] [rbp+D07h]
  __int64 v131; // [rsp+D88h] [rbp+D08h]

  v131 = -2;
  v10 = a1;
  if ( dword_141EC2400 )
  {
    sub_141698091(&byte_141EC20C8);
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC20C8, 1, 0) )
      goto LABEL_3;
  }
  else
  {
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC20C8, 1, 0) )
      goto LABEL_3;
  }
  sub_1416C15B0(&byte_141EC20C8);
LABEL_3:
  if ( 2 * *off_141EC90B8 )
  {
    v11 = sub_1416C2250(a1, a2);
    LOBYTE(v11) = v11 ^ 1;
  }
  else
  {
    v11 = 0;
  }
  v12 = a6;
  v67 = &byte_141EC20C8;
  v68 = v11;
  v66 = byte_141EC20C9 != 0;
  if ( byte_141EC20C9 )
  {
    sub_14041F7C0(v65, a2);
    if ( (_BYTE)v11 )
      goto LABEL_31;
    goto LABEL_30;
  }
  LODWORD(v127) = v11;
  if ( a4 != 7 || dword_141EC20D0 == -1 || !a5 || *(_DWORD *)a3 ^ 0x6F636361 | *(_DWORD *)(a3 + 3) ^ 0x746E756F )
  {
    sub_14041F7C0(v94, a2);
    goto LABEL_27;
  }
  v17 = *(_QWORD *)(a2 + 688);
  if ( !v17 )
  {
LABEL_26:
    sub_14041F7C0(v94, &dword_141EC20D0);
    goto LABEL_27;
  }
  v18 = 352 * v17;
  v19 = *(_QWORD *)(a2 + 680) + 256LL;
  while ( *(_QWORD *)(v19 - 56) != a6 || (unsigned int)sub_1416847B0(*(_QWORD *)(v19 - 64), a5, a6) )
  {
    v19 += 352;
    v18 -= 352;
    if ( !v18 )
      goto LABEL_26;
  }
  sub_14041F7C0(&v66, &dword_141EC20D0);
  v128 = 7;
  if ( !v78 )
  {
LABEL_65:
    sub_14041F7C0(v94, &dword_141EC20D0);
    a4 = v128;
    sub_14034EBB0(&v66);
    goto LABEL_27;
  }
  v20 = v77;
  v21 = 352 * v78;
  while ( *(_QWORD *)(v20 + 200) != a6 || (unsigned int)sub_1416847B0(*(_QWORD *)(v20 + 192), a5, a6) )
  {
    v20 += 352;
    v21 -= 352;
    if ( !v21 )
      goto LABEL_65;
  }
  sub_14041FEF0(&v95);
  if ( *(_QWORD *)v19 == -1 || (sub_14149C500(v94, v19), *(_QWORD *)v94 == -1) )
  {
    if ( *(_QWORD *)(v20 + 256) == -1 )
      *(_QWORD *)v94 = -1;
    else
      sub_14149C500(v94, v20 + 256);
  }
  if ( (__int64)v110 > 0 )
    sub_140001660(*((_QWORD *)&v110 + 1), v110, 1);
  v111 = *(_QWORD *)&v94[16];
  v110 = *(_OWORD *)v94;
  if ( *(_QWORD *)(v19 + 24) == -1 || (sub_14149C500(v94, v19 + 24), *(_QWORD *)v94 == -1) )
  {
    if ( *(_QWORD *)(v20 + 280) == -1 )
      *(_QWORD *)v94 = -1;
    else
      sub_14149C500(v94, v20 + 280);
  }
  if ( (__int64)v112 > 0 )
    sub_140001660(*((_QWORD *)&v112 + 1), v112, 1);
  v113 = *(_QWORD *)&v94[16];
  v112 = *(_OWORD *)v94;
  if ( *(_QWORD *)(v19 + 48) == -1 || (sub_14149C500(v94, v19 + 48), *(_QWORD *)v94 == -1) )
  {
    if ( *(_QWORD *)(v20 + 304) == -1 )
      *(_QWORD *)v94 = -1;
    else
      sub_14149C500(v94, v20 + 304);
  }
  if ( (__int64)v114 > 0 )
    sub_140001660(*((_QWORD *)&v114 + 1), v114, 1);
  v115 = *(_QWORD *)&v94[16];
  v114 = *(_OWORD *)v94;
  v36 = *(unsigned __int8 *)(v20 + 341);
  if ( v36 > 1 )
  {
    if ( v36 == 2 )
    {
      v37 = 1;
      v22 = 3;
      LODWORD(v129) = 0;
    }
    else
    {
      LOBYTE(v36) = 1;
      LODWORD(v129) = v36;
      v37 = 0;
    }
  }
  else
  {
    v37 = 1;
    if ( *(_BYTE *)(v20 + 341) )
      v22 = 2;
    else
      v22 = 1;
    LODWORD(v129) = 0;
  }
  v38 = *(_QWORD *)(v20 + 8);
  v39 = *(_QWORD *)(v19 - 256);
  v40 = *(_QWORD *)(v19 - 248);
  v41 = *(unsigned __int8 *)(v19 + 85);
  if ( (unsigned __int8)v41 > 1u )
  {
    if ( (unsigned __int8)v41 != 2 )
    {
      if ( !(_BYTE)v129 )
        goto LABEL_113;
      v45 = *(_QWORD *)(v19 - 248);
      if ( !v39 )
        v45 = 0;
      if ( !*(_QWORD *)v20 )
        v38 = 0;
LABEL_111:
      if ( v45 < v38 )
        goto LABEL_113;
      goto LABEL_112;
    }
    v129 = *(_QWORD *)v20;
    v42 = v40;
    v43 = v37;
    v44 = 3;
  }
  else
  {
    v129 = *(_QWORD *)v20;
    v42 = v40;
    v43 = v37;
    v44 = 2;
    if ( !(_BYTE)v41 )
      v44 = 1;
  }
  if ( ((v44 != v22) & (unsigned __int8)v43) == 0 )
  {
    v40 = v42;
    v45 = v42;
    if ( !v39 )
      v45 = 0;
    if ( !v129 )
      v38 = 0;
    goto LABEL_111;
  }
  v40 = v42;
  if ( v44 > v22 )
  {
LABEL_112:
    v122 = *(_BYTE *)(v19 + 88);
    v119 = v41;
    v95.m256i_i64[0] = v39;
    v95.m256i_i64[1] = v40;
  }
LABEL_113:
  v46 = *(unsigned __int8 *)(v20 + 343);
  if ( v46 >= 2 )
  {
    if ( v46 == 2 )
    {
      v47 = 1;
      v41 = 2;
      v48 = 0;
    }
    else
    {
      v47 = 0;
      v48 = 1;
    }
  }
  else
  {
    v47 = 1;
    v41 = 1;
    v48 = 0;
  }
  v49 = *(_QWORD *)(v20 + 32);
  v50 = *(_QWORD *)(v20 + 40);
  v51 = *(_QWORD *)(v19 - 224);
  v129 = *(_QWORD *)(v19 - 216);
  v52 = *(unsigned __int8 *)(v19 + 87);
  if ( (unsigned int)v52 < 2 )
  {
    v53 = 1;
    goto LABEL_121;
  }
  LOBYTE(v54) = v48;
  v53 = *(unsigned __int8 *)(v19 + 87);
  if ( (_DWORD)v52 == 2 )
  {
LABEL_121:
    LOBYTE(v54) = v53 != v41;
    if ( ((v53 != v41) & (unsigned __int8)v47) != 0 )
    {
      if ( v53 <= v41 )
        goto LABEL_131;
      goto LABEL_130;
    }
LABEL_125:
    v54 = v129;
    if ( !v51 )
      v54 = 0;
    if ( !v49 )
      v50 = 0;
    if ( v54 < v50 )
      goto LABEL_131;
LABEL_130:
    v117 = *(_BYTE *)(v19 + 83);
    *(_OWORD *)&v95.m256i_u64[2] = *(_OWORD *)(v19 - 240);
    v118 = *(_BYTE *)(v19 + 84);
    LOBYTE(v54) = *(_BYTE *)(v19 + 86);
    v120 = v54;
    v121 = v52;
    v96 = v51;
    v97 = v129;
    goto LABEL_131;
  }
  if ( (_BYTE)v54 )
    goto LABEL_125;
LABEL_131:
  v55 = *(_QWORD *)(v19 - 96);
  if ( v55 == 2 )
  {
    v55 = *(_QWORD *)(v20 + 160);
    if ( v55 == 2 )
    {
      v55 = 2;
    }
    else
    {
      LOBYTE(v54) = *(_BYTE *)(v20 + 176);
      v52 = *(_QWORD *)(v20 + 168);
    }
  }
  else
  {
    LOBYTE(v54) = *(_BYTE *)(v19 - 80);
    v52 = *(_QWORD *)(v19 - 88);
    *(_DWORD *)&v94[3] = *(_DWORD *)(v19 - 76);
    *(_DWORD *)v94 = *(_DWORD *)(v19 - 79);
  }
  v106 = v55;
  v107 = v52;
  v108 = v54;
  v109[0] = *(_DWORD *)v94;
  *(_DWORD *)((char *)v109 + 3) = *(_DWORD *)&v94[3];
  v56 = *(_QWORD *)(v19 - 184);
  v57 = v56;
  if ( !*(_QWORD *)(v19 - 192) )
    v57 = 0;
  if ( *(_BYTE *)(v20 + 64) )
    v58 = *(_QWORD *)(v20 + 72);
  else
    v58 = 0;
  if ( v57 >= v58 )
  {
    v98 = *(_QWORD *)(v19 - 192);
    v99 = v56;
    v116 = *(_BYTE *)(v19 + 82);
    v59 = *(_OWORD *)(v19 - 160);
    v100 = *(_OWORD *)(v19 - 176);
    v101 = v59;
    v102 = *(_QWORD *)(v19 - 144);
    v60 = *(_OWORD *)(v19 - 120);
    v103 = *(_OWORD *)(v19 - 136);
    v104 = v60;
    v105 = *(_QWORD *)(v19 - 104);
  }
  v61 = v94;
  sub_141684120(v94, &v95, 352);
  sub_14034EA30((_QWORD *)v20);
  sub_141684120(v20, v94, 352);
  if ( v69 != -1 && v71 == a6 && !(unsigned int)sub_1416847B0(v70, a5, a6) )
  {
    sub_14041FEF0(&v95);
    sub_141684120(v94, &v95, 352);
    if ( v66 != 2 )
      sub_14034EA30(&v66);
    sub_141684120(&v66, v94, 352);
    v76 = *(_BYTE *)(a2 + 668);
    LOBYTE(v61) = *(_BYTE *)(a2 + 648);
    if ( *(_QWORD *)(a2 + 624) == -1 )
    {
      v62 = -1;
    }
    else
    {
      sub_14149C500(&v95, a2 + 624);
      v62 = v95.m256i_i64[0];
      v123 = *(_OWORD *)&v95.m256i_u64[1];
    }
    if ( v72 > 0 )
      sub_140001660(v73, v72, 1);
    v72 = v62;
    v73 = v123;
    v74 = (char)v61;
  }
  v63 = v75;
  if ( *(_QWORD *)(a2 + 656) > v75 )
    v63 = *(_QWORD *)(a2 + 656);
  v75 = v63;
  if ( *(_QWORD *)(a2 + 696) == -1 )
  {
    v64 = -1;
  }
  else
  {
    sub_14149C500(v94, a2 + 696);
    LOBYTE(v61) = *(_BYTE *)(a2 + 808);
    if ( *(_QWORD *)(a2 + 720) == -1 )
    {
      v20 = -1;
    }
    else
    {
      sub_14149C500(&v95, a2 + 720);
      v20 = v95.m256i_i64[0];
      v65[0] = *(_OWORD *)&v95.m256i_u64[1];
    }
    v6 = *(_OWORD *)(a2 + 792);
    v124 = *(_OWORD *)(a2 + 744);
    v125 = *(_OWORD *)(a2 + 760);
    v126 = *(_OWORD *)(a2 + 776);
    v64 = *(_QWORD *)v94;
    *(_OWORD *)v95.m256i_i8 = *(_OWORD *)&v94[8];
  }
  sub_140348880(&v79);
  v79 = v64;
  v80 = *(_OWORD *)v95.m256i_i8;
  v81 = v20;
  v82 = v65[0];
  v83 = v124;
  v84 = v125;
  v85 = v126;
  v86 = v6;
  v87 = (char)v61;
  sub_141684120(v94, &v66, 816);
  a4 = v128;
LABEL_27:
  sub_14041F7C0(&v66, v94);
  sub_141684120(&v95, &v66, 816);
  if ( dword_141EC20D0 != -1 )
    sub_14034EBB0(&dword_141EC20D0);
  sub_141684120(&dword_141EC20D0, &v95, 816);
  sub_141684120(v65, v94, 816);
  if ( !(_BYTE)v127 )
  {
LABEL_30:
    if ( 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v14, v13) )
      byte_141EC20C9 = 1;
  }
LABEL_31:
  v23 = byte_141EC20C8;
  byte_141EC20C8 = 0;
  if ( v23 == 2 )
  {
    WakeByAddressSingle(&byte_141EC20C8);
    v24 = a4 - 4;
    if ( (unsigned __int64)(a4 - 4) > 7 )
      goto LABEL_47;
  }
  else
  {
    v24 = a4 - 4;
  }
  switch ( v24 )
  {
    case 0LL:
      if ( *(_DWORD *)a3 == 1819047270 )
        goto LABEL_43;
      break;
    case 1LL:
      v26 = *(_DWORD *)a3 ^ 0x67617375;
      v14 = v26 | *(unsigned __int8 *)(a3 + 4) ^ 0x65u;
      if ( !(v26 | *(unsigned __int8 *)(a3 + 4) ^ 0x65) )
        goto LABEL_43;
      break;
    case 3LL:
      v25 = *(_DWORD *)a3 ^ 0x6F636361;
      v14 = v25 | *(_DWORD *)(a3 + 3) ^ 0x746E756Fu;
      if ( !(v25 | *(_DWORD *)(a3 + 3) ^ 0x746E756F) )
        goto LABEL_43;
      break;
    case 4LL:
      if ( *(_QWORD *)a3 == 0x6E6F69746174756DLL )
        goto LABEL_43;
      break;
    case 7LL:
      v14 = *(_QWORD *)a3 ^ 0x73736572676F7270LL | *(_QWORD *)(a3 + 3) ^ 0x6576697373657267LL;
      if ( !v14 )
      {
LABEL_43:
        v130 = 1;
        v95.m256i_i32[0] = sub_141475580(v14, v13, v15, v16);
        v95.m256i_i32[1] = v27;
        v130 = 1;
        sub_141475530(&v66, &v95, 3577643008LL, 27111902);
        if ( v66 )
          v28 = nullptr;
        else
          v28 = v67;
        v130 = 1;
        sub_1403D4D10(v28);
      }
      break;
    default:
      break;
  }
LABEL_47:
  v130 = 1;
  sub_1403F5C00(v10, v65);
  sub_141684120(&v95, v65, 816);
  if ( a4 < 0 )
  {
    v30 = 0;
    goto LABEL_49;
  }
  if ( a4 )
  {
    nullsub_1(v29);
    v30 = 1;
    v31 = sub_140001650(a4, 1);
    if ( !v31 )
LABEL_49:
      sub_1416C2D4B(v30, a4);
    v32 = v31;
    sub_141684120(v31, a3, a4);
    v128 = a4;
    if ( a5 )
      goto LABEL_53;
LABEL_57:
    v12 = -1;
    goto LABEL_62;
  }
  v32 = 1;
  v128 = 0;
  if ( !a5 )
    goto LABEL_57;
LABEL_53:
  if ( a6 < 0 )
  {
    v33 = 0;
    goto LABEL_55;
  }
  if ( a6 )
  {
    nullsub_1(v29);
    v33 = 1;
    v34 = sub_140001650(a6, 1);
    if ( !v34 )
    {
LABEL_55:
      v127 = v32;
      sub_1416C2D4B(v33, a6);
    }
    a3 = v34;
    sub_141684120(v34, a5, a6);
  }
  else
  {
    a3 = 1;
    v12 = 0;
  }
LABEL_62:
  sub_141684120(&v66, v65, 816);
  v88 = v128;
  v89 = v32;
  v90 = v128;
  v91 = v12;
  v92 = a3;
  v93 = v12;
  v130 = 0;
  result = sub_140063CB0((unsigned int)&v95, v10, (unsigned int)aRuntimeStateUp, 21, (__int64)&v66);
  if ( v95.m256i_i64[0] != -1 )
  {
    v130 = 0;
    return sub_14034D070(&v95);
  }
  return result;
}