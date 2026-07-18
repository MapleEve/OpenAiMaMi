// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x101363510 d=8
void __fastcall __noreturn std::panicking::panic_handler::_$u7b$$u7b$closure$u7d$$u7d$::hb1d88202065b9797(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  _QWORD v2[5]; // [rsp+8h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(*a1 + 8LL); /*0x10136351c*/
  if ( (v1 & 1) == 0 ) /*0x101363522*/
  {
    v2[3] = a1; /*0x101363524*/
    v2[0] = 0x8000000000000000LL; /*0x101363532*/
    std::panicking::panic_with_hook::h5c9dbff33bb81e8f( /*0x101363552*/
      v2,
      &off_101926850,
      a1[1],
      *(unsigned __int8 *)(a1[2] + 16LL),
      *(unsigned __int8 *)(a1[2] + 17LL));
  }
  v2[0] = *(_QWORD *)*a1; /*0x10136355f*/
  v2[1] = v1 >> 1; /*0x101363563*/
  std::panicking::panic_with_hook::h5c9dbff33bb81e8f( /*0x101363583*/
    v2,
    &unk_101926818,
    a1[1],
    *(unsigned __int8 *)(a1[2] + 16LL),
    *(unsigned __int8 *)(a1[2] + 17LL));
}