// mac 1.1.8 behavioral keychain_delete_api_key 0x10112f280 d=3
__int64 __fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e(
        __int64 *a1,
        __int64 a2,
        void *a3,
        unsigned __int64 a4,
        size_t a5,
        __int64 a6)
{
  size_t v7; // r14
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rax

  v7 = a4 * ((a5 + a6 - 1) & -(__int64)a5); /*0x10112f2a5*/
  v8 = 1; /*0x10112f2c0*/
  if ( (a4 * (unsigned __int128)((a5 + a6 - 1) & -(__int64)a5)) >> 64 == 0 && v7 <= 0x8000000000000000LL - a5 ) /*0x10112f2bb*/
  {
    if ( a2 ) /*0x10112f2d5*/
    {
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_realloc(a3); /*0x10112f2e7*/
      if ( !v10 ) /*0x10112f2ef*/
        goto LABEL_8; /*0x10112f2ef*/
    }
    else if ( v7 ) /*0x10112f2f6*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10112f2f8*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, a5); /*0x10112f303*/
      if ( !v10 ) /*0x10112f30b*/
      {
LABEL_8:
        a1[1] = a5; /*0x10112f30d*/
        result = 2; /*0x10112f311*/
        goto LABEL_11; /*0x10112f316*/
      }
    }
    else
    {
      v10 = a5; /*0x10112f318*/
    }
    a1[1] = v10; /*0x10112f31b*/
    result = 2; /*0x10112f31f*/
    v8 = 0; /*0x10112f324*/
    goto LABEL_11; /*0x10112f324*/
  }
  result = 1; /*0x10112f2c8*/
  v7 = 0; /*0x10112f2cd*/
LABEL_11:
  a1[result] = v7; /*0x10112f327*/
  *a1 = v8; /*0x10112f32b*/
  return result * 8; /*0x10112f32e*/
}