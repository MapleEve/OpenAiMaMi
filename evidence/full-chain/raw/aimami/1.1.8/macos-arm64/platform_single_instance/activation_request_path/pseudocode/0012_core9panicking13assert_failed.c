// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x10112eb8f depth=2
// core9panicking13assert_failed
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

  v7 = a2; /*0x10112eba4*/
  v6 = a3; /*0x10112ebab*/
  core::panicking::assert_failed_inner::h3b576599883d995c( /*0x10112ebbe*/
    a1,
    (unsigned int)&v7,
    (unsigned int)&unk_1015AEB48,
    (unsigned int)&v6,
    (unsigned int)&unk_1015AEB48,
    a4,
    a5,
    a6);
}