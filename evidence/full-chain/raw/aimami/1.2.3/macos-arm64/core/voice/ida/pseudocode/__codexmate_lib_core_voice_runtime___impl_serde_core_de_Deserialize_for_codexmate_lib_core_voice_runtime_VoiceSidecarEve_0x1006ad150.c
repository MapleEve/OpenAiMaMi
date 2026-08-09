// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::runtime::VoiceSidecarEvent>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::he5f83cbe137d0426 @ 0x1006ad150 | full-body via py_exec_file(ida_hexrays.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..voice..runtime.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceSidecarEvent$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::he5f83cbe137d0426(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = a1;
  if ( a3 == 5 )
  {
    if ( !(*(_DWORD *)a2 ^ 0x74617473 | *(unsigned __int8 *)(a2 + 4) ^ 0x65) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      return result;
    }
    if ( !(*(_DWORD *)a2 ^ 0x6F727265 | *(unsigned __int8 *)(a2 + 4) ^ 0x72) )
    {
      *(_BYTE *)(a1 + 1) = 3;
      *(_BYTE *)a1 = 0;
      return result;
    }
    if ( !(*(_DWORD *)a2 ^ 0x64616572 | *(unsigned __int8 *)(a2 + 4) ^ 0x79) )
    {
      *(_BYTE *)(a1 + 1) = 4;
      *(_BYTE *)a1 = 0;
      return result;
    }
  }
  else if ( a3 == 10 )
  {
    if ( !(*(_QWORD *)a2 ^ 0x697263736E617274LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7470LL) )
    {
      *(_BYTE *)(a1 + 1) = 2;
      *(_BYTE *)a1 = 0;
      return result;
    }
    if ( !(*(_QWORD *)a2 ^ 0x76654C6F69647561LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6C65LL) )
    {
      *(_BYTE *)(a1 + 1) = 5;
      *(_BYTE *)a1 = 0;
      return result;
    }
  }
  else if ( a3 == 11 && !(*(_QWORD *)a2 ^ 0x697373696D726570LL | *(_QWORD *)(a2 + 3) ^ 0x736E6F697373696DLL) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  *(_QWORD *)(a1 + 8) = serde_core::de::Error::unknown_variant::haeda023a80886faa(
                          a2,
                          a3,
                          &anon_4776471024d1e9bb78f2861cb2b51e1e_981,
                          6);
  *(_BYTE *)a1 = 1;
  return a1;
}
