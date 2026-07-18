// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x10044f9b0 d=1
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(
        __int64 *a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r15

  result = (__int64 (__fastcall *)(__int64))0x8000000000000000LL; /*0x10044f9ba*/
  v2 = 20; /*0x10044f9d0*/
  if ( *a1 < 0 ) /*0x10044f9d5*/
    v2 = *a1 ^ 0x8000000000000000LL; /*0x10044f9d5*/
  switch ( v2 ) /*0x10044f9f1*/
  {
    case 0uLL: /*0x10044f9f1*/
      v3 = a1[1]; /*0x10044fa0b*/
      if ( v3 != 0x8000000000000000LL ) /*0x10044fa12*/
        goto LABEL_5; /*0x10044fa12*/
      return result; /*0x10044fa12*/
    case 2uLL: /*0x10044f9f1*/
      v4 = a1[2]; /*0x10044fa1a*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x10044fa1e*/
      if ( !*(_QWORD *)v4 ) /*0x10044fa24*/
        goto LABEL_13; /*0x10044fa24*/
      goto LABEL_12; /*0x10044fa24*/
    case 5uLL: /*0x10044f9f1*/
    case 6uLL: /*0x10044f9f1*/
    case 7uLL: /*0x10044f9f1*/
    case 0xCuLL: /*0x10044f9f1*/
    case 0xDuLL: /*0x10044f9f1*/
      v3 = a1[1]; /*0x10044f9f3*/
LABEL_5:
      if ( v3 ) /*0x10044f9fa*/
        goto LABEL_14; /*0x10044f9fa*/
      return result; /*0x10044f9fa*/
    case 0xFuLL: /*0x10044f9f1*/
      v4 = a1[2]; /*0x10044fa31*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x10044fa35*/
      if ( *(_QWORD *)v4 ) /*0x10044fa35*/
LABEL_12:
        result = (__int64 (__fastcall *)(__int64))result(a1[1]); /*0x10044fa3d*/
LABEL_13:
      if ( *(_QWORD *)(v4 + 8) ) /*0x10044fa42*/
        goto LABEL_14; /*0x10044fa49*/
      return result; /*0x10044fa49*/
    case 0x14uLL: /*0x10044f9f1*/
      if ( *a1 ) /*0x10044f9c4*/
        result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10044fa75*/
      if ( !a1[3] ) /*0x10044fa7d*/
        return result; /*0x10044fa84*/
LABEL_14:
      result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10044fa52*/
      break; /*0x10044fa5c*/
    default:
      return result;
  }
  return result; /*0x10044fa56*/
}