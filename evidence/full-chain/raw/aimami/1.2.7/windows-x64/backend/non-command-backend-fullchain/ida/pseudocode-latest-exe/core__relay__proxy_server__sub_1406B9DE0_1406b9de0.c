// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406b9de0 | successor of pre-update 0x140d13150 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.606, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_1406B9DE0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  const __m128i *v4; // rbx
  const __m128i *v5; // r14
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-10h]

  switch ( *(_BYTE *)(a1 + 192) )
  {
    case 0:
      sub_1406C0ED0(a1);
      return;
    case 3:
      v15 = a1;
      sub_1406BB240(a1 + 200);
      goto LABEL_12;
    case 4:
      HIDWORD(_RAX) = (unsigned __int64)sub_1406BC250(a1 + 200) >> 32;
      v2 = *(_QWORD *)(a1 + 1128);
      if ( v2 )
      {
        v3 = *(_QWORD *)(a1 + 1144);
        if ( v3 )
        {
          v4 = *(const __m128i **)(a1 + 1120);
          v5 = v4 + 1;
          _R15D = ~_mm_movemask_epi8(_mm_load_si128(v4));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                si128 = _mm_load_si128(v5);
                v4 -= 24;
                ++v5;
                _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   eax, r15d }
            v8 = -3 * _RAX;
            v9 = *((_QWORD *)&v4[-1] + v8 - 1);
            if ( v9 )
              sub_140001660(v4[-1].m128i_i64[v8], v9, 1);
            --v3;
            _RAX = _R15D & (unsigned int)(_R15D - 1);
            _R15D &= _R15D - 1;
          }
          while ( v3 );
        }
        v12 = (24 * v2 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v13 = v12 + v2 + 17;
        if ( v13 )
          sub_140001660(*(_QWORD *)(a1 + 1120) - v12, v13, 16);
      }
      sub_14018EA10(a1 + 1072);
      *(_BYTE *)(a1 + 193) = 0;
      v10 = a1;
      v11 = *(_QWORD *)(a1 + 168);
      if ( !v11 )
        goto LABEL_14;
      goto LABEL_13;
    case 5:
      v15 = a1;
      sub_1406BCA10(a1 + 200);
LABEL_12:
      v10 = v15;
      v11 = *(_QWORD *)(v15 + 168);
      if ( v11 )
LABEL_13:
        sub_140001660(*(_QWORD *)(v10 + 176), v11, 1);
LABEL_14:
      *(_BYTE *)(v10 + 194) = 0;
      break;
    default:
      return;
  }
}
