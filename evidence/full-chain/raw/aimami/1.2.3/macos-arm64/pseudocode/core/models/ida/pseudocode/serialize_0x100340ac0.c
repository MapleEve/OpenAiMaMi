// __ZN13codexmate_lib4core6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$9serialize @ 0x100340ac0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$::serialize::h97e7a332c9f92130(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x100340aca*/
  switch ( *a1 ) /*0x100340adc*/
  {
    case 0: /*0x100340adc*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_851; /*0x100340ade*/
      v5 = 5; /*0x100340ae5*/
      break; /*0x100340aea*/
    case 1: /*0x100340adc*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_852; /*0x100340b16*/
      v5 = 9; /*0x100340b1d*/
      break; /*0x100340b1d*/
    case 2: /*0x100340adc*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_853; /*0x100340afa*/
      v5 = 14; /*0x100340b01*/
      break; /*0x100340b06*/
    case 3: /*0x100340adc*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_854; /*0x100340b08*/
      v5 = 13; /*0x100340b0f*/
      break; /*0x100340b14*/
    case 4: /*0x100340adc*/
      v4 = "refreshFailed"; /*0x100340aec*/
      v5 = 13; /*0x100340af3*/
      break; /*0x100340af8*/
  }
  v6 = serde_json::ser::format_escaped_str::ha0cf022c375464ce(a2, v3, v4, v5); /*0x100340b25*/
  if ( v6 ) /*0x100340b2d*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x100340b37*/
  else
    return 0; /*0x100340b2f*/
}