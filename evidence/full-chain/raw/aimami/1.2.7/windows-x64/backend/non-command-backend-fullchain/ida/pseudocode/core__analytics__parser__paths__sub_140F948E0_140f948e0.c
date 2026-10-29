// win 1.2.7 | module src/core/analytics/parser/paths.rs | ea 0x140f948e0 | name sub_140F948E0
// win 1.2.7 | module src/core/analytics/parser/paths.rs | attributed via panic-Location xref (win-native)
const __m128i *__fastcall sub_140F948E0(
        const __m128i **a1,
        __int64 a2,
        const __m128i *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rbx
  signed __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r15
  const __m128i *result; // rax
  __int64 v21; // r13
  __m128i *v22; // rax
  __m128i *v23; // r14
  _QWORD *v24; // r14
  __int64 v25; // rdx
  _QWORD v26[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v27[8]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v28; // [rsp+80h] [rbp+0h] BYREF
  __int64 v29; // [rsp+90h] [rbp+10h]
  __int64 v30; // [rsp+A0h] [rbp+20h]
  const __m128i *v31; // [rsp+A8h] [rbp+28h]
  __int64 v32; // [rsp+B0h] [rbp+30h]

  v32 = -2;
  sub_140EBED40(&v28, a3, a4, a5);
  if ( v28.m128i_i64[0] == -1 )
  {
    v27[0] = aUnresolvedPath;
    v27[1] = 15;
    v27[2] = a6;
    v27[3] = a7;
    v27[4] = a8;
    v27[5] = a9;
    v27[6] = a3;
    v27[7] = a4;
    sub_140F8ADE0(v26, v27, 4);
    v31 = (const __m128i *)v26[0];
    v30 = v26[1];
    v16 = v26[2];
    *(_BYTE *)(a2 + 505) = 1;
    LOBYTE(v18) = 9;
    sub_140E7ADB0(a2 + 400, v18);
    v19 = v30;
    result = v31;
  }
  else
  {
    v13 = v29;
    v14 = v29 - 1;
    if ( !v29 )
      sub_1419390C3(v14, 0, &off_141A64C18);
    v15 = v28.m128i_i64[1];
    v16 = *(_QWORD *)(v28.m128i_i64[1] + 24 * v14 + 16);
    if ( v16 < 0 )
    {
      v17 = 0;
      goto LABEL_5;
    }
    v21 = v28.m128i_i64[0];
    if ( v16 )
    {
      v31 = *(const __m128i **)(v28.m128i_i64[1] + 24 * v14 + 8);
      nullsub_1(v14);
      v17 = 1;
      v22 = (__m128i *)sub_140001650(v16, 1);
      if ( !v22 )
LABEL_5:
        sub_141938D2B(v17, v16);
      v23 = v22;
      sub_1418F44E0(v22, v31, v16);
      v19 = (__int64)v23;
    }
    else
    {
      v19 = 1;
    }
    v24 = (_QWORD *)(v15 + 8);
    do
    {
      v25 = *(v24 - 1);
      if ( v25 )
        sub_140001660(*v24, v25, 1);
      v24 += 3;
      --v13;
    }
    while ( v13 );
    if ( v21 )
      sub_140001660(v15, 24 * v21, 8);
    result = (const __m128i *)v16;
  }
  *a1 = result;
  a1[1] = (const __m128i *)v19;
  a1[2] = (const __m128i *)v16;
  return result;
}
