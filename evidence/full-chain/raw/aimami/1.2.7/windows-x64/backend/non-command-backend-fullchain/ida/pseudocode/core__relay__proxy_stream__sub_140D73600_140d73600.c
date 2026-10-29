// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140d73600 | name sub_140D73600
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_140D73600(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  __int64 v7; // rcx
  __m128i v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  __m128i v12; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-10h]
  __int64 v14; // [rsp+68h] [rbp-8h]

  v14 = -2;
  if ( *(_DWORD *)a2 == 2 )
  {
    sub_1416A9D40(&v12, a3, a4);
    v6 = *(_DWORD *)a2 == 2;
    v11 = v12.m128i_i64[1];
    if ( v6 )
      sub_140E338F0(&v9, a2 + 8, v12.m128i_i64[1], v13);
    else
      sub_140E5A130(&v9, a2, v12.m128i_i64[1], v13);
    a1[1].m128i_i64[0] = v10;
    *a1 = v9;
    if ( v12.m128i_i64[0] > 0 )
      sub_140001660(v11, v12.m128i_i64[0], 1);
  }
  else
  {
    sub_1416B3AE0(&v12, a3, a4);
    if ( v12.m128i_i8[0] )
    {
      if ( *(_QWORD *)(a2 + 632) )
        sub_1401F9370(a2 + 632, (unsigned int)aStreamReadErro, 17, (unsigned int)"Invalid Anthropic SSE UTF-8", 27);
      LOBYTE(v7) = 21;
      a1->m128i_i64[1] = sub_1416793A0(v7, "Invalid Anthropic SSE UTF-8", 27);
      a1->m128i_i64[0] = -1;
    }
    else
    {
      if ( *(_DWORD *)a2 == 2 )
        sub_140E338F0(&v12, a2 + 8, v12.m128i_i64[1], v13);
      else
        sub_140E5A130(&v12, a2, v12.m128i_i64[1], v13);
      a1[1].m128i_i64[0] = v13;
      *a1 = v12;
    }
  }
  return a1;
}
