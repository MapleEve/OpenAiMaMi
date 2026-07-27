// __ZN13codexmate_lib4core5voice3llm16fallback_trimmed @ 0x100663020 | 基线 same-set
double __fastcall codexmate_lib::core::voice::llm::fallback_trimmed::h679e1e4a37a82b57(
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
  double result; // xmm0_8
  __int64 v18; // [rsp+10h] [rbp-30h]

  v6 = a2[1]; /*0x10066303f*/
  v7 = a2[2]; /*0x100663043*/
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x10066304a*/
  v10 = v9; /*0x10066304f*/
  if ( v9 ) /*0x100663055*/
  {
    if ( v9 >= 0 ) /*0x10066305a*/
    {
      v11 = (const void *)v8; /*0x10066305c*/
      v18 = v6; /*0x10066305f*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x100663063*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100663070*/
      if ( v12 ) /*0x100663078*/
      {
        v13 = (__int64)v12; /*0x10066307e*/
        memcpy(v12, v11, v10); /*0x10066308a*/
        a4 = v10; /*0x10066308f*/
        goto LABEL_13; /*0x100663092*/
      }
      goto LABEL_17; /*0x100663078*/
    }
LABEL_6:
    v14 = 0; /*0x100663099*/
    goto LABEL_7; /*0x100663099*/
  }
  if ( a4 < 0 ) /*0x100663097*/
    goto LABEL_6; /*0x100663097*/
  v18 = v6; /*0x1006630a5*/
  if ( a4 ) /*0x1006630a9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x1006630ab*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1006630b8*/
    if ( !v15 ) /*0x1006630c0*/
    {
      v10 = a4; /*0x10066311e*/
LABEL_17:
      v14 = 1; /*0x100663121*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v10); /*0x10066309b*/
    }
    v13 = v15; /*0x1006630c2*/
  }
  else
  {
    v13 = 1; /*0x1006630c7*/
  }
  memcpy((void *)v13, a3, a4); /*0x1006630d7*/
LABEL_13:
  *a1 = a4; /*0x1006630dc*/
  a1[1] = v13; /*0x1006630e3*/
  a1[2] = a4; /*0x1006630e7*/
  if ( *a2 ) /*0x1006630eb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, *a2, 1); /*0x10066310a*/
  return result; /*0x1006630fc*/
}