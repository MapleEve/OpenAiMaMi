// win 1.1.8 set_codex_router_no_account_mode node va=0x140421360 depth=1
// sub_140421360
__m128i *__fastcall sub_140421360(__m128i *a1, __int64 a2)
{
  _BYTE v4[136]; // [rsp+28h] [rbp-58h] BYREF
  volatile signed __int64 *v5; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v6; // [rsp+C0h] [rbp+40h]
  __int64 v7; // [rsp+C8h] [rbp+48h]
  __m128i v8[9]; // [rsp+D8h] [rbp+58h] BYREF
  volatile signed __int64 *v9; // [rsp+170h] [rbp+F0h] BYREF
  volatile signed __int64 *v10; // [rsp+178h] [rbp+F8h] BYREF
  volatile signed __int64 *v11[4]; // [rsp+180h] [rbp+100h] BYREF

  v11[2] = (volatile signed __int64 *)-2LL; /*0x140421371*/
  sub_140870B80(v4, *(_QWORD *)(a2 + 32)); /*0x140421387*/
  sub_1412762D0(a1, v8, 0x98u); /*0x140421399*/
  if ( !_InterlockedDecrement64(v9) ) /*0x1404213a5*/
    sub_140E0A8A0(&v9); /*0x1404213b2*/
  if ( v6 ) /*0x1404213bf*/
    sub_140001370(v7, v6, 1); /*0x1404213cb*/
  if ( !_InterlockedDecrement64(v5) ) /*0x1404213d4*/
    sub_1404E9190(&v5); /*0x1404213de*/
  sub_14004C1B0(v4); /*0x1404213e8*/
  if ( !_InterlockedDecrement64(v10) ) /*0x1404213f5*/
    sub_140E0B010(&v10); /*0x140421402*/
  if ( !_InterlockedDecrement64(v11[0]) ) /*0x14042140f*/
    sub_140E0ACC0(v11); /*0x14042141c*/
  return a1; /*0x140421424*/
}