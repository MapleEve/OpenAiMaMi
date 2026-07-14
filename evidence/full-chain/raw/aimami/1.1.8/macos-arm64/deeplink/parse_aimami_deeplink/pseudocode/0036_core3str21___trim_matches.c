// mac 1.1.8 parse_aimami_deeplink node va=0x10107e7f0 depth=3
// core3str21_::trim_matches
unsigned __int8 *__fastcall core::str::_$LT$impl$u20$str$GT$::trim_matches::h3fd340720b02dcfc(
        unsigned __int8 *a1,
        __int64 a2)
{
  unsigned __int8 *v3; // rsi
  __int64 v4; // r8
  unsigned __int8 *v5; // r9
  unsigned __int8 *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r10d
  int v9; // edx
  int v10; // r11d
  int v11; // r8d
  unsigned __int8 *v12; // r9
  int v13; // r10d
  char v14; // r11
  char v15; // bl
  int v16; // ebx
  int v17; // r11d

  v3 = &a1[a2]; /*0x10107e7fa*/
  v4 = 0; /*0x10107e7fd*/
  v5 = a1; /*0x10107e800*/
  do /*0x10107e827*/
  {
    v7 = v4; /*0x10107e82d*/
    if ( v5 == v3 ) /*0x10107e833*/
    {
      v6 = v3; /*0x10107e8ac*/
      v7 = 0; /*0x10107e8b4*/
      break; /*0x10107e8b6*/
    }
    v8 = *v5; /*0x10107e835*/
    if ( (v8 & 0x80u) == 0 ) /*0x10107e83c*/
    {
      v6 = v5 + 1; /*0x10107e810*/
    }
    else
    {
      v9 = v8 & 0x1F; /*0x10107e841*/
      v10 = v5[1] & 0x3F; /*0x10107e849*/
      if ( (unsigned __int8)v8 <= 0xDFu ) /*0x10107e851*/
      {
        v6 = v5 + 2; /*0x10107e888*/
        v8 = v10 | (v9 << 6); /*0x10107e892*/
      }
      else
      {
        v11 = (v10 << 6) | v5[2] & 0x3F; /*0x10107e860*/
        if ( (unsigned __int8)v8 < 0xF0u ) /*0x10107e867*/
        {
          v6 = v5 + 3; /*0x10107e89a*/
          v8 = (v9 << 12) | v11; /*0x10107e8a4*/
        }
        else
        {
          v6 = v5 + 4; /*0x10107e869*/
          v8 = ((v8 & 7) << 18) | (v11 << 6) | v5[3] & 0x3F; /*0x10107e883*/
        }
      }
    }
    v4 = v7 + v6 - v5; /*0x10107e81a*/
    v5 = v6; /*0x10107e81d*/
  }
  while ( v8 < 0x21 ); /*0x10107e827*/
  while ( v6 != v3 ) /*0x10107e8cd*/
  {
    v12 = v3; /*0x10107e8cf*/
    v13 = (char)*(v3 - 1); /*0x10107e8d2*/
    if ( v13 >= 0 ) /*0x10107e8da*/
    {
      --v3; /*0x10107e8c0*/
      if ( (unsigned int)v13 >= 0x21 ) /*0x10107e8c8*/
        return &a1[v7]; /*0x10107e8c8*/
    }
    else
    {
      v14 = *(v3 - 2); /*0x10107e8dc*/
      if ( v14 >= -64 ) /*0x10107e8e5*/
      {
        v3 -= 2; /*0x10107e90a*/
        v17 = v14 & 0x1F; /*0x10107e90e*/
      }
      else
      {
        v15 = *(v3 - 3); /*0x10107e8e7*/
        if ( v15 >= -64 ) /*0x10107e8ef*/
        {
          v3 -= 3; /*0x10107e914*/
          v16 = v15 & 0xF; /*0x10107e918*/
        }
        else
        {
          v3 -= 4; /*0x10107e8f1*/
          v16 = ((*(v12 - 4) & 7) << 6) | v15 & 0x3F; /*0x10107e905*/
        }
        v17 = (v16 << 6) | v14 & 0x3F; /*0x10107e922*/
      }
      if ( ((v17 << 6) | v13 & 0x3Fu) >= 0x21 ) /*0x10107e934*/
        return &a1[v7]; /*0x10107e934*/
    }
  }
  return &a1[v7]; /*0x10107e945*/
}