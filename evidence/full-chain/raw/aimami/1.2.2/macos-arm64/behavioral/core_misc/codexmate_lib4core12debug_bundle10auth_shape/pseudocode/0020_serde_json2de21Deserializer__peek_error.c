// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x1013b97c0 d=2
__int64 __fastcall serde_json::de::Deserializer$LT$R$GT$::peek_error::h33e41acf96405c14(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::peek_position::h7b2b3529a5a283fb(a1 + 24); /*0x1013b97ce*/
  return serde_json::error::Error::syntax::hf7c449ec16fad968(a2, v2); /*0x1013b97d9*/
}