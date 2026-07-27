// __ZN13codexmate_lib4core5relay6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$9serialize @ 0x10032d530 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$::serialize::h75e4cc746f770bdf(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10032d53a*/
  switch ( *a1 ) /*0x10032d54c*/
  {
    case 0: /*0x10032d54c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_394; /*0x10032d54e*/
      goto LABEL_6; /*0x10032d555*/
    case 1: /*0x10032d54c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_381; /*0x10032d581*/
      v5 = 8; /*0x10032d588*/
      break; /*0x10032d58d*/
    case 2: /*0x10032d54c*/
      v4 = "kimi"; /*0x10032d565*/
      v5 = 4; /*0x10032d56c*/
      break; /*0x10032d571*/
    case 3: /*0x10032d54c*/
      v4 = "minimax"; /*0x10032d573*/
LABEL_6:
      v5 = 7; /*0x10032d57a*/
      break; /*0x10032d57f*/
    case 4: /*0x10032d54c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_395; /*0x10032d557*/
      v5 = 6; /*0x10032d55e*/
      break; /*0x10032d563*/
    case 5: /*0x10032d54c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_396; /*0x10032d58f*/
      v5 = 5; /*0x10032d596*/
      break; /*0x10032d59b*/
    case 6: /*0x10032d54c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_397; /*0x10032d59d*/
      v5 = 10; /*0x10032d5a4*/
      break; /*0x10032d5a4*/
  }
  v6 = serde_json::ser::format_escaped_str::h598a256d856e248a(a2, v3, v4, v5); /*0x10032d5ac*/
  if ( v6 ) /*0x10032d5b4*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x10032d5be*/
  else
    return 0; /*0x10032d5b6*/
}