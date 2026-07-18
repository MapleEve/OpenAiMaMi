// mac 1.2.2 NEW codexmate_lib4core12debug_bundle23read_catalog_fil 0x101310140 d=1
char __fastcall _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD v4[7]; // [rsp-38h] [rbp-38h] BYREF

  v2 = *a1; /*0x101310140*/
  if ( !*(_QWORD *)(v2 + 24) ) /*0x101310143*/
    return _$LT$serde_json..error..ErrorCode$u20$as$u20$core..fmt..Display$GT$::fmt::hf246a4d7e33171aa(); /*0x101310148*/
  v4[0] = v2; /*0x10131015a*/
  v4[1] = _$LT$serde_json..error..ErrorCode$u20$as$u20$core..fmt..Display$GT$::fmt::hf246a4d7e33171aa; /*0x101310169*/
  v4[2] = v2 + 24; /*0x10131016d*/
  v4[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101310178*/
  v4[4] = v2 + 32; /*0x10131017c*/
  v4[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101310180*/
  return core::fmt::write::h2e5a8157a38fb62d(*a2, a2[1], anon_4637c62f98945a9219b797e7c92d14e2_47, (unsigned __int64)v4); /*0x1013101a0*/
}