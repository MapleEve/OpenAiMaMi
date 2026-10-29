// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_reset_credits::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_reset_credits..ResetCreditsPayload$GT$::serialize::hea9a3d0b2b0c8ecd; addr: 0x1009fd5e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::account_reset_credits::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_reset_credits..ResetCreditsPayload$GT$::serialize::hea9a3d0b2b0c8ecd(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int16 v8; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+10h] [rbp-20h]

  v2 = a1; /*0x1009fd5ed*/
  v3 = *a2; /*0x1009fd5f0*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x1009fd5f3*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x1009fd5fa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1009fd681*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v2 = a1; /*0x1009fd689*/
    v4 = *(_QWORD *)(v3 + 16); /*0x1009fd68c*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x1009fd600*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x1009fd607*/
  v8 = 256; /*0x1009fd60b*/
  v9 = a2; /*0x1009fd611*/
  result = serde_core::ser::SerializeMap::serialize_entry::hbd3eb3cbec7a220c(&v8, "creditsstatus", 7, v2); /*0x1009fd625*/
  if ( !result && (v8 & 1) == 0 && HIBYTE(v8) ) /*0x1009fd639*/
  {
    v6 = *v9; /*0x1009fd63f*/
    v7 = *(_QWORD *)(*v9 + 16LL); /*0x1009fd642*/
    if ( *(_QWORD *)*v9 == v7 ) /*0x1009fd649*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(*v9, v7, 1, 1, 1); /*0x1009fd6ab*/
      result = 0; /*0x1009fd6b0*/
      v7 = *(_QWORD *)(v6 + 16); /*0x1009fd6b3*/
    }
    *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 125; /*0x1009fd64f*/
    *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1009fd656*/
  }
  return result; /*0x1009fd65a*/
}