// mac 1.2.2 NEW migrate_session_worktree 0x1005eb0d0 d=1
unsigned __int8 *__fastcall core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(
        unsigned __int8 *a1,
        __int64 a2)
{
  unsigned __int8 *v3; // rdi
  unsigned __int8 *v4; // rdx
  unsigned __int8 *v5; // rsi
  char v6; // r9
  unsigned __int8 *v7; // r10
  unsigned __int8 *v8; // rcx
  unsigned int v9; // r9d
  int v10; // edx
  int v11; // ebx
  int v12; // r11d
  unsigned int v13; // r10d
  char v14; // r10
  unsigned __int8 *v15; // r9
  unsigned int v16; // r10d
  char v17; // r11
  char v18; // bl
  int v19; // ebx
  int v20; // r11d
  unsigned int v21; // r11d

  v3 = &a1[a2]; /*0x1005eb0da*/
  if ( !a2 ) /*0x1005eb0e0*/
  {
    v5 = a1; /*0x1005eb22b*/
    v8 = nullptr; /*0x1005eb22e*/
LABEL_26:
    if ( v5 == v3 ) /*0x1005eb233*/
      return &a1[(_QWORD)v8]; /*0x1005eb233*/
    while ( 1 ) /*0x1005eb269*/
    {
      v15 = v3; /*0x1005eb269*/
      v16 = (char)*(v3 - 1); /*0x1005eb26c*/
      if ( (v16 & 0x80000000) != 0 ) /*0x1005eb274*/
      {
        v17 = *(v3 - 2); /*0x1005eb290*/
        if ( v17 >= -64 ) /*0x1005eb299*/
        {
          v3 -= 2; /*0x1005eb2be*/
          v20 = v17 & 0x1F; /*0x1005eb2c2*/
        }
        else
        {
          v18 = *(v3 - 3); /*0x1005eb29b*/
          if ( v18 >= -64 ) /*0x1005eb2a3*/
          {
            v3 -= 3; /*0x1005eb2c8*/
            v19 = v18 & 0xF; /*0x1005eb2cc*/
          }
          else
          {
            v3 -= 4; /*0x1005eb2a5*/
            v19 = ((*(v15 - 4) & 7) << 6) | v18 & 0x3F; /*0x1005eb2b9*/
          }
          v20 = (v19 << 6) | v17 & 0x3F; /*0x1005eb2d6*/
        }
        v16 = (v20 << 6) | v16 & 0x3F; /*0x1005eb2e1*/
        if ( v16 - 9 < 5 ) /*0x1005eb2ec*/
          goto LABEL_30; /*0x1005eb2ec*/
      }
      else
      {
        --v3; /*0x1005eb276*/
        if ( v16 - 9 < 5 ) /*0x1005eb282*/
          goto LABEL_30; /*0x1005eb282*/
      }
      if ( v16 != 32 ) /*0x1005eb2f6*/
      {
        if ( v16 < 0x80 ) /*0x1005eb303*/
          return &a1[(_QWORD)v8]; /*0x1005eb303*/
        v21 = v16 >> 8; /*0x1005eb308*/
        if ( v16 >> 8 > 0x1F ) /*0x1005eb310*/
        {
          if ( v21 == 32 ) /*0x1005eb331*/
          {
            v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v16] >> 1; /*0x1005eb24b*/
          }
          else
          {
            if ( v21 != 48 ) /*0x1005eb33b*/
              return &a1[(_QWORD)v8]; /*0x1005eb33b*/
            v14 = v16 == 12288; /*0x1005eb344*/
          }
        }
        else if ( v21 ) /*0x1005eb315*/
        {
          if ( v21 != 22 ) /*0x1005eb31b*/
            return &a1[(_QWORD)v8]; /*0x1005eb31b*/
          v14 = v16 == 5760; /*0x1005eb324*/
        }
        else
        {
          v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v16]; /*0x1005eb351*/
        }
        if ( (v14 & 1) == 0 ) /*0x1005eb252*/
          return &a1[(_QWORD)v8]; /*0x1005eb252*/
      }
LABEL_30:
      if ( v5 == v3 ) /*0x1005eb263*/
        return &a1[(_QWORD)v8]; /*0x1005eb263*/
    }
  }
  v4 = nullptr; /*0x1005eb0ed*/
  v5 = a1; /*0x1005eb0ef*/
  do /*0x1005eb113*/
  {
    v7 = v5; /*0x1005eb119*/
    v8 = v4; /*0x1005eb11c*/
    v9 = *v5; /*0x1005eb11f*/
    if ( (v9 & 0x80u) != 0 ) /*0x1005eb126*/
    {
      v10 = v9 & 0x1F; /*0x1005eb133*/
      v11 = v5[1] & 0x3F; /*0x1005eb13b*/
      if ( (unsigned __int8)v9 <= 0xDFu ) /*0x1005eb142*/
      {
        v5 += 2; /*0x1005eb178*/
        v9 = v11 | (v10 << 6); /*0x1005eb181*/
      }
      else
      {
        v12 = (v11 << 6) | v5[2] & 0x3F; /*0x1005eb150*/
        if ( (unsigned __int8)v9 < 0xF0u ) /*0x1005eb157*/
        {
          v5 += 3; /*0x1005eb186*/
          v9 = (v10 << 12) | v12; /*0x1005eb190*/
        }
        else
        {
          v5 += 4; /*0x1005eb159*/
          v9 = ((v9 & 7) << 18) | (v12 << 6) | v7[3] & 0x3F; /*0x1005eb173*/
        }
      }
    }
    else
    {
      ++v5; /*0x1005eb128*/
    }
    v4 = &v8[v5 - v7]; /*0x1005eb1a6*/
    if ( v9 - 9 >= 5 && v9 != 32 ) /*0x1005eb1bb*/
    {
      if ( v9 < 0x80 ) /*0x1005eb1c8*/
        goto LABEL_26; /*0x1005eb1c8*/
      v13 = v9 >> 8; /*0x1005eb1cd*/
      if ( v9 >> 8 > 0x1F ) /*0x1005eb1d5*/
      {
        if ( v13 == 32 ) /*0x1005eb1f6*/
        {
          v6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v9] >> 1; /*0x1005eb0fd*/
        }
        else
        {
          if ( v13 != 48 ) /*0x1005eb200*/
            goto LABEL_26; /*0x1005eb200*/
          v6 = v9 == 12288; /*0x1005eb209*/
        }
      }
      else if ( v13 ) /*0x1005eb1da*/
      {
        if ( v13 != 22 ) /*0x1005eb1e0*/
          goto LABEL_26; /*0x1005eb1e0*/
        v6 = v9 == 5760; /*0x1005eb1e9*/
      }
      else
      {
        v6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v9]; /*0x1005eb216*/
      }
      if ( (v6 & 1) == 0 ) /*0x1005eb104*/
        goto LABEL_26; /*0x1005eb104*/
    }
  }
  while ( v5 != v3 ); /*0x1005eb113*/
  v8 = nullptr; /*0x1005eb220*/
  return &a1[(_QWORD)v8]; /*0x1005eb367*/
}