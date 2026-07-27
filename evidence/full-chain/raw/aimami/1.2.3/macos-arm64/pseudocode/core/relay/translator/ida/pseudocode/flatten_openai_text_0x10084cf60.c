// __ZN13codexmate_lib4core5relay10translator19flatten_openai_text @ 0x10084cf60 | 基线 same-set
void __fastcall codexmate_lib::core::relay::translator::flatten_openai_text::h49350bf0fa79c4c0(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v6; // [rsp+18h] [rbp-28h] BYREF
  __int64 v7; // [rsp+20h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-18h]

  v2 = *a2; /*0x10084cf6b*/
  if ( v2 == 3 ) /*0x10084cf71*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(a1, a2 + 8); /*0x10084cffa*/
  }
  else if ( v2 == 4 ) /*0x10084cf76*/
  {
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9039ccd5f0dd5e0b( /*0x10084cf95*/
      &v6,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 2) + 32LL * *((_QWORD *)a2 + 3));
    v3 = v7; /*0x10084cf9a*/
    alloc::str::join_generic_copy::ha9d2732844b8793d( /*0x10084cfb6*/
      v5,
      v7,
      v8,
      "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
      1);
    a1[2] = v5[2]; /*0x10084cfbf*/
    v4 = v5[0]; /*0x10084cfc3*/
    a1[1] = v5[1]; /*0x10084cfcb*/
    *a1 = v4; /*0x10084cfcf*/
    if ( v6 ) /*0x10084cfd9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 16 * v6, 8); /*0x10084cfe7*/
  }
  else
  {
    *a1 = 0; /*0x10084cfff*/
    a1[1] = 1; /*0x10084d006*/
    a1[2] = 0; /*0x10084d00e*/
  }
}