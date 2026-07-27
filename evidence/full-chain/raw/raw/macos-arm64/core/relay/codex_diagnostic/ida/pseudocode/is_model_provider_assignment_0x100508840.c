// __ZN13codexmate_lib4core5relay16codex_diagnostic28is_model_provider_assignment @ 0x100508840 | 基线 same-set
bool __fastcall codexmate_lib::core::relay::codex_diagnostic::is_model_provider_assignment::h8e88b4f08f7d63e2(
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

  if ( a2 < 0xE || *(_QWORD *)a1 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(a1 + 6) ^ 0x72656469766F7270LL ) /*0x100508861*/
    return 0; /*0x100508864*/
  result = 1; /*0x10050886b*/
  if ( a2 != 14 ) /*0x100508871*/
  {
    v3 = *(unsigned __int8 *)(a1 + 14); /*0x100508873*/
    if ( (v3 & 0x80u) != 0 ) /*0x100508879*/
    {
      v4 = v3 & 0x1F; /*0x10050887d*/
      v5 = *(_BYTE *)(a1 + 15) & 0x3F; /*0x100508885*/
      if ( (unsigned __int8)v3 <= 0xDFu ) /*0x10050888c*/
      {
        v3 = v5 | (v4 << 6); /*0x1005088bd*/
      }
      else
      {
        v6 = (v5 << 6) | *(_BYTE *)(a1 + 16) & 0x3F; /*0x100508899*/
        if ( (unsigned __int8)v3 < 0xF0u ) /*0x10050889f*/
          v3 = (v4 << 12) | v6; /*0x1005088c6*/
        else
          v3 = ((v3 & 7) << 18) | (v6 << 6) | *(_BYTE *)(a1 + 17) & 0x3F; /*0x1005088b3*/
      }
    }
    if ( v3 != 32 && v3 != 61 && v3 - 9 >= 5 ) /*0x1005088d8*/
    {
      if ( v3 < 0x80 ) /*0x1005088e0*/
        return 0; /*0x100508866*/
      v7 = v3 >> 8; /*0x1005088e8*/
      v8 = 0; /*0x1005088eb*/
      if ( v3 >> 8 > 0x1F ) /*0x1005088f0*/
      {
        if ( v7 == 32 ) /*0x10050890b*/
        {
          v8 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v3] >> 1; /*0x10050893f*/
        }
        else if ( v7 == 48 ) /*0x100508910*/
        {
          return v3 == 12288; /*0x10050891e*/
        }
      }
      else
      {
        if ( !v7 ) /*0x1005088f4*/
          return core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v3] & 1; /*0x100508930*/
        if ( v7 == 22 ) /*0x1005088f9*/
          return v3 == 5760; /*0x100508907*/
      }
      return v8 & 1; /*0x100508942*/
    }
  }
  return result; /*0x10050886a*/
}