// __ZN13codexmate_lib4core5relay16codex_diagnostic23config_needs_syntax_fix @ 0x1004eb760 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::config_needs_syntax_fix::h220242c850b77e0e(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // r14
  __int64 v3; // rbx
  char v4; // al
  int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64); // rax
  __int64 v10; // rsi
  __int64 v12; // [rsp+8h] [rbp-88h] BYREF
  __int64 v13; // [rsp+10h] [rbp-80h]
  __int64 v14; // [rsp+18h] [rbp-78h]
  __int64 v15; // [rsp+20h] [rbp-70h]
  _WORD *v16; // [rsp+28h] [rbp-68h]
  __int64 v17; // [rsp+30h] [rbp-60h]
  __int64 v18; // [rsp+38h] [rbp-58h]
  __int64 v19; // [rsp+40h] [rbp-50h]
  __int64 v20; // [rsp+50h] [rbp-40h]
  __int64 v21; // [rsp+58h] [rbp-38h]
  char v22; // [rsp+68h] [rbp-28h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v12, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64)); /*0x1004eb77e*/
  v2 = v12; /*0x1004eb783*/
  v3 = v13; /*0x1004eb78a*/
  if ( __OFSUB__(-v12, 1) ) /*0x1004eb791*/
  {
    v4 = std::io::error::Error::kind::hbe3dd139aa56fd1b(v13); /*0x1004eb799*/
    v5 = v3 & 3; /*0x1004eb7a0*/
    if ( v4 ) /*0x1004eb7a5*/
    {
      if ( v5 == 1 ) /*0x1004eb7ae*/
      {
        v6 = v3 - 1; /*0x1004eb7b4*/
        v7 = *(_QWORD *)(v3 - 1); /*0x1004eb7b8*/
        v8 = *(_QWORD *)(v3 + 7); /*0x1004eb7bc*/
        v9 = *(void (__fastcall **)(__int64))v8; /*0x1004eb7c0*/
        if ( *(_QWORD *)v8 ) /*0x1004eb7c0*/
          goto LABEL_23; /*0x1004eb7c6*/
        goto LABEL_24; /*0x1004eb7c6*/
      }
    }
    else if ( v5 == 1 ) /*0x1004eb893*/
    {
      v6 = v3 - 1; /*0x1004eb895*/
      v7 = *(_QWORD *)(v3 - 1); /*0x1004eb899*/
      v8 = *(_QWORD *)(v3 + 7); /*0x1004eb89d*/
      v9 = *(void (__fastcall **)(__int64))v8; /*0x1004eb8a1*/
      if ( *(_QWORD *)v8 ) /*0x1004eb8a1*/
LABEL_23:
        v9(v7); /*0x1004eb8a9*/
LABEL_24:
      v10 = *(_QWORD *)(v8 + 8); /*0x1004eb8ae*/
      if ( v10 ) /*0x1004eb8b5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v10, *(_QWORD *)(v8 + 16)); /*0x1004eb8be*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x1004eb8d0*/
    }
    return 0; /*0x1004eb8d5*/
  }
  codexmate_lib::core::relay::codex_diagnostic::check_config_toml_syntax::ha7a46b071f53d04b(&v12, v13, v14); /*0x1004eb7e4*/
  if ( v22 == 1 ) /*0x1004eb7ed*/
  {
    LOBYTE(v1) = 1; /*0x1004eb7ef*/
    if ( v17 == 2 ) /*0x1004eb7f7*/
      LOBYTE(v1) = *v16 != 27503; /*0x1004eb802*/
  }
  else
  {
    v1 = 0; /*0x1004eb808*/
  }
  if ( v12 ) /*0x1004eb815*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1004eb820*/
  if ( v15 ) /*0x1004eb82c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1004eb837*/
  if ( v18 ) /*0x1004eb84d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x1004eb858*/
  if ( v20 != 0x8000000000000000LL && v20 ) /*0x1004eb869*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x1004eb874*/
  if ( v2 ) /*0x1004eb87c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v2, 1); /*0x1004eb889*/
  return v1; /*0x1004eb8db*/
}