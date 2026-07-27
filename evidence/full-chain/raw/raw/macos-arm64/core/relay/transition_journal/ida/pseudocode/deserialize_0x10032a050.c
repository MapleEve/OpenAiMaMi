// __ZN13codexmate_lib4core5relay18transition_journal1_122_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..transition_journal..TransitionTarget$GT$11deserialize @ 0x10032a050 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::transition_journal::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..transition_journal..TransitionTarget$GT$::deserialize::hde6171eb5416ebb0(
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

  v3 = *(_QWORD *)(a2 + 32); /*0x10032a065*/
  v4 = *(_QWORD *)(a2 + 40); /*0x10032a069*/
  if ( v4 >= v3 ) /*0x10032a070*/
  {
LABEL_6:
    v30 = 5; /*0x10032a0a9*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(a2, &v30); /*0x10032a0b1*/
    *(_BYTE *)a1 = 1; /*0x10032a0c1*/
    return a1; /*0x10032a0c4*/
  }
  v5 = *(_QWORD *)(a2 + 24); /*0x10032a072*/
  v6 = v4 + 1; /*0x10032a076*/
  v7 = -(__int64)v3; /*0x10032a079*/
  v8 = 0x100002600LL; /*0x10032a07c*/
  while ( 1 ) /*0x10032a086*/
  {
    v9 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x10032a086*/
    if ( v9 > 0x22 ) /*0x10032a08f*/
      goto LABEL_11; /*0x10032a08f*/
    if ( !_bittest64(&v8, v9) ) /*0x10032a091*/
      break; /*0x10032a091*/
    *(_QWORD *)(a2 + 40) = v6; /*0x10032a097*/
    v10 = v7 + v6++ + 1; /*0x10032a09b*/
    if ( v10 == 1 ) /*0x10032a0a7*/
      goto LABEL_6; /*0x10032a0a7*/
  }
  if ( v9 == 34 ) /*0x10032a0cd*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5e6c02c99bb2725d( /*0x10032a0d6*/
      &v30,
      a2,
      v5,
      v7);
    if ( (_BYTE)v30 == 1 ) /*0x10032a0df*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x10032a0e5*/
      *(_BYTE *)a1 = 1; /*0x10032a0eb*/
      return a1; /*0x10032a0ed*/
    }
    if ( BYTE1(v30) ) /*0x10032a128*/
      *(_BYTE *)(a1 + 1) = 1; /*0x10032a12e*/
    else
      *(_BYTE *)(a1 + 1) = 0; /*0x10032a1b8*/
    goto LABEL_37; /*0x10032a132*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x10032a0f5*/
  {
    v30 = 10; /*0x10032a239*/
    goto LABEL_7; /*0x10032a241*/
  }
  if ( (*(_BYTE *)(a2 + 56))-- == 1 ) /*0x10032a0fb*/
  {
    v30 = 24; /*0x10032a246*/
    goto LABEL_7; /*0x10032a24e*/
  }
  *(_QWORD *)(a2 + 40) = v6; /*0x10032a105*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5e6c02c99bb2725d( /*0x10032a110*/
    &v30,
    a2,
    v5,
    v7);
  if ( (_BYTE)v30 == 1 ) /*0x10032a119*/
  {
    v12 = v31; /*0x10032a11b*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v12; /*0x10032a1ab*/
    *(_BYTE *)a1 = 1; /*0x10032a1af*/
    ++*(_BYTE *)(a2 + 56); /*0x10032a1b2*/
    return a1; /*0x10032a1b6*/
  }
  v13 = *(_QWORD *)(a2 + 32); /*0x10032a137*/
  v14 = *(_QWORD *)(a2 + 40); /*0x10032a13b*/
  if ( v14 >= v13 ) /*0x10032a142*/
  {
LABEL_22:
    v30 = 3; /*0x10032a17a*/
LABEL_23:
    v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(a2, &v30); /*0x10032a182*/
    goto LABEL_26; /*0x10032a18e*/
  }
  v15 = BYTE1(v30); /*0x10032a144*/
  v16 = *(_QWORD *)(a2 + 24); /*0x10032a149*/
  v17 = v14 + 1; /*0x10032a14d*/
  v18 = -(__int64)v13; /*0x10032a150*/
  while ( 1 ) /*0x10032a153*/
  {
    v19 = *(unsigned __int8 *)(v16 + v17 - 1); /*0x10032a153*/
    if ( v19 > 0x3A ) /*0x10032a15c*/
      goto LABEL_42; /*0x10032a15c*/
    if ( !_bittest64(&v8, v19) ) /*0x10032a162*/
      break; /*0x10032a162*/
    *(_QWORD *)(a2 + 40) = v17; /*0x10032a168*/
    v20 = v18 + v17++ + 1; /*0x10032a16c*/
    if ( v20 == 1 ) /*0x10032a178*/
      goto LABEL_22; /*0x10032a178*/
  }
  if ( v19 != 58 ) /*0x10032a194*/
  {
LABEL_42:
    v30 = 6; /*0x10032a253*/
    goto LABEL_23; /*0x10032a25b*/
  }
  *(_QWORD *)(a2 + 40) = v17; /*0x10032a19a*/
  v12 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h45aa6fa5cbb47703( /*0x10032a1a1*/
          a2,
          58,
          v16);
  if ( v12 ) /*0x10032a1a9*/
    goto LABEL_26; /*0x10032a1a9*/
  ++*(_BYTE *)(a2 + 56); /*0x10032a1be*/
  *(_BYTE *)(a1 + 1) = v15; /*0x10032a1c2*/
  v21 = *(_QWORD *)(a2 + 32); /*0x10032a1c6*/
  v22 = *(_QWORD *)(a2 + 40); /*0x10032a1ca*/
  if ( v22 >= v21 ) /*0x10032a1d1*/
  {
LABEL_33:
    v30 = 3; /*0x10032a200*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbeb452b81b5c60fd(a2, &v30); /*0x10032a208*/
    v28 = 1; /*0x10032a218*/
    goto LABEL_38; /*0x10032a21a*/
  }
  v23 = *(_QWORD *)(a2 + 24); /*0x10032a1d3*/
  v24 = v22 + 1; /*0x10032a1d7*/
  v25 = -(__int64)v21; /*0x10032a1da*/
  while ( 1 ) /*0x10032a1dd*/
  {
    v26 = *(unsigned __int8 *)(v23 + v24 - 1); /*0x10032a1dd*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x10032a1e8*/
      break; /*0x10032a1e8*/
    *(_QWORD *)(a2 + 40) = v24; /*0x10032a1ee*/
    v27 = v25 + v24++ + 1; /*0x10032a1f2*/
    if ( v27 == 1 ) /*0x10032a1fe*/
      goto LABEL_33; /*0x10032a1fe*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x10032a21f*/
  {
    v30 = 10; /*0x10032a260*/
    goto LABEL_34; /*0x10032a268*/
  }
  *(_QWORD *)(a2 + 40) = v24; /*0x10032a221*/
LABEL_37:
  v28 = 0; /*0x10032a225*/
LABEL_38:
  *(_BYTE *)a1 = v28; /*0x10032a227*/
  return a1; /*0x10032a22c*/
}