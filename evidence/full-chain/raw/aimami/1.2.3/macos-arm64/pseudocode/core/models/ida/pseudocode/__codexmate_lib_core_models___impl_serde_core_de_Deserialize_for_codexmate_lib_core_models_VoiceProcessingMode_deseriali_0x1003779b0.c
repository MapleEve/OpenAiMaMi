// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceProcessingMode>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h8f2e775587c613ff @ 0x1003779b0 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceProcessingMode$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h8f2e775587c613ff(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 != 1802723700 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x69766572 | *(unsigned __int16 *)(a2 + 4) ^ 0x7765 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 2;
      *(_BYTE *)a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x6D6D7573 | *(_DWORD *)(a2 + 3) ^ 0x7972616D )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 3;
      *(_BYTE *)a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x6F69746174636964LL | *(unsigned __int8 *)(a2 + 8) ^ 0x6ELL )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      break;
    default:
LABEL_10:
      v4 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             a2,
             a3,
             &anon_b0ee9adff4519c22b647af231a5a39fa_768,
             4);
      *(_QWORD *)(a1 + 8) = v4;
      *(_BYTE *)a1 = 1;
      result = a1;
      break;
  }
  return result;
}
