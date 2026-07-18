// mac 1.2.2 NEW write_client_debug_log 0x1013a6ff0 d=4
__int64 __fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::he615ae145ac364e6(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        size_t a5,
        __int64 a6)
{
  size_t v7; // r14
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rax

  v7 = a4 * ((a5 + a6 - 1) & -(__int64)a5); /*0x1013a7015*/
  v8 = 1; /*0x1013a7030*/
  if ( (a4 * (unsigned __int128)((a5 + a6 - 1) & -(__int64)a5)) >> 64 == 0 && v7 <= 0x8000000000000000LL - a5 ) /*0x1013a702b*/
  {
    if ( a2 ) /*0x1013a7045*/
    {
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_realloc(a3, a2 * a6, a5, v7); /*0x1013a7057*/
      if ( !v10 ) /*0x1013a705f*/
        goto LABEL_8; /*0x1013a705f*/
    }
    else if ( v7 ) /*0x1013a7066*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1013a7068*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, a5); /*0x1013a7073*/
      if ( !v10 ) /*0x1013a707b*/
      {
LABEL_8:
        a1[1] = a5; /*0x1013a707d*/
        result = 2; /*0x1013a7081*/
        goto LABEL_11; /*0x1013a7086*/
      }
    }
    else
    {
      v10 = a5; /*0x1013a7088*/
    }
    a1[1] = v10; /*0x1013a708b*/
    result = 2; /*0x1013a708f*/
    v8 = 0; /*0x1013a7094*/
    goto LABEL_11; /*0x1013a7094*/
  }
  result = 1; /*0x1013a7038*/
  v7 = 0; /*0x1013a703d*/
LABEL_11:
  a1[result] = v7; /*0x1013a7097*/
  *a1 = v8; /*0x1013a709b*/
  return result * 8; /*0x1013a709e*/
}