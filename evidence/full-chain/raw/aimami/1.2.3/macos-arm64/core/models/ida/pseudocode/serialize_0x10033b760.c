// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerSummary$GT$9serialize @ 0x10033b760 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerSummary$GT$::serialize::h774f011f483c2196(
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

  v6 = *a2; /*0x10033b770*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033b773*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033b77a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033b966*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033b96e*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033b784*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033b78b*/
  v9 = 256; /*0x10033b78f*/
  v10 = a2; /*0x10033b795*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033b7ac*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_55,
             4,
             a1);
  if ( !result ) /*0x10033b7b4*/
  {
    if ( (_BYTE)v9 ) /*0x10033b7ba*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b7c1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h3bea3a4c61ad6c87( /*0x10033b7da*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_668,
               9,
               a1 + 217);
    if ( !result ) /*0x10033b7e2*/
    {
      if ( (_BYTE)v9 ) /*0x10033b7f3*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b7f3*/
      result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033b80c*/
                 &v9,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_669,
                 7,
                 a1 + 216);
      if ( !result ) /*0x10033b814*/
      {
        if ( (_BYTE)v9 ) /*0x10033b81a*/
          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b81a*/
        result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033b830*/
                   &v9,
                   &anon_b0ee9adff4519c22b647af231a5a39fa_670,
                   10,
                   a1 + 24);
        if ( !result ) /*0x10033b838*/
        {
          if ( (_BYTE)v9 ) /*0x10033b83e*/
            return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b83e*/
          result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b858*/
                     &v9,
                     &anon_b0ee9adff4519c22b647af231a5a39fa_671,
                     7,
                     a1 + 72);
          if ( !result ) /*0x10033b860*/
          {
            if ( (_BYTE)v9 ) /*0x10033b866*/
              return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b866*/
            result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x10033b880*/
                       &v9,
                       &anon_b0ee9adff4519c22b647af231a5a39fa_672,
                       4,
                       a1 + 48);
            if ( !result ) /*0x10033b888*/
            {
              if ( (_BYTE)v9 ) /*0x10033b892*/
                return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b892*/
              result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b8ac*/
                         &v9,
                         &anon_b0ee9adff4519c22b647af231a5a39fa_673,
                         3,
                         a1 + 96);
              if ( !result ) /*0x10033b8b4*/
              {
                if ( (_BYTE)v9 ) /*0x10033b8be*/
                  return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b8be*/
                result = serde_core::ser::SerializeMap::serialize_entry::he0723724008ec1c6( /*0x10033b8d8*/
                           &v9,
                           &anon_b0ee9adff4519c22b647af231a5a39fa_674,
                           7,
                           a1 + 120);
                if ( !result ) /*0x10033b8e0*/
                {
                  if ( (_BYTE)v9 ) /*0x10033b8ea*/
                    return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b8ea*/
                  result = serde_core::ser::SerializeMap::serialize_entry::he0723724008ec1c6( /*0x10033b90a*/
                             &v9,
                             &anon_b0ee9adff4519c22b647af231a5a39fa_675,
                             11,
                             a1 + 168);
                  if ( !result ) /*0x10033b912*/
                  {
                    result = 0; /*0x10033b918*/
                    if ( (v9 & 1) == 0 ) /*0x10033b91e*/
                    {
                      if ( HIBYTE(v9) ) /*0x10033b928*/
                      {
                        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033b941*/
                          *v10,
                          &anon_b0ee9adff4519c22b647af231a5a39fa_15,
                          1);
                        return 0; /*0x10033b946*/
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x10033b7e4*/
}