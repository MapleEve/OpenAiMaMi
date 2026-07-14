// mac 1.1.8 parse_aimami_deeplink node va=0x101076aa0 depth=3
// url6parser6Parser12parse_scheme
unsigned __int8 *__fastcall url::parser::Parser::parse_scheme::h7f9334d255d90168(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *result; // rax
  int v4; // ecx
  int v5; // r9d
  unsigned int v6; // r8d
  int v7; // r9d
  int v8; // r11d
  int v9; // r10d
  int v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // ecx
  int v15; // esi
  int v16; // r9d
  int v17; // r8d
  unsigned __int8 v18; // cl
  char v19; // r12
  unsigned __int8 *v20; // r13
  unsigned __int8 *v21; // r13
  unsigned __int8 *v22; // [rsp+0h] [rbp-30h]
  unsigned __int8 *v23; // [rsp+0h] [rbp-30h]

  result = a2; /*0x101076aae*/
  v4 = 9728; /*0x101076ab1*/
  do /*0x101076aca*/
  {
    if ( a2 == a3 ) /*0x101076ad3*/
      return nullptr; /*0x101076ad3*/
    v6 = *a2; /*0x101076ad9*/
    if ( (v6 & 0x80u) != 0 ) /*0x101076ae0*/
    {
      v7 = v6 & 0x1F; /*0x101076b03*/
      v8 = a2[1] & 0x3F; /*0x101076b0c*/
      if ( (unsigned __int8)v6 <= 0xDFu ) /*0x101076b14*/
      {
        a2 += 2; /*0x101076b63*/
        v6 = v8 | (v7 << 6); /*0x101076b6e*/
        if ( v6 > 0xD ) /*0x101076b75*/
          goto LABEL_2; /*0x101076b75*/
      }
      else
      {
        v9 = (v8 << 6) | a2[2] & 0x3F; /*0x101076b23*/
        if ( (unsigned __int8)v6 < 0xF0u ) /*0x101076b2a*/
        {
          a2 += 3; /*0x101076b7c*/
          v6 = (v7 << 12) | v9; /*0x101076b87*/
          if ( v6 > 0xD ) /*0x101076b8e*/
            goto LABEL_2; /*0x101076b8e*/
        }
        else
        {
          v6 = ((v6 & 7) << 18) | (v9 << 6) | a2[3] & 0x3F; /*0x101076b44*/
          if ( v6 == 1114112 ) /*0x101076b4e*/
            return nullptr; /*0x101076b4e*/
          a2 += 4; /*0x101076b54*/
          if ( v6 > 0xD ) /*0x101076b5c*/
          {
LABEL_2:
            v5 = v6; /*0x101076ac0*/
            continue; /*0x101076ac0*/
          }
        }
      }
    }
    else
    {
      ++a2; /*0x101076ae2*/
      if ( v6 > 0xD ) /*0x101076ae9*/
        goto LABEL_2; /*0x101076ae9*/
    }
    v5 = 1114112; /*0x101076ba0*/
    if ( !_bittest(&v4, v6) ) /*0x101076baa*/
      goto LABEL_2; /*0x101076baa*/
  }
  while ( v5 == 1114112 ); /*0x101076aca*/
  if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 ) /*0x101076bc1*/
    return nullptr; /*0x101076bc1*/
  v10 = 9728; /*0x101076bc7*/
  while ( 2 ) /*0x101076bf2*/
  {
    if ( result != a3 ) /*0x101076bf2*/
    {
      v14 = *result; /*0x101076bf8*/
      if ( (v14 & 0x80u) == 0 ) /*0x101076bfd*/
      {
        ++result; /*0x101076bff*/
        if ( v14 > 0xD ) /*0x101076c05*/
        {
LABEL_45:
          v19 = v14; /*0x101076d20*/
          if ( v14 != 1114112 ) /*0x101076d2a*/
          {
            if ( v14 - 97 < 0x1A || v14 - 48 < 0xA || v14 - 45 < 2 || v14 == 43 ) /*0x101076cc8*/
            {
              v11 = *(_QWORD *)(a1 + 16); /*0x101076bd0*/
              v12 = v11; /*0x101076bd4*/
              if ( *(_QWORD *)a1 == v11 ) /*0x101076bda*/
              {
                v22 = a3; /*0x101076d35*/
                v20 = result; /*0x101076d4f*/
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h74c6f500ba1936c4( /*0x101076d52*/
                  a1,
                  v11,
                  1,
                  1,
                  1);
                result = v20; /*0x101076d5a*/
                a3 = v22; /*0x101076d5d*/
                v12 = *(_QWORD *)(a1 + 16); /*0x101076d61*/
              }
              v13 = *(_QWORD *)(a1 + 8); /*0x101076be0*/
            }
            else
            {
              if ( v14 == 58 ) /*0x101076cd2*/
                return result; /*0x101076cd2*/
              if ( v14 - 65 > 0x19 ) /*0x101076ce0*/
                goto LABEL_48; /*0x101076ce0*/
              v11 = *(_QWORD *)(a1 + 16); /*0x101076ce6*/
              v12 = v11; /*0x101076cea*/
              if ( *(_QWORD *)a1 == v11 ) /*0x101076cf0*/
              {
                v23 = a3; /*0x101076d6a*/
                v21 = result; /*0x101076d84*/
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h74c6f500ba1936c4( /*0x101076d87*/
                  a1,
                  v11,
                  1,
                  1,
                  1);
                result = v21; /*0x101076d8f*/
                a3 = v23; /*0x101076d92*/
                v12 = *(_QWORD *)(a1 + 16); /*0x101076d96*/
              }
              v13 = *(_QWORD *)(a1 + 8); /*0x101076cf2*/
              v19 |= 0x20u; /*0x101076cf6*/
            }
            *(_BYTE *)(v13 + v12) = v19; /*0x101076be4*/
            *(_QWORD *)(a1 + 16) = v11 + 1; /*0x101076beb*/
          }
          continue; /*0x101076beb*/
        }
LABEL_34:
        if ( _bittest(&v10, v14) ) /*0x101076c7f*/
          continue; /*0x101076c83*/
        goto LABEL_45; /*0x101076c83*/
      }
      v15 = v14 & 0x1F; /*0x101076c12*/
      v16 = result[1] & 0x3F; /*0x101076c1a*/
      if ( (unsigned __int8)v14 <= 0xDFu ) /*0x101076c21*/
      {
        result += 2; /*0x101076c63*/
        v14 = v16 | (v15 << 6); /*0x101076c6d*/
      }
      else
      {
        v17 = (v16 << 6) | result[2] & 0x3F; /*0x101076c30*/
        if ( (unsigned __int8)v14 < 0xF0u ) /*0x101076c36*/
        {
          result += 3; /*0x101076cff*/
          v14 = (v15 << 12) | v17; /*0x101076d09*/
          if ( v14 > 0xD ) /*0x101076d0f*/
            goto LABEL_45; /*0x101076d0f*/
          goto LABEL_34; /*0x101076d0f*/
        }
        v18 = result[3]; /*0x101076c3c*/
        result += 4; /*0x101076c40*/
        v14 = ((v15 & 7) << 18) | (v17 << 6) | v18 & 0x3F; /*0x101076c54*/
        if ( v14 == 1114112 ) /*0x101076c5c*/
          break; /*0x101076c5c*/
      }
      if ( v14 > 0xD ) /*0x101076c73*/
        goto LABEL_45; /*0x101076c73*/
      goto LABEL_34; /*0x101076c73*/
    }
    break;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 ) /*0x101076da3*/
    return result; /*0x101076da3*/
LABEL_48:
  *(_QWORD *)(a1 + 16) = 0; /*0x101076da5*/
  return nullptr; /*0x101076db3*/
}