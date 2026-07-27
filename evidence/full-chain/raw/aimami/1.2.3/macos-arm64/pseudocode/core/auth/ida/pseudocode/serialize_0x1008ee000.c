// __ZN13codexmate_lib4core4auth1_92_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..auth..AuthFile$GT$9serialize @ 0x1008ee000 | 基线 same-set
__int64 __fastcall codexmate_lib::core::auth::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..auth..AuthFile$GT$::serialize::hed4d8af9ba7fb5cd(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+8h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-20h]

  v7 = *(_QWORD **)a2; /*0x1008ee010*/
  ++*(_QWORD *)(a2 + 24); /*0x1008ee013*/
  *(_BYTE *)(a2 + 32) = 0; /*0x1008ee017*/
  v8 = v7[2]; /*0x1008ee01b*/
  if ( *v7 == v8 ) /*0x1008ee022*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a7); /*0x1008ee146*/
    v8 = v7[2]; /*0x1008ee14e*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x1008ee02c*/
  v7[2] = v8 + 1; /*0x1008ee033*/
  v10 = 256; /*0x1008ee037*/
  v11 = a2; /*0x1008ee03d*/
  result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1008ee054*/
             &v10,
             &anon_155c4da9b5393270cfa7378e2b52c417_229,
             9,
             a1);
  if ( !result ) /*0x1008ee05c*/
  {
    if ( (_BYTE)v10 ) /*0x1008ee06d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008ee06d*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1008ee092*/
               &v10,
               &anon_155c4da9b5393270cfa7378e2b52c417_230,
               14,
               a1 + 24);
    if ( result ) /*0x1008ee09a*/
      return result; /*0x1008ee09a*/
    if ( (_BYTE)v10 ) /*0x1008ee0a0*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008ee0a0*/
    result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x1008ee0b9*/
               &v10,
               &anon_155c4da9b5393270cfa7378e2b52c417_231,
               25,
               a1 + 168);
    if ( result ) /*0x1008ee0c1*/
      return result; /*0x1008ee0c1*/
    if ( (_BYTE)v10 ) /*0x1008ee0c7*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008ee0c7*/
    result = serde_core::ser::SerializeMap::serialize_entry::h6882017631ea8972( /*0x1008ee0dd*/
               &v10,
               &anon_155c4da9b5393270cfa7378e2b52c417_232,
               6,
               a1 + 48);
    if ( result ) /*0x1008ee0e5*/
      return result; /*0x1008ee0e5*/
    if ( (_BYTE)v10 ) /*0x1008ee0ef*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008ee079*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1008ee10f*/
               &v10,
               &anon_155c4da9b5393270cfa7378e2b52c417_233,
               12,
               a1 + 144);
    if ( !result ) /*0x1008ee117*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v10); /*0x1008ee121*/
      return 0; /*0x1008ee126*/
    }
  }
  return result; /*0x1008ee05e*/
}