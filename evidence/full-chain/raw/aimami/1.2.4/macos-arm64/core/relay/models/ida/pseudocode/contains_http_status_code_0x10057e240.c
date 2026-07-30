// __ZN13codexmate_lib4core5relay6models25contains_http_status_code @ 0x10057e240 | 1.2.4 NEW-delta
char __fastcall codexmate_lib::core::relay::models::contains_http_status_code::h18fe279011d8781e(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  char result; // al
  unsigned __int64 v4; // rcx
  bool v5; // r9

  if ( a2 < 3 ) /*0x10057e244*/
    return 0; /*0x10057e244*/
  if ( (unsigned __int16)(*(_WORD *)a3 ^ *(_WORD *)a1) | (unsigned __int8)(*(_BYTE *)(a3 + 2) ^ *(_BYTE *)(a1 + 2)) ) /*0x10057e256*/
  {
    if ( a2 == 3 ) /*0x10057e263*/
      return 0; /*0x10057e265*/
  }
  else
  {
    result = 1; /*0x10057e268*/
    if ( a2 == 3 || (unsigned __int8)(*(_BYTE *)(a1 + 3) - 58) < 0xF6u ) /*0x10057e27a*/
      return result; /*0x10057e27a*/
  }
  v4 = 0; /*0x10057e280*/
  while ( 1 ) /*0x10057e29d*/
  {
    if ( !((unsigned __int16)(*(_WORD *)a3 ^ *(_WORD *)(a1 + v4 + 1)) /*0x10057e2ae*/
         | (unsigned __int8)(*(_BYTE *)(a3 + 2) ^ *(_BYTE *)(a1 + v4 + 3))) )
    {
      if ( v4 >= a2 ) /*0x10057e2b7*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v4, a2, &off_1019741C0); /*0x10057e300*/
      result = 1; /*0x10057e2bd*/
      v5 = 1; /*0x10057e2bf*/
      if ( v4 + 4 < a2 ) /*0x10057e2c5*/
        v5 = (unsigned __int8)(*(_BYTE *)(a1 + v4 + 4) - 58) < 0xF6u; /*0x10057e2d5*/
      if ( (unsigned __int8)(*(_BYTE *)(a1 + v4) - 58) <= 0xF5u && v5 ) /*0x10057e2eb*/
        break; /*0x10057e2eb*/
    }
    if ( a2 - 3 == ++v4 ) /*0x10057e296*/
      return 0; /*0x10057e296*/
  }
  return result; /*0x10057e267*/
}