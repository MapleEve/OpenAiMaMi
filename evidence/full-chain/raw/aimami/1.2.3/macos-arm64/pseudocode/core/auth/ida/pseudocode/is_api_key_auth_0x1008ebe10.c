// __ZN13codexmate_lib4core4auth15is_api_key_auth @ 0x1008ebe10 | 基线 same-set
bool __fastcall codexmate_lib::core::auth::is_api_key_auth::h123048d1ccd9695c(_QWORD *a1)
{
  _BYTE *v1; // rax
  char v2; // cl
  bool result; // al
  __int64 v4; // rdx

  if ( __OFSUB__(0, *a1) /*0x1008ebeb3*/
    || a1[2] != 6
    || (v1 = (_BYTE *)a1[1], (*v1 | (unsigned __int8)(32 * ((unsigned __int8)(*v1 - 65) < 0x1Au))) != 97)
    || (v1[1] | (unsigned __int8)(32 * ((unsigned __int8)(v1[1] - 65) < 0x1Au))) != 112
    || (v1[2] | (unsigned __int8)(32 * ((unsigned __int8)(v1[2] - 65) < 0x1Au))) != 105
    || (v1[3] | (unsigned __int8)(32 * ((unsigned __int8)(v1[3] - 65) < 0x1Au))) != 107
    || (v1[4] | (unsigned __int8)(32 * ((unsigned __int8)(v1[4] - 65) < 0x1Au))) != 101
    || (v2 = v1[5] | (32 * ((unsigned __int8)(v1[5] - 65) < 0x1Au)), result = 1, v2 != 121) )
  {
    if ( a1[3] == 0x8000000000000000LL ) /*0x1008ebec3*/
    {
      return 0; /*0x1008ebec5*/
    }
    else
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[4], a1[5]); /*0x1008ebed7*/
      return v4 != 0; /*0x1008ebedf*/
    }
  }
  return result; /*0x1008ebec7*/
}