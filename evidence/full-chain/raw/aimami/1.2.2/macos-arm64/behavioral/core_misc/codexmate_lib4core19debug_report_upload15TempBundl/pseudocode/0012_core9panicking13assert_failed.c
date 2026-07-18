// mac 1.2.2 NEW codexmate_lib4core19debug_report_upload15TempBundl 0x1013eeb6f d=2
void __fastcall __noreturn core::panicking::assert_failed::h76fdff592ff01c06(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // [rsp+0h] [rbp-10h] BYREF
  __int64 v7; // [rsp+8h] [rbp-8h] BYREF

  v7 = a2; /*0x1013eeb84*/
  v6 = a3; /*0x1013eeb8b*/
  core::panicking::assert_failed_inner::h3b576599883d995c( /*0x1013eeb9e*/
    a1,
    (unsigned int)&v7,
    (unsigned int)&unk_101926A68,
    (unsigned int)&v6,
    (unsigned int)&unk_101926A68,
    a4,
    a5,
    a6);
}