// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceProcessingMode$GT$11deserialize @ 0x10033e400 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceProcessingMode$GT$::deserialize::h7218b947bf5a1184(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x10033e415*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10033e419*/
  if ( v5 >= v4 ) /*0x10033e420*/
  {
LABEL_6:
    v32 = 5; /*0x10033e459*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033e461*/
    *(_BYTE *)a1 = 1; /*0x10033e471*/
    return a1; /*0x10033e474*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10033e422*/
  v7 = v5 + 1; /*0x10033e426*/
  v8 = -(__int64)v4; /*0x10033e429*/
  v9 = 0x100002600LL; /*0x10033e42c*/
  while ( 1 ) /*0x10033e436*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10033e436*/
    if ( v10 > 0x22 ) /*0x10033e43f*/
      goto LABEL_11; /*0x10033e43f*/
    if ( !_bittest64(&v9, v10) ) /*0x10033e441*/
      break; /*0x10033e441*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10033e447*/
    v11 = v8 + v7++ + 1; /*0x10033e44b*/
    if ( v11 == 1 ) /*0x10033e457*/
      goto LABEL_6; /*0x10033e457*/
  }
  if ( v10 == 34 ) /*0x10033e47d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h866051da75e8f3cf( /*0x10033e486*/
      &v32,
      a2,
      v6,
      v8);
    if ( (_BYTE)v32 == 1 ) /*0x10033e48f*/
    {
      *(_QWORD *)(a1 + 8) = v33; /*0x10033e495*/
      *(_BYTE *)a1 = 1; /*0x10033e49b*/
      return a1; /*0x10033e49d*/
    }
    switch ( BYTE1(v32) ) /*0x10033e4e8*/
    {
      case 0: /*0x10033e4e8*/
        *(_BYTE *)(a1 + 1) = 0; /*0x10033e4ea*/
        break; /*0x10033e4ee*/
      case 1: /*0x10033e4e8*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10033e5ff*/
        break; /*0x10033e5ff*/
      case 2: /*0x10033e4e8*/
        *(_BYTE *)(a1 + 1) = 2; /*0x10033e5f3*/
        break; /*0x10033e5f7*/
      case 3: /*0x10033e4e8*/
        *(_BYTE *)(a1 + 1) = 3; /*0x10033e5f9*/
        break; /*0x10033e5fd*/
    }
    goto LABEL_40; /*0x10033e5fd*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10033e4a5*/
  {
    v32 = 10; /*0x10033e617*/
    goto LABEL_7; /*0x10033e61f*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033e4ab*/
  {
    v32 = 24; /*0x10033e624*/
    goto LABEL_7; /*0x10033e62c*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10033e4b5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h866051da75e8f3cf( /*0x10033e4c0*/
    &v32,
    a2,
    v6,
    v8);
  if ( (_BYTE)v32 == 1 ) /*0x10033e4c9*/
  {
    v13 = v33; /*0x10033e4cb*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10033e57d*/
    *(_BYTE *)a1 = 1; /*0x10033e581*/
    ++*(_BYTE *)(a2 + 72); /*0x10033e584*/
    return a1; /*0x10033e588*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10033e4f3*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10033e4f7*/
  if ( v15 >= v14 ) /*0x10033e4fe*/
  {
LABEL_22:
    v32 = 3; /*0x10033e53a*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033e542*/
    goto LABEL_27; /*0x10033e54e*/
  }
  v16 = BYTE1(v32); /*0x10033e500*/
  v17 = BYTE1(v32); /*0x10033e505*/
  v18 = *(_QWORD *)(a2 + 24); /*0x10033e509*/
  v19 = v15 + 1; /*0x10033e50d*/
  v20 = -(__int64)v14; /*0x10033e510*/
  while ( 1 ) /*0x10033e513*/
  {
    v21 = *(unsigned __int8 *)(v18 + v19 - 1); /*0x10033e513*/
    if ( v21 > 0x3A ) /*0x10033e51c*/
      goto LABEL_45; /*0x10033e51c*/
    if ( !_bittest64(&v9, v21) ) /*0x10033e522*/
      break; /*0x10033e522*/
    *(_QWORD *)(a2 + 40) = v19; /*0x10033e528*/
    v22 = v20 + v19++ + 1; /*0x10033e52c*/
    if ( v22 == 1 ) /*0x10033e538*/
      goto LABEL_22; /*0x10033e538*/
  }
  if ( v21 != 58 ) /*0x10033e554*/
  {
LABEL_45:
    v32 = 6; /*0x10033e631*/
    goto LABEL_23; /*0x10033e639*/
  }
  *(_QWORD *)(a2 + 40) = v19; /*0x10033e55a*/
  switch ( (int)v17 ) /*0x10033e56e*/
  {
    case 0: /*0x10033e56e*/
    case 1: /*0x10033e56e*/
    case 2: /*0x10033e56e*/
    case 3: /*0x10033e56e*/
      v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033e573*/
              a2,
              v18,
              v17);
      if ( v13 ) /*0x10033e57b*/
        goto LABEL_27; /*0x10033e57b*/
      ++*(_BYTE *)(a2 + 72); /*0x10033e58a*/
      *(_BYTE *)(a1 + 1) = v16; /*0x10033e58e*/
      v23 = *(_QWORD *)(a2 + 32); /*0x10033e592*/
      v24 = *(_QWORD *)(a2 + 40); /*0x10033e596*/
      if ( v24 >= v23 ) /*0x10033e59d*/
        goto LABEL_33; /*0x10033e59d*/
      v25 = *(_QWORD *)(a2 + 24); /*0x10033e59f*/
      v26 = v24 + 1; /*0x10033e5a3*/
      v27 = -(__int64)v23; /*0x10033e5a6*/
      break; /*0x10033e5a6*/
    case 4: /*0x10033e56e*/
      JUMPOUT(0x100B80567LL); /*0x100b80567*/
    case 5: /*0x10033e56e*/
      JUMPOUT(0x10033E658LL); /*0x10033e658*/
  }
  while ( 1 ) /*0x10033e5a9*/
  {
    v28 = *(unsigned __int8 *)(v25 + v26 - 1); /*0x10033e5a9*/
    if ( v28 > 0x20 || !_bittest64(&v9, v28) ) /*0x10033e5b4*/
      break; /*0x10033e5b4*/
    *(_QWORD *)(a2 + 40) = v26; /*0x10033e5ba*/
    v29 = v27 + v26++ + 1; /*0x10033e5be*/
    if ( v29 == 1 ) /*0x10033e5ca*/
    {
LABEL_33:
      v32 = 3; /*0x10033e5cc*/
LABEL_34:
      *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v32); /*0x10033e5d4*/
      v30 = 1; /*0x10033e5e4*/
      goto LABEL_41; /*0x10033e5e6*/
    }
  }
  if ( (_DWORD)v28 != 125 ) /*0x10033e5eb*/
  {
    v32 = 10; /*0x10033e63e*/
    goto LABEL_34; /*0x10033e646*/
  }
  *(_QWORD *)(a2 + 40) = v26; /*0x10033e5ed*/
LABEL_40:
  v30 = 0; /*0x10033e603*/
LABEL_41:
  *(_BYTE *)a1 = v30; /*0x10033e605*/
  return a1; /*0x10033e60a*/
}