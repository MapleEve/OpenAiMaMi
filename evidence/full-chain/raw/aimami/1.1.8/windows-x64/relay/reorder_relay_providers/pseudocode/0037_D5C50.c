// win 1.1.8 reorder_relay_providers node va=0x1400d5c50 depth=2
// D5C50
__int64 __fastcall sub_1400D5C50(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h]

  result = *(unsigned __int8 *)a1; /*0x1400d5c65*/
  if ( (unsigned int)result < 3 ) /*0x1400d5c6b*/
    return result; /*0x1400d5c6b*/
  if ( (_DWORD)result == 3 ) /*0x1400d5c76*/
  {
    v4 = a1[1]; /*0x1400d5cc0*/
    if ( !v4 ) /*0x1400d5cc7*/
      return result; /*0x1400d5cc7*/
    v5 = a1[2]; /*0x1400d5cc9*/
    v6 = 1; /*0x1400d5ccd*/
    return sub_140001370(v5, v4, v6); /*0x1400d5d0d*/
  }
  if ( (_DWORD)result != 4 ) /*0x1400d5c7b*/
    return sub_1406555F0(a1 + 1); /*0x1400d5ce1*/
  v8 = a1[3]; /*0x1400d5c89*/
  v10 = 0; /*0x1400d5c8d*/
  v11 = a1[2]; /*0x1400d5c95*/
  v2 = v11; /*0x1400d5c99*/
  while ( v8 != v10 ) /*0x1400d5ca8*/
  {
    ++v10; /*0x1400d5cad*/
    v3 = v2 + 32; /*0x1400d5cb1*/
    sub_1401EBCC0(); /*0x1400d5cb5*/
    v2 = v3; /*0x1400d5cbb*/
  }
  result = (__int64)a1; /*0x1400d5ce6*/
  v7 = a1[1]; /*0x1400d5cea*/
  if ( v7 ) /*0x1400d5cf1*/
  {
    v4 = 32 * v7; /*0x1400d5cf7*/
    v6 = 8; /*0x1400d5cfb*/
    v5 = v11; /*0x1400d5d01*/
    return sub_140001370(v5, v4, v6); /*0x1400d5d01*/
  }
  return result; /*0x1400d5c6d*/
}