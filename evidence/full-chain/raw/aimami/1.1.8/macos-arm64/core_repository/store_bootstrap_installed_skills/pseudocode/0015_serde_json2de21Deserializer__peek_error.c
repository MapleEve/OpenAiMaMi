// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_installed_skills node 0x1010ff940 depth=2
_QWORD *__fastcall serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::peek_position::h7b2b3529a5a283fb(a1 + 24); /*0x1010ff94e*/
  return serde_json::error::Error::syntax::hf7c449ec16fad968(a2, v2, v3); /*0x1010ff959*/
}