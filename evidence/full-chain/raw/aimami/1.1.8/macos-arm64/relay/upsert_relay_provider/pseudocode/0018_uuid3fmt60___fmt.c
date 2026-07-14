// mac 1.1.8 upsert_relay_provider node va=0x100f892c0 depth=2
// uuid3fmt60_::fmt
// Alternative name is '__ZN4uuid3fmt59_$LT$impl$u20$core..fmt..Display$u20$for$u20$uuid..Uuid$GT$3fmt17hc90b72eb64500921E'
__int64 __fastcall uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c(
        __int64 a1,
        __int64 a2)
{
  _BYTE v3[52]; // [rsp+Ch] [rbp-34h] BYREF

  uuid::fmt::format_hyphenated::h4a9cc1b7ad9c2553(v3, a1, 0); /*0x100f892da*/
  return _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(a2, v3, 36); /*0x100f892ef*/
}