// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::RefreshChannelStatus>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h0850daa8174dad45 @ 0x100378130 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..RefreshChannelStatus$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h0850daa8174dad45(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = a1;
  if ( a3 == 7 )
  {
    if ( !(*(_DWORD *)a2 ^ 0x70696B73 | *(_DWORD *)(a2 + 3) ^ 0x64657070) )
    {
      *(_BYTE *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      return result;
    }
    if ( !(*(_DWORD *)a2 ^ 0x74726170 | *(_DWORD *)(a2 + 3) ^ 0x6C616974) )
    {
      *(_BYTE *)(a1 + 1) = 2;
      *(_BYTE *)a1 = 0;
      return result;
    }
  }
  else if ( a3 == 9 )
  {
    if ( !(*(_QWORD *)a2 ^ 0x6564656563637573LL | *(unsigned __int8 *)(a2 + 8) ^ 0x64LL) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      return result;
    }
  }
  else if ( a3 == 6 && !(*(_DWORD *)a2 ^ 0x6C696166 | *(unsigned __int16 *)(a2 + 4) ^ 0x6465) )
  {
    *(_BYTE *)(a1 + 1) = 3;
    *(_BYTE *)a1 = 0;
    return result;
  }
  *(_QWORD *)(a1 + 8) = serde_core::de::Error::unknown_variant::haeda023a80886faa(
                          a2,
                          a3,
                          &anon_b0ee9adff4519c22b647af231a5a39fa_816,
                          4);
  *(_BYTE *)a1 = 1;
  return a1;
}
