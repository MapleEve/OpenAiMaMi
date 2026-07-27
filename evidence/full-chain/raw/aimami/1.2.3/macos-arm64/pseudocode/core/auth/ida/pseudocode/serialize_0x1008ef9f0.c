// __ZN13codexmate_lib4core4auth1_94_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..auth..AuthTokens$GT$9serialize @ 0x1008ef9f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::auth::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..auth..AuthTokens$GT$::serialize::h561957a0bf6baed0(
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

  v7 = *(_QWORD **)a2; /*0x1008efa00*/
  ++*(_QWORD *)(a2 + 24); /*0x1008efa03*/
  *(_BYTE *)(a2 + 32) = 0; /*0x1008efa07*/
  v8 = v7[2]; /*0x1008efa0b*/
  if ( *v7 == v8 ) /*0x1008efa12*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a7); /*0x1008efb04*/
    v8 = v7[2]; /*0x1008efb0c*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x1008efa1c*/
  v7[2] = v8 + 1; /*0x1008efa23*/
  v10 = 256; /*0x1008efa27*/
  v11 = a2; /*0x1008efa2d*/
  result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1008efa44*/
             &v10,
             &anon_155c4da9b5393270cfa7378e2b52c417_182,
             8,
             a1);
  if ( !result ) /*0x1008efa4c*/
  {
    if ( (_BYTE)v10 ) /*0x1008efa5d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008efa5d*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1008efa82*/
               &v10,
               &anon_155c4da9b5393270cfa7378e2b52c417_180,
               12,
               a1 + 24);
    if ( result ) /*0x1008efa8a*/
      return result; /*0x1008efa8a*/
    if ( (_BYTE)v10 ) /*0x1008efa90*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008efa90*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1008efaa6*/
               &v10,
               &anon_155c4da9b5393270cfa7378e2b52c417_181,
               13,
               a1 + 48);
    if ( result ) /*0x1008efaae*/
      return result; /*0x1008efaae*/
    if ( (_BYTE)v10 ) /*0x1008efab4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008efa69*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x1008efacd*/
               &v10,
               &anon_155c4da9b5393270cfa7378e2b52c417_235,
               10,
               a1 + 72);
    if ( !result ) /*0x1008efad5*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v10); /*0x1008efadf*/
      return 0; /*0x1008efae4*/
    }
  }
  return result; /*0x1008efa4e*/
}