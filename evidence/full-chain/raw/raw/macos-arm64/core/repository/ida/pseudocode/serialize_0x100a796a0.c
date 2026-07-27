// __ZN13codexmate_lib4core10repository1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..MysteryRouteGrant$GT$9serialize @ 0x100a796a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..MysteryRouteGrant$GT$::serialize::h74303a9534d9cb69(
        __int64 *a1,
        _QWORD *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int16 v14; // [rsp+0h] [rbp-30h] BYREF
  _QWORD *v15; // [rsp+8h] [rbp-28h]

  v7 = *a1; /*0x100a796b2*/
  v8 = *a2; /*0x100a796b5*/
  v9 = *(_QWORD *)(*a2 + 16LL); /*0x100a796b8*/
  if ( *(_QWORD *)*a2 == v9 ) /*0x100a796bf*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a7978c*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v9 = *(_QWORD *)(v8 + 16); /*0x100a79794*/
  }
  *(_BYTE *)(*(_QWORD *)(v8 + 8) + v9) = 123; /*0x100a796c9*/
  *(_QWORD *)(v8 + 16) = v9 + 1; /*0x100a796d0*/
  v14 = 256; /*0x100a796d4*/
  v15 = a2; /*0x100a796da*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100a796f2*/
             &v14,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_267,
             5,
             a1 + 2);
  if ( !result ) /*0x100a796fa*/
  {
    if ( !v7 ) /*0x100a7970c*/
      goto LABEL_9; /*0x100a7970c*/
    if ( (_BYTE)v14 == 1 ) /*0x100a79712*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100a79720*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x100a79738*/
               &v14,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_268,
               11,
               a1);
    if ( !result ) /*0x100a79740*/
    {
LABEL_9:
      result = 0; /*0x100a79742*/
      if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x100a7974e*/
      {
        v12 = *v15; /*0x100a79754*/
        v13 = *(_QWORD *)(*v15 + 16LL); /*0x100a79757*/
        if ( *(_QWORD *)*v15 == v13 ) /*0x100a7975e*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a797b0*/
            *v15,
            v13,
            1,
            1,
            1,
            v11);
          v13 = *(_QWORD *)(v12 + 16); /*0x100a797b5*/
        }
        *(_BYTE *)(*(_QWORD *)(v12 + 8) + v13) = 125; /*0x100a79764*/
        *(_QWORD *)(v12 + 16) = v13 + 1; /*0x100a7976b*/
        return 0; /*0x100a7976f*/
      }
    }
  }
  return result; /*0x100a796fc*/
}