// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyKind$GT$11deserialize @ 0x10033e670 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyKind$GT$::deserialize::h39d38bbe30872b3a(
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

  v3 = *(_QWORD *)(a2 + 32); /*0x10033e685*/
  v4 = *(_QWORD *)(a2 + 40); /*0x10033e689*/
  if ( v4 >= v3 ) /*0x10033e690*/
  {
LABEL_6:
    v30 = 5; /*0x10033e6c9*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x10033e6d1*/
    *(_BYTE *)a1 = 1; /*0x10033e6e1*/
    return a1; /*0x10033e6e4*/
  }
  v5 = *(_QWORD *)(a2 + 24); /*0x10033e692*/
  v6 = v4 + 1; /*0x10033e696*/
  v7 = -(__int64)v3; /*0x10033e699*/
  v8 = 0x100002600LL; /*0x10033e69c*/
  while ( 1 ) /*0x10033e6a6*/
  {
    v9 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x10033e6a6*/
    if ( v9 > 0x22 ) /*0x10033e6af*/
      goto LABEL_11; /*0x10033e6af*/
    if ( !_bittest64(&v8, v9) ) /*0x10033e6b1*/
      break; /*0x10033e6b1*/
    *(_QWORD *)(a2 + 40) = v6; /*0x10033e6b7*/
    v10 = v7 + v6++ + 1; /*0x10033e6bb*/
    if ( v10 == 1 ) /*0x10033e6c7*/
      goto LABEL_6; /*0x10033e6c7*/
  }
  if ( v9 == 34 ) /*0x10033e6ed*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7a68b12faaa10ff2( /*0x10033e6f6*/
      &v30,
      a2,
      v5,
      v7);
    if ( (_BYTE)v30 == 1 ) /*0x10033e6ff*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x10033e705*/
      *(_BYTE *)a1 = 1; /*0x10033e70b*/
      return a1; /*0x10033e70d*/
    }
    if ( BYTE1(v30) ) /*0x10033e748*/
      *(_BYTE *)(a1 + 1) = 1; /*0x10033e74e*/
    else
      *(_BYTE *)(a1 + 1) = 0; /*0x10033e7d8*/
    goto LABEL_37; /*0x10033e752*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x10033e715*/
  {
    v30 = 10; /*0x10033e859*/
    goto LABEL_7; /*0x10033e861*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033e71b*/
  {
    v30 = 24; /*0x10033e866*/
    goto LABEL_7; /*0x10033e86e*/
  }
  *(_QWORD *)(a2 + 40) = v6; /*0x10033e725*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7a68b12faaa10ff2( /*0x10033e730*/
    &v30,
    a2,
    v5,
    v7);
  if ( (_BYTE)v30 == 1 ) /*0x10033e739*/
  {
    v12 = v31; /*0x10033e73b*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v12; /*0x10033e7cb*/
    *(_BYTE *)a1 = 1; /*0x10033e7cf*/
    ++*(_BYTE *)(a2 + 72); /*0x10033e7d2*/
    return a1; /*0x10033e7d6*/
  }
  v13 = *(_QWORD *)(a2 + 32); /*0x10033e757*/
  v14 = *(_QWORD *)(a2 + 40); /*0x10033e75b*/
  if ( v14 >= v13 ) /*0x10033e762*/
  {
LABEL_22:
    v30 = 3; /*0x10033e79a*/
LABEL_23:
    v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x10033e7a2*/
    goto LABEL_26; /*0x10033e7ae*/
  }
  v15 = BYTE1(v30); /*0x10033e764*/
  v16 = *(_QWORD *)(a2 + 24); /*0x10033e769*/
  v17 = v14 + 1; /*0x10033e76d*/
  v18 = -(__int64)v13; /*0x10033e770*/
  while ( 1 ) /*0x10033e773*/
  {
    v19 = *(unsigned __int8 *)(v16 + v17 - 1); /*0x10033e773*/
    if ( v19 > 0x3A ) /*0x10033e77c*/
      goto LABEL_42; /*0x10033e77c*/
    if ( !_bittest64(&v8, v19) ) /*0x10033e782*/
      break; /*0x10033e782*/
    *(_QWORD *)(a2 + 40) = v17; /*0x10033e788*/
    v20 = v18 + v17++ + 1; /*0x10033e78c*/
    if ( v20 == 1 ) /*0x10033e798*/
      goto LABEL_22; /*0x10033e798*/
  }
  if ( v19 != 58 ) /*0x10033e7b4*/
  {
LABEL_42:
    v30 = 6; /*0x10033e873*/
    goto LABEL_23; /*0x10033e87b*/
  }
  *(_QWORD *)(a2 + 40) = v17; /*0x10033e7ba*/
  v12 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033e7c1*/
          a2,
          58,
          v16);
  if ( v12 ) /*0x10033e7c9*/
    goto LABEL_26; /*0x10033e7c9*/
  ++*(_BYTE *)(a2 + 72); /*0x10033e7de*/
  *(_BYTE *)(a1 + 1) = v15; /*0x10033e7e2*/
  v21 = *(_QWORD *)(a2 + 32); /*0x10033e7e6*/
  v22 = *(_QWORD *)(a2 + 40); /*0x10033e7ea*/
  if ( v22 >= v21 ) /*0x10033e7f1*/
  {
LABEL_33:
    v30 = 3; /*0x10033e820*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v30); /*0x10033e828*/
    v28 = 1; /*0x10033e838*/
    goto LABEL_38; /*0x10033e83a*/
  }
  v23 = *(_QWORD *)(a2 + 24); /*0x10033e7f3*/
  v24 = v22 + 1; /*0x10033e7f7*/
  v25 = -(__int64)v21; /*0x10033e7fa*/
  while ( 1 ) /*0x10033e7fd*/
  {
    v26 = *(unsigned __int8 *)(v23 + v24 - 1); /*0x10033e7fd*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x10033e808*/
      break; /*0x10033e808*/
    *(_QWORD *)(a2 + 40) = v24; /*0x10033e80e*/
    v27 = v25 + v24++ + 1; /*0x10033e812*/
    if ( v27 == 1 ) /*0x10033e81e*/
      goto LABEL_33; /*0x10033e81e*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x10033e83f*/
  {
    v30 = 10; /*0x10033e880*/
    goto LABEL_34; /*0x10033e888*/
  }
  *(_QWORD *)(a2 + 40) = v24; /*0x10033e841*/
LABEL_37:
  v28 = 0; /*0x10033e845*/
LABEL_38:
  *(_BYTE *)a1 = v28; /*0x10033e847*/
  return a1; /*0x10033e84c*/
}