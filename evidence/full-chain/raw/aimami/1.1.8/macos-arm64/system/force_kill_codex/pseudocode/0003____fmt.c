// mac 1.1.8 force_kill_codex node va=0x100500e10 depth=1
// _::fmt
__int64 __fastcall _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  void *v5; // rdx
  _QWORD *v7; // [rsp+8h] [rbp-18h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+10h] [rbp-10h]
  _QWORD *v9; // [rsp+18h] [rbp-8h] BYREF

  v2 = 2; /*0x100500e1f*/
  if ( *a1 >= 2u ) /*0x100500e24*/
    v2 = *a1 - 2LL; /*0x100500e24*/
  switch ( v2 ) /*0x100500e36*/
  {
    case 0LL: /*0x100500e36*/
      v9 = a1 + 1; /*0x100500e3c*/
      v7 = &v9; /*0x100500e44*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h54dae11be56936ad; /*0x100500e4f*/
      v3 = *a2; /*0x100500e53*/
      v4 = a2[1]; /*0x100500e56*/
      v5 = &unk_10122A999; /*0x100500e5a*/
      break; /*0x100500e61*/
    case 1LL: /*0x100500e36*/
      v9 = a1 + 1; /*0x100500f1b*/
      v7 = &v9; /*0x100500f23*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb38d59a52036a223; /*0x100500f2e*/
      v3 = *a2; /*0x100500f32*/
      v4 = a2[1]; /*0x100500f35*/
      v5 = &unk_10122A9A6; /*0x100500f39*/
      break; /*0x100500f40*/
    case 2LL: /*0x100500e36*/
      v9 = a1; /*0x100500e94*/
      v7 = &v9; /*0x100500e9c*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde02f8c72a49a29c; /*0x100500ea7*/
      v3 = *a2; /*0x100500eab*/
      v4 = a2[1]; /*0x100500eae*/
      v5 = &unk_10122A9B5; /*0x100500eb2*/
      break; /*0x100500eb9*/
    case 3LL: /*0x100500e36*/
      v9 = a1 + 1; /*0x100500ec2*/
      v7 = &v9; /*0x100500eca*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h41448977aae2e58c; /*0x100500ed5*/
      v3 = *a2; /*0x100500ed9*/
      v4 = a2[1]; /*0x100500edc*/
      v5 = &unk_10122A9CA; /*0x100500ee0*/
      break; /*0x100500ee7*/
    case 4LL: /*0x100500e36*/
      v9 = a1 + 1; /*0x100500e6a*/
      v7 = &v9; /*0x100500e72*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h68b41e79228447f6; /*0x100500e7d*/
      v3 = *a2; /*0x100500e81*/
      v4 = a2[1]; /*0x100500e84*/
      v5 = &unk_10122A9E3; /*0x100500e88*/
      break; /*0x100500e8f*/
    case 5LL: /*0x100500e36*/
      v9 = a1 + 1; /*0x100500f46*/
      v7 = &v9; /*0x100500f4e*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x100500f59*/
      v3 = *a2; /*0x100500f5d*/
      v4 = a2[1]; /*0x100500f60*/
      v5 = &unk_10122A9F2; /*0x100500f64*/
      break; /*0x100500f6b*/
    case 6LL: /*0x100500e36*/
      v9 = a1 + 1; /*0x100500f71*/
      v7 = &v9; /*0x100500f79*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x100500f84*/
      v3 = *a2; /*0x100500f88*/
      v4 = a2[1]; /*0x100500f8b*/
      v5 = &unk_10122AA00; /*0x100500f8f*/
      break; /*0x100500f8f*/
    case 7LL: /*0x100500e36*/
      v9 = a1 + 1; /*0x100500ef0*/
      v7 = &v9; /*0x100500ef8*/
      v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x100500f03*/
      v3 = *a2; /*0x100500f07*/
      v4 = a2[1]; /*0x100500f0a*/
      v5 = &unk_10122AA11; /*0x100500f0e*/
      break; /*0x100500f15*/
  }
  return core::fmt::write::h2e5a8157a38fb62d(v3, v4, v5, &v7); /*0x100500f9f*/
}