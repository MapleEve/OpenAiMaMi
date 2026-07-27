// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::transition_journal::TransitionTarget as core::fmt::Debug>::fmt::h446cf35e0ed7bc2e @ 0x10024b930 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e(
        _BYTE *a1,
        __int64 a2)
{
  void *v3; // rsi

  v3 = &anon_39a6e93098609d65551b0fc4eadbbbd9_5;
  if ( *a1 )
    v3 = &anon_39a6e93098609d65551b0fc4eadbbbd9_6;
  return _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(
           a2,
           v3,
           (unsigned __int8)*a1 + 8LL);
}
