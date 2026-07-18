// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x1013f0110 d=1
void __fastcall __noreturn core::result::unwrap_failed::h855bccc0ecc45c4f(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v5[4]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-10h] BYREF

  v7[0] = a1; /*0x1013f0118*/
  v7[1] = a2; /*0x1013f011c*/
  v6[0] = a3; /*0x1013f0120*/
  v6[1] = a4; /*0x1013f0124*/
  v5[0] = v7; /*0x1013f012c*/
  v5[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x1013f0137*/
  v5[2] = v6; /*0x1013f013f*/
  v5[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h406c21ea6648dc25; /*0x1013f014a*/
  ((void (__fastcall __noreturn *)(void *, _QWORD *, __int64))core::panicking::panic_fmt::h3a793735daf6e4ec)( /*0x1013f015c*/
    &unk_1016FD14A,
    v5,
    a5);
}