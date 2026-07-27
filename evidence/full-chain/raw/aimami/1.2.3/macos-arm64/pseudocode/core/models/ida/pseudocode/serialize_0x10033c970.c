// __ZN13codexmate_lib4core6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$9serialize @ 0x10033c970 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$::serialize::hc06568f1d5d67a23(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10033c97a*/
  switch ( *a1 ) /*0x10033c98c*/
  {
    case 0: /*0x10033c98c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_718; /*0x10033c98e*/
      v5 = 9; /*0x10033c995*/
      break; /*0x10033c99a*/
    case 1: /*0x10033c98c*/
      v4 = "task"; /*0x10033c9c1*/
      v5 = 4; /*0x10033c9c8*/
      break; /*0x10033c9cd*/
    case 2: /*0x10033c98c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_719; /*0x10033c9aa*/
      goto LABEL_8; /*0x10033c9b1*/
    case 3: /*0x10033c98c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_720; /*0x10033c9b3*/
      v5 = 11; /*0x10033c9ba*/
      break; /*0x10033c9bf*/
    case 4: /*0x10033c98c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_721; /*0x10033c99c*/
      v5 = 7; /*0x10033c9a3*/
      break; /*0x10033c9a8*/
    case 5: /*0x10033c98c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_722; /*0x10033c9cf*/
LABEL_8:
      v5 = 6; /*0x10033c9d6*/
      break; /*0x10033c9d6*/
  }
  v6 = serde_json::ser::format_escaped_str::ha0cf022c375464ce(a2, v3, v4, v5); /*0x10033c9de*/
  if ( v6 ) /*0x10033c9e6*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x10033c9f0*/
  else
    return 0; /*0x10033c9e8*/
}