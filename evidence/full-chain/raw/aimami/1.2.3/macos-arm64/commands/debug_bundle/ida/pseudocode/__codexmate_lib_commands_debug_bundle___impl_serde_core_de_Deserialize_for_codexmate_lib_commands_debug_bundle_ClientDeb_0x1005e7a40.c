// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::commands::debug_bundle::_::<impl serde_core::de::Deserialize for codexmate_lib::commands::debug_bundle::ClientDebugLogEvent>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h23d26237519e0acd @ 0x1005e7a40 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..commands..debug_bundle.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..commands..debug_bundle..ClientDebugLogEvent$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h23d26237519e0acd(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax

  result = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 != 1717924456 )
        goto LABEL_12;
      a1[1] = 5;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x6576656C | *(unsigned __int8 *)(a2 + 4) ^ 0x6C )
      {
        if ( *(_DWORD *)a2 ^ 0x63617473 | *(unsigned __int8 *)(a2 + 4) ^ 0x6B )
          goto LABEL_12;
        a1[1] = 3;
        *a1 = 0;
      }
      else
      {
        a1[1] = 0;
        *a1 = 0;
      }
      break;
    case 6LL:
      if ( *(_DWORD *)a2 ^ 0x72756F73 | *(unsigned __int16 *)(a2 + 4) ^ 0x6563 )
        goto LABEL_12;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x7373656D | *(_DWORD *)(a2 + 3) ^ 0x65676173 )
        goto LABEL_12;
      a1[1] = 2;
      *a1 = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x614C776F646E6977LL | *(_QWORD *)(a2 + 3) ^ 0x6C6562614C776F64LL )
        goto LABEL_12;
      a1[1] = 4;
      *a1 = 0;
      break;
    default:
LABEL_12:
      a1[1] = 6;
      *a1 = 0;
      break;
  }
  return result;
}
