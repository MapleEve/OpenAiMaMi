// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x10112ebfb depth=3
// core9panicking13assert_failed
void __fastcall __noreturn core::panicking::assert_failed::hb70d0550edc83796(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // [rsp+0h] [rbp-10h] BYREF
  __int64 v7; // [rsp+8h] [rbp-8h] BYREF

  v7 = a2; /*0x10112ec10*/
  v6 = a3; /*0x10112ec17*/
  core::panicking::assert_failed_inner::h3b576599883d995c( /*0x10112ec2a*/
    a1,
    (unsigned int)&v7,
    (unsigned int)&unk_1015AEBA8,
    (unsigned int)&v6,
    (unsigned int)&unk_1015AEBA8,
    a4,
    a5,
    a6);
}