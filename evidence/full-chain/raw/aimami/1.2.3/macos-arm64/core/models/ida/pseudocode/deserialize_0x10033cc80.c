// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$11deserialize @ 0x10033cc80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$::deserialize::h21a36269c54b8772(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x10033cc95*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10033cc99*/
  if ( v5 >= v4 ) /*0x10033cca0*/
  {
LABEL_6:
    v32 = 5; /*0x10033ccd9*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033cce1*/
    *(_BYTE *)a1 = 1; /*0x10033ccf1*/
    return a1; /*0x10033ccf4*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10033cca2*/
  v7 = v5 + 1; /*0x10033cca6*/
  v8 = -(__int64)v4; /*0x10033cca9*/
  v9 = 0x100002600LL; /*0x10033ccac*/
  while ( 1 ) /*0x10033ccb6*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10033ccb6*/
    if ( v10 > 0x22 ) /*0x10033ccbf*/
      goto LABEL_11; /*0x10033ccbf*/
    if ( !_bittest64(&v9, v10) ) /*0x10033ccc1*/
      break; /*0x10033ccc1*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10033ccc7*/
    v11 = v8 + v7++ + 1; /*0x10033cccb*/
    if ( v11 == 1 ) /*0x10033ccd7*/
      goto LABEL_6; /*0x10033ccd7*/
  }
  if ( v10 == 34 ) /*0x10033ccfd*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hee3057f3849a427d( /*0x10033cd06*/
      &v32,
      a2,
      v6,
      v8);
    if ( (_BYTE)v32 == 1 ) /*0x10033cd0f*/
    {
      *(_QWORD *)(a1 + 8) = v33; /*0x10033cd15*/
      *(_BYTE *)a1 = 1; /*0x10033cd1b*/
      return a1; /*0x10033cd1d*/
    }
    switch ( BYTE1(v32) ) /*0x10033cd68*/
    {
      case 0: /*0x10033cd68*/
        *(_BYTE *)(a1 + 1) = 0; /*0x10033cd6a*/
        break; /*0x10033cd6e*/
      case 1: /*0x10033cd68*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10033ce88*/
        break; /*0x10033ce8c*/
      case 2: /*0x10033cd68*/
        *(_BYTE *)(a1 + 1) = 2; /*0x10033ce7c*/
        break; /*0x10033ce80*/
      case 3: /*0x10033cd68*/
        *(_BYTE *)(a1 + 1) = 3; /*0x10033ce82*/
        break; /*0x10033ce86*/
      case 4: /*0x10033cd68*/
        *(_BYTE *)(a1 + 1) = 4; /*0x10033ce76*/
        break; /*0x10033ce7a*/
      case 5: /*0x10033cd68*/
        *(_BYTE *)(a1 + 1) = 5; /*0x10033ce8e*/
        break; /*0x10033ce8e*/
    }
    goto LABEL_42; /*0x10033ce8e*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10033cd25*/
  {
    v32 = 10; /*0x10033cea6*/
    goto LABEL_7; /*0x10033ceae*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033cd2b*/
  {
    v32 = 24; /*0x10033ceb3*/
    goto LABEL_7; /*0x10033cebb*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10033cd35*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hee3057f3849a427d( /*0x10033cd40*/
    &v32,
    a2,
    v6,
    v8);
  if ( (_BYTE)v32 == 1 ) /*0x10033cd49*/
  {
    v13 = v33; /*0x10033cd4b*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10033cdfd*/
    *(_BYTE *)a1 = 1; /*0x10033ce01*/
    ++*(_BYTE *)(a2 + 72); /*0x10033ce04*/
    return a1; /*0x10033ce08*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10033cd73*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10033cd77*/
  if ( v15 >= v14 ) /*0x10033cd7e*/
  {
LABEL_22:
    v32 = 3; /*0x10033cdba*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033cdc2*/
    goto LABEL_27; /*0x10033cdce*/
  }
  v16 = BYTE1(v32); /*0x10033cd80*/
  v17 = BYTE1(v32); /*0x10033cd85*/
  v18 = *(_QWORD *)(a2 + 24); /*0x10033cd89*/
  v19 = v15 + 1; /*0x10033cd8d*/
  v20 = -(__int64)v14; /*0x10033cd90*/
  while ( 1 ) /*0x10033cd93*/
  {
    v21 = *(unsigned __int8 *)(v18 + v19 - 1); /*0x10033cd93*/
    if ( v21 > 0x3A ) /*0x10033cd9c*/
      goto LABEL_47; /*0x10033cd9c*/
    if ( !_bittest64(&v9, v21) ) /*0x10033cda2*/
      break; /*0x10033cda2*/
    *(_QWORD *)(a2 + 40) = v19; /*0x10033cda8*/
    v22 = v20 + v19++ + 1; /*0x10033cdac*/
    if ( v22 == 1 ) /*0x10033cdb8*/
      goto LABEL_22; /*0x10033cdb8*/
  }
  if ( v21 != 58 ) /*0x10033cdd4*/
  {
LABEL_47:
    v32 = 6; /*0x10033cec0*/
    goto LABEL_23; /*0x10033cec8*/
  }
  *(_QWORD *)(a2 + 40) = v19; /*0x10033cdda*/
  switch ( (int)v17 ) /*0x10033cdee*/
  {
    case 0: /*0x10033cdee*/
    case 1: /*0x10033cdee*/
    case 2: /*0x10033cdee*/
    case 3: /*0x10033cdee*/
    case 4: /*0x10033cdee*/
    case 5: /*0x10033cdee*/
      v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033cdf3*/
              a2,
              v18,
              v17);
      if ( v13 ) /*0x10033cdfb*/
        goto LABEL_27; /*0x10033cdfb*/
      ++*(_BYTE *)(a2 + 72); /*0x10033ce0d*/
      *(_BYTE *)(a1 + 1) = v16; /*0x10033ce11*/
      v23 = *(_QWORD *)(a2 + 32); /*0x10033ce15*/
      v24 = *(_QWORD *)(a2 + 40); /*0x10033ce19*/
      if ( v24 >= v23 ) /*0x10033ce20*/
        goto LABEL_33; /*0x10033ce20*/
      v25 = *(_QWORD *)(a2 + 24); /*0x10033ce22*/
      v26 = v24 + 1; /*0x10033ce26*/
      v27 = -(__int64)v23; /*0x10033ce29*/
      break; /*0x10033ce29*/
    case 6: /*0x10033cdee*/
      JUMPOUT(0x100B7EDFFLL); /*0x100b7edff*/
    case 7: /*0x10033cdee*/
      JUMPOUT(0x10033CEF0LL); /*0x10033cef0*/
  }
  while ( 1 ) /*0x10033ce2c*/
  {
    v28 = *(unsigned __int8 *)(v25 + v26 - 1); /*0x10033ce2c*/
    if ( v28 > 0x20 || !_bittest64(&v9, v28) ) /*0x10033ce37*/
      break; /*0x10033ce37*/
    *(_QWORD *)(a2 + 40) = v26; /*0x10033ce3d*/
    v29 = v27 + v26++ + 1; /*0x10033ce41*/
    if ( v29 == 1 ) /*0x10033ce4d*/
    {
LABEL_33:
      v32 = 3; /*0x10033ce4f*/
LABEL_34:
      *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v32); /*0x10033ce57*/
      v30 = 1; /*0x10033ce67*/
      goto LABEL_43; /*0x10033ce69*/
    }
  }
  if ( (_DWORD)v28 != 125 ) /*0x10033ce6e*/
  {
    v32 = 10; /*0x10033cecd*/
    goto LABEL_34; /*0x10033ced5*/
  }
  *(_QWORD *)(a2 + 40) = v26; /*0x10033ce70*/
LABEL_42:
  v30 = 0; /*0x10033ce92*/
LABEL_43:
  *(_BYTE *)a1 = v30; /*0x10033ce94*/
  return a1; /*0x10033ce99*/
}