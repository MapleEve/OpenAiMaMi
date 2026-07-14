// mac 1.1.8 parse_aimami_deeplink node va=0x10107adb0 depth=3
// _::split_prefix
bool __fastcall _$LT$$RF$str$u20$as$u20$url..parser..Pattern$GT$::split_prefix::h30cf01d282740e94(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int8 **a3)
{
  unsigned __int8 *v3; // rsi
  unsigned __int8 *v4; // r9
  unsigned __int8 *v5; // rcx
  int v6; // r8d
  bool result; // al
  int v8; // r10d
  int v9; // r11d
  int v10; // r14d
  int v11; // ebx
  unsigned __int8 v12; // r10
  int v13; // ebx
  unsigned int v14; // r11d
  int v15; // ebx
  int v16; // r15d
  int v17; // r14d

  v3 = &a1[a2]; /*0x10107adbb*/
  v4 = *a3; /*0x10107adbe*/
  v5 = a3[1]; /*0x10107adc1*/
  v6 = 9728; /*0x10107adc5*/
LABEL_2:
  result = a1 == v3; /*0x10107adcb*/
  if ( a1 != v3 ) /*0x10107add1*/
  {
    v8 = *a1; /*0x10107add7*/
    if ( (v8 & 0x80u) != 0 ) /*0x10107adde*/
    {
      v9 = v8 & 0x1F; /*0x10107adf3*/
      v10 = a1[1] & 0x3F; /*0x10107adfc*/
      if ( (unsigned __int8)v8 <= 0xDFu ) /*0x10107ae04*/
      {
        a1 += 2; /*0x10107ae3a*/
        v8 = v10 | (v9 << 6); /*0x10107ae45*/
      }
      else
      {
        v11 = (v10 << 6) | a1[2] & 0x3F; /*0x10107ae11*/
        if ( (unsigned __int8)v8 < 0xF0u ) /*0x10107ae18*/
        {
          a1 += 3; /*0x10107ae4a*/
          v8 = (v9 << 12) | v11; /*0x10107ae55*/
        }
        else
        {
          v12 = a1[3]; /*0x10107ae1a*/
          a1 += 4; /*0x10107ae1f*/
          v8 = ((v9 & 7) << 18) | (v11 << 6) | v12 & 0x3F; /*0x10107ae35*/
        }
      }
    }
    else
    {
      ++a1; /*0x10107ade0*/
    }
    while ( 1 ) /*0x10107ae6f*/
    {
      if ( v4 == v5 ) /*0x10107ae72*/
        return 0; /*0x10107af6b*/
      *a3 = v4 + 1; /*0x10107ae7c*/
      v14 = *v4; /*0x10107ae7f*/
      if ( (v14 & 0x80u) == 0 ) /*0x10107ae86*/
      {
        ++v4; /*0x10107ae88*/
        if ( v14 <= 0xD ) /*0x10107ae8f*/
          goto LABEL_22; /*0x10107ae8f*/
        goto LABEL_10; /*0x10107ae8f*/
      }
      v15 = v14 & 0x1F; /*0x10107aea3*/
      *a3 = v4 + 2; /*0x10107aeaa*/
      v16 = v4[1] & 0x3F; /*0x10107aeb2*/
      if ( (unsigned __int8)v14 <= 0xDFu ) /*0x10107aeba*/
        break; /*0x10107aeba*/
      *a3 = v4 + 3; /*0x10107aec0*/
      v17 = (v16 << 6) | v4[2] & 0x3F; /*0x10107aed0*/
      if ( (unsigned __int8)v14 >= 0xF0u ) /*0x10107aed7*/
      {
        *a3 = v4 + 4; /*0x10107aedd*/
        v14 = ((v14 & 7) << 18) | (v17 << 6) | v4[3] & 0x3F; /*0x10107aef6*/
        v4 += 4; /*0x10107aef9*/
        if ( v14 == 1114112 ) /*0x10107af03*/
          return 0; /*0x10107af03*/
LABEL_21:
        if ( v14 <= 0xD ) /*0x10107af24*/
          goto LABEL_22; /*0x10107af24*/
        goto LABEL_10; /*0x10107af24*/
      }
      v4 += 3; /*0x10107af44*/
      v14 = (v15 << 12) | v17; /*0x10107af47*/
      if ( v14 <= 0xD ) /*0x10107af4e*/
      {
LABEL_22:
        v13 = 1114112; /*0x10107af2a*/
        if ( _bittest(&v6, v14) ) /*0x10107af33*/
          goto LABEL_11; /*0x10107af33*/
      }
LABEL_10:
      v13 = v14; /*0x10107ae60*/
LABEL_11:
      if ( v13 != 1114112 ) /*0x10107ae69*/
      {
        if ( v13 == v8 ) /*0x10107af63*/
          goto LABEL_2; /*0x10107af63*/
        return result; /*0x10107af63*/
      }
    }
    v4 += 2; /*0x10107af0d*/
    v14 = v16 | (v15 << 6); /*0x10107af10*/
    goto LABEL_21; /*0x10107af10*/
  }
  return result; /*0x10107af6d*/
}