// mac 1.2.2 NEW migrate_session_worktree 0x1004fb100 d=1
__int64 *__fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h7da47a1739ade32e(
        __int64 *a1,
        __int64 a2,
        char a3,
        size_t a4,
        __int64 a5)
{
  size_t v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax

  v7 = a2 * ((a4 + a5 - 1) & -(__int64)a4); /*0x1004fb128*/
  if ( ((unsigned __int64)a2 * (unsigned __int128)((a4 + a5 - 1) & -(__int64)a4)) >> 64 == 0 /*0x1004fb13e*/
    && v7 <= 0x8000000000000000LL - a4 )
  {
    if ( !v7 ) /*0x1004fb15a*/
    {
      a1[1] = 0; /*0x1004fb183*/
      a1[2] = a4; /*0x1004fb18b*/
      goto LABEL_9; /*0x1004fb18b*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004fb15f*/
    if ( a3 ) /*0x1004fb16d*/
    {
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v7, a4); /*0x1004fb16f*/
      if ( v9 ) /*0x1004fb177*/
      {
LABEL_7:
        a1[1] = a2; /*0x1004fb179*/
        a1[2] = v9; /*0x1004fb17d*/
LABEL_9:
        v8 = 0; /*0x1004fb18f*/
        goto LABEL_10; /*0x1004fb18f*/
      }
    }
    else
    {
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, a4); /*0x1004fb1a6*/
      if ( v9 ) /*0x1004fb1ae*/
        goto LABEL_7; /*0x1004fb1ae*/
    }
    a1[1] = a4; /*0x1004fb1b0*/
    a1[2] = v7; /*0x1004fb1b4*/
    goto LABEL_3; /*0x1004fb1b8*/
  }
  a1[1] = 0; /*0x1004fb148*/
LABEL_3:
  v8 = 1; /*0x1004fb150*/
LABEL_10:
  *a1 = v8; /*0x1004fb191*/
  return a1; /*0x1004fb19b*/
}