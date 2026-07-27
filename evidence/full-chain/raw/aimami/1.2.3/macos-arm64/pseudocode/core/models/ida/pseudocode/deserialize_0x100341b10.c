// __ZN13codexmate_lib4core6models1_110_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..SubscriptionStateSource$GT$11deserialize @ 0x100341b10
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..SubscriptionStateSource$GT$::deserialize::hcf3778ac7c0d3cc8(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x100341b25*/
  v5 = *(_QWORD *)(a2 + 40); /*0x100341b29*/
  if ( v5 >= v4 ) /*0x100341b30*/
  {
LABEL_6:
    v31 = 5; /*0x100341b69*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(a2, &v31); /*0x100341b71*/
    *(_BYTE *)a1 = 1; /*0x100341b81*/
    return a1; /*0x100341b84*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x100341b32*/
  v7 = v5 + 1; /*0x100341b36*/
  v8 = -(__int64)v4; /*0x100341b39*/
  v9 = 0x100002600LL; /*0x100341b3c*/
  while ( 1 ) /*0x100341b46*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x100341b46*/
    if ( v10 > 0x22 ) /*0x100341b4f*/
      goto LABEL_11; /*0x100341b4f*/
    if ( !_bittest64(&v9, v10) ) /*0x100341b51*/
      break; /*0x100341b51*/
    *(_QWORD *)(a2 + 40) = v7; /*0x100341b57*/
    v11 = v8 + v7++ + 1; /*0x100341b5b*/
    if ( v11 == 1 ) /*0x100341b67*/
      goto LABEL_6; /*0x100341b67*/
  }
  if ( v10 == 34 ) /*0x100341b8d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hcd0417daa125ce26( /*0x100341b96*/
      &v31,
      a2,
      v6,
      v8);
    if ( (_BYTE)v31 == 1 ) /*0x100341b9f*/
    {
      *(_QWORD *)(a1 + 8) = v32; /*0x100341ba5*/
      *(_BYTE *)a1 = 1; /*0x100341bab*/
      return a1; /*0x100341bad*/
    }
    if ( BYTE1(v31) ) /*0x100341bea*/
    {
      if ( BYTE1(v31) == 1 ) /*0x100341bf3*/
        *(_BYTE *)(a1 + 1) = 1; /*0x100341bf9*/
      else
        *(_BYTE *)(a1 + 1) = 2; /*0x100341cf3*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0; /*0x100341ced*/
    }
    goto LABEL_39; /*0x100341bfd*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x100341bb5*/
  {
    v31 = 10; /*0x100341d16*/
    goto LABEL_7; /*0x100341d1e*/
  }
  if ( (*(_BYTE *)(a2 + 56))-- == 1 ) /*0x100341bbb*/
  {
    v31 = 24; /*0x100341d23*/
    goto LABEL_7; /*0x100341d2b*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x100341bc5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hcd0417daa125ce26( /*0x100341bd0*/
    &v31,
    a2,
    v6,
    v8);
  if ( (_BYTE)v31 == 1 ) /*0x100341bd9*/
  {
    v13 = v32; /*0x100341bdb*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x100341c82*/
    *(_BYTE *)a1 = 1; /*0x100341c86*/
    ++*(_BYTE *)(a2 + 56); /*0x100341c89*/
    return a1; /*0x100341c8d*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x100341c02*/
  v15 = *(_QWORD *)(a2 + 40); /*0x100341c06*/
  if ( v15 >= v14 ) /*0x100341c0d*/
  {
LABEL_23:
    v31 = 3; /*0x100341c49*/
LABEL_24:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(a2, &v31); /*0x100341c51*/
    goto LABEL_27; /*0x100341c5d*/
  }
  v16 = BYTE1(v31); /*0x100341c0f*/
  v17 = *(_QWORD *)(a2 + 24); /*0x100341c18*/
  v18 = v15 + 1; /*0x100341c1c*/
  v19 = -(__int64)v14; /*0x100341c1f*/
  while ( 1 ) /*0x100341c22*/
  {
    v20 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x100341c22*/
    if ( v20 > 0x3A ) /*0x100341c2b*/
      goto LABEL_44; /*0x100341c2b*/
    if ( !_bittest64(&v9, v20) ) /*0x100341c31*/
      break; /*0x100341c31*/
    *(_QWORD *)(a2 + 40) = v18; /*0x100341c37*/
    v21 = v19 + v18++ + 1; /*0x100341c3b*/
    if ( v21 == 1 ) /*0x100341c47*/
      goto LABEL_23; /*0x100341c47*/
  }
  if ( v20 != 58 ) /*0x100341c63*/
  {
LABEL_44:
    v31 = 6; /*0x100341d30*/
    goto LABEL_24; /*0x100341d38*/
  }
  *(_QWORD *)(a2 + 40) = v18; /*0x100341c69*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h45aa6fa5cbb47703( /*0x100341c78*/
          a2,
          v17,
          v19);
  if ( v13 ) /*0x100341c80*/
    goto LABEL_27; /*0x100341c80*/
  ++*(_BYTE *)(a2 + 56); /*0x100341c8f*/
  *(_BYTE *)(a1 + 1) = v16; /*0x100341c93*/
  v22 = *(_QWORD *)(a2 + 32); /*0x100341c97*/
  v23 = *(_QWORD *)(a2 + 40); /*0x100341c9b*/
  if ( v23 >= v22 ) /*0x100341ca2*/
  {
LABEL_33:
    v31 = 3; /*0x100341cd1*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbeb452b81b5c60fd(a2, &v31); /*0x100341cd9*/
    v29 = 1; /*0x100341ce9*/
    goto LABEL_40; /*0x100341ceb*/
  }
  v24 = *(_QWORD *)(a2 + 24); /*0x100341ca4*/
  v25 = v23 + 1; /*0x100341ca8*/
  v26 = -(__int64)v22; /*0x100341cab*/
  while ( 1 ) /*0x100341cae*/
  {
    v27 = *(unsigned __int8 *)(v24 + v25 - 1); /*0x100341cae*/
    if ( v27 > 0x20 || !_bittest64(&v9, v27) ) /*0x100341cb9*/
      break; /*0x100341cb9*/
    *(_QWORD *)(a2 + 40) = v25; /*0x100341cbf*/
    v28 = v26 + v25++ + 1; /*0x100341cc3*/
    if ( v28 == 1 ) /*0x100341ccf*/
      goto LABEL_33; /*0x100341ccf*/
  }
  if ( (_DWORD)v27 != 125 ) /*0x100341cfc*/
  {
    v31 = 10; /*0x100341d3d*/
    goto LABEL_34; /*0x100341d45*/
  }
  *(_QWORD *)(a2 + 40) = v25; /*0x100341cfe*/
LABEL_39:
  v29 = 0; /*0x100341d02*/
LABEL_40:
  *(_BYTE *)a1 = v29; /*0x100341d04*/
  return a1; /*0x100341d09*/
}