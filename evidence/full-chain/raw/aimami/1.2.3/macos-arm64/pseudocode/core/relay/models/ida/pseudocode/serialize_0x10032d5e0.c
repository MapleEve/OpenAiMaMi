// __ZN13codexmate_lib4core5relay6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$9serialize @ 0x10032d5e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$::serialize::hb74ec3dc20a87cee(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax
  const char *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  switch ( *a2 ) /*0x10032d5fa*/
  {
    case 0: /*0x10032d5fa*/
      v3 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_394; /*0x10032d603*/
      v4 = 7; /*0x10032d60f*/
      v5 = 0; /*0x10032d618*/
      break; /*0x10032d61a*/
    case 1: /*0x10032d5fa*/
      v3 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_381; /*0x10032d695*/
      v4 = 8; /*0x10032d6a1*/
      v5 = 1; /*0x10032d6aa*/
      break; /*0x10032d6af*/
    case 2: /*0x10032d5fa*/
      v3 = "kimi"; /*0x10032d64c*/
      v4 = 4; /*0x10032d658*/
      v5 = 2; /*0x10032d661*/
      break; /*0x10032d666*/
    case 3: /*0x10032d5fa*/
      v3 = "minimax"; /*0x10032d672*/
      v4 = 7; /*0x10032d67e*/
      v5 = 3; /*0x10032d687*/
      break; /*0x10032d68c*/
    case 4: /*0x10032d5fa*/
      v3 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_395; /*0x10032d626*/
      v4 = 6; /*0x10032d632*/
      v5 = 4; /*0x10032d63b*/
      break; /*0x10032d640*/
    case 5: /*0x10032d5fa*/
      v3 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_396; /*0x10032d6b8*/
      v4 = 5; /*0x10032d6c4*/
      v5 = 5; /*0x10032d6cd*/
      break; /*0x10032d6d2*/
    case 6: /*0x10032d5fa*/
      v3 = (const char *)&anon_b0ee9adff4519c22b647af231a5a39fa_397; /*0x10032d6db*/
      v4 = 10; /*0x10032d6e7*/
      v5 = 6; /*0x10032d6f0*/
      break; /*0x10032d6f0*/
  }
  _$LT$serde_json..value..ser..RawValueEmitter$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h09a806c9963c943d( /*0x10032d6f5*/
    a1,
    &anon_b0ee9adff4519c22b647af231a5a39fa_393,
    10,
    v5,
    v3,
    v4,
    v2);
  return a1; /*0x10032d701*/
}