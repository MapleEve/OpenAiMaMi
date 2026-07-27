// __ZN13codexmate_lib4core5relay8keychain28legacy_id_is_safe_identifier @ 0x1005291a0 | 基线 same-set
char __fastcall codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h42f58ae8ebd86916(
        unsigned __int8 *a1,
        __int64 a2)
{
  char result; // al
  unsigned __int8 *v3; // rsi
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // r9d
  int v7; // r8d

  if ( !a2 ) /*0x1005291a3*/
    return 0; /*0x1005291a3*/
  if ( a2 == 2 ) /*0x1005291a9*/
  {
    if ( *(_WORD *)a1 == 11822 ) /*0x1005291be*/
      return 0; /*0x1005291b8*/
  }
  else if ( a2 == 1 && *a1 == 46 ) /*0x1005291b4*/
  {
    return 0; /*0x1005291b4*/
  }
  v3 = &a1[a2]; /*0x1005291c4*/
  while ( 1 ) /*0x1005291d0*/
  {
    result = 1; /*0x1005291d0*/
    if ( a1 == v3 ) /*0x1005291d5*/
      break; /*0x1005291d5*/
    v4 = *a1; /*0x1005291db*/
    if ( (v4 & 0x80u) != 0 ) /*0x1005291e0*/
    {
      v5 = v4 & 0x1F; /*0x100529202*/
      v6 = a1[1] & 0x3F; /*0x10052920a*/
      if ( (unsigned __int8)v4 <= 0xDFu ) /*0x100529211*/
      {
        a1 += 2; /*0x100529253*/
        v4 = v6 | (v5 << 6); /*0x10052925d*/
        result = 0; /*0x10052925f*/
        if ( v4 < 0x20 ) /*0x100529264*/
          return result; /*0x100529264*/
      }
      else
      {
        v7 = (v6 << 6) | a1[2] & 0x3F; /*0x100529220*/
        if ( (unsigned __int8)v4 < 0xF0u ) /*0x100529226*/
        {
          a1 += 3; /*0x100529268*/
          v4 = (v5 << 12) | v7; /*0x100529272*/
          result = 0; /*0x100529275*/
          if ( v4 < 0x20 ) /*0x10052927a*/
            return result; /*0x10052927a*/
        }
        else
        {
          v4 = ((v4 & 7) << 18) | (v7 << 6) | a1[3] & 0x3F; /*0x10052923c*/
          if ( v4 == 1114112 ) /*0x100529244*/
            return result; /*0x100529244*/
          a1 += 4; /*0x100529246*/
          result = 0; /*0x10052924a*/
          if ( v4 < 0x20 ) /*0x10052924f*/
            return result; /*0x10052924f*/
        }
      }
    }
    else
    {
      ++a1; /*0x1005291e2*/
      result = 0; /*0x1005291e5*/
      if ( v4 < 0x20 ) /*0x1005291ea*/
        return result; /*0x1005291ea*/
    }
    if ( v4 - 127 >= 0x21 ) /*0x100529286*/
    {
      result = 0; /*0x100529288*/
      if ( v4 != 92 && v4 != 47 ) /*0x100529292*/
        continue; /*0x100529292*/
    }
    return result; /*0x100529292*/
  }
  return result; /*0x1005291b8*/
}