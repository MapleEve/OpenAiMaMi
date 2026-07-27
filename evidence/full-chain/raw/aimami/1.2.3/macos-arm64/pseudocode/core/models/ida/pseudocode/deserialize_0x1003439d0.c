// __ZN13codexmate_lib4core6models1_95_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AuthMode$GT$11deserialize @ 0x1003439d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AuthMode$GT$::deserialize::h38f7bc718acab2bb(
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

  v3 = *(_QWORD *)(a2 + 32); /*0x1003439e5*/
  v4 = *(_QWORD *)(a2 + 40); /*0x1003439e9*/
  if ( v4 >= v3 ) /*0x1003439f0*/
  {
LABEL_6:
    v30 = 5; /*0x100343a29*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x100343a31*/
    *(_BYTE *)a1 = 1; /*0x100343a41*/
    return a1; /*0x100343a44*/
  }
  v5 = *(_QWORD *)(a2 + 24); /*0x1003439f2*/
  v6 = v4 + 1; /*0x1003439f6*/
  v7 = -(__int64)v3; /*0x1003439f9*/
  v8 = 0x100002600LL; /*0x1003439fc*/
  while ( 1 ) /*0x100343a06*/
  {
    v9 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x100343a06*/
    if ( v9 > 0x22 ) /*0x100343a0f*/
      goto LABEL_11; /*0x100343a0f*/
    if ( !_bittest64(&v8, v9) ) /*0x100343a11*/
      break; /*0x100343a11*/
    *(_QWORD *)(a2 + 40) = v6; /*0x100343a17*/
    v10 = v7 + v6++ + 1; /*0x100343a1b*/
    if ( v10 == 1 ) /*0x100343a27*/
      goto LABEL_6; /*0x100343a27*/
  }
  if ( v9 == 34 ) /*0x100343a4d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h25e10c9eb30525da( /*0x100343a56*/
      &v30,
      a2,
      v5,
      v7);
    if ( (_BYTE)v30 == 1 ) /*0x100343a5f*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x100343a65*/
      *(_BYTE *)a1 = 1; /*0x100343a6b*/
      return a1; /*0x100343a6d*/
    }
    if ( BYTE1(v30) ) /*0x100343aa8*/
      *(_BYTE *)(a1 + 1) = 1; /*0x100343aae*/
    else
      *(_BYTE *)(a1 + 1) = 0; /*0x100343b38*/
    goto LABEL_37; /*0x100343ab2*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x100343a75*/
  {
    v30 = 10; /*0x100343bb9*/
    goto LABEL_7; /*0x100343bc1*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x100343a7b*/
  {
    v30 = 24; /*0x100343bc6*/
    goto LABEL_7; /*0x100343bce*/
  }
  *(_QWORD *)(a2 + 40) = v6; /*0x100343a85*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h25e10c9eb30525da( /*0x100343a90*/
    &v30,
    a2,
    v5,
    v7);
  if ( (_BYTE)v30 == 1 ) /*0x100343a99*/
  {
    v12 = v31; /*0x100343a9b*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v12; /*0x100343b2b*/
    *(_BYTE *)a1 = 1; /*0x100343b2f*/
    ++*(_BYTE *)(a2 + 72); /*0x100343b32*/
    return a1; /*0x100343b36*/
  }
  v13 = *(_QWORD *)(a2 + 32); /*0x100343ab7*/
  v14 = *(_QWORD *)(a2 + 40); /*0x100343abb*/
  if ( v14 >= v13 ) /*0x100343ac2*/
  {
LABEL_22:
    v30 = 3; /*0x100343afa*/
LABEL_23:
    v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x100343b02*/
    goto LABEL_26; /*0x100343b0e*/
  }
  v15 = BYTE1(v30); /*0x100343ac4*/
  v16 = *(_QWORD *)(a2 + 24); /*0x100343ac9*/
  v17 = v14 + 1; /*0x100343acd*/
  v18 = -(__int64)v13; /*0x100343ad0*/
  while ( 1 ) /*0x100343ad3*/
  {
    v19 = *(unsigned __int8 *)(v16 + v17 - 1); /*0x100343ad3*/
    if ( v19 > 0x3A ) /*0x100343adc*/
      goto LABEL_42; /*0x100343adc*/
    if ( !_bittest64(&v8, v19) ) /*0x100343ae2*/
      break; /*0x100343ae2*/
    *(_QWORD *)(a2 + 40) = v17; /*0x100343ae8*/
    v20 = v18 + v17++ + 1; /*0x100343aec*/
    if ( v20 == 1 ) /*0x100343af8*/
      goto LABEL_22; /*0x100343af8*/
  }
  if ( v19 != 58 ) /*0x100343b14*/
  {
LABEL_42:
    v30 = 6; /*0x100343bd3*/
    goto LABEL_23; /*0x100343bdb*/
  }
  *(_QWORD *)(a2 + 40) = v17; /*0x100343b1a*/
  v12 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x100343b21*/
          a2,
          58,
          v16);
  if ( v12 ) /*0x100343b29*/
    goto LABEL_26; /*0x100343b29*/
  ++*(_BYTE *)(a2 + 72); /*0x100343b3e*/
  *(_BYTE *)(a1 + 1) = v15; /*0x100343b42*/
  v21 = *(_QWORD *)(a2 + 32); /*0x100343b46*/
  v22 = *(_QWORD *)(a2 + 40); /*0x100343b4a*/
  if ( v22 >= v21 ) /*0x100343b51*/
  {
LABEL_33:
    v30 = 3; /*0x100343b80*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v30); /*0x100343b88*/
    v28 = 1; /*0x100343b98*/
    goto LABEL_38; /*0x100343b9a*/
  }
  v23 = *(_QWORD *)(a2 + 24); /*0x100343b53*/
  v24 = v22 + 1; /*0x100343b57*/
  v25 = -(__int64)v21; /*0x100343b5a*/
  while ( 1 ) /*0x100343b5d*/
  {
    v26 = *(unsigned __int8 *)(v23 + v24 - 1); /*0x100343b5d*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x100343b68*/
      break; /*0x100343b68*/
    *(_QWORD *)(a2 + 40) = v24; /*0x100343b6e*/
    v27 = v25 + v24++ + 1; /*0x100343b72*/
    if ( v27 == 1 ) /*0x100343b7e*/
      goto LABEL_33; /*0x100343b7e*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x100343b9f*/
  {
    v30 = 10; /*0x100343be0*/
    goto LABEL_34; /*0x100343be8*/
  }
  *(_QWORD *)(a2 + 40) = v24; /*0x100343ba1*/
LABEL_37:
  v28 = 0; /*0x100343ba5*/
LABEL_38:
  *(_BYTE *)a1 = v28; /*0x100343ba7*/
  return a1; /*0x100343bac*/
}