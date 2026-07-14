// refresh_usage_response_build_sys (shared) @ 0x140352c90 (win, AiMaMi 1.1.8)
__int64 __fastcall sub_140352C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 *v7; // r14
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r15
  char v13; // al
  __int64 v14; // rax
  __int32 v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __m128i *v20; // rax
  __int64 v21; // r14
  __int64 result; // rax
  __int64 v23; // r14
  __int64 v24; // r14
  __m128i v25[42]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v26; // [rsp+2D8h] [rbp+258h] BYREF
  __m128i v27; // [rsp+580h] [rbp+500h] BYREF
  char v28; // [rsp+590h] [rbp+510h]
  __int64 v29; // [rsp+828h] [rbp+7A8h]
  __int64 v30; // [rsp+830h] [rbp+7B0h]
  __int64 v31; // [rsp+838h] [rbp+7B8h]
  __int64 v32; // [rsp+840h] [rbp+7C0h]
  __int64 v33; // [rsp+848h] [rbp+7C8h]
  __int64 v34; // [rsp+850h] [rbp+7D0h]
  int v35; // [rsp+858h] [rbp+7D8h]
  char v36; // [rsp+85Fh] [rbp+7DFh]
  __int64 v37; // [rsp+860h] [rbp+7E0h]

  v37 = -2; /*0x140352ca7*/
  v6 = a1; /*0x140352cb8*/
  if ( dword_14195D438 ) /*0x140352cc3*/
  {
    v23 = a2; /*0x140353036*/
    sub_14127820D(&byte_14195D188); /*0x140353039*/
    a2 = v23; /*0x14035303e*/
    LOBYTE(a1) = 1; /*0x140353041*/
    if ( !_InterlockedCompareExchange8(&byte_14195D188, 1, 0) ) /*0x14035304d*/
      goto LABEL_3; /*0x14035304d*/
  }
  else
  {
    LOBYTE(a1) = 1; /*0x140352cc9*/
    if ( !_InterlockedCompareExchange8(&byte_14195D188, 1, 0) ) /*0x140352ccd*/
      goto LABEL_3; /*0x140352cd5*/
  }
  v24 = a2; /*0x14035305a*/
  sub_1412ABCB0(&byte_14195D188); /*0x14035305d*/
  a2 = v24; /*0x140353062*/
LABEL_3:
  v7 = off_141963EA8; /*0x140352cdb*/
  if ( 2 * *off_141963EA8 ) /*0x140352ce5*/
  {
    v8 = sub_1412AC970(a1, a2); /*0x140353075*/
    LOBYTE(v8) = v8 ^ 1; /*0x140353078*/
  }
  else
  {
    v8 = 0; /*0x140352cf1*/
  }
  v27.m128i_i64[1] = (__int64)&byte_14195D188; /*0x140352d0b*/
  v28 = v8; /*0x140352d12*/
  v27.m128i_i64[0] = byte_14195D189 != 0; /*0x140352d19*/
  if ( byte_14195D189 ) /*0x140352d20*/
  {
    sub_14037DC40(v25); /*0x140352d26*/
    if ( (_BYTE)v8 ) /*0x140352d2f*/
      goto LABEL_16; /*0x140352d2f*/
    goto LABEL_15; /*0x140352d2f*/
  }
  v35 = v8; /*0x140352d3a*/
  sub_14037DC40(&v26); /*0x140352d48*/
  sub_14037DC40(&v27); /*0x140352d5c*/
  sub_1412762D0(v25, &v27, 0x2A8u); /*0x140352d73*/
  if ( dword_14195D190[0].m128i_i32[0] != 3 ) /*0x140352d7f*/
  {
    sub_140363BF0(dword_14195D190); /*0x140352d8c*/
    v11 = qword_14195D428; /*0x140352d91*/
    v34 = 0; /*0x140352d98*/
    v33 = qword_14195D430; /*0x140352daa*/
    v32 = qword_14195D428; /*0x140352db1*/
    while ( v33 != v34 ) /*0x140352dce*/
    {
      ++v34; /*0x140352dd3*/
      v12 = v11 + 336; /*0x140352dda*/
      sub_140049230(v11); /*0x140352de1*/
      v11 = v12; /*0x140352de7*/
    }
    if ( qword_14195D420 ) /*0x140352df6*/
      sub_140001370(qword_14195D428, 336 * qword_14195D420, 8); /*0x140352e0c*/
  }
  sub_1412762D0(dword_14195D190, v25, 0x2A8u); /*0x140352e22*/
  sub_1412762D0(v25, &v26, 0x2A8u); /*0x140352e38*/
  if ( !(_BYTE)v35 ) /*0x140352e44*/
  {
LABEL_15:
    if ( 2 * *v7 && !(unsigned __int8)sub_1412AC970(v10, v9) ) /*0x1403530a0*/
      byte_14195D189 = 1; /*0x1403530ad*/
  }
LABEL_16:
  v13 = byte_14195D188; /*0x140352e55*/
  byte_14195D188 = 0; /*0x140352e57*/
  if ( v13 == 2 ) /*0x140352e5f*/
  {
    WakeByAddressSingle(&byte_14195D188); /*0x140353088*/
    v14 = a4 - 4; /*0x14035308d*/
    if ( (unsigned __int64)(a4 - 4) > 7 ) /*0x140353095*/
      goto LABEL_30; /*0x140353095*/
  }
  else
  {
    v14 = a4 - 4; /*0x140352e65*/
  }
  switch ( v14 ) /*0x140352e81*/
  {
    case 0LL: /*0x140352e81*/
      if ( *(_DWORD *)a3 == 1819047270 ) /*0x140352e89*/
        goto LABEL_26; /*0x140352e89*/
      break; /*0x140352e89*/
    case 1LL: /*0x140352e81*/
      if ( !(*(_DWORD *)a3 ^ 0x67617375 | *(unsigned __int8 *)(a3 + 4) ^ 0x65) ) /*0x140352eb4*/
        goto LABEL_26; /*0x140352eb6*/
      break; /*0x140352eb6*/
    case 4LL: /*0x140352e81*/
      if ( *(_QWORD *)a3 == 0x6E6F69746174756DLL ) /*0x140352e9e*/
        goto LABEL_26; /*0x140352e9e*/
      break; /*0x140352e9e*/
    case 7LL: /*0x140352e81*/
      if ( !(*(_QWORD *)a3 ^ 0x73736572676F7270LL | *(_QWORD *)(a3 + 3) ^ 0x6576697373657267LL) ) /*0x140352ed9*/
      {
LABEL_26:
        v36 = 1; /*0x140352ede*/
        v26.m128i_i32[0] = sub_141068A90(); /*0x140352eeb*/
        v26.m128i_i32[1] = v15; /*0x140352ef1*/
        v36 = 1; /*0x140352ef7*/
        sub_141068A40(&v27, &v26, 3577643008LL, 27111902); /*0x140352f18*/
        if ( v27.m128i_i8[0] ) /*0x140352f25*/
          v16 = 0; /*0x140352f30*/
        else
          v16 = v27.m128i_i64[1]; /*0x140352f27*/
        v36 = 1; /*0x140352f32*/
        sub_140287B10(v16); /*0x140352f39*/
      }
      break; /*0x140352f39*/
    default:
      break;
  }
LABEL_30:
  v36 = 1; /*0x140352f3f*/
  sub_14002C0A0(v6, v25); /*0x140352f4d*/
  if ( a4 < 0 ) /*0x140352f56*/
  {
    v19 = 0; /*0x140352f58*/
    goto LABEL_32; /*0x140352f58*/
  }
  if ( a4 ) /*0x140352f69*/
  {
    nullsub_1(v18, v17); /*0x140352f6b*/
    v19 = 1; /*0x140352f70*/
    v20 = (__m128i *)sub_140001360(a4, 1); /*0x140352f7e*/
    if ( !v20 ) /*0x140352f86*/
LABEL_32:
      sub_1412AD46B(v19, a4); /*0x140352f5b*/
    v21 = (__int64)v20; /*0x140352f88*/
    sub_1412762D0(v20, (const __m128i *)a3, a4); /*0x140352f94*/
  }
  else
  {
    v21 = 1; /*0x140352f9b*/
  }
  sub_1412762D0(&v27, v25, 0x2A8u); /*0x140352fb5*/
  v29 = a4; /*0x140352fba*/
  v30 = v21; /*0x140352fc1*/
  v31 = a4; /*0x140352fc8*/
  v36 = 0; /*0x140352fcf*/
  sub_14041A590((unsigned int)&v26, v6, (unsigned int)aRuntimeStateUp, 21, (__int64)&v27); /*0x140352ff2*/
  result = 0x8000000000000025uLL; /*0x140352ff8*/
  if ( v26.m128i_i64[0] != 0x8000000000000025uLL ) /*0x140353009*/
  {
    v36 = 0; /*0x14035300b*/
    return sub_1403620E0(&v26); /*0x140353019*/
  }
  return result; /*0x14035301f*/
}
