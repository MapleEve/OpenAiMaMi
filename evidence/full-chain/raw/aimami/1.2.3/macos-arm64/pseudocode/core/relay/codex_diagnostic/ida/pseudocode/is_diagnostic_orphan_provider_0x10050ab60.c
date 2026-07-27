// __ZN13codexmate_lib4core5relay16codex_diagnostic29is_diagnostic_orphan_provider @ 0x10050ab60
bool __fastcall codexmate_lib::core::relay::codex_diagnostic::is_diagnostic_orphan_provider::h9a1cfad6f07384ea(
        _BYTE *a1,
        size_t a2,
        __int64 *a3)
{
  _BYTE *v4; // rsi
  unsigned __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  __m128i v10; // xmm1
  __int64 v11; // r13
  __int64 v12; // rdx
  __m128i v13; // xmm2
  unsigned __int64 v14; // rax
  __m128i v15; // xmm3
  int v17; // eax
  bool v18; // zf
  bool result; // al
  __m128i v20; // [rsp+0h] [rbp-60h] BYREF
  __m128i v21; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]
  __int64 v23; // [rsp+28h] [rbp-38h]
  void *__s1; // [rsp+30h] [rbp-30h]

  v4 = a1; /*0x10050ab74*/
  if ( a3[3] ) /*0x10050ab77*/
  {
    __s1 = a1; /*0x10050ab86*/
    v6 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a3 + 4, a1, a2); /*0x10050ab90*/
    _RCX = v6 >> 57; /*0x10050ab98*/
    v8 = *a3; /*0x10050ab9c*/
    v9 = a3[1]; /*0x10050ab9f*/
    v10 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v6 >> 57), (__m128i)0LL); /*0x10050abab*/
    v11 = *a3 - 24; /*0x10050abb0*/
    v12 = 0; /*0x10050abb4*/
    v13 = (__m128i)-1LL; /*0x10050abb6*/
    while ( 1 ) /*0x10050abba*/
    {
      v14 = v9 & v6; /*0x10050abba*/
      v15 = _mm_loadu_si128((const __m128i *)(v8 + v14)); /*0x10050abbd*/
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v10)); /*0x10050abcb*/
      if ( _EBX ) /*0x10050abd1*/
        break; /*0x10050abd1*/
LABEL_8:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, v13)); /*0x10050ac40*/
      v4 = __s1; /*0x10050ac4a*/
      if ( (_DWORD)_RCX ) /*0x10050ac4e*/
        goto LABEL_10; /*0x10050ac4e*/
      v6 = v14 + v12 + 16; /*0x10050ac50*/
      v12 += 16; /*0x10050ac55*/
    }
    v22 = v14; /*0x10050abd3*/
    v20 = v10; /*0x10050abd7*/
    v23 = v12; /*0x10050abdc*/
    v21 = v15; /*0x10050abe0*/
    while ( 1 ) /*0x10050abe5*/
    {
      __asm { tzcnt ecx, ebx } /*0x10050abe5*/
      _RCX = -(__int64)(v9 & (v14 + _RCX)); /*0x10050abef*/
      if ( a2 == *(_QWORD *)(v11 + 24 * _RCX + 16) && !memcmp(__s1, *(const void **)(v11 + 24 * _RCX + 8), a2) ) /*0x10050ac0d*/
        return 0; /*0x10050acf6*/
      v17 = _EBX - 1; /*0x10050ac1a*/
      LOWORD(v17) = _EBX & (_EBX - 1); /*0x10050ac1d*/
      v18 = (_WORD)v17 == 0; /*0x10050ac1d*/
      _EBX = v17; /*0x10050ac20*/
      v14 = v22; /*0x10050ac22*/
      v10 = _mm_load_si128(&v20); /*0x10050ac26*/
      v12 = v23; /*0x10050ac2b*/
      v13 = (__m128i)-1LL; /*0x10050ac2f*/
      v15 = _mm_load_si128(&v21); /*0x10050ac33*/
      if ( v18 ) /*0x10050ac38*/
        goto LABEL_8; /*0x10050ac38*/
    }
  }
  else
  {
LABEL_10:
    result = 1; /*0x10050ac5e*/
    if ( a2 == 6 /*0x10050acda*/
      && (*v4 | (unsigned __int8)(32 * ((unsigned __int8)(*v4 - 65) < 0x1Au))) == 111
      && (v4[1] | (unsigned __int8)(32 * ((unsigned __int8)(v4[1] - 65) < 0x1Au))) == 112
      && (v4[2] | (unsigned __int8)(32 * ((unsigned __int8)(v4[2] - 65) < 0x1Au))) == 101
      && (v4[3] | (unsigned __int8)(32 * ((unsigned __int8)(v4[3] - 65) < 0x1Au))) == 110
      && (v4[4] | (unsigned __int8)(32 * ((unsigned __int8)(v4[4] - 65) < 0x1Au))) == 97 )
    {
      return (v4[5] | (unsigned __int8)(32 * ((unsigned __int8)(v4[5] - 65) < 0x1Au))) != 105; /*0x10050acf1*/
    }
  }
  return result; /*0x10050acf8*/
}