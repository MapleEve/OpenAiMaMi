// win 1.2.1 NEW set_voice_overlay_style 0x1403d8490 d=1
__m128i *__fastcall sub_1403D8490(__m128i *a1, __int64 a2)
{
  _BYTE v4[136]; // [rsp+28h] [rbp-58h] BYREF
  volatile signed __int64 *v5; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v6; // [rsp+C0h] [rbp+40h]
  __int64 v7; // [rsp+C8h] [rbp+48h]
  __m128i v8[9]; // [rsp+D8h] [rbp+58h] BYREF
  volatile signed __int64 *v9; // [rsp+170h] [rbp+F0h] BYREF
  volatile signed __int64 *v10; // [rsp+178h] [rbp+F8h] BYREF
  volatile signed __int64 *v11[4]; // [rsp+180h] [rbp+100h] BYREF

  v11[2] = (volatile signed __int64 *)-2LL; /*0x1403d84a1*/
  sub_1403D7A60(v4, *(_QWORD *)(a2 + 32)); /*0x1403d84b7*/
  sub_1415B2FE0(a1, v8, 0x98u); /*0x1403d84c9*/
  if ( !_InterlockedDecrement64(v9) ) /*0x1403d84d5*/
    sub_141166820(&v9); /*0x1403d84e2*/
  if ( v6 ) /*0x1403d84ef*/
    sub_140001360(v7, v6, 1); /*0x1403d84fb*/
  if ( !_InterlockedDecrement64(v5) ) /*0x1403d8504*/
    sub_140544050(&v5); /*0x1403d850e*/
  sub_1400300C0(v4); /*0x1403d8518*/
  if ( !_InterlockedDecrement64(v10) ) /*0x1403d8525*/
    sub_141166ED0(&v10); /*0x1403d8532*/
  if ( !_InterlockedDecrement64(v11[0]) ) /*0x1403d853f*/
    sub_141166AD0(v11); /*0x1403d854c*/
  return a1; /*0x1403d8554*/
}