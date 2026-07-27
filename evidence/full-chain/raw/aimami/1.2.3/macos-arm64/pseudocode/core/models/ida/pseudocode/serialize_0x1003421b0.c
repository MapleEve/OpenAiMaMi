// __ZN13codexmate_lib4core6models1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillDeleteBackupPayload$GT$9serialize @ 0x1003421b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillDeleteBackupPayload$GT$::serialize::h4074e09d98225489(
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
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int16 v12; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-20h]

  v6 = *a2; /*0x1003421c0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003421c3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003421ca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100342291*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100342299*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003421d4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003421db*/
  v12 = 256; /*0x1003421df*/
  v13 = a2; /*0x1003421e5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003421fc*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_893,
             15,
             a1);
  if ( !result ) /*0x100342204*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x100342215*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342221*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10034223d*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_894,
                 20,
                 a1 + 24);
      if ( !result ) /*0x100342245*/
      {
        result = 0; /*0x100342247*/
        if ( (v12 & 1) == 0 ) /*0x10034224d*/
        {
          if ( HIBYTE(v12) ) /*0x100342253*/
          {
            v10 = *v13; /*0x100342259*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10034225c*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x100342263*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003422b5*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x1003422ba*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x100342269*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x100342270*/
            return 0; /*0x100342274*/
          }
        }
      }
    }
  }
  return result; /*0x100342206*/
}