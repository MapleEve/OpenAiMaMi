// __ZN13codexmate_lib4core5relay6models1_106_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$11deserialize @ 0x10032e2b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$::deserialize::h350a0c5723b5cc23(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x10032e2c5*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10032e2c9*/
  if ( v5 >= v4 ) /*0x10032e2d0*/
  {
LABEL_6:
    v31 = 5; /*0x10032e309*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x10032e311*/
    *(_BYTE *)a1 = 1; /*0x10032e321*/
    return a1; /*0x10032e324*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10032e2d2*/
  v7 = v5 + 1; /*0x10032e2d6*/
  v8 = -(__int64)v4; /*0x10032e2d9*/
  v9 = 0x100002600LL; /*0x10032e2dc*/
  while ( 1 ) /*0x10032e2e6*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10032e2e6*/
    if ( v10 > 0x22 ) /*0x10032e2ef*/
      goto LABEL_11; /*0x10032e2ef*/
    if ( !_bittest64(&v9, v10) ) /*0x10032e2f1*/
      break; /*0x10032e2f1*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10032e2f7*/
    v11 = v8 + v7++ + 1; /*0x10032e2fb*/
    if ( v11 == 1 ) /*0x10032e307*/
      goto LABEL_6; /*0x10032e307*/
  }
  if ( v10 == 34 ) /*0x10032e32d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h126f46a6f567e640( /*0x10032e336*/
      &v31,
      a2,
      v6,
      v8);
    if ( (_BYTE)v31 == 1 ) /*0x10032e33f*/
    {
      *(_QWORD *)(a1 + 8) = v32; /*0x10032e345*/
      *(_BYTE *)a1 = 1; /*0x10032e34b*/
      return a1; /*0x10032e34d*/
    }
    if ( BYTE1(v31) ) /*0x10032e38a*/
    {
      if ( BYTE1(v31) == 1 ) /*0x10032e393*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10032e399*/
      else
        *(_BYTE *)(a1 + 1) = 2; /*0x10032e493*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0; /*0x10032e48d*/
    }
    goto LABEL_39; /*0x10032e39d*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10032e355*/
  {
    v31 = 10; /*0x10032e4b6*/
    goto LABEL_7; /*0x10032e4be*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10032e35b*/
  {
    v31 = 24; /*0x10032e4c3*/
    goto LABEL_7; /*0x10032e4cb*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10032e365*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h126f46a6f567e640( /*0x10032e370*/
    &v31,
    a2,
    v6,
    v8);
  if ( (_BYTE)v31 == 1 ) /*0x10032e379*/
  {
    v13 = v32; /*0x10032e37b*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10032e422*/
    *(_BYTE *)a1 = 1; /*0x10032e426*/
    ++*(_BYTE *)(a2 + 72); /*0x10032e429*/
    return a1; /*0x10032e42d*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10032e3a2*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10032e3a6*/
  if ( v15 >= v14 ) /*0x10032e3ad*/
  {
LABEL_23:
    v31 = 3; /*0x10032e3e9*/
LABEL_24:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x10032e3f1*/
    goto LABEL_27; /*0x10032e3fd*/
  }
  v16 = BYTE1(v31); /*0x10032e3af*/
  v17 = *(_QWORD *)(a2 + 24); /*0x10032e3b8*/
  v18 = v15 + 1; /*0x10032e3bc*/
  v19 = -(__int64)v14; /*0x10032e3bf*/
  while ( 1 ) /*0x10032e3c2*/
  {
    v20 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x10032e3c2*/
    if ( v20 > 0x3A ) /*0x10032e3cb*/
      goto LABEL_44; /*0x10032e3cb*/
    if ( !_bittest64(&v9, v20) ) /*0x10032e3d1*/
      break; /*0x10032e3d1*/
    *(_QWORD *)(a2 + 40) = v18; /*0x10032e3d7*/
    v21 = v19 + v18++ + 1; /*0x10032e3db*/
    if ( v21 == 1 ) /*0x10032e3e7*/
      goto LABEL_23; /*0x10032e3e7*/
  }
  if ( v20 != 58 ) /*0x10032e403*/
  {
LABEL_44:
    v31 = 6; /*0x10032e4d0*/
    goto LABEL_24; /*0x10032e4d8*/
  }
  *(_QWORD *)(a2 + 40) = v18; /*0x10032e409*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10032e418*/
          a2,
          v17,
          v19);
  if ( v13 ) /*0x10032e420*/
    goto LABEL_27; /*0x10032e420*/
  ++*(_BYTE *)(a2 + 72); /*0x10032e42f*/
  *(_BYTE *)(a1 + 1) = v16; /*0x10032e433*/
  v22 = *(_QWORD *)(a2 + 32); /*0x10032e437*/
  v23 = *(_QWORD *)(a2 + 40); /*0x10032e43b*/
  if ( v23 >= v22 ) /*0x10032e442*/
  {
LABEL_33:
    v31 = 3; /*0x10032e471*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v31); /*0x10032e479*/
    v29 = 1; /*0x10032e489*/
    goto LABEL_40; /*0x10032e48b*/
  }
  v24 = *(_QWORD *)(a2 + 24); /*0x10032e444*/
  v25 = v23 + 1; /*0x10032e448*/
  v26 = -(__int64)v22; /*0x10032e44b*/
  while ( 1 ) /*0x10032e44e*/
  {
    v27 = *(unsigned __int8 *)(v24 + v25 - 1); /*0x10032e44e*/
    if ( v27 > 0x20 || !_bittest64(&v9, v27) ) /*0x10032e459*/
      break; /*0x10032e459*/
    *(_QWORD *)(a2 + 40) = v25; /*0x10032e45f*/
    v28 = v26 + v25++ + 1; /*0x10032e463*/
    if ( v28 == 1 ) /*0x10032e46f*/
      goto LABEL_33; /*0x10032e46f*/
  }
  if ( (_DWORD)v27 != 125 ) /*0x10032e49c*/
  {
    v31 = 10; /*0x10032e4dd*/
    goto LABEL_34; /*0x10032e4e5*/
  }
  *(_QWORD *)(a2 + 40) = v25; /*0x10032e49e*/
LABEL_39:
  v29 = 0; /*0x10032e4a2*/
LABEL_40:
  *(_BYTE *)a1 = v29; /*0x10032e4a4*/
  return a1; /*0x10032e4a9*/
}