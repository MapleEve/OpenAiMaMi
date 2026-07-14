// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x100503080 depth=3
// _::clone
size_t __fastcall _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::h921a54e95aa6bad7(
        void *a1,
        __int64 a2)
{
  size_t v2; // r15
  __int16 v3; // ax
  char v4; // cl
  int v5; // r14d
  size_t v6; // rdx
  size_t v7; // rcx
  size_t v8; // r14
  size_t v9; // r15
  size_t v10; // rax
  size_t v11; // r13
  char v12; // r14
  char v13; // r13
  bool v14; // zf
  char v15; // bl
  _QWORD *v16; // rbx
  size_t v17; // rcx
  size_t result; // rax
  size_t v19[82]; // [rsp+0h] [rbp-640h] BYREF
  _QWORD __src[22]; // [rsp+290h] [rbp-3B0h] BYREF
  size_t v21[42]; // [rsp+340h] [rbp-300h] BYREF
  size_t v22[3]; // [rsp+490h] [rbp-1B0h] BYREF
  size_t v23; // [rsp+4A8h] [rbp-198h]
  void *v24; // [rsp+4B0h] [rbp-190h]
  size_t v25; // [rsp+4B8h] [rbp-188h]
  size_t v26; // [rsp+4C0h] [rbp-180h]
  size_t v27; // [rsp+4C8h] [rbp-178h]
  size_t v28; // [rsp+4D0h] [rbp-170h]
  size_t v29; // [rsp+4D8h] [rbp-168h]
  size_t v30; // [rsp+4E0h] [rbp-160h]
  size_t v31; // [rsp+4E8h] [rbp-158h]
  size_t v32; // [rsp+4F0h] [rbp-150h]
  size_t v33; // [rsp+4F8h] [rbp-148h]
  size_t v34; // [rsp+500h] [rbp-140h]
  size_t v35; // [rsp+508h] [rbp-138h]
  __int128 v36; // [rsp+510h] [rbp-130h]
  size_t v37; // [rsp+520h] [rbp-120h]
  size_t v38; // [rsp+528h] [rbp-118h]
  size_t v39; // [rsp+530h] [rbp-110h]
  size_t v40; // [rsp+538h] [rbp-108h]
  size_t v41; // [rsp+540h] [rbp-100h]
  size_t v42; // [rsp+548h] [rbp-F8h] BYREF
  size_t v43; // [rsp+550h] [rbp-F0h]
  __int64 v44; // [rsp+558h] [rbp-E8h]
  __m128 v45; // [rsp+560h] [rbp-E0h]
  int v46; // [rsp+574h] [rbp-CCh]
  int v47; // [rsp+578h] [rbp-C8h]
  unsigned int v48; // [rsp+57Ch] [rbp-C4h]
  unsigned int v49; // [rsp+580h] [rbp-C0h]
  unsigned int v50; // [rsp+584h] [rbp-BCh]
  int v51; // [rsp+588h] [rbp-B8h]
  unsigned int v52; // [rsp+58Ch] [rbp-B4h]
  size_t v53; // [rsp+590h] [rbp-B0h] BYREF
  size_t v54; // [rsp+598h] [rbp-A8h]
  size_t v55; // [rsp+5A0h] [rbp-A0h]
  size_t v56; // [rsp+5A8h] [rbp-98h] BYREF
  unsigned __int128 v57; // [rsp+5B0h] [rbp-90h]
  size_t v58; // [rsp+5C0h] [rbp-80h]
  size_t v59; // [rsp+5C8h] [rbp-78h]
  size_t v60; // [rsp+5D0h] [rbp-70h]
  size_t v61; // [rsp+5D8h] [rbp-68h]
  size_t v62; // [rsp+5E0h] [rbp-60h] BYREF
  size_t v63; // [rsp+5E8h] [rbp-58h]
  size_t v64; // [rsp+5F0h] [rbp-50h]
  size_t v65; // [rsp+5F8h] [rbp-48h]
  size_t v66; // [rsp+600h] [rbp-40h]
  size_t v67; // [rsp+608h] [rbp-38h]
  char v68; // [rsp+616h] [rbp-2Ah]
  char v69; // [rsp+617h] [rbp-29h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v22, a2 + 336); /*0x1005030a8*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v42, a2 + 360); /*0x1005030bc*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v56, a2 + 384); /*0x1005030d0*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v53, a2 + 408); /*0x1005030e4*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v62, a2 + 432); /*0x1005030f5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v21, a2 + 456); /*0x100503109*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 480); /*0x10050311d*/
  v2 = 0x8000000000000000LL; /*0x100503122*/
  v3 = *(_WORD *)(a2 + 504); /*0x10050312c*/
  v4 = *(_BYTE *)(a2 + 506); /*0x100503135*/
  __src[0] = v22[0]; /*0x10050314c*/
  __src[1] = v22[1]; /*0x100503153*/
  __src[2] = v22[2]; /*0x100503161*/
  __src[3] = v42; /*0x100503176*/
  __src[4] = v43; /*0x10050317d*/
  __src[5] = v44; /*0x10050318b*/
  __src[6] = v56; /*0x1005031a0*/
  *(_OWORD *)&__src[7] = v57; /*0x1005031a7*/
  __src[11] = v55; /*0x1005031c3*/
  __src[10] = v54; /*0x1005031d8*/
  __src[9] = v53; /*0x1005031df*/
  __src[12] = v62; /*0x1005031ee*/
  __src[13] = v63; /*0x1005031f5*/
  __src[14] = v64; /*0x100503200*/
  __src[15] = v21[0]; /*0x100503215*/
  __src[16] = v21[1]; /*0x10050321c*/
  __src[17] = v21[2]; /*0x10050322a*/
  __src[20] = v19[2]; /*0x100503238*/
  __src[19] = v19[1]; /*0x10050324d*/
  __src[18] = v19[0]; /*0x100503254*/
  LOWORD(__src[21]) = v3; /*0x10050325b*/
  BYTE2(__src[21]) = v4; /*0x100503262*/
  v5 = *(_DWORD *)(a2 + 648); /*0x100503268*/
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 552)) ) /*0x100503272*/
  {
    v60 = 0x8000000000000000LL; /*0x10050327c*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 552); /*0x100503291*/
    v60 = v19[0]; /*0x10050329d*/
    v38 = v19[1]; /*0x1005032a8*/
    v25 = v19[2]; /*0x1005032b6*/
  }
  v6 = *(_QWORD *)(a2 + 640); /*0x1005032bd*/
  v37 = *(_QWORD *)a2; /*0x1005032c9*/
  v24 = a1; /*0x1005032d4*/
  v46 = v5; /*0x1005032db*/
  v23 = v6; /*0x1005032e2*/
  if ( v37 == 2 ) /*0x1005032e9*/
  {
    v21[0] = 2; /*0x1005032eb*/
    goto LABEL_21; /*0x1005032f6*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v56, a2 + 176); /*0x10050330a*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v53, a2 + 200); /*0x10050331e*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v62, a2 + 224); /*0x10050332f*/
  if ( *(_QWORD *)(a2 + 248) == 0x8000000000000000LL ) /*0x10050333c*/
  {
    v67 = 0x8000000000000000LL; /*0x100503342*/
    if ( *(_QWORD *)(a2 + 272) == 0x8000000000000000LL ) /*0x10050334e*/
      goto LABEL_8; /*0x10050334e*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 248); /*0x1005033e2*/
    v67 = v19[0]; /*0x1005033ee*/
    v39 = v19[1]; /*0x1005033f9*/
    v29 = v19[2]; /*0x100503407*/
    if ( *(_QWORD *)(a2 + 272) == 0x8000000000000000LL ) /*0x100503416*/
    {
LABEL_8:
      v65 = 0x8000000000000000LL; /*0x100503354*/
      if ( *(_QWORD *)(a2 + 296) == 0x8000000000000000LL ) /*0x100503360*/
        goto LABEL_9; /*0x100503360*/
      goto LABEL_14; /*0x100503360*/
    }
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 272); /*0x10050342b*/
  v65 = v19[0]; /*0x100503437*/
  v40 = v19[1]; /*0x100503442*/
  v30 = v19[2]; /*0x100503450*/
  if ( *(_QWORD *)(a2 + 296) == 0x8000000000000000LL ) /*0x10050345f*/
  {
LABEL_9:
    v45.i64[0] = 0x8000000000000000LL; /*0x100503366*/
    v61 = *(_QWORD *)(a2 + 48); /*0x100503372*/
    if ( v61 == 2 ) /*0x10050337a*/
      goto LABEL_10; /*0x10050337a*/
LABEL_15:
    v31 = *(_QWORD *)(a2 + 72); /*0x1005034b6*/
    v47 = *(_DWORD *)(a2 + 80); /*0x1005034ca*/
    v49 = *(_DWORD *)(a2 + 64); /*0x1005034d5*/
    v48 = *(_DWORD *)(a2 + 68); /*0x1005034e0*/
    v32 = *(_QWORD *)(a2 + 56); /*0x1005034eb*/
    v8 = *(_QWORD *)(a2 + 88); /*0x1005034f2*/
    if ( v8 == 2 ) /*0x1005034fe*/
      goto LABEL_16; /*0x1005034fe*/
    goto LABEL_11; /*0x1005034fe*/
  }
LABEL_14:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 296); /*0x100503465*/
  v45.i64[0] = v19[0]; /*0x100503480*/
  v41 = v19[1]; /*0x10050348e*/
  v35 = v19[2]; /*0x10050349c*/
  v61 = *(_QWORD *)(a2 + 48); /*0x1005034a8*/
  if ( v61 != 2 ) /*0x1005034b0*/
    goto LABEL_15; /*0x1005034b0*/
LABEL_10:
  v8 = *(_QWORD *)(a2 + 88); /*0x100503380*/
  if ( v8 != 2 ) /*0x10050338c*/
  {
LABEL_11:
    v33 = *(_QWORD *)(a2 + 112); /*0x100503392*/
    v51 = *(_DWORD *)(a2 + 120); /*0x1005033a6*/
    v52 = *(_DWORD *)(a2 + 104); /*0x1005033b1*/
    v50 = *(_DWORD *)(a2 + 108); /*0x1005033bc*/
    v34 = *(_QWORD *)(a2 + 96); /*0x1005033c7*/
  }
LABEL_16:
  LOBYTE(v66) = *(_BYTE *)(a2 + 333); /*0x100503504*/
  v59 = *(_QWORD *)(a2 + 8); /*0x100503515*/
  v26 = *(_QWORD *)(a2 + 16); /*0x10050351e*/
  v69 = *(_BYTE *)(a2 + 332); /*0x10050352e*/
  v58 = *(_QWORD *)(a2 + 320); /*0x100503539*/
  v9 = *(_QWORD *)(a2 + 24); /*0x10050353d*/
  v27 = *(_QWORD *)(a2 + 32); /*0x100503547*/
  v10 = *(_QWORD *)(a2 + 40); /*0x10050354e*/
  v28 = v10; /*0x100503553*/
  v36 = *(unsigned __int64 *)(a2 + 328); /*0x100503564*/
  v11 = *(_QWORD *)(a2 + 128); /*0x10050356b*/
  if ( v11 != 2 ) /*0x100503577*/
  {
    v68 = *(_BYTE *)(a2 + 168); /*0x100503584*/
    v10 = 0x8000000000000000LL; /*0x100503587*/
    if ( *(_QWORD *)(a2 + 144) != 0x8000000000000000LL ) /*0x100503592*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 144); /*0x1005035a3*/
      v10 = v19[0]; /*0x1005035a8*/
      v42 = v19[1]; /*0x1005035b6*/
      v43 = v19[2]; /*0x1005035c4*/
    }
    v7 = *(_QWORD *)(a2 + 136); /*0x1005035cb*/
  }
  *(_OWORD *)((char *)&v19[1] + 7) = v57; /*0x1005035e8*/
  *(size_t *)((char *)v19 + 7) = v56; /*0x1005035f6*/
  v21[25] = v53; /*0x100503604*/
  v21[26] = v54; /*0x100503612*/
  v21[27] = v55; /*0x100503620*/
  v21[28] = v62; /*0x10050362b*/
  v21[29] = v63; /*0x100503636*/
  v21[30] = v64; /*0x100503641*/
  v21[31] = v67; /*0x10050364c*/
  v21[32] = v39; /*0x10050365a*/
  v21[33] = v29; /*0x100503668*/
  v21[34] = v65; /*0x100503673*/
  v21[35] = v40; /*0x100503681*/
  v21[36] = v30; /*0x10050368f*/
  v21[37] = v45.i64[0]; /*0x10050369d*/
  v21[38] = v41; /*0x1005036ab*/
  v21[39] = v35; /*0x1005036b9*/
  v21[0] = v37; /*0x1005036c7*/
  v21[1] = v59; /*0x1005036d2*/
  v21[2] = v26; /*0x1005036e0*/
  v21[3] = v9; /*0x1005036e7*/
  v21[4] = v27; /*0x1005036f5*/
  v21[5] = v28; /*0x100503703*/
  v21[6] = v61; /*0x10050370e*/
  v21[7] = v32; /*0x10050371c*/
  v21[8] = __PAIR64__(v48, v49); /*0x100503729*/
  v21[9] = v31; /*0x100503743*/
  LODWORD(v21[10]) = v47; /*0x100503751*/
  v21[11] = v8; /*0x100503757*/
  v21[12] = v34; /*0x100503765*/
  v21[13] = __PAIR64__(v50, v52); /*0x100503772*/
  v21[14] = v33; /*0x10050378c*/
  LODWORD(v21[15]) = v51; /*0x10050379a*/
  v21[16] = v11; /*0x1005037a0*/
  v21[17] = v7; /*0x1005037a7*/
  v21[18] = v10; /*0x1005037ae*/
  v21[20] = v43; /*0x1005037bc*/
  v21[19] = v42; /*0x1005037ca*/
  LOBYTE(v21[21]) = v68; /*0x1005037d5*/
  v21[24] = *((_QWORD *)&v57 + 1); /*0x1005037e2*/
  *(size_t *)((char *)&v21[23] + 1) = v57 >> 8; /*0x1005037f0*/
  *(size_t *)((char *)&v21[22] + 1) = v19[1]; /*0x1005037fe*/
  *(size_t *)((char *)&v21[21] + 1) = v19[0]; /*0x10050380c*/
  v21[40] = v58; /*0x100503817*/
  LODWORD(v21[41]) = v36; /*0x100503825*/
  BYTE4(v21[41]) = v69; /*0x100503831*/
  BYTE5(v21[41]) = v66; /*0x10050383b*/
  v2 = 0x8000000000000000LL; /*0x100503841*/
LABEL_21:
  LOBYTE(v65) = *(_BYTE *)(a2 + 652); /*0x100503844*/
  v12 = *(_BYTE *)(a2 + 544); /*0x100503858*/
  v13 = *(_BYTE *)(a2 + 545); /*0x100503861*/
  v45 = (__m128)*(unsigned __int64 *)(a2 + 536); /*0x100503874*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 512); /*0x100503882*/
  v67 = v19[0]; /*0x10050388e*/
  v58 = v19[2]; /*0x1005038a0*/
  v69 = *(_BYTE *)(a2 + 600); /*0x1005038ad*/
  v14 = *(_QWORD *)(a2 + 576) == 0x8000000000000000LL; /*0x1005038b0*/
  v61 = v19[1]; /*0x1005038b8*/
  if ( v14 ) /*0x1005038bc*/
  {
    v66 = 0x8000000000000000LL; /*0x1005038be*/
    v15 = *(_BYTE *)(a2 + 632); /*0x1005038c2*/
    if ( *(_QWORD *)(a2 + 608) == 0x8000000000000000LL ) /*0x1005038d3*/
      goto LABEL_26; /*0x1005038d3*/
    goto LABEL_25; /*0x1005038d3*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 576); /*0x1005038e6*/
  v66 = v19[0]; /*0x1005038f2*/
  *(_QWORD *)&v36 = v19[1]; /*0x1005038fd*/
  v59 = v19[2]; /*0x10050390b*/
  v15 = *(_BYTE *)(a2 + 632); /*0x10050390f*/
  if ( *(_QWORD *)(a2 + 608) != 0x8000000000000000LL ) /*0x100503920*/
  {
LABEL_25:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v19, a2 + 608); /*0x100503922*/
    v2 = v19[0]; /*0x100503936*/
    v62 = v19[1]; /*0x100503944*/
    v63 = v19[2]; /*0x10050394f*/
  }
LABEL_26:
  memcpy(&v19[42], __src, 0xB0u); /*0x100503953*/
  LODWORD(v19[81]) = v46; /*0x100503971*/
  v19[69] = v60; /*0x10050397b*/
  v19[70] = v38; /*0x100503989*/
  v19[71] = v25; /*0x100503997*/
  v19[80] = v23; /*0x1005039a5*/
  memcpy(v19, v21, 0x150u); /*0x1005039bf*/
  BYTE4(v19[81]) = v65; /*0x1005039c8*/
  v19[64] = v67; /*0x1005039d2*/
  v19[65] = v61; /*0x1005039dd*/
  v19[66] = v58; /*0x1005039e8*/
  _mm_storel_ps((double *)&v19[67], v45); /*0x1005039f6*/
  LOBYTE(v19[68]) = v12; /*0x1005039fd*/
  BYTE1(v19[68]) = v13; /*0x100503a04*/
  v19[72] = v66; /*0x100503a0f*/
  v19[73] = v36; /*0x100503a1d*/
  v19[74] = v59; /*0x100503a28*/
  LOBYTE(v19[75]) = v69; /*0x100503a33*/
  v19[76] = v2; /*0x100503a39*/
  v19[77] = v62; /*0x100503a48*/
  v19[78] = v63; /*0x100503a4f*/
  LOBYTE(v19[79]) = v15; /*0x100503a56*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7f39075c1902a483(v21, a2 + 656); /*0x100503a6d*/
  v16 = v24; /*0x100503a7e*/
  memcpy(v24, v19, 0x290u); /*0x100503a88*/
  v17 = v21[1]; /*0x100503a94*/
  v16[82] = v21[0]; /*0x100503a9b*/
  v16[83] = v17; /*0x100503aa2*/
  result = v21[2]; /*0x100503aa9*/
  v16[84] = v21[2]; /*0x100503ab0*/
  return result; /*0x100503ab7*/
}