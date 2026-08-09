// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::CoreSnapshotPayload as core::clone::Clone>::clone::hbbf1f4b394d1158f @ 0x1006eb070 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(
        char *__dst,
        unsigned __int64 a2,
        double a3,
        double a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  __int16 v6; // ax
  char v7; // cl
  int v8; // r12d
  __int64 v9; // r13
  bool v10; // zf
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  _QWORD __dsta[44]; // [rsp+0h] [rbp-5E0h] BYREF
  _QWORD __src[84]; // [rsp+160h] [rbp-480h] BYREF
  __m128 v23; // [rsp+400h] [rbp-1E0h]
  _QWORD v24[22]; // [rsp+418h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+4C8h] [rbp-118h]
  __int64 v26; // [rsp+4D0h] [rbp-110h]
  _QWORD v27[3]; // [rsp+4D8h] [rbp-108h] BYREF
  __int64 v28; // [rsp+4F0h] [rbp-F0h]
  __int64 v29; // [rsp+4F8h] [rbp-E8h]
  __int64 v30; // [rsp+500h] [rbp-E0h]
  __int64 v31; // [rsp+508h] [rbp-D8h]
  __int64 v32; // [rsp+510h] [rbp-D0h]
  __int64 v33; // [rsp+518h] [rbp-C8h]
  __int64 v34; // [rsp+520h] [rbp-C0h]
  __int64 v35; // [rsp+528h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+530h] [rbp-B0h]
  __int64 v37; // [rsp+538h] [rbp-A8h]
  __int64 v38; // [rsp+540h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+548h] [rbp-98h]
  __int64 v40; // [rsp+550h] [rbp-90h]
  __int64 v41; // [rsp+558h] [rbp-88h] BYREF
  __int64 v42; // [rsp+560h] [rbp-80h]
  __int64 v43; // [rsp+568h] [rbp-78h]
  __int128 v44; // [rsp+570h] [rbp-70h]
  __int64 v45; // [rsp+588h] [rbp-58h]
  __int64 v46; // [rsp+590h] [rbp-50h] BYREF
  __int64 v47; // [rsp+598h] [rbp-48h]
  __int64 v48; // [rsp+5A0h] [rbp-40h]
  unsigned __int64 v49; // [rsp+5A8h] [rbp-38h]
  __int16 v50; // [rsp+5B3h] [rbp-2Dh]
  char v51; // [rsp+5B5h] [rbp-2Bh]
  char v52; // [rsp+5B6h] [rbp-2Ah]
  char v53; // [rsp+5B7h] [rbp-29h]

  v4 = a2;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v27, a2 + 352);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v41, a2 + 376);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v38, a2 + 400);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v35, a2 + 424);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v46, a2 + 448);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dsta, a2 + 472);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a2 + 496);
  v5 = 0x8000000000000000LL;
  v6 = *(_WORD *)(a2 + 520);
  v7 = *(_BYTE *)(a2 + 522);
  v24[0] = v27[0];
  v24[1] = v27[1];
  v24[2] = v27[2];
  v24[3] = v41;
  v24[4] = v42;
  v24[5] = v43;
  v24[6] = v38;
  v24[7] = v39;
  v24[8] = v40;
  v24[11] = v37;
  v24[10] = v36;
  v24[9] = v35;
  v24[12] = v46;
  v24[13] = v47;
  v24[14] = v48;
  v24[15] = __dsta[0];
  v24[16] = __dsta[1];
  v24[17] = __dsta[2];
  v24[20] = __src[2];
  v24[19] = __src[1];
  v24[18] = __src[0];
  LOWORD(v24[21]) = v6;
  BYTE2(v24[21]) = v7;
  v8 = *(_DWORD *)(a2 + 664);
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 568)) )
  {
    *(_QWORD *)&v44 = 0x8000000000000000LL;
    v9 = *(_QWORD *)(a2 + 656);
    if ( *(_DWORD *)a2 == 2 )
    {
LABEL_3:
      __dsta[0] = 2;
      goto LABEL_6;
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a2 + 568);
    *(_QWORD *)&v44 = __src[0];
    v33 = __src[1];
    v30 = __src[2];
    v9 = *(_QWORD *)(a2 + 656);
    if ( *(_DWORD *)a2 == 2 )
      goto LABEL_3;
  }
  _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a(
    (__int64)__src,
    (double *)a2,
    a3,
    a4);
  memcpy(__dsta, __src, sizeof(__dsta));
LABEL_6:
  v28 = v9;
  v51 = *(_BYTE *)(a2 + 668);
  v50 = *(_WORD *)(a2 + 560);
  v23 = (__m128)*(unsigned __int64 *)(a2 + 552);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a2 + 528);
  v45 = __src[0];
  v29 = __src[2];
  v52 = *(_BYTE *)(a2 + 616);
  v10 = *(_QWORD *)(a2 + 592) == 0x8000000000000000LL;
  v32 = __src[1];
  if ( v10 )
  {
    v49 = 0x8000000000000000LL;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a2 + 592);
    v49 = __src[0];
    v34 = __src[1];
    v31 = __src[2];
  }
  v53 = *(_BYTE *)(a2 + 648);
  v11 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a2 + 624) != 0x8000000000000000LL )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, a2 + 624);
    v11 = __src[0];
    v46 = __src[1];
    v47 = __src[2];
  }
  memcpy(&__src[44], v24, 0xB0u);
  LODWORD(__src[83]) = v8;
  __src[71] = v44;
  __src[72] = v33;
  __src[73] = v30;
  __src[82] = v28;
  memcpy(__src, __dsta, 0x160u);
  BYTE4(__src[83]) = v51;
  __src[66] = v45;
  __src[67] = v32;
  __src[68] = v29;
  _mm_storel_ps((double *)&__src[69], v23);
  LOWORD(__src[70]) = v50;
  __src[74] = v49;
  __src[75] = v34;
  __src[76] = v31;
  LOBYTE(__src[77]) = v52;
  __src[78] = v11;
  __src[79] = v46;
  __src[80] = v47;
  LOBYTE(__src[81]) = v53;
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h303c6d40a28932ef(&v46, a2 + 672);
  if ( *(_QWORD *)(a2 + 696) != 0x8000000000000000LL )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, a2 + 696);
    LOBYTE(v8) = *(_BYTE *)(a2 + 808);
    if ( *(_QWORD *)(a2 + 720) != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dsta, a2 + 720);
      v5 = __dsta[0];
      v25 = __dsta[1];
      v26 = __dsta[2];
    }
    v44 = *(_OWORD *)(a2 + 792);
    v12 = *(_QWORD *)(a2 + 744);
    v36 = *(_QWORD *)(a2 + 752);
    v35 = v12;
    v13 = *(_QWORD *)(a2 + 760);
    v39 = *(_QWORD *)(a2 + 768);
    v38 = v13;
    v14 = *(_QWORD *)(a2 + 784);
    v41 = *(_QWORD *)(a2 + 776);
    v42 = v14;
    v4 = v5;
    v5 = v24[0];
    __dsta[0] = v24[1];
    __dsta[1] = v24[2];
  }
  memcpy(__dst, __src, 0x2A0u);
  v15 = v47;
  *((_QWORD *)__dst + 84) = v46;
  *((_QWORD *)__dst + 85) = v15;
  *((_QWORD *)__dst + 86) = v48;
  *((_QWORD *)__dst + 87) = v5;
  v16 = __dsta[0];
  *((_QWORD *)__dst + 89) = __dsta[1];
  *((_QWORD *)__dst + 88) = v16;
  *((_QWORD *)__dst + 90) = v4;
  v17 = v25;
  *((_QWORD *)__dst + 92) = v26;
  *((_QWORD *)__dst + 91) = v17;
  v18 = v35;
  *((_QWORD *)__dst + 94) = v36;
  *((_QWORD *)__dst + 93) = v18;
  v19 = v38;
  *((_QWORD *)__dst + 96) = v39;
  *((_QWORD *)__dst + 95) = v19;
  *((_QWORD *)__dst + 97) = v41;
  result = v42;
  *((_QWORD *)__dst + 98) = v42;
  *(_OWORD *)(__dst + 792) = v44;
  __dst[808] = v8;
  return result;
}
