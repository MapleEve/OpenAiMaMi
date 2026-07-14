// win 1.1.8 detect_api_proxy_config node va=0x140063e90 depth=1
// E90
__m128i *__fastcall sub_140063E90(__m128i *a1, _QWORD *a2, _QWORD *a3)
{
  _BYTE *v6; // rax
  int v7; // ecx
  char v8; // r15
  char v9; // r12
  _BYTE *v10; // r15
  char v11; // cl
  char v12; // r13
  __m128i v14[11]; // [rsp+28h] [rbp-58h] BYREF
  __int16 v15; // [rsp+D8h] [rbp+58h] BYREF
  char v16; // [rsp+DAh] [rbp+5Ah]
  _BYTE v17[2]; // [rsp+DDh] [rbp+5Dh] BYREF
  char v18; // [rsp+DFh] [rbp+5Fh]
  __int64 v19; // [rsp+E0h] [rbp+60h]

  v19 = -2; /*0x140063eab*/
  v14[0].m128i_i64[0] = 0x8000000000000002uLL; /*0x140063ec6*/
  v18 = 1; /*0x140063eca*/
  v6 = (_BYTE *)sub_140EDF720(); /*0x140063ece*/
  v7 = (unsigned __int8)v6[72]; /*0x140063ed4*/
  if ( v7 != 1 ) /*0x140063edb*/
  {
    if ( v7 == 2 ) /*0x140063ee0*/
    {
      v8 = 0; /*0x140063ee2*/
      v9 = 0; /*0x140063ee5*/
      goto LABEL_11; /*0x140063ee8*/
    }
    v18 = 1; /*0x140063eea*/
    v10 = v6; /*0x140063ef8*/
    sub_14107F1B0((__int64)v6, (__int64)sub_140473F20); /*0x140063efb*/
    v6 = v10; /*0x140063f01*/
    v10[72] = 1; /*0x140063f04*/
  }
  v8 = v6[68]; /*0x140063f09*/
  v9 = v6[69]; /*0x140063f0e*/
  v11 = v9; /*0x140063f13*/
  if ( v8 != 1 ) /*0x140063f1a*/
    goto LABEL_8; /*0x140063f1a*/
  if ( v9 ) /*0x140063f1f*/
  {
    v11 = v9 - 1; /*0x140063f25*/
LABEL_8:
    v6[69] = v11; /*0x140063f2a*/
    v12 = 0; /*0x140063f2d*/
    goto LABEL_9; /*0x140063f2d*/
  }
  v18 = 1; /*0x140063fb6*/
  sub_140EE1A80(a3); /*0x140063fbd*/
  v12 = 1; /*0x140063fc3*/
  v9 = 0; /*0x140063fc6*/
LABEL_9:
  v16 = 0; /*0x140063f30*/
  v15 = 0; /*0x140063f34*/
  v18 = 1; /*0x140063f3e*/
  sub_140EE4800((char *)&v15 + 1); /*0x140063f42*/
  if ( v12 ) /*0x140063f4b*/
  {
    a1->m128i_i64[0] = 0x8000000000000002uLL; /*0x140063f4d*/
    sub_140044420(v14); /*0x140063f54*/
    return a1; /*0x140063f59*/
  }
LABEL_11:
  v17[0] = v8; /*0x140063f5b*/
  v17[1] = v9; /*0x140063f5f*/
  (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v14, *a3); /*0x140063f71*/
  if ( v14[0].m128i_i64[0] != 0x8000000000000002uLL ) /*0x140063f79*/
    v17[0] = 0; /*0x140063f7b*/
  sub_1412762D0(a1, v14, 0xB0u); /*0x140063f8c*/
  v18 = 0; /*0x140063f91*/
  sub_140EE4800(v17); /*0x140063f99*/
  return a1; /*0x140063fa2*/
}