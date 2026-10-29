// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d73b40 | name sub_140D73B40
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D73B40(__int64 a1, __int64 a2, signed __int64 a3)
{
  __int64 v5; // rdi
  char v6; // bp
  __int64 v7; // r15
  __m128i *v8; // rax
  __int64 v9; // r14

  v5 = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 != 1701736292 )
        goto LABEL_19;
      v6 = 8;
      goto LABEL_20;
    case 9LL:
      a1 = *(_QWORD *)a2 ^ 0x6E69726170657270LL | *(unsigned __int8 *)(a2 + 8) ^ 0x67LL;
      if ( a1 )
        goto LABEL_19;
      v6 = 1;
      goto LABEL_20;
    case 14LL:
      a1 = *(_QWORD *)a2 ^ 0x676E6970706F7473LL | *(_QWORD *)(a2 + 6) ^ 0x7865646F635F676ELL;
      if ( !a1 )
        goto LABEL_19;
      a1 = *(_QWORD *)a2 ^ 0x676E697472617473LL | *(_QWORD *)(a2 + 6) ^ 0x79786F72705F676ELL;
      if ( a1 )
      {
        a1 = *(_QWORD *)a2 ^ 0x6E69726170657270LL | *(_QWORD *)(a2 + 6) ^ 0x687475615F676E69LL;
        if ( a1 )
        {
          a1 = *(_QWORD *)a2 ^ 0x5F676E6974697277LL | *(_QWORD *)(a2 + 6) ^ 0x6769666E6F635F67LL;
          if ( a1 )
LABEL_19:
            v6 = 2;
          else
LABEL_23:
            v6 = 5;
        }
        else
        {
          v6 = 4;
        }
      }
      else
      {
        v6 = 3;
      }
      goto LABEL_20;
    case 15LL:
      a1 = *(_QWORD *)a2 ^ 0x6E6968636E75616CLL | *(_QWORD *)(a2 + 7) ^ 0x7865646F635F676ELL;
      if ( a1 )
        goto LABEL_19;
      v6 = 7;
      goto LABEL_20;
    case 16LL:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141A41EF0)) != 0xFFFF )
        goto LABEL_19;
      goto LABEL_23;
    case 19LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141A41EE0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a2 + 3)), (__m128i)xmmword_141A41ED0))) != 0xFFFF )
        goto LABEL_19;
      v6 = 6;
      goto LABEL_20;
    default:
      if ( a3 < 0 )
      {
        v7 = 0;
        goto LABEL_13;
      }
      v6 = 2;
      if ( a3 )
      {
LABEL_20:
        nullsub_1(a1);
        v7 = 1;
        v8 = (__m128i *)sub_140001650(a3, 1);
        if ( !v8 )
LABEL_13:
          sub_141938D2B(v7, a3);
        v9 = (__int64)v8;
        sub_1418F44E0(v8, (const __m128i *)a2, a3);
      }
      else
      {
        v9 = 1;
      }
      *(_BYTE *)(v5 + 56) = v6;
      *(_BYTE *)(v5 + 57) = 8;
      *(_QWORD *)(v5 + 32) = a3;
      *(_QWORD *)(v5 + 40) = v9;
      *(_QWORD *)(v5 + 48) = a3;
      *(_QWORD *)v5 = 0;
      *(_QWORD *)(v5 + 16) = 0;
      return v5;
  }
}
