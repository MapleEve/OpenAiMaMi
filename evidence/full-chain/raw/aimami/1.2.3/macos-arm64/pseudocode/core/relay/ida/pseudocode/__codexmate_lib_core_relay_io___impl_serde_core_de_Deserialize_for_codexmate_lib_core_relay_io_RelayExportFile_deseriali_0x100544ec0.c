// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::relay::io::_::<impl serde_core::de::Deserialize for codexmate_lib::core::relay::io::RelayExportFile>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::hbe64d203ca44ade4 @ 0x100544ec0 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..relay..io.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..io..RelayExportFile$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::hbe64d203ca44ade4(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x72656469766F7270LL | *(unsigned __int8 *)(a2 + 8) ^ 0x73LL )
        goto LABEL_10;
      a1[1] = 4;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x646574726F707865LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7441LL )
      {
        if ( *(_QWORD *)a2 ^ 0x646574726F707865LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7942LL )
          goto LABEL_10;
        a1[1] = 2;
        *a1 = 0;
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
      }
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6556616D65686373LL | *(_QWORD *)(a2 + 5) ^ 0x6E6F697372655661LL )
        goto LABEL_10;
      a1[1] = 0;
      *a1 = 0;
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x416564756C636E69LL | *(_QWORD *)(a2 + 6) ^ 0x7379654B69704165LL )
        goto LABEL_10;
      a1[1] = 3;
      *a1 = 0;
      break;
    default:
LABEL_10:
      a1[1] = 5;
      *a1 = 0;
      break;
  }
  return result;
}
