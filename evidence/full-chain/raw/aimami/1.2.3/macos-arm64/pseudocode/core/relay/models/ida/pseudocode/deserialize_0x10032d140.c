// __ZN13codexmate_lib4core5relay6models1_102_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayIde$GT$11deserialize @ 0x10032d140 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayIde$GT$::deserialize::h826c7df8a58cc7fa(
        __int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  char v11; // cl
  __int64 v13; // rdx
  char v14; // cl
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rsi
  _QWORD v22[5]; // [rsp+8h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 32); /*0x10032d14b*/
  v2 = *(_QWORD *)(a1 + 40); /*0x10032d14f*/
  if ( v2 >= v1 ) /*0x10032d156*/
  {
LABEL_6:
    v22[0] = 5; /*0x10032d18f*/
    return serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a1, v22); /*0x10032d1a0*/
  }
  v3 = *(_QWORD *)(a1 + 24); /*0x10032d158*/
  v4 = v2 + 1; /*0x10032d15c*/
  v5 = -(__int64)v1; /*0x10032d15f*/
  v6 = 0x100002600LL; /*0x10032d162*/
  while ( 1 ) /*0x10032d16c*/
  {
    v7 = *(unsigned __int8 *)(v3 + v4 - 1); /*0x10032d16c*/
    if ( v7 > 0x22 ) /*0x10032d175*/
      goto LABEL_12; /*0x10032d175*/
    if ( !_bittest64(&v6, v7) ) /*0x10032d177*/
      break; /*0x10032d177*/
    *(_QWORD *)(a1 + 40) = v4; /*0x10032d17d*/
    v8 = v5 + v4++ + 1; /*0x10032d181*/
    if ( v8 == 1 ) /*0x10032d18d*/
      goto LABEL_6; /*0x10032d18d*/
  }
  if ( v7 == 34 ) /*0x10032d1a9*/
  {
    v11 = _$LT$serde_json..de..UnitVariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..EnumAccess$GT$::variant_seed::h38d28823320acd9f( /*0x10032d1b0*/
            a1,
            34,
            v3,
            v5);
    result = 0; /*0x10032d1b3*/
    if ( (v11 & 1) != 0 ) /*0x10032d1b8*/
      return v10; /*0x10032d1b8*/
    return result; /*0x10032d1b8*/
  }
LABEL_12:
  if ( (_DWORD)v7 != 123 ) /*0x10032d1c4*/
  {
    v22[0] = 10; /*0x10032d265*/
    return serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a1, v22); /*0x10032d26d*/
  }
  if ( (*(_BYTE *)(a1 + 72))-- == 1 ) /*0x10032d1ca*/
  {
    v22[0] = 24; /*0x10032d272*/
    return serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(a1, v22); /*0x10032d27a*/
  }
  *(_QWORD *)(a1 + 40) = v4; /*0x10032d1d3*/
  v14 = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..EnumAccess$GT$::variant_seed::h5e97823b56eb4ede( /*0x10032d1df*/
          a1,
          v7,
          v3,
          v5);
  result = v13; /*0x10032d1e2*/
  if ( (v14 & 1) != 0 ) /*0x10032d1e8*/
  {
    ++*(_BYTE *)(a1 + 72); /*0x10032d1ea*/
    return result; /*0x10032d1ee*/
  }
  result = _$LT$serde_json..de..VariantAccess$LT$R$GT$$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h89250019c95b13e0( /*0x10032d1f3*/
             v13,
             v7,
             v13);
  ++*(_BYTE *)(a1 + 72); /*0x10032d1f8*/
  if ( !result ) /*0x10032d1ff*/
  {
    v15 = *(_QWORD *)(a1 + 32); /*0x10032d204*/
    v16 = *(_QWORD *)(a1 + 40); /*0x10032d208*/
    if ( v16 >= v15 ) /*0x10032d20f*/
    {
LABEL_22:
      v22[0] = 3; /*0x10032d23e*/
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 24); /*0x10032d211*/
      v18 = v16 + 1; /*0x10032d215*/
      v19 = -(__int64)v15; /*0x10032d218*/
      while ( 1 ) /*0x10032d21b*/
      {
        v20 = *(unsigned __int8 *)(v17 + v18 - 1); /*0x10032d21b*/
        if ( v20 > 0x20 || !_bittest64(&v6, v20) ) /*0x10032d226*/
          break; /*0x10032d226*/
        *(_QWORD *)(a1 + 40) = v18; /*0x10032d22c*/
        v21 = v19 + v18++ + 1; /*0x10032d230*/
        if ( v21 == 1 ) /*0x10032d23c*/
          goto LABEL_22; /*0x10032d23c*/
      }
      if ( (_DWORD)v20 == 125 ) /*0x10032d254*/
      {
        *(_QWORD *)(a1 + 40) = v18; /*0x10032d256*/
        return 0; /*0x10032d25a*/
      }
      v22[0] = 10; /*0x10032d27f*/
    }
    return serde_json::de::Deserializer$LT$R$GT$::error::hbc73637bf6f1ad0b(a1, v22); /*0x10032d24a*/
  }
  return result; /*0x10032d25c*/
}