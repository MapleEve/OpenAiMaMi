// win 1.2.3 | = mac codexmate_lib::core::session_analytics::range_to_cutoff | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall range_to_cutoff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // esi
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // edx
  char v19; // [rsp+27h] [rbp-61h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-60h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h]
  _BYTE v22[12]; // [rsp+44h] [rbp-44h] BYREF
  int v23; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-34h]
  int v25; // [rsp+5Ch] [rbp-2Ch] BYREF
  unsigned int v26; // [rsp+60h] [rbp-28h]
  unsigned int v27; // [rsp+64h] [rbp-24h]
  unsigned __int64 v28; // [rsp+68h] [rbp-20h] BYREF
  int v29; // [rsp+70h] [rbp-18h]

  v23 = sub_141475580(a1, a2, a3, a4); /*0x14047e7e1*/
  v24 = v6; /*0x14047e7e5*/
  sub_141475530(&v20, &v23, 3577643008LL, 27111902); /*0x14047e7ff*/
  if ( (_BYTE)v20 ) /*0x14047e809*/
  {
    v7 = 0; /*0x14047e84d*/
    if ( a2 == 4 ) /*0x14047e853*/
      return v7 - 604800; /*0x14047e853*/
  }
  else
  {
    v7 = v21; /*0x14047e80b*/
    if ( a2 == 4 ) /*0x14047e814*/
      return v7 - 604800; /*0x14047e867*/
  }
  if ( a2 != 5 ) /*0x14047e81a*/
    return v7 - 604800; /*0x14047e81a*/
  if ( *(_DWORD *)a1 ^ 0x61646F74 | *(unsigned __int8 *)(a1 + 4) ^ 0x79 ) /*0x14047e82a*/
  {
    if ( !(*(_DWORD *)a1 ^ 0x746E6F6D | *(unsigned __int8 *)(a1 + 4) ^ 0x68) ) /*0x14047e83c*/
      return v7 - 2592000; /*0x14047e84c*/
    return v7 - 604800; /*0x14047e83e*/
  }
  v9 = v7 / 86400; /*0x14047e883*/
  v10 = (v7 % 86400) >> 63; /*0x14047e896*/
  v11 = v7; /*0x14047e8a0*/
  v12 = v7 % 86400 + 86400; /*0x14047e8a3*/
  if ( v7 % 86400 >= 0 ) /*0x14047e8ab*/
    LODWORD(v12) = v7 % 86400; /*0x14047e8ab*/
  if ( (unsigned __int64)(v10 + v9 - 2146764485) >= 0xFFFFFFFF00000000uLL /*0x14047e8d8*/
    && (v13 = sub_140FFA170((unsigned int)(v9 + v10 + 719163))) != 0 )
  {
    v20 = __PAIR64__(v12, v13); /*0x14047e8da*/
    LODWORD(v21) = 0; /*0x14047e8e2*/
  }
  else
  {
    sub_140FFA6E0(&v20); /*0x14047e8f1*/
  }
  v29 = v21; /*0x14047e8fa*/
  v28 = v20; /*0x14047e903*/
  v14 = sub_140FFD2D0(1, &v20); /*0x14047e912*/
  sub_140FFAD80(&v20, &v28, v14); /*0x14047e924*/
  if ( !(_DWORD)v20 ) /*0x14047e92f*/
    sub_1416C3000(aLocalTimeOutOf_0, 43, &off_141758F38); /*0x14047ea9c*/
  *(_DWORD *)v22 = v20; /*0x14047e935*/
  *(_QWORD *)&v22[4] = 0; /*0x14047e939*/
  sub_140FFDAC0(&v25, &v19, v22); /*0x14047e951*/
  if ( v25 ) /*0x14047e95c*/
  {
    if ( v25 == 1 ) /*0x14047e961*/
    {
      v15 = v27; /*0x14047e96c*/
      LODWORD(v21) = *(_DWORD *)&v22[8]; /*0x14047e974*/
      v20 = *(_QWORD *)v22; /*0x14047e97d*/
      sub_140FFAF30(&v23, &v20, v26); /*0x14047e98c*/
      LODWORD(v21) = *(_DWORD *)&v22[8]; /*0x14047e995*/
      v20 = *(_QWORD *)v22; /*0x14047e99e*/
      sub_140FFAF30(&v23, &v20, v15); /*0x14047e9b0*/
    }
    return v11 - 86400; /*0x14047e9b5*/
  }
  LODWORD(v21) = *(_DWORD *)&v22[8]; /*0x14047e9c3*/
  v20 = *(_QWORD *)v22; /*0x14047e9cc*/
  sub_140FFAF30(&v23, &v20, v26); /*0x14047e9db*/
  if ( !v23 ) /*0x14047e9e6*/
    return v11 - 86400; /*0x14047ea88*/
  v16 = (v23 >> 13) - 1; /*0x14047e9f7*/
  v17 = 0; /*0x14047e9fb*/
  if ( v23 >> 13 <= 0 ) /*0x14047ea00*/
  {
    v18 = (1 - (v23 >> 13)) / 0x190u + 1; /*0x14047ea15*/
    v16 += 400 * v18; /*0x14047ea1e*/
    v17 = -146097 * v18; /*0x14047ea21*/
  }
  return v24 /*0x14047e846*/
       + 86400LL
       * (int)(((v16 / 100) >> 2) + ((1461 * v16) >> 2) + v17 + (((unsigned int)v23 >> 4) & 0x1FF) - v16 / 100 - 719163);
}