// mac 1.2.2 NEW migrate_session_worktree 0x100a46720 d=1
__int64 (__fastcall *__fastcall core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(
        __int64 *a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r15

  result = (__int64 (__fastcall *)(__int64))0x8000000000000000LL; /*0x100a4672a*/
  v2 = 20; /*0x100a46740*/
  if ( *a1 < 0 ) /*0x100a46745*/
    v2 = *a1 ^ 0x8000000000000000LL; /*0x100a46745*/
  switch ( v2 ) /*0x100a46761*/
  {
    case 0uLL: /*0x100a46761*/
      v3 = a1[1]; /*0x100a4677b*/
      if ( v3 != 0x8000000000000000LL ) /*0x100a46782*/
        goto LABEL_5; /*0x100a46782*/
      return result; /*0x100a46782*/
    case 2uLL: /*0x100a46761*/
      v4 = a1[2]; /*0x100a4678a*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x100a4678e*/
      if ( !*(_QWORD *)v4 ) /*0x100a46794*/
        goto LABEL_13; /*0x100a46794*/
      goto LABEL_12; /*0x100a46794*/
    case 5uLL: /*0x100a46761*/
    case 6uLL: /*0x100a46761*/
    case 7uLL: /*0x100a46761*/
    case 0xCuLL: /*0x100a46761*/
    case 0xDuLL: /*0x100a46761*/
      v3 = a1[1]; /*0x100a46763*/
LABEL_5:
      if ( v3 ) /*0x100a4676a*/
        goto LABEL_14; /*0x100a4676a*/
      return result; /*0x100a4676a*/
    case 0xFuLL: /*0x100a46761*/
      v4 = a1[2]; /*0x100a467a1*/
      result = *(__int64 (__fastcall **)(__int64))v4; /*0x100a467a5*/
      if ( *(_QWORD *)v4 ) /*0x100a467a5*/
LABEL_12:
        result = (__int64 (__fastcall *)(__int64))result(a1[1]); /*0x100a467ad*/
LABEL_13:
      if ( *(_QWORD *)(v4 + 8) ) /*0x100a467b2*/
        goto LABEL_14; /*0x100a467b9*/
      return result; /*0x100a467b9*/
    case 0x14uLL: /*0x100a46761*/
      if ( *a1 ) /*0x100a46734*/
        result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a467e5*/
      if ( !a1[3] ) /*0x100a467ed*/
        return result; /*0x100a467f4*/
LABEL_14:
      result = (__int64 (__fastcall *)(__int64))_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a467c2*/
      break; /*0x100a467cc*/
    default:
      return result;
  }
  return result; /*0x100a467c6*/
}