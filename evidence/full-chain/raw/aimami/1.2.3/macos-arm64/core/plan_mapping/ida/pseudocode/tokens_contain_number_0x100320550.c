// __ZN13codexmate_lib4core12plan_mapping21tokens_contain_number @ 0x100320550 | 基线 same-set
bool __fastcall codexmate_lib::core::plan_mapping::tokens_contain_number::h9ae30474bd3c20a4(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // r15
  char *v8; // rdx
  unsigned __int64 v9; // rcx

  v5 = 24 * a2; /*0x100320564*/
  do /*0x100320589*/
  {
    v7 = v5; /*0x100320589*/
    if ( !v5 ) /*0x10032058f*/
      break; /*0x10032058f*/
    v8 = *(char **)(a1 + 8); /*0x100320591*/
    v9 = *(_QWORD *)(a1 + 16); /*0x100320595*/
    if ( v9 == 3 ) /*0x10032059d*/
    {
      if ( !((unsigned __int16)(*(_WORD *)a3 ^ *(_WORD *)v8) | (unsigned __int8)(a3[2] ^ v8[2])) ) /*0x1003205b1*/
        return v7 != 0; /*0x1003205b4*/
    }
    else if ( v9 < 3 ) /*0x1003205c0*/
    {
      goto LABEL_2; /*0x1003205c0*/
    }
    if ( !((unsigned __int16)(*(_WORD *)v8 ^ *(_WORD *)a3) | (unsigned __int8)(v8[2] ^ a3[2])) /*0x1003205ee*/
      || !((unsigned __int16)(*(_WORD *)&v8[v9 - 3] ^ *(_WORD *)a3) | (unsigned __int8)(v8[v9 - 1] ^ a3[2])) )
    {
      return v7 != 0; /*0x1003205f1*/
    }
LABEL_2:
    a1 += 24; /*0x100320570*/
    v6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(a3, 3u, v8); /*0x10032057c*/
    v5 = v7 - 24; /*0x100320581*/
  }
  while ( !v6 ); /*0x100320589*/
  return v7 != 0; /*0x100320601*/
}