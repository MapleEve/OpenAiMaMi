// __ZN13codexmate_lib4core6models1_103_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceSpeechModel$GT$11deserialize @ 0x10033bbe0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceSpeechModel$GT$::deserialize::hf0ba19fda34c4d44(
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

  v4 = *(_QWORD *)(a2 + 32); /*0x10033bbf5*/
  v5 = *(_QWORD *)(a2 + 40); /*0x10033bbf9*/
  if ( v5 >= v4 ) /*0x10033bc00*/
  {
LABEL_6:
    v31 = 5; /*0x10033bc39*/
LABEL_7:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x10033bc41*/
    *(_BYTE *)a1 = 1; /*0x10033bc51*/
    return a1; /*0x10033bc54*/
  }
  v6 = *(_QWORD *)(a2 + 24); /*0x10033bc02*/
  v7 = v5 + 1; /*0x10033bc06*/
  v8 = -(__int64)v4; /*0x10033bc09*/
  v9 = 0x100002600LL; /*0x10033bc0c*/
  while ( 1 ) /*0x10033bc16*/
  {
    v10 = *(unsigned __int8 *)(v6 + v7 - 1); /*0x10033bc16*/
    if ( v10 > 0x22 ) /*0x10033bc1f*/
      goto LABEL_11; /*0x10033bc1f*/
    if ( !_bittest64(&v9, v10) ) /*0x10033bc21*/
      break; /*0x10033bc21*/
    *(_QWORD *)(a2 + 40) = v7; /*0x10033bc27*/
    v11 = v8 + v7++ + 1; /*0x10033bc2b*/
    if ( v11 == 1 ) /*0x10033bc37*/
      goto LABEL_6; /*0x10033bc37*/
  }
  if ( v10 == 34 ) /*0x10033bc5d*/
  {
    _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7587d13b68f49da5( /*0x10033bc66*/
      &v31,
      a2,
      v6,
      v8);
    if ( (_BYTE)v31 == 1 ) /*0x10033bc6f*/
    {
      *(_QWORD *)(a1 + 8) = v32; /*0x10033bc75*/
      *(_BYTE *)a1 = 1; /*0x10033bc7b*/
      return a1; /*0x10033bc7d*/
    }
    if ( BYTE1(v31) ) /*0x10033bcba*/
    {
      if ( BYTE1(v31) == 1 ) /*0x10033bcc3*/
        *(_BYTE *)(a1 + 1) = 1; /*0x10033bcc9*/
      else
        *(_BYTE *)(a1 + 1) = 2; /*0x10033bdc3*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0; /*0x10033bdbd*/
    }
    goto LABEL_39; /*0x10033bccd*/
  }
LABEL_11:
  if ( (_DWORD)v10 != 123 ) /*0x10033bc85*/
  {
    v31 = 10; /*0x10033bde6*/
    goto LABEL_7; /*0x10033bdee*/
  }
  if ( (*(_BYTE *)(a2 + 72))-- == 1 ) /*0x10033bc8b*/
  {
    v31 = 24; /*0x10033bdf3*/
    goto LABEL_7; /*0x10033bdfb*/
  }
  *(_QWORD *)(a2 + 40) = v7; /*0x10033bc95*/
  _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7587d13b68f49da5( /*0x10033bca0*/
    &v31,
    a2,
    v6,
    v8);
  if ( (_BYTE)v31 == 1 ) /*0x10033bca9*/
  {
    v13 = v32; /*0x10033bcab*/
LABEL_27:
    *(_QWORD *)(a1 + 8) = v13; /*0x10033bd52*/
    *(_BYTE *)a1 = 1; /*0x10033bd56*/
    ++*(_BYTE *)(a2 + 72); /*0x10033bd59*/
    return a1; /*0x10033bd5d*/
  }
  v14 = *(_QWORD *)(a2 + 32); /*0x10033bcd2*/
  v15 = *(_QWORD *)(a2 + 40); /*0x10033bcd6*/
  if ( v15 >= v14 ) /*0x10033bcdd*/
  {
LABEL_23:
    v31 = 3; /*0x10033bd19*/
LABEL_24:
    v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a2, &v31); /*0x10033bd21*/
    goto LABEL_27; /*0x10033bd2d*/
  }
  v16 = BYTE1(v31); /*0x10033bcdf*/
  v17 = *(_QWORD *)(a2 + 24); /*0x10033bce8*/
  v18 = v15 + 1; /*0x10033bcec*/
  v19 = -(__int64)v14; /*0x10033bcef*/
  while ( 1 ) /*0x10033bcf2*/
  {
    v20 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x10033bcf2*/
    if ( v20 > 0x3A ) /*0x10033bcfb*/
      goto LABEL_44; /*0x10033bcfb*/
    if ( !_bittest64(&v9, v20) ) /*0x10033bd01*/
      break; /*0x10033bd01*/
    *(_QWORD *)(a2 + 40) = v18; /*0x10033bd07*/
    v21 = v19 + v18++ + 1; /*0x10033bd0b*/
    if ( v21 == 1 ) /*0x10033bd17*/
      goto LABEL_23; /*0x10033bd17*/
  }
  if ( v20 != 58 ) /*0x10033bd33*/
  {
LABEL_44:
    v31 = 6; /*0x10033be00*/
    goto LABEL_24; /*0x10033be08*/
  }
  *(_QWORD *)(a2 + 40) = v18; /*0x10033bd39*/
  v13 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10033bd48*/
          a2,
          v17,
          v19);
  if ( v13 ) /*0x10033bd50*/
    goto LABEL_27; /*0x10033bd50*/
  ++*(_BYTE *)(a2 + 72); /*0x10033bd5f*/
  *(_BYTE *)(a1 + 1) = v16; /*0x10033bd63*/
  v22 = *(_QWORD *)(a2 + 32); /*0x10033bd67*/
  v23 = *(_QWORD *)(a2 + 40); /*0x10033bd6b*/
  if ( v23 >= v22 ) /*0x10033bd72*/
  {
LABEL_33:
    v31 = 3; /*0x10033bda1*/
LABEL_34:
    *(_QWORD *)(a1 + 8) = serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a2, &v31); /*0x10033bda9*/
    v29 = 1; /*0x10033bdb9*/
    goto LABEL_40; /*0x10033bdbb*/
  }
  v24 = *(_QWORD *)(a2 + 24); /*0x10033bd74*/
  v25 = v23 + 1; /*0x10033bd78*/
  v26 = -(__int64)v22; /*0x10033bd7b*/
  while ( 1 ) /*0x10033bd7e*/
  {
    v27 = *(unsigned __int8 *)(v24 + v25 - 1); /*0x10033bd7e*/
    if ( v27 > 0x20 || !_bittest64(&v9, v27) ) /*0x10033bd89*/
      break; /*0x10033bd89*/
    *(_QWORD *)(a2 + 40) = v25; /*0x10033bd8f*/
    v28 = v26 + v25++ + 1; /*0x10033bd93*/
    if ( v28 == 1 ) /*0x10033bd9f*/
      goto LABEL_33; /*0x10033bd9f*/
  }
  if ( (_DWORD)v27 != 125 ) /*0x10033bdcc*/
  {
    v31 = 10; /*0x10033be0d*/
    goto LABEL_34; /*0x10033be15*/
  }
  *(_QWORD *)(a2 + 40) = v25; /*0x10033bdce*/
LABEL_39:
  v29 = 0; /*0x10033bdd2*/
LABEL_40:
  *(_BYTE *)a1 = v29; /*0x10033bdd4*/
  return a1; /*0x10033bdd9*/
}