// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::transition_journal::TransitionTarget as core::fmt::Debug>::fmt::h446cf35e0ed7bc2e @ 0x1008c78b0 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e(
        _BYTE *a1,
        __int64 a2)
{
  const char *v3; // rsi

  v3 = "RouterOntakeoverexceeded";
  if ( *a1 )
    v3 = (const char *)&unk_101676570;
  return _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(
           a2,
           v3,
           (unsigned __int8)*a1 + 8LL);
}
