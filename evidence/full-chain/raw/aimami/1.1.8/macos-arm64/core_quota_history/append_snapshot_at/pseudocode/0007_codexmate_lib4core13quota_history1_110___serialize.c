// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND append_snapshot_at node 0x1003d1a30 depth=1
__int64 __fastcall codexmate_lib::core::quota_history::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPoint$GT$::serialize::heda5e40859142c4b(
        __int64 a1,
        unsigned __int64 **a2)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rax
  void *v4; // rsi
  __int64 result; // rax
  unsigned __int8 *v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 **v8; // r12
  unsigned __int64 *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int64 *v14; // rbx
  __int64 v15; // rsi
  __int16 v16; // [rsp+8h] [rbp-38h] BYREF
  unsigned __int64 **v17; // [rsp+10h] [rbp-30h]

  v2 = *a2; /*0x1003d1a44*/
  v3 = (*a2)[2]; /*0x1003d1a47*/
  if ( **a2 == v3 ) /*0x1003d1a4e*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*a2, (*a2)[2], 1, 1, 1u); /*0x1003d1bb9*/
    v3 = v2[2]; /*0x1003d1bc1*/
  }
  *(_BYTE *)(v2[1] + v3) = 123; /*0x1003d1a58*/
  v2[2] = v3 + 1; /*0x1003d1a5f*/
  v16 = 256; /*0x1003d1a63*/
  v17 = a2; /*0x1003d1a69*/
  v4 = &anon_0eedd02070250de7472aa97ee6b1a8ea_134; /*0x1003d1a71*/
  serde_core::ser::SerializeMap::serialize_entry::h1ff633f03943d6d5( /*0x1003d1a81*/
    (__int64)&v16,
    (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_134,
    9,
    (__int64 *)(a1 + 56));
  if ( (_BYTE)v16 ) /*0x1003d1a8a*/
    return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003d1a9a*/
  v6 = *(unsigned __int8 **)(a1 + 40); /*0x1003d1a9f*/
  v7 = *(_QWORD *)(a1 + 48); /*0x1003d1aa3*/
  v8 = v17; /*0x1003d1aa7*/
  if ( HIBYTE(v16) != 1 ) /*0x1003d1aaf*/
  {
    v9 = *v17; /*0x1003d1ab1*/
    v10 = (*v17)[2]; /*0x1003d1ab5*/
    if ( **v17 == v10 ) /*0x1003d1abd*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v17, v10, 1, 1, 1u); /*0x1003d1bfe*/
      v10 = v9[2]; /*0x1003d1c03*/
    }
    *(_BYTE *)(v9[1] + v10) = 44; /*0x1003d1ac7*/
    v4 = (void *)(v10 + 1); /*0x1003d1acb*/
    v9[2] = (unsigned __int64)v4; /*0x1003d1ace*/
  }
  HIBYTE(v16) = 2; /*0x1003d1ad2*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d( /*0x1003d1ae5*/
    v8,
    (__int64)v4,
    anon_0eedd02070250de7472aa97ee6b1a8ea_135,
    0xAu);
  v11 = *v8; /*0x1003d1aea*/
  v12 = (*v8)[2]; /*0x1003d1aee*/
  if ( **v8 == v12 ) /*0x1003d1af6*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v8, v12, 1, 1, 1u); /*0x1003d1bdd*/
    v12 = v11[2]; /*0x1003d1be2*/
  }
  *(_BYTE *)(v11[1] + v12) = 58; /*0x1003d1b00*/
  v13 = v12 + 1; /*0x1003d1b04*/
  v11[2] = v13; /*0x1003d1b07*/
  serde_json::ser::format_escaped_str::h29316bfe5256814d(v8, v13, v6, v7); /*0x1003d1b14*/
  result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h93cbeda4cf4f0a00( /*0x1003d1b31*/
             &v16,
             &anon_0eedd02070250de7472aa97ee6b1a8ea_136,
             18,
             *(_QWORD *)a1,
             *(double *)(a1 + 8));
  if ( !result ) /*0x1003d1b39*/
  {
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h93cbeda4cf4f0a00( /*0x1003d1b54*/
               &v16,
               &anon_0eedd02070250de7472aa97ee6b1a8ea_137,
               20,
               *(_QWORD *)(a1 + 16),
               *(double *)(a1 + 24));
    if ( !result ) /*0x1003d1b5c*/
    {
      result = 0; /*0x1003d1b5e*/
      if ( (v16 & 1) == 0 ) /*0x1003d1b64*/
      {
        if ( HIBYTE(v16) ) /*0x1003d1b6a*/
        {
          v14 = *v17; /*0x1003d1b70*/
          v15 = (*v17)[2]; /*0x1003d1b73*/
          if ( **v17 == v15 ) /*0x1003d1b7a*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v17, v15, 1, 1, 1u); /*0x1003d1c1f*/
            v15 = v14[2]; /*0x1003d1c24*/
          }
          *(_BYTE *)(v14[1] + v15) = 125; /*0x1003d1b84*/
          v14[2] = v15 + 1; /*0x1003d1b8b*/
          return 0; /*0x1003d1b8f*/
        }
      }
    }
  }
  return result; /*0x1003d1a8c*/
}