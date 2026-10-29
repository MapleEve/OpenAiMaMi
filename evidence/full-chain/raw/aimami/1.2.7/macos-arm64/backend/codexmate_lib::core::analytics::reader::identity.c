// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::identity::hc24775248866d224; addr: 0x1009c1530; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
__int64 __fastcall codexmate_lib::core::analytics::reader::identity::hc24775248866d224(__int64 a1, int a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v5; // [rsp+20h] [rbp-10h] BYREF
  __int64 v6; // [rsp+28h] [rbp-8h] BYREF

  v6 = a2; /*0x1009c153b*/
  v5 = a3; /*0x1009c153f*/
  v4[0] = &v6; /*0x1009c1547*/
  v4[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1009c1552*/
  v4[2] = &v5; /*0x1009c155a*/
  v4[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1009c155e*/
  return alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1019031E3, v4); /*0x1009c1572*/
}