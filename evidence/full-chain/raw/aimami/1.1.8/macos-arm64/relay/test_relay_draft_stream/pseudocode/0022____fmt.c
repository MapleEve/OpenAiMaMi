// mac 1.1.8 test_relay_draft_stream node va=0x10106c0d0 depth=3
// _::fmt
__int64 __fastcall _$LT$u16$u20$as$u20$itoa..Unsigned$GT$::fmt::he77eaf79f8f55622(unsigned __int16 a1, __int64 a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // r8
  int v5; // edx
  __int64 result; // rax

  if ( a1 > 0x3E7u ) /*0x10106c0df*/
  {
    v2 = (unsigned int)(839 * (a1 >> 4)) >> 19; /*0x10106c0ec*/
    v3 = a1 % 0x2710u; /*0x10106c0f9*/
    v4 = (5243 * v3) >> 19; /*0x10106c103*/
    v5 = v3 - 100 * v4; /*0x10106c10b*/
    *(_WORD *)(a2 + 1) = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[v4]; /*0x10106c119*/
    result = 1; /*0x10106c11d*/
LABEL_5:
    *(_WORD *)(a2 + 3) = itoa::DECIMAL_PAIRS::hd75bc553c4f4dfb2[v5]; /*0x10106c146*/
    goto LABEL_6; /*0x10106c154*/
  }
  result = 5; /*0x10106c124*/
  LOWORD(v2) = a1; /*0x10106c129*/
  if ( a1 > 9u ) /*0x10106c12f*/
  {
    v2 = (5243 * (unsigned int)a1) >> 19; /*0x10106c138*/
    v5 = a1 - 100 * v2; /*0x10106c13e*/
    result = 3; /*0x10106c141*/
    goto LABEL_5; /*0x10106c141*/
  }
LABEL_6:
  if ( !a1 || (_WORD)v2 ) /*0x10106c160*/
    *(_BYTE *)(a2 + result-- - 1) = v2 | 0x30; /*0x10106c167*/
  return result; /*0x10106c162*/
}