// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::models::RelayWireApi>::deserialize::__Visitor as serde_core::de::Visitor>::visit_enum::h9798227327825285 @ 0x100378a70 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..relay..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_enum::h9798227327825285(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  char v9; // al

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  if ( v5 != 11 )
  {
    if ( v5 == 16 )
    {
      v7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1015E3810);
      if ( _mm_testz_si128(v7, v7) )
      {
        v8 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
        if ( !v8 )
        {
          *(_BYTE *)(a1 + 1) = 1;
LABEL_14:
          v9 = 0;
          goto LABEL_15;
        }
        goto LABEL_12;
      }
    }
    else if ( v5 == 9 && !(*(_QWORD *)v4 ^ 0x69706F7268746E61LL | *(unsigned __int8 *)(v4 + 8) ^ 0x63LL) )
    {
      v8 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
      if ( !v8 )
      {
        *(_BYTE *)(a1 + 1) = 2;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
LABEL_16:
    v8 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
           v4,
           v5,
           &anon_b0ee9adff4519c22b647af231a5a39fa_409,
           3);
    goto LABEL_12;
  }
  if ( *(_QWORD *)v4 ^ 0x632D69616E65706FLL | *(_QWORD *)(v4 + 3) ^ 0x746168632D69616ELL )
    goto LABEL_16;
  v8 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
  if ( !v8 )
  {
    *(_BYTE *)(a1 + 1) = 0;
    goto LABEL_14;
  }
LABEL_12:
  *(_QWORD *)(a1 + 8) = v8;
  v9 = 1;
LABEL_15:
  *(_BYTE *)a1 = v9;
  return a1;
}
