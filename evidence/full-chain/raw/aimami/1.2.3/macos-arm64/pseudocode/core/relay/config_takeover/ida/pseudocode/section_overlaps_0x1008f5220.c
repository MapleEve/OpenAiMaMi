// __ZN13codexmate_lib4core5relay15config_takeover16section_overlaps @ 0x1008f5220 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::section_overlaps::h06c28989e9c4d786(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  size_t v11; // rdx
  __int64 v13[7]; // [rsp+8h] [rbp-E8h] BYREF
  char v14; // [rsp+40h] [rbp-B0h]
  __int16 v15; // [rsp+48h] [rbp-A8h]
  __int64 v16[7]; // [rsp+50h] [rbp-A0h] BYREF
  char v17; // [rsp+88h] [rbp-68h]
  __int16 v18; // [rsp+90h] [rbp-60h]
  __int64 v19[2]; // [rsp+98h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp-48h]
  __int64 v21[2]; // [rsp+B0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+C0h] [rbp-30h]

  v16[0] = 0; /*0x1008f523a*/
  v16[1] = a2; /*0x1008f5245*/
  v16[2] = a1; /*0x1008f524c*/
  v16[3] = a2; /*0x1008f5253*/
  v16[4] = 0; /*0x1008f525a*/
  v16[5] = a2; /*0x1008f5262*/
  v16[6] = 0x2E0000002ELL; /*0x1008f5270*/
  v17 = 1; /*0x1008f5274*/
  v18 = 1; /*0x1008f5278*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1008f5289*/
    v21,
    v16);
  v13[0] = 0; /*0x1008f528e*/
  v13[1] = a4; /*0x1008f5299*/
  v13[2] = a3; /*0x1008f52a0*/
  v13[3] = a4; /*0x1008f52a7*/
  v13[4] = 0; /*0x1008f52ae*/
  v13[5] = a4; /*0x1008f52b9*/
  v13[6] = 0x2E0000002ELL; /*0x1008f52c0*/
  v14 = 1; /*0x1008f52c7*/
  v15 = 1; /*0x1008f52ce*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1008f52e2*/
    v19,
    v13);
  v6 = v21[1]; /*0x1008f52e7*/
  v7 = v22; /*0x1008f52eb*/
  v8 = v19[1]; /*0x1008f52ef*/
  if ( v20 < v22 ) /*0x1008f52fa*/
    v7 = v20; /*0x1008f52fa*/
  LOBYTE(a3) = 1; /*0x1008f52fe*/
  if ( v7 ) /*0x1008f5304*/
  {
    v9 = 16 * v7; /*0x1008f5306*/
    v10 = 0; /*0x1008f530a*/
    while ( 1 ) /*0x1008f5310*/
    {
      v11 = *(_QWORD *)(v6 + v10 + 8); /*0x1008f5310*/
      if ( v11 != *(_QWORD *)(v8 + v10 + 8) || memcmp(*(const void **)(v6 + v10), *(const void **)(v8 + v10), v11) ) /*0x1008f5324*/
        break; /*0x1008f5324*/
      v10 += 16; /*0x1008f532d*/
      if ( v9 == v10 ) /*0x1008f5334*/
        goto LABEL_10; /*0x1008f5334*/
    }
    LODWORD(a3) = 0; /*0x1008f5338*/
  }
LABEL_10:
  if ( v19[0] ) /*0x1008f5342*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 16 * v19[0], 8); /*0x1008f5350*/
  if ( v21[0] ) /*0x1008f535c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 16 * v21[0], 8); /*0x1008f536a*/
  return (unsigned int)a3; /*0x1008f5372*/
}