// win 1.2.1 NEW export_debug_bundle 0x140c23290 d=1
__int64 __fastcall sub_140C23290(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 *v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  _QWORD *v11; // [rsp+48h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 720); /*0x140c232a5*/
  if ( !*(_BYTE *)(a1 + 720) ) /*0x140c232ae*/
  {
    v11 = (_QWORD *)a1; /*0x140c23344*/
    sub_140C300E0(a1); /*0x140c23348*/
    result = (__int64)v11; /*0x140c2334e*/
    if ( v11[65] == -1 ) /*0x140c2335a*/
      return result; /*0x140c2335a*/
    v6 = v11 + 65; /*0x140c23367*/
    v4 = v11[66]; /*0x140c2336b*/
    v8 = v11[67]; /*0x140c23379*/
    v10 = 0; /*0x140c2337d*/
    while ( v8 != v10 ) /*0x140c23398*/
    {
      ++v10; /*0x140c2339d*/
      v5 = v4 + 96; /*0x140c233a1*/
      sub_1408780B0(v4); /*0x140c233a5*/
      v4 = v5; /*0x140c233ab*/
    }
    goto LABEL_11; /*0x140c23398*/
  }
  if ( (_DWORD)result == 3 ) /*0x140c232b7*/
  {
    v11 = (_QWORD *)a1; /*0x140c232bd*/
    sub_140C09580(a1 + 600); /*0x140c232c8*/
    sub_140C300E0((__int64)v11); /*0x140c232d2*/
    result = (__int64)v11; /*0x140c232d8*/
    if ( v11[65] != -1 ) /*0x140c232e4*/
    {
      v6 = v11 + 65; /*0x140c232f1*/
      v2 = v11[66]; /*0x140c232f5*/
      v7 = v11[67]; /*0x140c23303*/
      v9 = 0; /*0x140c23307*/
      while ( v7 != v9 ) /*0x140c23328*/
      {
        ++v9; /*0x140c23331*/
        v3 = v2 + 96; /*0x140c23335*/
        sub_1408780B0(v2); /*0x140c23339*/
        v2 = v3; /*0x140c2333f*/
      }
LABEL_11:
      result = *v6; /*0x140c233b0*/
      if ( *v6 ) /*0x140c233b4*/
        return sub_140001360(v11[66], 96 * result, 8); /*0x140c233dd*/
    }
  }
  return result; /*0x140c233d5*/
}