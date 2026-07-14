// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x1006a0590 depth=1
unsigned __int8 *__fastcall core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(
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

  v3 = &a1[a2]; /*0x1006a059a*/
  if ( !a2 ) /*0x1006a05a0*/
  {
    v5 = a1; /*0x1006a06eb*/
    v8 = nullptr; /*0x1006a06ee*/
LABEL_26:
    if ( v5 == v3 ) /*0x1006a06f3*/
      return &a1[(_QWORD)v8]; /*0x1006a06f3*/
    while ( 1 ) /*0x1006a0729*/
    {
      v15 = v3; /*0x1006a0729*/
      v16 = (char)*(v3 - 1); /*0x1006a072c*/
      if ( (v16 & 0x80000000) != 0 ) /*0x1006a0734*/
      {
        v17 = *(v3 - 2); /*0x1006a0750*/
        if ( v17 >= -64 ) /*0x1006a0759*/
        {
          v3 -= 2; /*0x1006a077e*/
          v20 = v17 & 0x1F; /*0x1006a0782*/
        }
        else
        {
          v18 = *(v3 - 3); /*0x1006a075b*/
          if ( v18 >= -64 ) /*0x1006a0763*/
          {
            v3 -= 3; /*0x1006a0788*/
            v19 = v18 & 0xF; /*0x1006a078c*/
          }
          else
          {
            v3 -= 4; /*0x1006a0765*/
            v19 = ((*(v15 - 4) & 7) << 6) | v18 & 0x3F; /*0x1006a0779*/
          }
          v20 = (v19 << 6) | v17 & 0x3F; /*0x1006a0796*/
        }
        v16 = (v20 << 6) | v16 & 0x3F; /*0x1006a07a1*/
        if ( v16 - 9 < 5 ) /*0x1006a07ac*/
          goto LABEL_30; /*0x1006a07ac*/
      }
      else
      {
        --v3; /*0x1006a0736*/
        if ( v16 - 9 < 5 ) /*0x1006a0742*/
          goto LABEL_30; /*0x1006a0742*/
      }
      if ( v16 != 32 ) /*0x1006a07b6*/
      {
        if ( v16 < 0x80 ) /*0x1006a07c3*/
          return &a1[(_QWORD)v8]; /*0x1006a07c3*/
        v21 = v16 >> 8; /*0x1006a07c8*/
        if ( v16 >> 8 > 0x1F ) /*0x1006a07d0*/
        {
          if ( v21 == 32 ) /*0x1006a07f1*/
          {
            v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v16] >> 1; /*0x1006a070b*/
          }
          else
          {
            if ( v21 != 48 ) /*0x1006a07fb*/
              return &a1[(_QWORD)v8]; /*0x1006a07fb*/
            v14 = v16 == 12288; /*0x1006a0804*/
          }
        }
        else if ( v21 ) /*0x1006a07d5*/
        {
          if ( v21 != 22 ) /*0x1006a07db*/
            return &a1[(_QWORD)v8]; /*0x1006a07db*/
          v14 = v16 == 5760; /*0x1006a07e4*/
        }
        else
        {
          v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v16]; /*0x1006a0811*/
        }
        if ( (v14 & 1) == 0 ) /*0x1006a0712*/
          return &a1[(_QWORD)v8]; /*0x1006a0712*/
      }
LABEL_30:
      if ( v5 == v3 ) /*0x1006a0723*/
        return &a1[(_QWORD)v8]; /*0x1006a0723*/
    }
  }
  v4 = nullptr; /*0x1006a05ad*/
  v5 = a1; /*0x1006a05af*/
  do /*0x1006a05d3*/
  {
    v7 = v5; /*0x1006a05d9*/
    v8 = v4; /*0x1006a05dc*/
    v9 = *v5; /*0x1006a05df*/
    if ( (v9 & 0x80u) != 0 ) /*0x1006a05e6*/
    {
      v10 = v9 & 0x1F; /*0x1006a05f3*/
      v11 = v5[1] & 0x3F; /*0x1006a05fb*/
      if ( (unsigned __int8)v9 <= 0xDFu ) /*0x1006a0602*/
      {
        v5 += 2; /*0x1006a0638*/
        v9 = v11 | (v10 << 6); /*0x1006a0641*/
      }
      else
      {
        v12 = (v11 << 6) | v5[2] & 0x3F; /*0x1006a0610*/
        if ( (unsigned __int8)v9 < 0xF0u ) /*0x1006a0617*/
        {
          v5 += 3; /*0x1006a0646*/
          v9 = (v10 << 12) | v12; /*0x1006a0650*/
        }
        else
        {
          v5 += 4; /*0x1006a0619*/
          v9 = ((v9 & 7) << 18) | (v12 << 6) | v7[3] & 0x3F; /*0x1006a0633*/
        }
      }
    }
    else
    {
      ++v5; /*0x1006a05e8*/
    }
    v4 = &v8[v5 - v7]; /*0x1006a0666*/
    if ( v9 - 9 >= 5 && v9 != 32 ) /*0x1006a067b*/
    {
      if ( v9 < 0x80 ) /*0x1006a0688*/
        goto LABEL_26; /*0x1006a0688*/
      v13 = v9 >> 8; /*0x1006a068d*/
      if ( v9 >> 8 > 0x1F ) /*0x1006a0695*/
      {
        if ( v13 == 32 ) /*0x1006a06b6*/
        {
          v6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v9] >> 1; /*0x1006a05bd*/
        }
        else
        {
          if ( v13 != 48 ) /*0x1006a06c0*/
            goto LABEL_26; /*0x1006a06c0*/
          v6 = v9 == 12288; /*0x1006a06c9*/
        }
      }
      else if ( v13 ) /*0x1006a069a*/
      {
        if ( v13 != 22 ) /*0x1006a06a0*/
          goto LABEL_26; /*0x1006a06a0*/
        v6 = v9 == 5760; /*0x1006a06a9*/
      }
      else
      {
        v6 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v9]; /*0x1006a06d6*/
      }
      if ( (v6 & 1) == 0 ) /*0x1006a05c4*/
        goto LABEL_26; /*0x1006a05c4*/
    }
  }
  while ( v5 != v3 ); /*0x1006a05d3*/
  v8 = nullptr; /*0x1006a06e0*/
  return &a1[(_QWORD)v8]; /*0x1006a0827*/
}