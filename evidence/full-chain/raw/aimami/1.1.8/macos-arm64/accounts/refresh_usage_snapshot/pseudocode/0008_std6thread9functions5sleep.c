// mac 1.1.8 refresh_usage_snapshot node va=0x1010ab6d0 depth=1
// std6thread9functions5sleep
char __fastcall std::thread::functions::sleep::h8fc88f8bc00bad5c(unsigned __int64 a1, unsigned int a2)
{
  __int64 tv_nsec; // rax
  unsigned __int64 v3; // rbx
  __darwin_time_t v4; // rcx
  __int64 v5; // r8
  timespec __rmtp; // [rsp+0h] [rbp-30h] BYREF
  int v8[7]; // [rsp+14h] [rbp-1Ch] BYREF

  LOBYTE(tv_nsec) = a1 == 0; /*0x1010ab6e0*/
  if ( a2 != 0 || a1 != 0 ) /*0x1010ab6e0*/
  {
    v3 = a1; /*0x1010ab6ec*/
    tv_nsec = a2; /*0x1010ab6ef*/
    do /*0x1010ab720*/
    {
      v4 = 0x7FFFFFFFFFFFFFFFLL; /*0x1010ab725*/
      if ( v3 < 0x7FFFFFFFFFFFFFFFLL ) /*0x1010ab728*/
        v4 = v3; /*0x1010ab728*/
      __rmtp.tv_sec = v4; /*0x1010ab72c*/
      __rmtp.tv_nsec = tv_nsec; /*0x1010ab730*/
      v3 -= v4; /*0x1010ab734*/
      if ( nanosleep(&__rmtp, &__rmtp) == -1 ) /*0x1010ab745*/
      {
        v8[0] = *__error(); /*0x1010ab74e*/
        if ( v8[0] != 4 ) /*0x1010ab754*/
          core::panicking::assert_failed::hb70d0550edc83796( /*0x1010ab781*/
            0,
            (__int64)v8,
            (__int64)&unk_1013F6A14,
            0,
            v5,
            (__int64)&off_1015AE358);
        v3 += __rmtp.tv_sec; /*0x1010ab756*/
        tv_nsec = __rmtp.tv_nsec; /*0x1010ab75a*/
      }
      else
      {
        tv_nsec = 0; /*0x1010ab710*/
      }
    }
    while ( v3 != 0 || tv_nsec > 0 ); /*0x1010ab720*/
  }
  return tv_nsec; /*0x1010ab760*/
}