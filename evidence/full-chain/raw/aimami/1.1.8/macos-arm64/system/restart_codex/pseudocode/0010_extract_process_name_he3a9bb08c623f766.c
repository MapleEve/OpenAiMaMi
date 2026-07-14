// codexmate_lib::platform::process::extract_process_name @ 0x1001c0680
// session <审计会话> | AiMaMi 1.1.8 macos-arm64 (universal Mach-O, x86_64 slice; app-level facts only, arch noise filtered)
// role in restart_codex(20/29) call tree; source=ida.decompile, 反编译器 real body, no truncation

__int64 *__fastcall codexmate_lib::platform::process::extract_process_name::he3a9bb08c623f766(
        __int64 *a1,
        __int64 a2,
        size_t a3)
{
  __int64 v4; // r15
  __int64 *v5; // r14
  size_t v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r12
  const void *v12; // r13
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r12
  const void *v17; // rsi
  int v19; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+8h] [rbp-98h]
  __int64 v21; // [rsp+10h] [rbp-90h]
  size_t __n; // [rsp+18h] [rbp-88h]
  const void *v23; // [rsp+20h] [rbp-80h]
  __int64 *v24; // [rsp+28h] [rbp-78h]
  __int64 v25; // [rsp+30h] [rbp-70h] BYREF
  size_t v26; // [rsp+38h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-60h] BYREF
  size_t v28; // [rsp+48h] [rbp-58h]
  __int64 v29; // [rsp+50h] [rbp-50h]
  size_t v30; // [rsp+58h] [rbp-48h]
  __int64 v31; // [rsp+60h] [rbp-40h]
  __int16 v32; // [rsp+68h] [rbp-38h]
  __int16 v33; // [rsp+70h] [rbp-30h]

  v4 = a2; /*0x1001c0694*/
  v5 = a1; /*0x1001c0697*/
  v25 = 0; /*0x1001c069e*/
  v26 = a3; /*0x1001c06a6*/
  v27 = a2; /*0x1001c06aa*/
  v28 = a3; /*0x1001c06ae*/
  v29 = a2; /*0x1001c06b2*/
  v30 = a2 + a3; /*0x1001c06b6*/
  v31 = 0; /*0x1001c06ba*/
  v32 = 1; /*0x1001c06c2*/
  v7 = core::iter::traits::iterator::Iterator::try_fold::hec44bcbfaf50b30d(&v25); /*0x1001c06d1*/
  if ( !v7 ) /*0x1001c06d7*/
  {
    v6 = a3; /*0x1001c06d7*/
    v7 = a2; /*0x1001c06db*/
  }
  v25 = 0; /*0x1001c06df*/
  v26 = v6; /*0x1001c06e7*/
  v27 = v7; /*0x1001c06ef*/
  v28 = v6; /*0x1001c06f3*/
  v29 = 0; /*0x1001c06f7*/
  __n = v6; /*0x1001c06ff*/
  v30 = v6; /*0x1001c0706*/
  v31 = 0x2F0000002FLL; /*0x1001c0714*/
  LOBYTE(v32) = 1; /*0x1001c0718*/
  v33 = 1; /*0x1001c071c*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1001c0729*/
    &v19,
    &v27);
  v23 = (const void *)v7; /*0x1001c0735*/
  if ( v19 == 1 ) /*0x1001c0739*/
  {
    v24 = a1; /*0x1001c073b*/
    v8 = v7; /*0x1001c0746*/
    while ( 1 ) /*0x1001c0750*/
    {
      v9 = v8; /*0x1001c0750*/
      v10 = v20; /*0x1001c0753*/
      v11 = v25; /*0x1001c0761*/
      v25 = v21; /*0x1001c0765*/
      if ( HIBYTE(v33) ) /*0x1001c076d*/
        break; /*0x1001c076d*/
      v8 = v27; /*0x1001c076f*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1001c077a*/
        &v19,
        &v27);
      if ( !(_BYTE)v19 ) /*0x1001c0786*/
      {
        v4 = v10 - v11; /*0x1001c0788*/
        v12 = (const void *)(v11 + v9); /*0x1001c078b*/
        v5 = v24; /*0x1001c078e*/
        if ( HIBYTE(v33) ) /*0x1001c0796*/
          goto LABEL_12; /*0x1001c0796*/
        goto LABEL_10; /*0x1001c0796*/
      }
    }
    v4 = v20 - v11; /*0x1001c07e0*/
    v12 = (const void *)(v11 + v8); /*0x1001c07e3*/
    v5 = v24; /*0x1001c07e6*/
    if ( !v12 ) /*0x1001c07ed*/
      v4 = __n; /*0x1001c07ed*/
    v13 = v4 == 0; /*0x1001c07f5*/
    if ( v4 >= 0 ) /*0x1001c07f8*/
      goto LABEL_20; /*0x1001c07f8*/
LABEL_15:
    v14 = 0; /*0x1001c07d3*/
    goto LABEL_16; /*0x1001c07d3*/
  }
  v12 = nullptr; /*0x1001c079a*/
  if ( HIBYTE(v33) ) /*0x1001c07a1*/
    goto LABEL_12; /*0x1001c07a1*/
LABEL_10:
  if ( ((unsigned __int8)v33 | (v26 != v25)) == 1 ) /*0x1001c07b7*/
  {
    v4 = v26 - v25; /*0x1001c07bd*/
    v12 = (const void *)(v27 + v25); /*0x1001c07c0*/
  }
LABEL_12:
  if ( !v12 ) /*0x1001c07c6*/
    v4 = __n; /*0x1001c07c6*/
  v13 = v4 == 0; /*0x1001c07ce*/
  if ( v4 < 0 ) /*0x1001c07d1*/
    goto LABEL_15; /*0x1001c07d1*/
LABEL_20:
  if ( !v13 ) /*0x1001c07fa*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v19); /*0x1001c07fc*/
    v14 = 1; /*0x1001c0801*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x1001c080e*/
    if ( v15 ) /*0x1001c0816*/
    {
      v16 = v15; /*0x1001c0818*/
      goto LABEL_24; /*0x1001c081b*/
    }
LABEL_16:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v4); /*0x1001c07d5*/
  }
  v16 = 1; /*0x1001c081d*/
LABEL_24:
  v17 = v23; /*0x1001c0823*/
  if ( v12 ) /*0x1001c082a*/
    v17 = v12; /*0x1001c082a*/
  memcpy((void *)v16, v17, v4); /*0x1001c0834*/
  *v5 = v4; /*0x1001c0839*/
  v5[1] = v16; /*0x1001c083c*/
  v5[2] = v4; /*0x1001c0840*/
  return v5; /*0x1001c0847*/
}
