// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x1010ff270 depth=3
// serde_json5error5Error12fix_position
__int64 __fastcall serde_json::error::Error::fix_position::hcddea6c8e528a7ec(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14

  v2 = a1; /*0x1010ff277*/
  if ( !*(_QWORD *)(a1 + 24) ) /*0x1010ff27a*/
  {
    v3 = serde_json::de::Deserializer$LT$R$GT$::error::h85175ebc8366b145(a2, a1); /*0x1010ff28c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010ff29c*/
    return v3; /*0x1010ff2a1*/
  }
  return v2; /*0x1010ff2a7*/
}