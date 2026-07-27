// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanStateSource$GT$11deserialize @ 0x10033ae40
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanStateSource$GT$::deserialize::h7802789babb77f96(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  char v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // rsi
  char v29; // al
  __int64 v31; // [rsp+8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+10h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 32); /*0x10033ae55*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10033ae59*/
  if ( v5 >= v4 ) /*0x10033ae60*/
  {
LABEL_6:
    v31 = 5; /*0x10033ae99*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(a2, &v31); /*0x10033aea1*/
    *(_BYTE *)a1 = 1; /*0x10033aeb1*/
    return a1; /*0x10033aeb4*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10033ae62*/
  v7 = v5 + 1; /*0x10033ae66*/
  v8 = -(__int64)v4; /*0x10033ae69*/
  v9 = 0x100002600LL; /*0x10033ae6c*/
  while ( 1 ) /*0x10033ae76*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10033ae76*/
    if ( v10 > 0x22 ) /*0x10033ae7f*/
      goto LABEL_11; /*0x10033ae7f*/
    if ( !_bittest64(&v9, v10) ) /*0x10033ae81*/
      break; /*0x10033ae81*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10033ae87*/
    v11 = v8 + v7++ + 1; /*0x10033ae8b*/
    if ( v11 == 1 ) /*0x10033ae97*/
      goto LABEL_6; /*0x10033ae97*/
  }
  if ( v10 == 34 ) /*0x10033aebd*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5313360da446f94c( /*0x10033aec6*/
      &v31,
      a2,
      v6,
      v8);
    if ( (_BYTE)v31 == 1 ) /*0x10033aecf*/
    {
      *(_QWORD *)(a1 + 8) = v32; /*0x10033aed5*/
      *(_BYTE *)a1 = 1; /*0x10033aedb*/
      return a1; /*0x10033aedd*/
    }
    if ( BYTE1(v31) ) /*0x10033af1a*/
    {
      if ( BYTE1(v31) == 1 ) /*0x10033af23*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10033af29*/
      else
        *(_BYTE *)(a1 + 1) = 2; /*0x10033b023*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0; /*0x10033b01d*/
    }
    goto LABEL_39; /*0x10033af2d*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10033aee5*/
  {
    v31 = 10; /*0x10033b046*/
    goto LABEL_7; /*0x10033b04e*/
  }
  if ( (*(_BYTE *)(a2 + 56))-- == 1 ) /*0x10033aeeb*/
  {
    v31 = 24; /*0x10033b053*/
    goto LABEL_7; /*0x10033b05b*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10033aef5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5313360da446f94c( /*0x10033af00*/
    &v31,
    a2,
    v6,
    v8);
  if ( (_BYTE)v31 == 1 ) /*0x10033af09*/
  {
    v13 = v32; /*0x10033af0b*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10033afb2*/
    *(_BYTE *)a1 = 1; /*0x10033afb6*/
    ++*(_BYTE *)(a2 + 56); /*0x10033afb9*/
    return a1; /*0x10033afbd*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10033af32*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10033af36*/
  if ( v15 >= v14 ) /*0x10033af3d*/
  {
LABEL_23:
    v31 = 3; /*0x10033af79*/
LABEL_24:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(a2, &v31); /*0x10033af81*/
    goto LABEL_27; /*0x10033af8d*/
  }
  v16 = BYTE1(v31); /*0x10033af3f*/
  v17 = *(_QWORD *)(a2 + 24); /*0x10033af48*/
  v18 = v15 + 1; /*0x10033af4c*/
  v19 = -(__int64)v14; /*0x10033af4f*/
  while ( 1 ) /*0x10033af52*/
  {
    v20 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x10033af52*/
    if ( v20 > 0x3A ) /*0x10033af5b*/
      goto LABEL_44; /*0x10033af5b*/
    if ( !_bittest64(&v9, v20) ) /*0x10033af61*/
      break; /*0x10033af61*/
    *(_QWORD *)(a2 + 40) = v18; /*0x10033af67*/
    v21 = v19 + v18++ + 1; /*0x10033af6b*/
    if ( v21 == 1 ) /*0x10033af77*/
      goto LABEL_23; /*0x10033af77*/
  }
  if ( v20 != 58 ) /*0x10033af93*/
  {
LABEL_44:
    v31 = 6; /*0x10033b060*/
    goto LABEL_24; /*0x10033b068*/
  }
  *(_QWORD *)(a2 + 40) = v18; /*0x10033af99*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h45aa6fa5cbb47703( /*0x10033afa8*/
          a2,
          v17,
          v19);
  if ( v13 ) /*0x10033afb0*/
    goto LABEL_27; /*0x10033afb0*/
  ++*(_BYTE *)(a2 + 56); /*0x10033afbf*/
  *(_BYTE *)(a1 + 1) = v16; /*0x10033afc3*/
  v22 = *(_QWORD *)(a2 + 32); /*0x10033afc7*/
  v23 = *(_QWORD *)(a2 + 40); /*0x10033afcb*/
  if ( v23 >= v22 ) /*0x10033afd2*/
  {
LABEL_33:
    v31 = 3; /*0x10033b001*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbeb452b81b5c60fd(a2, &v31); /*0x10033b009*/
    v29 = 1; /*0x10033b019*/
    goto LABEL_40; /*0x10033b01b*/
  }
  v24 = *(_QWORD *)(a2 + 24); /*0x10033afd4*/
  v25 = v23 + 1; /*0x10033afd8*/
  v26 = -(__int64)v22; /*0x10033afdb*/
  while ( 1 ) /*0x10033afde*/
  {
    v27 = *(unsigned __int8 *)(v24 + v25 - 1); /*0x10033afde*/
    if ( v27 > 0x20 || !_bittest64(&v9, v27) ) /*0x10033afe9*/
      break; /*0x10033afe9*/
    *(_QWORD *)(a2 + 40) = v25; /*0x10033afef*/
    v28 = v26 + v25++ + 1; /*0x10033aff3*/
    if ( v28 == 1 ) /*0x10033afff*/
      goto LABEL_33; /*0x10033afff*/
  }
  if ( (_DWORD)v27 != 125 ) /*0x10033b02c*/
  {
    v31 = 10; /*0x10033b06d*/
    goto LABEL_34; /*0x10033b075*/
  }
  *(_QWORD *)(a2 + 40) = v25; /*0x10033b02e*/
LABEL_39:
  v29 = 0; /*0x10033b032*/
LABEL_40:
  *(_BYTE *)a1 = v29; /*0x10033b034*/
  return a1; /*0x10033b039*/
}