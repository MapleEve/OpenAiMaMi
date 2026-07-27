// __ZN13codexmate_lib4core5relay6models1_104_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$11deserialize @ 0x10032de70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$::deserialize::hda738a3b90d5ae24(
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
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rsi
  char v30; // al
  __int64 v32; // [rsp+8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+10h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 32); /*0x10032de85*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10032de89*/
  if ( v5 >= v4 ) /*0x10032de90*/
  {
LABEL_6:
    v32 = 5; /*0x10032dec9*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10032ded1*/
    *(_BYTE *)a1 = 1; /*0x10032dee1*/
    return a1; /*0x10032dee4*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10032de92*/
  v7 = v5 + 1; /*0x10032de96*/
  v8 = -(__int64)v4; /*0x10032de99*/
  v9 = 0x100002600LL; /*0x10032de9c*/
  while ( 1 ) /*0x10032dea6*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10032dea6*/
    if ( v10 > 0x22 ) /*0x10032deaf*/
      goto LABEL_11; /*0x10032deaf*/
    if ( !_bittest64(&v9, v10) ) /*0x10032deb1*/
      break; /*0x10032deb1*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10032deb7*/
    v11 = v8 + v7++ + 1; /*0x10032debb*/
    if ( v11 == 1 ) /*0x10032dec7*/
      goto LABEL_6; /*0x10032dec7*/
  }
  if ( v10 == 34 ) /*0x10032deed*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7547de9bdba569e9( /*0x10032def6*/
      &v32,
      a2,
      v6,
      v8);
    if ( (_BYTE)v32 == 1 ) /*0x10032deff*/
    {
      *(_QWORD *)(a1 + 8) = v33; /*0x10032df05*/
      *(_BYTE *)a1 = 1; /*0x10032df0b*/
      return a1; /*0x10032df0d*/
    }
    switch ( BYTE1(v32) ) /*0x10032df58*/
    {
      case 0: /*0x10032df58*/
        *(_BYTE *)(a1 + 1) = 0; /*0x10032df5a*/
        break; /*0x10032df5e*/
      case 1: /*0x10032df58*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10032e078*/
        break; /*0x10032e07c*/
      case 2: /*0x10032df58*/
        *(_BYTE *)(a1 + 1) = 2; /*0x10032e06c*/
        break; /*0x10032e070*/
      case 3: /*0x10032df58*/
        *(_BYTE *)(a1 + 1) = 3; /*0x10032e072*/
        break; /*0x10032e076*/
      case 4: /*0x10032df58*/
        *(_BYTE *)(a1 + 1) = 4; /*0x10032e066*/
        break; /*0x10032e06a*/
      case 5: /*0x10032df58*/
        *(_BYTE *)(a1 + 1) = 5; /*0x10032e07e*/
        break; /*0x10032e082*/
      case 6: /*0x10032df58*/
        *(_BYTE *)(a1 + 1) = 6; /*0x10032e084*/
        break; /*0x10032e084*/
    }
    goto LABEL_42; /*0x10032e084*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10032df15*/
  {
    v32 = 10; /*0x10032e09c*/
    goto LABEL_7; /*0x10032e0a4*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10032df1b*/
  {
    v32 = 24; /*0x10032e0a9*/
    goto LABEL_7; /*0x10032e0b1*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10032df25*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7547de9bdba569e9( /*0x10032df30*/
    &v32,
    a2,
    v6,
    v8);
  if ( (_BYTE)v32 == 1 ) /*0x10032df39*/
  {
    v13 = v33; /*0x10032df3b*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v13; /*0x10032dfed*/
    *(_BYTE *)a1 = 1; /*0x10032dff1*/
    ++*(_BYTE *)(a2 + 72); /*0x10032dff4*/
    return a1; /*0x10032dff8*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10032df63*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10032df67*/
  if ( v15 >= v14 ) /*0x10032df6e*/
  {
LABEL_22:
    v32 = 3; /*0x10032dfaa*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10032dfb2*/
    goto LABEL_26; /*0x10032dfbe*/
  }
  v16 = BYTE1(v32); /*0x10032df70*/
  v17 = BYTE1(v32); /*0x10032df75*/
  v18 = *(_QWORD *)(a2 + 24); /*0x10032df79*/
  v19 = v15 + 1; /*0x10032df7d*/
  v20 = -(__int64)v14; /*0x10032df80*/
  while ( 1 ) /*0x10032df83*/
  {
    v21 = *(unsigned __int8 *)(v18 + v19 - 1); /*0x10032df83*/
    if ( v21 > 0x3A ) /*0x10032df8c*/
      goto LABEL_47; /*0x10032df8c*/
    if ( !_bittest64(&v9, v21) ) /*0x10032df92*/
      break; /*0x10032df92*/
    *(_QWORD *)(a2 + 40) = v19; /*0x10032df98*/
    v22 = v20 + v19++ + 1; /*0x10032df9c*/
    if ( v22 == 1 ) /*0x10032dfa8*/
      goto LABEL_22; /*0x10032dfa8*/
  }
  if ( v21 != 58 ) /*0x10032dfc4*/
  {
LABEL_47:
    v32 = 6; /*0x10032e0b6*/
    goto LABEL_23; /*0x10032e0be*/
  }
  *(_QWORD *)(a2 + 40) = v19; /*0x10032dfca*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10032dfe3*/
          a2,
          v18,
          v17);
  if ( v13 ) /*0x10032dfeb*/
    goto LABEL_26; /*0x10032dfeb*/
  ++*(_BYTE *)(a2 + 72); /*0x10032dffd*/
  *(_BYTE *)(a1 + 1) = v16; /*0x10032e001*/
  v23 = *(_QWORD *)(a2 + 32); /*0x10032e005*/
  v24 = *(_QWORD *)(a2 + 40); /*0x10032e009*/
  if ( v24 >= v23 ) /*0x10032e010*/
  {
LABEL_32:
    v32 = 3; /*0x10032e03f*/
LABEL_33:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v32); /*0x10032e047*/
    v30 = 1; /*0x10032e057*/
    goto LABEL_43; /*0x10032e059*/
  }
  v25 = *(_QWORD *)(a2 + 24); /*0x10032e012*/
  v26 = v24 + 1; /*0x10032e016*/
  v27 = -(__int64)v23; /*0x10032e019*/
  while ( 1 ) /*0x10032e01c*/
  {
    v28 = *(unsigned __int8 *)(v25 + v26 - 1); /*0x10032e01c*/
    if ( v28 > 0x20 || !_bittest64(&v9, v28) ) /*0x10032e027*/
      break; /*0x10032e027*/
    *(_QWORD *)(a2 + 40) = v26; /*0x10032e02d*/
    v29 = v27 + v26++ + 1; /*0x10032e031*/
    if ( v29 == 1 ) /*0x10032e03d*/
      goto LABEL_32; /*0x10032e03d*/
  }
  if ( (_DWORD)v28 != 125 ) /*0x10032e05e*/
  {
    v32 = 10; /*0x10032e0c3*/
    goto LABEL_33; /*0x10032e0cb*/
  }
  *(_QWORD *)(a2 + 40) = v26; /*0x10032e060*/
LABEL_42:
  v30 = 0; /*0x10032e088*/
LABEL_43:
  *(_BYTE *)a1 = v30; /*0x10032e08a*/
  return a1; /*0x10032e08f*/
}