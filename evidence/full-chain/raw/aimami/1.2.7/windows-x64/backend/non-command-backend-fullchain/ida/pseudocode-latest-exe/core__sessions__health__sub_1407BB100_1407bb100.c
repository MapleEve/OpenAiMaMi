// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x1407bb100 | successor of pre-update 0x1401c07d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.888, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_1407BB100(_QWORD *a1, const __m128i **a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  const __m128i *v14; // rbx
  const __m128i *v15; // rax
  __int64 m128i_i64; // rdx
  bool v18; // cf
  const __m128i *v20; // rcx
  __m128i si128; // xmm0
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbx
  __m128 v34; // xmm9
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r13
  char v40; // bl
  double v41; // xmm0_8
  __m128d v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rcx
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rbx
  const __m128i *v54; // r14
  __m128i v56; // xmm0
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rbx
  const __m128i *v63; // r14
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v71; // rdi
  int v72[4]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v73; // [rsp+48h] [rbp-38h]
  __int64 v74; // [rsp+50h] [rbp-30h]
  __int128 v75; // [rsp+70h] [rbp-10h] BYREF
  __int128 v76; // [rsp+80h] [rbp+0h]
  __int128 v77; // [rsp+90h] [rbp+10h]
  _OWORD v78[3]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v79; // [rsp+D0h] [rbp+50h]
  _OWORD v80[3]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v81; // [rsp+110h] [rbp+90h] BYREF
  __int128 v82; // [rsp+120h] [rbp+A0h]
  __int128 v83; // [rsp+130h] [rbp+B0h]
  __int128 v84; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v85; // [rsp+150h] [rbp+D0h]
  __int64 v86; // [rsp+160h] [rbp+E0h]
  __int64 v87; // [rsp+168h] [rbp+E8h]
  __int64 v88; // [rsp+170h] [rbp+F0h] BYREF
  _BYTE v89[24]; // [rsp+178h] [rbp+F8h] BYREF
  __int128 v90; // [rsp+190h] [rbp+110h] BYREF
  __int64 v91; // [rsp+1A0h] [rbp+120h]
  __int64 v92; // [rsp+1A8h] [rbp+128h]
  __int64 v93; // [rsp+1B0h] [rbp+130h]
  __int64 v94; // [rsp+1B8h] [rbp+138h]
  __int128 v95; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v96; // [rsp+1D0h] [rbp+150h]
  __int128 v97; // [rsp+1E0h] [rbp+160h]
  __int128 v98; // [rsp+1F0h] [rbp+170h]
  __int128 v99; // [rsp+200h] [rbp+180h]
  __int128 v100; // [rsp+210h] [rbp+190h]
  __int64 v101; // [rsp+220h] [rbp+1A0h]
  const __m128i *v102; // [rsp+230h] [rbp+1B0h]
  const __m128i **v103; // [rsp+238h] [rbp+1B8h]
  const __m128i *v104; // [rsp+240h] [rbp+1C0h]
  __int64 v105; // [rsp+248h] [rbp+1C8h]
  __int8 *v106; // [rsp+250h] [rbp+1D0h]
  __int64 v107; // [rsp+258h] [rbp+1D8h]
  __int64 v108; // [rsp+260h] [rbp+1E0h]
  _QWORD *v109; // [rsp+268h] [rbp+1E8h]
  __int64 v110; // [rsp+270h] [rbp+1F0h]
  __int64 v111; // [rsp+278h] [rbp+1F8h]
  char v112; // [rsp+287h] [rbp+207h]
  __int64 v113; // [rsp+288h] [rbp+208h]

  v113 = -2;
  v103 = a2;
  v109 = a1;
  v4 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v4 + 16) == 1 )
  {
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v71 = v4;
    v5 = sub_1416C5230();
    v4 = v71;
    *(_QWORD *)v71 = v5;
    *(_QWORD *)(v71 + 8) = v6;
    *(_BYTE *)(v71 + 16) = 1;
  }
  *(_QWORD *)v4 = v5 + 1;
  v76 = xmmword_141A46B20;
  v75 = *(_OWORD *)&off_141A46B10;
  *(_QWORD *)&v77 = v5;
  *((_QWORD *)&v77 + 1) = v6;
  v7 = sub_1416AE140(v5);
  v8 = v7;
  if ( *(_BYTE *)(v7 + 16) == 1 )
  {
    v9 = *(_OWORD *)v7;
  }
  else
  {
    *(_QWORD *)&v9 = sub_1416C5230();
    *(_OWORD *)v8 = v9;
    *(_BYTE *)(v8 + 16) = 1;
  }
  *(_QWORD *)v8 = v9 + 1;
  v96 = xmmword_141A46B20;
  v95 = *(_OWORD *)&off_141A46B10;
  v97 = v9;
  v10 = sub_1416AE140(v9 + 1);
  v11 = v10;
  if ( *(_BYTE *)(v10 + 16) == 1 )
  {
    v12 = *(_QWORD *)v10;
    v13 = *(_QWORD *)(v11 + 8);
  }
  else
  {
    v12 = sub_1416C5230();
    *(_QWORD *)v11 = v12;
    *(_QWORD *)(v11 + 8) = v13;
    *(_BYTE *)(v11 + 16) = 1;
  }
  *(_QWORD *)v11 = v12 + 1;
  v80[2] = v77;
  v80[1] = v76;
  v80[0] = v75;
  v81 = v95;
  v82 = v96;
  v83 = v97;
  v84 = *(_OWORD *)&off_141A46B10;
  v85 = xmmword_141A46B20;
  v86 = v12;
  v87 = v13;
  v14 = *v103;
  v15 = v103[3];
  m128i_i64 = (__int64)(*v103)[1].m128i_i64;
  _R15D = ~_mm_movemask_epi8(_mm_load_si128(*v103));
  v93 = *(_QWORD *)(a3 + 200);
  v94 = *(_QWORD *)(a3 + 208);
  v104 = (const __m128i *)m128i_i64;
  v18 = v15 == nullptr;
  _RAX = (__int64)&v15[-1].m128i_i64[1] + 7;
  if ( v18 )
  {
LABEL_45:
    sub_1419234B0(v109, v80, 144);
  }
  else
  {
    while ( 1 )
    {
      v92 = _RAX;
      if ( !(_WORD)_R15D )
      {
        v20 = v104;
        do
        {
          si128 = _mm_load_si128(v20);
          v14 -= 56;
          ++v20;
          _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
        }
        while ( !_R15D );
        v104 = v20;
      }
      __asm { tzcnt   eax, r15d }
      v22 = -56 * _RAX;
      sub_14082C860(&v95, *((_QWORD *)&v14[-1] - 7 * _RAX - 1), v14[-1].m128i_i64[-7 * _RAX]);
      v23 = *((_QWORD *)&v95 + 1);
      if ( (_QWORD)v95 == -1 )
      {
        v46 = v109;
        v109[1] = 2;
        v46[2] = v23;
        *v46 = 0;
        goto LABEL_51;
      }
      v102 = v14;
      v79 = v101;
      v78[2] = v100;
      v78[1] = v99;
      v78[0] = v98;
      v77 = v97;
      v76 = v96;
      v75 = v95;
      v24 = *(_QWORD *)((char *)&v14[-1] + v22 - 8);
      v106 = &v14->m128i_i8[v22];
      v25 = v14[-1].m128i_i64[(unsigned __int64)v22 / 8];
      v26 = *((_QWORD *)&v98 + 1);
      v27 = v99;
      sub_1407B9F10((unsigned int)&v95, (_DWORD)v103, v24, v25, *((__int64 *)&v98 + 1), v99);
      v28 = *((_QWORD *)&v95 + 1);
      if ( (_QWORD)v95 == -1 )
      {
        v47 = v109;
        v109[1] = 2;
        v47[2] = v28;
        *v47 = 0;
        goto LABEL_50;
      }
      v29 = v96;
      v110 = v95;
      v90 = v95;
      v107 = *((_QWORD *)&v95 + 1);
      v91 = v96;
      sub_1416DB410(&v95, v78);
      sub_140871180(&v84, &v95);
      v111 = (__int64)&v102[-3] + v22 - 8;
      if ( *((_QWORD *)v106 - 5) != v27 || (unsigned int)sub_141923B40(*((_QWORD *)v106 - 6), v26, v27) )
      {
        sub_1416DB410(&v95, v111);
        sub_140871180(&v81, &v95);
        sub_1416DB410(&v95, v78);
        sub_140871180(&v81, &v95);
      }
      _R15D &= _R15D - 1;
      v30 = v107;
      v31 = v107 + 272 * v29;
      v32 = 0;
      while ( v30 != v31 )
      {
        v33 = v30;
        if ( *(_DWORD *)(v30 + 88) != 2 )
        {
          sub_1416DB410(&v95, v30 + 104);
          sub_140871180(&v81, &v95);
        }
        v30 += 272;
        if ( ++v32 < v29 )
        {
          sub_1416DB410(&v95, v33 + 136);
          sub_140871180(&v81, &v95);
        }
      }
      sub_1416C49D0(&v95, *((_QWORD *)v106 - 3), *((_QWORD *)v106 - 2));
      if ( (_DWORD)v95 == 2 )
        break;
      v34 = (__m128)(unsigned __int64)v98;
      v35 = *((_QWORD *)&v98 + 1);
      sub_1416DB410(v89, v111);
      sub_1416DA570(&v95);
      v38 = *((_QWORD *)&v95 + 1);
      v39 = v96;
      if ( (_QWORD)v95 == -1 )
      {
        if ( (__int64)v96 < 0 )
        {
          v45 = 0;
          goto LABEL_44;
        }
        if ( (_QWORD)v96 )
        {
          nullsub_1(v37, v36);
          v43 = sub_140001650(v39, 1);
          if ( !v43 )
          {
            v105 = v39;
            v45 = 1;
LABEL_44:
            sub_14196B2DB(v45, v105);
          }
          v44 = v43;
          sub_1419234B0(v43, v38, v39);
          v111 = v39;
          v105 = v44;
          v108 = v44;
        }
        else
        {
          v105 = 1;
          v111 = 0;
          v108 = 1;
          v39 = 0;
        }
      }
      else
      {
        v108 = *((_QWORD *)&v95 + 1);
        v111 = v95;
      }
      if ( v35 >= 0x7FFFFFFFFFFFFFFFLL )
        v35 = 0x7FFFFFFFFFFFFFFFLL;
      v40 = sub_1416B0D10(*((_QWORD *)v106 - 3), *((_QWORD *)v106 - 2), v93, v94);
      _mm_storel_ps((double *)&v88, v34);
      sub_1416B2E00(&v95, &v88, 3577643008LL, 27111902);
      v41 = 0.0;
      if ( !(_BYTE)v95 )
      {
        v42 = _mm_sub_pd(
                (__m128d)_mm_unpacklo_ps((__m128)*((unsigned __int64 *)&v95 + 1), (__m128)0x4530000043300000uLL),
                (__m128d)xmmword_141A04570);
        v41 = (double)(int)v96 / 1000000000.0 + _mm_unpackhi_pd(v42, v42).m128d_f64[0] + v42.m128d_f64[0];
      }
      *(_QWORD *)&v96 = v111;
      *((_QWORD *)&v96 + 1) = v108;
      *(_QWORD *)&v97 = v39;
      *(_QWORD *)&v95 = 1;
      *((_QWORD *)&v95 + 1) = v35;
      LOBYTE(v98) = v40;
      *((double *)&v97 + 1) = v41;
      v112 = 0;
      sub_1408706E0(v72, v80, v89, &v95);
      v14 = v102;
      if ( v72[0] != 2 && v73 != -1 && v73 )
        sub_140001660(v74, v73, 1);
      sub_140235C80(&v90);
      if ( v110 )
        sub_140001660(v107, 272 * v110, 8);
      sub_14077A010(&v75);
      _RAX = v92 - 1;
      if ( !v92 )
        goto LABEL_45;
    }
    v48 = *((_QWORD *)&v95 + 1);
    v49 = v109;
    v109[1] = 2;
    v49[2] = v48;
    *v49 = 0;
    sub_140235C80(&v90);
    if ( v110 )
      sub_140001660(v107, 272 * v110, 8);
LABEL_50:
    sub_14077A010(&v75);
LABEL_51:
    HIDWORD(_RAX) = (unsigned __int64)sub_14018F950(v80) >> 32;
    v51 = *((_QWORD *)&v81 + 1);
    if ( *((_QWORD *)&v81 + 1) )
    {
      v52 = *((_QWORD *)&v82 + 1);
      if ( *((_QWORD *)&v82 + 1) )
      {
        v53 = v81;
        v54 = (const __m128i *)(v81 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v81));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v56 = _mm_load_si128(v54);
              v53 -= 384;
              ++v54;
              _R15D = _mm_movemask_epi8(v56) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v57 = -3LL * _RAX;
          v58 = *(_QWORD *)(v53 + 8 * v57 - 24);
          if ( v58 )
            sub_140001660(*(_QWORD *)(v53 + 8 * v57 - 16), v58, 1);
          --v52;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v52 );
      }
      _RAX = (24 * v51 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v59 = _RAX + v51 + 17;
      if ( v59 )
        sub_140001660(v81 - _RAX, v59, 16);
    }
    v60 = *((_QWORD *)&v84 + 1);
    if ( *((_QWORD *)&v84 + 1) )
    {
      v61 = *((_QWORD *)&v85 + 1);
      if ( *((_QWORD *)&v85 + 1) )
      {
        v62 = v84;
        v63 = (const __m128i *)(v84 + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v84));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v65 = _mm_load_si128(v63);
              v62 -= 384;
              ++v63;
              _R15D = _mm_movemask_epi8(v65) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v66 = -3LL * _RAX;
          v67 = *(_QWORD *)(v62 + 8 * v66 - 24);
          if ( v67 )
            sub_140001660(*(_QWORD *)(v62 + 8 * v66 - 16), v67, 1);
          --v61;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v61 );
      }
      v68 = (24 * v60 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v69 = v68 + v60 + 17;
      if ( v69 )
        sub_140001660(v84 - v68, v69, 16);
    }
  }
  return v109;
}
