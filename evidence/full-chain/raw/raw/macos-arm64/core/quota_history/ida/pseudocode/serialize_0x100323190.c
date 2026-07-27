// __ZN13codexmate_lib4core13quota_history1_112_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPayload$GT$9serialize @ 0x100323190 | 基线 same-set
__int64 __fastcall codexmate_lib::core::quota_history::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPayload$GT$::serialize::h24b212e904d6960c(
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

  v6 = a1; /*0x10032319d*/
  v7 = *a2; /*0x1003231a0*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x1003231a3*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x1003231aa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100323231*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v6 = a1; /*0x100323239*/
    v8 = *(_QWORD *)(v7 + 16); /*0x10032323c*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x1003231b0*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x1003231b7*/
  v13 = 256; /*0x1003231bb*/
  v14 = a2; /*0x1003231c1*/
  result = serde_core::ser::SerializeMap::serialize_entry::h53de3482f4bd9b61( /*0x1003231d5*/
             &v13,
             &anon_b0ee9adff4519c22b647af231a5a39fa_121,
             6,
             v6);
  if ( !result && (v13 & 1) == 0 && HIBYTE(v13) ) /*0x1003231e9*/
  {
    v11 = *v14; /*0x1003231ef*/
    v12 = *(_QWORD *)(*v14 + 16LL); /*0x1003231f2*/
    if ( *(_QWORD *)*v14 == v12 ) /*0x1003231f9*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(*v14, v12, 1, 1, 1, v10); /*0x10032325b*/
      result = 0; /*0x100323260*/
      v12 = *(_QWORD *)(v11 + 16); /*0x100323263*/
    }
    *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 125; /*0x1003231ff*/
    *(_QWORD *)(v11 + 16) = v12 + 1; /*0x100323206*/
  }
  return result; /*0x10032320a*/
}