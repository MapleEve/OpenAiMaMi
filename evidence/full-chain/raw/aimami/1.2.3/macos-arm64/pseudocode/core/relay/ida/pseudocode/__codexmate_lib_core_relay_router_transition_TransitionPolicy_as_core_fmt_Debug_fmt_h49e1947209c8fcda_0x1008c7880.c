// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::router_transition::TransitionPolicy as core::fmt::Debug>::fmt::h49e1947209c8fcda @ 0x1008c7880 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..relay..router_transition..TransitionPolicy$u20$as$u20$core..fmt..Debug$GT$::fmt::h49e1947209c8fcda(
        _BYTE *a1,
        __int64 a2)
{
  void *v3; // rsi

  v3 = &unk_101676560;
  if ( *a1 )
    v3 = &unk_101676566;
  return _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(
           a2,
           v3,
           4LL * (unsigned __int8)*a1 + 6);
}
