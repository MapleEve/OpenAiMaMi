// mac 1.1.8 test_relay_draft_stream node va=0x10106c280 depth=3
// _::fmt
__int64 __fastcall _$LT$u64$u20$as$u20$itoa..Unsigned$GT$::fmt::h589955acf8b227ca(unsigned __int64 a1, _WORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rax

  result = 20; /*0x10106c280*/
  v3 = a1; /*0x10106c285*/
  if ( a1 < 0x3E8 ) /*0x10106c28f*/
    goto LABEL_7; /*0x10106c28f*/
  v3 = a1 / 0x2710; /*0x10106c2a5*/
  v4 = a1 % 0x2710; /*0x10106c2b1*/
  v5 = (unsigned int)(5243 * v4) >> 19; /*0x10106c2b9*/
  a2[8] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[v5]; /*0x10106c2ce*/
  a2[9] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[(unsigned int)(v4 - 100 * v5)]; /*0x10106c2d7*/
  result = 16; /*0x10106c2db*/
  if ( a1 <= 0x98967F ) /*0x10106c2e7*/
    goto LABEL_7; /*0x10106c2e7*/
  v6 = v3 - 10000 * ((unsigned int)((0xD1B71758E2197LL * (unsigned __int128)v3) >> 64) >> 1); /*0x10106c30b*/
  v7 = (unsigned int)(5243 * v6) >> 19; /*0x10106c325*/
  v3 = a1 / 0x5F5E100; /*0x10106c32f*/
  a2[6] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[v7]; /*0x10106c337*/
  a2[7] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[(unsigned int)(v6 - 100 * v7)]; /*0x10106c340*/
  result = 12; /*0x10106c34b*/
  if ( a1 >> 11 < 0x2E90EDD ) /*0x10106c357*/
    goto LABEL_7; /*0x10106c357*/
  v8 = v3 - 10000 * ((0x68DB8BAC710CCLL * (unsigned __int128)v3) >> 64); /*0x10106c379*/
  v9 = (unsigned int)(5243 * v8) >> 19; /*0x10106c393*/
  v3 = a1 / 0xE8D4A51000LL; /*0x10106c39d*/
  a2[4] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[v9]; /*0x10106c3a5*/
  a2[5] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[(unsigned int)(v8 - 100 * v9)]; /*0x10106c3ae*/
  result = 8; /*0x10106c3b2*/
  if ( a1 < 0x38D7EA4C68000LL /*0x10106c429*/
    || (v10 = v3 - 10000 * ((unsigned int)((27487791 * v3) >> 32) >> 6),
        v11 = (unsigned int)(5243 * v10) >> 19,
        v3 = a1 / 0x2386F26FC10000LL,
        a2[2] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[v11],
        a2[3] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[(unsigned int)(v10 - 100 * v11)],
        result = 4,
        a1 < 0x8AC7230489E80000LL) )
  {
LABEL_7:
    if ( v3 > 9 ) /*0x10106c455*/
    {
      *(_WORD *)((char *)a2 + result - 2) = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[(unsigned int)v3 /*0x10106c473*/
                                                                                 - 100
                                                                                 * ((unsigned int)(5243 * v3) >> 19)];
      result -= 2; /*0x10106c478*/
      v3 = (unsigned int)(5243 * v3) >> 19; /*0x10106c47c*/
    }
  }
  else
  {
    v12 = (unsigned int)(5243 * v3) >> 19; /*0x10106c431*/
    *a2 = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[v12]; /*0x10106c43f*/
    a2[1] = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[(unsigned int)(v3 - 100 * v12)]; /*0x10106c447*/
    v3 = 0; /*0x10106c44b*/
    result = 0; /*0x10106c44d*/
  }
  if ( !a1 || v3 ) /*0x10106c487*/
  {
    if ( (unsigned __int64)--result >= 0x14 ) /*0x10106c491*/
      core::panicking::panic_bounds_check::h56740b1198b22635(-1, 20, &off_1015AC7C0); /*0x10106c4b1*/
    *((_BYTE *)a2 + result) = v3 | 0x30; /*0x10106c496*/
  }
  return result; /*0x10106c489*/
}