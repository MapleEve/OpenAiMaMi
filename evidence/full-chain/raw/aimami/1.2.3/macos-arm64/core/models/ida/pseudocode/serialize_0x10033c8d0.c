// __ZN13codexmate_lib4core6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$9serialize @ 0x10033c8d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$::serialize::h031a9a8660c2a7b0(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10033c8da*/
  switch ( *a1 ) /*0x10033c8ec*/
  {
    case 0: /*0x10033c8ec*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_718; /*0x10033c8ee*/
      v5 = 9; /*0x10033c8f5*/
      break; /*0x10033c8fa*/
    case 1: /*0x10033c8ec*/
      v4 = "task"; /*0x10033c921*/
      v5 = 4; /*0x10033c928*/
      break; /*0x10033c92d*/
    case 2: /*0x10033c8ec*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_719; /*0x10033c90a*/
      goto LABEL_8; /*0x10033c911*/
    case 3: /*0x10033c8ec*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_720; /*0x10033c913*/
      v5 = 11; /*0x10033c91a*/
      break; /*0x10033c91f*/
    case 4: /*0x10033c8ec*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_721; /*0x10033c8fc*/
      v5 = 7; /*0x10033c903*/
      break; /*0x10033c908*/
    case 5: /*0x10033c8ec*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_722; /*0x10033c92f*/
LABEL_8:
      v5 = 6; /*0x10033c936*/
      break; /*0x10033c936*/
  }
  v6 = serde_json::ser::format_escaped_str::h598a256d856e248a(a2, v3, v4, v5); /*0x10033c93e*/
  if ( v6 ) /*0x10033c946*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x10033c950*/
  else
    return 0; /*0x10033c948*/
}