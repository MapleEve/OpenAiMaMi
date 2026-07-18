// win 1.2.1 NEW export_session_markdown 0x140643a20 d=1
__m128i *__fastcall sub_140643A20(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v4; // r13
  volatile signed __int64 *v8; // rcx
  signed __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int64 *v12; // r12
  __m128i *v13; // rax
  __m128i *v14; // r12
  __int64 v15; // r8
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __m128i v19; // [rsp+80h] [rbp+0h] BYREF
  _UNKNOWN **v20; // [rsp+90h] [rbp+10h]
  __int64 v21; // [rsp+98h] [rbp+18h]
  volatile signed __int64 *v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+A8h] [rbp+28h]
  signed __int64 v24; // [rsp+B0h] [rbp+30h]
  int v25; // [rsp+B8h] [rbp+38h]
  _DWORD v26[265]; // [rsp+BCh] [rbp+3Ch] BYREF
  __int64 v27; // [rsp+4E0h] [rbp+460h]
  volatile signed __int64 *v28; // [rsp+4F0h] [rbp+470h]
  __int64 v29; // [rsp+4F8h] [rbp+478h]
  __m128i v30[65]; // [rsp+510h] [rbp+490h] BYREF
  __m128i *v31; // [rsp+928h] [rbp+8A8h]
  __int64 v32; // [rsp+930h] [rbp+8B0h]

  v31 = &v19; /*0x140643a42*/
  v32 = -2; /*0x140643a49*/
  v8 = off_141DC1E30; /*0x140643a60*/
  do /*0x140643a7e*/
    v9 = _InterlockedExchangeAdd64(v8, 1u); /*0x140643a76*/
  while ( !v9 ); /*0x140643a7e*/
  v10 = *(_QWORD *)(a2 + 8); /*0x140643a80*/
  v11 = 672; /*0x140643a8d*/
  if ( *(_BYTE *)a2 ) /*0x140643a84*/
    v11 = 480; /*0x140643a92*/
  v12 = *(volatile signed __int64 **)(v10 + v11 + 16); /*0x140643a96*/
  if ( v12 ) /*0x140643a9e*/
  {
    v4 = *(_QWORD *)(v10 + v11 + 24); /*0x140643aa0*/
    if ( _InterlockedIncrement64(v12) <= 0 || _InterlockedIncrement64(v12) <= 0 ) /*0x140643ab1*/
      BUG(); /*0x140643ab3*/
  }
  sub_1415B2FE0((__m128i *)((char *)v30[0].m128i_i64 + 4), a3, 0x410u); /*0x140643ac5*/
  v19 = (__m128i)0xCCuLL; /*0x140643aca*/
  v20 = &off_1416E4608; /*0x140643ae7*/
  v21 = 0; /*0x140643aee*/
  v22 = v12; /*0x140643af9*/
  v23 = v4; /*0x140643b00*/
  v24 = v9; /*0x140643b07*/
  v25 = 0; /*0x140643b0e*/
  sub_1415B2FE0((__m128i *)v26, v30, 0x414u); /*0x140643b2f*/
  *(_OWORD *)&v26[261] = 0; /*0x140643b37*/
  v27 = 0; /*0x140643b3e*/
  v28 = v12; /*0x140643b49*/
  v29 = v4; /*0x140643b50*/
  nullsub_1(); /*0x140643b57*/
  v13 = (__m128i *)sub_140001350(1152, 128); /*0x140643b66*/
  if ( !v13 ) /*0x140643b6e*/
    sub_1415F0891(128, 1152); /*0x140643bcb*/
  v14 = v13; /*0x140643b70*/
  sub_1415B2FE0(v13, &v19, 0x480u); /*0x140643b83*/
  LOBYTE(v15) = 1; /*0x140643b93*/
  v16 = sub_14121CA40(a1, v14, v15, a2); /*0x140643b99*/
  if ( ((v17 != 0) & v16) != 0 ) /*0x140643ba7*/
  {
    v30[0].m128i_i64[0] = v17; /*0x140643bd6*/
    v19.m128i_i64[0] = (__int64)v30; /*0x140643bdd*/
    v19.m128i_i64[1] = (__int64)sub_1413BF600; /*0x140643beb*/
    sub_1415F0E20(&unk_14169D290, &v19, a4); /*0x140643c03*/
  }
  return v14; /*0x140643bad*/
}