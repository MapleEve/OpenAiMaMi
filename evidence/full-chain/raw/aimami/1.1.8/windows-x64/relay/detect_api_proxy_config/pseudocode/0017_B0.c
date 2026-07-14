// win 1.1.8 detect_api_proxy_config node va=0x1409858b0 depth=1
// B0
__int64 __fastcall sub_1409858B0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rcx
  _QWORD *v3; // rsi
  volatile signed __int64 *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 *v7; // [rsp+30h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  _QWORD *v12; // [rsp+48h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 1056); /*0x1409858c5*/
  if ( !*(_BYTE *)(a1 + 1056) ) /*0x1409858ce*/
  {
    v12 = (_QWORD *)a1; /*0x140985927*/
    sub_1409B5490(a1); /*0x14098592b*/
    result = 0; /*0x140985931*/
    if ( __OFSUB__(0, v12[65]) ) /*0x14098593e*/
      return result; /*0x14098593e*/
    v7 = v12 + 65; /*0x14098594e*/
    v2 = (_QWORD *)v12[66]; /*0x140985952*/
    v8 = v12[67]; /*0x140985960*/
    v10 = 0; /*0x140985964*/
    while ( v8 != v10 ) /*0x140985978*/
    {
      ++v10; /*0x140985981*/
      v3 = v2 + 12; /*0x140985985*/
      sub_1401EEBE0(v2); /*0x140985989*/
      v2 = v3; /*0x14098598f*/
    }
    goto LABEL_23; /*0x140985978*/
  }
  if ( (_DWORD)result != 3 ) /*0x1409858d3*/
    return result; /*0x1409858d3*/
  v12 = (_QWORD *)a1; /*0x1409858e3*/
  if ( *(_BYTE *)(a1 + 1048) == 3 ) /*0x1409858e7*/
  {
    if ( *(_BYTE *)(a1 + 1040) != 3 ) /*0x14098599e*/
    {
      if ( !*(_BYTE *)(a1 + 1040) ) /*0x140985994*/
        sub_1400453B0(a1 + 880); /*0x1409859af*/
      goto LABEL_19; /*0x1409859b5*/
    }
    v4 = *(volatile signed __int64 **)(a1 + 1032); /*0x1409859d6*/
    if ( sub_140EE8B80(v4) ) /*0x1409859e0*/
LABEL_18:
      sub_140EE5BB0((__int64)v4); /*0x1409859ea*/
  }
  else if ( !*(_BYTE *)(a1 + 1048) ) /*0x1409858d9*/
  {
    if ( *(_BYTE *)(a1 + 872) != 3 ) /*0x140985903*/
    {
      if ( !*(_BYTE *)(a1 + 872) ) /*0x1409858f9*/
        sub_1400453B0(a1 + 712); /*0x14098591c*/
      goto LABEL_19; /*0x140985922*/
    }
    v4 = *(volatile signed __int64 **)(a1 + 864); /*0x1409859b7*/
    if ( sub_140EE8B80(v4) ) /*0x1409859c1*/
      goto LABEL_18; /*0x1409859c9*/
  }
LABEL_19:
  sub_1409B5490((__int64)v12); /*0x1409859f3*/
  result = 0; /*0x1409859fd*/
  if ( __OFSUB__(0, v12[65]) ) /*0x140985a0a*/
    return result; /*0x140985a0a*/
  v7 = v12 + 65; /*0x140985a1a*/
  v5 = (_QWORD *)v12[66]; /*0x140985a1e*/
  v9 = v12[67]; /*0x140985a2c*/
  v11 = 0; /*0x140985a30*/
  while ( v9 != v11 ) /*0x140985a48*/
  {
    ++v11; /*0x140985a4d*/
    v6 = v5 + 12; /*0x140985a51*/
    sub_1401EEBE0(v5); /*0x140985a55*/
    v5 = v6; /*0x140985a5b*/
  }
LABEL_23:
  result = *v7; /*0x140985a60*/
  if ( *v7 ) /*0x140985a64*/
    return sub_140001370(v12[66], 96 * result, 8); /*0x140985a8d*/
  return result; /*0x140985a85*/
}