// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d13150 | name sub_140D13150
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D13150(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  const __m128i *v5; // rbx
  const __m128i *v6; // r14
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  const __m128i *v24; // rbx
  const __m128i *v25; // r14
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  _QWORD v33[9]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+78h] [rbp-8h]

  v35 = -2;
  result = *(unsigned __int8 *)(a1 + 160);
  switch ( *(_BYTE *)(a1 + 160) )
  {
    case 0:
      return sub_140409B40(a1);
    case 3:
      v34 = a1;
      result = sub_140D14C40(a1 + 168);
      goto LABEL_12;
    case 4:
      v34 = a1;
      HIDWORD(_RAX) = (unsigned __int64)sub_140D14E70(a1 + 168) >> 32;
      v3 = *(_QWORD *)(v34 + 1528);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v34 + 1544);
        if ( v4 )
        {
          v5 = *(const __m128i **)(v34 + 1520);
          v6 = v5 + 1;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128(v5));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                si128 = _mm_load_si128(v6);
                v5 -= 24;
                ++v6;
                _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   eax, r15d }
            v9 = -3 * _RAX;
            v10 = *((_QWORD *)&v5[-1] + v9 - 1);
            if ( v10 )
              sub_140001660(v5[-1].m128i_i64[v9], v10, 1);
            --v4;
            _RAX = _R15D & (unsigned int)(_R15D - 1);
            _R15D &= _R15D - 1;
          }
          while ( v4 );
        }
        v17 = (24 * v3 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v18 = v17 + v3 + 17;
        if ( v18 )
          sub_140001660(*(_QWORD *)(v34 + 1520) - v17, v18, 16);
      }
      sub_14036FB80(v34 + 1472);
      result = v34;
      *(_BYTE *)(v34 + 162) = 0;
      v11 = v34;
      v12 = *(_QWORD *)(v34 + 136);
      if ( !v12 )
        goto LABEL_14;
      goto LABEL_13;
    case 5:
      v34 = a1;
      sub_140D14E70(a1 + 192);
      v13 = *(_QWORD *)(v34 + 1656);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v34 + 1664);
        v15 = *(_QWORD *)(v34 + 1672);
        v33[1] = 0;
        v33[2] = v13;
        v33[3] = v14;
        v33[5] = 0;
        v33[6] = v13;
        v33[7] = v14;
        v16 = 1;
      }
      else
      {
        v16 = 0;
        v15 = 0;
      }
      v33[0] = v16;
      v33[4] = v16;
      v33[8] = v15;
      HIDWORD(_RAX) = (unsigned __int64)sub_140E90CA0(v33) >> 32;
      v20 = (_QWORD *)v34;
      v21 = *(_QWORD *)(v34 + 1624);
      if ( v21 != -1 && v21 )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(*(_QWORD *)(v34 + 1632), v21, 1) >> 32;
      v22 = v20[188];
      if ( v22 )
      {
        v23 = v20[190];
        if ( v23 )
        {
          v24 = (const __m128i *)v20[187];
          v25 = v24 + 1;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128(v24));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                v27 = _mm_load_si128(v25);
                v24 -= 24;
                ++v25;
                _R15D = _mm_movemask_epi8(v27) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   eax, r15d }
            v28 = -3 * _RAX;
            v29 = *((_QWORD *)&v24[-1] + v28 - 1);
            if ( v29 )
              sub_140001660(v24[-1].m128i_i64[v28], v29, 1);
            --v23;
            _RAX = _R15D & (unsigned int)(_R15D - 1);
            _R15D &= _R15D - 1;
          }
          while ( v23 );
        }
        v30 = (24 * v22 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v31 = v30 + v22 + 17;
        if ( v31 )
          sub_140001660(v20[187] - v30, v31, 16);
      }
      v32 = v20[21];
      if ( v32 != -1 && v32 )
        sub_140001660(v20[22], v32, 1);
      result = sub_14036FB80(v20 + 193);
LABEL_12:
      v11 = v34;
      v12 = *(_QWORD *)(v34 + 136);
      if ( v12 )
LABEL_13:
        result = sub_140001660(*(_QWORD *)(v11 + 144), v12, 1);
LABEL_14:
      *(_BYTE *)(v11 + 161) = 0;
      break;
    default:
      return result;
  }
  return result;
}
