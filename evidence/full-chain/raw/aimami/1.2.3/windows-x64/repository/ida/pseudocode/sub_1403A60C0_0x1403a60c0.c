// module: codexmate_lib/core/repository
// addr: 0x1403a60c0
// name: sub_1403A60C0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403A60C0(__int64 a1, __int128 *a2, __int64 a3, char a4, __int64 a5)
{
  _DWORD *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  int v20; // r15d
  int v21; // edx
  __int64 v22; // r15
  int v23; // edx
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // r13
  __int64 v27; // rcx
  int v28; // eax
  char v29; // r12
  __int64 v30; // r15
  char v31; // r10
  __int128 v32; // xmm2
  char v33; // r11
  __int64 v34; // r8
  char v35; // r9
  char v36; // dl
  __int128 v37; // xmm1
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int64 result; // rax
  __int64 v41; // rbx
  __int64 v42; // r14
  __int128 v43; // [rsp+20h] [rbp-60h]
  __int128 v44; // [rsp+30h] [rbp-50h]
  __int128 v45; // [rsp+40h] [rbp-40h]
  __int128 v46; // [rsp+58h] [rbp-28h] BYREF
  __int64 v47; // [rsp+68h] [rbp-18h]
  __int128 v48; // [rsp+70h] [rbp-10h] BYREF
  __int64 v49; // [rsp+80h] [rbp+0h]
  __int64 v50; // [rsp+88h] [rbp+8h]
  __int128 v51; // [rsp+90h] [rbp+10h] BYREF
  __int64 v52; // [rsp+A0h] [rbp+20h]
  __int128 v53; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v54; // [rsp+C0h] [rbp+40h]
  __int64 v55; // [rsp+C8h] [rbp+48h]
  __int64 v56; // [rsp+D0h] [rbp+50h]
  __int64 v57; // [rsp+D8h] [rbp+58h]
  __int64 v58; // [rsp+E0h] [rbp+60h]
  __int64 v59; // [rsp+E8h] [rbp+68h]
  __int64 v60; // [rsp+F0h] [rbp+70h]
  __int64 v61; // [rsp+F8h] [rbp+78h]
  __int64 v62; // [rsp+100h] [rbp+80h]
  int v63; // [rsp+10Ch] [rbp+8Ch]
  int v64; // [rsp+110h] [rbp+90h]
  int v65; // [rsp+114h] [rbp+94h]
  __int128 v66; // [rsp+118h] [rbp+98h] BYREF
  __int64 v67; // [rsp+128h] [rbp+A8h]
  int v68; // [rsp+134h] [rbp+B4h]
  __int64 v69; // [rsp+138h] [rbp+B8h]
  __int128 v70; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v71; // [rsp+150h] [rbp+D0h]
  char v72; // [rsp+15Eh] [rbp+DEh]
  char v73; // [rsp+15Fh] [rbp+DFh]
  __int64 v74; // [rsp+160h] [rbp+E0h]

  v74 = -2;
  v9 = *((_DWORD **)a2 + 37);
  v10 = *((_QWORD *)a2 + 38);
  sub_14033BC10(v9, v10);
  v72 = a4;
  if ( v11 && (v10 != 7 || *v9 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v9 + 3) ^ 0x6E776F6E) )
  {
    sub_14149C500(&v51, a2 + 18);
  }
  else
  {
    *(_QWORD *)&v66 = a3 + 146;
    *((_QWORD *)&v66 + 1) = sub_140420DF0;
    sub_14149C0F0(&v70, &unk_14174CCE6, &v66);
    v69 = *((_QWORD *)&v70 + 1);
    sub_14149A6B0(&v66, *((_QWORD *)&v70 + 1), v71);
    if ( (_QWORD)v70 )
      sub_140001660(v69, v70, 1);
    v51 = v66;
    v52 = v67;
  }
  v59 = *((_QWORD *)&v51 + 1);
  v73 = sub_1409DA470(*((_QWORD *)&v51 + 1), v52);
  v15 = (__int64 *)(a5 + 144);
  if ( !a5 )
    v15 = (__int64 *)a2 + 13;
  v16 = 1;
  if ( !a5 )
    v16 = *((_QWORD *)a2 + 12);
  v55 = v16;
  v17 = *v15;
  v56 = v17;
  if ( !a5 )
  {
    v22 = 2;
    v63 = 0;
    v69 = v17;
    v57 = 2;
    goto LABEL_29;
  }
  v18 = *(unsigned __int8 *)(a5 + 152);
  v63 = *(unsigned __int8 *)(a5 + 152);
  v19 = *(_QWORD *)(a5 + 16);
  if ( v19 == 2 )
    goto LABEL_19;
  v60 = *(_QWORD *)(a5 + 24);
  v20 = *(_DWORD *)(a5 + 32);
  v69 = *(unsigned int *)(a5 + 36);
  LODWORD(v66) = sub_141475580(v16, v12, v13, v14);
  DWORD1(v66) = v21;
  sub_141475530(&v70, &v66, 3577643008LL, 27111902);
  v18 = (unsigned int)(v69 - 1);
  LOBYTE(v18) = v20 & ((unsigned int)v18 < 0x168);
  if ( (_BYTE)v18 != 1 )
    goto LABEL_19;
  v18 = 0;
  if ( !(_QWORD)v70 )
    v18 = *((_QWORD *)&v70 + 1);
  if ( v19 == 1 && v60 <= v18 )
  {
LABEL_19:
    v69 = v18;
    v22 = *(_QWORD *)(a5 + 56);
    v57 = 2;
    if ( v22 != 2 )
    {
LABEL_20:
      v61 = *(_QWORD *)(a5 + 64);
      v65 = *(_DWORD *)(a5 + 72);
      v64 = *(_DWORD *)(a5 + 76);
      LODWORD(v66) = sub_141475580(v16, v12, v13, v14);
      DWORD1(v66) = v23;
      sub_141475530(&v70, &v66, 3577643008LL, 27111902);
      if ( ((v64 < 8640) & (unsigned __int8)v65) == 0 )
      {
        v24 = 0;
        if ( !(_QWORD)v70 )
          v24 = *((_QWORD *)&v70 + 1);
        if ( v22 != 1 || v61 > v24 )
        {
          v44 = *(_OWORD *)(a5 + 80);
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    v45 = *(_OWORD *)(a5 + 40);
    v22 = *(_QWORD *)(a5 + 56);
    v57 = v19;
    if ( v22 != 2 )
      goto LABEL_20;
  }
  v22 = 2;
LABEL_29:
  LODWORD(v66) = sub_141475580(v16, v12, v13, v14);
  DWORD1(v66) = v25;
  sub_141475530(&v70, &v66, 3577643008LL, 27111902);
  v26 = *((_QWORD *)a2 + 2);
  if ( v26 != 1 )
  {
    v28 = *((unsigned __int8 *)a2 + 416);
    v29 = 2;
    if ( (_BYTE)v28 != 2 )
    {
      v29 = (_BYTE)v28 == 0;
      LOBYTE(v28) = (_BYTE)v28 != 0;
LABEL_41:
      v68 = v28;
      goto LABEL_42;
    }
LABEL_40:
    LOBYTE(v28) = 2;
    goto LABEL_41;
  }
  v27 = 0;
  if ( !(_QWORD)v70 )
    v27 = *((_QWORD *)&v70 + 1);
  v28 = *((unsigned __int8 *)a2 + 416);
  if ( *((_QWORD *)a2 + 3) <= v27 )
  {
    v29 = 3;
    if ( !(_BYTE)v28 )
    {
      v29 = 1;
      v68 = 0;
      goto LABEL_42;
    }
    goto LABEL_40;
  }
  if ( !(_BYTE)v28 )
  {
    v29 = 3;
    goto LABEL_40;
  }
  LOBYTE(v28) = 1;
  v68 = v28;
  v29 = 0;
LABEL_42:
  sub_14149C500(&v48, a2 + 12);
  v50 = v22;
  sub_14149C500(&v70, a3 + 40);
  v58 = *((_QWORD *)&v70 + 1);
  v62 = v70;
  v30 = v71;
  sub_14149C500(&v46, (char *)a2 + 264);
  if ( *((_QWORD *)a2 + 42) == -1 || (sub_14149C500(&v70, a2 + 21), (_QWORD)v70 == -1) )
  {
    if ( *(_QWORD *)(a3 + 64) == -1 )
    {
      *(_QWORD *)&v53 = -1;
      if ( *((_QWORD *)a2 + 45) == -1 )
        goto LABEL_52;
    }
    else
    {
      sub_14149C500(&v53, a3 + 64);
      if ( *((_QWORD *)a2 + 45) == -1 )
        goto LABEL_52;
    }
  }
  else
  {
    v54 = v71;
    v53 = v70;
    if ( *((_QWORD *)a2 + 45) == -1 )
      goto LABEL_52;
  }
  sub_14149C500(&v70, (char *)a2 + 360);
  if ( (_QWORD)v70 != -1 )
  {
    v66 = v70;
    v67 = v71;
    if ( *((_QWORD *)a2 + 48) != -1 )
      goto LABEL_54;
    goto LABEL_57;
  }
LABEL_52:
  if ( *(_QWORD *)(a3 + 88) == -1 )
  {
    *(_QWORD *)&v66 = -1;
    if ( *((_QWORD *)a2 + 48) != -1 )
      goto LABEL_54;
LABEL_57:
    if ( *(_QWORD *)(a3 + 112) == -1 )
      *(_QWORD *)&v70 = -1;
    else
      sub_14149C500(&v70, a3 + 112);
    goto LABEL_60;
  }
  sub_14149C500(&v66, a3 + 88);
  if ( *((_QWORD *)a2 + 48) == -1 )
    goto LABEL_57;
LABEL_54:
  sub_14149C500(&v70, a2 + 24);
  if ( (_QWORD)v70 == -1 )
    goto LABEL_57;
LABEL_60:
  v31 = *((_BYTE *)a2 + 418);
  v32 = *a2;
  v33 = *(_BYTE *)(a3 + 144);
  v34 = *((_QWORD *)a2 + 3);
  v35 = *((_BYTE *)a2 + 417);
  v36 = *((_BYTE *)a2 + 419);
  v37 = a2[4];
  v38 = *((_QWORD *)a2 + 51);
  v39 = a2[5];
  if ( a5 )
  {
    result = *(_QWORD *)(a5 + 96);
    v43 = *(_OWORD *)(a5 + 104);
  }
  else
  {
    result = 2;
  }
  v41 = v55;
  v42 = v56;
  *(_QWORD *)(a1 + 200) = v49;
  *(_OWORD *)(a1 + 184) = v48;
  *(_QWORD *)(a1 + 208) = v62;
  *(_QWORD *)(a1 + 216) = v58;
  *(_QWORD *)(a1 + 224) = v30;
  *(_QWORD *)(a1 + 248) = v47;
  *(_OWORD *)(a1 + 232) = v46;
  *(_QWORD *)(a1 + 272) = v54;
  *(_OWORD *)(a1 + 256) = v53;
  *(_QWORD *)(a1 + 296) = v67;
  *(_OWORD *)(a1 + 280) = v66;
  *(_QWORD *)(a1 + 320) = v71;
  *(_OWORD *)(a1 + 304) = v70;
  *(_BYTE *)(a1 + 344) = v73;
  *(_BYTE *)(a1 + 341) = v31;
  *(_OWORD *)a1 = v32;
  *(_BYTE *)(a1 + 336) = v33;
  *(_BYTE *)(a1 + 339) = v68;
  *(_QWORD *)(a1 + 16) = v26;
  *(_QWORD *)(a1 + 24) = v34;
  *(_BYTE *)(a1 + 340) = v35;
  *(_BYTE *)(a1 + 342) = v29;
  *(_BYTE *)(a1 + 343) = v36;
  *(_OWORD *)(a1 + 32) = v37;
  *(_BYTE *)(a1 + 337) = v72;
  *(_QWORD *)(a1 + 328) = v38;
  *(_OWORD *)(a1 + 48) = v39;
  *(_QWORD *)(a1 + 64) = v41;
  *(_QWORD *)(a1 + 72) = v42;
  *(_BYTE *)(a1 + 338) = v63;
  *(_QWORD *)(a1 + 80) = v57;
  *(_QWORD *)(a1 + 88) = v60;
  *(_DWORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 100) = v69;
  *(_OWORD *)(a1 + 104) = v45;
  *(_QWORD *)(a1 + 120) = v50;
  *(_QWORD *)(a1 + 128) = v61;
  *(_DWORD *)(a1 + 136) = v65;
  *(_DWORD *)(a1 + 140) = v64;
  *(_OWORD *)(a1 + 144) = v44;
  *(_QWORD *)(a1 + 160) = result;
  *(_OWORD *)(a1 + 168) = v43;
  if ( (_QWORD)v51 )
    return sub_140001660(v59, v51, 1);
  return result;
}