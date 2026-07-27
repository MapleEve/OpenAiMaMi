// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoicePermissionState>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h0dd49f133d65ec70 @ 0x1003784b0 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoicePermissionState$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h0dd49f133d65ec70(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = a1;
  switch ( a3 )
  {
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x696E6564 | *(unsigned __int16 *)(a2 + 4) ^ 0x6465 )
        goto LABEL_12;
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x7A69726F68747561LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6465LL )
      {
        if ( *(_QWORD *)a2 ^ 0x7463697274736572LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6465LL )
          goto LABEL_12;
        *(_BYTE *)(a1 + 1) = 2;
        *(_BYTE *)a1 = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 1) = 0;
        *(_BYTE *)a1 = 0;
      }
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x726F707075736E75LL | *(_QWORD *)(a2 + 3) ^ 0x646574726F707075LL )
        goto LABEL_12;
      *(_BYTE *)(a1 + 1) = 4;
      *(_BYTE *)a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x7265746544746F6ELL | *(_QWORD *)(a2 + 5) ^ 0x64656E696D726574LL )
        goto LABEL_12;
      *(_BYTE *)(a1 + 1) = 3;
      *(_BYTE *)a1 = 0;
      break;
    default:
LABEL_12:
      v4 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             a2,
             a3,
             &anon_b0ee9adff4519c22b647af231a5a39fa_817,
             5);
      *(_QWORD *)(a1 + 8) = v4;
      *(_BYTE *)a1 = 1;
      result = a1;
      break;
  }
  return result;
}
