// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::AuthMode as core::fmt::Debug>::fmt::h4432a944c532829d @ 0x100b15340 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h4432a944c532829d(
        _BYTE *a1,
        __int64 a2)
{
  void *v2; // rax

  v2 = &unk_10167EF8A;
  if ( *a1 )
    v2 = &unk_10167EF91;
  return _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(
           a2,
           v2,
           (unsigned __int8)*a1 ^ 7LL);
}
