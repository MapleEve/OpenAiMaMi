// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::PlanType>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::he59ea09f3ba391da @ 0x100373680 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..PlanType$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::he59ea09f3ba391da(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = a1;
  switch ( a3 )
  {
    case 3LL:
      if ( *(_WORD *)a2 ^ 0x6465 | *(unsigned __int8 *)(a2 + 2) ^ 0x75 )
        goto LABEL_20;
      *(_BYTE *)(a1 + 1) = 7;
      *(_BYTE *)a1 = 0;
      break;
    case 4LL:
      switch ( *(_DWORD *)a2 )
      {
        case 0x65657266:
          *(_BYTE *)(a1 + 1) = 0;
          *(_BYTE *)a1 = 0;
          break;
        case 0x73756C70:
          *(_BYTE *)(a1 + 1) = 1;
          *(_BYTE *)a1 = 0;
          break;
        case 0x6D616574:
          *(_BYTE *)(a1 + 1) = 4;
          *(_BYTE *)a1 = 0;
          break;
        default:
          goto LABEL_20;
      }
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x356F7270 | *(unsigned __int8 *)(a2 + 4) ^ 0x78 )
        goto LABEL_20;
      *(_BYTE *)(a1 + 1) = 2;
      *(_BYTE *)a1 = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x326F7270 | *(unsigned __int16 *)(a2 + 4) ^ 0x7830 )
        goto LABEL_20;
      *(_BYTE *)(a1 + 1) = 3;
      *(_BYTE *)a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x6E6B6E75 | *(_DWORD *)(a2 + 3) ^ 0x6E776F6E )
        goto LABEL_20;
      *(_BYTE *)(a1 + 1) = 8;
      *(_BYTE *)a1 = 0;
      break;
    case 8LL:
      if ( *(_QWORD *)a2 != 0x7373656E69737562LL )
        goto LABEL_20;
      *(_BYTE *)(a1 + 1) = 5;
      *(_BYTE *)a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x6972707265746E65LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6573LL )
        goto LABEL_20;
      *(_BYTE *)(a1 + 1) = 6;
      *(_BYTE *)a1 = 0;
      break;
    default:
LABEL_20:
      *(_QWORD *)(a1 + 8) = serde_core::de::Error::unknown_variant::haeda023a80886faa(
                              a2,
                              a3,
                              &anon_b0ee9adff4519c22b647af231a5a39fa_973,
                              9);
      *(_BYTE *)a1 = 1;
      result = a1;
      break;
  }
  return result;
}
