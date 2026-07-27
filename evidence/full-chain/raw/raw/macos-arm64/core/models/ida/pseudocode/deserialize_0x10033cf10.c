// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceTriggerStyle$GT$11deserialize @ 0x10033cf10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceTriggerStyle$GT$::deserialize::hc2b0a81d985c2fcd(
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

  v3 = *(_QWORD *)(a2 + 32); /*0x10033cf25*/
  v4 = *(_QWORD *)(a2 + 40); /*0x10033cf29*/
  if ( v4 >= v3 ) /*0x10033cf30*/
  {
LABEL_6:
    v30 = 5; /*0x10033cf69*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x10033cf71*/
    *(_BYTE *)a1 = 1; /*0x10033cf81*/
    return a1; /*0x10033cf84*/
  }
  v5 = *(_QWORD *)(a2 + 24); /*0x10033cf32*/
  v6 = v4 + 1; /*0x10033cf36*/
  v7 = -(__int64)v3; /*0x10033cf39*/
  v8 = 0x100002600LL; /*0x10033cf3c*/
  while ( 1 ) /*0x10033cf46*/
  {
    v9 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x10033cf46*/
    if ( v9 > 0x22 ) /*0x10033cf4f*/
      goto LABEL_11; /*0x10033cf4f*/
    if ( !_bittest64(&v8, v9) ) /*0x10033cf51*/
      break; /*0x10033cf51*/
    *(_QWORD *)(a2 + 40) = v6; /*0x10033cf57*/
    v10 = v7 + v6++ + 1; /*0x10033cf5b*/
    if ( v10 == 1 ) /*0x10033cf67*/
      goto LABEL_6; /*0x10033cf67*/
  }
  if ( v9 == 34 ) /*0x10033cf8d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hbf8e57d1816a5a18( /*0x10033cf96*/
      &v30,
      a2,
      v5,
      v7);
    if ( (_BYTE)v30 == 1 ) /*0x10033cf9f*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x10033cfa5*/
      *(_BYTE *)a1 = 1; /*0x10033cfab*/
      return a1; /*0x10033cfad*/
    }
    if ( BYTE1(v30) ) /*0x10033cfe8*/
      *(_BYTE *)(a1 + 1) = 1; /*0x10033cfee*/
    else
      *(_BYTE *)(a1 + 1) = 0; /*0x10033d078*/
    goto LABEL_37; /*0x10033cff2*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x10033cfb5*/
  {
    v30 = 10; /*0x10033d0f9*/
    goto LABEL_7; /*0x10033d101*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033cfbb*/
  {
    v30 = 24; /*0x10033d106*/
    goto LABEL_7; /*0x10033d10e*/
  }
  *(_QWORD *)(a2 + 40) = v6; /*0x10033cfc5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hbf8e57d1816a5a18( /*0x10033cfd0*/
    &v30,
    a2,
    v5,
    v7);
  if ( (_BYTE)v30 == 1 ) /*0x10033cfd9*/
  {
    v12 = v31; /*0x10033cfdb*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v12; /*0x10033d06b*/
    *(_BYTE *)a1 = 1; /*0x10033d06f*/
    ++*(_BYTE *)(a2 + 72); /*0x10033d072*/
    return a1; /*0x10033d076*/
  }
  v13 = *(_QWORD *)(a2 + 32); /*0x10033cff7*/
  v14 = *(_QWORD *)(a2 + 40); /*0x10033cffb*/
  if ( v14 >= v13 ) /*0x10033d002*/
  {
LABEL_22:
    v30 = 3; /*0x10033d03a*/
LABEL_23:
    v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x10033d042*/
    goto LABEL_26; /*0x10033d04e*/
  }
  v15 = BYTE1(v30); /*0x10033d004*/
  v16 = *(_QWORD *)(a2 + 24); /*0x10033d009*/
  v17 = v14 + 1; /*0x10033d00d*/
  v18 = -(__int64)v13; /*0x10033d010*/
  while ( 1 ) /*0x10033d013*/
  {
    v19 = *(unsigned __int8 *)(v16 + v17 - 1); /*0x10033d013*/
    if ( v19 > 0x3A ) /*0x10033d01c*/
      goto LABEL_42; /*0x10033d01c*/
    if ( !_bittest64(&v8, v19) ) /*0x10033d022*/
      break; /*0x10033d022*/
    *(_QWORD *)(a2 + 40) = v17; /*0x10033d028*/
    v20 = v18 + v17++ + 1; /*0x10033d02c*/
    if ( v20 == 1 ) /*0x10033d038*/
      goto LABEL_22; /*0x10033d038*/
  }
  if ( v19 != 58 ) /*0x10033d054*/
  {
LABEL_42:
    v30 = 6; /*0x10033d113*/
    goto LABEL_23; /*0x10033d11b*/
  }
  *(_QWORD *)(a2 + 40) = v17; /*0x10033d05a*/
  v12 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033d061*/
          a2,
          58,
          v16);
  if ( v12 ) /*0x10033d069*/
    goto LABEL_26; /*0x10033d069*/
  ++*(_BYTE *)(a2 + 72); /*0x10033d07e*/
  *(_BYTE *)(a1 + 1) = v15; /*0x10033d082*/
  v21 = *(_QWORD *)(a2 + 32); /*0x10033d086*/
  v22 = *(_QWORD *)(a2 + 40); /*0x10033d08a*/
  if ( v22 >= v21 ) /*0x10033d091*/
  {
LABEL_33:
    v30 = 3; /*0x10033d0c0*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v30); /*0x10033d0c8*/
    v28 = 1; /*0x10033d0d8*/
    goto LABEL_38; /*0x10033d0da*/
  }
  v23 = *(_QWORD *)(a2 + 24); /*0x10033d093*/
  v24 = v22 + 1; /*0x10033d097*/
  v25 = -(__int64)v21; /*0x10033d09a*/
  while ( 1 ) /*0x10033d09d*/
  {
    v26 = *(unsigned __int8 *)(v23 + v24 - 1); /*0x10033d09d*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x10033d0a8*/
      break; /*0x10033d0a8*/
    *(_QWORD *)(a2 + 40) = v24; /*0x10033d0ae*/
    v27 = v25 + v24++ + 1; /*0x10033d0b2*/
    if ( v27 == 1 ) /*0x10033d0be*/
      goto LABEL_33; /*0x10033d0be*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x10033d0df*/
  {
    v30 = 10; /*0x10033d120*/
    goto LABEL_34; /*0x10033d128*/
  }
  *(_QWORD *)(a2 + 40) = v24; /*0x10033d0e1*/
LABEL_37:
  v28 = 0; /*0x10033d0e5*/
LABEL_38:
  *(_BYTE *)a1 = v28; /*0x10033d0e7*/
  return a1; /*0x10033d0ec*/
}