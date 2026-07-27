// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceSpeechModel>::deserialize::__Visitor as serde_core::de::Visitor>::visit_enum::h8edf83c86b61b443 @ 0x100374500 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceSpeechModel$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_enum::h8edf83c86b61b443(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  if ( v5 != 11 )
  {
    if ( v5 == 12 )
    {
      if ( !(*(_QWORD *)v4 ^ 0x75466E7579696C61LL | *(unsigned int *)(v4 + 8) ^ 0x7273416ELL) )
      {
        v7 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
        if ( !v7 )
        {
          *(_BYTE *)(a1 + 1) = 1;
LABEL_14:
          v8 = 0;
          goto LABEL_15;
        }
        goto LABEL_12;
      }
    }
    else if ( v5 == 6 && !(*(_DWORD *)v4 ^ 0x6E65706F | *(unsigned __int16 *)(v4 + 4) ^ 0x6961) )
    {
      v7 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
      if ( !v7 )
      {
        *(_BYTE *)(a1 + 1) = 2;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
LABEL_16:
    v7 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
           v4,
           v5,
           &anon_b0ee9adff4519c22b647af231a5a39fa_685,
           3);
    goto LABEL_12;
  }
  if ( *(_QWORD *)v4 ^ 0x657053656C707061LL | *(_QWORD *)(v4 + 3) ^ 0x686365657053656CLL )
    goto LABEL_16;
  v7 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 1) = 0;
    goto LABEL_14;
  }
LABEL_12:
  *(_QWORD *)(a1 + 8) = v7;
  v8 = 1;
LABEL_15:
  *(_BYTE *)a1 = v8;
  return a1;
}
