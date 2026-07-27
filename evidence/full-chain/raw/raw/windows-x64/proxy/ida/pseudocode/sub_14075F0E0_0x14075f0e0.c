// module: codexmate_lib/platform/proxy
// addr: 0x14075f0e0
// name: sub_14075F0E0
// win 1.2.1 | module src/platform/proxy.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14075F0E0(__m128i *a1, __int64 *a2)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rsi
  _OWORD *v11; // r15
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r13
  char *v14; // r14
  __int64 *i; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  __int64 *v20; // rbx
  char *v21; // rsi
  _OWORD *v22; // r14
  __int64 v23; // r12
  __int64 v24; // r15
  __m128i *v25; // rsi
  __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 result; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rbx
  const __m128i *v33; // r14
  __m128i si128; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rsi
  char v40; // [rsp+28h] [rbp-58h] BYREF
  __int128 v41; // [rsp+40h] [rbp-40h]
  __int64 *v42; // [rsp+50h] [rbp-30h]
  __int64 *v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  __int64 *v45; // [rsp+68h] [rbp-18h]
  __int128 v46; // [rsp+70h] [rbp-10h] BYREF
  __int128 v47; // [rsp+80h] [rbp+0h]
  __int64 v48; // [rsp+90h] [rbp+10h]
  __int64 v49; // [rsp+98h] [rbp+18h]
  unsigned __int64 v50; // [rsp+A0h] [rbp+20h]
  __int64 *v51; // [rsp+A8h] [rbp+28h]
  __int64 v52; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD v53[2]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v54; // [rsp+C8h] [rbp+48h]
  __int64 *v55; // [rsp+D0h] [rbp+50h]
  __m128i *v56; // [rsp+D8h] [rbp+58h]
  __int64 v57; // [rsp+E0h] [rbp+60h]
  __m128i v58; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v59; // [rsp+F8h] [rbp+78h]
  __int64 v60; // [rsp+100h] [rbp+80h]
  char v61; // [rsp+10Eh] [rbp+8Eh]
  char v62; // [rsp+10Fh] [rbp+8Fh]
  __int64 v63; // [rsp+110h] [rbp+90h]

  v63 = -2;
  v55 = a2;
  v62 = 1;
  v3 = sub_141470CD0(a1, a2);
  v4 = *(_BYTE *)(v3 + 16) == 1;
  v56 = a1;
  if ( v4 )
  {
    v5 = *(_QWORD *)v3;
    v6 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v62 = 1;
    v39 = v3;
    v5 = sub_141486EF0();
    v3 = v39;
    *(_QWORD *)v39 = v5;
    *(_QWORD *)(v39 + 8) = v6;
    *(_BYTE *)(v39 + 16) = 1;
  }
  *(_QWORD *)v3 = v5 + 1;
  v47 = *(&off_141786750 + 1);
  v46 = off_141786750;
  v48 = v5;
  v49 = v6;
  v58.m128i_i64[0] = 0;
  v58.m128i_i64[1] = 8;
  v59 = 0;
  v7 = *v55;
  v8 = (__int64 *)v55[1];
  v9 = 8 * v55[2];
  v10 = &v8[3 * v55[2]];
  v42 = v8;
  v57 = v7;
  v44 = v7;
  v45 = v10;
  v11 = v53;
  v12 = 3 * v9 - 24;
  v13 = v8 + 4;
  v14 = &v40;
  v51 = v8;
  for ( i = v8; ; i = v18 )
  {
    if ( i == v10 )
    {
      v25 = v56;
      v26 = v57;
      goto LABEL_19;
    }
    v18 = i + 3;
    v43 = i + 3;
    v19 = *i;
    v41 = *(_OWORD *)(i + 1);
    if ( v19 == -1 )
      break;
    v60 = v19;
    v52 = v19;
    *v11 = v41;
    v61 = 1;
    sub_14149C500(v14, &v52);
    v61 = 1;
    if ( (unsigned __int8)sub_140474440(&v46, v14) )
    {
      if ( v60 )
        sub_140001660(v53[0], v60, 1);
    }
    else
    {
      v50 = v12;
      v20 = v10;
      v21 = v14;
      v22 = v11;
      v54 = v53[0];
      v23 = v53[1];
      v24 = v59;
      if ( v59 == v58.m128i_i64[0] )
        sub_141689AB0(&v58);
      v16 = v58.m128i_i64[1];
      v17 = 3 * v24;
      *(_QWORD *)(v58.m128i_i64[1] + 8 * v17) = v60;
      *(_QWORD *)(v16 + 8 * v17 + 8) = v54;
      *(_QWORD *)(v16 + 8 * v17 + 16) = v23;
      v59 = v24 + 1;
      v11 = v22;
      v14 = v21;
      v10 = v20;
      v12 = v50;
    }
    v12 -= 24LL;
    v13 += 3;
  }
  v4 = v10 == v18;
  v25 = v56;
  v26 = v57;
  if ( !v4 )
  {
    v27 = v12 / 0x18;
    do
    {
      v28 = *(v13 - 1);
      if ( v28 )
        sub_140001660(*v13, v28, 1);
      v13 += 3;
      --v27;
    }
    while ( v27 );
  }
LABEL_19:
  if ( v26 )
    sub_140001660(v51, 24 * v26, 8);
  result = v59;
  v25[1].m128i_i64[0] = v59;
  *v25 = _mm_loadu_si128(&v58);
  v30 = *((_QWORD *)&v46 + 1);
  if ( *((_QWORD *)&v46 + 1) )
  {
    v31 = *((_QWORD *)&v47 + 1);
    if ( *((_QWORD *)&v47 + 1) )
    {
      v32 = v46;
      v33 = (const __m128i *)(v46 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v46));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v33);
            v32 -= 384;
            ++v33;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v36 = -3 * result;
        v37 = *(_QWORD *)(v32 + 8 * v36 - 24);
        if ( v37 )
          sub_140001660(*(_QWORD *)(v32 + 8 * v36 - 16), v37, 1);
        --v31;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v31 );
    }
    result = (24 * v30 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v38 = result + v30 + 17;
    if ( v38 )
      return sub_140001660(v46 - result, v38, 16);
  }
  return result;
}