// win 1.2.1 NEW migrate_session_worktree 0x140643d10 d=1
__m128i *__fastcall sub_140643D10(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
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
  _DWORD v26[261]; // [rsp+BCh] [rbp+3Ch] BYREF
  __int64 v27; // [rsp+4D0h] [rbp+450h]
  volatile signed __int64 *v28; // [rsp+4E0h] [rbp+460h]
  __int64 v29; // [rsp+4E8h] [rbp+468h]
  __m128i v30[64]; // [rsp+520h] [rbp+4A0h] BYREF
  __m128i *v31; // [rsp+928h] [rbp+8A8h]
  __int64 v32; // [rsp+930h] [rbp+8B0h]

  v31 = &v19; /*0x140643d32*/
  v32 = -2; /*0x140643d39*/
  v8 = off_141DC1E30; /*0x140643d50*/
  do /*0x140643d6e*/
    v9 = _InterlockedExchangeAdd64(v8, 1u); /*0x140643d66*/
  while ( !v9 ); /*0x140643d6e*/
  v10 = *(_QWORD *)(a2 + 8); /*0x140643d70*/
  v11 = 672; /*0x140643d7d*/
  if ( *(_BYTE *)a2 ) /*0x140643d74*/
    v11 = 480; /*0x140643d82*/
  v12 = *(volatile signed __int64 **)(v10 + v11 + 16); /*0x140643d86*/
  if ( v12 ) /*0x140643d8e*/
  {
    v4 = *(_QWORD *)(v10 + v11 + 24); /*0x140643d90*/
    if ( _InterlockedIncrement64(v12) <= 0 || _InterlockedIncrement64(v12) <= 0 ) /*0x140643da1*/
      BUG(); /*0x140643da3*/
  }
  sub_1415B2FE0((__m128i *)((char *)v30[0].m128i_i64 + 4), a3, 0x400u); /*0x140643db5*/
  v19 = (__m128i)0xCCuLL; /*0x140643dba*/
  v20 = &off_1416E4658; /*0x140643dd7*/
  v21 = 0; /*0x140643dde*/
  v22 = v12; /*0x140643de9*/
  v23 = v4; /*0x140643df0*/
  v24 = v9; /*0x140643df7*/
  v25 = 0; /*0x140643dfe*/
  sub_1415B2FE0((__m128i *)v26, v30, 0x404u); /*0x140643e1f*/
  *(_OWORD *)&v26[257] = 0; /*0x140643e27*/
  v27 = 0; /*0x140643e2e*/
  v28 = v12; /*0x140643e39*/
  v29 = v4; /*0x140643e40*/
  nullsub_1(); /*0x140643e47*/
  v13 = (__m128i *)sub_140001350(1152, 128); /*0x140643e56*/
  if ( !v13 ) /*0x140643e5e*/
    sub_1415F0891(128, 1152); /*0x140643ebb*/
  v14 = v13; /*0x140643e60*/
  sub_1415B2FE0(v13, &v19, 0x480u); /*0x140643e73*/
  LOBYTE(v15) = 1; /*0x140643e83*/
  v16 = sub_14121CA40(a1, v14, v15, a2); /*0x140643e89*/
  if ( ((v17 != 0) & v16) != 0 ) /*0x140643e97*/
  {
    v30[0].m128i_i64[0] = v17; /*0x140643ec6*/
    v19.m128i_i64[0] = (__int64)v30; /*0x140643ecd*/
    v19.m128i_i64[1] = (__int64)sub_1413BF600; /*0x140643edb*/
    sub_1415F0E20(&unk_14169D290, &v19, a4); /*0x140643ef3*/
  }
  return v14; /*0x140643e9d*/
}