// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x1013df170 d=2
SEL __fastcall objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0(SEL *a1, const char *a2)
{
  SEL result; // rax

  result = sel_registerName(a2); /*0x1013df17c*/
  if ( !result ) /*0x1013df184*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1013df1a3*/
      (__int64)"failed allocating selector",
      26,
      (__int64)&anon_fa1e0306263e001930920c8c9b85c30d_23);
  *a1 = result; /*0x1013df186*/
  return result; /*0x1013df18d*/
}