// __ZN13codexmate_lib4core5relay16codex_diagnostic22is_top_level_model_key @ 0x1004ea9e0 | 基线 same-set
bool __fastcall codexmate_lib::core::relay::codex_diagnostic::is_top_level_model_key::h36abcbf43fb4c921(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // rax
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( a2 > 0xF ) /*0x1004ea9f1*/
  {
    if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, a1, a2) != 1 ) /*0x1004eaa27*/
      return 0; /*0x1004eaa27*/
  }
  else
  {
    if ( !a2 ) /*0x1004ea9f6*/
      return 0; /*0x1004ea9f6*/
    v2 = 0; /*0x1004ea9fc*/
    while ( *(_BYTE *)(a1 + v2) != 61 ) /*0x1004eaa04*/
    {
      if ( a2 == ++v2 ) /*0x1004eaa0c*/
        return 0; /*0x1004eaa0c*/
    }
    if ( a2 < 6 ) /*0x1004eaa32*/
      return 0; /*0x1004eaa32*/
  }
  if ( *(_DWORD *)a1 ^ 0x65646F6D | *(unsigned __int16 *)(a1 + 4) ^ 0x206C /*0x1004eaa5b*/
    && *(_DWORD *)a1 ^ 0x65646F6D | *(unsigned __int16 *)(a1 + 4) ^ 0x3D6C )
  {
    return 0; /*0x1004eaa5b*/
  }
  if ( a2 < 0xE ) /*0x1004eaa67*/
  {
    result = 1; /*0x1004eaa69*/
    if ( a2 != 13 ) /*0x1004eaa6f*/
      return result; /*0x1004eaa6f*/
    v4 = *(_QWORD *)a1 ^ 0x61635F6C65646F6DLL; /*0x1004eaa7f*/
    v5 = *(_QWORD *)(a1 + 5) ^ 0x676F6C617461635FLL; /*0x1004eaa8c*/
    return (v4 | v5) != 0; /*0x1004eaa90*/
  }
  if ( !(*(_QWORD *)a1 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(a1 + 6) ^ 0x72656469766F7270LL) /*0x1004eaacd*/
    || !(*(_QWORD *)a1 ^ 0x61635F6C65646F6DLL | *(_QWORD *)(a1 + 5) ^ 0x676F6C617461635FLL) )
  {
    return 0; /*0x1004eab00*/
  }
  result = 1; /*0x1004eaad2*/
  if ( a2 == 14 ) /*0x1004eaad8*/
    return result; /*0x1004eaad8*/
  v4 = *(_QWORD *)a1 ^ 0x65725F6C65646F6DLL; /*0x1004eaae4*/
  v5 = *(_QWORD *)(a1 + 7) ^ 0x676E696E6F736165LL; /*0x1004eaaf1*/
  return (v4 | v5) != 0; /*0x1004eaafb*/
}