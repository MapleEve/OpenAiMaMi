// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14076bc20
// name: sub_14076BC20
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14076BC20(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r12
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 (__fastcall **v31)(); // rbx
  __int64 v32; // r14
  __int64 v33; // rcx
  _QWORD *v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  const __m128i *v41; // rbx
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // r14
  _QWORD *v46; // r13
  __m128i *v47; // r12
  __int64 v48; // r8
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rbx
  const __m128i *v52; // r14
  __m128i si128; // xmm0
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rsi
  __m128i v59; // [rsp+30h] [rbp-50h] BYREF
  __int64 v60; // [rsp+40h] [rbp-40h]
  __int64 v61; // [rsp+48h] [rbp-38h] BYREF
  __int64 v62; // [rsp+50h] [rbp-30h]
  unsigned __int64 v63; // [rsp+58h] [rbp-28h]
  __m128i v64; // [rsp+60h] [rbp-20h] BYREF
  __int128 v65; // [rsp+70h] [rbp-10h]
  __int128 v66; // [rsp+80h] [rbp+0h]
  __int128 v67; // [rsp+90h] [rbp+10h]
  __int128 v68; // [rsp+A0h] [rbp+20h]
  __int128 v69; // [rsp+B0h] [rbp+30h]
  __m128i v70; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v71; // [rsp+D0h] [rbp+50h]
  __m128i v72; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v73; // [rsp+F0h] [rbp+70h]
  __int128 v74; // [rsp+100h] [rbp+80h]
  __int128 v75; // [rsp+110h] [rbp+90h]
  __int128 v76; // [rsp+120h] [rbp+A0h]
  __int128 v77; // [rsp+130h] [rbp+B0h]
  __m128i v78; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v79; // [rsp+150h] [rbp+D0h]
  __int64 v80; // [rsp+158h] [rbp+D8h]
  __int64 v81; // [rsp+160h] [rbp+E0h]
  __int64 v82; // [rsp+168h] [rbp+E8h]
  __int64 v83; // [rsp+170h] [rbp+F0h]
  __m128i *v84; // [rsp+178h] [rbp+F8h] BYREF
  __int64 (__fastcall **v85)(); // [rsp+180h] [rbp+100h]
  __int64 v86; // [rsp+188h] [rbp+108h]
  __int64 v87; // [rsp+190h] [rbp+110h]
  __m128i v88; // [rsp+198h] [rbp+118h] BYREF
  unsigned __int64 v89; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v90; // [rsp+1B0h] [rbp+130h]
  __int64 v91; // [rsp+1B8h] [rbp+138h]
  __int64 v92; // [rsp+1C0h] [rbp+140h]
  char v93; // [rsp+1CEh] [rbp+14Eh]
  char v94; // [rsp+1CFh] [rbp+14Fh] BYREF
  __int64 v95; // [rsp+1D0h] [rbp+150h]

  v95 = -2;
  sub_140712830(&v64);
  if ( (_QWORD)v65 )
  {
    v8 = v64.m128i_i64[1];
    v9 = 32 * v65;
    v10 = 0;
    do
    {
      v11 = *(_QWORD *)(v8 + v10);
      if ( v11 )
        sub_140001660(*(_QWORD *)(v8 + v10 + 8), v11, 1);
      v10 += 32;
    }
    while ( v9 != v10 );
    if ( v64.m128i_i64[0] )
      sub_140001660(v8, 32 * v64.m128i_i64[0], 8);
    collect_diagnostic_main_threads((__int64)&v72);
    if ( v72.m128i_i32[0] != -1 )
    {
      v69 = v77;
      v68 = v76;
      v13 = _mm_loadu_si128(&v72);
      v67 = v75;
      v66 = v74;
      v65 = v73;
      v64 = v13;
      nullsub_1(v12);
      v14 = sub_140001650(19, 1);
      if ( !v14 )
        sub_1416C2D4B(1, 19);
      *(__m128i *)v14 = _mm_loadu_si128((const __m128i *)aDbOrphanProvid);
      v91 = v14;
      *(_DWORD *)(v14 + 15) = 1936876900;
      nullsub_1(v15);
      v16 = (_DWORD *)sub_140001650(7, 1);
      if ( !v16 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v16 + 3) = 1735289198;
      v90 = (unsigned __int64)v16;
      *v16 = 1852989815;
      nullsub_1(v17);
      v18 = sub_140001650(33, 1);
      if ( !v18 )
        sub_1416C2D4B(1, 33);
      *(_OWORD *)(v18 + 16) = xmmword_14178D5D5;
      *(__m128i *)v18 = _mm_loadu_si128((const __m128i *)&xmmword_14178D5C5);
      v92 = v18;
      *(_BYTE *)(v18 + 32) = -109;
      v88.m128i_i64[0] = 0;
      v88.m128i_i64[1] = 1;
      v89 = 0;
      v86 = 1610612768;
      v84 = &v88;
      v85 = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v64, &v84) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v94,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      *(_QWORD *)(a1 + 88) = v89;
      *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v88);
      *(_QWORD *)a1 = 19;
      *(_QWORD *)(a1 + 8) = v91;
      *(_QWORD *)(a1 + 16) = 19;
      *(_QWORD *)(a1 + 24) = 7;
      *(_QWORD *)(a1 + 32) = v90;
      *(_QWORD *)(a1 + 40) = 7;
      *(_QWORD *)(a1 + 48) = 33;
      *(_QWORD *)(a1 + 56) = v92;
      *(_QWORD *)(a1 + 64) = 33;
      *(_BYTE *)(a1 + 96) = 0;
      return sub_1406CDA20(&v72);
    }
    v79 = *((_QWORD *)&v73 + 1);
    v78 = _mm_loadu_si128((const __m128i *)&v72.m128i_u64[1]);
    sub_1407883E0((unsigned int)&v64, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80), a3, a4);
    v20 = v78.m128i_i64[1];
    v72.m128i_i64[0] = v78.m128i_i64[1];
    v72.m128i_i64[1] = v78.m128i_i64[1] + 112 * v79;
    *(_QWORD *)&v73 = &v64;
    sub_14031B0C0(&v61, v72.m128i_i64);
    v22 = v62;
    v23 = v63;
    v24 = 16 * v63;
    v91 = v62;
    if ( 16 * v63 > 0x7FFFFFFFFFFFFFF8LL )
    {
      v25 = 0;
      goto LABEL_20;
    }
    if ( v24 )
    {
      nullsub_1(v21);
      v25 = 8;
      v26 = (_QWORD *)sub_140001650(v24, 8);
      if ( !v26 )
LABEL_20:
        sub_1416C2D4B(v25, v24);
      v27 = (__int64)v26;
      v90 = v23;
      v80 = v20;
      v92 = (__int64)v26;
      if ( !v23 )
        goto LABEL_64;
    }
    else
    {
      v27 = 8;
      v90 = 0;
      v80 = v20;
      v92 = 8;
      if ( !v63 )
        goto LABEL_64;
    }
    if ( v23 == 1 )
    {
      v28 = 0;
    }
    else
    {
      v29 = v27 + 24;
      v28 = 0;
      do
      {
        *(_OWORD *)(v29 - 24) = *(_OWORD *)(*(_QWORD *)(v22 + 8 * v28) + 40LL);
        *(__m128i *)(v29 - 8) = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v22 + 8 * v28 + 8) + 40LL));
        v28 += 2;
        v29 += 32;
      }
      while ( (v23 & 0xFFFFFFFFFFFFFFFEuLL) != v28 );
      if ( (v23 & 1) == 0 )
        goto LABEL_32;
    }
    *(__m128i *)(v27 + 16 * v28) = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v22 + 8 * v28) + 40LL));
LABEL_32:
    v30 = 1;
    if ( v23 == 1 )
      goto LABEL_33;
    if ( v23 >= 0x15 )
      sub_1413470B0(v92, v23, &v94);
    else
      sub_1405582C0((_QWORD *)v92, v23, 1);
    v41 = (const __m128i *)(v92 + 32);
    v42 = 2;
    while ( 1 )
    {
      v44 = v41[-1].m128i_i64[1];
      if ( v44 == v41[-2].m128i_i64[1] && !(unsigned int)sub_1416847B0(v41[-1].m128i_i64[0], v41[-2].m128i_i64[0], v44) )
        break;
      ++v41;
      v43 = 1 - v23 + v42++ + 1;
      if ( v43 == 2 )
      {
        v30 = v23;
        goto LABEL_60;
      }
    }
    v30 = v42 - 1;
    v45 = v23 - v42;
    if ( v23 <= v42 )
    {
LABEL_60:
      v22 = v91;
      goto LABEL_33;
    }
    v46 = (_QWORD *)v92;
    do
    {
      v47 = (__m128i *)&v46[2 * v30];
      v48 = v41->m128i_i64[1];
      if ( v48 != v47[-1].m128i_i64[1] || (unsigned int)sub_1416847B0(v41->m128i_i64[0], v47[-1].m128i_i64[0], v48) )
      {
        *v47 = _mm_loadu_si128(v41);
        ++v30;
      }
      ++v41;
      --v45;
    }
    while ( v45 );
    v22 = v91;
    if ( v30 )
    {
LABEL_33:
      sub_140328DF0(&v88, v22, v22 + 8 * v23);
      if ( v89 >= 2 )
      {
        v93 = 1;
        if ( v89 >= 0x15 )
          sub_141346500(v88.m128i_i64[1], v89, (__int64)&v94);
        else
          sub_140555D00((_QWORD *)v88.m128i_i64[1], v89, 1);
      }
      v93 = 1;
      sub_1402AD260((__int64)&v88);
      v72.m128i_i64[0] = v88.m128i_i64[1];
      v72.m128i_i64[1] = v88.m128i_i64[1];
      *(_QWORD *)&v73 = v88.m128i_i64[0];
      *((_QWORD *)&v73 + 1) = v88.m128i_i64[1] + 24 * v89;
      *(_QWORD *)&v74 = 5;
      v93 = 0;
      sub_1402CB680(&v84, v72.m128i_i64);
      v31 = v85;
      v32 = v86;
      sub_140440300((unsigned int)&v72, (_DWORD)v85, v86, (unsigned int)&unk_141789BA4, 3);
      v71 = v73;
      v70 = _mm_loadu_si128(&v72);
      if ( v32 )
      {
        v34 = v31 + 1;
        do
        {
          v35 = *(v34 - 1);
          if ( v35 )
            sub_140001660(*v34, v35, 1);
          v34 += 3;
          --v32;
        }
        while ( v32 );
      }
      if ( v84 )
        sub_140001660(v31, 24LL * (_QWORD)v84, 8);
      nullsub_1(v33);
      v36 = sub_140001650(19, 1);
      if ( !v36 )
        sub_1416C2D4B(1, 19);
      *(__m128i *)v36 = _mm_loadu_si128((const __m128i *)aDbOrphanProvid);
      v81 = v36;
      *(_DWORD *)(v36 + 15) = 1936876900;
      nullsub_1(v37);
      v38 = sub_140001650(5, 1);
      if ( !v38 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v38 + 4) = 114;
      v82 = v38;
      *(_DWORD *)v38 = 1869771365;
      v88.m128i_i64[0] = v30;
      v84 = &v88;
      v85 = (__int64 (__fastcall **)())sub_1414AC520;
      sub_14149C0F0(&v72, &unk_14178D52D, &v84);
      v83 = v72.m128i_i64[1];
      v87 = v72.m128i_i64[0];
      v39 = v73;
      v72.m128i_i64[0] = (__int64)&v70;
      v72.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v59, &unk_14178D55B, &v72);
      *(_QWORD *)(a1 + 88) = v60;
      *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v59);
      *(_QWORD *)a1 = 19;
      *(_QWORD *)(a1 + 8) = v81;
      *(_QWORD *)(a1 + 16) = 19;
      *(_QWORD *)(a1 + 24) = 5;
      *(_QWORD *)(a1 + 32) = v82;
      *(_QWORD *)(a1 + 40) = 5;
      *(_QWORD *)(a1 + 48) = v87;
      HIDWORD(_RAX) = HIDWORD(v83);
      *(_QWORD *)(a1 + 56) = v83;
      *(_QWORD *)(a1 + 64) = v39;
      *(_BYTE *)(a1 + 96) = 1;
      if ( v70.m128i_i64[0] )
        HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v70.m128i_i64[1], v70.m128i_i64[0], 1) >> 32;
      goto LABEL_65;
    }
LABEL_64:
    HIDWORD(_RAX) = (unsigned __int64)sub_140797030(
                                        a1,
                                        (unsigned int)aDbOrphanProvid,
                                        19,
                                        (unsigned int)&unk_14178D511,
                                        28) >> 32;
LABEL_65:
    if ( v90 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v92, 16 * v90, 8) >> 32;
    if ( v61 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v91, 8 * v61, 8) >> 32;
    v49 = v64.m128i_i64[1];
    if ( v64.m128i_i64[1] )
    {
      v50 = *((_QWORD *)&v65 + 1);
      if ( *((_QWORD *)&v65 + 1) )
      {
        v51 = v64.m128i_i64[0];
        v52 = (const __m128i *)(v64.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v64.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              si128 = _mm_load_si128(v52);
              v51 -= 384;
              ++v52;
              _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v55 = -3 * _RAX;
          v56 = *(_QWORD *)(v51 + 8 * v55 - 24);
          if ( v56 )
            sub_140001660(*(_QWORD *)(v51 + 8 * v55 - 16), v56, 1);
          --v50;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v50 );
      }
      v57 = (24 * v49 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v58 = v57 + v49 + 17;
      if ( v58 )
        sub_140001660(v64.m128i_i64[0] - v57, v58, 16);
    }
    sub_140335260((__int64)&v78);
    result = v78.m128i_i64[0];
    if ( v78.m128i_i64[0] )
      return sub_140001660(v80, 112 * v78.m128i_i64[0], 8);
    return result;
  }
  if ( v64.m128i_i64[0] )
    sub_140001660(v64.m128i_i64[1], 32 * v64.m128i_i64[0], 8);
  return sub_140797030(a1, (unsigned int)aDbOrphanProvid, 19, (unsigned int)&unk_14178D4E4, 45);
}