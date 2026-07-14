// mac 1.1.8 delete_sessions node va=0x1001c7e70 depth=1
// core3ptr43drop_in_place
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(
        __int64 *a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r15

  result = (__int64 (__fastcall *)(__int64))0x8000000000000000LL; /*0x1001c7e7a*/
  v2 = 20; /*0x1001c7e90*/
  if ( *a1 < 0 ) /*0x1001c7e95*/
    v2 = *a1 ^ 0x8000000000000000LL; /*0x1001c7e95*/
  switch ( v2 ) /*0x1001c7eb1*/
  {
    case 0uLL: /*0x1001c7eb1*/
      v3 = a1[1]; /*0x1001c7ecb*/
      if ( v3 != 0x8000000000000000LL ) /*0x1001c7ed2*/
        goto LABEL_5; /*0x1001c7ed2*/
      return result; /*0x1001c7ed2*/
    case 2uLL: /*0x1001c7eb1*/
      v4 = a1[2]; /*0x1001c7eda*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x1001c7ede*/
      if ( !*(_QWORD *)v4 ) /*0x1001c7ee4*/
        goto LABEL_13; /*0x1001c7ee4*/
      goto LABEL_12; /*0x1001c7ee4*/
    case 5uLL: /*0x1001c7eb1*/
    case 6uLL: /*0x1001c7eb1*/
    case 7uLL: /*0x1001c7eb1*/
    case 0xCuLL: /*0x1001c7eb1*/
    case 0xDuLL: /*0x1001c7eb1*/
      v3 = a1[1]; /*0x1001c7eb3*/
LABEL_5:
      if ( v3 ) /*0x1001c7eba*/
        goto LABEL_14; /*0x1001c7eba*/
      return result; /*0x1001c7eba*/
    case 0xFuLL: /*0x1001c7eb1*/
      v4 = a1[2]; /*0x1001c7ef1*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x1001c7ef5*/
      if ( *(_QWORD *)v4 ) /*0x1001c7ef5*/
LABEL_12:
        result = (__int64 (__fastcall *)(__int64))result(a1[1]); /*0x1001c7efd*/
LABEL_13:
      if ( *(_QWORD *)(v4 + 8) ) /*0x1001c7f02*/
        goto LABEL_14; /*0x1001c7f09*/
      return result; /*0x1001c7f09*/
    case 0x14uLL: /*0x1001c7eb1*/
      if ( *a1 ) /*0x1001c7e84*/
        result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7f35*/
      if ( !a1[3] ) /*0x1001c7f3d*/
        return result; /*0x1001c7f44*/
LABEL_14:
      result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c7f12*/
      break; /*0x1001c7f1c*/
    default:
      return result;
  }
  return result; /*0x1001c7f16*/
}