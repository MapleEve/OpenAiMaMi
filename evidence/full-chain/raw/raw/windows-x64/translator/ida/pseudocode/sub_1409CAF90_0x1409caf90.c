// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409CAF90(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  int v13; // r15d
  int v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // r8
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v27; // [rsp+28h] [rbp-58h]
  __int128 v28; // [rsp+38h] [rbp-48h]
  __int128 v29; // [rsp+48h] [rbp-38h]
  __int128 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+68h] [rbp-18h]
  __int128 v32; // [rsp+78h] [rbp-8h]
  __int64 v33; // [rsp+88h] [rbp+8h]
  __int128 v34; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v35[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v36; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v37; // [rsp+C0h] [rbp+40h]
  __int128 v38; // [rsp+D0h] [rbp+50h]
  __int64 v39; // [rsp+E0h] [rbp+60h]
  __int128 *v40; // [rsp+E8h] [rbp+68h]
  __int64 v41; // [rsp+F0h] [rbp+70h]
  __int64 v42; // [rsp+F8h] [rbp+78h]
  _QWORD *v43; // [rsp+100h] [rbp+80h] BYREF
  __int64 v44; // [rsp+108h] [rbp+88h]
  unsigned __int64 v45; // [rsp+110h] [rbp+90h]
  __int64 v46; // [rsp+118h] [rbp+98h]
  char v47; // [rsp+127h] [rbp+A7h] BYREF
  _QWORD *v48; // [rsp+128h] [rbp+A8h]
  __int64 v49; // [rsp+130h] [rbp+B0h]

  v49 = -2; /*0x1409cafab*/
  v40 = a4; /*0x1409cafb6*/
  if ( a3 < 0 ) /*0x1409cafc0*/
  {
    v5 = 0; /*0x1409cafc2*/
    goto LABEL_3; /*0x1409cafc2*/
  }
  v41 = a3; /*0x1409cafd8*/
  if ( a3 ) /*0x1409cafdc*/
  {
    nullsub_1(a1); /*0x1409cafe1*/
    v5 = 1; /*0x1409cafe6*/
    v8 = sub_140001650(a3, 1); /*0x1409caff3*/
    if ( !v8 ) /*0x1409caffb*/
LABEL_3:
      sub_1416C2D4B(v5, a3); /*0x1409cafc4*/
    v42 = v8; /*0x1409caffd*/
    sub_141684120(v8, a2, a3); /*0x1409cb00a*/
  }
  else
  {
    v42 = 1; /*0x1409cb016*/
  }
  *(_QWORD *)&v27 = -1; /*0x1409cb01a*/
  sub_141356270(&v36); /*0x1409cb026*/
  v34 = v36; /*0x1409cb030*/
  v43 = nullptr; /*0x1409cb034*/
  v44 = 1; /*0x1409cb03f*/
  v45 = 0; /*0x1409cb04a*/
  *(_QWORD *)&v37 = 1610612768; /*0x1409cb055*/
  *(_QWORD *)&v36 = &v43; /*0x1409cb064*/
  *((_QWORD *)&v36 + 1) = &off_1417A9B00; /*0x1409cb06f*/
  if ( (unsigned __int8)sub_1413567D0(&v34, &v36) ) /*0x1409cb07b*/
    sub_1416C3060( /*0x1409cb393*/
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v47,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A9BB8);
  v48 = v43; /*0x1409cb0a2*/
  v46 = v44; /*0x1409cb0a9*/
  if ( v45 <= 0x10 ) /*0x1409cb0b0*/
  {
    if ( v45 != 16 ) /*0x1409cb0d8*/
LABEL_11:
      sub_1416C2F60(v44, v45, 0, 16, (__int64)&off_1417A6438); /*0x1409cb0b8*/
  }
  else if ( *(char *)(v44 + 16) <= -65 ) /*0x1409cb0b6*/
  {
    goto LABEL_11; /*0x1409cb0b6*/
  }
  v35[0] = v44; /*0x1409cb0da*/
  v35[1] = 16; /*0x1409cb0de*/
  v43 = v35; /*0x1409cb0ea*/
  v44 = (__int64)sub_14041F680; /*0x1409cb0f8*/
  sub_14149C0F0(&v36, &unk_1417A4F1F, &v43); /*0x1409cb111*/
  if ( v48 ) /*0x1409cb121*/
    sub_140001660(v46, v48, 1); /*0x1409cb130*/
  v46 = *((_QWORD *)&v36 + 1); /*0x1409cb144*/
  v48 = (_QWORD *)v36; /*0x1409cb144*/
  v9 = v37; /*0x1409cb14b*/
  sub_140FFA6E0(&v43); /*0x1409cb156*/
  v12 = (unsigned int)v43; /*0x1409cb15c*/
  v13 = ((int)v43 >> 13) - 1; /*0x1409cb169*/
  v14 = 0; /*0x1409cb16d*/
  if ( (int)v43 >> 13 <= 0 ) /*0x1409cb172*/
  {
    v15 = (1 - ((int)v43 >> 13)) / 0x190u + 1; /*0x1409cb186*/
    v11 = 400 * v15; /*0x1409cb188*/
    v13 += v11; /*0x1409cb18e*/
    v14 = -146097 * v15; /*0x1409cb191*/
  }
  v16 = HIDWORD(v43); /*0x1409cb198*/
  *(_QWORD *)&v36 = -1; /*0x1409cb19f*/
  v17 = sub_141470CD0(v11, v10); /*0x1409cb1a7*/
  v18 = v17; /*0x1409cb1ad*/
  if ( *(_BYTE *)(v17 + 16) == 1 ) /*0x1409cb1b4*/
  {
    v19 = *(_QWORD *)v17; /*0x1409cb1ba*/
    v20 = *(_QWORD *)(v18 + 8); /*0x1409cb1bd*/
  }
  else
  {
    v19 = sub_141486EF0(); /*0x1409cb39b*/
    *(_QWORD *)v18 = v19; /*0x1409cb3a1*/
    *(_QWORD *)(v18 + 8) = v20; /*0x1409cb3a4*/
    *(_BYTE *)(v18 + 16) = 1; /*0x1409cb3a8*/
  }
  *(_QWORD *)v18 = v19 + 1; /*0x1409cb1c5*/
  v21 = *v40; /*0x1409cb21c*/
  v22 = v40[1]; /*0x1409cb220*/
  *(_OWORD *)(a1 + 312) = v40[2]; /*0x1409cb22a*/
  *(_OWORD *)(a1 + 296) = v22; /*0x1409cb231*/
  *(_OWORD *)(a1 + 280) = v21; /*0x1409cb238*/
  v23 = v41; /*0x1409cb23f*/
  *(_QWORD *)a1 = v41; /*0x1409cb243*/
  *(_QWORD *)(a1 + 8) = v42; /*0x1409cb24a*/
  *(_QWORD *)(a1 + 16) = v23; /*0x1409cb24e*/
  *(_QWORD *)(a1 + 24) = v48; /*0x1409cb259*/
  *(_QWORD *)(a1 + 32) = v46; /*0x1409cb264*/
  *(_QWORD *)(a1 + 40) = v9; /*0x1409cb268*/
  *(_QWORD *)(a1 + 328) = v16 /*0x1409cb26c*/
                        + 86400LL
                        * (int)(((v13 / 100) >> 2)
                              + ((1461 * v13) >> 2)
                              + v14
                              + ((v12 >> 4) & 0x1FF)
                              - v13 / 100
                              - 719163);
  *(_BYTE *)(a1 + 364) = 0; /*0x1409cb273*/
  *(_QWORD *)(a1 + 168) = v33; /*0x1409cb27e*/
  *(_OWORD *)(a1 + 152) = v32; /*0x1409cb289*/
  *(_OWORD *)(a1 + 136) = v31; /*0x1409cb294*/
  *(_OWORD *)(a1 + 120) = v30; /*0x1409cb2ab*/
  *(_OWORD *)(a1 + 104) = v29; /*0x1409cb2af*/
  *(_OWORD *)(a1 + 88) = v28; /*0x1409cb2b3*/
  *(_OWORD *)(a1 + 72) = v27; /*0x1409cb2b7*/
  *(_QWORD *)(a1 + 224) = v39; /*0x1409cb2bf*/
  v24 = v37; /*0x1409cb2ca*/
  v25 = v38; /*0x1409cb2ce*/
  *(_OWORD *)(a1 + 176) = v36; /*0x1409cb2d2*/
  *(_OWORD *)(a1 + 192) = v24; /*0x1409cb2d9*/
  *(_OWORD *)(a1 + 208) = v25; /*0x1409cb2e0*/
  *(_OWORD *)(a1 + 232) = *(_OWORD *)&off_1417A4790; /*0x1409cb2ee*/
  *(_OWORD *)(a1 + 248) = xmmword_1417A47A0; /*0x1409cb2fc*/
  *(_QWORD *)(a1 + 264) = v19; /*0x1409cb303*/
  *(_QWORD *)(a1 + 272) = v20; /*0x1409cb30a*/
  *(_DWORD *)(a1 + 360) = 0; /*0x1409cb311*/
  *(_BYTE *)(a1 + 365) = 0; /*0x1409cb31b*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1409cb322*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1409cb32a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1409cb332*/
  *(_BYTE *)(a1 + 366) = 0; /*0x1409cb33a*/
  *(_OWORD *)(a1 + 336) = 0; /*0x1409cb344*/
  *(_QWORD *)(a1 + 352) = 0; /*0x1409cb34b*/
  return a1; /*0x1409cb359*/
}