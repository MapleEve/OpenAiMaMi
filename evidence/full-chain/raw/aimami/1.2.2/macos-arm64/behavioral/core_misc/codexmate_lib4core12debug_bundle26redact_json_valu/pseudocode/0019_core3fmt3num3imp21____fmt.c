// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1013939a0 d=2
__int64 __fastcall core::fmt::num::imp::_$LT$impl$u20$u16$GT$::_fmt::he37f58232fb48d79(
        unsigned __int16 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // r9

  if ( a1 <= 0x3E7u ) /*0x1013939b2*/
  {
    LOWORD(v4) = a1; /*0x101393a09*/
    v5 = a3; /*0x101393a0b*/
    if ( a1 < 0xAu ) /*0x101393a12*/
      goto LABEL_6; /*0x101393a12*/
    v5 = a3 - 2; /*0x101393a14*/
    v4 = (unsigned int)(5243 * (a1 >> 2)) >> 17; /*0x101393a23*/
    v6 = 2 * (a1 % 0x64u); /*0x101393a34*/
    v7 = a00010203040506[v6]; /*0x101393a3e*/
  }
  else
  {
    v4 = (unsigned int)(839 * (a1 >> 4)) >> 19; /*0x1013939bf*/
    v5 = a3 - 4; /*0x1013939c2*/
    *(_WORD *)(a2 + a3 - 4) = *(_WORD *)&a00010203040506[2 * ((5243 * (a1 % 0x2710u)) >> 19)]; /*0x1013939f5*/
    v6 = 2 /*0x1013939ff*/
       * (unsigned int)(unsigned __int16)(a1 % 0x2710u - 100 * ((unsigned __int16)((5243 * (a1 % 0x2710u)) >> 16) >> 3));
    v7 = a00010203040506[v6]; /*0x101393a02*/
  }
  *(_BYTE *)(a2 + a3 - 2) = v7; /*0x101393a43*/
  *(_BYTE *)(a2 + a3 - 1) = a00010203040506[v6 + 1]; /*0x101393a55*/
LABEL_6:
  if ( (_WORD)v4 != 0 || a1 == 0 ) /*0x101393a64*/
    *(_BYTE *)(a2 + v5-- - 1) = a00010203040506[2 * (v4 & 0xF) + 1]; /*0x101393a7c*/
  return v5 + a2; /*0x101393a8a*/
}