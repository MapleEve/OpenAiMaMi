// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18hide_voi 0x1013614a0 d=2
_QWORD *__fastcall std::thread::thread::Thread::new::ha0b48c7a72ef1813(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  size_t v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r12
  _QWORD *v8; // r13
  size_t v9; // rsi
  dispatch_semaphore_t v10; // rax
  __int64 v12; // [rsp+8h] [rbp-38h]
  void *__memptr; // [rsp+10h] [rbp-30h] BYREF

  v2 = 0; /*0x1013614b4*/
  if ( !__OFSUB__(0, *a2) ) /*0x1013614b9*/
  {
    v2 = _$LT$std..thread..thread..thread_name_string..ThreadNameString$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h49194a1da5ed756f(a2); /*0x1013614c3*/
    v12 = v3; /*0x1013614c6*/
  }
  v4 = alloc::sync::arcinner_layout_for_value_layout::h74907c05f0a7a03c(8, 40); /*0x1013614d4*/
  v6 = v4; /*0x1013614d9*/
  v7 = v5; /*0x1013614dc*/
  if ( !v5 ) /*0x1013614e2*/
  {
    v8 = (_QWORD *)v4; /*0x10136150a*/
    if ( v4 ) /*0x101361510*/
      goto LABEL_14; /*0x101361510*/
    goto LABEL_17; /*0x101361510*/
  }
  if ( v4 > v5 || v4 >= 0x11 ) /*0x1013614e8*/
  {
    if ( v4 <= 0x80000000 ) /*0x10136151f*/
    {
      __memptr = nullptr; /*0x101361525*/
      v9 = 8; /*0x101361531*/
      if ( v4 >= 9 ) /*0x101361536*/
        v9 = v4; /*0x101361536*/
      if ( !posix_memalign(&__memptr, v9, v5) ) /*0x101361541*/
      {
        v8 = __memptr; /*0x10136154a*/
        if ( __memptr ) /*0x101361551*/
          goto LABEL_14; /*0x101361551*/
      }
    }
LABEL_17:
    alloc::alloc::handle_alloc_error::h450e44845847d219(v6, v7); /*0x1013615b8*/
  }
  v8 = malloc(v5); /*0x1013614fd*/
  if ( !v8 ) /*0x101361503*/
    goto LABEL_17; /*0x101361503*/
LABEL_14:
  *v8 = 1; /*0x101361553*/
  v8[1] = 1; /*0x10136155b*/
  __memptr = v8; /*0x101361563*/
  v8[3] = v2; /*0x101361567*/
  v8[4] = v12; /*0x10136156f*/
  v8[2] = a1; /*0x101361573*/
  v10 = dispatch_semaphore_create(0); /*0x101361579*/
  if ( !v10 ) /*0x101361581*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1013615b1*/
      (__int64)"failed to create dispatch semaphore for thread synchronizationOnce instance has previously been poisoned",
      125,
      (__int64)&off_1019261E8);
  v8[5] = v10; /*0x101361583*/
  *((_BYTE *)v8 + 48) = 0; /*0x101361587*/
  return v8; /*0x10136158f*/
}