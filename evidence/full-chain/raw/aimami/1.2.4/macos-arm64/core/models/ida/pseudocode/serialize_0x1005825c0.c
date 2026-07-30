// __ZN13codexmate_lib4core6models1_114_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ClaudeWebSearchCompatPayload$GT$9serialize @ 0x1005825c0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ClaudeWebSearchCompatPayload$GT$::serialize::heb1d4db73e4e495b(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int16 v8; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+10h] [rbp-20h]

  v2 = a1; /*0x1005825cd*/
  v3 = *a2; /*0x1005825d0*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x1005825d3*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x1005825da*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b( /*0x100582661*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v2 = a1; /*0x100582669*/
    v4 = *(_QWORD *)(v3 + 16); /*0x10058266c*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x1005825e0*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x1005825e7*/
  v8 = 256; /*0x1005825eb*/
  v9 = a2; /*0x1005825f1*/
  result = serde_core::ser::SerializeMap::serialize_entry::h5b5e14cbc382380e( /*0x100582605*/
             &v8,
             &anon_d163fe72d6e6e73a137b22815ab75905_607,
             7,
             v2);
  if ( !result && (v8 & 1) == 0 && HIBYTE(v8) ) /*0x100582619*/
  {
    v6 = *v9; /*0x10058261f*/
    v7 = *(_QWORD *)(*v9 + 16LL); /*0x100582622*/
    if ( *(_QWORD *)*v9 == v7 ) /*0x100582629*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(*v9, v7, 1, 1, 1); /*0x10058268b*/
      result = 0; /*0x100582690*/
      v7 = *(_QWORD *)(v6 + 16); /*0x100582693*/
    }
    *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 125; /*0x10058262f*/
    *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100582636*/
  }
  return result; /*0x10058263a*/
}