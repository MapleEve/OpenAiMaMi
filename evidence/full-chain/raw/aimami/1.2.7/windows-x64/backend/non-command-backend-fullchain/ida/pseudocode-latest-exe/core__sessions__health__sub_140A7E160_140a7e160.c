// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140a7e160 | successor of pre-update 0x140359550 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.689, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140A7E160(__m128i *a1, const __m128i **a2, __int64 a3, __int64 a4)
{
  const __m128i *v7; // r12
  __int64 v8; // r13
  __m128i si128; // xmm6
  __int64 m128i_i64; // rsi
  const __m128i *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  const __m128i *v15; // rsi
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rdi
  __m128i *v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rbx
  const __m128i *v28; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  __m128i **v35; // [rsp+20h] [rbp-60h] BYREF
  __m128i *v36; // [rsp+28h] [rbp-58h] BYREF
  __int128 *v37; // [rsp+30h] [rbp-50h]
  __int64 v38; // [rsp+38h] [rbp-48h]
  __m128i *v39; // [rsp+40h] [rbp-40h]
  _QWORD *v40; // [rsp+48h] [rbp-38h]
  __int128 v41; // [rsp+50h] [rbp-30h] BYREF
  __int128 v42; // [rsp+60h] [rbp-20h]
  __int128 v43; // [rsp+70h] [rbp-10h]
  __m128i v44; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp+18h]
  __int128 v46; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v47; // [rsp+B0h] [rbp+30h]
  __int128 v48; // [rsp+C0h] [rbp+40h]
  __int128 *v49; // [rsp+D0h] [rbp+50h]
  __int64 v50; // [rsp+D8h] [rbp+58h]
  char v51; // [rsp+E7h] [rbp+67h] BYREF
  __int64 v52; // [rsp+E8h] [rbp+68h]

  v52 = -2;
  v39 = a1;
  v7 = *a2;
  v8 = (__int64)a2[1]->m128i_i64 + (_QWORD)*a2 + 1;
  si128 = _mm_load_si128(*a2);
  m128i_i64 = (__int64)(*a2)[1].m128i_i64;
  v11 = a2[3];
  v12 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v12 + 16) == 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(_QWORD *)(v12 + 8);
  }
  else
  {
    v40 = (_QWORD *)v12;
    v13 = sub_1416C5230();
    v12 = (__int64)v40;
    *v40 = v13;
    *(_QWORD *)(v12 + 8) = v14;
    *(_BYTE *)(v12 + 16) = 1;
  }
  *(_QWORD *)v12 = v13 + 1;
  v47 = xmmword_141A68E30;
  v46 = *(_OWORD *)&off_141A68E20;
  *(_QWORD *)&v48 = v13;
  *((_QWORD *)&v48 + 1) = v14;
  v44.m128i_i64[0] = (__int64)&v46;
  v36 = &v44;
  *(_QWORD *)&v41 = v7;
  *((_QWORD *)&v41 + 1) = m128i_i64;
  *(_QWORD *)&v42 = v8;
  WORD4(v42) = ~(unsigned __int16)_mm_movemask_epi8(si128);
  sub_140023550(&v41, v11, &v36);
  v41 = v46;
  v42 = v47;
  v43 = v48;
  v15 = *(const __m128i **)a3;
  v16 = *(_QWORD *)a3 + *(_QWORD *)(a3 + 8) + 1LL;
  v17 = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*(_QWORD *)a3));
  v18 = *(_QWORD *)a3 + 16LL;
  v19 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)&v46 = v15;
  *((_QWORD *)&v46 + 1) = v18;
  *(_QWORD *)&v47 = v16;
  WORD4(v47) = v17;
  *(_QWORD *)&v48 = v19;
  *((_QWORD *)&v48 + 1) = a2;
  v49 = &v41;
  v50 = a4;
  sub_14020A100(&v44, &v46);
  v20 = ~_mm_movemask_epi8(_mm_load_si128(v15));
  v36 = (__m128i *)a2;
  v37 = &v41;
  v38 = a4;
  v35 = &v36;
  *(_QWORD *)&v46 = v15;
  *((_QWORD *)&v46 + 1) = v18;
  *(_QWORD *)&v47 = v16;
  WORD4(v47) = v20;
  v21 = ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD, __m128i ***))sub_140022720)(&v46, v19, 0, &v35);
  if ( v45 >= 2 )
  {
    if ( v45 >= 0x15 )
      sub_141587440(v44.m128i_i64[1], v45, &v51);
    else
      sub_140CC2B00(v44.m128i_i64[1], v45, 1, &v51, v35, v36, v37, v38);
  }
  HIDWORD(_RAX) = HIDWORD(v45);
  v23 = v39;
  v39[1].m128i_i64[0] = v45;
  v24 = _mm_loadu_si128(&v44);
  *v23 = v24;
  v23[1].m128i_i64[1] = v21;
  v25 = *((_QWORD *)&v41 + 1);
  if ( *((_QWORD *)&v41 + 1) )
  {
    v26 = *((_QWORD *)&v42 + 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      v27 = v41;
      v24 = _mm_load_si128((const __m128i *)v41);
      v28 = (const __m128i *)(v41 + 16);
      _R15D = ~_mm_movemask_epi8(v24);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v24 = _mm_load_si128(v28);
            v27 -= 384;
            ++v28;
            _R15D = _mm_movemask_epi8(v24) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v30 = -3 * _RAX;
        v31 = *(_QWORD *)(v27 + 8 * v30 - 24);
        if ( v31 )
          *(double *)v24.m128i_i64 = sub_140001660(*(_QWORD *)(v27 + 8 * v30 - 16), v31, 1);
        --v26;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v26 );
    }
    v32 = (24 * v25 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v33 = v32 + v25 + 17;
    if ( v33 )
      *(double *)v24.m128i_i64 = sub_140001660(v41 - v32, v33, 16);
  }
  return *(double *)v24.m128i_i64;
}
