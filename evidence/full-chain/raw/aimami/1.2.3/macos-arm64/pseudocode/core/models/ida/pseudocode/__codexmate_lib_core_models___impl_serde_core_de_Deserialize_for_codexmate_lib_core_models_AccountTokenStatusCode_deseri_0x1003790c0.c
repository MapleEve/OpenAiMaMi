// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AccountTokenStatusCode>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h3fe71b4d2990f40c @ 0x1003790c0 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatusCode$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h3fe71b4d2990f40c(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = a1;
  switch ( a3 )
  {
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x73657266 | *(unsigned __int8 *)(a2 + 4) ^ 0x68 )
        goto LABEL_12;
      *(_BYTE *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x6568736572666572LL | *(unsigned __int8 *)(a2 + 8) ^ 0x64LL )
        goto LABEL_12;
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x5268736572666572LL | *(_QWORD *)(a2 + 5) ^ 0x6465737565526873LL )
      {
        if ( *(_QWORD *)a2 ^ 0x4668736572666572LL | *(_QWORD *)(a2 + 5) ^ 0x64656C6961466873LL )
          goto LABEL_12;
        *(_BYTE *)(a1 + 1) = 4;
        *(_BYTE *)a1 = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 1) = 3;
        *(_BYTE *)a1 = 0;
      }
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x7365726665526F6ELL | *(_QWORD *)(a2 + 6) ^ 0x6E656B6F54687365LL )
        goto LABEL_12;
      *(_BYTE *)(a1 + 1) = 2;
      *(_BYTE *)a1 = 0;
      break;
    default:
LABEL_12:
      v4 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             a2,
             a3,
             &anon_b0ee9adff4519c22b647af231a5a39fa_873,
             5);
      *(_QWORD *)(a1 + 8) = v4;
      *(_BYTE *)a1 = 1;
      result = a1;
      break;
  }
  return result;
}
