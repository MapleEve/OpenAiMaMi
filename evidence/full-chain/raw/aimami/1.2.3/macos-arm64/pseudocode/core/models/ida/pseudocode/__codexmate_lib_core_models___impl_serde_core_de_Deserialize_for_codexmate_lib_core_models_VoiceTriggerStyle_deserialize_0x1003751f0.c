// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceTriggerStyle>::deserialize::__Visitor as serde_core::de::Visitor>::visit_enum::h73d00669998d3d7f @ 0x1003751f0 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceTriggerStyle$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_enum::h73d00669998d3d7f(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  char v9; // al

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  if ( v5 == 4 )
  {
    if ( *(_DWORD *)v4 == 1684828008 )
    {
      v7 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
      if ( !v7 )
      {
        v8 = 0;
LABEL_10:
        *(_BYTE *)(a1 + 1) = v8;
        v9 = 0;
        goto LABEL_11;
      }
      goto LABEL_8;
    }
LABEL_12:
    v7 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
           v4,
           v5,
           &anon_b0ee9adff4519c22b647af231a5a39fa_729,
           2);
    goto LABEL_8;
  }
  if ( v5 != 6 || *(_DWORD *)v4 ^ 0x67676F74 | *(unsigned __int16 *)(v4 + 4) ^ 0x656C )
    goto LABEL_12;
  v7 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v6);
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_10;
  }
LABEL_8:
  *(_QWORD *)(a1 + 8) = v7;
  v9 = 1;
LABEL_11:
  *(_BYTE *)a1 = v9;
  return a1;
}
