// __ZN13codexmate_lib4core5relay12codex_writer38top_level_relay_model_requires_cleanup @ 0x1007c6d20
__int64 __fastcall codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::hf8fb25c63ce8a656(
        _QWORD *a1,
        size_t a2,
        char a3,
        __int64 *a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v8; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __m128i v12; // xmm1
  __int64 v13; // r13
  __int64 v14; // rdi
  __m128i v15; // xmm2
  unsigned __int64 v16; // rax
  __m128i v17; // xmm3
  int v19; // eax
  bool v20; // zf
  __m128i v21; // [rsp+0h] [rbp-70h] BYREF
  __m128i v22; // [rsp+10h] [rbp-60h] BYREF
  void *__s1; // [rsp+28h] [rbp-48h]
  unsigned __int64 v24; // [rsp+30h] [rbp-40h]
  __int64 v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h]

  if ( a2 == 12 ) /*0x1007c6d38*/
  {
    if ( !(*a1 ^ 0x725F696D616D6961LL | *((unsigned int *)a1 + 2) ^ 0x79616C65LL) ) /*0x1007c6d51*/
    {
      LOBYTE(v4) = 1; /*0x1007c6d56*/
      if ( !a3 ) /*0x1007c6d5b*/
        return v4; /*0x1007c6d5b*/
      goto LABEL_9; /*0x1007c6d5b*/
    }
    return 0; /*0x1007c6d61*/
  }
  if ( a2 <= 0xC ) /*0x1007c6d5f*/
    return 0; /*0x1007c6d5f*/
  LOBYTE(v4) = (*a1 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)a1 + 5) ^ 0x5F79616C65725F69LL) == 0; /*0x1007c6d94*/
  if ( !a3 ) /*0x1007c6d9a*/
    return v4; /*0x1007c6d9a*/
LABEL_9:
  if ( (_BYTE)v4 ) /*0x1007c6d9f*/
  {
    LOBYTE(v4) = 1; /*0x1007c6da1*/
    if ( a4[3] ) /*0x1007c6da4*/
    {
      __s1 = a1; /*0x1007c6db5*/
      v8 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a4 + 4, a1, a2); /*0x1007c6dbf*/
      _RCX = v8 >> 57; /*0x1007c6dc7*/
      v10 = *a4; /*0x1007c6dcb*/
      v11 = a4[1]; /*0x1007c6dce*/
      v12 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v8 >> 57), (__m128i)0LL); /*0x1007c6dda*/
      v13 = *a4 - 24; /*0x1007c6ddf*/
      v14 = 0; /*0x1007c6de4*/
      v15 = (__m128i)-1LL; /*0x1007c6de6*/
      while ( 1 ) /*0x1007c6dea*/
      {
        v16 = v11 & v8; /*0x1007c6dea*/
        v17 = _mm_loadu_si128((const __m128i *)(v10 + v16)); /*0x1007c6ded*/
        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v12)); /*0x1007c6dfb*/
        if ( _R15D ) /*0x1007c6e03*/
          break; /*0x1007c6e03*/
LABEL_17:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, v15)); /*0x1007c6e78*/
        if ( (_DWORD)_RCX ) /*0x1007c6e82*/
          return v4; /*0x1007c6e82*/
        v8 = v16 + v14 + 16; /*0x1007c6e88*/
        v14 += 16; /*0x1007c6e8d*/
      }
      v24 = v16; /*0x1007c6e05*/
      v21 = v12; /*0x1007c6e09*/
      v25 = v11; /*0x1007c6e0e*/
      v26 = v14; /*0x1007c6e12*/
      v22 = v17; /*0x1007c6e16*/
      while ( 1 ) /*0x1007c6e1b*/
      {
        __asm { tzcnt ecx, r15d } /*0x1007c6e1b*/
        _RCX = -(__int64)(v11 & (v16 + _RCX)); /*0x1007c6e26*/
        if ( a2 == *(_QWORD *)(v13 + 24 * _RCX + 16) && !memcmp(__s1, *(const void **)(v13 + 24 * _RCX + 8), a2) ) /*0x1007c6e44*/
          return 0; /*0x1007c6e4b*/
        v19 = _R15D - 1; /*0x1007c6e51*/
        LOWORD(v19) = _R15D & (_R15D - 1); /*0x1007c6e55*/
        v20 = (_WORD)v19 == 0; /*0x1007c6e55*/
        _R15D = v19; /*0x1007c6e59*/
        v16 = v24; /*0x1007c6e5c*/
        v12 = _mm_load_si128(&v21); /*0x1007c6e60*/
        v11 = v25; /*0x1007c6e65*/
        v14 = v26; /*0x1007c6e69*/
        v15 = (__m128i)-1LL; /*0x1007c6e6d*/
        v17 = _mm_load_si128(&v22); /*0x1007c6e71*/
        if ( v20 ) /*0x1007c6e76*/
          goto LABEL_17; /*0x1007c6e76*/
      }
    }
  }
  return v4; /*0x1007c6d67*/
}