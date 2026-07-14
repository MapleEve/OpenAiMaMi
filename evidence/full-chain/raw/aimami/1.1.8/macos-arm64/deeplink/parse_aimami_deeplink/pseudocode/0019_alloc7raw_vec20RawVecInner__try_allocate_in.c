// mac 1.1.8 parse_aimami_deeplink node va=0x1007ca860 depth=1
// alloc7raw_vec20RawVecInner::try_allocate_in
__int64 *__fastcall alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h384b07dd33e8b3b5(
        __int64 *a1,
        __int64 a2,
        char a3,
        size_t a4,
        __int64 a5)
{
  size_t v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax

  v7 = a2 * ((a4 + a5 - 1) & -(__int64)a4); /*0x1007ca888*/
  if ( ((unsigned __int64)a2 * (unsigned __int128)((a4 + a5 - 1) & -(__int64)a4)) >> 64 == 0 /*0x1007ca89e*/
    && v7 <= 0x8000000000000000LL - a4 )
  {
    if ( !v7 ) /*0x1007ca8ba*/
    {
      a1[1] = 0; /*0x1007ca8e3*/
      a1[2] = a4; /*0x1007ca8eb*/
      goto LABEL_9; /*0x1007ca8eb*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007ca8bf*/
    if ( a3 ) /*0x1007ca8cd*/
    {
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v7, a4); /*0x1007ca8cf*/
      if ( v9 ) /*0x1007ca8d7*/
      {
LABEL_7:
        a1[1] = a2; /*0x1007ca8d9*/
        a1[2] = v9; /*0x1007ca8dd*/
LABEL_9:
        v8 = 0; /*0x1007ca8ef*/
        goto LABEL_10; /*0x1007ca8ef*/
      }
    }
    else
    {
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, a4); /*0x1007ca906*/
      if ( v9 ) /*0x1007ca90e*/
        goto LABEL_7; /*0x1007ca90e*/
    }
    a1[1] = a4; /*0x1007ca910*/
    a1[2] = v7; /*0x1007ca914*/
    goto LABEL_3; /*0x1007ca918*/
  }
  a1[1] = 0; /*0x1007ca8a8*/
LABEL_3:
  v8 = 1; /*0x1007ca8b0*/
LABEL_10:
  *a1 = v8; /*0x1007ca8f1*/
  return a1; /*0x1007ca8fb*/
}