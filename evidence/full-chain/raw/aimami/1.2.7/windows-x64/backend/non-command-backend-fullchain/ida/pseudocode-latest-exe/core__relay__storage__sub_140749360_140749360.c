// win 1.2.7 latest-exe | module src/core/relay/storage.rs | ea 0x140749360 | successor of pre-update 0x140f71c80 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.961, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140749360(_QWORD *a1, _QWORD *a2, const __m128i *a3, __int64 a4)
{
  __int128 *v7; // rax
  const __m128i *v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  const __m128i *v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int128 v25; // rax
  _QWORD *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rdi
  __m128i *v29; // rsi
  _QWORD *v30; // r14
  __int64 v31; // rdx
  _QWORD *v32; // r13
  _QWORD *v34; // r15
  __m128i v35; // xmm8
  __int64 v37; // r14
  unsigned __int64 v39; // r15
  int v40; // eax
  bool v41; // zf
  __int64 i; // rdx
  unsigned __int64 v43; // rax
  _QWORD *v44; // rbx
  __m128i v45; // rdi
  __m128i v46; // xmm0
  __m128i v47; // xmm7
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbx
  const __m128i *v51; // r14
  __m128i si128; // xmm0
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  __m128i v59; // [rsp+38h] [rbp-48h] BYREF
  __int64 v60; // [rsp+48h] [rbp-38h]
  __m128i v61; // [rsp+50h] [rbp-30h] BYREF
  __int128 v62; // [rsp+60h] [rbp-20h]
  __int128 v63; // [rsp+70h] [rbp-10h] BYREF
  __m128i v64; // [rsp+80h] [rbp+0h] BYREF
  __int64 v65; // [rsp+90h] [rbp+10h]
  __int64 v66; // [rsp+98h] [rbp+18h]
  __m128i v67; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v68; // [rsp+B0h] [rbp+30h]
  __int128 v69; // [rsp+C0h] [rbp+40h]
  __int64 v70; // [rsp+D0h] [rbp+50h]
  const char *v71; // [rsp+D8h] [rbp+58h]
  __int64 v72; // [rsp+E0h] [rbp+60h]
  __int64 v73; // [rsp+E8h] [rbp+68h]
  void *v74; // [rsp+F0h] [rbp+70h]
  __m128i *v75; // [rsp+F8h] [rbp+78h]
  _QWORD *v76; // [rsp+100h] [rbp+80h]
  __m128i v77; // [rsp+108h] [rbp+88h] BYREF
  __m128i *v78; // [rsp+118h] [rbp+98h]
  __int64 (__fastcall *v79)(); // [rsp+120h] [rbp+A0h]
  _QWORD *v80; // [rsp+128h] [rbp+A8h]
  char v81; // [rsp+137h] [rbp+B7h] BYREF
  __int64 v82; // [rsp+138h] [rbp+B8h]

  v82 = -2;
  v80 = a1;
  v7 = (__int128 *)sub_1404D9AA0(0);
  if ( !v7 )
    sub_14196A580(&off_141A6E388);
  v8 = &a3[4 * a4];
  v9 = *v7;
  ++*(_QWORD *)v7;
  v68 = xmmword_141A1CBA0;
  v67 = *(__m128i *)&off_141A1CB90;
  v69 = v9;
  sub_14085F570(&v67, a3, v8);
  v63 = v69;
  v62 = v68;
  v61 = _mm_load_si128(&v67);
  v11 = a2[1];
  v76 = a2;
  v12 = a2[2];
  while ( a3 != v8 )
  {
    v13 = a3;
    a3 += 4;
    v14 = v13[3].m128i_u64[0];
    if ( v14 < v12 )
    {
      v15 = v11 + (v14 << 8);
      if ( *(_BYTE *)(v15 + 252) != 1 )
        goto LABEL_16;
      v16 = _mm_loadu_si128(v13 + 2);
      sub_1408175F0(
        (unsigned int)&v77,
        (_DWORD)v80,
        v13->m128i_i64[1],
        v13[1].m128i_i64[0],
        v16.m128i_i64[0],
        v16.m128i_i64[1]);
      if ( v77.m128i_i64[0] == -1 )
      {
        if ( v77.m128i_i8[8] )
        {
          v13[3].m128i_i8[8] = 1;
LABEL_16:
          if ( *(_QWORD *)off_14223FF10 < 2u )
            goto LABEL_18;
LABEL_17:
          v77.m128i_i64[0] = (__int64)v13;
          v77.m128i_i64[1] = (__int64)sub_140191260;
          v78 = (__m128i *)&v13[1].m128i_u64[1];
          v79 = sub_1400015F0;
          v70 = 2;
          v71 = aCodexmateLibCo_29;
          v72 = 35;
          v74 = &unk_141A3FCAF;
          v75 = &v77;
          v67.m128i_i64[0] = 0;
          v67.m128i_i64[1] = (__int64)aCodexmateLibCo_29;
          v68 = 0x23u;
          *(_QWORD *)&v69 = aSrcCoreRelaySt;
          *((_QWORD *)&v69 + 1) = 25;
          v73 = 0x1E100000001LL;
          sub_141503E20(&v81, &v67);
          goto LABEL_18;
        }
        *(_BYTE *)(v15 + 252) = 0;
        nullsub_1(v18, v17);
        v20 = sub_140001650(82, 1);
        if ( !v20 )
          sub_14196B2DB(1, 82);
        v21 = v20;
        *(_OWORD *)(v20 + 64) = xmmword_141A3FC4F;
        *(_OWORD *)(v20 + 48) = xmmword_141A3FC3F;
        *(_OWORD *)(v20 + 32) = xmmword_141A3FC2F;
        *(_OWORD *)(v20 + 16) = xmmword_141A3FC1F;
        *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)&xmmword_141A3FC0F);
        *(_WORD *)(v20 + 80) = -23163;
        v22 = *(_QWORD *)(v15 + 168);
        if ( v22 != -1 && v22 )
          sub_140001660(*(_QWORD *)(v15 + 176), v22, 1);
        *(_QWORD *)(v15 + 168) = 82;
        *(_QWORD *)(v15 + 176) = v21;
        *(_QWORD *)(v15 + 184) = 82;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
          goto LABEL_17;
      }
      else
      {
        *(_QWORD *)&v68 = v78;
        v67 = v77;
        *(_BYTE *)(v15 + 252) = 0;
        v64.m128i_i64[0] = (__int64)&v67;
        v64.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_1416DAFA0(&v59, &unk_141A3FC61, &v64);
        v19 = *(_QWORD *)(v15 + 168);
        if ( v19 != -1 && v19 )
          sub_140001660(*(_QWORD *)(v15 + 176), v19, 1);
        *(_QWORD *)(v15 + 184) = v60;
        *(__m128i *)(v15 + 168) = _mm_loadu_si128(&v59);
        if ( !v67.m128i_i64[0] )
          goto LABEL_16;
        sub_140001660(v67.m128i_i64[1], v67.m128i_i64[0], 1);
        if ( *(_QWORD *)off_14223FF10 >= 2u )
          goto LABEL_17;
      }
LABEL_18:
      sub_1416DB410(&v67, &v13[1].m128i_u64[1]);
      if ( *(_QWORD *)v15 )
        sub_140001660(*(_QWORD *)(v15 + 8), *(_QWORD *)v15, 1);
      *(_QWORD *)(v15 + 16) = v68;
      *(__m128i *)v15 = _mm_loadu_si128(&v67);
    }
  }
  v23 = sub_1416AE140(v10);
  v24 = v23;
  if ( *(_BYTE *)(v23 + 16) == 1 )
  {
    v25 = *(_OWORD *)v23;
  }
  else
  {
    *(_QWORD *)&v25 = sub_1416C5230();
    *(_OWORD *)v24 = v25;
    *(_BYTE *)(v24 + 16) = 1;
  }
  *(_QWORD *)v24 = v25 + 1;
  v68 = xmmword_141A38A60;
  v67 = _mm_loadu_si128((const __m128i *)&off_141A38A50);
  v69 = v25;
  v26 = v76;
  v28 = v76[5];
  v77.m128i_i64[0] = v76[4];
  v27 = v77.m128i_i64[0];
  v77.m128i_i64[1] = v77.m128i_i64[0] + 24 * v28;
  v78 = &v61;
  v79 = (__int64 (__fastcall *)())&v67;
  sub_14020CC20(&v64, &v77);
  v29 = (__m128i *)(v26 + 3);
  if ( v28 )
  {
    v30 = (_QWORD *)(v27 + 8);
    do
    {
      v31 = *(v30 - 1);
      if ( v31 )
        sub_140001660(*v30, v31, 1);
      v30 += 3;
      --v28;
    }
    while ( v28 );
  }
  if ( v29->m128i_i64[0] )
    sub_140001660(v27, 24 * v29->m128i_i64[0], 8);
  v26[5] = v65;
  *v29 = _mm_loadu_si128(&v64);
  v32 = (_QWORD *)v26[17];
  _RAX = 9LL * v26[18];
  v34 = &v32[9 * v26[18]];
  v80 = v34;
LABEL_46:
  while ( v32 != v34 )
  {
    v44 = v32;
    v32 += 9;
    if ( *((_QWORD *)&v62 + 1) )
    {
      v43 = sub_1406CECD0(&v63, v44);
      _RCX = v43 >> 57;
      v45 = v61;
      v46 = _mm_cvtsi32_si128(v43 >> 57);
      v47 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v46, v46), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        _RAX = v45.m128i_i64[1] & v43;
        v35 = _mm_loadu_si128((const __m128i *)(v45.m128i_i64[0] + _RAX));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v35, v47));
        if ( _R12D )
          break;
LABEL_41:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v35, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_46;
        v43 = i + _RAX + 16;
      }
      v37 = v44[2];
      v76 = (_QWORD *)_RAX;
      v66 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        _RCX = -(__int64)(v45.m128i_i64[1] & (_RAX + _RCX));
        if ( v37 == *(_QWORD *)(v45.m128i_i64[0] + 48 * _RCX - 32) )
        {
          v39 = v45.m128i_i64[0] + 48 * _RCX;
          if ( !(unsigned int)sub_141923B40(v44[1], *(_QWORD *)(v39 - 40), v37) )
            break;
        }
        v40 = _R12D - 1;
        LOWORD(v40) = _R12D & (_R12D - 1);
        v41 = (_WORD)v40 == 0;
        _R12D = v40;
        _RAX = (__int64)v76;
        v34 = v80;
        i = v66;
        if ( v41 )
          goto LABEL_41;
      }
      sub_1416DB410(&v77, v39 - 24);
      v34 = v80;
      if ( *v44 )
        sub_140001660(v44[1], *v44, 1);
      HIDWORD(_RAX) = HIDWORD(v78);
      v44[2] = v78;
      *(__m128i *)v44 = _mm_loadu_si128(&v77);
    }
  }
  v48 = v67.m128i_i64[1];
  if ( v67.m128i_i64[1] )
  {
    v49 = *((_QWORD *)&v68 + 1);
    if ( *((_QWORD *)&v68 + 1) )
    {
      v50 = v67.m128i_i64[0];
      v51 = (const __m128i *)(v67.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v67.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v51);
            v50 -= 384;
            ++v51;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v54 = -3 * _RAX;
        v55 = *(_QWORD *)(v50 + 8 * v54 - 24);
        if ( v55 )
          sub_140001660(*(_QWORD *)(v50 + 8 * v54 - 16), v55, 1);
        --v49;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v49 );
    }
    v56 = (24 * v48 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v57 = v56 + v48 + 17;
    if ( v57 )
      sub_140001660(v67.m128i_i64[0] - v56, v57, 16);
  }
  return sub_14018EA10(&v61);
}
