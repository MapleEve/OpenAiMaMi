// __ZN13codexmate_lib4core5relay16codex_diagnostic21is_profile_assignment @ 0x1004ea480 | 基线 same-set
bool __fastcall codexmate_lib::core::relay::codex_diagnostic::is_profile_assignment::hb6d548fc73d167bb(
        __int64 a1,
        unsigned __int64 a2)
{
  bool result; // al
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // r8d
  int v6; // esi
  unsigned int v7; // edx
  char v8; // al

  if ( a2 < 7 || *(_DWORD *)a1 ^ 0x666F7270 | *(_DWORD *)(a1 + 3) ^ 0x656C6966 ) /*0x1004ea495*/
    return 0; /*0x1004ea497*/
  result = 1; /*0x1004ea49e*/
  if ( a2 != 7 ) /*0x1004ea4a4*/
  {
    v3 = *(unsigned __int8 *)(a1 + 7); /*0x1004ea4a6*/
    if ( (v3 & 0x80u) != 0 ) /*0x1004ea4ac*/
    {
      v4 = v3 & 0x1F; /*0x1004ea4b0*/
      v5 = *(_BYTE *)(a1 + 8) & 0x3F; /*0x1004ea4b8*/
      if ( (unsigned __int8)v3 <= 0xDFu ) /*0x1004ea4bf*/
      {
        v3 = v5 | (v4 << 6); /*0x1004ea4f0*/
      }
      else
      {
        v6 = (v5 << 6) | *(_BYTE *)(a1 + 9) & 0x3F; /*0x1004ea4cc*/
        if ( (unsigned __int8)v3 < 0xF0u ) /*0x1004ea4d2*/
          v3 = (v4 << 12) | v6; /*0x1004ea4f9*/
        else
          v3 = ((v3 & 7) << 18) | (v6 << 6) | *(_BYTE *)(a1 + 10) & 0x3F; /*0x1004ea4e6*/
      }
    }
    if ( v3 != 32 && v3 != 61 && v3 - 9 >= 5 ) /*0x1004ea50b*/
    {
      if ( v3 < 0x80 ) /*0x1004ea513*/
        return 0; /*0x1004ea499*/
      v7 = v3 >> 8; /*0x1004ea51b*/
      v8 = 0; /*0x1004ea51e*/
      if ( v3 >> 8 > 0x1F ) /*0x1004ea523*/
      {
        if ( v7 == 32 ) /*0x1004ea53e*/
        {
          v8 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v3] >> 1; /*0x1004ea572*/
        }
        else if ( v7 == 48 ) /*0x1004ea543*/
        {
          return v3 == 12288; /*0x1004ea551*/
        }
      }
      else
      {
        if ( !v7 ) /*0x1004ea527*/
          return core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v3] & 1; /*0x1004ea563*/
        if ( v7 == 22 ) /*0x1004ea52c*/
          return v3 == 5760; /*0x1004ea53a*/
      }
      return v8 & 1; /*0x1004ea575*/
    }
  }
  return result; /*0x1004ea49d*/
}