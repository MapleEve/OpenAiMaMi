// __ZN13codexmate_lib4core6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$9serialize @ 0x100340a30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$::serialize::h39d6fda549b760ed(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x100340a3a*/
  switch ( *a1 ) /*0x100340a4c*/
  {
    case 0: /*0x100340a4c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_851; /*0x100340a4e*/
      v5 = 5; /*0x100340a55*/
      break; /*0x100340a5a*/
    case 1: /*0x100340a4c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_852; /*0x100340a86*/
      v5 = 9; /*0x100340a8d*/
      break; /*0x100340a8d*/
    case 2: /*0x100340a4c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_853; /*0x100340a6a*/
      v5 = 14; /*0x100340a71*/
      break; /*0x100340a76*/
    case 3: /*0x100340a4c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_854; /*0x100340a78*/
      v5 = 13; /*0x100340a7f*/
      break; /*0x100340a84*/
    case 4: /*0x100340a4c*/
      v4 = "refreshFailed"; /*0x100340a5c*/
      v5 = 13; /*0x100340a63*/
      break; /*0x100340a68*/
  }
  v6 = serde_json::ser::format_escaped_str::h598a256d856e248a(a2, v3, v4, v5); /*0x100340a95*/
  if ( v6 ) /*0x100340a9d*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x100340aa7*/
  else
    return 0; /*0x100340a9f*/
}