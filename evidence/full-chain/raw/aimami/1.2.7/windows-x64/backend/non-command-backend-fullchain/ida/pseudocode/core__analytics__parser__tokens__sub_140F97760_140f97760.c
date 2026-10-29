// win 1.2.7 | module src/core/analytics/parser/tokens.rs | ea 0x140f97760 | name sub_140F97760
// win 1.2.7 | module src/core/analytics/parser/tokens.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F97760(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        unsigned __int64 a7,
        _QWORD *a8)
{
  __int64 v12; // rax
  __int64 v13; // rcx
  __m128i *v14; // rax
  __m128i *v15; // r13
  __int64 v16; // rsi
  __int64 result; // rax
  __m128i v18; // [rsp+68h] [rbp-18h] BYREF
  __m128i *v19; // [rsp+78h] [rbp-8h]
  unsigned __int64 v20; // [rsp+80h] [rbp+0h]
  _QWORD v21[6]; // [rsp+F8h] [rbp+78h] BYREF
  char v22[8]; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v23; // [rsp+130h] [rbp+B0h]
  __int64 v24; // [rsp+140h] [rbp+C0h]
  _QWORD v25[3]; // [rsp+148h] [rbp+C8h] BYREF
  __int128 v26; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v27; // [rsp+170h] [rbp+F0h]
  __m128i *v28; // [rsp+178h] [rbp+F8h]
  __int64 v29; // [rsp+180h] [rbp+100h]

  v29 = -2;
  v21[0] = a1;
  v21[1] = a2;
  v21[2] = a3;
  v21[3] = a4;
  v21[4] = a6;
  v21[5] = a7;
  *(_QWORD *)&v26 = 0;
  v27 = 0;
  nullsub_1(a1);
  v12 = sub_140001650(6, 1);
  if ( !v12 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v12 + 4) = 28271;
  *(_DWORD *)v12 = 1935762802;
  v25[0] = 6;
  v25[1] = v12;
  v25[2] = 6;
  nullsub_1(v13);
  v14 = (__m128i *)sub_140001650(a7, 1);
  v28 = v14;
  if ( !v14 )
    sub_141938D2B(1, a7);
  v15 = v14;
  sub_1418F44E0(v14, a6, a7);
  v18.m128i_i8[0] = 3;
  v18.m128i_i64[1] = a7;
  v19 = v15;
  v20 = a7;
  sub_140E72AA0(v22, &v26, v25, &v18);
  if ( v22[0] != -1 )
    sub_14002F9D0(v22);
  v23 = v26;
  v24 = v27;
  v22[0] = 5;
  sub_140F8B6E0(
    (unsigned int)&v18,
    (unsigned int)aCoverage,
    8,
    (unsigned int)v21,
    3,
    a1,
    a2,
    a3,
    a4,
    a5,
    (__int64)v22,
    10);
  v16 = a8[2];
  if ( v16 == *a8 )
    sub_141910220(a8);
  result = sub_1418F44E0((__m128i *)(a8[1] + 144 * v16), &v18, 0x90u);
  a8[2] = v16 + 1;
  return result;
}
