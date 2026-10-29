// win 1.2.7 | module src/platform/proxy.rs | ea 0x141009e70 | name sub_141009E70
// win 1.2.7 | module src/platform/proxy.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141009E70(__m128i *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rsi
  _OWORD *v15; // r15
  unsigned __int64 v16; // rbx
  _QWORD *v17; // r13
  char *v18; // r14
  __int64 *i; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rcx
  __int64 *v24; // rbx
  char *v25; // rsi
  _OWORD *v26; // r14
  __int64 v27; // r12
  __int64 v28; // r15
  __m128i *v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 result; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rbx
  const __m128i *v37; // r14
  __m128i si128; // xmm0
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rsi
  char v44; // [rsp+28h] [rbp-58h] BYREF
  __int128 v45; // [rsp+40h] [rbp-40h]
  __int64 *v46; // [rsp+50h] [rbp-30h]
  __int64 *v47; // [rsp+58h] [rbp-28h]
  __int64 v48; // [rsp+60h] [rbp-20h]
  __int64 *v49; // [rsp+68h] [rbp-18h]
  __int128 v50; // [rsp+70h] [rbp-10h] BYREF
  __int128 v51; // [rsp+80h] [rbp+0h]
  __int64 v52; // [rsp+90h] [rbp+10h]
  __int64 v53; // [rsp+98h] [rbp+18h]
  unsigned __int64 v54; // [rsp+A0h] [rbp+20h]
  __int64 *v55; // [rsp+A8h] [rbp+28h]
  __int64 v56; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD v57[2]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v58; // [rsp+C8h] [rbp+48h]
  __int64 *v59; // [rsp+D0h] [rbp+50h]
  __m128i *v60; // [rsp+D8h] [rbp+58h]
  __int64 v61; // [rsp+E0h] [rbp+60h]
  __m128i v62; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v63; // [rsp+F8h] [rbp+78h]
  __int64 v64; // [rsp+100h] [rbp+80h]
  char v65; // [rsp+10Eh] [rbp+8Eh]
  char v66; // [rsp+10Fh] [rbp+8Fh]
  __int64 v67; // [rsp+110h] [rbp+90h]

  v67 = -2;
  v59 = a2;
  v66 = 1;
  v3 = sub_14167F170(a1);
  v8 = *(_BYTE *)(v3 + 16) == 1;
  v60 = a1;
  if ( v8 )
  {
    v9 = *(_QWORD *)v3;
    v10 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v66 = 1;
    v43 = v3;
    v9 = sub_141696260(v5, v4, v6, v7);
    v3 = v43;
    *(_QWORD *)v43 = v9;
    *(_QWORD *)(v43 + 8) = v10;
    *(_BYTE *)(v43 + 16) = 1;
  }
  *(_QWORD *)v3 = v9 + 1;
  v51 = *(&off_141A68A70 + 1);
  v50 = off_141A68A70;
  v52 = v9;
  v53 = v10;
  v62.m128i_i64[0] = 0;
  v62.m128i_i64[1] = 8;
  v63 = 0;
  v11 = *v59;
  v12 = (__int64 *)v59[1];
  v13 = 8 * v59[2];
  v14 = &v12[3 * v59[2]];
  v46 = v12;
  v61 = v11;
  v48 = v11;
  v49 = v14;
  v15 = v57;
  v16 = 3 * v13 - 24;
  v17 = v12 + 4;
  v18 = &v44;
  v55 = v12;
  for ( i = v12; ; i = v22 )
  {
    if ( i == v14 )
    {
      v29 = v60;
      v30 = v61;
      goto LABEL_19;
    }
    v22 = i + 3;
    v47 = i + 3;
    v23 = *i;
    v45 = *(_OWORD *)(i + 1);
    if ( v23 == -1 )
      break;
    v64 = v23;
    v56 = v23;
    *v15 = v45;
    v65 = 1;
    sub_1416AC440(v18, &v56);
    v65 = 1;
    if ( (unsigned __int8)sub_1403AAB80(&v50, v18) )
    {
      if ( v64 )
        sub_140001660(v57[0], v64, 1);
    }
    else
    {
      v54 = v16;
      v24 = v14;
      v25 = v18;
      v26 = v15;
      v58 = v57[0];
      v27 = v57[1];
      v28 = v63;
      if ( v63 == v62.m128i_i64[0] )
        sub_14190FDC0(&v62);
      v20 = v62.m128i_i64[1];
      v21 = 3 * v28;
      *(_QWORD *)(v62.m128i_i64[1] + 8 * v21) = v64;
      *(_QWORD *)(v20 + 8 * v21 + 8) = v58;
      *(_QWORD *)(v20 + 8 * v21 + 16) = v27;
      v63 = v28 + 1;
      v15 = v26;
      v18 = v25;
      v14 = v24;
      v16 = v54;
    }
    v16 -= 24LL;
    v17 += 3;
  }
  v8 = v14 == v22;
  v29 = v60;
  v30 = v61;
  if ( !v8 )
  {
    v31 = v16 / 0x18;
    do
    {
      v32 = *(v17 - 1);
      if ( v32 )
        sub_140001660(*v17, v32, 1);
      v17 += 3;
      --v31;
    }
    while ( v31 );
  }
LABEL_19:
  if ( v30 )
    sub_140001660(v55, 24 * v30, 8);
  result = v63;
  v29[1].m128i_i64[0] = v63;
  *v29 = _mm_loadu_si128(&v62);
  v34 = *((_QWORD *)&v50 + 1);
  if ( *((_QWORD *)&v50 + 1) )
  {
    v35 = *((_QWORD *)&v51 + 1);
    if ( *((_QWORD *)&v51 + 1) )
    {
      v36 = v50;
      v37 = (const __m128i *)(v50 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v50));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v37);
            v36 -= 384;
            ++v37;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v40 = -3 * result;
        v41 = *(_QWORD *)(v36 + 8 * v40 - 24);
        if ( v41 )
          sub_140001660(*(_QWORD *)(v36 + 8 * v40 - 16), v41, 1);
        --v35;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v35 );
    }
    result = (24 * v34 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v42 = result + v34 + 17;
    if ( v42 )
      return sub_140001660(v50 - result, v42, 16);
  }
  return result;
}
