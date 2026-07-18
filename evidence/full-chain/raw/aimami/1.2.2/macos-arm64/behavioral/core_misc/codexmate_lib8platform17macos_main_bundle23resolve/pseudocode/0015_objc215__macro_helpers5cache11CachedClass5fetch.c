// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x1013df0b0 d=2
Class __fastcall objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5(
        Class *a1,
        const char *a2,
        __int64 a3)
{
  Class result; // rax
  size_t v5; // rax
  __int64 (__fastcall *v6)(); // [rsp+0h] [rbp-40h] BYREF
  __int64 v7; // [rsp+8h] [rbp-38h]
  __int64 (__fastcall **v8)(); // [rsp+10h] [rbp-30h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+18h] [rbp-28h]
  __int64 v10; // [rsp+20h] [rbp-20h]

  result = objc_getClass(a2); /*0x1013df0c9*/
  *a1 = result; /*0x1013df0ce*/
  if ( !result ) /*0x1013df0d4*/
  {
    v5 = strlen(a2); /*0x1013df0e4*/
    core::str::converts::from_utf8::hb32deb9559450f6e((__int64)&v8, (__int64)a2, v5); /*0x1013df0f3*/
    if ( (_DWORD)v8 != 1 ) /*0x1013df0fc*/
    {
      v6 = v9; /*0x1013df106*/
      v7 = v10; /*0x1013df10a*/
      v8 = &v6; /*0x1013df112*/
      v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf4fd4bc271549ce0; /*0x1013df11d*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1013df12f*/
        (__int64)&anon_6280990844404be5d751e2f1a3e00dfe_24,
        (__int64)&v8,
        a3);
    }
    v7 = v10; /*0x1013df13c*/
    v6 = v9; /*0x1013df140*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1013df15e*/
      (__int64)&anon_6280990844404be5d751e2f1a3e00dfe_3,
      43,
      (__int64)&v6,
      (__int64)&anon_6280990844404be5d751e2f1a3e00dfe_2,
      a3);
  }
  return result; /*0x1013df0d6*/
}