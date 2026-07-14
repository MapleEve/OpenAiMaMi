// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x1010aae00 depth=2
// std6thread6thread6Thread3new
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

  v2 = 0; /*0x1010aae14*/
  if ( !__OFSUB__(0, *a2) ) /*0x1010aae19*/
  {
    v2 = _$LT$std..thread..thread..thread_name_string..ThreadNameString$u20$as$u20$core..convert..From$LT$alloc..string..String$GT$$GT$::from::h49194a1da5ed756f(a2); /*0x1010aae23*/
    v12 = v3; /*0x1010aae26*/
  }
  v4 = alloc::sync::arcinner_layout_for_value_layout::h74907c05f0a7a03c(8, 40); /*0x1010aae34*/
  v6 = v4; /*0x1010aae39*/
  v7 = v5; /*0x1010aae3c*/
  if ( !v5 ) /*0x1010aae42*/
  {
    v8 = (_QWORD *)v4; /*0x1010aae6a*/
    if ( v4 ) /*0x1010aae70*/
      goto LABEL_14; /*0x1010aae70*/
    goto LABEL_17; /*0x1010aae70*/
  }
  if ( v4 > v5 || v4 >= 0x11 ) /*0x1010aae48*/
  {
    if ( v4 <= 0x80000000 ) /*0x1010aae7f*/
    {
      __memptr = nullptr; /*0x1010aae85*/
      v9 = 8; /*0x1010aae91*/
      if ( v4 >= 9 ) /*0x1010aae96*/
        v9 = v4; /*0x1010aae96*/
      if ( !posix_memalign(&__memptr, v9, v5) ) /*0x1010aaea1*/
      {
        v8 = __memptr; /*0x1010aaeaa*/
        if ( __memptr ) /*0x1010aaeb1*/
          goto LABEL_14; /*0x1010aaeb1*/
      }
    }
LABEL_17:
    alloc::alloc::handle_alloc_error::h450e44845847d219(v6, v7); /*0x1010aaf18*/
  }
  v8 = malloc(v5); /*0x1010aae5d*/
  if ( !v8 ) /*0x1010aae63*/
    goto LABEL_17; /*0x1010aae63*/
LABEL_14:
  *v8 = 1; /*0x1010aaeb3*/
  v8[1] = 1; /*0x1010aaebb*/
  __memptr = v8; /*0x1010aaec3*/
  v8[3] = v2; /*0x1010aaec7*/
  v8[4] = v12; /*0x1010aaecf*/
  v8[2] = a1; /*0x1010aaed3*/
  v10 = dispatch_semaphore_create(0); /*0x1010aaed9*/
  if ( !v10 ) /*0x1010aaee1*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1010aaf11*/
      (__int64)"failed to create dispatch semaphore for thread synchronizationOnce instance has previously been poisoned",
      125,
      (__int64)&off_1015AE2C8);
  v8[5] = v10; /*0x1010aaee3*/
  *((_BYTE *)v8 + 48) = 0; /*0x1010aaee7*/
  return v8; /*0x1010aaeef*/
}