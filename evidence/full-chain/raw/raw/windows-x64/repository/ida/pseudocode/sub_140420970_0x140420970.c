// module: codexmate_lib/core/repository
// addr: 0x140420970
// name: sub_140420970
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140420970(__int64 *a1, unsigned int *a2, unsigned __int64 a3)
{
  __int64 *result; // rax
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r8

  result = a1;
  a1[6] += a3;
  v4 = a1[8];
  if ( !v4 )
  {
    v5 = 0;
    goto LABEL_15;
  }
  v5 = 8 - v4;
  v6 = a3;
  if ( 8 - v4 < a3 )
    v6 = 8 - v4;
  if ( v6 >= 4 )
  {
    v7 = *a2;
    v8 = 4;
    if ( v6 <= 5 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v8 = 0;
  v7 = 0;
  if ( v6 > 1 )
  {
LABEL_9:
    v7 |= (unsigned __int64)*(unsigned __int16 *)((char *)a2 + v8) << (8 * (unsigned __int8)v8);
    v8 |= 2u;
  }
LABEL_10:
  if ( v8 < v6 )
    v7 |= (unsigned __int64)*((unsigned __int8 *)a2 + v8) << (8 * (unsigned __int8)v8);
  v9 = a1[7] | (v7 << (8 * (unsigned __int8)v4));
  a1[7] = v9;
  if ( a3 < v5 )
  {
    v10 = a3 + v4;
    goto LABEL_27;
  }
  v11 = v9 ^ a1[3];
  v12 = result[2];
  v13 = v12 + *result;
  v14 = v11 + result[1];
  v15 = v13 ^ __ROL8__(v12, 13);
  v16 = v14 ^ __ROL8__(v11, 16);
  v17 = v15 + v14;
  v18 = v16 + __ROL8__(v13, 32);
  result[2] = v17 ^ __ROL8__(v15, 17);
  result[3] = v18 ^ __ROL8__(v16, 21);
  result[1] = __ROL8__(v17, 32);
  *result = v9 ^ v18;
LABEL_15:
  v19 = a3 - v5;
  v10 = v19 & 7;
  v20 = v19 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v5 < v20 )
  {
    v21 = *result;
    v22 = result[1];
    v23 = result[3];
    v24 = result[2];
    do
    {
      v25 = *(_QWORD *)((char *)a2 + v5);
      v26 = v25 ^ v23;
      v27 = v24 + v21;
      v28 = v26 + v22;
      v29 = v27 ^ __ROL8__(v24, 13);
      v30 = v28 ^ __ROL8__(v26, 16);
      v31 = v29 + v28;
      v32 = v30 + __ROL8__(v27, 32);
      v24 = v31 ^ __ROL8__(v29, 17);
      v22 = __ROL8__(v31, 32);
      v23 = v32 ^ __ROL8__(v30, 21);
      v21 = v25 ^ v32;
      v5 += 8LL;
    }
    while ( v5 < v20 );
    result[3] = v23;
    result[2] = v24;
    result[1] = v22;
    *result = v21;
  }
  if ( (unsigned int)v10 >= 4 )
  {
    v33 = *(unsigned int *)((char *)a2 + v5);
    v34 = 4;
    if ( (unsigned int)v10 <= 5 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v34 = 0;
  v33 = 0;
  if ( (unsigned int)v10 > 1 )
  {
LABEL_23:
    v33 |= (unsigned __int64)*(unsigned __int16 *)((char *)a2 + v5 + v34) << (8 * (unsigned __int8)v34);
    v34 |= 2uLL;
  }
LABEL_24:
  if ( (unsigned int)v34 < (unsigned int)v10 )
    v33 |= (unsigned __int64)*((unsigned __int8 *)a2 + v34 + v5) << (8 * (unsigned __int8)v34);
  result[7] = v33;
LABEL_27:
  result[8] = v10;
  return result;
}