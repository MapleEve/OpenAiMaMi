// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_route node 0x100950d30 depth=2
__int64 __fastcall chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86(int a1)
{
  __int64 result; // rax
  bool v2; // of
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rdi
  unsigned int v8; // r11d
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // esi

  result = 0; /*0x100950d34*/
  v2 = __OFADD__(365, a1); /*0x100950d36*/
  v3 = a1 + 365; /*0x100950d36*/
  if ( !v2 ) /*0x100950d3c*/
  {
    v4 = v3 / 146097; /*0x100950d5a*/
    v5 = (v3 % 146097) >> 31; /*0x100950d66*/
    v6 = v3 % 146097 + (v5 & 0x23AB1); /*0x100950d73*/
    v7 = v6 / 0x16D; /*0x100950d8a*/
    v8 = anon_a11b1b15cfa245962be9d291ea8530de_15[v7]; /*0x100950da0*/
    v9 = v6 % 0x16D - v8; /*0x100950da8*/
    if ( v6 % 0x16D >= v8 ) /*0x100950dab*/
    {
      if ( v6 > 0x23A4F ) /*0x100950dd2*/
        core::panicking::panic_bounds_check::h56740b1198b22635( /*0x100950e40*/
          v7,
          400,
          (__int64)&anon_a11b1b15cfa245962be9d291ea8530de_20);
    }
    else
    {
      v7 = (unsigned int)(v7 - 1); /*0x100950dad*/
      if ( (unsigned int)v7 > 0x190 ) /*0x100950db5*/
        core::panicking::panic_bounds_check::h56740b1198b22635( /*0x100950e2f*/
          v7,
          401,
          (__int64)&anon_a11b1b15cfa245962be9d291ea8530de_17);
      v9 = v6 % 0x16D - anon_a11b1b15cfa245962be9d291ea8530de_15[v7] + 365; /*0x100950dc6*/
    }
    if ( v9 <= 0x16D ) /*0x100950dda*/
    {
      v10 = 400 * (v4 + v5); /*0x100950dde*/
      if ( (unsigned int)(v7 + v10 - 0x3FFFF) >= 0xFFF80002 ) /*0x100950df1*/
      {
        v11 = 16 * v9; /*0x100950e05*/
        result = 0; /*0x100950e16*/
        if ( ((anon_a11b1b15cfa245962be9d291ea8530de_19[v7] /*0x100950e1e*/
             | (unsigned __int16)(v11 + (((_WORD)v10 + (_WORD)v7) << 13) + 16))
            & 0x1FF8u) < 0x16E1 )
          return anon_a11b1b15cfa245962be9d291ea8530de_19[v7] | (unsigned int)(v11 + ((v10 + (_DWORD)v7) << 13) + 16); /*0x100950e1e*/
      }
    }
  }
  return result; /*0x100950e21*/
}