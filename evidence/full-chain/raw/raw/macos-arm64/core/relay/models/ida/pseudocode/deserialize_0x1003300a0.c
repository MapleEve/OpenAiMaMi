// __ZN13codexmate_lib4core5relay6models1_110_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayNetworkMode$GT$11deserialize @ 0x1003300a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayNetworkMode$GT$::deserialize::h94e9b5a5ae8cffeb(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char v15; // r12
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  char v28; // al
  __int64 v30; // [rsp+8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+10h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 32); /*0x1003300b5*/
  v4 = *(_QWORD *)(a2 + 40); /*0x1003300b9*/
  if ( v4 >= v3 ) /*0x1003300c0*/
  {
LABEL_6:
    v30 = 5; /*0x1003300f9*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x100330101*/
    *(_BYTE *)a1 = 1; /*0x100330111*/
    return a1; /*0x100330114*/
  }
  v5 = *(_QWORD *)(a2 + 24); /*0x1003300c2*/
  v6 = v4 + 1; /*0x1003300c6*/
  v7 = -(__int64)v3; /*0x1003300c9*/
  v8 = 0x100002600LL; /*0x1003300cc*/
  while ( 1 ) /*0x1003300d6*/
  {
    v9 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x1003300d6*/
    if ( v9 > 0x22 ) /*0x1003300df*/
      goto LABEL_11; /*0x1003300df*/
    if ( !_bittest64(&v8, v9) ) /*0x1003300e1*/
      break; /*0x1003300e1*/
    *(_QWORD *)(a2 + 40) = v6; /*0x1003300e7*/
    v10 = v7 + v6++ + 1; /*0x1003300eb*/
    if ( v10 == 1 ) /*0x1003300f7*/
      goto LABEL_6; /*0x1003300f7*/
  }
  if ( v9 == 34 ) /*0x10033011d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hfdfb071d499cde00( /*0x100330126*/
      &v30,
      a2,
      v5,
      v7);
    if ( (_BYTE)v30 == 1 ) /*0x10033012f*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x100330135*/
      *(_BYTE *)a1 = 1; /*0x10033013b*/
      return a1; /*0x10033013d*/
    }
    if ( BYTE1(v30) ) /*0x100330178*/
      *(_BYTE *)(a1 + 1) = 1; /*0x10033017e*/
    else
      *(_BYTE *)(a1 + 1) = 0; /*0x100330208*/
    goto LABEL_37; /*0x100330182*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x100330145*/
  {
    v30 = 10; /*0x100330289*/
    goto LABEL_7; /*0x100330291*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033014b*/
  {
    v30 = 24; /*0x100330296*/
    goto LABEL_7; /*0x10033029e*/
  }
  *(_QWORD *)(a2 + 40) = v6; /*0x100330155*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hfdfb071d499cde00( /*0x100330160*/
    &v30,
    a2,
    v5,
    v7);
  if ( (_BYTE)v30 == 1 ) /*0x100330169*/
  {
    v12 = v31; /*0x10033016b*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v12; /*0x1003301fb*/
    *(_BYTE *)a1 = 1; /*0x1003301ff*/
    ++*(_BYTE *)(a2 + 72); /*0x100330202*/
    return a1; /*0x100330206*/
  }
  v13 = *(_QWORD *)(a2 + 32); /*0x100330187*/
  v14 = *(_QWORD *)(a2 + 40); /*0x10033018b*/
  if ( v14 >= v13 ) /*0x100330192*/
  {
LABEL_22:
    v30 = 3; /*0x1003301ca*/
LABEL_23:
    v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x1003301d2*/
    goto LABEL_26; /*0x1003301de*/
  }
  v15 = BYTE1(v30); /*0x100330194*/
  v16 = *(_QWORD *)(a2 + 24); /*0x100330199*/
  v17 = v14 + 1; /*0x10033019d*/
  v18 = -(__int64)v13; /*0x1003301a0*/
  while ( 1 ) /*0x1003301a3*/
  {
    v19 = *(unsigned __int8 *)(v16 + v17 - 1); /*0x1003301a3*/
    if ( v19 > 0x3A ) /*0x1003301ac*/
      goto LABEL_42; /*0x1003301ac*/
    if ( !_bittest64(&v8, v19) ) /*0x1003301b2*/
      break; /*0x1003301b2*/
    *(_QWORD *)(a2 + 40) = v17; /*0x1003301b8*/
    v20 = v18 + v17++ + 1; /*0x1003301bc*/
    if ( v20 == 1 ) /*0x1003301c8*/
      goto LABEL_22; /*0x1003301c8*/
  }
  if ( v19 != 58 ) /*0x1003301e4*/
  {
LABEL_42:
    v30 = 6; /*0x1003302a3*/
    goto LABEL_23; /*0x1003302ab*/
  }
  *(_QWORD *)(a2 + 40) = v17; /*0x1003301ea*/
  v12 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x1003301f1*/
          a2,
          58,
          v16);
  if ( v12 ) /*0x1003301f9*/
    goto LABEL_26; /*0x1003301f9*/
  ++*(_BYTE *)(a2 + 72); /*0x10033020e*/
  *(_BYTE *)(a1 + 1) = v15; /*0x100330212*/
  v21 = *(_QWORD *)(a2 + 32); /*0x100330216*/
  v22 = *(_QWORD *)(a2 + 40); /*0x10033021a*/
  if ( v22 >= v21 ) /*0x100330221*/
  {
LABEL_33:
    v30 = 3; /*0x100330250*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v30); /*0x100330258*/
    v28 = 1; /*0x100330268*/
    goto LABEL_38; /*0x10033026a*/
  }
  v23 = *(_QWORD *)(a2 + 24); /*0x100330223*/
  v24 = v22 + 1; /*0x100330227*/
  v25 = -(__int64)v21; /*0x10033022a*/
  while ( 1 ) /*0x10033022d*/
  {
    v26 = *(unsigned __int8 *)(v23 + v24 - 1); /*0x10033022d*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x100330238*/
      break; /*0x100330238*/
    *(_QWORD *)(a2 + 40) = v24; /*0x10033023e*/
    v27 = v25 + v24++ + 1; /*0x100330242*/
    if ( v27 == 1 ) /*0x10033024e*/
      goto LABEL_33; /*0x10033024e*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x10033026f*/
  {
    v30 = 10; /*0x1003302b0*/
    goto LABEL_34; /*0x1003302b8*/
  }
  *(_QWORD *)(a2 + 40) = v24; /*0x100330271*/
LABEL_37:
  v28 = 0; /*0x100330275*/
LABEL_38:
  *(_BYTE *)a1 = v28; /*0x100330277*/
  return a1; /*0x10033027c*/
}