// mac 1.2.2 NEW codexmate_lib4core12debug_bundle24default_bundle_f 0x100d84b90 d=2
__int64 __fastcall chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86(int a1)
{
  __int64 result; // rax
  bool v2; // of
  int v3; // edi
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r9
  unsigned int v9; // r11d
  unsigned int v10; // esi
  int v11; // ecx
  int v12; // esi

  result = 0; /*0x100d84b94*/
  v2 = __OFADD__(365, a1); /*0x100d84b96*/
  v3 = a1 + 365; /*0x100d84b96*/
  if ( !v2 ) /*0x100d84b9c*/
  {
    v4 = (unsigned int)(v3 / 146097); /*0x100d84bba*/
    v5 = (v3 % 146097) >> 31; /*0x100d84bc6*/
    v6 = v3 % 146097 + (v5 & 0x23AB1u); /*0x100d84bd3*/
    v7 = (unsigned int)v6 / 0x16D; /*0x100d84bea*/
    v8 = (unsigned int)v6 % 0x16D; /*0x100d84bf6*/
    v9 = anon_a11b1b15cfa245962be9d291ea8530de_15[v7]; /*0x100d84c00*/
    v10 = (unsigned int)v6 % 0x16D - v9; /*0x100d84c08*/
    if ( (unsigned int)v6 % 0x16D >= v9 ) /*0x100d84c0b*/
    {
      if ( (unsigned int)v6 > 0x23A4F ) /*0x100d84c32*/
        core::panicking::panic_bounds_check::h56740b1198b22635( /*0x100d84ca0*/
          v7,
          400,
          &anon_a11b1b15cfa245962be9d291ea8530de_20,
          v4,
          v6,
          v8);
    }
    else
    {
      v7 = (unsigned int)(v7 - 1); /*0x100d84c0d*/
      if ( (unsigned int)v7 > 0x190 ) /*0x100d84c15*/
        core::panicking::panic_bounds_check::h56740b1198b22635( /*0x100d84c8f*/
          v7,
          401,
          &anon_a11b1b15cfa245962be9d291ea8530de_17,
          v4,
          v6,
          v8);
      v10 = v8 - anon_a11b1b15cfa245962be9d291ea8530de_15[v7] + 365; /*0x100d84c26*/
    }
    if ( v10 <= 0x16D ) /*0x100d84c3a*/
    {
      v11 = 400 * (v4 + v5); /*0x100d84c3e*/
      if ( (unsigned int)(v7 + v11 - 0x3FFFF) >= 0xFFF80002 ) /*0x100d84c51*/
      {
        v12 = 16 * v10; /*0x100d84c65*/
        result = 0; /*0x100d84c76*/
        if ( ((anon_a11b1b15cfa245962be9d291ea8530de_19[v7] /*0x100d84c7e*/
             | (unsigned __int16)(v12 + (((_WORD)v11 + (_WORD)v7) << 13) + 16))
            & 0x1FF8u) < 0x16E1 )
          return anon_a11b1b15cfa245962be9d291ea8530de_19[v7] | (unsigned int)(v12 + ((v11 + (_DWORD)v7) << 13) + 16); /*0x100d84c7e*/
      }
    }
  }
  return result; /*0x100d84c81*/
}