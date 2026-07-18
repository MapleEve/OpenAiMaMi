// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x100a28ef0 d=2
char __fastcall codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h84109c06bc33f952(
        unsigned __int8 *a1,
        __int64 a2)
{
  char result; // al
  unsigned __int8 *v3; // rsi
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // r9d
  int v7; // r8d

  if ( !a2 ) /*0x100a28ef3*/
    return 0; /*0x100a28ef3*/
  if ( a2 == 2 ) /*0x100a28ef9*/
  {
    if ( *(_WORD *)a1 == 11822 ) /*0x100a28f0e*/
      return 0; /*0x100a28f08*/
  }
  else if ( a2 == 1 && *a1 == 46 ) /*0x100a28f04*/
  {
    return 0; /*0x100a28f04*/
  }
  v3 = &a1[a2]; /*0x100a28f14*/
  while ( 1 ) /*0x100a28f20*/
  {
    result = 1; /*0x100a28f20*/
    if ( a1 == v3 ) /*0x100a28f25*/
      break; /*0x100a28f25*/
    v4 = *a1; /*0x100a28f2b*/
    if ( (v4 & 0x80u) != 0 ) /*0x100a28f30*/
    {
      v5 = v4 & 0x1F; /*0x100a28f52*/
      v6 = a1[1] & 0x3F; /*0x100a28f5a*/
      if ( (unsigned __int8)v4 <= 0xDFu ) /*0x100a28f61*/
      {
        a1 += 2; /*0x100a28fa3*/
        v4 = v6 | (v5 << 6); /*0x100a28fad*/
        result = 0; /*0x100a28faf*/
        if ( v4 < 0x20 ) /*0x100a28fb4*/
          return result; /*0x100a28fb4*/
      }
      else
      {
        v7 = (v6 << 6) | a1[2] & 0x3F; /*0x100a28f70*/
        if ( (unsigned __int8)v4 < 0xF0u ) /*0x100a28f76*/
        {
          a1 += 3; /*0x100a28fb8*/
          v4 = (v5 << 12) | v7; /*0x100a28fc2*/
          result = 0; /*0x100a28fc5*/
          if ( v4 < 0x20 ) /*0x100a28fca*/
            return result; /*0x100a28fca*/
        }
        else
        {
          v4 = ((v4 & 7) << 18) | (v7 << 6) | a1[3] & 0x3F; /*0x100a28f8c*/
          if ( v4 == 1114112 ) /*0x100a28f94*/
            return result; /*0x100a28f94*/
          a1 += 4; /*0x100a28f96*/
          result = 0; /*0x100a28f9a*/
          if ( v4 < 0x20 ) /*0x100a28f9f*/
            return result; /*0x100a28f9f*/
        }
      }
    }
    else
    {
      ++a1; /*0x100a28f32*/
      result = 0; /*0x100a28f35*/
      if ( v4 < 0x20 ) /*0x100a28f3a*/
        return result; /*0x100a28f3a*/
    }
    if ( v4 - 127 >= 0x21 ) /*0x100a28fd6*/
    {
      result = 0; /*0x100a28fd8*/
      if ( v4 != 92 && v4 != 47 ) /*0x100a28fe2*/
        continue; /*0x100a28fe2*/
    }
    return result; /*0x100a28fe2*/
  }
  return result; /*0x100a28f08*/
}