// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_reset_credits::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_reset_credits..ResetCreditGrant$GT$::serialize::h45e131a290d5d1a4; addr: 0x1009fd4d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::account_reset_credits::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_reset_credits..ResetCreditGrant$GT$::serialize::h45e131a290d5d1a4(
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

  v2 = *a2; /*0x1009fd4e0*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1009fd4e3*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1009fd4ea*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1009fd5ae*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1009fd5b6*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1009fd4f4*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1009fd4fb*/
  v7 = 256; /*0x1009fd4ff*/
  v8 = a2; /*0x1009fd505*/
  result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45(&v7, "idcursor", 2, a1 + 16); /*0x1009fd51d*/
  if ( !result ) /*0x1009fd525*/
  {
    if ( (_BYTE)v7 == 1 ) /*0x1009fd536*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v7, "idcursor"); /*0x1009fd542*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h3ededfa423e4c066( /*0x1009fd55a*/
                 &v7,
                 &anon_25039b10cfdf58965817401c80a821a1_214,
                 10,
                 a1);
      if ( !result ) /*0x1009fd562*/
      {
        result = 0; /*0x1009fd564*/
        if ( (v7 & 1) == 0 ) /*0x1009fd56a*/
        {
          if ( HIBYTE(v7) ) /*0x1009fd570*/
          {
            v5 = *v8; /*0x1009fd576*/
            v6 = *(_QWORD *)(*v8 + 16LL); /*0x1009fd579*/
            if ( *(_QWORD *)*v8 == v6 ) /*0x1009fd580*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(*v8, v6, 1, 1, 1); /*0x1009fd5d2*/
              v6 = *(_QWORD *)(v5 + 16); /*0x1009fd5d7*/
            }
            *(_BYTE *)(*(_QWORD *)(v5 + 8) + v6) = 125; /*0x1009fd586*/
            *(_QWORD *)(v5 + 16) = v6 + 1; /*0x1009fd58d*/
            return 0; /*0x1009fd591*/
          }
        }
      }
    }
  }
  return result; /*0x1009fd527*/
}