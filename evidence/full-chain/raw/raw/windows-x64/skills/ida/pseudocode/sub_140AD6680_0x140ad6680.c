// module: codexmate_lib/core/skills
// addr: 0x140ad6680
// name: sub_140AD6680
// win 1.2.1 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140AD6680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i si128; // xmm6
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int128 v13; // xmm0
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __m128i v16; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v17; // [rsp+80h] [rbp+0h]
  __int64 v18; // [rsp+88h] [rbp+8h]
  _OWORD v19[4]; // [rsp+B0h] [rbp+30h] BYREF
  _OWORD v20[4]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v21; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v22; // [rsp+148h] [rbp+C8h]
  __int64 v23; // [rsp+158h] [rbp+D8h]

  v23 = -2;
  if ( !a5 )
    goto LABEL_14;
  sub_141473290(&v14, a4, a5);
  do
    sub_141491FB0(v20, &v14);
  while ( LOBYTE(v20[0]) == 9 );
  if ( LOBYTE(v20[0]) == 255 )
  {
    sub_1414734D0(&v21, a2, a3);
    sub_141473290(v19, a4, a5);
    v20[3] = v19[3];
    v20[2] = v19[2];
    v20[1] = v19[1];
    v20[0] = v19[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_1417AB760);
    do
    {
      while ( 1 )
      {
        sub_141491FB0((char *)&v16.m128i_u64[1] + 4, v20);
        result = v16.m128i_u8[12];
        if ( v16.m128i_u8[12] == 255 )
        {
          v13 = v21;
          *(_OWORD *)(a1 + 24) = v22;
          *(_OWORD *)(a1 + 8) = v13;
          *(_QWORD *)a1 = -1;
          return result;
        }
        if ( v16.m128i_u8[12] != 9 )
          sub_1416C32C0("internal error: entered unreachable code: validated above", 115, &off_1417AF3F8);
        sub_141482190(&v21, v17, v18);
        sub_141486270(&v14, *((_QWORD *)&v21 + 1), v22);
        if ( (_DWORD)v14 != 2 )
          break;
        v12 = v15;
        result = sub_140ACFD10(v15);
        if ( (_BYTE)result )
        {
          *(_QWORD *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v12;
          goto LABEL_19;
        }
        v14 = v12;
        sub_140018650(&v14);
      }
    }
    while ( _mm_movemask_pd((__m128d)_mm_cmpeq_epi32(
                                       _mm_and_si128(_mm_shuffle_epi32(_mm_loadl_epi64(&v16), 80), si128),
                                       (__m128i)0LL)) );
    nullsub_1(v11);
    result = sub_140001650(53, 1);
    if ( !result )
      sub_1416C2D4B(1, 53);
    qmemcpy((void *)result, "Skill backup target must not traverse a symbolic link", 53);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 53;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 53;
LABEL_19:
    if ( (_QWORD)v21 )
      return sub_140001660(*((_QWORD *)&v21 + 1), v21, 1);
  }
  else
  {
LABEL_14:
    nullsub_1(a1);
    result = sub_140001650(46, 1);
    if ( !result )
      sub_1416C2D4B(1, 46);
    qmemcpy((void *)result, "Skill backup contains an invalid relative path", 46);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 46;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 46;
  }
  return result;
}