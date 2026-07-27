// __ZN13codexmate_lib4core6models1_95_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$11deserialize @ 0x100343bf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$::deserialize::hf30b0266ef210f22(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x100343c05*/
  v5 = *(_QWORD *)(a2 + 40); /*0x100343c09*/
  if ( v5 >= v4 ) /*0x100343c10*/
  {
LABEL_6:
    v32 = 5; /*0x100343c49*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x100343c51*/
    *(_BYTE *)a1 = 1; /*0x100343c61*/
    return a1; /*0x100343c64*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x100343c12*/
  v7 = v5 + 1; /*0x100343c16*/
  v8 = -(__int64)v4; /*0x100343c19*/
  v9 = 0x100002600LL; /*0x100343c1c*/
  while ( 1 ) /*0x100343c26*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x100343c26*/
    if ( v10 > 0x22 ) /*0x100343c2f*/
      goto LABEL_11; /*0x100343c2f*/
    if ( !_bittest64(&v9, v10) ) /*0x100343c31*/
      break; /*0x100343c31*/
    *(_QWORD *)(a2 + 40) = v7; /*0x100343c37*/
    v11 = v8 + v7++ + 1; /*0x100343c3b*/
    if ( v11 == 1 ) /*0x100343c47*/
      goto LABEL_6; /*0x100343c47*/
  }
  if ( v10 == 34 ) /*0x100343c6d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5e795c39629f6197( /*0x100343c76*/
      &v32,
      a2,
      v6,
      v8);
    if ( (_BYTE)v32 == 1 ) /*0x100343c7f*/
    {
      *(_QWORD *)(a1 + 8) = v33; /*0x100343c85*/
      *(_BYTE *)a1 = 1; /*0x100343c8b*/
      return a1; /*0x100343c8d*/
    }
    switch ( BYTE1(v32) ) /*0x100343cd8*/
    {
      case 0: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 0; /*0x100343cda*/
        break; /*0x100343cde*/
      case 1: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 1; /*0x100343dfe*/
        break; /*0x100343e02*/
      case 2: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 2; /*0x100343dec*/
        break; /*0x100343df0*/
      case 3: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 3; /*0x100343df2*/
        break; /*0x100343df6*/
      case 4: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 4; /*0x100343de6*/
        break; /*0x100343dea*/
      case 5: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 5; /*0x100343e04*/
        break; /*0x100343e08*/
      case 6: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 6; /*0x100343e0a*/
        break; /*0x100343e0e*/
      case 7: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 7; /*0x100343df8*/
        break; /*0x100343dfc*/
      case 8: /*0x100343cd8*/
        *(_BYTE *)(a1 + 1) = 8; /*0x100343e10*/
        break; /*0x100343e10*/
    }
    goto LABEL_44; /*0x100343e10*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x100343c95*/
  {
    v32 = 10; /*0x100343e28*/
    goto LABEL_7; /*0x100343e30*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x100343c9b*/
  {
    v32 = 24; /*0x100343e35*/
    goto LABEL_7; /*0x100343e3d*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x100343ca5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h5e795c39629f6197( /*0x100343cb0*/
    &v32,
    a2,
    v6,
    v8);
  if ( (_BYTE)v32 == 1 ) /*0x100343cb9*/
  {
    v13 = v33; /*0x100343cbb*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v13; /*0x100343d6d*/
    *(_BYTE *)a1 = 1; /*0x100343d71*/
    ++*(_BYTE *)(a2 + 72); /*0x100343d74*/
    return a1; /*0x100343d78*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x100343ce3*/
  v15 = *(_QWORD *)(a2 + 40); /*0x100343ce7*/
  if ( v15 >= v14 ) /*0x100343cee*/
  {
LABEL_22:
    v32 = 3; /*0x100343d2a*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x100343d32*/
    goto LABEL_26; /*0x100343d3e*/
  }
  v16 = BYTE1(v32); /*0x100343cf0*/
  v17 = BYTE1(v32); /*0x100343cf5*/
  v18 = *(_QWORD *)(a2 + 24); /*0x100343cf9*/
  v19 = v15 + 1; /*0x100343cfd*/
  v20 = -(__int64)v14; /*0x100343d00*/
  while ( 1 ) /*0x100343d03*/
  {
    v21 = *(unsigned __int8 *)(v18 + v19 - 1); /*0x100343d03*/
    if ( v21 > 0x3A ) /*0x100343d0c*/
      goto LABEL_49; /*0x100343d0c*/
    if ( !_bittest64(&v9, v21) ) /*0x100343d12*/
      break; /*0x100343d12*/
    *(_QWORD *)(a2 + 40) = v19; /*0x100343d18*/
    v22 = v20 + v19++ + 1; /*0x100343d1c*/
    if ( v22 == 1 ) /*0x100343d28*/
      goto LABEL_22; /*0x100343d28*/
  }
  if ( v21 != 58 ) /*0x100343d44*/
  {
LABEL_49:
    v32 = 6; /*0x100343e42*/
    goto LABEL_23; /*0x100343e4a*/
  }
  *(_QWORD *)(a2 + 40) = v19; /*0x100343d4a*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x100343d63*/
          a2,
          v18,
          v17);
  if ( v13 ) /*0x100343d6b*/
    goto LABEL_26; /*0x100343d6b*/
  ++*(_BYTE *)(a2 + 72); /*0x100343d7d*/
  *(_BYTE *)(a1 + 1) = v16; /*0x100343d81*/
  v23 = *(_QWORD *)(a2 + 32); /*0x100343d85*/
  v24 = *(_QWORD *)(a2 + 40); /*0x100343d89*/
  if ( v24 >= v23 ) /*0x100343d90*/
  {
LABEL_32:
    v32 = 3; /*0x100343dbf*/
LABEL_33:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v32); /*0x100343dc7*/
    v30 = 1; /*0x100343dd7*/
    goto LABEL_45; /*0x100343dd9*/
  }
  v25 = *(_QWORD *)(a2 + 24); /*0x100343d92*/
  v26 = v24 + 1; /*0x100343d96*/
  v27 = -(__int64)v23; /*0x100343d99*/
  while ( 1 ) /*0x100343d9c*/
  {
    v28 = *(unsigned __int8 *)(v25 + v26 - 1); /*0x100343d9c*/
    if ( v28 > 0x20 || !_bittest64(&v9, v28) ) /*0x100343da7*/
      break; /*0x100343da7*/
    *(_QWORD *)(a2 + 40) = v26; /*0x100343dad*/
    v29 = v27 + v26++ + 1; /*0x100343db1*/
    if ( v29 == 1 ) /*0x100343dbd*/
      goto LABEL_32; /*0x100343dbd*/
  }
  if ( (_DWORD)v28 != 125 ) /*0x100343dde*/
  {
    v32 = 10; /*0x100343e4f*/
    goto LABEL_33; /*0x100343e57*/
  }
  *(_QWORD *)(a2 + 40) = v26; /*0x100343de0*/
LABEL_44:
  v30 = 0; /*0x100343e14*/
LABEL_45:
  *(_BYTE *)a1 = v30; /*0x100343e16*/
  return a1; /*0x100343e1b*/
}