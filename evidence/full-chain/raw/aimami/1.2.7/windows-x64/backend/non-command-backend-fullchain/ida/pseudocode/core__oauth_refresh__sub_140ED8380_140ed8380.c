// win 1.2.7 | module src/core/oauth_refresh.rs | ea 0x140ed8380 | name sub_140ED8380
// win 1.2.7 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140ED8380(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v9[11]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v10[11]; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v11[3]; // [rsp+180h] [rbp+100h] BYREF
  __int64 v12; // [rsp+1B0h] [rbp+130h]
  __int64 v13; // [rsp+1B8h] [rbp+138h]
  __m128i v14[3]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v15; // [rsp+260h] [rbp+1E0h]
  __int64 v16; // [rsp+268h] [rbp+1E8h]
  __int64 v17; // [rsp+2E0h] [rbp+260h]
  __int64 v18; // [rsp+2E8h] [rbp+268h]

  v18 = -2;
  if ( (unsigned __int8)sub_140ED8760(a1) || (unsigned __int8)sub_140ED8760(a2) )
    return 0;
  sub_140ED5630(v10, a1, a3, a4);
  sub_140ED5630(v9, a2, a3, a4);
  sub_1418F44E0(v11, v10, 0xB0u);
  sub_1418F44E0(v14, v9, 0xB0u);
  if ( v11[0].m128i_i64[0] == 2 || v14[0].m128i_i32[0] == 2 )
  {
    v17 = v14[0].m128i_i64[0];
    if ( v11[0].m128i_i32[0] == 2 )
    {
      sub_140E97700(&v11[0].m128i_u64[1]);
      if ( (_DWORD)v17 == 2 )
      {
LABEL_10:
        sub_140E97700(&v14[0].m128i_u64[1]);
        return 0;
      }
    }
    else
    {
      sub_140034220(v11);
      if ( (_DWORD)v17 == 2 )
        goto LABEL_10;
    }
    sub_140034220(v14);
    return 0;
  }
  if ( v13 == v16 )
    LOBYTE(a3) = (unsigned int)sub_1418F4B70(v12, v15) == 0;
  else
    LODWORD(a3) = 0;
  sub_140034220(v14);
  sub_140034220(v11);
  return (unsigned int)a3;
}
