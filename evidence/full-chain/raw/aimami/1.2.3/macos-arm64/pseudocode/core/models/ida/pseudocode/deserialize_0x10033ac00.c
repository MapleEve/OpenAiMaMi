// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanStateSource$GT$11deserialize @ 0x10033ac00
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanStateSource$GT$::deserialize::h0895b410aef1241a(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x10033ac15*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10033ac19*/
  if ( v5 >= v4 ) /*0x10033ac20*/
  {
LABEL_6:
    v31 = 5; /*0x10033ac59*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x10033ac61*/
    *(_BYTE *)a1 = 1; /*0x10033ac71*/
    return a1; /*0x10033ac74*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10033ac22*/
  v7 = v5 + 1; /*0x10033ac26*/
  v8 = -(__int64)v4; /*0x10033ac29*/
  v9 = 0x100002600LL; /*0x10033ac2c*/
  while ( 1 ) /*0x10033ac36*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10033ac36*/
    if ( v10 > 0x22 ) /*0x10033ac3f*/
      goto LABEL_11; /*0x10033ac3f*/
    if ( !_bittest64(&v9, v10) ) /*0x10033ac41*/
      break; /*0x10033ac41*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10033ac47*/
    v11 = v8 + v7++ + 1; /*0x10033ac4b*/
    if ( v11 == 1 ) /*0x10033ac57*/
      goto LABEL_6; /*0x10033ac57*/
  }
  if ( v10 == 34 ) /*0x10033ac7d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hbd5ad0eb362f0310( /*0x10033ac86*/
      &v31,
      a2,
      v6,
      v8);
    if ( (_BYTE)v31 == 1 ) /*0x10033ac8f*/
    {
      *(_QWORD *)(a1 + 8) = v32; /*0x10033ac95*/
      *(_BYTE *)a1 = 1; /*0x10033ac9b*/
      return a1; /*0x10033ac9d*/
    }
    if ( BYTE1(v31) ) /*0x10033acda*/
    {
      if ( BYTE1(v31) == 1 ) /*0x10033ace3*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10033ace9*/
      else
        *(_BYTE *)(a1 + 1) = 2; /*0x10033ade3*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0; /*0x10033addd*/
    }
    goto LABEL_39; /*0x10033aced*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10033aca5*/
  {
    v31 = 10; /*0x10033ae06*/
    goto LABEL_7; /*0x10033ae0e*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033acab*/
  {
    v31 = 24; /*0x10033ae13*/
    goto LABEL_7; /*0x10033ae1b*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10033acb5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hbd5ad0eb362f0310( /*0x10033acc0*/
    &v31,
    a2,
    v6,
    v8);
  if ( (_BYTE)v31 == 1 ) /*0x10033acc9*/
  {
    v13 = v32; /*0x10033accb*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10033ad72*/
    *(_BYTE *)a1 = 1; /*0x10033ad76*/
    ++*(_BYTE *)(a2 + 72); /*0x10033ad79*/
    return a1; /*0x10033ad7d*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10033acf2*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10033acf6*/
  if ( v15 >= v14 ) /*0x10033acfd*/
  {
LABEL_23:
    v31 = 3; /*0x10033ad39*/
LABEL_24:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x10033ad41*/
    goto LABEL_27; /*0x10033ad4d*/
  }
  v16 = BYTE1(v31); /*0x10033acff*/
  v17 = *(_QWORD *)(a2 + 24); /*0x10033ad08*/
  v18 = v15 + 1; /*0x10033ad0c*/
  v19 = -(__int64)v14; /*0x10033ad0f*/
  while ( 1 ) /*0x10033ad12*/
  {
    v20 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x10033ad12*/
    if ( v20 > 0x3A ) /*0x10033ad1b*/
      goto LABEL_44; /*0x10033ad1b*/
    if ( !_bittest64(&v9, v20) ) /*0x10033ad21*/
      break; /*0x10033ad21*/
    *(_QWORD *)(a2 + 40) = v18; /*0x10033ad27*/
    v21 = v19 + v18++ + 1; /*0x10033ad2b*/
    if ( v21 == 1 ) /*0x10033ad37*/
      goto LABEL_23; /*0x10033ad37*/
  }
  if ( v20 != 58 ) /*0x10033ad53*/
  {
LABEL_44:
    v31 = 6; /*0x10033ae20*/
    goto LABEL_24; /*0x10033ae28*/
  }
  *(_QWORD *)(a2 + 40) = v18; /*0x10033ad59*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033ad68*/
          a2,
          v17,
          v19);
  if ( v13 ) /*0x10033ad70*/
    goto LABEL_27; /*0x10033ad70*/
  ++*(_BYTE *)(a2 + 72); /*0x10033ad7f*/
  *(_BYTE *)(a1 + 1) = v16; /*0x10033ad83*/
  v22 = *(_QWORD *)(a2 + 32); /*0x10033ad87*/
  v23 = *(_QWORD *)(a2 + 40); /*0x10033ad8b*/
  if ( v23 >= v22 ) /*0x10033ad92*/
  {
LABEL_33:
    v31 = 3; /*0x10033adc1*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v31); /*0x10033adc9*/
    v29 = 1; /*0x10033add9*/
    goto LABEL_40; /*0x10033addb*/
  }
  v24 = *(_QWORD *)(a2 + 24); /*0x10033ad94*/
  v25 = v23 + 1; /*0x10033ad98*/
  v26 = -(__int64)v22; /*0x10033ad9b*/
  while ( 1 ) /*0x10033ad9e*/
  {
    v27 = *(unsigned __int8 *)(v24 + v25 - 1); /*0x10033ad9e*/
    if ( v27 > 0x20 || !_bittest64(&v9, v27) ) /*0x10033ada9*/
      break; /*0x10033ada9*/
    *(_QWORD *)(a2 + 40) = v25; /*0x10033adaf*/
    v28 = v26 + v25++ + 1; /*0x10033adb3*/
    if ( v28 == 1 ) /*0x10033adbf*/
      goto LABEL_33; /*0x10033adbf*/
  }
  if ( (_DWORD)v27 != 125 ) /*0x10033adec*/
  {
    v31 = 10; /*0x10033ae2d*/
    goto LABEL_34; /*0x10033ae35*/
  }
  *(_QWORD *)(a2 + 40) = v25; /*0x10033adee*/
LABEL_39:
  v29 = 0; /*0x10033adf2*/
LABEL_40:
  *(_BYTE *)a1 = v29; /*0x10033adf4*/
  return a1; /*0x10033adf9*/
}