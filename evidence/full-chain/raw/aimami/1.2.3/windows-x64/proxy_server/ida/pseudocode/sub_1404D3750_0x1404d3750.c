// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1404d3750
// name: sub_1404D3750
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404D3750(volatile signed __int8 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int8 *v6; // rbx
  int v7; // esi
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r14
  const __m128i *v16; // r13
  __int64 v17; // r9
  __m128i v18; // xmm0
  __m128i v19; // xmm6
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __m128i v24; // xmm8
  __int64 v26; // rax
  __int8 *v27; // rsi
  volatile signed __int8 *v28; // rdi
  char v29; // r8
  __int64 v30; // r15
  unsigned __int64 v31; // r12
  char v34; // al
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 result; // rax
  __int64 v40; // rcx
  char v41; // cl
  __int64 v42; // rsi
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // rsi
  __int64 v46; // rsi
  char v47; // cl
  _QWORD v49[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v50; // [rsp+40h] [rbp-40h]
  __int64 v51; // [rsp+48h] [rbp-38h]
  _QWORD *v52; // [rsp+50h] [rbp-30h]
  __int64 v53; // [rsp+58h] [rbp-28h]
  __int64 v54; // [rsp+60h] [rbp-20h]
  __int64 v55; // [rsp+68h] [rbp-18h]
  __int64 v56; // [rsp+70h] [rbp-10h]
  volatile signed __int8 *v57; // [rsp+78h] [rbp-8h]
  int v58; // [rsp+84h] [rbp+4h]
  __int64 v59; // [rsp+88h] [rbp+8h]

  v59 = -2;
  v6 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(v6 + 16, 1, 0) )
  {
    v42 = a2;
    sub_1416C15B0(v6 + 16);
    a2 = v42;
  }
  if ( 2 * *off_141EC90B8 )
  {
    v43 = a2;
    v44 = sub_1416C2250(a1, a2);
    a2 = v43;
    v7 = v44;
    LOBYTE(v7) = v44 ^ 1;
  }
  else
  {
    v7 = 0;
  }
  v57 = v6;
  v58 = v7;
  if ( a3 < 0 )
  {
    v8 = 0;
    goto LABEL_7;
  }
  v50 = v6 + 24;
  if ( a3 )
  {
    v9 = a2;
    nullsub_1(a1);
    v8 = 1;
    v10 = sub_140001650(a3, 1);
    if ( !v10 )
LABEL_7:
      sub_1416C2D4B(v8, a3);
    v11 = v10;
    sub_141684120(v10, v9, a3);
  }
  else
  {
    v11 = 1;
  }
  v49[0] = a3;
  v55 = v11;
  v49[1] = v11;
  v56 = a3;
  v49[2] = a3;
  v12 = v6 + 56;
  v13 = sub_140378810(v6 + 56, v49);
  v54 = a4;
  v14 = v13 >> 57;
  HIDWORD(_RAX) = HIDWORD(v57);
  v16 = *((const __m128i **)v57 + 3);
  v17 = *((_QWORD *)v57 + 4);
  v18 = _mm_cvtsi32_si128(v13 >> 57);
  v19 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v18, v18), 0), 68);
  _RCX = 0;
  v21 = v13;
  v22 = v56;
  while ( 1 )
  {
    v23 = v17 & v21;
    v24 = _mm_loadu_si128((const __m128i *)((char *)v16 + v23));
    _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v24, v19));
    if ( _R15D )
      break;
LABEL_18:
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL));
    if ( (_DWORD)_RAX )
    {
      v28 = v57;
      v30 = v54;
      if ( !*((_QWORD *)v57 + 5) )
      {
        LOBYTE(v17) = 1;
        sub_14168D2B0(v50, 1, v12, v17);
        v28 = v57;
        v16 = *((const __m128i **)v57 + 3);
        v17 = *((_QWORD *)v57 + 4);
      }
      v31 = v17 & v13;
      _EAX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v16 + v31)));
      if ( _EAX )
      {
        v29 = v58;
      }
      else
      {
        _RCX = 16;
        v29 = v58;
        do
        {
          v31 = v17 & (_RCX + v31);
          _EAX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v16 + v31)));
          _RCX += 16;
        }
        while ( !_EAX );
      }
      __asm { tzcnt   ecx, eax }
      _RCX = v17 & (v31 + _RCX);
      v34 = v16->m128i_i8[_RCX];
      if ( v34 >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v16));
        __asm { tzcnt   ecx, eax }
        v34 = v16->m128i_i8[_RCX];
      }
      v16->m128i_i8[_RCX] = v14;
      v16[1].m128i_i8[v17 & (_RCX - 16)] = v14;
      v27 = &v16->m128i_i8[-40 * _RCX];
      v35 = v56;
      *((_QWORD *)v27 - 5) = v56;
      *((_QWORD *)v27 - 4) = v55;
      *((_QWORD *)v27 - 3) = v35;
      *((_QWORD *)v27 - 2) = 0;
      *((_DWORD *)v27 - 2) = 0;
      *(__m128i *)(v28 + 40) = _mm_sub_epi64(
                                 _mm_loadu_si128((const __m128i *)(v28 + 40)),
                                 (__m128i)_mm_shuffle_pd(
                                            (__m128d)_mm_cvtsi32_si128(v34 & 1),
                                            (__m128d)xmmword_141748CD0,
                                            2));
      goto LABEL_30;
    }
    v21 = _RCX + v23 + 16;
    _RCX += 16;
  }
  v51 = v17;
  v52 = v12;
  v53 = _RCX;
  while ( 1 )
  {
    __asm { tzcnt   eax, r15d }
    v26 = -5 * (v17 & (v23 + _RAX));
    if ( *((_QWORD *)&v16[-1] + v26 - 1) == v22 )
    {
      v27 = &v16->m128i_i8[8 * v26];
      if ( !(unsigned int)sub_1416847B0(*((_QWORD *)v27 - 4), v55, v22) )
        break;
    }
    _RAX = (unsigned int)(_R15D - 1);
    LOWORD(_RAX) = _R15D & (_R15D - 1);
    _R15D = _RAX;
    v17 = v51;
    v12 = v52;
    _RCX = v53;
    if ( !(_WORD)_RAX )
      goto LABEL_18;
  }
  if ( v22 )
    sub_140001660(v55, v22, 1);
  v28 = v57;
  v29 = v58;
  v30 = v54;
LABEL_30:
  v36 = -1;
  if ( *((_DWORD *)v27 - 2) != -1 )
    v36 = *((_DWORD *)v27 - 2) + 1;
  v37 = 300000;
  if ( v36 == 2 )
    v37 = 30000;
  v38 = 5000;
  if ( v36 != 1 )
    v38 = v37;
  *((_DWORD *)v27 - 2) = v36;
  result = v30 + v38;
  *((_QWORD *)v27 - 2) = result;
  if ( !v29 )
  {
    v40 = 2 * *off_141EC90B8;
    if ( v40 )
    {
      v46 = result;
      v47 = sub_1416C2250(v40, v37);
      result = v46;
      if ( !v47 )
        *((_BYTE *)v28 + 17) = 1;
    }
  }
  v41 = *((_BYTE *)v28 + 16);
  *((_BYTE *)v28 + 16) = 0;
  if ( v41 == 2 )
  {
    v45 = result;
    WakeByAddressSingle((PVOID)(v28 + 16));
    return v45;
  }
  return result;
}