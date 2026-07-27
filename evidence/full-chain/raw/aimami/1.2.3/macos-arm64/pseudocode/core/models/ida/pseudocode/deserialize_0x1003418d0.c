// __ZN13codexmate_lib4core6models1_110_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..SubscriptionStateSource$GT$11deserialize @ 0x1003418d0
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..SubscriptionStateSource$GT$::deserialize::h7b28a783f708948b(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x1003418e5*/
  v5 = *(_QWORD *)(a2 + 40); /*0x1003418e9*/
  if ( v5 >= v4 ) /*0x1003418f0*/
  {
LABEL_6:
    v31 = 5; /*0x100341929*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x100341931*/
    *(_BYTE *)a1 = 1; /*0x100341941*/
    return a1; /*0x100341944*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x1003418f2*/
  v7 = v5 + 1; /*0x1003418f6*/
  v8 = -(__int64)v4; /*0x1003418f9*/
  v9 = 0x100002600LL; /*0x1003418fc*/
  while ( 1 ) /*0x100341906*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x100341906*/
    if ( v10 > 0x22 ) /*0x10034190f*/
      goto LABEL_11; /*0x10034190f*/
    if ( !_bittest64(&v9, v10) ) /*0x100341911*/
      break; /*0x100341911*/
    *(_QWORD *)(a2 + 40) = v7; /*0x100341917*/
    v11 = v8 + v7++ + 1; /*0x10034191b*/
    if ( v11 == 1 ) /*0x100341927*/
      goto LABEL_6; /*0x100341927*/
  }
  if ( v10 == 34 ) /*0x10034194d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hf060f54599f03055( /*0x100341956*/
      &v31,
      a2,
      v6,
      v8);
    if ( (_BYTE)v31 == 1 ) /*0x10034195f*/
    {
      *(_QWORD *)(a1 + 8) = v32; /*0x100341965*/
      *(_BYTE *)a1 = 1; /*0x10034196b*/
      return a1; /*0x10034196d*/
    }
    if ( BYTE1(v31) ) /*0x1003419aa*/
    {
      if ( BYTE1(v31) == 1 ) /*0x1003419b3*/
        *(_BYTE *)(a1 + 1) = 1; /*0x1003419b9*/
      else
        *(_BYTE *)(a1 + 1) = 2; /*0x100341ab3*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0; /*0x100341aad*/
    }
    goto LABEL_39; /*0x1003419bd*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x100341975*/
  {
    v31 = 10; /*0x100341ad6*/
    goto LABEL_7; /*0x100341ade*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10034197b*/
  {
    v31 = 24; /*0x100341ae3*/
    goto LABEL_7; /*0x100341aeb*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x100341985*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hf060f54599f03055( /*0x100341990*/
    &v31,
    a2,
    v6,
    v8);
  if ( (_BYTE)v31 == 1 ) /*0x100341999*/
  {
    v13 = v32; /*0x10034199b*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x100341a42*/
    *(_BYTE *)a1 = 1; /*0x100341a46*/
    ++*(_BYTE *)(a2 + 72); /*0x100341a49*/
    return a1; /*0x100341a4d*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x1003419c2*/
  v15 = *(_QWORD *)(a2 + 40); /*0x1003419c6*/
  if ( v15 >= v14 ) /*0x1003419cd*/
  {
LABEL_23:
    v31 = 3; /*0x100341a09*/
LABEL_24:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x100341a11*/
    goto LABEL_27; /*0x100341a1d*/
  }
  v16 = BYTE1(v31); /*0x1003419cf*/
  v17 = *(_QWORD *)(a2 + 24); /*0x1003419d8*/
  v18 = v15 + 1; /*0x1003419dc*/
  v19 = -(__int64)v14; /*0x1003419df*/
  while ( 1 ) /*0x1003419e2*/
  {
    v20 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x1003419e2*/
    if ( v20 > 0x3A ) /*0x1003419eb*/
      goto LABEL_44; /*0x1003419eb*/
    if ( !_bittest64(&v9, v20) ) /*0x1003419f1*/
      break; /*0x1003419f1*/
    *(_QWORD *)(a2 + 40) = v18; /*0x1003419f7*/
    v21 = v19 + v18++ + 1; /*0x1003419fb*/
    if ( v21 == 1 ) /*0x100341a07*/
      goto LABEL_23; /*0x100341a07*/
  }
  if ( v20 != 58 ) /*0x100341a23*/
  {
LABEL_44:
    v31 = 6; /*0x100341af0*/
    goto LABEL_24; /*0x100341af8*/
  }
  *(_QWORD *)(a2 + 40) = v18; /*0x100341a29*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x100341a38*/
          a2,
          v17,
          v19);
  if ( v13 ) /*0x100341a40*/
    goto LABEL_27; /*0x100341a40*/
  ++*(_BYTE *)(a2 + 72); /*0x100341a4f*/
  *(_BYTE *)(a1 + 1) = v16; /*0x100341a53*/
  v22 = *(_QWORD *)(a2 + 32); /*0x100341a57*/
  v23 = *(_QWORD *)(a2 + 40); /*0x100341a5b*/
  if ( v23 >= v22 ) /*0x100341a62*/
  {
LABEL_33:
    v31 = 3; /*0x100341a91*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v31); /*0x100341a99*/
    v29 = 1; /*0x100341aa9*/
    goto LABEL_40; /*0x100341aab*/
  }
  v24 = *(_QWORD *)(a2 + 24); /*0x100341a64*/
  v25 = v23 + 1; /*0x100341a68*/
  v26 = -(__int64)v22; /*0x100341a6b*/
  while ( 1 ) /*0x100341a6e*/
  {
    v27 = *(unsigned __int8 *)(v24 + v25 - 1); /*0x100341a6e*/
    if ( v27 > 0x20 || !_bittest64(&v9, v27) ) /*0x100341a79*/
      break; /*0x100341a79*/
    *(_QWORD *)(a2 + 40) = v25; /*0x100341a7f*/
    v28 = v26 + v25++ + 1; /*0x100341a83*/
    if ( v28 == 1 ) /*0x100341a8f*/
      goto LABEL_33; /*0x100341a8f*/
  }
  if ( (_DWORD)v27 != 125 ) /*0x100341abc*/
  {
    v31 = 10; /*0x100341afd*/
    goto LABEL_34; /*0x100341b05*/
  }
  *(_QWORD *)(a2 + 40) = v25; /*0x100341abe*/
LABEL_39:
  v29 = 0; /*0x100341ac2*/
LABEL_40:
  *(_BYTE *)a1 = v29; /*0x100341ac4*/
  return a1; /*0x100341ac9*/
}