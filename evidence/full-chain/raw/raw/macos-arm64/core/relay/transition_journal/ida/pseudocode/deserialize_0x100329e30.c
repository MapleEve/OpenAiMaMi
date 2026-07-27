// __ZN13codexmate_lib4core5relay18transition_journal1_122_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..transition_journal..TransitionTarget$GT$11deserialize @ 0x100329e30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::transition_journal::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..transition_journal..TransitionTarget$GT$::deserialize::h9d79a2ba4f0e02ab(
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

  v3 = *(_QWORD *)(a2 + 32); /*0x100329e45*/
  v4 = *(_QWORD *)(a2 + 40); /*0x100329e49*/
  if ( v4 >= v3 ) /*0x100329e50*/
  {
LABEL_6:
    v30 = 5; /*0x100329e89*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x100329e91*/
    *(_BYTE *)a1 = 1; /*0x100329ea1*/
    return a1; /*0x100329ea4*/
  }
  v5 = *(_QWORD *)(a2 + 24); /*0x100329e52*/
  v6 = v4 + 1; /*0x100329e56*/
  v7 = -(__int64)v3; /*0x100329e59*/
  v8 = 0x100002600LL; /*0x100329e5c*/
  while ( 1 ) /*0x100329e66*/
  {
    v9 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x100329e66*/
    if ( v9 > 0x22 ) /*0x100329e6f*/
      goto LABEL_11; /*0x100329e6f*/
    if ( !_bittest64(&v8, v9) ) /*0x100329e71*/
      break; /*0x100329e71*/
    *(_QWORD *)(a2 + 40) = v6; /*0x100329e77*/
    v10 = v7 + v6++ + 1; /*0x100329e7b*/
    if ( v10 == 1 ) /*0x100329e87*/
      goto LABEL_6; /*0x100329e87*/
  }
  if ( v9 == 34 ) /*0x100329ead*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hcb9197603b321c34( /*0x100329eb6*/
      &v30,
      a2,
      v5,
      v7);
    if ( (_BYTE)v30 == 1 ) /*0x100329ebf*/
    {
      *(_QWORD *)(a1 + 8) = v31; /*0x100329ec5*/
      *(_BYTE *)a1 = 1; /*0x100329ecb*/
      return a1; /*0x100329ecd*/
    }
    if ( BYTE1(v30) ) /*0x100329f08*/
      *(_BYTE *)(a1 + 1) = 1; /*0x100329f0e*/
    else
      *(_BYTE *)(a1 + 1) = 0; /*0x100329f98*/
    goto LABEL_37; /*0x100329f12*/
  }
LABEL_11:
  if ( (_DWORD)v9 != 123 ) /*0x100329ed5*/
  {
    v30 = 10; /*0x10032a019*/
    goto LABEL_7; /*0x10032a021*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x100329edb*/
  {
    v30 = 24; /*0x10032a026*/
    goto LABEL_7; /*0x10032a02e*/
  }
  *(_QWORD *)(a2 + 40) = v6; /*0x100329ee5*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::hcb9197603b321c34( /*0x100329ef0*/
    &v30,
    a2,
    v5,
    v7);
  if ( (_BYTE)v30 == 1 ) /*0x100329ef9*/
  {
    v12 = v31; /*0x100329efb*/
LABEL_26:
    *(_QWORD *)(a1 + 8) = v12; /*0x100329f8b*/
    *(_BYTE *)a1 = 1; /*0x100329f8f*/
    ++*(_BYTE *)(a2 + 72); /*0x100329f92*/
    return a1; /*0x100329f96*/
  }
  v13 = *(_QWORD *)(a2 + 32); /*0x100329f17*/
  v14 = *(_QWORD *)(a2 + 40); /*0x100329f1b*/
  if ( v14 >= v13 ) /*0x100329f22*/
  {
LABEL_22:
    v30 = 3; /*0x100329f5a*/
LABEL_23:
    v12 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v30); /*0x100329f62*/
    goto LABEL_26; /*0x100329f6e*/
  }
  v15 = BYTE1(v30); /*0x100329f24*/
  v16 = *(_QWORD *)(a2 + 24); /*0x100329f29*/
  v17 = v14 + 1; /*0x100329f2d*/
  v18 = -(__int64)v13; /*0x100329f30*/
  while ( 1 ) /*0x100329f33*/
  {
    v19 = *(unsigned __int8 *)(v16 + v17 - 1); /*0x100329f33*/
    if ( v19 > 0x3A ) /*0x100329f3c*/
      goto LABEL_42; /*0x100329f3c*/
    if ( !_bittest64(&v8, v19) ) /*0x100329f42*/
      break; /*0x100329f42*/
    *(_QWORD *)(a2 + 40) = v17; /*0x100329f48*/
    v20 = v18 + v17++ + 1; /*0x100329f4c*/
    if ( v20 == 1 ) /*0x100329f58*/
      goto LABEL_22; /*0x100329f58*/
  }
  if ( v19 != 58 ) /*0x100329f74*/
  {
LABEL_42:
    v30 = 6; /*0x10032a033*/
    goto LABEL_23; /*0x10032a03b*/
  }
  *(_QWORD *)(a2 + 40) = v17; /*0x100329f7a*/
  v12 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x100329f81*/
          a2,
          58,
          v16);
  if ( v12 ) /*0x100329f89*/
    goto LABEL_26; /*0x100329f89*/
  ++*(_BYTE *)(a2 + 72); /*0x100329f9e*/
  *(_BYTE *)(a1 + 1) = v15; /*0x100329fa2*/
  v21 = *(_QWORD *)(a2 + 32); /*0x100329fa6*/
  v22 = *(_QWORD *)(a2 + 40); /*0x100329faa*/
  if ( v22 >= v21 ) /*0x100329fb1*/
  {
LABEL_33:
    v30 = 3; /*0x100329fe0*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v30); /*0x100329fe8*/
    v28 = 1; /*0x100329ff8*/
    goto LABEL_38; /*0x100329ffa*/
  }
  v23 = *(_QWORD *)(a2 + 24); /*0x100329fb3*/
  v24 = v22 + 1; /*0x100329fb7*/
  v25 = -(__int64)v21; /*0x100329fba*/
  while ( 1 ) /*0x100329fbd*/
  {
    v26 = *(unsigned __int8 *)(v23 + v24 - 1); /*0x100329fbd*/
    if ( v26 > 0x20 || !_bittest64(&v8, v26) ) /*0x100329fc8*/
      break; /*0x100329fc8*/
    *(_QWORD *)(a2 + 40) = v24; /*0x100329fce*/
    v27 = v25 + v24++ + 1; /*0x100329fd2*/
    if ( v27 == 1 ) /*0x100329fde*/
      goto LABEL_33; /*0x100329fde*/
  }
  if ( (_DWORD)v26 != 125 ) /*0x100329fff*/
  {
    v30 = 10; /*0x10032a040*/
    goto LABEL_34; /*0x10032a048*/
  }
  *(_QWORD *)(a2 + 40) = v24; /*0x10032a001*/
LABEL_37:
  v28 = 0; /*0x10032a005*/
LABEL_38:
  *(_BYTE *)a1 = v28; /*0x10032a007*/
  return a1; /*0x10032a00c*/
}