// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::models::RelayBrand>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h00b795074f874586 @ 0x100379cc0 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..relay..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h00b795074f874586(
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
      if ( *(_DWORD *)a2 != 1768778091 )
        goto LABEL_16;
      *(_BYTE *)(a1 + 1) = 2;
      *(_BYTE *)a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x7069687A | *(unsigned __int8 *)(a2 + 4) ^ 0x75 )
        goto LABEL_16;
      *(_BYTE *)(a1 + 1) = 5;
      *(_BYTE *)a1 = 0;
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x6F616978 | *(unsigned __int16 *)(a2 + 4) ^ 0x696D )
        goto LABEL_16;
      *(_BYTE *)(a1 + 1) = 4;
      *(_BYTE *)a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x656E6567 | *(_DWORD *)(a2 + 3) ^ 0x63697265 )
      {
        if ( *(_DWORD *)a2 ^ 0x696E696D | *(_DWORD *)(a2 + 3) ^ 0x78616D69 )
          goto LABEL_16;
        *(_BYTE *)(a1 + 1) = 3;
        *(_BYTE *)a1 = 0;
      }
      else
      {
        *(_BYTE *)(a1 + 1) = 0;
        *(_BYTE *)a1 = 0;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)a2 != 0x6B65657370656564LL )
        goto LABEL_16;
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x74756F726E65706FLL | *(unsigned __int16 *)(a2 + 8) ^ 0x7265LL )
        goto LABEL_16;
      *(_BYTE *)(a1 + 1) = 6;
      *(_BYTE *)a1 = 0;
      break;
    default:
LABEL_16:
      v4 = serde_core::de::Error::unknown_variant::haeda023a80886faa(
             a2,
             a3,
             &anon_b0ee9adff4519c22b647af231a5a39fa_403,
             7);
      *(_QWORD *)(a1 + 8) = v4;
      *(_BYTE *)a1 = 1;
      result = a1;
      break;
  }
  return result;
}
