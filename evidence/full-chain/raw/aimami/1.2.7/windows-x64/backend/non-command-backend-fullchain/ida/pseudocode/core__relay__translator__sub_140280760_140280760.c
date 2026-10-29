// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140280760 | name sub_140280760
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140280760(_QWORD *a1, __int64 a2)
{
  void *v4; // rbx
  void *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r14
  _QWORD v16[3]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+78h] [rbp-8h]

  v24 = -2;
  v4 = (void *)sub_1416419F0("contenttext", 7, a2);
  v5 = off_1421E7108;
  if ( !v4 )
    v4 = off_1421E7108;
  v6 = sub_1416419F0(aType_3, 4, v4);
  if ( !v6 )
    v6 = (__int64)v5;
  if ( *(_BYTE *)v6 != 3
    || *(_QWORD *)(v6 + 24) != 28
    || _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v6 + 16)), (__m128i)xmmword_1419D3580),
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v6 + 16) + 12LL)), (__m128i)xmmword_1419D3850))) != 0xFFFF )
  {
    goto LABEL_13;
  }
  v7 = sub_1416419F0(aErrorCode, 10, v4);
  if ( !v7 )
    v7 = (__int64)v5;
  if ( *(_BYTE *)v7 != 3 || !*(_QWORD *)(v7 + 24) )
  {
LABEL_13:
    v8 = sub_1416419F0("contenttext", 7, a2);
    if ( v8 && *(_BYTE *)v8 == 4 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = 32LL * *(_QWORD *)(v8 + 24);
      v17[0] = 0;
      v16[0] = v9;
      v16[1] = v9 + v10;
      v16[2] = v17;
      sub_1403CB0B0(&v18, v16);
      v11 = v17[0];
      if ( v17[0] )
      {
        v12 = v17[1];
        v13 = v19;
        v21 = v20;
        v22 = 0;
        v23 = v19;
        while ( v21 != v22 )
        {
          ++v22;
          v14 = v13 + 32;
          sub_1403880E0(v13);
          v13 = v14;
        }
        if ( v18 )
          sub_140001660(v23, 32 * v18, 8);
      }
      else
      {
        v11 = v19;
        v12 = v20;
        if ( v18 != -1 )
        {
          *a1 = v18;
          a1[1] = v11;
          a1[2] = v12;
          return a1;
        }
      }
      a1[1] = v11;
      a1[2] = v12;
    }
    else
    {
      a1[1] = aAnthropicWebSe;
      a1[2] = 47;
    }
    *a1 = -2;
    return a1;
  }
  *a1 = -1;
  return a1;
}
