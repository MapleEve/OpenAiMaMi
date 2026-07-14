// win 1.1.8 set_codex_router_no_account_mode node va=0x140987450 depth=1
// sub_140987450
__int64 __fastcall sub_140987450(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rcx
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  _QWORD *v5; // rsi
  __int64 *v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  _QWORD *v11; // [rsp+48h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 1560); /*0x140987465*/
  if ( !*(_BYTE *)(a1 + 1560) ) /*0x14098746e*/
  {
    v11 = (_QWORD *)a1; /*0x140987504*/
    sub_1409B5490(a1); /*0x140987508*/
    result = 0; /*0x14098750e*/
    if ( __OFSUB__(0, v11[65]) ) /*0x14098751b*/
      return result; /*0x14098751b*/
    v6 = v11 + 65; /*0x14098752b*/
    v4 = (_QWORD *)v11[66]; /*0x14098752f*/
    v8 = v11[67]; /*0x14098753d*/
    v10 = 0; /*0x140987541*/
    while ( v8 != v10 ) /*0x140987558*/
    {
      ++v10; /*0x14098755d*/
      v5 = v4 + 12; /*0x140987561*/
      sub_1401EEBE0(v4); /*0x140987565*/
      v4 = v5; /*0x14098756b*/
    }
    goto LABEL_11; /*0x140987558*/
  }
  if ( (_DWORD)result == 3 ) /*0x140987477*/
  {
    v11 = (_QWORD *)a1; /*0x14098747d*/
    sub_1409A4710(a1 + 880); /*0x140987488*/
    sub_1409B5490((__int64)v11); /*0x140987492*/
    result = 0; /*0x140987498*/
    if ( !__OFSUB__(0, v11[65]) ) /*0x1409874a5*/
    {
      v6 = v11 + 65; /*0x1409874b5*/
      v2 = (_QWORD *)v11[66]; /*0x1409874b9*/
      v7 = v11[67]; /*0x1409874c7*/
      v9 = 0; /*0x1409874cb*/
      while ( v7 != v9 ) /*0x1409874e8*/
      {
        ++v9; /*0x1409874f1*/
        v3 = v2 + 12; /*0x1409874f5*/
        sub_1401EEBE0(v2); /*0x1409874f9*/
        v2 = v3; /*0x1409874ff*/
      }
LABEL_11:
      result = *v6; /*0x140987570*/
      if ( *v6 ) /*0x140987574*/
        return sub_140001370(v11[66], 96 * result, 8); /*0x14098759d*/
    }
  }
  return result; /*0x140987595*/
}