// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x100900d70 d=1
char __fastcall hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4ef619e171bdd9bb(
        __int64 a1,
        void *a2,
        size_t a3)
{
  unsigned __int64 v5; // rax
  const __m128i *v6; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __m128i v9; // xmm1
  __m128i v11; // xmm2
  __int64 v12; // rdi
  size_t v13; // rdx
  unsigned __int64 v14; // rax
  __m128i v15; // xmm3
  const __m128i *v17; // rax
  int v18; // eax
  int v19; // ecx
  char result; // al
  int v21; // eax
  bool v22; // zf
  char v24; // al
  __int64 v25; // rbx
  __m128i v27; // [rsp+0h] [rbp-90h] BYREF
  __m128i v28; // [rsp+10h] [rbp-80h] BYREF
  _QWORD v29[2]; // [rsp+28h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-58h]
  __int64 v31; // [rsp+40h] [rbp-50h]
  __int64 v32; // [rsp+48h] [rbp-48h]
  __int64 v33; // [rsp+50h] [rbp-40h]
  void *__s1; // [rsp+58h] [rbp-38h]
  size_t __n; // [rsp+60h] [rbp-30h]

  __s1 = a2; /*0x100900d84*/
  v29[0] = a2; /*0x100900d88*/
  __n = a3; /*0x100900d8c*/
  v29[1] = a3; /*0x100900d90*/
  v5 = core::hash::BuildHasher::hash_one::h1f375af5b84b211f(a1 + 32, v29); /*0x100900d9f*/
  if ( !*(_QWORD *)(a1 + 16) ) /*0x100900da4*/
  {
    _RBX = v5; /*0x100900f33*/
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(a1, 1, a1 + 32, 1); /*0x100900f36*/
    v5 = _RBX; /*0x100900f3b*/
  }
  v6 = *(const __m128i **)a1; /*0x100900daf*/
  v7 = *(_QWORD *)(a1 + 8); /*0x100900db2*/
  v8 = v5 >> 57; /*0x100900db9*/
  v9 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v5 >> 57), (__m128i)0LL); /*0x100900dc6*/
  _RCX = 0; /*0x100900dcb*/
  v11 = (__m128i)-1LL; /*0x100900dcd*/
  v12 = 0; /*0x100900dd1*/
  v13 = __n; /*0x100900dd3*/
  while ( 1 ) /*0x100900dd7*/
  {
    v14 = v7 & v5; /*0x100900dd7*/
    v15 = _mm_loadu_si128((const __m128i *)((char *)v6 + v14)); /*0x100900dda*/
    _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v9)); /*0x100900de8*/
    if ( _R14D ) /*0x100900df0*/
      break; /*0x100900df0*/
LABEL_9:
    if ( _RCX != 1 ) /*0x100900e84*/
    {
      if ( !_mm_movemask_epi8(v15) ) /*0x100900e86*/
      {
        _RCX = 0; /*0x100900eab*/
        goto LABEL_15; /*0x100900eab*/
      }
      __asm { tzcnt ebx, ecx } /*0x100900e8e*/
      _RBX = v7 & (v14 + _RBX); /*0x100900e95*/
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v11)) ) /*0x100900e9c*/
    {
      v24 = v6->i8[_RBX]; /*0x100900ebb*/
      if ( v24 >= 0 ) /*0x100900ec2*/
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v6)); /*0x100900f49*/
        __asm { tzcnt ebx, eax } /*0x100900f4d*/
        v24 = v6->i8[_RBX]; /*0x100900f51*/
      }
      v6->i8[_RBX] = v8; /*0x100900ed0*/
      v6[1].i8[v7 & (_RBX - 16)] = v8; /*0x100900ed4*/
      *(__m128i *)(a1 + 16) = _mm_sub_epi64( /*0x100900ef2*/
                                _mm_loadu_si128((const __m128i *)(a1 + 16)),
                                _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_101591350), v24 & 1, 0));
      v25 = 16 * _RBX; /*0x100900ef8*/
      v6[v25 / 0xFFFFFFFFFFFFFFF0LL - 1].i64[0] = (__int64)__s1; /*0x100900f09*/
      v6[v25 / 0xFFFFFFFFFFFFFFF0LL - 1].i64[1] = v13; /*0x100900f0e*/
      return 0; /*0x100900f12*/
    }
    _RCX = 1; /*0x100900ea4*/
LABEL_15:
    v5 = v12 + v14 + 16; /*0x100900ead*/
    v12 += 16; /*0x100900eb2*/
  }
  v30 = v14; /*0x100900df6*/
  v31 = v7; /*0x100900dfa*/
  v27 = v9; /*0x100900dfe*/
  v32 = v12; /*0x100900e06*/
  v33 = _RCX; /*0x100900e0a*/
  v28 = v15; /*0x100900e0e*/
  while ( 1 ) /*0x100900e13*/
  {
    __asm { tzcnt ecx, r14d } /*0x100900e13*/
    v17 = &v6[-(v7 & (v14 + _RCX))]; /*0x100900e25*/
    if ( v13 == v17[-1].i64[1] ) /*0x100900e2c*/
    {
      v18 = memcmp(__s1, (const void *)v17[-1].i64[0], __n); /*0x100900e3a*/
      v13 = __n; /*0x100900e3f*/
      v19 = v18; /*0x100900e43*/
      result = 1; /*0x100900e45*/
      if ( !v19 ) /*0x100900e49*/
        return result; /*0x100900f14*/
    }
    v21 = _R14D - 1; /*0x100900e4f*/
    LOWORD(v21) = _R14D & (_R14D - 1); /*0x100900e53*/
    v22 = (_WORD)v21 == 0; /*0x100900e53*/
    _R14D = v21; /*0x100900e57*/
    v14 = v30; /*0x100900e5a*/
    v7 = v31; /*0x100900e5e*/
    v9 = _mm_load_si128(&v27); /*0x100900e62*/
    v11 = (__m128i)-1LL; /*0x100900e6a*/
    v12 = v32; /*0x100900e6e*/
    _RCX = v33; /*0x100900e72*/
    v15 = _mm_load_si128(&v28); /*0x100900e76*/
    if ( v22 ) /*0x100900e7b*/
      goto LABEL_9; /*0x100900e7b*/
  }
}