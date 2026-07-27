// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::VoiceOverlayStyle>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h50a59f6b795d6fc6 @ 0x1003770a0 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..VoiceOverlayStyle$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h50a59f6b795d6fc6(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 == 2003790950 )
      {
        *(_BYTE *)(a1 + 1) = 1;
        *(_BYTE *)a1 = 0;
        return result;
      }
      break;
    case 6LL:
      if ( !(*(_DWORD *)a2 ^ 0x6974616E | *(unsigned __int16 *)(a2 + 4) ^ 0x6576) )
      {
        *(_BYTE *)(a1 + 1) = 0;
        *(_BYTE *)a1 = 0;
        return result;
      }
      break;
    case 3LL:
      if ( !(*(_WORD *)a2 ^ 0x6E69 | *(unsigned __int8 *)(a2 + 2) ^ 0x6B) )
      {
        *(_BYTE *)(a1 + 1) = 2;
        *(_BYTE *)a1 = 0;
        return result;
      }
      if ( !(*(_WORD *)a2 ^ 0x666F | *(unsigned __int8 *)(a2 + 2) ^ 0x66) )
      {
        *(_BYTE *)(a1 + 1) = 3;
        *(_BYTE *)a1 = 0;
        return result;
      }
      break;
  }
  *(_QWORD *)(a1 + 8) = serde_core::de::Error::unknown_variant::haeda023a80886faa(
                          a2,
                          a3,
                          &anon_b0ee9adff4519c22b647af231a5a39fa_727,
                          4);
  *(_BYTE *)a1 = 1;
  return a1;
}
