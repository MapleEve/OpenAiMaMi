// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409A8EA0(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int128 *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  int v14; // r15d
  int v15; // r13d
  unsigned int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int128 v26; // xmm5
  __int64 v27; // r8
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  _QWORD v33[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-48h] BYREF
  __int128 v35; // [rsp+48h] [rbp-38h]
  __int128 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+68h] [rbp-18h]
  __int128 v38; // [rsp+70h] [rbp-10h] BYREF
  __int128 v39; // [rsp+88h] [rbp+8h] BYREF
  __int128 v40; // [rsp+98h] [rbp+18h]
  __int128 v41; // [rsp+A8h] [rbp+28h]
  __int64 v42; // [rsp+B8h] [rbp+38h]
  __int128 *v43; // [rsp+C0h] [rbp+40h]
  __int64 v44; // [rsp+C8h] [rbp+48h]
  __int64 v45; // [rsp+D0h] [rbp+50h]
  __int64 v46; // [rsp+D8h] [rbp+58h]
  char v47; // [rsp+E7h] [rbp+67h] BYREF
  __int64 v48; // [rsp+E8h] [rbp+68h]
  __int64 v49; // [rsp+F0h] [rbp+70h]

  v49 = -2; /*0x1409a8ebb*/
  v43 = a4; /*0x1409a8ec3*/
  if ( a3 < 0 ) /*0x1409a8ecd*/
  {
    v6 = 0; /*0x1409a8ecf*/
    goto LABEL_3; /*0x1409a8ecf*/
  }
  v44 = a3; /*0x1409a8ee5*/
  if ( a3 ) /*0x1409a8ee9*/
  {
    nullsub_1(a1); /*0x1409a8eee*/
    v6 = 1; /*0x1409a8ef3*/
    v9 = sub_140001650(a3, 1); /*0x1409a8f00*/
    if ( !v9 ) /*0x1409a8f08*/
LABEL_3:
      sub_1416C2D4B(v6, a3); /*0x1409a8ed1*/
    v45 = v9; /*0x1409a8f0a*/
    sub_141684120(v9, a2, a3); /*0x1409a8f17*/
  }
  else
  {
    v45 = 1; /*0x1409a8f23*/
  }
  sub_141356270(&v34); /*0x1409a8f2b*/
  v38 = v34; /*0x1409a8f35*/
  *(_QWORD *)&v39 = 0; /*0x1409a8f39*/
  *((_QWORD *)&v39 + 1) = 1; /*0x1409a8f41*/
  *(_QWORD *)&v40 = 0; /*0x1409a8f49*/
  *(_QWORD *)&v35 = 1610612768; /*0x1409a8f51*/
  *(_QWORD *)&v34 = &v39; /*0x1409a8f5d*/
  *((_QWORD *)&v34 + 1) = &off_1417A9B00; /*0x1409a8f68*/
  if ( (unsigned __int8)sub_1413567D0(&v38, &v34) ) /*0x1409a8f74*/
    sub_1416C3060( /*0x1409a9288*/
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v47,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A9BB8);
  v46 = *((_QWORD *)&v39 + 1); /*0x1409a8f96*/
  v48 = v39; /*0x1409a8f96*/
  if ( (unsigned __int64)v40 <= 0x10 ) /*0x1409a8f9a*/
  {
    if ( (_QWORD)v40 != 16 ) /*0x1409a8fc2*/
LABEL_11:
      sub_1416C2F60(DWORD2(v39), v40, 0, 16, (__int64)&off_1417A5BC8); /*0x1409a8fa2*/
  }
  else if ( *(char *)(*((_QWORD *)&v39 + 1) + 16LL) <= -65 ) /*0x1409a8fa0*/
  {
    goto LABEL_11; /*0x1409a8fa0*/
  }
  v33[0] = *((_QWORD *)&v39 + 1); /*0x1409a8fc4*/
  v33[1] = 16; /*0x1409a8fc8*/
  *(_QWORD *)&v39 = v33; /*0x1409a8fd4*/
  *((_QWORD *)&v39 + 1) = sub_14041F680; /*0x1409a8fdf*/
  sub_14149C0F0(&v34, &unk_1417A4F1F, &v39); /*0x1409a8ff2*/
  if ( v48 ) /*0x1409a8fff*/
    sub_140001660(v46, v48, 1); /*0x1409a900b*/
  v46 = *((_QWORD *)&v34 + 1); /*0x1409a901c*/
  v48 = v34; /*0x1409a901c*/
  v10 = v35; /*0x1409a9020*/
  sub_140FFA6E0(&v38); /*0x1409a9028*/
  v13 = v38; /*0x1409a902e*/
  v14 = ((int)v38 >> 13) - 1; /*0x1409a9038*/
  v15 = 0; /*0x1409a903c*/
  if ( (int)v38 >> 13 <= 0 ) /*0x1409a9041*/
  {
    v16 = (1 - ((int)v38 >> 13)) / 0x190u + 1; /*0x1409a9055*/
    v12 = 400 * v16; /*0x1409a9057*/
    v14 += v12; /*0x1409a905d*/
    v15 = -146097 * v16; /*0x1409a9060*/
  }
  v17 = DWORD1(v38); /*0x1409a9067*/
  *(_QWORD *)&v39 = -1; /*0x1409a906b*/
  *(_QWORD *)&v34 = -1; /*0x1409a9073*/
  v18 = sub_141470CD0(v12, v11); /*0x1409a907b*/
  v19 = v18; /*0x1409a9081*/
  if ( *(_BYTE *)(v18 + 16) == 1 ) /*0x1409a9088*/
  {
    v20 = *(_QWORD *)v18; /*0x1409a908e*/
    v21 = *(_QWORD *)(v19 + 8); /*0x1409a9091*/
  }
  else
  {
    v20 = sub_141486EF0(); /*0x1409a9290*/
    *(_QWORD *)v19 = v20; /*0x1409a9296*/
    *(_QWORD *)(v19 + 8) = v21; /*0x1409a9299*/
    *(_BYTE *)(v19 + 16) = 1; /*0x1409a929d*/
  }
  *(_QWORD *)v19 = v20 + 1; /*0x1409a9099*/
  v22 = *v43; /*0x1409a90f0*/
  v23 = v43[1]; /*0x1409a90f4*/
  v24 = *a5; /*0x1409a9105*/
  v25 = a5[1]; /*0x1409a9109*/
  v26 = a5[2]; /*0x1409a910e*/
  *(_OWORD *)(a1 + 336) = v43[2]; /*0x1409a9113*/
  *(_OWORD *)(a1 + 320) = v23; /*0x1409a911a*/
  *(_OWORD *)(a1 + 304) = v22; /*0x1409a9121*/
  *(_OWORD *)(a1 + 352) = v24; /*0x1409a9128*/
  *(_OWORD *)(a1 + 368) = v25; /*0x1409a912f*/
  *(_OWORD *)(a1 + 384) = v26; /*0x1409a9136*/
  v27 = v44; /*0x1409a913d*/
  *(_QWORD *)(a1 + 16) = v44; /*0x1409a9141*/
  *(_QWORD *)(a1 + 24) = v45; /*0x1409a9149*/
  *(_QWORD *)(a1 + 32) = v27; /*0x1409a914d*/
  *(_QWORD *)(a1 + 40) = v48; /*0x1409a9155*/
  *(_QWORD *)(a1 + 48) = v46; /*0x1409a915d*/
  *(_QWORD *)(a1 + 56) = v10; /*0x1409a9161*/
  *(_QWORD *)(a1 + 400) = v17 /*0x1409a9165*/
                        + 86400LL
                        * (int)(((v14 / 100) >> 2)
                              + ((1461 * v14) >> 2)
                              + v15
                              + ((v13 >> 4) & 0x1FF)
                              - v14 / 100
                              - 719163);
  *(_BYTE *)(a1 + 428) = 0; /*0x1409a916c*/
  *(_QWORD *)(a1 + 168) = v42; /*0x1409a9177*/
  v28 = v39; /*0x1409a917e*/
  v29 = v40; /*0x1409a9182*/
  *(_OWORD *)(a1 + 152) = v41; /*0x1409a918a*/
  *(_OWORD *)(a1 + 136) = v29; /*0x1409a9191*/
  *(_OWORD *)(a1 + 120) = v28; /*0x1409a9198*/
  *(_QWORD *)(a1 + 224) = v37; /*0x1409a91a0*/
  v30 = v35; /*0x1409a91ab*/
  v31 = v36; /*0x1409a91af*/
  *(_OWORD *)(a1 + 176) = v34; /*0x1409a91b3*/
  *(_OWORD *)(a1 + 192) = v30; /*0x1409a91ba*/
  *(_OWORD *)(a1 + 208) = v31; /*0x1409a91c1*/
  *(_OWORD *)(a1 + 256) = *(_OWORD *)&off_1417A4790; /*0x1409a91cf*/
  *(_OWORD *)(a1 + 272) = xmmword_1417A47A0; /*0x1409a91dd*/
  *(_QWORD *)(a1 + 288) = v20; /*0x1409a91e4*/
  *(_QWORD *)(a1 + 296) = v21; /*0x1409a91eb*/
  *(_DWORD *)(a1 + 424) = 0; /*0x1409a91f2*/
  *(_BYTE *)(a1 + 429) = 0; /*0x1409a91fc*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1409a9203*/
  *(_QWORD *)(a1 + 72) = 8; /*0x1409a920b*/
  *(_OWORD *)(a1 + 80) = 0; /*0x1409a9216*/
  *(_QWORD *)(a1 + 96) = 1; /*0x1409a921a*/
  *(_QWORD *)(a1 + 104) = 0; /*0x1409a9222*/
  *(_BYTE *)(a1 + 112) = 0; /*0x1409a922a*/
  *(_QWORD *)(a1 + 232) = -1; /*0x1409a922e*/
  *(_QWORD *)a1 = 0; /*0x1409a9239*/
  *(_BYTE *)(a1 + 430) = 0; /*0x1409a9240*/
  *(_OWORD *)(a1 + 408) = 0; /*0x1409a9247*/
  return a1; /*0x1409a9251*/
}