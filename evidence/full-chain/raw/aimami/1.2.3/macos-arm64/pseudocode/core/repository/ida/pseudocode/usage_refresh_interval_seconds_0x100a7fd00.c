// __ZN13codexmate_lib4core10repository30usage_refresh_interval_seconds @ 0x100a7fd00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::usage_refresh_interval_seconds::h4f46c0c2397578de(
        __int64 a1,
        __int64 a2)
{
  const char *v2; // rax
  __int64 result; // rax
  const char *v4; // rcx
  bool v5; // zf

  v2 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_131; /*0x100a7fd00*/
  if ( a2 == 2 ) /*0x100a7fd0b*/
  {
    v4 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_131; /*0x100a7fd33*/
    if ( *(_WORD *)a1 != 27953 ) /*0x100a7fd36*/
    {
      if ( *(_WORD *)a1 == 27955 ) /*0x100a7fd3d*/
      {
        v4 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_318; /*0x100a7fd5e*/
      }
      else
      {
        v4 = nullptr; /*0x100a7fd49*/
        if ( __ROL2__(*(_WORD *)a1, 8) == 13677 ) /*0x100a7fd58*/
          v4 = "5musage_401_retry"; /*0x100a7fd58*/
      }
    }
    if ( v4 ) /*0x100a7fd68*/
      v2 = v4; /*0x100a7fd68*/
  }
  else if ( a2 == 3 && !(*(_WORD *)a1 ^ 0x3033 | *(unsigned __int8 *)(a1 + 2) ^ 0x73) ) /*0x100a7fd23*/
  {
    return 30; /*0x100a7fd2d*/
  }
  if ( *(_WORD *)v2 == 27953 ) /*0x100a7fd75*/
    return 60; /*0x100a7fd9d*/
  if ( *(_WORD *)v2 == 27955 ) /*0x100a7fd7c*/
    return 180; /*0x100a7fda4*/
  v5 = __ROL2__(*(_WORD *)v2, 8) == 13677; /*0x100a7fd88*/
  result = 60; /*0x100a7fd92*/
  if ( v5 ) /*0x100a7fd97*/
    return 300; /*0x100a7fd97*/
  return result; /*0x100a7fd2d*/
}