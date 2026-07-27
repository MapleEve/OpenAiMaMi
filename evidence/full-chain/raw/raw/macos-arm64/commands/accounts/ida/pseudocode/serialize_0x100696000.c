// __ZN13codexmate_lib8commands8accounts1_118_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..accounts..RuntimeStateUpdatedPayload$GT$9serialize @ 0x100696000 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..accounts..RuntimeStateUpdatedPayload$GT$::serialize::hb620d6d37ed35546(
        __int64 a1,
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

  v7 = *(_QWORD *)(a1 + 840); /*0x100696012*/
  v8 = *a2; /*0x100696019*/
  v9 = *(_QWORD *)(*a2 + 16LL); /*0x10069601c*/
  if ( *(_QWORD *)*a2 == v9 ) /*0x100696023*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100696123*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v9 = *(_QWORD *)(v8 + 16); /*0x10069612b*/
  }
  *(_BYTE *)(*(_QWORD *)(v8 + 8) + v9) = 123; /*0x10069602d*/
  *(_QWORD *)(v8 + 16) = v9 + 1; /*0x100696034*/
  v14 = 256; /*0x100696038*/
  v15 = a2; /*0x10069603e*/
  result = serde_core::ser::SerializeMap::serialize_entry::ha296bd8a99aed004( /*0x100696055*/
             &v14,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_648,
             8,
             a1);
  if ( !result ) /*0x10069605d*/
  {
    if ( (_BYTE)v14 ) /*0x100696070*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10069607e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10069609a*/
               &v14,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_649,
               6,
               a1 + 816);
    if ( result ) /*0x1006960a2*/
      return result; /*0x1006960a2*/
    if ( !__OFSUB__(-v7, 1) ) /*0x1006960a7*/
    {
      if ( (_BYTE)v14 ) /*0x1006960de*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1006960de*/
      result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1006960fa*/
                 &v14,
                 "accountKeyreason=transaction_failurerollback_completedstatus=verifiedrollback_failedfailed | ",
                 10,
                 a1 + 840);
      if ( result ) /*0x100696102*/
        return result; /*0x100696102*/
    }
    result = 0; /*0x1006960a9*/
    if ( (v14 & 1) == 0 && HIBYTE(v14) ) /*0x1006960b5*/
    {
      v12 = *v15; /*0x1006960bb*/
      v13 = *(_QWORD *)(*v15 + 16LL); /*0x1006960be*/
      if ( *(_QWORD *)*v15 == v13 ) /*0x1006960c5*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(*v15, v13, 1, 1, 1, v11); /*0x100696147*/
        v13 = *(_QWORD *)(v12 + 16); /*0x10069614c*/
      }
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + v13) = 125; /*0x1006960cb*/
      *(_QWORD *)(v12 + 16) = v13 + 1; /*0x1006960d2*/
      return 0; /*0x1006960d6*/
    }
  }
  return result; /*0x10069605f*/
}