// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_route node 0x1010a40d0 depth=2
int __fastcall std::sys::pal::unix::sync::mutex::Mutex::init::h597b73b703ecbc00(pthread_mutex_t *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  int result; // eax
  __int64 v5; // r8
  pthread_mutexattr_t v6; // [rsp+0h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-10h] BYREF

  LODWORD(v1) = pthread_mutexattr_init(&v6); /*0x1010a40e0*/
  if ( (_DWORD)v1 ) /*0x1010a40e7*/
  {
    v7[0] = (v1 << 32) | 2; /*0x1010a412b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010a414d*/
      (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
      43,
      (__int64)v7,
      (__int64)&off_1015AEAC8,
      (__int64)&off_1015AE208);
  }
  LODWORD(v2) = pthread_mutexattr_settype(&v6, 0); /*0x1010a40ef*/
  if ( (_DWORD)v2 ) /*0x1010a40f6*/
  {
    v7[0] = (v2 << 32) | 2; /*0x1010a415c*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010a417e*/
      (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
      43,
      (__int64)v7,
      (__int64)&off_1015AEAC8,
      (__int64)&off_1015AE220);
  }
  LODWORD(v3) = pthread_mutex_init(a1, &v6); /*0x1010a40ff*/
  if ( (_DWORD)v3 ) /*0x1010a4106*/
  {
    v7[0] = (v3 << 32) | 2; /*0x1010a418d*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010a41af*/
      (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
      43,
      (__int64)v7,
      (__int64)&off_1015AEAC8,
      (__int64)&off_1015AE238);
  }
  result = pthread_mutexattr_destroy(&v6); /*0x1010a410c*/
  LODWORD(v7[0]) = result; /*0x1010a4111*/
  if ( result ) /*0x1010a4116*/
    core::panicking::assert_failed::hb70d0550edc83796(0, v7, "", 0, v5, &off_1015AF1C0); /*0x1010a41cc*/
  return result; /*0x1010a411c*/
}