// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceTemplateKind>::deserialize::__Visitor as serde_core::de::Visitor>::visit_enum::h86af36ed1a6019e0 @ 0x1003750f0 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_enum::h86af36ed1a6019e0(
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
  _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceTemplateKind$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h7345ecbcc21fb766(
    v7,
    *a2,
    a2[1]);
  if ( v7[0] )
    v2 = v8;
  v3 = 6;
  if ( !v7[0] )
    v3 = v7[1];
  switch ( v3 )
  {
    case 0:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_17;
      *(_BYTE *)(a1 + 1) = 0;
      goto LABEL_20;
    case 1:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_17;
      *(_BYTE *)(a1 + 1) = 1;
      goto LABEL_20;
    case 2:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_17;
      *(_BYTE *)(a1 + 1) = 2;
      goto LABEL_20;
    case 3:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_17;
      *(_BYTE *)(a1 + 1) = 3;
      goto LABEL_20;
    case 4:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
        goto LABEL_17;
      *(_BYTE *)(a1 + 1) = 4;
      goto LABEL_20;
    case 5:
      v4 = _$LT$serde_json..value..de..VariantRefDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::h2976616441caa502(v2);
      if ( v4 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 8) = v4;
        v5 = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 1) = 5;
LABEL_20:
        v5 = 0;
      }
LABEL_21:
      *(_BYTE *)a1 = v5;
      return a1;
    case 6:
      *(_QWORD *)(a1 + 8) = v2;
      v5 = 1;
      goto LABEL_21;
  }
}
