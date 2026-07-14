// mac 1.1.8 behavioral persist_account_auth 0x101059e90 d=1
char __fastcall _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD v4[7]; // [rsp-38h] [rbp-38h] BYREF

  v2 = *a1; /*0x101059e90*/
  if ( !*(_QWORD *)(v2 + 24) ) /*0x101059e93*/
    return _$LT$serde_json..error..ErrorCode$u20$as$u20$core..fmt..Display$GT$::fmt::hf246a4d7e33171aa(); /*0x101059e98*/
  v4[0] = v2; /*0x101059eaa*/
  v4[1] = _$LT$serde_json..error..ErrorCode$u20$as$u20$core..fmt..Display$GT$::fmt::hf246a4d7e33171aa; /*0x101059eb9*/
  v4[2] = v2 + 24; /*0x101059ebd*/
  v4[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101059ec8*/
  v4[4] = v2 + 32; /*0x101059ecc*/
  v4[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101059ed0*/
  return core::fmt::write::h2e5a8157a38fb62d(*a2, a2[1], anon_4637c62f98945a9219b797e7c92d14e2_47, (unsigned __int64)v4); /*0x101059ef0*/
}