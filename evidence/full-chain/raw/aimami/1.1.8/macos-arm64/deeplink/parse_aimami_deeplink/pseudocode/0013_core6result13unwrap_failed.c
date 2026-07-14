// mac 1.1.8 parse_aimami_deeplink node va=0x101130130 depth=1
// core6result13unwrap_failed
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

  v7[0] = a1; /*0x101130138*/
  v7[1] = a2; /*0x10113013c*/
  v6[0] = a3; /*0x101130140*/
  v6[1] = a4; /*0x101130144*/
  v5[0] = v7; /*0x10113014c*/
  v5[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h905ab1bd6ee047e4; /*0x101130157*/
  v5[2] = v6; /*0x10113015f*/
  v5[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h406c21ea6648dc25; /*0x10113016a*/
  core::panicking::panic_fmt::h3a793735daf6e4ec(&unk_101227F1B, v5, a5); /*0x10113017c*/
}