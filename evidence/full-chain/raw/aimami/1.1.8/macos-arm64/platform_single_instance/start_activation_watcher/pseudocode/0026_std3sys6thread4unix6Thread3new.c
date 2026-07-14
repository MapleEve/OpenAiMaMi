// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x1010a4d20 depth=2
// std3sys6thread4unix6Thread3new
__int64 __fastcall std::sys::thread::unix::Thread::new::he3759e27441a4c88(unsigned __int64 a1, void *a2)
{
  __int64 v2; // r8
  size_t v3; // r14
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r8
  pthread_attr_t v11; // [rsp+8h] [rbp-68h] BYREF
  int v12; // [rsp+4Ch] [rbp-24h] BYREF
  pthread_t v13[4]; // [rsp+50h] [rbp-20h] BYREF

  v12 = pthread_attr_init(&v11); /*0x1010a4d3c*/
  if ( v12 ) /*0x1010a4d41*/
    core::panicking::assert_failed::hb70d0550edc83796(0, (__int64)&v12, (__int64)"", 0, v2, (__int64)&off_1015AE3A0); /*0x1010a4e3d*/
  v3 = 0x2000; /*0x1010a4d4e*/
  if ( a1 >= 0x2001 ) /*0x1010a4d54*/
    v3 = a1; /*0x1010a4d54*/
  v4 = pthread_attr_setstacksize(&v11, v3); /*0x1010a4d5f*/
  if ( !v4 ) /*0x1010a4d66*/
    goto LABEL_9; /*0x1010a4d66*/
  LODWORD(v13[0]) = v4; /*0x1010a4d68*/
  if ( v4 != 22 ) /*0x1010a4d6e*/
    core::panicking::assert_failed::hb70d0550edc83796( /*0x1010a4e5d*/
      0,
      (__int64)v13,
      (__int64)&unk_101367FCC,
      0,
      v5,
      (__int64)&off_1015AE388);
  v6 = sysconf(29); /*0x1010a4d79*/
  if ( pthread_attr_setstacksize(&v11, -v6 & (v3 + v6 - 1)) ) /*0x1010a4d8d*/
  {
    LODWORD(v13[0]) = pthread_attr_destroy(&v11); /*0x1010a4d9f*/
    if ( LODWORD(v13[0]) ) /*0x1010a4da4*/
      core::panicking::assert_failed::hb70d0550edc83796(0, (__int64)v13, (__int64)"", 0, v7, (__int64)&off_1015AE3B8); /*0x1010a4e95*/
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$std..thread..lifecycle..ThreadInit$GT$$GT$::hc6475a37d2f3f35e(a2); /*0x1010a4dad*/
    return 1; /*0x1010a4db2*/
  }
  else
  {
LABEL_9:
    v13[0] = nullptr; /*0x1010a4dc0*/
    if ( pthread_create(v13, &v11, std::sys::thread::unix::Thread::new::thread_start::ha96058318da3038c, a2) ) /*0x1010a4dda*/
    {
      core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$std..thread..lifecycle..ThreadInit$GT$$GT$::hc6475a37d2f3f35e(a2); /*0x1010a4dec*/
      v8 = 1; /*0x1010a4df9*/
    }
    else
    {
      v8 = 0; /*0x1010a4e04*/
    }
    LODWORD(v13[0]) = pthread_attr_destroy(&v11); /*0x1010a4e0f*/
    if ( LODWORD(v13[0]) ) /*0x1010a4e14*/
      core::panicking::assert_failed::hb70d0550edc83796(0, (__int64)v13, (__int64)"", 0, v9, (__int64)&off_1015AE3B8); /*0x1010a4e7a*/
  }
  return v8; /*0x1010a4e1c*/
}