// win 1.1.8 set_codex_router_no_account_mode node va=0x140063c90 depth=1
// C90
__m128i *__fastcall sub_140063C90(__m128i *a1, _QWORD *a2, _QWORD *a3)
{
  _BYTE *v6; // rax
  int v7; // ecx
  char v8; // r15
  char v9; // r12
  _BYTE *v10; // r15
  char v11; // cl
  char v12; // r13
  __m128i v14[23]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v15; // [rsp+198h] [rbp+118h] BYREF
  char v16; // [rsp+19Ah] [rbp+11Ah]
  _BYTE v17[2]; // [rsp+19Dh] [rbp+11Dh] BYREF
  char v18; // [rsp+19Fh] [rbp+11Fh]
  __int64 v19; // [rsp+1A0h] [rbp+120h]

  v19 = -2; /*0x140063cab*/
  v14[0].m128i_i64[0] = 0x8000000000000002uLL; /*0x140063cc9*/
  v18 = 1; /*0x140063ccd*/
  v6 = (_BYTE *)sub_140EDF720(); /*0x140063cd4*/
  v7 = (unsigned __int8)v6[72]; /*0x140063cda*/
  if ( v7 != 1 ) /*0x140063ce1*/
  {
    if ( v7 == 2 ) /*0x140063ce6*/
    {
      v8 = 0; /*0x140063ce8*/
      v9 = 0; /*0x140063ceb*/
      goto LABEL_11; /*0x140063cee*/
    }
    v18 = 1; /*0x140063cf3*/
    v10 = v6; /*0x140063d04*/
    sub_14107F1B0((__int64)v6, (__int64)sub_140473F20); /*0x140063d07*/
    v6 = v10; /*0x140063d0d*/
    v10[72] = 1; /*0x140063d10*/
  }
  v8 = v6[68]; /*0x140063d15*/
  v9 = v6[69]; /*0x140063d1a*/
  v11 = v9; /*0x140063d1f*/
  if ( v8 != 1 ) /*0x140063d26*/
    goto LABEL_8; /*0x140063d26*/
  if ( v9 ) /*0x140063d2b*/
  {
    v11 = v9 - 1; /*0x140063d31*/
LABEL_8:
    v6[69] = v11; /*0x140063d36*/
    v12 = 0; /*0x140063d39*/
    goto LABEL_9; /*0x140063d39*/
  }
  v18 = 1; /*0x140063ddd*/
  sub_140EE1A80(a3); /*0x140063de7*/
  v12 = 1; /*0x140063ded*/
  v9 = 0; /*0x140063df0*/
LABEL_9:
  v16 = 0; /*0x140063d3c*/
  v15 = 0; /*0x140063d43*/
  v18 = 1; /*0x140063d53*/
  sub_140EE4800((_BYTE *)&v15 + 1); /*0x140063d5a*/
  if ( v12 ) /*0x140063d63*/
  {
    a1->m128i_i64[0] = 0x8000000000000002uLL; /*0x140063d65*/
    sub_140043AE0(v14); /*0x140063d6c*/
    return a1; /*0x140063d71*/
  }
LABEL_11:
  v17[0] = v8; /*0x140063d73*/
  v17[1] = v9; /*0x140063d7a*/
  (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v14, *a3); /*0x140063d8f*/
  if ( v14[0].m128i_i64[0] != 0x8000000000000002uLL ) /*0x140063d97*/
    v17[0] = 0; /*0x140063d99*/
  sub_1412762D0(a1, v14, 0x178u); /*0x140063dad*/
  v18 = 0; /*0x140063db2*/
  sub_140EE4800(v17); /*0x140063dc0*/
  return a1; /*0x140063dc9*/
}