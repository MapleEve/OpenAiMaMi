// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoicePermissionState$GT$9serialize @ 0x10033f870 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoicePermissionState$GT$::serialize::hc0cdf5e47f3b41b4(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  void *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10033f87a*/
  switch ( *a1 ) /*0x10033f88c*/
  {
    case 0: /*0x10033f88c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_804; /*0x10033f88e*/
      goto LABEL_5; /*0x10033f895*/
    case 1: /*0x10033f88c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_805; /*0x10033f8c1*/
      v5 = 6; /*0x10033f8c8*/
      break; /*0x10033f8c8*/
    case 2: /*0x10033f88c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_806; /*0x10033f8a5*/
LABEL_5:
      v5 = 10; /*0x10033f8ac*/
      break; /*0x10033f8b1*/
    case 3: /*0x10033f88c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_807; /*0x10033f8b3*/
      v5 = 13; /*0x10033f8ba*/
      break; /*0x10033f8bf*/
    case 4: /*0x10033f88c*/
      v4 = &anon_b0ee9adff4519c22b647af231a5a39fa_335; /*0x10033f897*/
      v5 = 11; /*0x10033f89e*/
      break; /*0x10033f8a3*/
    case 5: /*0x10033f88c*/
      JUMPOUT(0x1007417F7LL); /*0x1007417f7*/
  }
  v6 = serde_json::ser::format_escaped_str::ha0cf022c375464ce(a2, v3, v4, v5); /*0x10033f8cd*/
  if ( v6 ) /*0x10033f8d8*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x10033f8e2*/
  else
    return 0; /*0x10033f8da*/
}