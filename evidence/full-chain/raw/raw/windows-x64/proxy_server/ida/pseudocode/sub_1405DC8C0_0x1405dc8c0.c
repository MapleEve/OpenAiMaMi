// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dc8c0
// name: sub_1405DC8C0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DC8C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  const __m128i *v10; // rbx
  const __m128i *v11; // r14
  __m128i si128; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  const __m128i *v23; // rbx
  const __m128i *v24; // r14
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rsi

  result = *(unsigned __int8 *)(a1 + 528);
  switch ( *(_BYTE *)(a1 + 528) )
  {
    case 0:
      return sub_1400104F0(a1);
    case 3:
      sub_1405DDF50(a1 + 560);
      v2 = a1;
      v3 = *(_QWORD *)(a1 + 536);
      if ( !v3 )
        goto LABEL_39;
      v4 = *(_QWORD *)(a1 + 544);
      v5 = 1;
      goto LABEL_38;
    case 4:
      sub_1405DE130(a1 + 536);
      goto LABEL_7;
    case 5:
      sub_1405DE130(a1 + 536);
      *(_BYTE *)(a1 + 532) = 0;
      sub_1405E7A20(a1 + 376);
LABEL_7:
      HIDWORD(_RAX) = HIDWORD(a1);
      if ( *(_BYTE *)(a1 + 344) != 0xFF )
      {
        HIDWORD(_RAX) = HIDWORD(a1);
        if ( *(_BYTE *)(a1 + 531) )
          HIDWORD(_RAX) = (unsigned __int64)sub_1400104F0(a1 + 344) >> 32;
      }
      v2 = a1;
      *(_BYTE *)(a1 + 531) = 0;
      v7 = *(_QWORD *)(a1 + 320);
      if ( v7 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*(_QWORD *)(a1 + 328), v7, 1) >> 32;
      v8 = *(_QWORD *)(a1 + 280);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 296);
        if ( v9 )
        {
          v10 = *(const __m128i **)(a1 + 272);
          v11 = v10 + 1;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128(v10));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                si128 = _mm_load_si128(v11);
                v10 -= 24;
                ++v11;
                _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   eax, r15d }
            v14 = -3 * _RAX;
            v15 = *((_QWORD *)&v10[-1] + v14 - 1);
            if ( v15 )
              sub_140001660(v10[-1].m128i_i64[v14], v15, 1);
            --v9;
            _RAX = _R15D & (unsigned int)(_R15D - 1);
            _R15D &= _R15D - 1;
          }
          while ( v9 );
        }
        v16 = (24 * v8 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v17 = v16 + v8 + 17;
        if ( v17 )
          sub_140001660(*(_QWORD *)(a1 + 272) - v16, v17, 16);
      }
      sub_14067EB80(a1 + 224);
      *(_BYTE *)(a1 + 533) = 0;
      goto LABEL_39;
    case 6:
      sub_1405DE130(a1 + 712);
      v2 = a1;
      v18 = *(_QWORD *)(a1 + 560);
      if ( v18 )
        sub_140001660(*(_QWORD *)(a1 + 568), v18, 1);
      HIDWORD(_RAX) = (unsigned __int64)sub_14067EB80(a1 + 584) >> 32;
      v20 = *(_QWORD *)(a1 + 536);
      if ( v20 != -1 && v20 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*(_QWORD *)(a1 + 544), v20, 1) >> 32;
      v21 = *(_QWORD *)(a1 + 640);
      if ( v21 )
      {
        v22 = *(_QWORD *)(a1 + 656);
        if ( v22 )
        {
          v23 = *(const __m128i **)(a1 + 632);
          v24 = v23 + 1;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128(v23));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                v26 = _mm_load_si128(v24);
                v23 -= 24;
                ++v24;
                _R15D = _mm_movemask_epi8(v26) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   eax, r15d }
            v27 = -3 * _RAX;
            v28 = *((_QWORD *)&v23[-1] + v27 - 1);
            if ( v28 )
              sub_140001660(v23[-1].m128i_i64[v27], v28, 1);
            --v22;
            _RAX = _R15D & (unsigned int)(_R15D - 1);
            _R15D &= _R15D - 1;
          }
          while ( v22 );
        }
        v29 = (24 * v21 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v30 = v29 + v21 + 17;
        if ( v30 )
        {
          v4 = *(_QWORD *)(a1 + 632) - v29;
          v5 = 16;
          v3 = v30;
LABEL_38:
          sub_140001660(v4, v3, v5);
        }
      }
LABEL_39:
      if ( *(_BYTE *)(v2 + 530) )
        sub_1400104F0(a1 + 128);
      *(_BYTE *)(a1 + 530) = 0;
      result = a1;
      break;
    default:
      return result;
  }
  return result;
}