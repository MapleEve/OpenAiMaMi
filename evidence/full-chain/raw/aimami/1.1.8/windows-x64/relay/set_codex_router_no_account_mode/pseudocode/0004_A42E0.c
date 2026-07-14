// win 1.1.8 set_codex_router_no_account_mode node va=0x1401a42e0 depth=1
// A42E0
__int64 __fastcall sub_1401A42E0(__int64 *a1, __int64 *a2, const __m128i *a3, __int64 a4)
{
  __int64 v4; // r13
  volatile signed __int64 *v8; // rcx
  signed __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int64 *v12; // r12
  __m128i *v13; // rax
  __int64 v14; // r12
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __m128i v18; // [rsp+80h] [rbp+0h] BYREF
  _UNKNOWN **v19; // [rsp+90h] [rbp+10h]
  __int64 v20; // [rsp+98h] [rbp+18h]
  volatile signed __int64 *v21; // [rsp+A0h] [rbp+20h]
  __int64 v22; // [rsp+A8h] [rbp+28h]
  signed __int64 v23; // [rsp+B0h] [rbp+30h]
  int v24; // [rsp+B8h] [rbp+38h]
  _DWORD v25[99]; // [rsp+BCh] [rbp+3Ch] BYREF
  __int64 v26; // [rsp+248h] [rbp+1C8h]
  volatile signed __int64 *v27; // [rsp+258h] [rbp+1D8h]
  __int64 v28; // [rsp+260h] [rbp+1E0h]
  __m128i v29[13]; // [rsp+2D8h] [rbp+258h] BYREF
  __m128i *v30; // [rsp+3A8h] [rbp+328h]
  __int64 v31; // [rsp+3B0h] [rbp+330h]

  v30 = &v18; /*0x1401a4302*/
  v31 = -2; /*0x1401a4309*/
  v8 = off_141963CD0; /*0x1401a4320*/
  do /*0x1401a433e*/
    v9 = _InterlockedExchangeAdd64(v8, 1u); /*0x1401a4336*/
  while ( !v9 ); /*0x1401a433e*/
  v10 = a2[1]; /*0x1401a4340*/
  v11 = 672; /*0x1401a434d*/
  if ( *(_BYTE *)a2 ) /*0x1401a4344*/
    v11 = 480; /*0x1401a4352*/
  v12 = *(volatile signed __int64 **)(v10 + v11 + 16); /*0x1401a4356*/
  if ( v12 ) /*0x1401a435e*/
  {
    v4 = *(_QWORD *)(v10 + v11 + 24); /*0x1401a4360*/
    if ( _InterlockedIncrement64(v12) <= 0 || _InterlockedIncrement64(v12) <= 0 ) /*0x1401a4371*/
      BUG(); /*0x1401a4373*/
  }
  sub_1412762D0((__m128i *)((char *)v29[0].m128i_i64 + 4), a3, 0xC8u); /*0x1401a4385*/
  v18 = (__m128i)0xCCuLL; /*0x1401a438a*/
  v19 = &off_1413680A0; /*0x1401a43a7*/
  v20 = 0; /*0x1401a43ae*/
  v21 = v12; /*0x1401a43b9*/
  v22 = v4; /*0x1401a43c0*/
  v23 = v9; /*0x1401a43c7*/
  v24 = 0; /*0x1401a43ce*/
  sub_1412762D0((__m128i *)v25, v29, 0xCCu); /*0x1401a43ef*/
  *(_OWORD *)&v25[95] = 0; /*0x1401a43f7*/
  v26 = 0; /*0x1401a43fe*/
  v27 = v12; /*0x1401a4409*/
  v28 = v4; /*0x1401a4410*/
  nullsub_1(); /*0x1401a4417*/
  v13 = (__m128i *)sub_140001360(512, 128); /*0x1401a4426*/
  if ( !v13 ) /*0x1401a442e*/
    sub_1412AD451(128, 512); /*0x1401a448b*/
  v14 = (__int64)v13; /*0x1401a4430*/
  sub_1412762D0(v13, &v18, 0x200u); /*0x1401a4443*/
  v15 = sub_140EE3CC0(a1, v14, 1, a2); /*0x1401a4459*/
  if ( ((v16 != 0) & v15) != 0 ) /*0x1401a4467*/
  {
    v29[0].m128i_i64[0] = v16; /*0x1401a4496*/
    v18.m128i_i64[0] = (__int64)v29; /*0x1401a449d*/
    v18.m128i_i64[1] = (__int64)sub_141084170; /*0x1401a44ab*/
    sub_1412AD9E0((__int64)&unk_141321CD0, (__int64)&v18, a4); /*0x1401a44c3*/
  }
  return v14; /*0x1401a446d*/
}