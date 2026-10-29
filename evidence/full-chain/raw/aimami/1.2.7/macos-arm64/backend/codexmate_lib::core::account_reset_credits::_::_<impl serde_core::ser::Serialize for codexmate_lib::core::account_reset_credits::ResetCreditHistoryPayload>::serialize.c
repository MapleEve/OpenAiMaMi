// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_reset_credits::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_reset_credits..ResetCreditHistoryPayload$GT$::serialize::hd111ef800580a338; addr: 0x1009fd6c0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::account_reset_credits::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_reset_credits..ResetCreditHistoryPayload$GT$::serialize::hd111ef800580a338(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int16 v7; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1009fd6d0*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1009fd6d3*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1009fd6da*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1009fd7a1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1009fd7a9*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1009fd6e4*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1009fd6eb*/
  v7 = 256; /*0x1009fd6ef*/
  v8 = a2; /*0x1009fd6f5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9e4251e2ade2f664(&v7, "eventsnext_cursor", 6, a1); /*0x1009fd70c*/
  if ( !result ) /*0x1009fd714*/
  {
    if ( (_BYTE)v7 == 1 ) /*0x1009fd725*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v7, "eventsnext_cursor"); /*0x1009fd731*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::ha7e7f3cb0f6b5728( /*0x1009fd74d*/
                 &v7,
                 &anon_25039b10cfdf58965817401c80a821a1_217,
                 10,
                 a1 + 24);
      if ( !result ) /*0x1009fd755*/
      {
        result = 0; /*0x1009fd757*/
        if ( (v7 & 1) == 0 ) /*0x1009fd75d*/
        {
          if ( HIBYTE(v7) ) /*0x1009fd763*/
          {
            v5 = *v8; /*0x1009fd769*/
            v6 = *(_QWORD *)(*v8 + 16LL); /*0x1009fd76c*/
            if ( *(_QWORD *)*v8 == v6 ) /*0x1009fd773*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(*v8, v6, 1, 1, 1); /*0x1009fd7c5*/
              v6 = *(_QWORD *)(v5 + 16); /*0x1009fd7ca*/
            }
            *(_BYTE *)(*(_QWORD *)(v5 + 8) + v6) = 125; /*0x1009fd779*/
            *(_QWORD *)(v5 + 16) = v6 + 1; /*0x1009fd780*/
            return 0; /*0x1009fd784*/
          }
        }
      }
    }
  }
  return result; /*0x1009fd716*/
}