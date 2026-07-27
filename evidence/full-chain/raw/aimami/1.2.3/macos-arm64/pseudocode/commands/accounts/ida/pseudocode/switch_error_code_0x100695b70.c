// __ZN13codexmate_lib8commands8accounts17switch_error_code @ 0x100695b70 | 基线 same-set
unsigned __int8 *__fastcall codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
        unsigned __int8 *a1,
        unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *v3; // rbx
  unsigned __int8 *v4; // r10
  unsigned __int8 *v5; // rcx
  char v6; // si
  char v7; // dl
  unsigned __int8 *v8; // r14
  unsigned __int8 *v9; // r11
  unsigned int v10; // edx
  int v11; // ebx
  int v12; // r8d
  int v13; // r15d
  unsigned int v14; // r8d
  unsigned __int8 *v15; // r14
  unsigned __int8 *v16; // rcx
  unsigned __int8 *v17; // r11
  unsigned __int8 *v18; // r15
  int v19; // r12d
  int v20; // r13d
  int v21; // r9d
  int v22; // r8d
  unsigned __int8 *result; // rax

  v2 = &a2[(_QWORD)a1]; /*0x100695b81*/
  v3 = nullptr; /*0x100695b85*/
  v4 = a1; /*0x100695b87*/
  v5 = nullptr; /*0x100695b8a*/
  while ( 2 ) /*0x100695b9c*/
  {
    v6 = 1; /*0x100695b9c*/
    while ( 1 ) /*0x100695bbb*/
    {
      if ( v4 == v2 ) /*0x100695bbe*/
      {
        v4 = v2; /*0x100695ce0*/
        v15 = v5; /*0x100695ce3*/
        v9 = a2; /*0x100695ce6*/
        if ( a2 != v5 ) /*0x100695cf0*/
          goto LABEL_31; /*0x100695cf0*/
        goto LABEL_2; /*0x100695cf0*/
      }
      v8 = v4; /*0x100695bc4*/
      v9 = v3; /*0x100695bc7*/
      v10 = *v4; /*0x100695bca*/
      if ( (v10 & 0x80u) != 0 ) /*0x100695bd0*/
      {
        v11 = v10 & 0x1F; /*0x100695be2*/
        v12 = v4[1] & 0x3F; /*0x100695bea*/
        if ( (unsigned __int8)v10 <= 0xDFu ) /*0x100695bf1*/
        {
          v4 += 2; /*0x100695c25*/
          v10 = v12 | (v11 << 6); /*0x100695c2f*/
        }
        else
        {
          v13 = (v12 << 6) | v4[2] & 0x3F; /*0x100695c00*/
          if ( (unsigned __int8)v10 < 0xF0u ) /*0x100695c06*/
          {
            v4 += 3; /*0x100695c33*/
            v10 = (v11 << 12) | v13; /*0x100695c3d*/
          }
          else
          {
            v4 += 4; /*0x100695c08*/
            v10 = ((v10 & 7) << 18) | (v13 << 6) | v8[3] & 0x3F; /*0x100695c21*/
          }
        }
      }
      else
      {
        ++v4; /*0x100695bd2*/
      }
      v3 = &v9[v4 - v8]; /*0x100695c46*/
      if ( v10 == 32 || v10 == 58 ) /*0x100695c55*/
        break; /*0x100695c55*/
      if ( v10 - 9 < 5 ) /*0x100695c63*/
      {
LABEL_30:
        v6 = 0; /*0x100695d13*/
        v15 = &v9[v4 - v8]; /*0x100695d15*/
        if ( v9 != v5 ) /*0x100695d1e*/
          goto LABEL_31; /*0x100695d1e*/
        goto LABEL_2; /*0x100695d1e*/
      }
      if ( v10 >= 0x80 ) /*0x100695c6f*/
      {
        v14 = v10 >> 8; /*0x100695c78*/
        if ( v10 >> 8 > 0x1F ) /*0x100695c80*/
        {
          if ( v14 == 32 ) /*0x100695ca4*/
          {
            v7 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v10] >> 1; /*0x100695bb0*/
LABEL_5:
            if ( (v7 & 1) != 0 ) /*0x100695bb5*/
              goto LABEL_30; /*0x100695bb5*/
          }
          else if ( v14 == 48 ) /*0x100695cae*/
          {
            v7 = v10 == 12288; /*0x100695cba*/
            goto LABEL_5; /*0x100695cbd*/
          }
        }
        else
        {
          if ( !v14 ) /*0x100695c85*/
          {
            v7 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v10]; /*0x100695ccc*/
            goto LABEL_5; /*0x100695cd1*/
          }
          if ( v14 == 22 ) /*0x100695c8b*/
          {
            v7 = v10 == 5760; /*0x100695c97*/
            goto LABEL_5; /*0x100695c9a*/
          }
        }
      }
    }
    v15 = &v9[v4 - v8]; /*0x100695d00*/
    v6 = 0; /*0x100695d03*/
    if ( v9 != v5 ) /*0x100695d0b*/
    {
LABEL_31:
      v16 = &v5[(_QWORD)a1]; /*0x100695d30*/
      v17 = &v9[(_QWORD)a1]; /*0x100695d33*/
      v18 = v16; /*0x100695d36*/
      while ( v18 != v17 ) /*0x100695d64*/
      {
        v19 = *v18; /*0x100695d6a*/
        if ( (v19 & 0x80u) == 0 ) /*0x100695d71*/
        {
          ++v18; /*0x100695d40*/
        }
        else
        {
          v20 = v19 & 0x1F; /*0x100695d76*/
          v21 = v18[1] & 0x3F; /*0x100695d7f*/
          if ( (unsigned __int8)v19 <= 0xDFu ) /*0x100695d87*/
          {
            v18 += 2; /*0x100695dcc*/
            v19 = v21 | (v20 << 6); /*0x100695dd7*/
          }
          else
          {
            v22 = (v21 << 6) | v18[2] & 0x3F; /*0x100695d96*/
            if ( (unsigned __int8)v19 < 0xF0u ) /*0x100695d9d*/
            {
              v18 += 3; /*0x100695ddf*/
              v19 = (v20 << 12) | v22; /*0x100695dea*/
            }
            else
            {
              v19 = ((v19 & 7) << 18) | (v22 << 6) | v18[3] & 0x3F; /*0x100695db7*/
              if ( v19 == 1114112 ) /*0x100695dc1*/
                goto LABEL_43; /*0x100695dc1*/
              v18 += 4; /*0x100695dc3*/
            }
          }
        }
        if ( (unsigned int)(v19 - 91) < 0xFFFFFFE6 && v19 != 95 ) /*0x100695d54*/
          goto LABEL_2; /*0x100695d5b*/
      }
      goto LABEL_43; /*0x100695d64*/
    }
LABEL_2:
    v5 = v15; /*0x100695b90*/
    if ( !v6 ) /*0x100695b96*/
      continue; /*0x100695b96*/
    break;
  }
  v16 = nullptr; /*0x100695df2*/
LABEL_43:
  result = (unsigned __int8 *)&unk_1016046F6; /*0x100695e00*/
  if ( v16 ) /*0x100695e07*/
    return v16; /*0x100695e07*/
  return result; /*0x100695e0b*/
}