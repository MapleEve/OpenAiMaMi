// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140231bb0 | name sub_140231BB0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140231BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, __int64 a7)
{
  int v7; // r15d
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  const __m128i *v17; // r14
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r12
  __m128i v24; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v25[7]; // [rsp+40h] [rbp-40h]
  __m128i v26; // [rsp+78h] [rbp-8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+8h]
  _OWORD v28[2]; // [rsp+90h] [rbp+10h] BYREF
  __m128i v29; // [rsp+B8h] [rbp+38h] BYREF
  __m128i v30; // [rsp+C8h] [rbp+48h] BYREF
  int v31; // [rsp+DCh] [rbp+5Ch]
  __int64 v32; // [rsp+E0h] [rbp+60h]

  v32 = -2;
  if ( *(_QWORD *)a7 == -1 && sub_1401FAC00(a2, a3, aThreadSettings, 23) == 1 )
  {
    v24.m128i_i64[0] = a2;
    v24.m128i_i64[1] = a3;
    *(_OWORD *)v25 = 0;
    sub_14062F970(&v29, &v24);
    if ( v29.m128i_i8[0] != -1 )
    {
      v12 = _mm_loadu_si128(&v29);
      v28[1] = _mm_loadu_si128(&v30);
      v28[0] = v12;
      v13 = sub_1416419F0(aType_3, 4, v28);
      if ( v13 )
      {
        if ( *(_BYTE *)v13 == 3
          && *(_QWORD *)(v13 + 24) == 9
          && !(**(_QWORD **)(v13 + 16) ^ 0x736D5F746E657665LL
             | *(unsigned __int8 *)(*(_QWORD *)(v13 + 16) + 8LL) ^ 0x67LL) )
        {
          v14 = sub_141642800(v28, aPayloadType, 13);
          if ( v14 )
          {
            if ( *(_BYTE *)v14 == 3
              && *(_QWORD *)(v14 + 24) == 23
              && _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v14 + 16)), (__m128i)xmmword_1419D37B0),
                     _mm_cmpeq_epi8(
                       _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v14 + 16) + 7LL)),
                       (__m128i)xmmword_1419D37A0))) == 0xFFFF )
            {
              if ( a3 )
                LOBYTE(v7) = *(_BYTE *)(a2 + a3 - 1) == 13;
              else
                v7 = 0;
              sub_1416B3AE0(&v29, a2, a3);
              if ( v29.m128i_i32[0] == 1 )
              {
                sub_1401B20C0(&v24);
                v15 = _mm_loadu_si128(&v24);
                v16 = v25[0];
                *(_OWORD *)(a1 + 24) = *(_OWORD *)&v25[1];
                *(_OWORD *)(a1 + 40) = *(_OWORD *)&v25[3];
                *(_OWORD *)(a1 + 56) = *(_OWORD *)&v25[5];
                *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v26);
                *(_QWORD *)(a1 + 88) = v27;
                *(__m128i *)a1 = v15;
                *(_QWORD *)(a1 + 16) = v16;
                goto LABEL_9;
              }
              v17 = (const __m128i *)v29.m128i_i64[1];
              v31 = v7;
              if ( v30.m128i_i64[0] )
                v18 = -(__int64)(*(_BYTE *)(v29.m128i_i64[1] + v30.m128i_i64[0] - 1) == 13);
              else
                v18 = 0;
              v19 = v30.m128i_i64[0] + v18;
              sub_14072C410((unsigned int)&v24, v19, 0, 1, 1);
              v20 = v24.m128i_i64[1];
              if ( v24.m128i_i32[0] == 1 )
                sub_141938D2B(v24.m128i_i64[1], v25[0]);
              v21 = a6;
              v22 = a5;
              v23 = v25[0];
              if ( v19 )
              {
                sub_1418F44E0((__m128i *)v25[0], v17, v19);
                v22 = a5;
                v21 = a6;
              }
              *(_QWORD *)a7 = v20;
              *(_QWORD *)(a7 + 8) = v23;
              *(_QWORD *)(a7 + 16) = v19;
              *(_QWORD *)(a7 + 24) = a4;
              *(_QWORD *)(a7 + 32) = v22;
              *(_BYTE *)(a7 + 40) = v21;
              *(_BYTE *)(a7 + 41) = v31;
            }
          }
        }
      }
      *(_QWORD *)a1 = -1;
LABEL_9:
      sub_14002F9D0(v28);
      return;
    }
    sub_14002F910(&v29.m128i_u64[1]);
  }
  *(_QWORD *)a1 = -1;
}
