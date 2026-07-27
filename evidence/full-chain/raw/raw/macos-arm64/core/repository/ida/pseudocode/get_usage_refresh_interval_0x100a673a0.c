// __ZN13codexmate_lib4core10repository10Repository26get_usage_refresh_interval @ 0x100a673a0 | 基线 same-set
size_t *__fastcall codexmate_lib::core::repository::Repository::get_usage_refresh_interval::hb6d7bcb95d9da811(
        size_t *a1,
        __int64 a2)
{
  const char *v2; // r14
  __int64 v3; // rax
  const char *v4; // r13
  size_t v5; // r15
  void *v6; // rax
  size_t v7; // r12
  _WORD __dst[12]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+18h] [rbp-A8h]
  __int64 v11; // [rsp+20h] [rbp-A0h]

  codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, a2); /*0x100a673be*/
  v2 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_131; /*0x100a673d1*/
  if ( v11 == 2 ) /*0x100a673dc*/
  {
    v3 = 2; /*0x100a67474*/
    if ( *(_WORD *)v10 == 27953 ) /*0x100a6747e*/
    {
      v4 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_131; /*0x100a674bb*/
    }
    else if ( *(_WORD *)v10 == 27955 ) /*0x100a67485*/
    {
      v4 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_318; /*0x100a674c3*/
    }
    else
    {
      v4 = nullptr; /*0x100a67491*/
      if ( __ROL2__(*(_WORD *)v10, 8) == 13677 ) /*0x100a674a1*/
        v4 = "5musage_401_retry"; /*0x100a674a1*/
    }
  }
  else if ( v11 == 3 && !(*(_WORD *)v10 ^ 0x3033 | *(unsigned __int8 *)(v10 + 2) ^ 0x73) ) /*0x100a673fa*/
  {
    v4 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_317; /*0x100a674aa*/
    v3 = 3; /*0x100a674b1*/
  }
  else
  {
    v3 = 2; /*0x100a67400*/
    v4 = nullptr; /*0x100a67405*/
  }
  v5 = 2; /*0x100a6740b*/
  if ( v4 ) /*0x100a67411*/
    v5 = v3; /*0x100a67411*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2); /*0x100a67415*/
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100a67422*/
  if ( !v6 ) /*0x100a6742a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x100a674d7*/
  v7 = (size_t)v6; /*0x100a67430*/
  if ( v4 ) /*0x100a67436*/
    v2 = v4; /*0x100a67436*/
  memcpy(v6, v2, v5); /*0x100a67443*/
  *a1 = v5; /*0x100a67448*/
  a1[1] = v7; /*0x100a6744b*/
  a1[2] = v5; /*0x100a6744f*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v2); /*0x100a6745a*/
  return a1; /*0x100a67462*/
}