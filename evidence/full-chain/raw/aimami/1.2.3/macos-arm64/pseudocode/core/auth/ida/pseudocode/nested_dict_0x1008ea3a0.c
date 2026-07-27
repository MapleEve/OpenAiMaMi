// __ZN13codexmate_lib4core4auth11nested_dict @ 0x1008ea3a0 | 基线 same-set
void __fastcall codexmate_lib::core::auth::nested_dict::hee321afd40c91aed(_QWORD *a1, __int64 *a2, void *a3, size_t a4)
{
  void *v6; // r15
  unsigned __int64 v7; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __m128i v11; // xmm1
  __int64 v12; // rsi
  __int64 v13; // rdi
  __m128i v14; // xmm2
  unsigned __int64 v15; // rax
  __m128i v16; // xmm3
  __int64 v18; // r13
  int v19; // eax
  bool v20; // zf
  __int64 v21; // r12
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rcx
  _QWORD v25[7]; // [rsp+8h] [rbp-B8h] BYREF
  __m128i v26; // [rsp+40h] [rbp-80h]
  __m128i v27; // [rsp+50h] [rbp-70h] BYREF
  __m128i v28; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-50h]
  __int64 v30; // [rsp+78h] [rbp-48h]
  __int64 v31; // [rsp+80h] [rbp-40h]
  void *__s1; // [rsp+88h] [rbp-38h]
  _QWORD *v33; // [rsp+90h] [rbp-30h]

  if ( a2[3] ) /*0x1008ea3b7*/
  {
    v6 = a3; /*0x1008ea3c5*/
    v7 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(a2 + 4, a3, a4); /*0x1008ea3d5*/
    _RCX = v7 >> 57; /*0x1008ea3dd*/
    v9 = *a2; /*0x1008ea3e1*/
    v10 = a2[1]; /*0x1008ea3e4*/
    v11 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v7 >> 57), (__m128i)0LL); /*0x1008ea3f0*/
    v12 = *a2 - 56; /*0x1008ea3f5*/
    v13 = 0; /*0x1008ea3fa*/
    v14 = (__m128i)-1LL; /*0x1008ea3fc*/
    while ( 1 ) /*0x1008ea400*/
    {
      v15 = v10 & v7; /*0x1008ea400*/
      v16 = _mm_loadu_si128((const __m128i *)(v9 + v15)); /*0x1008ea403*/
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v16, v11)); /*0x1008ea411*/
      if ( _EBX ) /*0x1008ea417*/
        break; /*0x1008ea417*/
LABEL_8:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v16, v14)); /*0x1008ea4a0*/
      if ( (_DWORD)_RCX ) /*0x1008ea4aa*/
        goto LABEL_10; /*0x1008ea4aa*/
      v7 = v15 + v13 + 16; /*0x1008ea4ac*/
      v13 += 16; /*0x1008ea4b1*/
    }
    v29 = v15; /*0x1008ea41d*/
    v33 = a1; /*0x1008ea421*/
    v30 = v10; /*0x1008ea425*/
    v27 = v11; /*0x1008ea429*/
    __s1 = v6; /*0x1008ea42e*/
    v31 = v13; /*0x1008ea432*/
    v28 = v16; /*0x1008ea436*/
    while ( 1 ) /*0x1008ea43b*/
    {
      __asm { tzcnt ecx, ebx } /*0x1008ea43b*/
      _RCX = -(__int64)(v10 & (v15 + _RCX)); /*0x1008ea445*/
      v18 = 56 * _RCX; /*0x1008ea448*/
      if ( a4 == *(_QWORD *)(v12 + 56 * _RCX + 16) && !memcmp(__s1, *(const void **)(v12 + v18 + 8), a4) ) /*0x1008ea465*/
        break; /*0x1008ea465*/
      v19 = _EBX - 1; /*0x1008ea471*/
      LOWORD(v19) = _EBX & (_EBX - 1); /*0x1008ea474*/
      v20 = (_WORD)v19 == 0; /*0x1008ea474*/
      _EBX = v19; /*0x1008ea477*/
      v15 = v29; /*0x1008ea479*/
      a1 = v33; /*0x1008ea47d*/
      v10 = v30; /*0x1008ea481*/
      v11 = _mm_load_si128(&v27); /*0x1008ea485*/
      v6 = __s1; /*0x1008ea48a*/
      v13 = v31; /*0x1008ea48e*/
      v14 = (__m128i)-1LL; /*0x1008ea492*/
      v16 = _mm_load_si128(&v28); /*0x1008ea496*/
      if ( v20 ) /*0x1008ea49b*/
        goto LABEL_8; /*0x1008ea49b*/
    }
    if ( *(_BYTE *)(v9 + v18 - 32) == 5 ) /*0x1008ea4cd*/
    {
      v21 = v18 + v9; /*0x1008ea4cf*/
      v22 = *(_QWORD *)(v21 - 24); /*0x1008ea4d2*/
      if ( v22 ) /*0x1008ea4da*/
      {
        v23 = _mm_loadu_si128((const __m128i *)(v21 - 16)); /*0x1008ea4dc*/
        v24 = 1; /*0x1008ea4e3*/
      }
      else
      {
        v23 = 0; /*0x1008ea4f7*/
        v24 = 0; /*0x1008ea4fb*/
      }
      v25[0] = v24; /*0x1008ea501*/
      v25[1] = 0; /*0x1008ea508*/
      v25[2] = v22; /*0x1008ea513*/
      v25[3] = v23.i64[0]; /*0x1008ea51a*/
      v25[4] = v24; /*0x1008ea522*/
      v25[5] = 0; /*0x1008ea529*/
      v25[6] = v22; /*0x1008ea534*/
      v26 = v23; /*0x1008ea53b*/
      _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::hece32bfbe56266b8( /*0x1008ea547*/
        v33,
        v25,
        *(double *)v23.i64,
        *(double *)v11.i64,
        *(double *)v14.i64);
    }
    else
    {
      *v33 = 0; /*0x1008ea4ee*/
    }
  }
  else
  {
LABEL_10:
    *a1 = 0; /*0x1008ea4ba*/
  }
}