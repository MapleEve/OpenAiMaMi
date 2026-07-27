// IDA Hex-Rays decompile evidence
// addr: 0x1007e11b0
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(
        __int64 a1)
{
  __int64 v1; // rsi
  double result; // xmm0_8
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // r15
  _QWORD *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rsi
  bool v42; // cf
  __int64 v43; // rsi

  v1 = *(_QWORD *)(a1 + 504); /*0x1007e11be*/
  if ( v1 ) /*0x1007e11c8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 512), v1, 1); /*0x1007e11d6*/
  v3 = *(_QWORD *)(a1 + 528); /*0x1007e11db*/
  if ( v3 ) /*0x1007e11e5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 536), v3, 1); /*0x1007e11f3*/
  v4 = *(_QWORD *)(a1 + 552); /*0x1007e11f8*/
  if ( v4 ) /*0x1007e1202*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 560), v4, 1); /*0x1007e1210*/
  v5 = *(_QWORD *)(a1 + 576); /*0x1007e1215*/
  if ( v5 ) /*0x1007e121f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 584), v5, 1); /*0x1007e122d*/
  v6 = *(_QWORD *)(a1 + 600); /*0x1007e1232*/
  if ( v6 ) /*0x1007e123c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 608), v6, 1); /*0x1007e124a*/
  v7 = *(_QWORD *)(a1 + 624); /*0x1007e124f*/
  if ( v7 ) /*0x1007e1259*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 632), v7, 1); /*0x1007e1267*/
  v8 = *(_QWORD *)(a1 + 648); /*0x1007e126c*/
  if ( v8 ) /*0x1007e1276*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 656), v8, 1); /*0x1007e1284*/
  v9 = *(_QWORD *)(a1 + 16); /*0x1007e1289*/
  if ( v9 ) /*0x1007e1290*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 24), v9, 1); /*0x1007e129b*/
  v10 = *(_QWORD *)(a1 + 64); /*0x1007e12a0*/
  if ( 2 * v10 ) /*0x1007e12a4*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 72), v10, 1); /*0x1007e12ee*/
    v11 = *(_QWORD *)(a1 + 88); /*0x1007e12f3*/
    if ( !(2 * v11) ) /*0x1007e1302*/
    {
LABEL_19:
      v12 = *(_QWORD *)(a1 + 112); /*0x1007e12c2*/
      if ( !(2 * v12) ) /*0x1007e12c6*/
        goto LABEL_20; /*0x1007e12d1*/
      goto LABEL_24; /*0x1007e12d1*/
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 88); /*0x1007e12b1*/
    if ( !(2 * v11) ) /*0x1007e12b5*/
      goto LABEL_19; /*0x1007e12c0*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 96), v11, 1); /*0x1007e130d*/
  v12 = *(_QWORD *)(a1 + 112); /*0x1007e1312*/
  if ( !(2 * v12) ) /*0x1007e1321*/
  {
LABEL_20:
    v13 = *(_QWORD *)(a1 + 48); /*0x1007e12d3*/
    v14 = *(_QWORD *)(a1 + 56); /*0x1007e12d7*/
    if ( !v14 ) /*0x1007e12de*/
      goto LABEL_29; /*0x1007e12de*/
    goto LABEL_25; /*0x1007e12de*/
  }
LABEL_24:
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 120), v12, 1); /*0x1007e1323*/
  v13 = *(_QWORD *)(a1 + 48); /*0x1007e1331*/
  v14 = *(_QWORD *)(a1 + 56); /*0x1007e1335*/
  if ( !v14 ) /*0x1007e133c*/
    goto LABEL_29; /*0x1007e133c*/
LABEL_25:
  v15 = (_QWORD *)(v13 + 24); /*0x1007e133e*/
  do /*0x1007e1357*/
  {
    v16 = *(v15 - 1); /*0x1007e1359*/
    if ( v16 ) /*0x1007e1361*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v15, v16, 1); /*0x1007e136c*/
    v15 += 5; /*0x1007e1350*/
    --v14; /*0x1007e1354*/
  }
  while ( v14 ); /*0x1007e1357*/
LABEL_29:
  v17 = *(_QWORD *)(a1 + 40); /*0x1007e1373*/
  if ( v17 ) /*0x1007e137a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 40 * v17, 8); /*0x1007e138c*/
  v18 = *(_QWORD *)(a1 + 704); /*0x1007e1391*/
  if ( 2 * v18 ) /*0x1007e1398*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 712), v18, 1); /*0x1007e13c6*/
    v19 = *(_QWORD *)(a1 + 688); /*0x1007e13cb*/
    v20 = *(_QWORD *)(a1 + 696); /*0x1007e13d2*/
    if ( !v20 ) /*0x1007e13dc*/
      goto LABEL_37; /*0x1007e13dc*/
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 688); /*0x1007e13a5*/
    v20 = *(_QWORD *)(a1 + 696); /*0x1007e13ac*/
    if ( !v20 ) /*0x1007e13b6*/
      goto LABEL_37; /*0x1007e13b6*/
  }
  v21 = v19; /*0x1007e13de*/
  do /*0x1007e1402*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v21); /*0x1007e13f3*/
    v21 += 424; /*0x1007e13f8*/
    --v20; /*0x1007e13ff*/
  }
  while ( v20 ); /*0x1007e1402*/
LABEL_37:
  v22 = *(_QWORD *)(a1 + 680); /*0x1007e1404*/
  if ( v22 ) /*0x1007e140e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 424 * v22, 8); /*0x1007e141f*/
  v23 = *(_QWORD *)(a1 + 776); /*0x1007e1424*/
  v24 = *(_QWORD *)(a1 + 784); /*0x1007e142b*/
  if ( v24 ) /*0x1007e1435*/
  {
    v25 = (_QWORD *)(v23 + 128); /*0x1007e1437*/
    do /*0x1007e144a*/
    {
      v26 = *(v25 - 1); /*0x1007e144c*/
      if ( v26 ) /*0x1007e1454*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v25, v26, 1); /*0x1007e145f*/
      v25 += 20; /*0x1007e1440*/
      --v24; /*0x1007e1447*/
    }
    while ( v24 ); /*0x1007e144a*/
  }
  v27 = *(_QWORD *)(a1 + 768); /*0x1007e1466*/
  if ( v27 ) /*0x1007e1470*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 160 * v27, 8); /*0x1007e1482*/
  v28 = *(_QWORD *)(a1 + 816); /*0x1007e1487*/
  v29 = *(_QWORD *)(a1 + 824); /*0x1007e148e*/
  if ( v29 ) /*0x1007e1498*/
  {
    v30 = *(_QWORD *)(a1 + 816); /*0x1007e149a*/
    do /*0x1007e14b2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v30); /*0x1007e14a3*/
      v30 += 352; /*0x1007e14a8*/
      --v29; /*0x1007e14af*/
    }
    while ( v29 ); /*0x1007e14b2*/
  }
  v31 = *(_QWORD *)(a1 + 808); /*0x1007e14b4*/
  if ( v31 ) /*0x1007e14be*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 352 * v31, 8); /*0x1007e14cf*/
  if ( *(_DWORD *)(a1 + 152) != 2 ) /*0x1007e14db*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(a1 + 152); /*0x1007e14e4*/
  v32 = *(_QWORD *)(a1 + 840); /*0x1007e14e9*/
  v33 = *(_QWORD *)(a1 + 848); /*0x1007e14f0*/
  if ( v33 ) /*0x1007e14fa*/
  {
    v34 = (_QWORD *)(v32 + 32); /*0x1007e14fc*/
    do /*0x1007e1517*/
    {
      v35 = *(v34 - 4); /*0x1007e1519*/
      if ( v35 ) /*0x1007e1521*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v34 - 3), v35, 1); /*0x1007e152d*/
      v36 = *(v34 - 1); /*0x1007e1532*/
      if ( v36 ) /*0x1007e153a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v34, v36, 1); /*0x1007e1545*/
      v34 += 6; /*0x1007e1510*/
      --v33; /*0x1007e1514*/
    }
    while ( v33 ); /*0x1007e1517*/
  }
  v37 = *(_QWORD *)(a1 + 832); /*0x1007e154c*/
  if ( v37 ) /*0x1007e1556*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 48 * v37, 8); /*0x1007e1568*/
  v38 = *(_QWORD *)(a1 + 856); /*0x1007e156d*/
  if ( 2 * v38 ) /*0x1007e1574*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 864), v38, 1); /*0x1007e15c9*/
    v39 = *(_QWORD *)(a1 + 880); /*0x1007e15ce*/
    if ( !(2 * v39) ) /*0x1007e15e0*/
    {
LABEL_64:
      v40 = *(_QWORD *)(a1 + 912); /*0x1007e1595*/
      if ( !(2 * v40) ) /*0x1007e159c*/
        goto LABEL_65; /*0x1007e15a7*/
LABEL_69:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 920), v40, 1); /*0x1007e1607*/
      v41 = *(_QWORD *)(a1 + 936); /*0x1007e1618*/
      v42 = v41 != 0; /*0x1007e1622*/
      if ( __OFSUB__(-v41, 1) ) /*0x1007e1625*/
        return result; /*0x1007e1625*/
      goto LABEL_70; /*0x1007e1625*/
    }
  }
  else
  {
    v39 = *(_QWORD *)(a1 + 880); /*0x1007e1581*/
    if ( !(2 * v39) ) /*0x1007e1588*/
      goto LABEL_64; /*0x1007e1593*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 888), v39, 1); /*0x1007e15ee*/
  v40 = *(_QWORD *)(a1 + 912); /*0x1007e15f3*/
  if ( 2 * v40 ) /*0x1007e15fa*/
    goto LABEL_69; /*0x1007e1605*/
LABEL_65:
  v41 = *(_QWORD *)(a1 + 936); /*0x1007e15a9*/
  v42 = v41 != 0; /*0x1007e15b3*/
  if ( __OFSUB__(-v41, 1) ) /*0x1007e15b3*/
    return result; /*0x1007e15b6*/
LABEL_70:
  if ( v42 ) /*0x1007e1627*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 944), v41, 1); /*0x1007e1635*/
  v43 = *(_QWORD *)(a1 + 960); /*0x1007e163a*/
  if ( 2 * v43 ) /*0x1007e1641*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 968), v43, 1); /*0x1007e166b*/
  return result; /*0x1007e164e*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1007e18b0  __ZN4core3ptr66drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$17h0451328b981148ccE_0
// 0x1007e0ba0  __ZN4core3ptr64drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$17hc7fc47f5b489c83fE_6
