// __ZN13codexmate_lib4core5relay16codex_diagnostic19is_known_or_builtin @ 0x1004e8860 | 基线 same-set
char __fastcall codexmate_lib::core::relay::codex_diagnostic::is_known_or_builtin::hedd6b5aaa2876407(
        char *__s1,
        size_t __n,
        __int64 *a3)
{
  char result; // al
  unsigned __int64 v7; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  __m128i v11; // xmm1
  __int64 v12; // r12
  __int64 v13; // rdi
  __m128i v14; // xmm2
  unsigned __int64 v15; // rax
  __m128i v16; // xmm3
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm0
  bool v23; // al
  __m128i v24; // [rsp+0h] [rbp-60h] BYREF
  __m128i v25; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+28h] [rbp-38h]
  __int64 v28; // [rsp+30h] [rbp-30h]

  if ( __n == 22 ) /*0x1004e887b*/
  {
    v22 = _mm_or_si128( /*0x1004e8a80*/
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)__s1), (__m128i)xmmword_1015FBAE0),
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)(__s1 + 6)), (__m128i)xmmword_1015FBAD0));
    if ( !_mm_testz_si128(v22, v22) ) /*0x1004e8a89*/
      goto LABEL_13; /*0x1004e8a89*/
    return 1; /*0x1004e8a91*/
  }
  if ( __n == 14 ) /*0x1004e8885*/
  {
    if ( *(_QWORD *)__s1 ^ 0x622D69616E65706FLL | *(_QWORD *)(__s1 + 6) ^ 0x64656C646E75622DLL ) /*0x1004e8959*/
      goto LABEL_13; /*0x1004e895c*/
    return 1; /*0x1004e895c*/
  }
  if ( __n != 6 ) /*0x1004e888f*/
    goto LABEL_13; /*0x1004e888f*/
  if ( ((unsigned __int8)*__s1 | (unsigned __int8)(32 * ((unsigned __int8)(*__s1 - 65) < 0x1Au))) != 111 /*0x1004e891e*/
    || ((unsigned __int8)__s1[1] | (unsigned __int8)(32 * ((unsigned __int8)(__s1[1] - 65) < 0x1Au))) != 112
    || ((unsigned __int8)__s1[2] | (unsigned __int8)(32 * ((unsigned __int8)(__s1[2] - 65) < 0x1Au))) != 101
    || ((unsigned __int8)__s1[3] | (unsigned __int8)(32 * ((unsigned __int8)(__s1[3] - 65) < 0x1Au))) != 110
    || ((unsigned __int8)__s1[4] | (unsigned __int8)(32 * ((unsigned __int8)(__s1[4] - 65) < 0x1Au))) != 97
    || (result = 1, ((unsigned __int8)__s1[5] | (unsigned __int8)(32 * ((unsigned __int8)(__s1[5] - 65) < 0x1Au))) != 105) )
  {
    if ( !(*(_DWORD *)__s1 ^ 0x616D6961 | *((unsigned __int16 *)__s1 + 2) ^ 0x3169) ) /*0x1004e8935*/
      return 1; /*0x1004e8937*/
LABEL_13:
    if ( !a3[3] ) /*0x1004e8967*/
      return 0; /*0x1004e8a4a*/
    v7 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a3 + 4, __s1, __n); /*0x1004e897a*/
    _RCX = v7 >> 57; /*0x1004e8982*/
    v9 = *a3; /*0x1004e8986*/
    v10 = a3[1]; /*0x1004e898a*/
    v11 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v7 >> 57), (__m128i)0LL); /*0x1004e8997*/
    v12 = *a3 - 24; /*0x1004e899c*/
    v13 = 0; /*0x1004e89a0*/
    v14 = (__m128i)-1LL; /*0x1004e89a2*/
    while ( 1 ) /*0x1004e89a6*/
    {
      v15 = v10 & v7; /*0x1004e89a6*/
      v16 = _mm_loadu_si128((const __m128i *)(v9 + v15)); /*0x1004e89a9*/
      _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v16, v11)); /*0x1004e89b7*/
      if ( _R13D ) /*0x1004e89bf*/
        break; /*0x1004e89bf*/
LABEL_20:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v16, v14)); /*0x1004e8a2e*/
      if ( (_DWORD)_RCX ) /*0x1004e8a38*/
        return 0; /*0x1004e8a38*/
      v7 = v15 + v13 + 16; /*0x1004e8a3a*/
      v13 += 16; /*0x1004e8a3f*/
    }
    v26 = v15; /*0x1004e89c1*/
    v24 = v11; /*0x1004e89c5*/
    v27 = v10; /*0x1004e89ca*/
    v28 = v13; /*0x1004e89ce*/
    v25 = v16; /*0x1004e89d2*/
    while ( 1 ) /*0x1004e89d7*/
    {
      __asm { tzcnt ecx, r13d } /*0x1004e89d7*/
      _RCX = -(__int64)(v10 & (v15 + _RCX)); /*0x1004e89e2*/
      if ( __n == *(_QWORD *)(v12 + 24 * _RCX + 16) && !memcmp(__s1, *(const void **)(v12 + 24 * _RCX + 8), __n) ) /*0x1004e89fe*/
        break; /*0x1004e89fe*/
      v18 = _R13D - 1; /*0x1004e8a07*/
      LOWORD(v18) = _R13D & (_R13D - 1); /*0x1004e8a0b*/
      v19 = (_WORD)v18 == 0; /*0x1004e8a0b*/
      _R13D = v18; /*0x1004e8a0f*/
      v15 = v26; /*0x1004e8a12*/
      v11 = _mm_load_si128(&v24); /*0x1004e8a16*/
      v10 = v27; /*0x1004e8a1b*/
      v13 = v28; /*0x1004e8a1f*/
      v14 = (__m128i)-1LL; /*0x1004e8a23*/
      v16 = _mm_load_si128(&v25); /*0x1004e8a27*/
      if ( v19 ) /*0x1004e8a2c*/
        goto LABEL_20; /*0x1004e8a2c*/
    }
    if ( __n == 12 ) /*0x1004e8a50*/
    {
      v20 = anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)__s1; /*0x1004e8a55*/
      v21 = *((_DWORD *)__s1 + 2) ^ 0x79616C65u; /*0x1004e8a5f*/
    }
    else
    {
      if ( __n <= 0xC ) /*0x1004e8a93*/
      {
        v23 = 0; /*0x1004e8a95*/
        return !v23; /*0x1004e8ab4*/
      }
      v20 = *(_QWORD *)__s1 ^ anon_3ce6d1417794db0febde534c64082f90_194; /*0x1004e8aa0*/
      v21 = *(_QWORD *)(__s1 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5); /*0x1004e8aaa*/
    }
    v23 = (v20 | v21) == 0; /*0x1004e8ab1*/
    return !v23; /*0x1004e8ab1*/
  }
  return result; /*0x1004e8ab6*/
}