// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1010e25c0 depth=3
__int64 __fastcall core::net::parser::Parser::read_number::_$u7b$$u7b$closure$u7d$$u7d$::h70ac9ea5217e4673(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // r8
  _BYTE *v4; // r9
  unsigned int v5; // r10d
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  _BYTE *v12; // r9
  __int64 v13; // r10
  unsigned int v14; // r11d
  __int64 v15; // r10
  unsigned __int16 v16; // ax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  __int16 v19; // ax
  unsigned __int16 v20; // kr00_2
  bool v21; // cf
  unsigned int v22; // ebx
  __int16 v23; // ax
  unsigned __int16 v24; // kr04_2
  __int64 result; // rax

  v2 = a2[1]; /*0x1010e25ca*/
  if ( !v2 ) /*0x1010e25d1*/
  {
    v12 = (_BYTE *)*a2; /*0x1010e2683*/
    v3 = 0; /*0x1010e2686*/
    v8 = 0; /*0x1010e268c*/
    v2 = 0; /*0x1010e2691*/
    v13 = 0; /*0x1010e2696*/
    if ( *(_BYTE *)a1 ) /*0x1010e2689*/
      goto LABEL_34; /*0x1010e26a1*/
LABEL_31:
    *a2 = v12; /*0x1010e274b*/
    a2[1] = 0; /*0x1010e274e*/
    LOWORD(a2) = 1; /*0x1010e2756*/
    result = 0; /*0x1010e275c*/
    if ( !v2 ) /*0x1010e2761*/
      return result; /*0x1010e2761*/
    goto LABEL_37; /*0x1010e2761*/
  }
  v3 = *(_BYTE *)*a2 == 48; /*0x1010e25dd*/
  if ( *(_BYTE *)a1 )
  {
    v4 = (_BYTE *)*a2; /*0x1010e25ea*/
    v5 = *(_DWORD *)(a1 + 16); /*0x1010e25ed*/
    if ( v5 - 2 <= 0x22 ) /*0x1010e25f8*/
    {
      v6 = *(_QWORD *)(a1 + 8); /*0x1010e25fe*/
      v7 = 0; /*0x1010e2602*/
      v8 = 0; /*0x1010e2604*/
      if ( v5 <= 0xA ) /*0x1010e260a*/
      {
        while ( 1 ) /*0x1010e2655*/
        {
          v11 = (unsigned __int8)v4[v7] - 48; /*0x1010e2655*/
          if ( v11 >= v5 ) /*0x1010e265b*/
            break; /*0x1010e265b*/
          if ( v7 >= v6 ) /*0x1010e2664*/
          {
LABEL_45:
            *a2 = &v4[v7 + 1]; /*0x1010e27d7*/
            a2[1] = v2 + ~v7; /*0x1010e27e5*/
            return 0; /*0x1010e27e5*/
          }
          ++v7; /*0x1010e266a*/
          v8 = v11 + v5 * v8; /*0x1010e2671*/
          if ( v2 == v7 ) /*0x1010e2676*/
          {
LABEL_14:
            v12 = &v4[v2]; /*0x1010e2678*/
            v13 = 0; /*0x1010e267b*/
            goto LABEL_34; /*0x1010e267e*/
          }
        }
      }
      else
      {
        while ( 1 ) /*0x1010e2610*/
        {
          v9 = (unsigned __int8)v4[v7]; /*0x1010e2610*/
          v10 = v9 - 48; /*0x1010e2621*/
          if ( v9 >= 0x3A ) /*0x1010e2629*/
            v10 = ((v9 - 65) & 0xFFFFFFDF) + 10; /*0x1010e2629*/
          if ( v10 >= v5 ) /*0x1010e2630*/
            break; /*0x1010e2630*/
          if ( v7 >= v6 ) /*0x1010e2639*/
            goto LABEL_45; /*0x1010e2639*/
          ++v7; /*0x1010e263f*/
          v8 = v10 + v5 * v8; /*0x1010e2646*/
          if ( v2 == v7 ) /*0x1010e264b*/
            goto LABEL_14; /*0x1010e264b*/
        }
      }
      v12 = &v4[v7]; /*0x1010e2768*/
      v13 = v2 - v7; /*0x1010e276e*/
      v2 = v7; /*0x1010e2771*/
LABEL_34:
      *a2 = v12; /*0x1010e2774*/
      a2[1] = v13; /*0x1010e2777*/
      LODWORD(a2) = v8 < 0x10000; /*0x1010e2783*/
      result = 0; /*0x1010e2787*/
      if ( !v2 ) /*0x1010e278c*/
        return result; /*0x1010e278c*/
      goto LABEL_37; /*0x1010e278c*/
    }
LABEL_48:
    *a2 = v4 + 1; /*0x1010e27f6*/
    a2[1] = v2 - 1; /*0x1010e27ff*/
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      (__int64)"to_digit: invalid radix -- radix must be in the range 2 to 36 inclusive",
      143,
      (__int64)&off_1015B0638);
  }
  v4 = (_BYTE *)*a2; /*0x1010e26ac*/
  v14 = *(_DWORD *)(a1 + 16); /*0x1010e26af*/
  if ( v14 - 2 > 0x22 ) /*0x1010e26ba*/
    goto LABEL_48; /*0x1010e26ba*/
  v15 = 0; /*0x1010e26c0*/
  v16 = 0; /*0x1010e26c3*/
  if ( v14 <= 0xA ) /*0x1010e26c9*/
  {
    while ( 1 ) /*0x1010e2725*/
    {
      v22 = (unsigned __int8)v4[v15] - 48; /*0x1010e2725*/
      if ( v22 >= v14 ) /*0x1010e272b*/
        break; /*0x1010e272b*/
      v24 = v16; /*0x1010e272d*/
      v23 = v14 * v16; /*0x1010e272d*/
      if ( !is_mul_ok(v14, v24) || (v21 = __CFADD__((_WORD)v22, v23), v16 = v22 + v23, v21) ) /*0x1010e273a*/
      {
LABEL_44:
        *a2 = &v4[v15 + 1]; /*0x1010e27c3*/
        a2[1] = v2 + ~v15; /*0x1010e27d1*/
        return 0; /*0x1010e27e9*/
      }
      if ( v2 == ++v15 ) /*0x1010e2746*/
      {
LABEL_30:
        v12 = &v4[v2]; /*0x1010e2748*/
        goto LABEL_31; /*0x1010e2748*/
      }
    }
  }
  else
  {
    while ( 1 ) /*0x1010e26d0*/
    {
      v17 = (unsigned __int8)v4[v15]; /*0x1010e26d0*/
      v18 = v17 - 48; /*0x1010e26e1*/
      if ( v17 >= 0x3A ) /*0x1010e26e7*/
        v18 = ((v17 - 65) & 0xFFFFFFDF) + 10; /*0x1010e26e7*/
      if ( v18 >= v14 ) /*0x1010e26ee*/
        break; /*0x1010e26ee*/
      v20 = v16; /*0x1010e26f4*/
      v19 = v14 * v16; /*0x1010e26f4*/
      if ( !is_mul_ok(v14, v20) ) /*0x1010e26f4*/
        goto LABEL_44; /*0x1010e26f4*/
      v21 = __CFADD__((_WORD)v18, v19); /*0x1010e26fe*/
      v16 = v18 + v19; /*0x1010e26fe*/
      if ( v21 ) /*0x1010e2701*/
        goto LABEL_44; /*0x1010e2701*/
      if ( v2 == ++v15 ) /*0x1010e270d*/
        goto LABEL_30; /*0x1010e270d*/
    }
  }
  *a2 = &v4[v15]; /*0x1010e2796*/
  a2[1] = v2 - v15; /*0x1010e2799*/
  LOWORD(a2) = 1; /*0x1010e279d*/
  v2 = v15; /*0x1010e27a3*/
  result = 0; /*0x1010e27a6*/
  if ( v15 ) /*0x1010e27ab*/
  {
LABEL_37:
    if ( *(_BYTE *)(a1 + 20) ) /*0x1010e27ad*/
      result = (unsigned int)a2; /*0x1010e27b1*/
    if ( !v3 ) /*0x1010e27b7*/
      result = (unsigned int)a2; /*0x1010e27b7*/
    if ( v2 == 1 ) /*0x1010e27be*/
      return (unsigned int)a2; /*0x1010e27be*/
  }
  return result; /*0x1010e27ef*/
}