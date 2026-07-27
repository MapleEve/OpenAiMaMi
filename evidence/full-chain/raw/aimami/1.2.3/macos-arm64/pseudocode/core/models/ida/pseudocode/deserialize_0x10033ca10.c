// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceOverlayStyle$GT$11deserialize @ 0x10033ca10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceOverlayStyle$GT$::deserialize::hbdc7a272b1b75058(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x10033ca25*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10033ca29*/
  if ( v5 >= v4 ) /*0x10033ca30*/
  {
LABEL_6:
    v32 = 5; /*0x10033ca69*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033ca71*/
    *(_BYTE *)a1 = 1; /*0x10033ca81*/
    return a1; /*0x10033ca84*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10033ca32*/
  v7 = v5 + 1; /*0x10033ca36*/
  v8 = -(__int64)v4; /*0x10033ca39*/
  v9 = 0x100002600LL; /*0x10033ca3c*/
  while ( 1 ) /*0x10033ca46*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10033ca46*/
    if ( v10 > 0x22 ) /*0x10033ca4f*/
      goto LABEL_11; /*0x10033ca4f*/
    if ( !_bittest64(&v9, v10) ) /*0x10033ca51*/
      break; /*0x10033ca51*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10033ca57*/
    v11 = v8 + v7++ + 1; /*0x10033ca5b*/
    if ( v11 == 1 ) /*0x10033ca67*/
      goto LABEL_6; /*0x10033ca67*/
  }
  if ( v10 == 34 ) /*0x10033ca8d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8a603bc5809f3768( /*0x10033ca96*/
      &v32,
      a2,
      v6,
      v8);
    if ( (_BYTE)v32 == 1 ) /*0x10033ca9f*/
    {
      *(_QWORD *)(a1 + 8) = v33; /*0x10033caa5*/
      *(_BYTE *)a1 = 1; /*0x10033caab*/
      return a1; /*0x10033caad*/
    }
    switch ( BYTE1(v32) ) /*0x10033caf8*/
    {
      case 0: /*0x10033caf8*/
        *(_BYTE *)(a1 + 1) = 0; /*0x10033cafa*/
        break; /*0x10033cafe*/
      case 1: /*0x10033caf8*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10033cc0f*/
        break; /*0x10033cc0f*/
      case 2: /*0x10033caf8*/
        *(_BYTE *)(a1 + 1) = 2; /*0x10033cc03*/
        break; /*0x10033cc07*/
      case 3: /*0x10033caf8*/
        *(_BYTE *)(a1 + 1) = 3; /*0x10033cc09*/
        break; /*0x10033cc0d*/
    }
    goto LABEL_40; /*0x10033cc0d*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10033cab5*/
  {
    v32 = 10; /*0x10033cc27*/
    goto LABEL_7; /*0x10033cc2f*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033cabb*/
  {
    v32 = 24; /*0x10033cc34*/
    goto LABEL_7; /*0x10033cc3c*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10033cac5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8a603bc5809f3768( /*0x10033cad0*/
    &v32,
    a2,
    v6,
    v8);
  if ( (_BYTE)v32 == 1 ) /*0x10033cad9*/
  {
    v13 = v33; /*0x10033cadb*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10033cb8d*/
    *(_BYTE *)a1 = 1; /*0x10033cb91*/
    ++*(_BYTE *)(a2 + 72); /*0x10033cb94*/
    return a1; /*0x10033cb98*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10033cb03*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10033cb07*/
  if ( v15 >= v14 ) /*0x10033cb0e*/
  {
LABEL_22:
    v32 = 3; /*0x10033cb4a*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033cb52*/
    goto LABEL_27; /*0x10033cb5e*/
  }
  v16 = BYTE1(v32); /*0x10033cb10*/
  v17 = BYTE1(v32); /*0x10033cb15*/
  v18 = *(_QWORD *)(a2 + 24); /*0x10033cb19*/
  v19 = v15 + 1; /*0x10033cb1d*/
  v20 = -(__int64)v14; /*0x10033cb20*/
  while ( 1 ) /*0x10033cb23*/
  {
    v21 = *(unsigned __int8 *)(v18 + v19 - 1); /*0x10033cb23*/
    if ( v21 > 0x3A ) /*0x10033cb2c*/
      goto LABEL_45; /*0x10033cb2c*/
    if ( !_bittest64(&v9, v21) ) /*0x10033cb32*/
      break; /*0x10033cb32*/
    *(_QWORD *)(a2 + 40) = v19; /*0x10033cb38*/
    v22 = v20 + v19++ + 1; /*0x10033cb3c*/
    if ( v22 == 1 ) /*0x10033cb48*/
      goto LABEL_22; /*0x10033cb48*/
  }
  if ( v21 != 58 ) /*0x10033cb64*/
  {
LABEL_45:
    v32 = 6; /*0x10033cc41*/
    goto LABEL_23; /*0x10033cc49*/
  }
  *(_QWORD *)(a2 + 40) = v19; /*0x10033cb6a*/
  switch ( (int)v17 ) /*0x10033cb7e*/
  {
    case 0: /*0x10033cb7e*/
    case 1: /*0x10033cb7e*/
    case 2: /*0x10033cb7e*/
    case 3: /*0x10033cb7e*/
      v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033cb83*/
              a2,
              v18,
              v17);
      if ( v13 ) /*0x10033cb8b*/
        goto LABEL_27; /*0x10033cb8b*/
      ++*(_BYTE *)(a2 + 72); /*0x10033cb9a*/
      *(_BYTE *)(a1 + 1) = v16; /*0x10033cb9e*/
      v23 = *(_QWORD *)(a2 + 32); /*0x10033cba2*/
      v24 = *(_QWORD *)(a2 + 40); /*0x10033cba6*/
      if ( v24 >= v23 ) /*0x10033cbad*/
        goto LABEL_33; /*0x10033cbad*/
      v25 = *(_QWORD *)(a2 + 24); /*0x10033cbaf*/
      v26 = v24 + 1; /*0x10033cbb3*/
      v27 = -(__int64)v23; /*0x10033cbb6*/
      break; /*0x10033cbb6*/
    case 4: /*0x10033cb7e*/
      JUMPOUT(0x100B7EB77LL); /*0x100b7eb77*/
    case 5: /*0x10033cb7e*/
      JUMPOUT(0x10033CC68LL); /*0x10033cc68*/
  }
  while ( 1 ) /*0x10033cbb9*/
  {
    v28 = *(unsigned __int8 *)(v25 + v26 - 1); /*0x10033cbb9*/
    if ( v28 > 0x20 || !_bittest64(&v9, v28) ) /*0x10033cbc4*/
      break; /*0x10033cbc4*/
    *(_QWORD *)(a2 + 40) = v26; /*0x10033cbca*/
    v29 = v27 + v26++ + 1; /*0x10033cbce*/
    if ( v29 == 1 ) /*0x10033cbda*/
    {
LABEL_33:
      v32 = 3; /*0x10033cbdc*/
LABEL_34:
      *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v32); /*0x10033cbe4*/
      v30 = 1; /*0x10033cbf4*/
      goto LABEL_41; /*0x10033cbf6*/
    }
  }
  if ( (_DWORD)v28 != 125 ) /*0x10033cbfb*/
  {
    v32 = 10; /*0x10033cc4e*/
    goto LABEL_34; /*0x10033cc56*/
  }
  *(_QWORD *)(a2 + 40) = v26; /*0x10033cbfd*/
LABEL_40:
  v30 = 0; /*0x10033cc13*/
LABEL_41:
  *(_BYTE *)a1 = v30; /*0x10033cc15*/
  return a1; /*0x10033cc1a*/
}