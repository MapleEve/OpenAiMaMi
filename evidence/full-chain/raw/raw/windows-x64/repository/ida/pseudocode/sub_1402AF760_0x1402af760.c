// module: codexmate_lib/core/repository
// addr: 0x1402af760
// name: sub_1402AF760
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402AF760(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __m128i v7; // xmm8
  unsigned __int64 v9; // r15
  int v11; // eax
  bool v12; // zf
  __int64 i; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // r14
  __m128i v16; // xmm0
  __m128i v17; // xmm7
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __m128i v23; // xmm8
  unsigned __int64 v25; // r13
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 j; // rsi
  __int64 v30; // rax
  _QWORD *v31; // rdi
  __m128i v32; // xmm0
  __m128i v33; // xmm7
  __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // [rsp+20h] [rbp-60h]
  _QWORD *v37; // [rsp+28h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-48h]
  __int64 v40; // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+48h] [rbp-38h]
  unsigned __int64 v42; // [rsp+50h] [rbp-30h]
  __int64 v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  __int64 v45; // [rsp+60h] [rbp-20h]

  result = *(_QWORD *)(a1 + 16);
  v42 = result;
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v37 = a2 + 4;
    v4 = *a2;
    v41 = a2[1];
    v36 = a2[3];
    v43 = v3;
    if ( v36 )
    {
      v5 = 0;
      do
      {
        v15 = (_QWORD *)(v3 + 160 * v5);
        v14 = sub_140378810(v37, v15 + 15);
        _RCX = v14 >> 57;
        v16 = _mm_cvtsi32_si128(v14 >> 57);
        v17 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v16, v16), 0), 68);
        v18 = v15[16];
        v19 = v15[17];
        for ( i = 0; ; i += 16 )
        {
          v6 = v41 & v14;
          v7 = _mm_loadu_si128((const __m128i *)(v4 + v6));
          _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v7, v17));
          if ( _ESI )
            break;
LABEL_9:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v7, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
            goto LABEL_14;
          v14 = i + v6 + 16;
        }
        v44 = i;
        while ( 1 )
        {
          __asm { tzcnt   ecx, esi }
          v9 = v6;
          _RCX = -(__int64)(v41 & (v6 + _RCX));
          if ( v19 == *(_QWORD *)(v4 + 24 * _RCX - 8) )
          {
            result = sub_1416847B0(v18, *(_QWORD *)(v4 + 24 * _RCX - 16), v19);
            if ( !(_DWORD)result )
              break;
          }
          v11 = _ESI - 1;
          LOWORD(v11) = _ESI & (_ESI - 1);
          v12 = (_WORD)v11 == 0;
          _ESI = v11;
          v6 = v9;
          v3 = v43;
          i = v44;
          if ( v12 )
            goto LABEL_9;
        }
        ++v5;
        v3 = v43;
      }
      while ( v5 != v42 );
    }
    else
    {
      v5 = 0;
      v15 = *(_QWORD **)(a1 + 8);
LABEL_14:
      v20 = v15[15];
      if ( v20 )
        sub_140001660(v15[16], v20, 1);
      v21 = v5 + 1;
      if ( v5 + 1 < v42 )
      {
        do
        {
          v39 = v21;
          v30 = 160 * v21;
          v45 = v3 + v30;
          v31 = (_QWORD *)(v3 + v30 + 120);
          if ( v36 )
          {
            v40 = v5;
            v28 = sub_140378810(v37, v3 + v30 + 120);
            v32 = _mm_cvtsi32_si128(v28 >> 57);
            v33 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v32, v32), 0), 68);
            HIDWORD(_RCX) = HIDWORD(v45);
            v34 = *(_QWORD *)(v45 + 128);
            v35 = *(_QWORD *)(v45 + 136);
            for ( j = 0; ; j += 16 )
            {
              v22 = v41 & v28;
              v23 = _mm_loadu_si128((const __m128i *)(v4 + v22));
              _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v23, v33));
              if ( _R15D )
                break;
LABEL_22:
              _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v23, (__m128i)-1LL));
              v3 = v43;
              if ( (_DWORD)_RCX )
                goto LABEL_28;
              v28 = j + v22 + 16;
            }
            while ( 1 )
            {
              __asm { tzcnt   ecx, r15d }
              v25 = v22;
              _RCX = -(__int64)(v41 & (v22 + _RCX));
              if ( v35 == *(_QWORD *)(v4 + 24 * _RCX - 8)
                && !(unsigned int)sub_1416847B0(v34, *(_QWORD *)(v4 + 24 * _RCX - 16), v35) )
              {
                break;
              }
              v27 = _R15D - 1;
              LOWORD(v27) = _R15D & (_R15D - 1);
              v12 = (_WORD)v27 == 0;
              _R15D = v27;
              v22 = v25;
              v5 = v40;
              if ( v12 )
                goto LABEL_22;
            }
            v3 = v43;
            sub_141684120(v43 + 160 * v40, v45, 160);
            v5 = v40 + 1;
          }
          else
          {
LABEL_28:
            if ( *v31 )
              sub_140001660(*(_QWORD *)(v45 + 128), *v31, 1);
          }
          v21 = v39 + 1;
        }
        while ( v39 + 1 != v42 );
      }
      *(_QWORD *)(a1 + 16) = v5;
      return a1;
    }
  }
  return result;
}