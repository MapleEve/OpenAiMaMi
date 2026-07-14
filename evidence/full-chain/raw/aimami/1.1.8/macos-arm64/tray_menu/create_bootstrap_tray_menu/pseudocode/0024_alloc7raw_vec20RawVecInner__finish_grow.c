// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x101101c50 depth=2
// alloc7raw_vec20RawVecInner::finish_grow
__int64 __fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h1ffa785b217faa63(
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

  v7 = a4 * ((a5 + a6 - 1) & -(__int64)a5); /*0x101101c75*/
  v8 = 1; /*0x101101c90*/
  if ( (a4 * (unsigned __int128)((a5 + a6 - 1) & -(__int64)a5)) >> 64 == 0 && v7 <= 0x8000000000000000LL - a5 ) /*0x101101c8b*/
  {
    if ( a2 ) /*0x101101ca5*/
    {
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_realloc(a3, a2 * a6, a5, v7, a3, a2 * a6); /*0x101101cb7*/
      if ( !v10 ) /*0x101101cbf*/
        goto LABEL_8; /*0x101101cbf*/
    }
    else if ( v7 ) /*0x101101cc6*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101101cc8*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, a5); /*0x101101cd3*/
      if ( !v10 ) /*0x101101cdb*/
      {
LABEL_8:
        a1[1] = a5; /*0x101101cdd*/
        result = 2; /*0x101101ce1*/
        goto LABEL_11; /*0x101101ce6*/
      }
    }
    else
    {
      v10 = a5; /*0x101101ce8*/
    }
    a1[1] = v10; /*0x101101ceb*/
    result = 2; /*0x101101cef*/
    v8 = 0; /*0x101101cf4*/
    goto LABEL_11; /*0x101101cf4*/
  }
  result = 1; /*0x101101c98*/
  v7 = 0; /*0x101101c9d*/
LABEL_11:
  a1[result] = v7; /*0x101101cf7*/
  *a1 = v8; /*0x101101cfb*/
  return result * 8; /*0x101101cfe*/
}