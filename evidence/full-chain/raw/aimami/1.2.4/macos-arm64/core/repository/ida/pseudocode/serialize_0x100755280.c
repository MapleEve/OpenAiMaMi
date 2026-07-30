// __ZN13codexmate_lib4core10repository1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryFile$GT$9serialize @ 0x100755280 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryFile$GT$::serialize::he4e7b7b32c9182b9(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+8h] [rbp-38h] BYREF
  __int64 v6; // [rsp+18h] [rbp-28h] BYREF
  __int64 v7; // [rsp+20h] [rbp-20h]

  v2 = *(_QWORD **)a2; /*0x100755290*/
  ++*(_QWORD *)(a2 + 24); /*0x100755293*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100755297*/
  v3 = v2[2]; /*0x10075529b*/
  if ( *v2 == v3 ) /*0x1007552a2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(v2, v2[2], 1, 1, 1); /*0x1007553d0*/
    v3 = v2[2]; /*0x1007553d8*/
  }
  *(_BYTE *)(v2[1] + v3) = 123; /*0x1007552ac*/
  v2[2] = v3 + 1; /*0x1007552b3*/
  LOWORD(v6) = 256; /*0x1007552b7*/
  v7 = a2; /*0x1007552bd*/
  result = serde_core::ser::SerializeMap::serialize_entry::h6fb870bd1b98ac9a( /*0x1007552d5*/
             &v6,
             &anon_968df7ff55cc5af6b8e31bcf74ad2104_214,
             13,
             a1 + 80);
  if ( !result ) /*0x1007552dd*/
  {
    if ( (_BYTE)v6 ) /*0x1007552ee*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1007552ee*/
    result = serde_core::ser::SerializeMap::serialize_entry::h17ce176ac3d7fd13( /*0x100755313*/
               &v6,
               &anon_968df7ff55cc5af6b8e31bcf74ad2104_215,
               9,
               a1 + 72);
    if ( result ) /*0x10075531b*/
      return result; /*0x10075531b*/
    if ( (_BYTE)v6 ) /*0x100755321*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100755321*/
    result = serde_core::ser::SerializeMap::serialize_entry::hf0a36f825d13b3c3( /*0x100755337*/
               &v6,
               &anon_968df7ff55cc5af6b8e31bcf74ad2104_216,
               16,
               a1 + 24);
    if ( result ) /*0x10075533f*/
      return result; /*0x10075533f*/
    if ( (_BYTE)v6 ) /*0x100755345*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1007552fa*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc267dcf4bad8ae28( /*0x10075535a*/
               &v6,
               &anon_968df7ff55cc5af6b8e31bcf74ad2104_217,
               5,
               a1);
    if ( !result ) /*0x100755362*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::ha2985aec5efcf456( /*0x100755370*/
                 &v6,
                 a1 + 48);
      if ( !result ) /*0x100755378*/
      {
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hc8c61cc9e2d21491( /*0x100755389*/
                   &v6,
                   a1 + 84);
        if ( !result ) /*0x100755391*/
        {
          v5[1] = v7; /*0x10075539f*/
          v5[0] = v6; /*0x1007553a3*/
          _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h05c35839663db935(v5); /*0x1007553ab*/
          return 0; /*0x1007553b0*/
        }
      }
    }
  }
  return result; /*0x1007552df*/
}