// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d11710 | successor of pre-update 0x1401ddeb0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
double __fastcall sub_140D11710(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm0
  char v12; // al
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  void *v19; // rax
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // r12
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r13
  __int64 v27; // r15
  int v28; // r12d
  __int64 v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  double result; // xmm0_8
  __int128 v40; // [rsp+28h] [rbp-58h] BYREF
  __int64 v41; // [rsp+38h] [rbp-48h]
  __int128 v42; // [rsp+40h] [rbp-40h] BYREF
  __int128 v43; // [rsp+50h] [rbp-30h]
  __int128 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+70h] [rbp-10h]
  __int128 v46; // [rsp+80h] [rbp+0h]
  __int64 v47; // [rsp+90h] [rbp+10h]
  _QWORD v48[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v49; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v50; // [rsp+C0h] [rbp+40h]
  __int128 v51; // [rsp+D0h] [rbp+50h]
  __int128 v52; // [rsp+E0h] [rbp+60h]
  __int128 v53; // [rsp+F0h] [rbp+70h]
  __int128 v54; // [rsp+100h] [rbp+80h]
  _BYTE v55[88]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v56; // [rsp+168h] [rbp+E8h]
  __int128 v57; // [rsp+178h] [rbp+F8h]
  __int128 v58; // [rsp+188h] [rbp+108h]
  __int128 v59; // [rsp+198h] [rbp+118h]
  __int128 v60; // [rsp+1A8h] [rbp+128h]
  __int64 v61; // [rsp+1B8h] [rbp+138h]
  _BYTE v62[104]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v63; // [rsp+228h] [rbp+1A8h]
  __int128 v64; // [rsp+238h] [rbp+1B8h]
  __int128 v65; // [rsp+248h] [rbp+1C8h]
  __int128 v66; // [rsp+258h] [rbp+1D8h]
  __int64 v67; // [rsp+268h] [rbp+1E8h]
  __int128 v68; // [rsp+270h] [rbp+1F0h]
  __int64 v69; // [rsp+280h] [rbp+200h]

  v69 = -2;
  v48[0] = a3;
  v48[1] = a4;
  if ( (unsigned __int8)(sub_1407CF080(a2[5], a2[6]) - 1) < 2u )
    goto LABEL_2;
  sub_140748090(v62, a2);
  v9 = *(_QWORD *)v62;
  v12 = v62[8];
  if ( *(_QWORD *)v62 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v62[88];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v62[73];
    v11 = *(_OWORD *)&v62[9];
    v13 = *(_OWORD *)&v62[25];
    v14 = *(_OWORD *)&v62[41];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v62[57];
    *(_OWORD *)(a1 + 41) = v14;
    *(_OWORD *)(a1 + 25) = v13;
    *(_OWORD *)(a1 + 9) = v11;
    *(_QWORD *)a1 = v9;
    *(_BYTE *)(a1 + 8) = v12;
LABEL_6:
    *(_QWORD *)(a1 + 96) = 2;
    goto LABEL_41;
  }
  if ( (v62[8] & 1) != 0 )
  {
LABEL_2:
    nullsub_1(v9, v8);
    v10 = sub_140001650(117, 1);
    if ( !v10 )
      sub_14196B2DB(1, 117);
    *(_OWORD *)(v10 + 96) = xmmword_141A9544D;
    *(_OWORD *)(v10 + 80) = xmmword_141A9543D;
    *(_OWORD *)(v10 + 64) = xmmword_141A9542D;
    *(_OWORD *)(v10 + 48) = xmmword_141A9541D;
    *(_OWORD *)(v10 + 32) = xmmword_141A9540D;
    *(_OWORD *)(v10 + 16) = xmmword_141A953FD;
    *(_QWORD *)&v11 = 0x99E68D89E593BDE5uLL;
    *(_OWORD *)v10 = xmmword_141A953ED;
    *(_QWORD *)(v10 + 109) = 0x8280E3B78FE5A6B4uLL;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 117;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 24) = 117;
    goto LABEL_6;
  }
  v15 = a2[37];
  v16 = a2[38];
  sub_1416C49D0(v62, v15, v16);
  if ( *(_DWORD *)v62 == 2 )
  {
    v17 = v62[8] & 3;
    v18 = (unsigned int)(v17 - 2);
    if ( (unsigned int)v18 >= 2 && (v62[8] & 3) != 0 )
    {
      --*(_QWORD *)&v62[8];
      v62[0] = 3;
      sub_1416EBAD0(&v62[8]);
    }
    nullsub_1(v17, v18);
    v19 = (void *)sub_140001650(29, 1);
    if ( !v19 )
      sub_14196B2DB(1, 29);
    *(_QWORD *)&v11 = *(_QWORD *)"No AiMaMi registry exists yet";
    qmemcpy(v19, "No AiMaMi registry exists yet", 29);
    *(_QWORD *)a1 = 8;
    *(_QWORD *)(a1 + 8) = 29;
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)(a1 + 24) = 29;
    goto LABEL_6;
  }
  sub_140CFB3B0(v62, v15, v16);
  v20 = *(_QWORD *)v62;
  *(_OWORD *)v55 = *(_OWORD *)&v62[8];
  *(_OWORD *)&v55[16] = *(_OWORD *)&v62[24];
  *(_OWORD *)&v55[32] = *(_OWORD *)&v62[40];
  *(_OWORD *)&v55[48] = *(_OWORD *)&v62[56];
  *(_OWORD *)&v55[64] = *(_OWORD *)&v62[72];
  *(_QWORD *)&v55[80] = *(_QWORD *)&v62[88];
  if ( *(_QWORD *)v62 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v55[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v55[64];
    v11 = *(_OWORD *)v55;
    v21 = *(_OWORD *)&v55[16];
    v22 = *(_OWORD *)&v55[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v55[48];
    *(_OWORD *)(a1 + 40) = v22;
    *(_OWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = v20;
    goto LABEL_6;
  }
  v47 = *(_QWORD *)&v55[80];
  v46 = *(_OWORD *)&v55[64];
  v45 = *(_OWORD *)&v55[48];
  v44 = *(_OWORD *)&v55[32];
  v43 = *(_OWORD *)&v55[16];
  v42 = *(_OWORD *)v55;
  v23 = *(_QWORD *)&v55[8];
  v24 = *(_QWORD *)&v55[16];
  *(_QWORD *)&v49 = *(_QWORD *)&v55[8];
  *((_QWORD *)&v49 + 1) = *(_QWORD *)&v55[8] + 424LL * *(_QWORD *)&v55[16];
  if ( sub_140CEA900(&v49, a3, a4) != 1 )
  {
    *(_QWORD *)v55 = v48;
    *(_QWORD *)&v55[8] = sub_140191200;
    sub_1416DAFA0(&v62[8], &unk_141A93596, v55);
    v29 = *(_QWORD *)&v62[8];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v62[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v62[64];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v62[48];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v62[32];
    *(_QWORD *)&v11 = *(_QWORD *)&v62[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v62[16];
    *(_QWORD *)a1 = 8;
    *(_QWORD *)(a1 + 8) = v29;
    *(_QWORD *)(a1 + 96) = 2;
    goto LABEL_29;
  }
  if ( v25 >= v24 )
    sub_14196B673(v25, v24, &off_141A95380);
  v26 = v25;
  sub_1416DA980(v62, *(_QWORD *)(v23 + 424 * v25 + 224), *(_QWORD *)(v23 + 424 * v25 + 232));
  v68 = *(_OWORD *)v62;
  v27 = *(_QWORD *)&v62[16];
  sub_1416C49D0(v62, *(_QWORD *)&v62[8], *(_QWORD *)&v62[16]);
  v28 = *(_DWORD *)v62;
  sub_14019F370(*(_QWORD *)v62, *(_QWORD *)&v62[8]);
  if ( v28 == 2 )
  {
    *(_QWORD *)v55 = *((_QWORD *)&v68 + 1);
    *(_QWORD *)&v55[8] = v27;
    *(_QWORD *)v62 = v55;
    *(_QWORD *)&v62[8] = sub_1416CE600;
    sub_1416DAFA0(&v40, &unk_141A95398, v62);
    *(_QWORD *)(a1 + 24) = v41;
    *(_QWORD *)&v11 = v40;
    *(_OWORD *)(a1 + 8) = v40;
    *(_QWORD *)a1 = 8;
    goto LABEL_27;
  }
  sub_14071D6E0((unsigned int)v62, DWORD2(v68), v27, a2[41], a2[42]);
  if ( *(_DWORD *)v62 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v62[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v62[64];
    v11 = *(_OWORD *)v62;
    v30 = *(_OWORD *)&v62[16];
    v31 = *(_OWORD *)&v62[32];
    v32 = *(_OWORD *)&v62[48];
LABEL_26:
    *(_OWORD *)(a1 + 48) = v32;
    *(_OWORD *)(a1 + 32) = v31;
    *(_OWORD *)(a1 + 16) = v30;
    *(_OWORD *)a1 = v11;
LABEL_27:
    *(_QWORD *)(a1 + 96) = 2;
    v34 = v68;
    if ( (_QWORD)v68 )
LABEL_28:
      *(double *)&v11 = sub_140001660(*((_QWORD *)&v68 + 1), v34, 1);
LABEL_29:
    sub_140037470(&v42);
    goto LABEL_41;
  }
  sub_140D321B0(v62, *((_QWORD *)&v68 + 1), v27);
  v49 = *(_OWORD *)&v62[8];
  v50 = *(_OWORD *)&v62[24];
  v51 = *(_OWORD *)&v62[40];
  v52 = *(_OWORD *)&v62[56];
  v53 = *(_OWORD *)&v62[72];
  v54 = *(_OWORD *)&v62[88];
  if ( *(_QWORD *)v62 == 2 )
  {
    *(_OWORD *)(a1 + 80) = v54;
    *(_OWORD *)(a1 + 64) = v53;
    v11 = v49;
    v30 = v50;
    v31 = v51;
    v32 = v52;
    goto LABEL_26;
  }
  v35 = v67;
  v61 = v67;
  v60 = v66;
  v59 = v65;
  v58 = v64;
  v57 = v63;
  *(_OWORD *)&v55[8] = v49;
  *(_OWORD *)&v55[24] = v50;
  *(_OWORD *)&v55[40] = v51;
  *(_OWORD *)&v55[56] = v52;
  *(_OWORD *)&v55[72] = v53;
  v56 = v54;
  *(_QWORD *)v55 = *(_QWORD *)v62;
  if ( (_QWORD)v52 != a4 || (unsigned int)sub_141923B40(*(_QWORD *)&v55[48], a3, a4) )
  {
    nullsub_1(v35, v33);
    v36 = (void *)sub_140001650(59, 1);
    if ( !v36 )
      sub_14196B2DB(1, 59);
    *(_QWORD *)&v11 = 0x20746E756F636341LL;
    qmemcpy(v36, "Account snapshot identity does not match its registry entry", 59);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 59;
    *(_QWORD *)(a1 + 16) = v36;
    *(_QWORD *)(a1 + 24) = 59;
    *(_QWORD *)(a1 + 96) = 2;
    sub_140037800(v55);
    v34 = v68;
    if ( !(_QWORD)v68 )
      goto LABEL_29;
    goto LABEL_28;
  }
  *(_QWORD *)(a1 + 80) = v47;
  *(_OWORD *)(a1 + 64) = v46;
  v11 = v42;
  v37 = v43;
  v38 = v44;
  *(_OWORD *)(a1 + 48) = v45;
  *(_OWORD *)(a1 + 32) = v38;
  *(_OWORD *)(a1 + 16) = v37;
  *(_OWORD *)a1 = v11;
  *(double *)&v11 = sub_1419234B0(a1 + 96, v55, 176);
  *(_QWORD *)(a1 + 88) = v26;
  if ( (_QWORD)v68 )
    *(double *)&v11 = sub_140001660(*((_QWORD *)&v68 + 1), v68, 1);
LABEL_41:
  *(_QWORD *)&result = v11;
  return result;
}
