// __ZN13codexmate_lib4core6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceRuntimeStatusPayload$GT$9serialize @ 0x1003424c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceRuntimeStatusPayload$GT$::serialize::h39ec0d80a91907e4(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-20h]

  v6 = *a2; /*0x1003424d0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003424d3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003424da*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100342c5e*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100342c66*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003424e4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003424eb*/
  v9 = 256; /*0x1003424ef*/
  v10 = a2; /*0x1003424f5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100342510*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_440,
             9,
             a1 + 696);
  if ( !result ) /*0x100342518*/
  {
    if ( (_BYTE)v9 ) /*0x100342529*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342529*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100342551*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_669,
               7,
               a1 + 697);
    if ( result ) /*0x100342559*/
      return result; /*0x100342559*/
    if ( (_BYTE)v9 ) /*0x10034255f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034255f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h6c714dc2044b2ff9(&v9, &unk_1015E5E5E, 12, a1 + 705); /*0x100342578*/
    if ( result ) /*0x100342580*/
      return result; /*0x100342580*/
    if ( (_BYTE)v9 ) /*0x100342586*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342586*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbd0b1ec0976c243f(&v9, &unk_1015E5E6A, 11, a1 + 702); /*0x10034259f*/
    if ( result ) /*0x1003425a7*/
      return result; /*0x1003425a7*/
    if ( (_BYTE)v9 ) /*0x1003425b1*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003425b1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5E75, 14, a1 + 16); /*0x1003425cb*/
    if ( result ) /*0x1003425d3*/
      return result; /*0x1003425d3*/
    if ( (_BYTE)v9 ) /*0x1003425dd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003425dd*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99(&v9, &unk_1015E5E83, 14, a1 + 640); /*0x1003425fa*/
    if ( result ) /*0x100342602*/
      return result; /*0x100342602*/
    if ( (_BYTE)v9 ) /*0x10034260c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034260c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5E91, 15, a1 + 40); /*0x100342626*/
    if ( result ) /*0x10034262e*/
      return result; /*0x10034262e*/
    if ( (_BYTE)v9 ) /*0x100342638*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342638*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5EA0, 14, a1 + 64); /*0x100342652*/
    if ( result ) /*0x10034265a*/
      return result; /*0x10034265a*/
    if ( (_BYTE)v9 ) /*0x100342664*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342664*/
    result = serde_core::ser::SerializeMap::serialize_entry::hefd8f5c45e63ff57(&v9, &unk_1015E5EAE, 12, a1 + 698); /*0x100342681*/
    if ( result ) /*0x100342689*/
      return result; /*0x100342689*/
    if ( (_BYTE)v9 ) /*0x100342693*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342693*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6(&v9, &unk_1015E5EBA, 19, a1 + 648); /*0x1003426b0*/
    if ( result ) /*0x1003426b8*/
      return result; /*0x1003426b8*/
    if ( (_BYTE)v9 ) /*0x1003426c2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003426c2*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99(&v9, &unk_1015E5ECD, 18, a1 + 656); /*0x1003426df*/
    if ( result ) /*0x1003426e7*/
      return result; /*0x1003426e7*/
    if ( (_BYTE)v9 ) /*0x1003426f1*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003426f1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5EDF, 19, a1 + 88); /*0x10034270b*/
    if ( result ) /*0x100342713*/
      return result; /*0x100342713*/
    if ( (_BYTE)v9 ) /*0x10034271d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034271d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5EF2, 18, a1 + 112); /*0x100342737*/
    if ( result ) /*0x10034273f*/
      return result; /*0x10034273f*/
    if ( (_BYTE)v9 ) /*0x100342749*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342749*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6(&v9, &unk_1015E5F04, 23, a1 + 664); /*0x100342766*/
    if ( result ) /*0x10034276e*/
      return result; /*0x10034276e*/
    if ( (_BYTE)v9 ) /*0x100342778*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342778*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99(&v9, &unk_1015E5F1B, 20, a1 + 672); /*0x100342795*/
    if ( result ) /*0x10034279d*/
      return result; /*0x10034279d*/
    if ( (_BYTE)v9 ) /*0x1003427a7*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003427a7*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5F2F, 21, a1 + 136); /*0x1003427c4*/
    if ( result ) /*0x1003427cc*/
      return result; /*0x1003427cc*/
    if ( (_BYTE)v9 ) /*0x1003427d6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003427d6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5F44, 20, a1 + 160); /*0x1003427f3*/
    if ( result ) /*0x1003427fb*/
      return result; /*0x1003427fb*/
    if ( (_BYTE)v9 ) /*0x100342805*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342805*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6(&v9, &unk_1015E5F58, 25, a1 + 680); /*0x100342822*/
    if ( result ) /*0x10034282a*/
      return result; /*0x10034282a*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h4600a2d2b0b0a523( /*0x10034283b*/
               &v9,
               a1 + 699);
    if ( result ) /*0x100342843*/
      return result; /*0x100342843*/
    if ( (_BYTE)v9 ) /*0x10034284d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034284d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5F7C, 19, a1 + 184); /*0x10034286a*/
    if ( result ) /*0x100342872*/
      return result; /*0x100342872*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h1d3c6a8b4bb52f2f( /*0x100342883*/
               &v9,
               a1 + 700);
    if ( result ) /*0x10034288b*/
      return result; /*0x10034288b*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8f3fa281ffe917b9( /*0x10034289c*/
               &v9,
               a1 + 701);
    if ( result ) /*0x1003428a4*/
      return result; /*0x1003428a4*/
    if ( (_BYTE)v9 ) /*0x1003428ae*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003428ae*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003428cb*/
               &v9,
               "processingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
               16,
               a1 + 208);
    if ( result ) /*0x1003428d3*/
      return result; /*0x1003428d3*/
    if ( (_BYTE)v9 ) /*0x1003428dd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003428dd*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3(&v9, &unk_1015E5FA9, 23, a1 + 496); /*0x1003428fa*/
    if ( result ) /*0x100342902*/
      return result; /*0x100342902*/
    if ( (_BYTE)v9 ) /*0x10034290c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034290c*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6(&v9, &unk_1015E5FC0, 17, a1 + 688); /*0x100342929*/
    if ( result ) /*0x100342931*/
      return result; /*0x100342931*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h138afa108744b550( /*0x100342942*/
               &v9,
               a1 + 592);
    if ( result ) /*0x10034294a*/
      return result; /*0x10034294a*/
    if ( (_BYTE)v9 ) /*0x100342954*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342954*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E3AC0, 8, a1 + 232); /*0x100342971*/
    if ( result ) /*0x100342979*/
      return result; /*0x100342979*/
    if ( (_BYTE)v9 ) /*0x100342983*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342983*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5FD1, 13, a1 + 256); /*0x1003429a0*/
    if ( result ) /*0x1003429a8*/
      return result; /*0x1003429a8*/
    if ( (_BYTE)v9 ) /*0x1003429b2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003429b2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5FDE, 20, a1 + 280); /*0x1003429cf*/
    if ( result ) /*0x1003429d7*/
      return result; /*0x1003429d7*/
    if ( (_BYTE)v9 ) /*0x1003429e1*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003429e1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E5FF2, 21, a1 + 304); /*0x1003429fe*/
    if ( result ) /*0x100342a06*/
      return result; /*0x100342a06*/
    if ( (_BYTE)v9 ) /*0x100342a10*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342a10*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E6007, 22, a1 + 328); /*0x100342a2d*/
    if ( result ) /*0x100342a35*/
      return result; /*0x100342a35*/
    if ( (_BYTE)v9 ) /*0x100342a3f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342a3f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E601D, 21, a1 + 352); /*0x100342a5c*/
    if ( result ) /*0x100342a64*/
      return result; /*0x100342a64*/
    if ( (_BYTE)v9 ) /*0x100342a6e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342a6e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E6032, 17, a1 + 376); /*0x100342a8b*/
    if ( result ) /*0x100342a93*/
      return result; /*0x100342a93*/
    if ( (_BYTE)v9 ) /*0x100342a9d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342a9d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E6043, 14, a1 + 400); /*0x100342aba*/
    if ( result ) /*0x100342ac2*/
      return result; /*0x100342ac2*/
    if ( (_BYTE)v9 ) /*0x100342acc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342acc*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E6051, 19, a1 + 424); /*0x100342ae9*/
    if ( result ) /*0x100342af1*/
      return result; /*0x100342af1*/
    if ( (_BYTE)v9 ) /*0x100342afb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342afb*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E6064, 18, a1 + 448); /*0x100342b18*/
    if ( result ) /*0x100342b20*/
      return result; /*0x100342b20*/
    if ( (_BYTE)v9 ) /*0x100342b2a*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342b2a*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc15dbe813cceb201(&v9, &unk_1015E6076, 17, a1); /*0x100342b43*/
    if ( result ) /*0x100342b4b*/
      return result; /*0x100342b4b*/
    if ( (_BYTE)v9 ) /*0x100342b55*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342b55*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100342b72*/
               &v9,
               "lastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
               16,
               a1 + 520);
    if ( result ) /*0x100342b7a*/
      return result; /*0x100342b7a*/
    if ( (_BYTE)v9 ) /*0x100342b84*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342b84*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100342ba1*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_423,
               9,
               a1 + 544);
    if ( result ) /*0x100342ba9*/
      return result; /*0x100342ba9*/
    if ( (_BYTE)v9 ) /*0x100342bb3*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342bb3*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, &unk_1015E6087, 10, a1 + 472); /*0x100342bd0*/
    if ( result ) /*0x100342bd8*/
      return result; /*0x100342bd8*/
    if ( (_BYTE)v9 ) /*0x100342be2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342535*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3(&v9, &unk_1015E6091, 11, a1 + 568); /*0x100342c02*/
    if ( !result ) /*0x100342c0a*/
    {
      result = 0; /*0x100342c10*/
      if ( (v9 & 1) == 0 ) /*0x100342c16*/
      {
        if ( HIBYTE(v9) ) /*0x100342c20*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100342c39*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100342c3e*/
        }
      }
    }
  }
  return result; /*0x10034251a*/
}