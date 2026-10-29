// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::models::_::_<impl serde_core::de::Deserialize for codexmate_lib::core::models::PlanType>::deserialize::h5756d358bf2f5416; addr: 0x100277630; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:34Z
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$::deserialize::h5756d358bf2f5416(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rsi
  char v28; // al
  __int64 v30; // [rsp+8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+10h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 32); /*0x100277645*/
  v6 = *(_QWORD *)(a2 + 40); /*0x100277649*/
  if ( v6 >= v5 ) /*0x100277650*/
  {
LABEL_6:
    v30 = 5; /*0x100277689*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::hb5f24721b59aa2d0(a2, &v30, a3, v5); /*0x100277691*/
    *(_BYTE *)a1 = 1; /*0x1002776a1*/
    return a1; /*0x1002776a4*/
  }
  a3 = *(_QWORD *)(a2 + 24); /*0x100277652*/
  v7 = v6 + 1; /*0x100277656*/
  v5 = -(__int64)v5; /*0x100277659*/
  v8 = 0x100002600LL; /*0x10027765c*/
  while ( 1 ) /*0x100277666*/
  {
    v9 = *(unsigned __int8 *)(a3 + v7 - 1); /*0x100277666*/
    if ( v9 > 0x22 ) /*0x10027766f*/
      goto LABEL_11; /*0x10027766f*/
    if ( !_bittest64(&v8, v9) ) /*0x100277671*/
      break; /*0x100277671*/
    *(_QWORD *)(a2 + 40) = v7; /*0x100277677*/
    v10 = v5 + v7++ + 1; /*0x10027767b*/
    if ( v10 == 1 ) /*0x100277687*/
      goto LABEL_6; /*0x100277687*/
  }
  if ( v9 == 34 ) /*0x1002776ad*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h3e7e2410bdba6b11( /*0x1002776b6*/
      &v30,
      a2,
      a3,
      v5);
    if ( (_BYTE)v30 == 1 ) /*0x1002776bf*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x1002776c5*/
      *(_BYTE *)a1 = 1; /*0x1002776cb*/
      return a1; /*0x1002776cd*/
    }
    switch ( BYTE1(v30) ) /*0x100277718*/
    {
      case 0: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 0; /*0x10027771a*/
        break; /*0x10027771e*/
      case 1: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 1; /*0x100277844*/
        break; /*0x100277848*/
      case 2: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 2; /*0x100277832*/
        break; /*0x100277836*/
      case 3: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 3; /*0x100277838*/
        break; /*0x10027783c*/
      case 4: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 4; /*0x100277826*/
        break; /*0x10027782a*/
      case 5: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 5; /*0x10027784a*/
        break; /*0x10027784e*/
      case 6: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 6; /*0x100277850*/
        break; /*0x100277854*/
      case 7: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 7; /*0x10027783e*/
        break; /*0x100277842*/
      case 8: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 8; /*0x10027785c*/
        break; /*0x10027785c*/
      case 9: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 9; /*0x10027782c*/
        break; /*0x100277830*/
      case 0xA: /*0x100277718*/
        *(_BYTE *)(a1 + 1) = 10; /*0x100277856*/
        break; /*0x10027785a*/
    }
    goto LABEL_46; /*0x10027785a*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x1002776d5*/
  {
    v30 = 10; /*0x100277874*/
    goto LABEL_7; /*0x10027787c*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x1002776db*/
  {
    v30 = 24; /*0x100277881*/
    goto LABEL_7; /*0x100277889*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x1002776e5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h3e7e2410bdba6b11( /*0x1002776f0*/
    &v30,
    a2,
    a3,
    v5);
  if ( (_BYTE)v30 == 1 ) /*0x1002776f9*/
  {
    v13 = v31; /*0x1002776fb*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v13; /*0x1002777ad*/
    *(_BYTE *)a1 = 1; /*0x1002777b1*/
    ++*(_BYTE *)(a2 + 72); /*0x1002777b4*/
    return a1; /*0x1002777b8*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x100277723*/
  v15 = *(_QWORD *)(a2 + 40); /*0x100277727*/
  if ( v15 >= v14 ) /*0x10027772e*/
  {
LABEL_22:
    v30 = 3; /*0x10027776a*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hb5f24721b59aa2d0(a2, &v30, v12, v14); /*0x100277772*/
    goto LABEL_26; /*0x10027777e*/
  }
  v16 = BYTE1(v30); /*0x100277730*/
  v12 = BYTE1(v30); /*0x100277735*/
  v17 = *(_QWORD *)(a2 + 24); /*0x100277739*/
  v18 = v15 + 1; /*0x10027773d*/
  v14 = -(__int64)v14; /*0x100277740*/
  while ( 1 ) /*0x100277743*/
  {
    v19 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x100277743*/
    if ( v19 > 0x3A ) /*0x10027774c*/
      goto LABEL_51; /*0x10027774c*/
    if ( !_bittest64(&v8, v19) ) /*0x100277752*/
      break; /*0x100277752*/
    *(_QWORD *)(a2 + 40) = v18; /*0x100277758*/
    v20 = v14 + v18++ + 1; /*0x10027775c*/
    if ( v20 == 1 ) /*0x100277768*/
      goto LABEL_22; /*0x100277768*/
  }
  if ( v19 != 58 ) /*0x100277784*/
  {
LABEL_51:
    v30 = 6; /*0x10027788e*/
    goto LABEL_23; /*0x100277896*/
  }
  *(_QWORD *)(a2 + 40) = v18; /*0x10027778a*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::ha196feccbd34f465( /*0x1002777a3*/
          a2,
          v17,
          v12,
          v14);
  if ( v13 ) /*0x1002777ab*/
    goto LABEL_26; /*0x1002777ab*/
  ++*(_BYTE *)(a2 + 72); /*0x1002777bd*/
  *(_BYTE *)(a1 + 1) = v16; /*0x1002777c1*/
  v23 = *(_QWORD *)(a2 + 32); /*0x1002777c5*/
  v24 = *(_QWORD *)(a2 + 40); /*0x1002777c9*/
  if ( v24 >= v23 ) /*0x1002777d0*/
  {
LABEL_32:
    v30 = 3; /*0x1002777ff*/
LABEL_33:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::h960e13feab7ca9c0(a2, &v30, v21, v23, v22); /*0x100277807*/
    v28 = 1; /*0x100277817*/
    goto LABEL_47; /*0x100277819*/
  }
  v21 = *(_QWORD *)(a2 + 24); /*0x1002777d2*/
  v25 = v24 + 1; /*0x1002777d6*/
  v23 = -(__int64)v23; /*0x1002777d9*/
  while ( 1 ) /*0x1002777dc*/
  {
    v26 = *(unsigned __int8 *)(v21 + v25 - 1); /*0x1002777dc*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x1002777e7*/
      break; /*0x1002777e7*/
    *(_QWORD *)(a2 + 40) = v25; /*0x1002777ed*/
    v27 = v23 + v25++ + 1; /*0x1002777f1*/
    if ( v27 == 1 ) /*0x1002777fd*/
      goto LABEL_32; /*0x1002777fd*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x10027781e*/
  {
    v30 = 10; /*0x10027789b*/
    goto LABEL_33; /*0x1002778a3*/
  }
  *(_QWORD *)(a2 + 40) = v25; /*0x100277820*/
LABEL_46:
  v28 = 0; /*0x100277860*/
LABEL_47:
  *(_BYTE *)a1 = v28; /*0x100277862*/
  return a1; /*0x100277867*/
}