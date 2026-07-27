// __ZN13codexmate_lib4core3mcp18strip_toml_comment @ 0x10084a230 | 基线 same-set
unsigned __int8 *__fastcall codexmate_lib::core::mcp::strip_toml_comment::h49b8f15aecbab7d7(
        unsigned __int8 *a1,
        unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rax
  char v3; // r8
  char v4; // dl
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // r10
  unsigned __int8 *v7; // r9
  int v8; // ebx
  unsigned __int8 *v9; // rcx
  int v10; // r11d
  int v11; // ebx
  int v12; // r15d
  int v13; // r14d
  unsigned __int8 v14; // r11
  int v15; // ecx
  int v16; // r15d
  int v17; // r14d
  int v18; // ecx
  int v19; // r15d
  int v20; // r14d
  unsigned __int8 *v21; // rcx
  unsigned __int8 *v22; // r11
  int v23; // ebx
  int v24; // r10d
  int v25; // r15d
  int v26; // r14d
  unsigned __int8 v27; // bl

  if ( !a2 ) /*0x10084a23d*/
    return a1; /*0x10084a23d*/
  v2 = &a2[(_QWORD)a1]; /*0x10084a243*/
  v3 = 0; /*0x10084a247*/
  v4 = 0; /*0x10084a24a*/
  v5 = a1; /*0x10084a24c*/
  v6 = nullptr; /*0x10084a24f*/
  while ( 1 ) /*0x10084a272*/
  {
    v7 = v5 + 1; /*0x10084a272*/
    v8 = *v5; /*0x10084a276*/
    if ( (v3 & 1) == 0 ) /*0x10084a27e*/
      break; /*0x10084a27e*/
    if ( (v8 & 0x80u) != 0 ) /*0x10084a286*/
    {
      v18 = v8 & 0x1F; /*0x10084a40a*/
      v19 = v5[1] & 0x3F; /*0x10084a412*/
      if ( (unsigned __int8)v8 < 0xE0u ) /*0x10084a419*/
      {
        v7 = v5 + 2; /*0x10084a471*/
        v8 = v19 | (v18 << 6); /*0x10084a47b*/
        v6 += 2; /*0x10084a480*/
        if ( (v4 & 1) != 0 ) /*0x10084a486*/
          goto LABEL_3; /*0x10084a486*/
      }
      else
      {
        v20 = (v19 << 6) | v5[2] & 0x3F; /*0x10084a428*/
        if ( (unsigned __int8)v8 < 0xF0u ) /*0x10084a42e*/
        {
          v7 = v5 + 3; /*0x10084a5ac*/
          v8 = (v18 << 12) | v20; /*0x10084a5b6*/
          v6 += 3; /*0x10084a5bc*/
          if ( (v4 & 1) != 0 ) /*0x10084a5c2*/
            goto LABEL_3; /*0x10084a5c2*/
        }
        else
        {
          v7 = v5 + 4; /*0x10084a434*/
          v8 = ((v8 & 7) << 18) | (v20 << 6) | v5[3] & 0x3F; /*0x10084a44d*/
          v6 += 4; /*0x10084a452*/
          if ( (v4 & 1) != 0 ) /*0x10084a458*/
            goto LABEL_3; /*0x10084a458*/
        }
      }
    }
    else
    {
      ++v6; /*0x10084a28f*/
      if ( (v4 & 1) != 0 ) /*0x10084a295*/
        goto LABEL_3; /*0x10084a295*/
    }
    if ( v8 == 34 ) /*0x10084a29a*/
      goto LABEL_58; /*0x10084a29a*/
    if ( v8 != 92 ) /*0x10084a2a3*/
    {
      if ( v7 == v2 ) /*0x10084a2a8*/
        return a1; /*0x10084a2a8*/
      v9 = v7; /*0x10084a2ae*/
      while ( 1 ) /*0x10084a2c0*/
      {
        v10 = *v7; /*0x10084a2c0*/
        if ( (v10 & 0x80u) != 0 ) /*0x10084a2c7*/
        {
          v11 = v10 & 0x1F; /*0x10084a2f3*/
          v12 = v7[1] & 0x3F; /*0x10084a2fb*/
          if ( (unsigned __int8)v10 < 0xE0u ) /*0x10084a303*/
          {
            v7 += 2; /*0x10084a349*/
            v10 = v12 | (v11 << 6); /*0x10084a353*/
            v6 = &v7[v6 - v9]; /*0x10084a359*/
            if ( v10 == 34 ) /*0x10084a360*/
              goto LABEL_58; /*0x10084a360*/
          }
          else
          {
            v13 = (v12 << 6) | v7[2] & 0x3F; /*0x10084a312*/
            if ( (unsigned __int8)v10 < 0xF0u ) /*0x10084a319*/
            {
              v7 += 3; /*0x10084a367*/
              v10 = (v11 << 12) | v13; /*0x10084a371*/
              v6 = &v7[v6 - v9]; /*0x10084a377*/
              if ( v10 == 34 ) /*0x10084a37e*/
                goto LABEL_58; /*0x10084a37e*/
            }
            else
            {
              v14 = v7[3]; /*0x10084a31b*/
              v7 += 4; /*0x10084a320*/
              v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F; /*0x10084a335*/
              v6 = &v7[v6 - v9]; /*0x10084a33b*/
              if ( v10 == 34 ) /*0x10084a342*/
                goto LABEL_58; /*0x10084a342*/
            }
          }
        }
        else
        {
          v6 = &(++v7)[v6 - v9]; /*0x10084a2cf*/
          if ( v10 == 34 ) /*0x10084a2d6*/
            goto LABEL_58; /*0x10084a2d6*/
        }
        if ( v10 == 92 ) /*0x10084a394*/
          break; /*0x10084a394*/
        v9 = v7; /*0x10084a39a*/
        if ( v7 == v2 ) /*0x10084a3a0*/
          return a1; /*0x10084a3a0*/
      }
    }
LABEL_3:
    v4 ^= 1u; /*0x10084a260*/
    v3 = 1; /*0x10084a263*/
LABEL_4:
    v5 = v7; /*0x10084a266*/
    if ( v7 == v2 ) /*0x10084a26c*/
      return a1; /*0x10084a26c*/
  }
  if ( (v8 & 0x80u) != 0 ) /*0x10084a3b2*/
  {
    v15 = v8 & 0x1F; /*0x10084a3ba*/
    v16 = v5[1] & 0x3F; /*0x10084a3c2*/
    if ( (unsigned __int8)v8 < 0xE0u ) /*0x10084a3c9*/
    {
      v7 = v5 + 2; /*0x10084a463*/
      v8 = v16 | (v15 << 6); /*0x10084a46d*/
    }
    else
    {
      v17 = (v16 << 6) | v5[2] & 0x3F; /*0x10084a3dc*/
      if ( (unsigned __int8)v8 < 0xF0u ) /*0x10084a3e2*/
      {
        v7 = v5 + 3; /*0x10084a491*/
        v8 = (v15 << 12) | v17; /*0x10084a49b*/
      }
      else
      {
        v7 = v5 + 4; /*0x10084a3e8*/
        v8 = ((v8 & 7) << 18) | (v17 << 6) | v5[3] & 0x3F; /*0x10084a401*/
      }
    }
  }
  v21 = &v7[v6 - v5]; /*0x10084a4a6*/
  if ( (v4 & 1) != 0 ) /*0x10084a4ac*/
  {
LABEL_55:
    v6 = &v7[v6 - v5]; /*0x10084a590*/
LABEL_56:
    v4 ^= 1u; /*0x10084a593*/
    v3 = 0; /*0x10084a596*/
    goto LABEL_4; /*0x10084a599*/
  }
  if ( v8 == 34 ) /*0x10084a4b5*/
  {
    v6 = &v7[v6 - v5]; /*0x10084a59e*/
LABEL_58:
    v3 ^= 1u; /*0x10084a5a1*/
    v4 = 0; /*0x10084a5a5*/
    goto LABEL_4; /*0x10084a5a7*/
  }
  if ( v8 == 92 ) /*0x10084a4be*/
    goto LABEL_55; /*0x10084a4be*/
  if ( v8 != 35 ) /*0x10084a4c7*/
  {
    if ( v7 == v2 ) /*0x10084a4d0*/
      return a1; /*0x10084a4d0*/
    v22 = v7; /*0x10084a4d6*/
    while ( 1 ) /*0x10084a4e0*/
    {
      v23 = *v7; /*0x10084a4e0*/
      if ( (v23 & 0x80u) != 0 ) /*0x10084a4e6*/
      {
        v24 = v23 & 0x1F; /*0x10084a4f3*/
        v25 = v7[1] & 0x3F; /*0x10084a4fc*/
        if ( (unsigned __int8)v23 <= 0xDFu ) /*0x10084a503*/
        {
          v7 += 2; /*0x10084a53a*/
          v23 = v25 | (v24 << 6); /*0x10084a545*/
        }
        else
        {
          v26 = (v25 << 6) | v7[2] & 0x3F; /*0x10084a512*/
          if ( (unsigned __int8)v23 < 0xF0u ) /*0x10084a518*/
          {
            v7 += 3; /*0x10084a54a*/
            v23 = (v24 << 12) | v26; /*0x10084a555*/
          }
          else
          {
            v27 = v7[3]; /*0x10084a51a*/
            v7 += 4; /*0x10084a51f*/
            v23 = ((v24 & 7) << 18) | (v26 << 6) | v27 & 0x3F; /*0x10084a535*/
          }
        }
      }
      else
      {
        ++v7; /*0x10084a4e8*/
      }
      v6 = &v7[v21 - v22]; /*0x10084a566*/
      switch ( v23 ) /*0x10084a56c*/
      {
        case '"': /*0x10084a56c*/
          goto LABEL_58; /*0x10084a56c*/
        case '#': /*0x10084a56c*/
          goto LABEL_62; /*0x10084a571*/
        case '\\': /*0x10084a56c*/
          goto LABEL_56; /*0x10084a576*/
      }
      v22 = v7; /*0x10084a578*/
      v21 = v6; /*0x10084a57b*/
      if ( v7 == v2 ) /*0x10084a581*/
        return a1; /*0x10084a581*/
    }
  }
  v21 = v6; /*0x10084a5cd*/
LABEL_62:
  if ( v21 ) /*0x10084a5d3*/
  {
    if ( v21 >= a2 ) /*0x10084a5d8*/
    {
      if ( v21 == a2 ) /*0x10084a5f8*/
        return a1; /*0x10084a5f8*/
    }
    else if ( (char)v21[(_QWORD)a1] > -65 ) /*0x10084a5de*/
    {
      return a1; /*0x10084a5de*/
    }
    core::str::slice_error_fail::h480e51fbd8b15eba(a1, a2, 0, v21, &off_10196C740); /*0x10084a603*/
  }
  return a1; /*0x10084a5f1*/
}