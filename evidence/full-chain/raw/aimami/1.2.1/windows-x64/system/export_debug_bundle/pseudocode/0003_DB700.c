// win 1.2.1 NEW export_debug_bundle 0x1400db700 d=1
__int64 __fastcall sub_1400DB700(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  signed __int64 v8; // rdi
  __int64 v9; // r15
  const __m128i *v10; // r14
  __m128i *v11; // rax
  __int64 v12; // rbx
  _BYTE v14[31]; // [rsp+49h] [rbp-37h]
  _QWORD v15[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v16[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+40h]
  char v19; // [rsp+CFh] [rbp+4Fh] BYREF
  __int64 v20; // [rsp+D0h] [rbp+50h]

  v20 = -2; /*0x1400db717*/
  v3 = *a2; /*0x1400db722*/
  v4 = a2[1]; /*0x1400db725*/
  v5 = a2[2]; /*0x1400db729*/
  v6 = a2[3]; /*0x1400db72d*/
  if ( (sub_1405FE300(a2) & 1) != 0 ) /*0x1400db73b*/
    goto LABEL_2; /*0x1400db73b*/
  if ( *(_BYTE *)v7 == 3 ) /*0x1400db7db*/
  {
    v8 = *(_QWORD *)(v7 + 24); /*0x1400db7e1*/
    if ( v8 < 0 ) /*0x1400db7e8*/
    {
      v9 = 0; /*0x1400db7ea*/
      goto LABEL_7; /*0x1400db7ea*/
    }
    if ( v8 ) /*0x1400db7fa*/
    {
      v10 = *(const __m128i **)(v7 + 16); /*0x1400db7fc*/
      nullsub_1(); /*0x1400db800*/
      v9 = 1; /*0x1400db805*/
      v11 = (__m128i *)sub_140001350(v8, 1); /*0x1400db813*/
      if ( !v11 ) /*0x1400db81b*/
LABEL_7:
        sub_1415F08AB(v9, v8); /*0x1400db7ed*/
      v12 = (__int64)v11; /*0x1400db81d*/
      sub_1415B2FE0(v11, v10, v8); /*0x1400db829*/
    }
    else
    {
      v12 = 1; /*0x1400db830*/
    }
    *(_QWORD *)(a1 + 8) = v8; /*0x1400db835*/
    *(_QWORD *)(a1 + 16) = v12; /*0x1400db839*/
    *(_QWORD *)(a1 + 24) = v8; /*0x1400db83d*/
    *(_BYTE *)a1 = -1; /*0x1400db841*/
    return a1; /*0x1400db841*/
  }
  v7 = sub_1415CA890(v7, &v19, &unk_1416C7348); /*0x1400db898*/
LABEL_2:
  v16[1] = v3; /*0x1400db741*/
  v16[2] = v4; /*0x1400db745*/
  v16[3] = v5; /*0x1400db749*/
  v16[4] = v6; /*0x1400db74d*/
  v16[5] = v7; /*0x1400db751*/
  v16[0] = 0x8000000000000008uLL; /*0x1400db75f*/
  *(_QWORD *)&v17 = 0; /*0x1400db763*/
  *((_QWORD *)&v17 + 1) = 1; /*0x1400db76b*/
  v18 = 0; /*0x1400db773*/
  v15[2] = 1610612768; /*0x1400db77b*/
  v15[0] = &v17; /*0x1400db787*/
  v15[1] = &off_141666E58; /*0x1400db792*/
  if ( (unsigned __int8)sub_141170260(v16, v15) ) /*0x1400db79d*/
    sub_1415F0BC0( /*0x1400db87a*/
      (unsigned int)aADisplayImplem,
      55,
      (unsigned int)&v19,
      (unsigned int)&unk_1416642D8,
      (__int64)&off_141666F10);
  *(_OWORD *)&v14[7] = v17; /*0x1400db7b3*/
  *(_QWORD *)&v14[23] = v18; /*0x1400db7b7*/
  sub_140045130(v16); /*0x1400db7be*/
  *(_BYTE *)a1 = 3; /*0x1400db7c3*/
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v14; /*0x1400db7ce*/
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v14[15]; /*0x1400db7d2*/
  return a1; /*0x1400db847*/
}