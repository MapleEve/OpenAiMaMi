// __ZN13codexmate_lib8platform7process30latest_codex_desktop_available @ 0x100366840 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::latest_codex_desktop_available::h2802674a4700aee5(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-50h]
  __int64 v16; // [rsp+18h] [rbp-48h]
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(&v17, a2); /*0x100366855*/
  v3 = v17; /*0x10036685a*/
  if ( __OFSUB__(-v17, 1) ) /*0x100366861*/
  {
    return 0; /*0x100366866*/
  }
  else
  {
    v4 = v18; /*0x10036686e*/
    v5 = v19; /*0x100366872*/
    v6 = std::path::Path::file_name::hf6c2daad91e50ebf(v18, v19); /*0x10036687c*/
    if ( !v6 /*0x1003668e3*/
      || (core::str::converts::from_utf8::hb32deb9559450f6e(&v17, v6, v7), (_DWORD)v17 == 1)
      || v19 != 11
      || (v8 = *(_QWORD *)v18 ^ 0x2E54504774616843LL, v8 | *(_QWORD *)((char *)v18 + 3) ^ 0x7070612E54504774LL)
      || (codexmate_lib::platform::process::codex_macos_bundle_main_executable::h65e006069063e1dd(&v14, v4, v5, v8),
          v9 = v14,
          v14 == 0x8000000000000000LL) )
    {
      v2 = 0; /*0x1003668e5*/
    }
    else
    {
      v11 = v15; /*0x10036690f*/
      v12 = std::path::Path::file_name::hf6c2daad91e50ebf(v15, v16); /*0x10036691a*/
      if ( v12 && (core::str::converts::from_utf8::hb32deb9559450f6e(&v17, v12, v13), (_DWORD)v17 != 1) && v19 == 7 ) /*0x10036693b*/
        LOBYTE(v2) = (*v18 ^ 0x74616843 | *(_DWORD *)((char *)v18 + 3) ^ 0x54504774) == 0; /*0x100366952*/
      else
        v2 = 0; /*0x100366958*/
      if ( v9 ) /*0x10036695e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, 1); /*0x10036696b*/
    }
    if ( v3 ) /*0x1003668eb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x1003668f8*/
  }
  return v2; /*0x100366900*/
}