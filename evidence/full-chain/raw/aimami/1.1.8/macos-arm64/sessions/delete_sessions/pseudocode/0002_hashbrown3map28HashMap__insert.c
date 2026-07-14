// mac 1.1.8 delete_sessions node va=0x10071db20 depth=1
// hashbrown3map28HashMap::insert
char __fastcall hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h919a34fee2aa172f(
        const __m128i *a1,
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

  __s1 = a2; /*0x10071db34*/
  v29[0] = a2; /*0x10071db38*/
  __n = a3; /*0x10071db3c*/
  v29[1] = a3; /*0x10071db40*/
  v5 = core::hash::BuildHasher::hash_one::ha7bb103da4581b64(&a1[2], v29); /*0x10071db4f*/
  if ( !a1[1].i64[0] ) /*0x10071db54*/
  {
    _RBX = v5; /*0x10071dce3*/
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a((__int64)a1, 1, (__int64)a1[2].i64, 1u); /*0x10071dce6*/
    v5 = _RBX; /*0x10071dceb*/
  }
  v6 = (const __m128i *)a1->i64[0]; /*0x10071db5f*/
  v7 = a1->i64[1]; /*0x10071db62*/
  v8 = v5 >> 57; /*0x10071db69*/
  v9 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v5 >> 57), (__m128i)0LL); /*0x10071db76*/
  _RCX = 0; /*0x10071db7b*/
  v11 = (__m128i)-1LL; /*0x10071db7d*/
  v12 = 0; /*0x10071db81*/
  v13 = __n; /*0x10071db83*/
  while ( 1 ) /*0x10071db87*/
  {
    v14 = v7 & v5; /*0x10071db87*/
    v15 = _mm_loadu_si128((const __m128i *)((char *)v6 + v14)); /*0x10071db8a*/
    _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v9)); /*0x10071db98*/
    if ( _R14D ) /*0x10071dba0*/
      break; /*0x10071dba0*/
LABEL_9:
    if ( _RCX != 1 ) /*0x10071dc34*/
    {
      if ( !_mm_movemask_epi8(v15) ) /*0x10071dc36*/
      {
        _RCX = 0; /*0x10071dc5b*/
        goto LABEL_15; /*0x10071dc5b*/
      }
      __asm { tzcnt ebx, ecx } /*0x10071dc3e*/
      _RBX = v7 & (v14 + _RBX); /*0x10071dc45*/
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v11)) ) /*0x10071dc4c*/
    {
      v24 = v6->i8[_RBX]; /*0x10071dc6b*/
      if ( v24 >= 0 ) /*0x10071dc72*/
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v6)); /*0x10071dcf9*/
        __asm { tzcnt ebx, eax } /*0x10071dcfd*/
        v24 = v6->i8[_RBX]; /*0x10071dd01*/
      }
      v6->i8[_RBX] = v8; /*0x10071dc80*/
      v6[1].i8[v7 & (_RBX - 16)] = v8; /*0x10071dc84*/
      a1[1] = _mm_sub_epi64( /*0x10071dca2*/
                _mm_loadu_si128(a1 + 1),
                _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_10125B150), v24 & 1, 0));
      v25 = 16 * _RBX; /*0x10071dca8*/
      v6[v25 / 0xFFFFFFFFFFFFFFF0LL - 1].i64[0] = (__int64)__s1; /*0x10071dcb9*/
      v6[v25 / 0xFFFFFFFFFFFFFFF0LL - 1].i64[1] = v13; /*0x10071dcbe*/
      return 0; /*0x10071dcc2*/
    }
    _RCX = 1; /*0x10071dc54*/
LABEL_15:
    v5 = v12 + v14 + 16; /*0x10071dc5d*/
    v12 += 16; /*0x10071dc62*/
  }
  v30 = v14; /*0x10071dba6*/
  v31 = v7; /*0x10071dbaa*/
  v27 = v9; /*0x10071dbae*/
  v32 = v12; /*0x10071dbb6*/
  v33 = _RCX; /*0x10071dbba*/
  v28 = v15; /*0x10071dbbe*/
  while ( 1 ) /*0x10071dbc3*/
  {
    __asm { tzcnt ecx, r14d } /*0x10071dbc3*/
    v17 = &v6[-(v7 & (v14 + _RCX))]; /*0x10071dbd5*/
    if ( v13 == v17[-1].i64[1] ) /*0x10071dbdc*/
    {
      v18 = memcmp(__s1, (const void *)v17[-1].i64[0], __n); /*0x10071dbea*/
      v13 = __n; /*0x10071dbef*/
      v19 = v18; /*0x10071dbf3*/
      result = 1; /*0x10071dbf5*/
      if ( !v19 ) /*0x10071dbf9*/
        return result; /*0x10071dcc4*/
    }
    v21 = _R14D - 1; /*0x10071dbff*/
    LOWORD(v21) = _R14D & (_R14D - 1); /*0x10071dc03*/
    v22 = (_WORD)v21 == 0; /*0x10071dc03*/
    _R14D = v21; /*0x10071dc07*/
    v14 = v30; /*0x10071dc0a*/
    v7 = v31; /*0x10071dc0e*/
    v9 = _mm_load_si128(&v27); /*0x10071dc12*/
    v11 = (__m128i)-1LL; /*0x10071dc1a*/
    v12 = v32; /*0x10071dc1e*/
    _RCX = v33; /*0x10071dc22*/
    v15 = _mm_load_si128(&v28); /*0x10071dc26*/
    if ( v22 ) /*0x10071dc2b*/
      goto LABEL_9; /*0x10071dc2b*/
  }
}