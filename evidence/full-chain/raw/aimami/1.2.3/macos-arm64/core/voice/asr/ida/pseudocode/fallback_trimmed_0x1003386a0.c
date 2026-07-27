// __ZN13codexmate_lib4core5voice3asr16fallback_trimmed @ 0x1003386a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::asr::fallback_trimmed::heb319e71bf1d790a(
        signed __int64 *a1,
        _QWORD *a2,
        const void *a3,
        signed __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  size_t v10; // r12
  const void *v11; // r13
  void *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+10h] [rbp-30h]

  v6 = a2[1]; /*0x1003386bf*/
  v7 = a2[2]; /*0x1003386c3*/
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x1003386ca*/
  v10 = v9; /*0x1003386cf*/
  if ( v9 ) /*0x1003386d5*/
  {
    if ( v9 >= 0 ) /*0x1003386da*/
    {
      v11 = (const void *)v8; /*0x1003386dc*/
      v18 = v6; /*0x1003386df*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x1003386e3*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x1003386f0*/
      if ( v12 ) /*0x1003386f8*/
      {
        v13 = (__int64)v12; /*0x1003386fe*/
        memcpy(v12, v11, v10); /*0x10033870a*/
        a4 = v10; /*0x10033870f*/
        goto LABEL_13; /*0x100338712*/
      }
      goto LABEL_17; /*0x1003386f8*/
    }
LABEL_6:
    v14 = 0; /*0x100338719*/
    goto LABEL_7; /*0x100338719*/
  }
  if ( a4 < 0 ) /*0x100338717*/
    goto LABEL_6; /*0x100338717*/
  v18 = v6; /*0x100338725*/
  if ( a4 ) /*0x100338729*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x10033872b*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x100338738*/
    if ( !v15 ) /*0x100338740*/
    {
      v10 = a4; /*0x10033879e*/
LABEL_17:
      v14 = 1; /*0x1003387a1*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v10); /*0x10033871b*/
    }
    v13 = v15; /*0x100338742*/
  }
  else
  {
    v13 = 1; /*0x100338747*/
  }
  memcpy((void *)v13, a3, a4); /*0x100338757*/
LABEL_13:
  result = (__int64)a1; /*0x10033875c*/
  *a1 = a4; /*0x100338760*/
  a1[1] = v13; /*0x100338763*/
  a1[2] = a4; /*0x100338767*/
  if ( *a2 ) /*0x10033876b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, *a2, 1); /*0x10033878a*/
  return result; /*0x10033877c*/
}