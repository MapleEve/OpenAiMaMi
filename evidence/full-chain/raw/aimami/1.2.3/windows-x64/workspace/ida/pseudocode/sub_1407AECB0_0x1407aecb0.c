// module: codexmate_lib/core/voice/workspace
// addr: 0x1407aecb0
// name: sub_1407AECB0
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407AECB0(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r12
  _OWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r12
  _QWORD *v28; // rax
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 result; // rax
  __int64 v41; // [rsp+28h] [rbp-58h] BYREF
  __int64 v42; // [rsp+30h] [rbp-50h]
  __int64 v43; // [rsp+38h] [rbp-48h]
  __int64 v44; // [rsp+40h] [rbp-40h]
  __int64 v45; // [rsp+48h] [rbp-38h]
  __int64 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+58h] [rbp-28h]
  __int64 v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+68h] [rbp-18h]
  __int64 v50; // [rsp+70h] [rbp-10h]
  __int64 v51; // [rsp+88h] [rbp+8h]
  __int64 v52; // [rsp+A0h] [rbp+20h]
  _QWORD *v53; // [rsp+A8h] [rbp+28h]
  __int64 v54; // [rsp+B0h] [rbp+30h]
  __int64 v55; // [rsp+B8h] [rbp+38h]
  char v56; // [rsp+C0h] [rbp+40h]
  _QWORD v57[19]; // [rsp+C8h] [rbp+48h] BYREF
  char v58; // [rsp+160h] [rbp+E0h]
  __int128 v59; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v60; // [rsp+178h] [rbp+F8h]
  __int64 v61; // [rsp+180h] [rbp+100h]
  __int64 v62; // [rsp+188h] [rbp+108h]
  __int64 v63; // [rsp+190h] [rbp+110h]
  __int64 v64; // [rsp+198h] [rbp+118h]
  __int64 v65; // [rsp+1A0h] [rbp+120h]

  v65 = -2;
  LODWORD(v57[0]) = sub_141475580();
  HIDWORD(v57[0]) = v2;
  sub_141475530(&v41, v57, 3577643008LL, 27111902);
  if ( (_BYTE)v41 )
    v3 = 0;
  else
    v3 = v42;
  default_templates(&v59, v3);
  nullsub_1(v4);
  v5 = sub_140001650(480, 8);
  if ( !v5 )
    sub_1416C2D31(8, 480);
  v7 = v5;
  nullsub_1(v6);
  v8 = (void *)sub_140001650(19, 1);
  if ( !v8 )
  {
    v64 = v7;
    sub_1416C2D4B(1, 19);
  }
  v10 = (__int64)v8;
  qmemcpy(v8, "builtin-vocab-codex", 19);
  nullsub_1(v9);
  v11 = sub_140001650(12, 1);
  if ( !v11 )
  {
    v63 = v10;
    v64 = v7;
    sub_1416C2D4B(1, 12);
  }
  v13 = v11;
  *(_QWORD *)v11 = 0x85E5A6B8E5A389E6uLL;
  *(_DWORD *)(v11 + 8) = -1349065077;
  nullsub_1(v12);
  v14 = sub_140001650(5, 1);
  if ( !v14 )
  {
    v62 = v13;
    v63 = v10;
    v64 = v7;
    sub_1416C2D4B(1, 5);
  }
  v16 = v14;
  *(_BYTE *)(v14 + 4) = 120;
  *(_DWORD *)v14 = 1701080899;
  nullsub_1(v15);
  v17 = (_OWORD *)sub_140001650(30, 1);
  if ( !v17 )
  {
    v61 = v16;
    v62 = v13;
    v63 = v10;
    v64 = v7;
    sub_1416C2D4B(1, 30);
  }
  *(_OWORD *)((char *)v17 + 14) = *(__int128 *)((char *)&xmmword_14179049A + 14);
  *v17 = xmmword_14179049A;
  v57[0] = 19;
  v57[1] = v10;
  v57[2] = 19;
  v57[3] = 12;
  v57[4] = v13;
  v57[5] = 12;
  v57[6] = 5;
  v57[7] = v16;
  v57[8] = 5;
  v58 = 0;
  v57[9] = -1;
  v57[12] = -1;
  v57[15] = 30;
  v57[16] = v17;
  v57[17] = 30;
  v57[18] = v3;
  nullsub_1(v18);
  v19 = (void *)sub_140001650(20, 1);
  if ( !v19 )
  {
    v64 = v7;
    sub_1416C2D4B(1, 20);
  }
  v21 = (__int64)v19;
  qmemcpy(v19, "builtin-vocab-aimami", 20);
  nullsub_1(v20);
  v22 = sub_140001650(9, 1);
  if ( !v22 )
  {
    v63 = v21;
    v64 = v7;
    sub_1416C2D4B(1, 9);
  }
  v24 = v22;
  *(_QWORD *)v22 = 0x92E588A6E5B188E7uLL;
  *(_BYTE *)(v22 + 8) = -86;
  nullsub_1(v23);
  v25 = sub_140001650(6, 1);
  if ( !v25 )
  {
    v62 = v24;
    v63 = v21;
    v64 = v7;
    sub_1416C2D4B(1, 6);
  }
  v27 = v25;
  *(_WORD *)(v25 + 4) = 26957;
  *(_DWORD *)v25 = 1632463169;
  nullsub_1(v26);
  v28 = (_QWORD *)sub_140001650(15, 1);
  if ( !v28 )
  {
    v61 = v27;
    v62 = v24;
    v63 = v21;
    v64 = v7;
    sub_1416C2D4B(1, 15);
  }
  *(_QWORD *)((char *)v28 + 7) = 0x84B0E5A098E68D90uLL;
  *v28 = 0x90E58C89E78193E5uLL;
  v41 = 20;
  v42 = v21;
  v43 = 20;
  v44 = 9;
  v45 = v24;
  v46 = 9;
  v47 = 6;
  v48 = v27;
  v49 = 6;
  v56 = 1;
  v50 = -1;
  v51 = -1;
  v52 = 15;
  v53 = v28;
  v54 = 15;
  v55 = v3;
  nullsub_1(0x90E58C89E78193E5uLL);
  v29 = (void *)sub_140001650(19, 1);
  if ( !v29 )
  {
    v64 = v7;
    sub_1416C2D4B(1, 19);
  }
  v31 = (__int64)v29;
  qmemcpy(v29, "builtin-vocab-tauri", 19);
  nullsub_1(v30);
  v32 = sub_140001650(6, 1);
  if ( !v32 )
  {
    v63 = v31;
    v64 = v7;
    sub_1416C2D4B(1, 6);
  }
  v34 = v32;
  *(_WORD *)(v32 + 4) = -24943;
  *(_DWORD *)v32 = -409433626;
  nullsub_1(v33);
  v35 = sub_140001650(5, 1);
  if ( !v35 )
  {
    v62 = v34;
    v63 = v31;
    v64 = v7;
    sub_1416C2D4B(1, 5);
  }
  v37 = v35;
  *(_BYTE *)(v35 + 4) = 105;
  *(_DWORD *)v35 = 1920295252;
  nullsub_1(v36);
  v38 = sub_140001650(21, 1);
  if ( !v38 )
  {
    v61 = v37;
    v62 = v34;
    v63 = v31;
    v64 = v7;
    sub_1416C2D4B(1, 21);
  }
  v39 = v38;
  *(_OWORD *)v38 = xmmword_1417904DF;
  *(_QWORD *)(v38 + 13) = 0xB69EE686A1E6A29DuLL;
  sub_141684120(v7, v57, 160);
  sub_141684120(v7 + 160, &v41, 160);
  *(_QWORD *)(v7 + 320) = 19;
  *(_QWORD *)(v7 + 328) = v31;
  *(_QWORD *)(v7 + 336) = 19;
  *(_QWORD *)(v7 + 344) = 6;
  *(_QWORD *)(v7 + 352) = v34;
  *(_QWORD *)(v7 + 360) = 6;
  *(_QWORD *)(v7 + 368) = 5;
  *(_QWORD *)(v7 + 376) = v37;
  *(_QWORD *)(v7 + 384) = 5;
  *(_QWORD *)(v7 + 392) = -1;
  *(_QWORD *)(v7 + 416) = -1;
  *(_QWORD *)(v7 + 440) = 21;
  *(_QWORD *)(v7 + 448) = v39;
  *(_QWORD *)(v7 + 456) = 21;
  *(_QWORD *)(v7 + 464) = v3;
  *(_BYTE *)(v7 + 472) = 0;
  *(_DWORD *)(a1 + 136) = 1;
  *(_QWORD *)(a1 + 128) = v3;
  *(_OWORD *)a1 = v59;
  result = v60;
  *(_QWORD *)(a1 + 16) = v60;
  *(_QWORD *)(a1 + 24) = 3;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = 3;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 8;
  *(_OWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 8;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = -1;
  return result;
}