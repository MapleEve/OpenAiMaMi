// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x1013eab80 d=7
void __fastcall __noreturn std::alloc::rust_oom::_$u7b$$u7b$closure$u7d$$u7d$::hc7c4b7a7ce2aabe1(_QWORD *a1)
{
  __int64 (__fastcall *v1)(); // rcx

  v1 = std::alloc::default_alloc_error_hook::h484208ebb982a5c6; /*0x1013eab8e*/
  if ( std::alloc::HOOK::h118aa2dcfdc8b486 ) /*0x1013eab95*/
    v1 = (__int64 (__fastcall *)())std::alloc::HOOK::h118aa2dcfdc8b486; /*0x1013eab95*/
  ((void (__fastcall *)(_QWORD, _QWORD))v1)(*a1, a1[1]); /*0x1013eaba3*/
  std::process::abort::h38b4a24325fecca0(); /*0x1013eaba5*/
}