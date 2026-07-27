// __ZN13codexmate_lib4core6models1_98_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..UsageSource$GT$11deserialize @ 0x100343fc0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..UsageSource$GT$::deserialize::h622f3a55485adf94(
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

  v3 = *(_QWORD *)(a2 + 32); /*0x100343fd5*/
  v4 = *(_QWORD *)(a2 + 40); /*0x100343fd9*/
  if ( v4 >= v3 ) /*0x100343fe0*/
  {
LABEL_6:
    v30 = 5; /*0x100344019*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x100344021*/
    *(_BYTE *)a1 = 1; /*0x100344031*/
    return a1; /*0x100344034*/
  }
  v5 = *(_QWORD *)(a2 + 24); /*0x100343fe2*/
  v6 = v4 + 1; /*0x100343fe6*/
  v7 = -(__int64)v3; /*0x100343fe9*/
  v8 = 0x100002600LL; /*0x100343fec*/
  while ( 1 ) /*0x100343ff6*/
  {
    v9 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x100343ff6*/
    if ( v9 > 0x22 ) /*0x100343fff*/
      goto LABEL_11; /*0x100343fff*/
    if ( !_bittest64(&v8, v9) ) /*0x100344001*/
      break; /*0x100344001*/
    *(_QWORD *)(a2 + 40) = v6; /*0x100344007*/
    v10 = v7 + v6++ + 1; /*0x10034400b*/
    if ( v10 == 1 ) /*0x100344017*/
      goto LABEL_6; /*0x100344017*/
  }
  if ( v9 == 34 ) /*0x10034403d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h3c725e67faa07858( /*0x100344046*/
      &v30,
      a2,
      v5,
      v7);
    if ( (_BYTE)v30 == 1 ) /*0x10034404f*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x100344055*/
      *(_BYTE *)a1 = 1; /*0x10034405b*/
      return a1; /*0x10034405d*/
    }
    if ( BYTE1(v30) ) /*0x100344098*/
      *(_BYTE *)(a1 + 1) = 1; /*0x10034409e*/
    else
      *(_BYTE *)(a1 + 1) = 0; /*0x100344128*/
    goto LABEL_37; /*0x1003440a2*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x100344065*/
  {
    v30 = 10; /*0x1003441a9*/
    goto LABEL_7; /*0x1003441b1*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10034406b*/
  {
    v30 = 24; /*0x1003441b6*/
    goto LABEL_7; /*0x1003441be*/
  }
  *(_QWORD *)(a2 + 40) = v6; /*0x100344075*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h3c725e67faa07858( /*0x100344080*/
    &v30,
    a2,
    v5,
    v7);
  if ( (_BYTE)v30 == 1 ) /*0x100344089*/
  {
    v12 = v31; /*0x10034408b*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v12; /*0x10034411b*/
    *(_BYTE *)a1 = 1; /*0x10034411f*/
    ++*(_BYTE *)(a2 + 72); /*0x100344122*/
    return a1; /*0x100344126*/
  }
  v13 = *(_QWORD *)(a2 + 32); /*0x1003440a7*/
  v14 = *(_QWORD *)(a2 + 40); /*0x1003440ab*/
  if ( v14 >= v13 ) /*0x1003440b2*/
  {
LABEL_22:
    v30 = 3; /*0x1003440ea*/
LABEL_23:
    v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x1003440f2*/
    goto LABEL_26; /*0x1003440fe*/
  }
  v15 = BYTE1(v30); /*0x1003440b4*/
  v16 = *(_QWORD *)(a2 + 24); /*0x1003440b9*/
  v17 = v14 + 1; /*0x1003440bd*/
  v18 = -(__int64)v13; /*0x1003440c0*/
  while ( 1 ) /*0x1003440c3*/
  {
    v19 = *(unsigned __int8 *)(v16 + v17 - 1); /*0x1003440c3*/
    if ( v19 > 0x3A ) /*0x1003440cc*/
      goto LABEL_42; /*0x1003440cc*/
    if ( !_bittest64(&v8, v19) ) /*0x1003440d2*/
      break; /*0x1003440d2*/
    *(_QWORD *)(a2 + 40) = v17; /*0x1003440d8*/
    v20 = v18 + v17++ + 1; /*0x1003440dc*/
    if ( v20 == 1 ) /*0x1003440e8*/
      goto LABEL_22; /*0x1003440e8*/
  }
  if ( v19 != 58 ) /*0x100344104*/
  {
LABEL_42:
    v30 = 6; /*0x1003441c3*/
    goto LABEL_23; /*0x1003441cb*/
  }
  *(_QWORD *)(a2 + 40) = v17; /*0x10034410a*/
  v12 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x100344111*/
          a2,
          58,
          v16);
  if ( v12 ) /*0x100344119*/
    goto LABEL_26; /*0x100344119*/
  ++*(_BYTE *)(a2 + 72); /*0x10034412e*/
  *(_BYTE *)(a1 + 1) = v15; /*0x100344132*/
  v21 = *(_QWORD *)(a2 + 32); /*0x100344136*/
  v22 = *(_QWORD *)(a2 + 40); /*0x10034413a*/
  if ( v22 >= v21 ) /*0x100344141*/
  {
LABEL_33:
    v30 = 3; /*0x100344170*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v30); /*0x100344178*/
    v28 = 1; /*0x100344188*/
    goto LABEL_38; /*0x10034418a*/
  }
  v23 = *(_QWORD *)(a2 + 24); /*0x100344143*/
  v24 = v22 + 1; /*0x100344147*/
  v25 = -(__int64)v21; /*0x10034414a*/
  while ( 1 ) /*0x10034414d*/
  {
    v26 = *(unsigned __int8 *)(v23 + v24 - 1); /*0x10034414d*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x100344158*/
      break; /*0x100344158*/
    *(_QWORD *)(a2 + 40) = v24; /*0x10034415e*/
    v27 = v25 + v24++ + 1; /*0x100344162*/
    if ( v27 == 1 ) /*0x10034416e*/
      goto LABEL_33; /*0x10034416e*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x10034418f*/
  {
    v30 = 10; /*0x1003441d0*/
    goto LABEL_34; /*0x1003441d8*/
  }
  *(_QWORD *)(a2 + 40) = v24; /*0x100344191*/
LABEL_37:
  v28 = 0; /*0x100344195*/
LABEL_38:
  *(_BYTE *)a1 = v28; /*0x100344197*/
  return a1; /*0x10034419c*/
}