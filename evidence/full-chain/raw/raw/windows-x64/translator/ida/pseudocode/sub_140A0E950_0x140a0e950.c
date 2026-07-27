// module: codexmate_lib/core/relay/translator
// addr: 0x140a0e950
// name: sub_140A0E950
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140A0E950(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  unsigned __int64 v8; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __m128i v12; // xmm0
  __m128i v13; // xmm6
  __int64 i; // rdx
  unsigned __int64 v15; // rax
  __m128i v16; // xmm8
  __int64 v18; // r12
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-60h]
  __int128 v29; // [rsp+28h] [rbp-58h]
  __int128 v30; // [rsp+38h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]
  _OWORD *v32; // [rsp+48h] [rbp-38h]

  if ( a3 && a4[3] )
  {
    v8 = sub_1403795A0(a4 + 4, a2, a3);
    _RCX = v8 >> 57;
    v10 = *a4;
    v11 = a4[1];
    v12 = _mm_cvtsi32_si128(v8 >> 57);
    v13 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v12, v12), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      v15 = v11 & v8;
      v16 = _mm_loadu_si128((const __m128i *)(v10 + v15));
      _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v16, v13));
      if ( _R13D )
        break;
LABEL_9:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v16, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        return;
      v8 = i + v15 + 16;
    }
    v31 = v15;
    v28 = i;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r13d }
      _RCX = -(__int64)(v11 & (v15 + _RCX));
      if ( a3 == *(_QWORD *)(v10 + 48 * _RCX - 32) )
      {
        v18 = v10 + 48 * _RCX;
        if ( !(unsigned int)sub_1416847B0(a2, *(_QWORD *)(v18 - 40), a3) )
          break;
      }
      v19 = _R13D - 1;
      LOWORD(v19) = _R13D & (_R13D - 1);
      v20 = (_WORD)v19 == 0;
      _R13D = v19;
      v15 = v31;
      i = v28;
      if ( v20 )
        goto LABEL_9;
    }
    v21 = *(_QWORD *)(v18 - 8);
    v22 = v21 - a3;
    if ( v21 >= a3 )
    {
      v23 = *(_QWORD *)(v18 - 16);
      if ( !(unsigned int)sub_1416847B0(a2, v23 + v22, a3) )
      {
        if ( v22 < 0 )
        {
          v25 = 0;
          goto LABEL_15;
        }
        v26 = 1;
        if ( v21 != a3 )
        {
          nullsub_1(v24);
          v25 = 1;
          v27 = sub_140001650(v22, 1);
          if ( !v27 )
LABEL_15:
            sub_1416C2D4B(v25, v22);
          v26 = v27;
          sub_141684120(v27, v23, v22);
        }
        *((_QWORD *)&v29 + 1) = v22;
        *(_QWORD *)&v30 = v26;
        *((_QWORD *)&v30 + 1) = v22;
        LOBYTE(v29) = 3;
        v32 = (_OWORD *)sub_141433E50("namespace", 9, a1);
        sub_1400104F0(v32);
        v32[1] = v30;
        *v32 = v29;
      }
    }
  }
}