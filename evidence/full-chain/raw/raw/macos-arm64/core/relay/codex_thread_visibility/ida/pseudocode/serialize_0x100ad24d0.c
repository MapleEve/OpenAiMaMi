// __ZN13codexmate_lib4core5relay23codex_thread_visibility1_127_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_thread_visibility..ModelRestoreEntry$GT$9serialize @ 0x100ad24d0
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::_ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_thread_visibility..ModelRestoreEntry$GT$::serialize::he01c61495a6deab3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-20h]

  v6 = *(_QWORD **)a2; /*0x100ad24e0*/
  ++*(_QWORD *)(a2 + 24); /*0x100ad24e3*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100ad24e7*/
  v7 = v6[2]; /*0x100ad24eb*/
  if ( *v6 == v7 ) /*0x100ad24f2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x100ad25e4*/
    v7 = v6[2]; /*0x100ad25ec*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x100ad24fc*/
  v6[2] = v7 + 1; /*0x100ad2503*/
  v9 = 256; /*0x100ad2507*/
  v10 = a2; /*0x100ad250d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100ad2524*/
             &v9,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_743,
             9,
             a1);
  if ( !result ) /*0x100ad252c*/
  {
    if ( (_BYTE)v9 ) /*0x100ad253d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100ad253d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100ad2562*/
               &v9,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_744,
               14,
               a1 + 24);
    if ( result ) /*0x100ad256a*/
      return result; /*0x100ad256a*/
    if ( (_BYTE)v9 ) /*0x100ad2570*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100ad2570*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100ad2586*/
               &v9,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_745,
               14,
               a1 + 48);
    if ( result ) /*0x100ad258e*/
      return result; /*0x100ad258e*/
    if ( (_BYTE)v9 ) /*0x100ad2594*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100ad2549*/
    result = serde_core::ser::SerializeMap::serialize_entry::hfdca63bb8e825f2c( /*0x100ad25ad*/
               &v9,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_746,
               8,
               a1 + 72);
    if ( !result ) /*0x100ad25b5*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x100ad25bf*/
      return 0; /*0x100ad25c4*/
    }
  }
  return result; /*0x100ad252e*/
}