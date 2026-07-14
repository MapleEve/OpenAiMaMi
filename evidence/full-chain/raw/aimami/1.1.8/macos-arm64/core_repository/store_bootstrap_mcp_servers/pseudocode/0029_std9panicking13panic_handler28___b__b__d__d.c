// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x1010acdc0 depth=8
void __fastcall __noreturn std::panicking::panic_handler::_$u7b$$u7b$closure$u7d$$u7d$::hb1d88202065b9797(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  _QWORD v2[5]; // [rsp+8h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(*a1 + 8LL); /*0x1010acdcc*/
  if ( (v1 & 1) == 0 ) /*0x1010acdd2*/
  {
    v2[3] = a1; /*0x1010acdd4*/
    v2[0] = 0x8000000000000000LL; /*0x1010acde2*/
    std::panicking::panic_with_hook::h5c9dbff33bb81e8f( /*0x1010ace02*/
      v2,
      &off_1015AE930,
      a1[1],
      *(unsigned __int8 *)(a1[2] + 16LL),
      *(unsigned __int8 *)(a1[2] + 17LL));
  }
  v2[0] = *(_QWORD *)*a1; /*0x1010ace0f*/
  v2[1] = v1 >> 1; /*0x1010ace13*/
  std::panicking::panic_with_hook::h5c9dbff33bb81e8f( /*0x1010ace33*/
    v2,
    &unk_1015AE8F8,
    a1[1],
    *(unsigned __int8 *)(a1[2] + 16LL),
    *(unsigned __int8 *)(a1[2] + 17LL));
}