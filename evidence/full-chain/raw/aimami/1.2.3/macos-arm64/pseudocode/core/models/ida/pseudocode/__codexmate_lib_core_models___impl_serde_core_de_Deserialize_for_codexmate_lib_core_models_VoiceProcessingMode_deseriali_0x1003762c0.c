// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceProcessingMode>::deserialize::__Visitor as serde_core::de::Visitor>::visit_enum::h986f54b93a66eeaa @ 0x1003762c0 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceProcessingMode$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_enum::h986f54b93a66eeaa(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  char v3; // cl
  __int64 v4; // rax
  char v5; // al
  _BYTE v7[8]; // [rsp+0h] [rbp-20h] BYREF
  __int64 v8; // [rsp+8h] [rbp-18h]

  v2 = a2[2];
  _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceProcessingMode$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h8f2e775587c613ff(
    v7,
    *a2,
    a2[1]);
  if ( v7[0] )
    v2 = v8;
  v3 = 4;
  if ( !v7[0] )
    v3 = v7[1];
  switch ( v3 )
  {
    case 0:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_14;
      *(_BYTE *)(a1 + 1) = 0;
      goto LABEL_16;
    case 1:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_14;
      *(_BYTE *)(a1 + 1) = 1;
      goto LABEL_16;
    case 2:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_14;
      *(_BYTE *)(a1 + 1) = 2;
      goto LABEL_16;
    case 3:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
      {
LABEL_14:
        *(_QWORD *)(a1 + 8) = v4;
        v5 = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 1) = 3;
LABEL_16:
        v5 = 0;
      }
LABEL_17:
      *(_BYTE *)a1 = v5;
      return a1;
    case 4:
      *(_QWORD *)(a1 + 8) = v2;
      v5 = 1;
      goto LABEL_17;
  }
}
