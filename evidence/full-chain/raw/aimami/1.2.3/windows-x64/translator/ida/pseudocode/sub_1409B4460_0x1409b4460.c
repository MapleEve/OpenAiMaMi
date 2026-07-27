// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409B4460(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v7; // r15
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r14
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v26; // rcx
  __int64 v27; // r15
  _DWORD *v28; // rax
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _WORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rbx
  unsigned __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rax
  __int128 v51; // [rsp+28h] [rbp-58h] BYREF
  __int64 v52; // [rsp+38h] [rbp-48h]
  _QWORD v53[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v54; // [rsp+58h] [rbp-28h]
  __int64 v55; // [rsp+60h] [rbp-20h]
  __int64 v56; // [rsp+68h] [rbp-18h]
  __int64 v57; // [rsp+70h] [rbp-10h]
  char v58; // [rsp+7Fh] [rbp-1h] BYREF
  __int128 v59; // [rsp+80h] [rbp+0h] BYREF
  __int64 v60; // [rsp+90h] [rbp+10h]
  __int128 *v61; // [rsp+98h] [rbp+18h]
  __int128 *v62; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v63; // [rsp+A8h] [rbp+28h]
  __int64 v64; // [rsp+B8h] [rbp+38h]
  _BYTE v65[24]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v66; // [rsp+D8h] [rbp+58h]
  __int128 v67; // [rsp+E0h] [rbp+60h] BYREF
  unsigned __int64 v68; // [rsp+F0h] [rbp+70h]
  char v69; // [rsp+FDh] [rbp+7Dh]
  char v70; // [rsp+FEh] [rbp+7Eh]
  char v71; // [rsp+FFh] [rbp+7Fh]
  __int64 v72; // [rsp+100h] [rbp+80h]

  v72 = -2; /*0x1409b447b*/
  v54 = a2; /*0x1409b448c*/
  if ( *(_QWORD *)(a1 + 120) != -1 ) /*0x1409b4498*/
  {
    v7 = *(_QWORD *)(a1 + 160); /*0x1409b44a5*/
    if ( a3 <= *(_QWORD *)(a1 + 144) - v7 ) /*0x1409b44b2*/
      goto LABEL_3; /*0x1409b44b2*/
    goto LABEL_64; /*0x1409b44b2*/
  }
  v56 = *(unsigned int *)(a1 + 424); /*0x1409b481b*/
  *(_DWORD *)(a1 + 424) = v56 + 1; /*0x1409b4821*/
  sub_141356270(v65); /*0x1409b482c*/
  v67 = *(_OWORD *)v65; /*0x1409b4835*/
  v62 = nullptr; /*0x1409b4839*/
  v63 = 1u; /*0x1409b4841*/
  *(_QWORD *)&v65[16] = 1610612768; /*0x1409b4851*/
  *(_QWORD *)v65 = &v62; /*0x1409b485d*/
  *(_QWORD *)&v65[8] = &off_1417A9B00; /*0x1409b4868*/
  if ( (unsigned __int8)sub_1413567D0(&v67, v65) ) /*0x1409b4874*/
    sub_1416C3060( /*0x1409b4e70*/
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v58,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A9BB8);
  v61 = v62; /*0x1409b4892*/
  v55 = v63; /*0x1409b4896*/
  if ( *((_QWORD *)&v63 + 1) <= 0xCu ) /*0x1409b489a*/
  {
    if ( *((_QWORD *)&v63 + 1) != 12 ) /*0x1409b48c2*/
LABEL_26:
      sub_1416C2F60(v63, DWORD2(v63), 0, 12, (__int64)&off_1417A5EB0); /*0x1409b48a2*/
  }
  else if ( *(char *)(v63 + 12) <= -65 ) /*0x1409b48a0*/
  {
    goto LABEL_26; /*0x1409b48a0*/
  }
  *(_QWORD *)&v59 = v63; /*0x1409b48c4*/
  *((_QWORD *)&v59 + 1) = 12; /*0x1409b48c8*/
  v62 = &v59; /*0x1409b48d3*/
  *(_QWORD *)&v63 = sub_14041F680; /*0x1409b48de*/
  sub_14149C0F0(v65, &unk_1417A5EC8, &v62); /*0x1409b48f1*/
  if ( v61 ) /*0x1409b48fe*/
    sub_140001660(v55, v61, 1); /*0x1409b490a*/
  v61 = *(__int128 **)&v65[8]; /*0x1409b491b*/
  v55 = *(_QWORD *)v65; /*0x1409b491b*/
  v27 = *(_QWORD *)&v65[16]; /*0x1409b491f*/
  *(_QWORD *)&v51 = 0; /*0x1409b4923*/
  v52 = 0; /*0x1409b492b*/
  nullsub_1(v26); /*0x1409b4933*/
  v28 = (_DWORD *)sub_140001650(4, 1); /*0x1409b4942*/
  if ( !v28 ) /*0x1409b494a*/
    sub_1416C2D4B(1, 4); /*0x1409b4f52*/
  *v28 = 1701869940; /*0x1409b4950*/
  *(_QWORD *)&v67 = 4; /*0x1409b4956*/
  *((_QWORD *)&v67 + 1) = v28; /*0x1409b495e*/
  v68 = 4; /*0x1409b4962*/
  nullsub_1(v29); /*0x1409b496a*/
  v30 = (void *)sub_140001650(26, 1); /*0x1409b4979*/
  v57 = (__int64)v30; /*0x1409b4981*/
  if ( !v30 ) /*0x1409b4985*/
    sub_1416C2D4B(1, 26); /*0x1409b4f64*/
  qmemcpy(v30, "response.output_item.added", 26); /*0x1409b499d*/
  v65[0] = 3; /*0x1409b49a0*/
  *(_QWORD *)&v65[8] = 26; /*0x1409b49a4*/
  *(_QWORD *)&v65[16] = v30; /*0x1409b49ac*/
  v66 = 26; /*0x1409b49b0*/
  sub_140307860(&v62, &v51, &v67, v65); /*0x1409b49c8*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b49d2*/
    sub_1400104F0(&v62); /*0x1409b49d8*/
  nullsub_1(v31); /*0x1409b49de*/
  v32 = (void *)sub_140001650(12, 1); /*0x1409b49ed*/
  if ( !v32 ) /*0x1409b49f5*/
    sub_1416C2D4B(1, 12); /*0x1409b4f76*/
  qmemcpy(v32, "output_index", 12); /*0x1409b4a05*/
  *(_QWORD *)&v67 = 12; /*0x1409b4a0f*/
  *((_QWORD *)&v67 + 1) = v32; /*0x1409b4a17*/
  v68 = 12; /*0x1409b4a1b*/
  v65[0] = 2; /*0x1409b4a23*/
  *(_QWORD *)&v65[8] = 0; /*0x1409b4a27*/
  *(_QWORD *)&v65[16] = v56; /*0x1409b4a33*/
  sub_140307860(&v62, &v51, &v67, v65); /*0x1409b4a47*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4a51*/
    sub_1400104F0(&v62); /*0x1409b4a57*/
  nullsub_1(v33); /*0x1409b4a5d*/
  v34 = (_DWORD *)sub_140001650(4, 1); /*0x1409b4a6c*/
  if ( !v34 ) /*0x1409b4a74*/
    sub_1416C2D4B(1, 4); /*0x1409b4f88*/
  *v34 = 1835365481; /*0x1409b4a7a*/
  v53[0] = 4; /*0x1409b4a80*/
  v53[1] = v34; /*0x1409b4a88*/
  v53[2] = 4; /*0x1409b4a8c*/
  *(_QWORD *)&v59 = 0; /*0x1409b4a94*/
  v60 = 0; /*0x1409b4a9c*/
  nullsub_1(v35); /*0x1409b4aa4*/
  v36 = (_DWORD *)sub_140001650(4, 1); /*0x1409b4ab3*/
  if ( !v36 ) /*0x1409b4abb*/
    sub_1416C2D4B(1, 4); /*0x1409b4f9a*/
  *v36 = 1701869940; /*0x1409b4ac1*/
  *(_QWORD *)&v67 = 4; /*0x1409b4ac7*/
  *((_QWORD *)&v67 + 1) = v36; /*0x1409b4acf*/
  v68 = 4; /*0x1409b4ad3*/
  nullsub_1(v37); /*0x1409b4adb*/
  v38 = sub_140001650(9, 1); /*0x1409b4aea*/
  v57 = v38; /*0x1409b4af2*/
  if ( !v38 ) /*0x1409b4af6*/
    sub_1416C2D4B(1, 9); /*0x1409b4fac*/
  *(_QWORD *)v38 = 0x6E696E6F73616572LL; /*0x1409b4b06*/
  *(_BYTE *)(v38 + 8) = 103; /*0x1409b4b09*/
  v65[0] = 3; /*0x1409b4b0d*/
  *(_QWORD *)&v65[8] = 9; /*0x1409b4b11*/
  *(_QWORD *)&v65[16] = v38; /*0x1409b4b19*/
  v66 = 9; /*0x1409b4b1d*/
  sub_140307860(&v62, &v59, &v67, v65); /*0x1409b4b34*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4b3e*/
    sub_1400104F0(&v62); /*0x1409b4b44*/
  nullsub_1(v39); /*0x1409b4b4a*/
  v40 = (_WORD *)sub_140001650(2, 1); /*0x1409b4b59*/
  if ( !v40 ) /*0x1409b4b61*/
    sub_1416C2D4B(1, 2); /*0x1409b4fbe*/
  *v40 = 25705; /*0x1409b4b67*/
  *(_QWORD *)&v67 = 2; /*0x1409b4b6c*/
  *((_QWORD *)&v67 + 1) = v40; /*0x1409b4b74*/
  v68 = 2; /*0x1409b4b78*/
  if ( v27 < 0 ) /*0x1409b4b83*/
  {
    v42 = 0; /*0x1409b4b85*/
    goto LABEL_45; /*0x1409b4b85*/
  }
  if ( v27 ) /*0x1409b4b9d*/
  {
    nullsub_1(v41); /*0x1409b4b9f*/
    v42 = 1; /*0x1409b4ba4*/
    v43 = sub_140001650(v27, 1); /*0x1409b4bb2*/
    if ( !v43 ) /*0x1409b4bba*/
    {
LABEL_45:
      v70 = 1; /*0x1409b4b88*/
      sub_1416C2D4B(v42, v27); /*0x1409b4b92*/
    }
    v44 = v43; /*0x1409b4bbc*/
    sub_141684120(v43, v61, v27); /*0x1409b4bc9*/
  }
  else
  {
    v44 = 1; /*0x1409b4bd0*/
  }
  v65[0] = 3; /*0x1409b4bd5*/
  *(_QWORD *)&v65[8] = v27; /*0x1409b4bd9*/
  *(_QWORD *)&v65[16] = v44; /*0x1409b4bdd*/
  v66 = v27; /*0x1409b4be1*/
  v70 = 0; /*0x1409b4be5*/
  sub_140307860(&v62, &v59, &v67, v65); /*0x1409b4bf8*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4c02*/
    sub_1400104F0(&v62); /*0x1409b4c08*/
  nullsub_1(v45); /*0x1409b4c0e*/
  v46 = (_DWORD *)sub_140001650(7, 1); /*0x1409b4c1d*/
  if ( !v46 ) /*0x1409b4c25*/
    sub_1416C2D4B(1, 7); /*0x1409b4fd0*/
  *(_DWORD *)((char *)v46 + 3) = 2037539181; /*0x1409b4c2b*/
  *v46 = 1835890035; /*0x1409b4c32*/
  *(_QWORD *)&v67 = 7; /*0x1409b4c38*/
  *((_QWORD *)&v67 + 1) = v46; /*0x1409b4c40*/
  v68 = 7; /*0x1409b4c44*/
  *(_QWORD *)&v65[8] = 0; /*0x1409b4c4c*/
  *(_QWORD *)&v65[16] = 8; /*0x1409b4c54*/
  v66 = 0; /*0x1409b4c5c*/
  v65[0] = 4; /*0x1409b4c64*/
  sub_140307860(&v62, &v59, &v67, v65); /*0x1409b4c7a*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4c84*/
    sub_1400104F0(&v62); /*0x1409b4c8a*/
  *(_OWORD *)&v65[8] = v59; /*0x1409b4c94*/
  v66 = v60; /*0x1409b4c9c*/
  v65[0] = 5; /*0x1409b4ca0*/
  v69 = 0; /*0x1409b4ca4*/
  sub_140307860(&v62, &v51, v53, v65); /*0x1409b4cbe*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4cc8*/
    sub_1400104F0(&v62); /*0x1409b4cce*/
  v63 = v51; /*0x1409b4cd8*/
  v64 = v52; /*0x1409b4ce0*/
  LOBYTE(v62) = 5; /*0x1409b4ce4*/
  *(_QWORD *)&v59 = &xmmword_1417A5D88; /*0x1409b4cef*/
  *((_QWORD *)&v59 + 1) = 26; /*0x1409b4cf3*/
  v53[0] = &v62; /*0x1409b4cfb*/
  *(_QWORD *)v65 = &v59; /*0x1409b4cff*/
  *(_QWORD *)&v65[8] = sub_14041F680; /*0x1409b4d0a*/
  *(_QWORD *)&v65[16] = v53; /*0x1409b4d0e*/
  v66 = (__int64)sub_140B982E0; /*0x1409b4d19*/
  sub_14149C0F0(&v67, &unk_1417A94D0, v65); /*0x1409b4d2c*/
  v47 = *((_QWORD *)&v67 + 1); /*0x1409b4d32*/
  v48 = v68; /*0x1409b4d36*/
  v49 = a4[2]; /*0x1409b4d3d*/
  if ( v68 > *a4 - v49 ) /*0x1409b4d47*/
  {
    v57 = *((_QWORD *)&v67 + 1); /*0x1409b4e7b*/
    sub_141688D30((_DWORD)a4, v49, v68, 1, 1); /*0x1409b4e97*/
    v49 = a4[2]; /*0x1409b4e9d*/
    v47 = v57; /*0x1409b4ea1*/
  }
  else if ( !v68 ) /*0x1409b4d50*/
  {
    goto LABEL_60; /*0x1409b4d50*/
  }
  sub_141684120(v49 + a4[1], v47, v48); /*0x1409b4d5f*/
LABEL_60:
  a4[2] = v48 + v49; /*0x1409b4d64*/
  if ( (_QWORD)v67 ) /*0x1409b4d72*/
    sub_140001660(v47, v67, 1); /*0x1409b4d7d*/
  v71 = 1; /*0x1409b4d82*/
  sub_1400104F0(&v62); /*0x1409b4d8a*/
  v50 = v55; /*0x1409b4d90*/
  *(_QWORD *)(a1 + 120) = v55; /*0x1409b4d94*/
  *(_QWORD *)(a1 + 128) = v61; /*0x1409b4d9c*/
  *(_QWORD *)(a1 + 136) = v27; /*0x1409b4da3*/
  *(_QWORD *)(a1 + 144) = 0; /*0x1409b4daa*/
  *(_QWORD *)(a1 + 152) = 1; /*0x1409b4db5*/
  *(_QWORD *)(a1 + 160) = 0; /*0x1409b4dc0*/
  *(_DWORD *)(a1 + 168) = v56; /*0x1409b4dcf*/
  if ( v50 == -1 ) /*0x1409b4dda*/
  {
    v71 = 0; /*0x1409b4eaa*/
    sub_1416C3000(&unk_1417A5DE8, 8, &off_1417A5ED0); /*0x1409b4ec1*/
  }
  v7 = 0; /*0x1409b4de2*/
  if ( a3 ) /*0x1409b4deb*/
  {
LABEL_64:
    sub_141688D30(a1 + 144, v7, a3, 1, 1); /*0x1409b4df1*/
    v7 = *(_QWORD *)(a1 + 160); /*0x1409b4e12*/
  }
LABEL_3:
  sub_141684120(v7 + *(_QWORD *)(a1 + 152), v54, a3); /*0x1409b44b8*/
  *(_QWORD *)(a1 + 160) = a3 + v7; /*0x1409b44d1*/
  *(_QWORD *)&v59 = 0; /*0x1409b44d8*/
  v60 = 0; /*0x1409b44e0*/
  nullsub_1(v8); /*0x1409b44e8*/
  v9 = (_DWORD *)sub_140001650(4, 1); /*0x1409b44f7*/
  if ( !v9 ) /*0x1409b44ff*/
    sub_1416C2D4B(1, 4); /*0x1409b4ed6*/
  *v9 = 1701869940; /*0x1409b4505*/
  *(_QWORD *)&v67 = 4; /*0x1409b450b*/
  *((_QWORD *)&v67 + 1) = v9; /*0x1409b4513*/
  v68 = 4; /*0x1409b4517*/
  nullsub_1(v10); /*0x1409b451f*/
  v11 = (void *)sub_140001650(37, 1); /*0x1409b452e*/
  v56 = (__int64)v11; /*0x1409b4536*/
  if ( !v11 ) /*0x1409b453a*/
    sub_1416C2D4B(1, 37); /*0x1409b4eeb*/
  qmemcpy(v11, "response.reasoning_summary_text.delta", 37); /*0x1409b4552*/
  v65[0] = 3; /*0x1409b4563*/
  *(_QWORD *)&v65[8] = 37; /*0x1409b4567*/
  *(_QWORD *)&v65[16] = v11; /*0x1409b456f*/
  v66 = 37; /*0x1409b4573*/
  sub_140307860(&v62, &v59, &v67, v65); /*0x1409b458a*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4594*/
    sub_1400104F0(&v62); /*0x1409b459a*/
  nullsub_1(v12); /*0x1409b45a0*/
  v13 = (void *)sub_140001650(12, 1); /*0x1409b45af*/
  if ( !v13 ) /*0x1409b45b7*/
    sub_1416C2D4B(1, 12); /*0x1409b4f00*/
  qmemcpy(v13, "output_index", 12); /*0x1409b45c7*/
  *(_QWORD *)&v67 = 12; /*0x1409b45d1*/
  *((_QWORD *)&v67 + 1) = v13; /*0x1409b45d9*/
  v68 = 12; /*0x1409b45dd*/
  v14 = *(unsigned int *)(a1 + 168); /*0x1409b45e5*/
  v65[0] = 2; /*0x1409b45ec*/
  *(_QWORD *)&v65[8] = 0; /*0x1409b45f0*/
  *(_QWORD *)&v65[16] = v14; /*0x1409b45f8*/
  sub_140307860(&v62, &v59, &v67, v65); /*0x1409b460b*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4615*/
    sub_1400104F0(&v62); /*0x1409b461b*/
  nullsub_1(v15); /*0x1409b4621*/
  v16 = (void *)sub_140001650(13, 1); /*0x1409b4630*/
  if ( !v16 ) /*0x1409b4638*/
    sub_1416C2D4B(1, 13); /*0x1409b4f15*/
  qmemcpy(v16, "summary_index", 13); /*0x1409b4656*/
  *(_QWORD *)&v67 = 13; /*0x1409b4659*/
  *((_QWORD *)&v67 + 1) = v16; /*0x1409b4661*/
  v68 = 13; /*0x1409b4665*/
  v65[0] = 2; /*0x1409b466d*/
  *(_OWORD *)&v65[8] = 0; /*0x1409b4674*/
  sub_140307860(&v62, &v59, &v67, v65); /*0x1409b4687*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4691*/
    sub_1400104F0(&v62); /*0x1409b4697*/
  nullsub_1(v17); /*0x1409b469d*/
  v18 = sub_140001650(5, 1); /*0x1409b46ac*/
  if ( !v18 ) /*0x1409b46b4*/
    sub_1416C2D4B(1, 5); /*0x1409b4f2a*/
  *(_BYTE *)(v18 + 4) = 97; /*0x1409b46ba*/
  *(_DWORD *)v18 = 1953260900; /*0x1409b46be*/
  *(_QWORD *)&v67 = 5; /*0x1409b46c4*/
  *((_QWORD *)&v67 + 1) = v18; /*0x1409b46cc*/
  v68 = 5; /*0x1409b46d0*/
  nullsub_1(v19); /*0x1409b46d8*/
  v20 = sub_140001650(a3, 1); /*0x1409b46e5*/
  v56 = v20; /*0x1409b46ed*/
  if ( !v20 ) /*0x1409b46f1*/
    sub_1416C2D4B(1, a3); /*0x1409b4f3d*/
  v21 = v20; /*0x1409b46f7*/
  sub_141684120(v20, v54, a3); /*0x1409b4704*/
  v65[0] = 3; /*0x1409b4709*/
  *(_QWORD *)&v65[8] = a3; /*0x1409b470d*/
  *(_QWORD *)&v65[16] = v21; /*0x1409b4711*/
  v66 = a3; /*0x1409b4715*/
  sub_140307860(&v62, &v59, &v67, v65); /*0x1409b472e*/
  if ( (_BYTE)v62 != 0xFF ) /*0x1409b4738*/
    sub_1400104F0(&v62); /*0x1409b473e*/
  v63 = v59; /*0x1409b4748*/
  v64 = v60; /*0x1409b4750*/
  LOBYTE(v62) = 5; /*0x1409b4754*/
  *(_QWORD *)&v59 = &xmmword_1417A5EE8; /*0x1409b475f*/
  *((_QWORD *)&v59 + 1) = 37; /*0x1409b4763*/
  v53[0] = &v62; /*0x1409b476b*/
  *(_QWORD *)v65 = &v59; /*0x1409b476f*/
  *(_QWORD *)&v65[8] = sub_14041F680; /*0x1409b477a*/
  *(_QWORD *)&v65[16] = v53; /*0x1409b4782*/
  v66 = (__int64)sub_140B982E0; /*0x1409b478d*/
  sub_14149C0F0(&v67, &unk_1417A94D0, v65); /*0x1409b47a0*/
  v22 = *((_QWORD *)&v67 + 1); /*0x1409b47a6*/
  v23 = v68; /*0x1409b47aa*/
  v24 = a4[2]; /*0x1409b47b1*/
  if ( v68 > *a4 - v24 ) /*0x1409b47bb*/
  {
    v54 = *((_QWORD *)&v67 + 1); /*0x1409b4e1e*/
    sub_141688D30((_DWORD)a4, v24, v68, 1, 1); /*0x1409b4e3a*/
    v24 = a4[2]; /*0x1409b4e40*/
    v22 = v54; /*0x1409b4e44*/
  }
  else if ( !v68 ) /*0x1409b47c4*/
  {
    goto LABEL_20; /*0x1409b47c4*/
  }
  sub_141684120(v24 + a4[1], v22, v23); /*0x1409b47d3*/
LABEL_20:
  a4[2] = v23 + v24; /*0x1409b47d8*/
  if ( (_QWORD)v67 ) /*0x1409b47e6*/
    sub_140001660(v22, v67, 1); /*0x1409b47f1*/
  return sub_1400104F0(&v62); /*0x1409b4800*/
}