// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140ebaaa0 | name sub_140EBAAA0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140EBAAA0(__int64 _RCX, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  __int64 v4; // r14
  __int64 v7; // r12
  const __m128i *v8; // r15
  __m128i si128; // xmm0
  __int64 v11; // rcx
  __int64 v12; // r14
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+28h] [rbp-58h] BYREF
  __m128i v18; // [rsp+30h] [rbp-50h]
  __m128i v19; // [rsp+40h] [rbp-40h] BYREF
  __m128i v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  __int128 v23; // [rsp+80h] [rbp+0h]
  __int64 v24; // [rsp+90h] [rbp+10h]
  const __m128i *v25; // [rsp+98h] [rbp+18h]
  __int64 v26; // [rsp+A0h] [rbp+20h]
  __int64 v27; // [rsp+A8h] [rbp+28h]
  __int64 v28; // [rsp+B0h] [rbp+30h]

  v28 = -2;
  v2 = *(_OWORD *)(_RCX + 16);
  v3 = *(_OWORD *)(_RCX + 32);
  v23 = *(_OWORD *)(_RCX + 48);
  v22 = v3;
  v21 = v2;
  v20 = _mm_loadu_si128((const __m128i *)_RCX);
  v4 = *((_QWORD *)&v23 + 1);
  if ( *((_QWORD *)&v23 + 1) )
  {
    _EDX = (unsigned __int16)v23;
    v7 = *((_QWORD *)&v21 + 1);
    v8 = (const __m128i *)v22;
    while ( 1 )
    {
      if ( !(_WORD)_EDX )
      {
        do
        {
          si128 = _mm_load_si128(v8);
          v7 -= 384;
          ++v8;
          _EDX = _mm_movemask_epi8(si128) ^ 0xFFFF;
        }
        while ( !_EDX );
      }
      __asm { tzcnt   ecx, edx }
      _R13D = _EDX & (_EDX - 1);
      v11 = -3 * _RCX;
      v12 = v4 - 1;
      _RAX = *(_QWORD *)(v7 + 8 * v11 - 24);
      v19 = *(__m128i *)(v7 + 8 * v11 - 16);
      if ( _RAX == -1 )
        break;
      v27 = _EDX & (unsigned int)(_EDX - 1);
      v26 = v7;
      v25 = v8;
      v24 = v12;
      v17 = _RAX;
      v18 = _mm_load_si128(&v19);
      sub_1403AAB80(a2, &v17);
      v4 = v24;
      v8 = v25;
      v7 = v26;
      _EDX = v27;
      if ( !v24 )
        goto LABEL_9;
    }
    LOWORD(v23) = _EDX & (_EDX - 1);
    *((_QWORD *)&v21 + 1) = v7;
    *(_QWORD *)&v22 = v8;
    for ( *((_QWORD *)&v23 + 1) = v12; v12; --v12 )
    {
      if ( !(_WORD)_R13D )
      {
        do
        {
          v14 = _mm_load_si128(v8);
          v7 -= 384;
          ++v8;
          _R13D = _mm_movemask_epi8(v14) ^ 0xFFFF;
        }
        while ( !_R13D );
      }
      __asm { tzcnt   eax, r13d }
      v15 = -3 * _RAX;
      v16 = *(_QWORD *)(v7 + 8 * v15 - 24);
      if ( v16 )
        sub_140001660(*(_QWORD *)(v7 + 8 * v15 - 16), v16, 1);
      _RAX = _R13D & (unsigned int)(_R13D - 1);
      _R13D &= _R13D - 1;
    }
  }
LABEL_9:
  if ( v20.m128i_i64[0] )
  {
    if ( v20.m128i_i64[1] )
      sub_140001660(v21, v20.m128i_i64[1], v20.m128i_i64[0]);
  }
}
