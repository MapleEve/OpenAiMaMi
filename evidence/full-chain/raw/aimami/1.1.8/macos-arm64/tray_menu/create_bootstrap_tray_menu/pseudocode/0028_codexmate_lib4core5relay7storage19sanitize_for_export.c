// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x1004b14b0 depth=2
// codexmate_lib4core5relay7storage19sanitize_for_export
__int64 __fastcall codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92(__int64 a1, __int64 a2)
{
  int v3; // r12d
  char v4; // r15
  __int16 v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  char v8; // r13
  char v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD __dst[19]; // [rsp+8h] [rbp-218h] BYREF
  unsigned __int64 v23; // [rsp+A0h] [rbp-180h] BYREF
  _QWORD __src[19]; // [rsp+A8h] [rbp-178h] BYREF
  _QWORD v25[10]; // [rsp+140h] [rbp-E0h] BYREF
  _QWORD v26[3]; // [rsp+190h] [rbp-90h] BYREF
  unsigned __int64 v27; // [rsp+1A8h] [rbp-78h]
  __int64 v28; // [rsp+1B0h] [rbp-70h]
  __int64 v29; // [rsp+1B8h] [rbp-68h]
  __int64 v30; // [rsp+1C0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+1C8h] [rbp-58h]
  __int64 v32; // [rsp+1D0h] [rbp-50h]
  int v33; // [rsp+1DCh] [rbp-44h]
  __int64 v34; // [rsp+1E0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+1E8h] [rbp-38h]
  __int64 v36; // [rsp+1F0h] [rbp-30h]

  v3 = *(_DWORD *)(a2 + 336); /*0x1004b14ca*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7af1916271c065d2(v26); /*0x1004b14d8*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd2fe128b4c6cf4cc(&v23, a2 + 24); /*0x1004b14e8*/
  v29 = __src[1]; /*0x1004b14f4*/
  v28 = __src[0]; /*0x1004b1506*/
  v27 = v23; /*0x1004b150a*/
  v4 = *(_BYTE *)(a2 + 122); /*0x1004b1512*/
  v5 = *(_WORD *)(a2 + 120); /*0x1004b1517*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v34, a2 + 48); /*0x1004b1520*/
  v33 = v3; /*0x1004b1525*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, a2 + 72); /*0x1004b1534*/
  v6 = 0x8000000000000000LL; /*0x1004b1539*/
  v7 = 0x8000000000000000LL; /*0x1004b1549*/
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 96)) ) /*0x1004b154c*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23, a2 + 96); /*0x1004b1559*/
    v7 = v23; /*0x1004b155e*/
    v30 = __src[0]; /*0x1004b156c*/
    v31 = __src[1]; /*0x1004b1577*/
  }
  BYTE2(v25[9]) = v4; /*0x1004b157b*/
  LOWORD(v25[9]) = v5; /*0x1004b1582*/
  v25[0] = v34; /*0x1004b1592*/
  v25[1] = v35; /*0x1004b1599*/
  v25[2] = v36; /*0x1004b15a4*/
  v25[3] = __dst[0]; /*0x1004b15b9*/
  v25[4] = __dst[1]; /*0x1004b15c0*/
  v25[5] = __dst[2]; /*0x1004b15ce*/
  v25[6] = v7; /*0x1004b15d5*/
  v25[7] = v30; /*0x1004b15e4*/
  v25[8] = v31; /*0x1004b15eb*/
  v8 = *(_BYTE *)(a2 + 340); /*0x1004b15f2*/
  v9 = *(_BYTE *)(a2 + 341); /*0x1004b15fa*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v30, a2 + 128); /*0x1004b160d*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v34, a2 + 152); /*0x1004b161d*/
  if ( *(_QWORD *)(a2 + 176) != 0x8000000000000000LL ) /*0x1004b1629*/
  {
    _$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$u20$as$u20$core..clone..Clone$GT$::clone::h84bd7d278a4c4124( /*0x1004b163c*/
      &v23,
      a2 + 176);
    v6 = v23; /*0x1004b1641*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1004b165b*/
  }
  *(_DWORD *)(a1 + 336) = v33; /*0x1004b1663*/
  v10 = v26[1]; /*0x1004b1670*/
  *(_QWORD *)a1 = v26[0]; /*0x1004b1677*/
  *(_QWORD *)(a1 + 8) = v10; /*0x1004b167a*/
  *(_QWORD *)(a1 + 16) = v26[2]; /*0x1004b1682*/
  v11 = v28; /*0x1004b168a*/
  *(_QWORD *)(a1 + 24) = v27; /*0x1004b168e*/
  *(_QWORD *)(a1 + 32) = v11; /*0x1004b1692*/
  *(_QWORD *)(a1 + 40) = v29; /*0x1004b169a*/
  qmemcpy((void *)(a1 + 48), v25, 0x50u); /*0x1004b16ae*/
  *(_BYTE *)(a1 + 340) = v8; /*0x1004b16b1*/
  *(_BYTE *)(a1 + 341) = v9; /*0x1004b16b8*/
  v12 = v31; /*0x1004b16c3*/
  *(_QWORD *)(a1 + 128) = v30; /*0x1004b16c7*/
  *(_QWORD *)(a1 + 136) = v12; /*0x1004b16ce*/
  *(_QWORD *)(a1 + 144) = v32; /*0x1004b16d9*/
  v13 = v35; /*0x1004b16e4*/
  *(_QWORD *)(a1 + 152) = v34; /*0x1004b16e8*/
  *(_QWORD *)(a1 + 160) = v13; /*0x1004b16ef*/
  *(_QWORD *)(a1 + 168) = v36; /*0x1004b16fa*/
  *(_QWORD *)(a1 + 176) = v6; /*0x1004b1701*/
  memcpy((void *)(a1 + 184), __dst, 0x98u); /*0x1004b171b*/
  v14 = *(_QWORD *)(a1 + 16); /*0x1004b1720*/
  if ( v14 ) /*0x1004b1727*/
  {
    v15 = *(_QWORD *)(a1 + 8); /*0x1004b172d*/
    v16 = 232 * v14; /*0x1004b1731*/
    v17 = 232 * v14 - 232; /*0x1004b1738*/
    v18 = *(_QWORD **)(a1 + 8); /*0x1004b1759*/
    if ( (~(v17 / 0xE8) & 7) != 0 ) /*0x1004b1760*/
    {
      v19 = -(__int64)(((unsigned __int8)(v17 / 0xE8) + 1) & 7); /*0x1004b1767*/
      v18 = *(_QWORD **)(a1 + 8); /*0x1004b176a*/
      do /*0x1004b1781*/
      {
        v18[11] = 0; /*0x1004b1770*/
        v18 += 29; /*0x1004b1778*/
        ++v19; /*0x1004b177e*/
      }
      while ( v19 ); /*0x1004b1781*/
    }
    if ( v17 >= 0x658 ) /*0x1004b178a*/
    {
      v20 = (_QWORD *)(v16 + v15); /*0x1004b178c*/
      do /*0x1004b17ee*/
      {
        v18[11] = 0; /*0x1004b1790*/
        v18[40] = 0; /*0x1004b1798*/
        v18[69] = 0; /*0x1004b17a3*/
        v18[98] = 0; /*0x1004b17ae*/
        v18[127] = 0; /*0x1004b17b9*/
        v18[156] = 0; /*0x1004b17c4*/
        v18[185] = 0; /*0x1004b17cf*/
        v18[214] = 0; /*0x1004b17da*/
        v18 += 232; /*0x1004b17e5*/
      }
      while ( v18 != v20 ); /*0x1004b17ee*/
    }
  }
  return a1; /*0x1004b17f3*/
}