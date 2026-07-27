// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiConfigPayload$GT$9serialize @ 0x10033b080 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiConfigPayload$GT$::serialize::h617346c9667e2e8f(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int16 v13; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-20h]

  v6 = a1; /*0x10033b08d*/
  v7 = *a2; /*0x10033b090*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10033b093*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10033b09a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033b121*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v6 = a1; /*0x10033b129*/
    v8 = *(_QWORD *)(v7 + 16); /*0x10033b12c*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10033b0a0*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10033b0a7*/
  v13 = 256; /*0x10033b0ab*/
  v14 = a2; /*0x10033b0b1*/
  result = serde_core::ser::SerializeMap::serialize_entry::had49e5e731135425( /*0x10033b0c5*/
             &v13,
             &anon_b0ee9adff4519c22b647af231a5a39fa_283,
             5,
             v6);
  if ( !result && (v13 & 1) == 0 && HIBYTE(v13) ) /*0x10033b0d9*/
  {
    v11 = *v14; /*0x10033b0df*/
    v12 = *(_QWORD *)(*v14 + 16LL); /*0x10033b0e2*/
    if ( *(_QWORD *)*v14 == v12 ) /*0x10033b0e9*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(*v14, v12, 1, 1, 1, v10); /*0x10033b14b*/
      result = 0; /*0x10033b150*/
      v12 = *(_QWORD *)(v11 + 16); /*0x10033b153*/
    }
    *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 125; /*0x10033b0ef*/
    *(_QWORD *)(v11 + 16) = v12 + 1; /*0x10033b0f6*/
  }
  return result; /*0x10033b0fa*/
}