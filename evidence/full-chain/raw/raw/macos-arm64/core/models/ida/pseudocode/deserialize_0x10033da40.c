// __ZN13codexmate_lib4core6models1_105_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..SubscriptionStatus$GT$11deserialize @ 0x10033da40
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..SubscriptionStatus$GT$::deserialize::hcde19702cb082973(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x10033da55*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10033da59*/
  if ( v5 >= v4 ) /*0x10033da60*/
  {
LABEL_6:
    v32 = 5; /*0x10033da99*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033daa1*/
    *(_BYTE *)a1 = 1; /*0x10033dab1*/
    return a1; /*0x10033dab4*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10033da62*/
  v7 = v5 + 1; /*0x10033da66*/
  v8 = -(__int64)v4; /*0x10033da69*/
  v9 = 0x100002600LL; /*0x10033da6c*/
  while ( 1 ) /*0x10033da76*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10033da76*/
    if ( v10 > 0x22 ) /*0x10033da7f*/
      goto LABEL_11; /*0x10033da7f*/
    if ( !_bittest64(&v9, v10) ) /*0x10033da81*/
      break; /*0x10033da81*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10033da87*/
    v11 = v8 + v7++ + 1; /*0x10033da8b*/
    if ( v11 == 1 ) /*0x10033da97*/
      goto LABEL_6; /*0x10033da97*/
  }
  if ( v10 == 34 ) /*0x10033dabd*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8e1c454244c0ee8a( /*0x10033dac6*/
      &v32,
      a2,
      v6,
      v8);
    if ( (_BYTE)v32 == 1 ) /*0x10033dacf*/
    {
      *(_QWORD *)(a1 + 8) = v33; /*0x10033dad5*/
      *(_BYTE *)a1 = 1; /*0x10033dadb*/
      return a1; /*0x10033dadd*/
    }
    switch ( BYTE1(v32) ) /*0x10033db28*/
    {
      case 0: /*0x10033db28*/
        *(_BYTE *)(a1 + 1) = 0; /*0x10033db2a*/
        break; /*0x10033db2e*/
      case 1: /*0x10033db28*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10033dc3f*/
        break; /*0x10033dc3f*/
      case 2: /*0x10033db28*/
        *(_BYTE *)(a1 + 1) = 2; /*0x10033dc33*/
        break; /*0x10033dc37*/
      case 3: /*0x10033db28*/
        *(_BYTE *)(a1 + 1) = 3; /*0x10033dc39*/
        break; /*0x10033dc3d*/
    }
    goto LABEL_39; /*0x10033dc3d*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10033dae5*/
  {
    v32 = 10; /*0x10033dc57*/
    goto LABEL_7; /*0x10033dc5f*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033daeb*/
  {
    v32 = 24; /*0x10033dc64*/
    goto LABEL_7; /*0x10033dc6c*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10033daf5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8e1c454244c0ee8a( /*0x10033db00*/
    &v32,
    a2,
    v6,
    v8);
  if ( (_BYTE)v32 == 1 ) /*0x10033db09*/
  {
    v13 = v33; /*0x10033db0b*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v13; /*0x10033dbbd*/
    *(_BYTE *)a1 = 1; /*0x10033dbc1*/
    ++*(_BYTE *)(a2 + 72); /*0x10033dbc4*/
    return a1; /*0x10033dbc8*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10033db33*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10033db37*/
  if ( v15 >= v14 ) /*0x10033db3e*/
  {
LABEL_22:
    v32 = 3; /*0x10033db7a*/
LABEL_23:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v32); /*0x10033db82*/
    goto LABEL_26; /*0x10033db8e*/
  }
  v16 = BYTE1(v32); /*0x10033db40*/
  v17 = BYTE1(v32); /*0x10033db45*/
  v18 = *(_QWORD *)(a2 + 24); /*0x10033db49*/
  v19 = v15 + 1; /*0x10033db4d*/
  v20 = -(__int64)v14; /*0x10033db50*/
  while ( 1 ) /*0x10033db53*/
  {
    v21 = *(unsigned __int8 *)(v18 + v19 - 1); /*0x10033db53*/
    if ( v21 > 0x3A ) /*0x10033db5c*/
      goto LABEL_44; /*0x10033db5c*/
    if ( !_bittest64(&v9, v21) ) /*0x10033db62*/
      break; /*0x10033db62*/
    *(_QWORD *)(a2 + 40) = v19; /*0x10033db68*/
    v22 = v20 + v19++ + 1; /*0x10033db6c*/
    if ( v22 == 1 ) /*0x10033db78*/
      goto LABEL_22; /*0x10033db78*/
  }
  if ( v21 != 58 ) /*0x10033db94*/
  {
LABEL_44:
    v32 = 6; /*0x10033dc71*/
    goto LABEL_23; /*0x10033dc79*/
  }
  *(_QWORD *)(a2 + 40) = v19; /*0x10033db9a*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033dbb3*/
          a2,
          v18,
          v17);
  if ( v13 ) /*0x10033dbbb*/
    goto LABEL_26; /*0x10033dbbb*/
  ++*(_BYTE *)(a2 + 72); /*0x10033dbca*/
  *(_BYTE *)(a1 + 1) = v16; /*0x10033dbce*/
  v23 = *(_QWORD *)(a2 + 32); /*0x10033dbd2*/
  v24 = *(_QWORD *)(a2 + 40); /*0x10033dbd6*/
  if ( v24 >= v23 ) /*0x10033dbdd*/
  {
LABEL_32:
    v32 = 3; /*0x10033dc0c*/
LABEL_33:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v32); /*0x10033dc14*/
    v30 = 1; /*0x10033dc24*/
    goto LABEL_40; /*0x10033dc26*/
  }
  v25 = *(_QWORD *)(a2 + 24); /*0x10033dbdf*/
  v26 = v24 + 1; /*0x10033dbe3*/
  v27 = -(__int64)v23; /*0x10033dbe6*/
  while ( 1 ) /*0x10033dbe9*/
  {
    v28 = *(unsigned __int8 *)(v25 + v26 - 1); /*0x10033dbe9*/
    if ( v28 > 0x20 || !_bittest64(&v9, v28) ) /*0x10033dbf4*/
      break; /*0x10033dbf4*/
    *(_QWORD *)(a2 + 40) = v26; /*0x10033dbfa*/
    v29 = v27 + v26++ + 1; /*0x10033dbfe*/
    if ( v29 == 1 ) /*0x10033dc0a*/
      goto LABEL_32; /*0x10033dc0a*/
  }
  if ( (_DWORD)v28 != 125 ) /*0x10033dc2b*/
  {
    v32 = 10; /*0x10033dc7e*/
    goto LABEL_33; /*0x10033dc86*/
  }
  *(_QWORD *)(a2 + 40) = v26; /*0x10033dc2d*/
LABEL_39:
  v30 = 0; /*0x10033dc43*/
LABEL_40:
  *(_BYTE *)a1 = v30; /*0x10033dc45*/
  return a1; /*0x10033dc4a*/
}