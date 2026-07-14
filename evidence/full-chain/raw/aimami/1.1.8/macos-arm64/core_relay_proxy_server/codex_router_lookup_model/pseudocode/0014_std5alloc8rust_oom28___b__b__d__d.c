// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_router_lookup_model node 0x10112aba0 depth=6
void __fastcall __noreturn std::alloc::rust_oom::_$u7b$$u7b$closure$u7d$$u7d$::hc7c4b7a7ce2aabe1(_QWORD *a1)
{
  __int64 (__fastcall *v1)(); // rcx

  v1 = std::alloc::default_alloc_error_hook::h484208ebb982a5c6; /*0x10112abae*/
  if ( std::alloc::HOOK::h118aa2dcfdc8b486 ) /*0x10112abb5*/
    v1 = (__int64 (__fastcall *)())std::alloc::HOOK::h118aa2dcfdc8b486; /*0x10112abb5*/
  ((void (__fastcall *)(_QWORD, _QWORD))v1)(*a1, a1[1]); /*0x10112abc3*/
  std::process::abort::h38b4a24325fecca0(); /*0x10112abc5*/
}