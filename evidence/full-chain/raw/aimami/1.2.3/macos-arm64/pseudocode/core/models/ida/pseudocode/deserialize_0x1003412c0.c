// __ZN13codexmate_lib4core6models1_109_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$11deserialize @ 0x1003412c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$::deserialize::h15f7376a0870b25e(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x1003412d5*/
  v5 = *(_QWORD *)(a2 + 40); /*0x1003412d9*/
  if ( v5 >= v4 ) /*0x1003412e0*/
  {
LABEL_6:
    v32 = 5; /*0x100341319*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x100341321*/
    *(_BYTE *)a1 = 1; /*0x100341331*/
    return a1; /*0x100341334*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x1003412e2*/
  v7 = v5 + 1; /*0x1003412e6*/
  v8 = -(__int64)v4; /*0x1003412e9*/
  v9 = 0x100002600LL; /*0x1003412ec*/
  while ( 1 ) /*0x1003412f6*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x1003412f6*/
    if ( v10 > 0x22 ) /*0x1003412ff*/
      goto LABEL_11; /*0x1003412ff*/
    if ( !_bittest64(&v9, v10) ) /*0x100341301*/
      break; /*0x100341301*/
    *(_QWORD *)(a2 + 40) = v7; /*0x100341307*/
    v11 = v8 + v7++ + 1; /*0x10034130b*/
    if ( v11 == 1 ) /*0x100341317*/
      goto LABEL_6; /*0x100341317*/
  }
  if ( v10 == 34 ) /*0x10034133d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hf849c329aec79c35( /*0x100341346*/
      &v32,
      a2,
      v6,
      v8);
    if ( (_BYTE)v32 == 1 ) /*0x10034134f*/
    {
      *(_QWORD *)(a1 + 8) = v33; /*0x100341355*/
      *(_BYTE *)a1 = 1; /*0x10034135b*/
      return a1; /*0x10034135d*/
    }
    switch ( BYTE1(v32) ) /*0x1003413a8*/
    {
      case 0: /*0x1003413a8*/
        *(_BYTE *)(a1 + 1) = 0; /*0x1003413aa*/
        break; /*0x1003413ae*/
      case 1: /*0x1003413a8*/
        *(_BYTE *)(a1 + 1) = 1; /*0x1003414c8*/
        break; /*0x1003414c8*/
      case 2: /*0x1003413a8*/
        *(_BYTE *)(a1 + 1) = 2; /*0x1003414bc*/
        break; /*0x1003414c0*/
      case 3: /*0x1003413a8*/
        *(_BYTE *)(a1 + 1) = 3; /*0x1003414c2*/
        break; /*0x1003414c6*/
      case 4: /*0x1003413a8*/
        *(_BYTE *)(a1 + 1) = 4; /*0x1003414b6*/
        break; /*0x1003414ba*/
    }
    goto LABEL_41; /*0x1003414ba*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x100341365*/
  {
    v32 = 10; /*0x1003414e0*/
    goto LABEL_7; /*0x1003414e8*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10034136b*/
  {
    v32 = 24; /*0x1003414ed*/
    goto LABEL_7; /*0x1003414f5*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x100341375*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hf849c329aec79c35( /*0x100341380*/
    &v32,
    a2,
    v6,
    v8);
  if ( (_BYTE)v32 == 1 ) /*0x100341389*/
  {
    v13 = v33; /*0x10034138b*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10034143d*/
    *(_BYTE *)a1 = 1; /*0x100341441*/
    ++*(_BYTE *)(a2 + 72); /*0x100341444*/
    return a1; /*0x100341448*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x1003413b3*/
  v15 = *(_QWORD *)(a2 + 40); /*0x1003413b7*/
  if ( v15 >= v14 ) /*0x1003413be*/
  {
LABEL_22:
    v32 = 3; /*0x1003413fa*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x100341402*/
    goto LABEL_27; /*0x10034140e*/
  }
  v16 = BYTE1(v32); /*0x1003413c0*/
  v17 = BYTE1(v32); /*0x1003413c5*/
  v18 = *(_QWORD *)(a2 + 24); /*0x1003413c9*/
  v19 = v15 + 1; /*0x1003413cd*/
  v20 = -(__int64)v14; /*0x1003413d0*/
  while ( 1 ) /*0x1003413d3*/
  {
    v21 = *(unsigned __int8 *)(v18 + v19 - 1); /*0x1003413d3*/
    if ( v21 > 0x3A ) /*0x1003413dc*/
      goto LABEL_46; /*0x1003413dc*/
    if ( !_bittest64(&v9, v21) ) /*0x1003413e2*/
      break; /*0x1003413e2*/
    *(_QWORD *)(a2 + 40) = v19; /*0x1003413e8*/
    v22 = v20 + v19++ + 1; /*0x1003413ec*/
    if ( v22 == 1 ) /*0x1003413f8*/
      goto LABEL_22; /*0x1003413f8*/
  }
  if ( v21 != 58 ) /*0x100341414*/
  {
LABEL_46:
    v32 = 6; /*0x1003414fa*/
    goto LABEL_23; /*0x100341502*/
  }
  *(_QWORD *)(a2 + 40) = v19; /*0x10034141a*/
  switch ( (int)v17 ) /*0x10034142e*/
  {
    case 0: /*0x10034142e*/
    case 1: /*0x10034142e*/
    case 2: /*0x10034142e*/
    case 3: /*0x10034142e*/
    case 4: /*0x10034142e*/
      v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x100341433*/
              a2,
              v18,
              v17);
      if ( v13 ) /*0x10034143b*/
        goto LABEL_27; /*0x10034143b*/
      ++*(_BYTE *)(a2 + 72); /*0x10034144d*/
      *(_BYTE *)(a1 + 1) = v16; /*0x100341451*/
      v23 = *(_QWORD *)(a2 + 32); /*0x100341455*/
      v24 = *(_QWORD *)(a2 + 40); /*0x100341459*/
      if ( v24 >= v23 ) /*0x100341460*/
        goto LABEL_33; /*0x100341460*/
      v25 = *(_QWORD *)(a2 + 24); /*0x100341462*/
      v26 = v24 + 1; /*0x100341466*/
      v27 = -(__int64)v23; /*0x100341469*/
      break; /*0x100341469*/
    case 5: /*0x10034142e*/
      JUMPOUT(0x100743437LL); /*0x100743437*/
  }
  while ( 1 ) /*0x10034146c*/
  {
    v28 = *(unsigned __int8 *)(v25 + v26 - 1); /*0x10034146c*/
    if ( v28 > 0x20 || !_bittest64(&v9, v28) ) /*0x100341477*/
      break; /*0x100341477*/
    *(_QWORD *)(a2 + 40) = v26; /*0x10034147d*/
    v29 = v27 + v26++ + 1; /*0x100341481*/
    if ( v29 == 1 ) /*0x10034148d*/
    {
LABEL_33:
      v32 = 3; /*0x10034148f*/
LABEL_34:
      *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v32); /*0x100341497*/
      v30 = 1; /*0x1003414a7*/
      goto LABEL_42; /*0x1003414a9*/
    }
  }
  if ( (_DWORD)v28 != 125 ) /*0x1003414ae*/
  {
    v32 = 10; /*0x100341507*/
    goto LABEL_34; /*0x10034150f*/
  }
  *(_QWORD *)(a2 + 40) = v26; /*0x1003414b0*/
LABEL_41:
  v30 = 0; /*0x1003414cc*/
LABEL_42:
  *(_BYTE *)a1 = v30; /*0x1003414ce*/
  return a1; /*0x1003414d3*/
}