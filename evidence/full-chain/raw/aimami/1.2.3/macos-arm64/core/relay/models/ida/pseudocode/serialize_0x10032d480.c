// __ZN13codexmate_lib4core5relay6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$9serialize @ 0x10032d480 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$::serialize::h52a994afd0dc5044(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a2 + 8; /*0x10032d48a*/
  switch ( *a1 ) /*0x10032d49c*/
  {
    case 0: /*0x10032d49c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_394; /*0x10032d49e*/
      goto LABEL_6; /*0x10032d4a5*/
    case 1: /*0x10032d49c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_381; /*0x10032d4d1*/
      v5 = 8; /*0x10032d4d8*/
      break; /*0x10032d4dd*/
    case 2: /*0x10032d49c*/
      v4 = "kimi"; /*0x10032d4b5*/
      v5 = 4; /*0x10032d4bc*/
      break; /*0x10032d4c1*/
    case 3: /*0x10032d49c*/
      v4 = "minimax"; /*0x10032d4c3*/
LABEL_6:
      v5 = 7; /*0x10032d4ca*/
      break; /*0x10032d4cf*/
    case 4: /*0x10032d49c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_395; /*0x10032d4a7*/
      v5 = 6; /*0x10032d4ae*/
      break; /*0x10032d4b3*/
    case 5: /*0x10032d49c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_396; /*0x10032d4df*/
      v5 = 5; /*0x10032d4e6*/
      break; /*0x10032d4eb*/
    case 6: /*0x10032d49c*/
      v4 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_397; /*0x10032d4ed*/
      v5 = 10; /*0x10032d4f4*/
      break; /*0x10032d4f4*/
  }
  v6 = serde_json::ser::format_escaped_str::ha0cf022c375464ce(a2, v3, v4, v5); /*0x10032d4fc*/
  if ( v6 ) /*0x10032d504*/
    return serde_json::error::Error::io::h4df820d482c0c826(v6); /*0x10032d50e*/
  else
    return 0; /*0x10032d506*/
}