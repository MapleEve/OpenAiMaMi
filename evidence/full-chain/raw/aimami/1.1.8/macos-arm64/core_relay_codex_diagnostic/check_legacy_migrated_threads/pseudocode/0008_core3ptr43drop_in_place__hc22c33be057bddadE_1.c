// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1004222f0 depth=1
// core3ptr43drop_in_place::hc22c33be057bddadE_1
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(
        __int64 *a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r15

  result = (__int64 (__fastcall *)(__int64))0x8000000000000000LL; /*0x1004222fa*/
  v2 = 20; /*0x100422310*/
  if ( *a1 < 0 ) /*0x100422315*/
    v2 = *a1 ^ 0x8000000000000000LL; /*0x100422315*/
  switch ( v2 ) /*0x100422331*/
  {
    case 0uLL: /*0x100422331*/
      v3 = a1[1]; /*0x10042234b*/
      if ( v3 != 0x8000000000000000LL ) /*0x100422352*/
        goto LABEL_5; /*0x100422352*/
      return result; /*0x100422352*/
    case 2uLL: /*0x100422331*/
      v4 = a1[2]; /*0x10042235a*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x10042235e*/
      if ( !*(_QWORD *)v4 ) /*0x100422364*/
        goto LABEL_13; /*0x100422364*/
      goto LABEL_12; /*0x100422364*/
    case 5uLL: /*0x100422331*/
    case 6uLL: /*0x100422331*/
    case 7uLL: /*0x100422331*/
    case 0xCuLL: /*0x100422331*/
    case 0xDuLL: /*0x100422331*/
      v3 = a1[1]; /*0x100422333*/
LABEL_5:
      if ( v3 ) /*0x10042233a*/
        goto LABEL_14; /*0x10042233a*/
      return result; /*0x10042233a*/
    case 0xFuLL: /*0x100422331*/
      v4 = a1[2]; /*0x100422371*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x100422375*/
      if ( *(_QWORD *)v4 ) /*0x100422375*/
LABEL_12:
        result = (__int64 (__fastcall *)(__int64))result(a1[1]); /*0x10042237d*/
LABEL_13:
      if ( *(_QWORD *)(v4 + 8) ) /*0x100422382*/
        goto LABEL_14; /*0x100422389*/
      return result; /*0x100422389*/
    case 0x14uLL: /*0x100422331*/
      if ( *a1 ) /*0x100422304*/
        result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004223b5*/
      if ( !a1[3] ) /*0x1004223bd*/
        return result; /*0x1004223c4*/
LABEL_14:
      result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100422392*/
      break; /*0x10042239c*/
    default:
      return result;
  }
  return result; /*0x100422396*/
}