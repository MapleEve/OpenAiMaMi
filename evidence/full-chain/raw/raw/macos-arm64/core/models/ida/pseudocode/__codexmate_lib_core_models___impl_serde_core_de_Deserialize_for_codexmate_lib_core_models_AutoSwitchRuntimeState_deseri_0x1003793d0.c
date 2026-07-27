// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AutoSwitchRuntimeState>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h783ade11a9a9ed9a @ 0x1003793d0 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AutoSwitchRuntimeState$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h783ade11a9a9ed9a(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = a1;
  if ( a3 == 7 )
  {
    if ( !(*a2 ^ 0x6E6E7572 | *(_DWORD *)((char *)a2 + 3) ^ 0x676E696E) )
    {
      *(_BYTE *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      return result;
    }
    if ( !(*a2 ^ 0x706F7473 | *(_DWORD *)((char *)a2 + 3) ^ 0x64657070) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
      return result;
    }
    if ( !(*a2 ^ 0x6E6B6E75 | *(_DWORD *)((char *)a2 + 3) ^ 0x6E776F6E) )
    {
      *(_BYTE *)(a1 + 1) = 3;
      *(_BYTE *)a1 = 0;
      return result;
    }
  }
  else if ( a3 == 12 && !(*(_QWORD *)a2 ^ 0x6174736E49746F6ELL | (unsigned int)a2[2] ^ 0x64656C6CLL) )
  {
    *(_BYTE *)(a1 + 1) = 2;
    *(_BYTE *)a1 = 0;
    return result;
  }
  *(_QWORD *)(a1 + 8) = serde_core::de::Error::unknown_variant::haeda023a80886faa(
                          a2,
                          a3,
                          &anon_b0ee9adff4519c22b647af231a5a39fa_875,
                          4);
  *(_BYTE *)a1 = 1;
  return a1;
}
