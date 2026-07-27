// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::McpTransport>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h00d7fe1323c2a0d6 @ 0x100374f30 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..McpTransport$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h00d7fe1323c2a0d6(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = a1;
  switch ( a3 )
  {
    case 3LL:
      if ( *(_WORD *)a2 ^ 0x7373 | *(unsigned __int8 *)(a2 + 2) ^ 0x65 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 2;
      *(_BYTE *)a1 = 0;
      break;
    case 4LL:
      if ( *(_DWORD *)a2 != 1886680168 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x69647473 | *(unsigned __int8 *)(a2 + 4) ^ 0x6F )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x6E6B6E75 | *(_DWORD *)(a2 + 3) ^ 0x6E776F6E )
        goto LABEL_10;
      *(_BYTE *)(a1 + 1) = 3;
      *(_BYTE *)a1 = 0;
      break;
    default:
LABEL_10:
      *(_QWORD *)(a1 + 8) = serde_core::de::Error::unknown_variant::haeda023a80886faa(
                              a2,
                              a3,
                              &anon_b0ee9adff4519c22b647af231a5a39fa_1012,
                              4);
      *(_BYTE *)a1 = 1;
      result = a1;
      break;
  }
  return result;
}
