// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x1010ff010 depth=3
// serde_core2de5Error14invalid_length
__int64 __fastcall serde_core::de::Error::invalid_length::hcacc1da483e1fd21(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-8h] BYREF

  v6 = a1; /*0x1010ff018*/
  v5[0] = a2; /*0x1010ff01c*/
  v5[1] = a3; /*0x1010ff020*/
  v4[0] = &v6; /*0x1010ff028*/
  v4[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1010ff033*/
  v4[2] = v5; /*0x1010ff03b*/
  v4[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4d6548cb68479ce8; /*0x1010ff046*/
  return _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x1010ff05a*/
           &anon_3e4c14ac1826b92abbb84b981a88c995_4,
           (unsigned __int64)v4);
}