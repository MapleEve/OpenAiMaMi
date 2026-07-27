// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404b8260
// name: sub_1404B8260
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1404B8260(__int64 a1, int a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int128 v10; // rax
  __m128i v11; // xmm6
  __int64 v12; // rax
  __int64 v13; // rbx
  __int128 v14; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // r14
  __m128i v17; // kr00_16
  __int64 v18; // r15
  __int64 result; // rax
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _BYTE *v29; // r15
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // r9
  __int64 v48; // r12
  __m128i v49; // xmm0
  __m128i v50; // xmm8
  __int64 v51; // rcx
  __int64 v52; // r15
  __int64 v53; // r15
  __m128i v54; // xmm9
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v62; // r10
  __int64 v63; // r11
  char v65; // dl
  __int64 v66; // r9
  char v67; // cl
  __int64 v68; // rcx
  __int64 v69; // r8
  __int128 v71; // xmm0
  __m128i v72; // xmm1
  __m128i v73; // xmm1
  __int128 v74; // xmm2
  __int64 v75; // rdx
  __m128i si128; // xmm0
  __m128i v77; // [rsp+30h] [rbp-50h] BYREF
  __int64 v78; // [rsp+40h] [rbp-40h]
  _QWORD v79[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v80; // [rsp+58h] [rbp-28h] BYREF
  __int64 v81; // [rsp+60h] [rbp-20h]
  __int64 v82; // [rsp+68h] [rbp-18h]
  unsigned __int64 v83; // [rsp+78h] [rbp-8h]
  unsigned __int64 v84; // [rsp+80h] [rbp+0h]
  __int64 v85; // [rsp+88h] [rbp+8h]
  __int64 v86; // [rsp+90h] [rbp+10h]
  __int64 v87; // [rsp+98h] [rbp+18h]
  __m128i v88; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v89; // [rsp+B0h] [rbp+30h]
  _OWORD v90[2]; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int128 v91; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v92; // [rsp+F0h] [rbp+70h]
  __int64 v93; // [rsp+100h] [rbp+80h]
  __int64 v94; // [rsp+108h] [rbp+88h]
  __int128 v95; // [rsp+150h] [rbp+D0h] BYREF
  __m128i v96; // [rsp+160h] [rbp+E0h]
  __int128 v97; // [rsp+170h] [rbp+F0h]
  __int64 v98; // [rsp+180h] [rbp+100h]
  __int64 v99; // [rsp+188h] [rbp+108h]
  __int64 v100; // [rsp+190h] [rbp+110h]
  _QWORD *v101; // [rsp+198h] [rbp+118h] BYREF
  __int128 v102; // [rsp+1A0h] [rbp+120h]
  __m128i v103; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v104; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v105; // [rsp+1D0h] [rbp+150h] BYREF
  _QWORD *v106; // [rsp+1E0h] [rbp+160h]
  __int64 v107; // [rsp+1E8h] [rbp+168h]
  __int64 v108; // [rsp+1F0h] [rbp+170h]
  char *v109; // [rsp+1F8h] [rbp+178h]
  __int64 v110; // [rsp+200h] [rbp+180h]
  _QWORD *v111; // [rsp+208h] [rbp+188h]
  __int64 v112; // [rsp+210h] [rbp+190h]
  __int64 v113; // [rsp+218h] [rbp+198h]
  _QWORD *v114; // [rsp+220h] [rbp+1A0h]
  __int64 v115; // [rsp+228h] [rbp+1A8h]

  v115 = -2;
  sub_141473FA0((unsigned int)&v80, a2, a3, (unsigned int)aCodexRouterCat_0, 25);
  v4 = v81;
  v5 = v82;
  sub_14148D130(&v95, v81, v82);
  if ( (_QWORD)v95 == -1 )
  {
    *(_QWORD *)&v90[0] = *((_QWORD *)&v95 + 1);
    v88.m128i_i64[0] = v4;
    v88.m128i_i64[1] = v5;
    *(_QWORD *)&v91 = &v88;
    *((_QWORD *)&v91 + 1) = sub_14148F3A0;
    v92.m128i_i64[0] = (__int64)v90;
    v92.m128i_i64[1] = (__int64)sub_141490720;
    sub_14149C0F0(&v103, &unk_141757DF9, &v91);
    v17 = v103;
    v18 = v104.m128i_i64[0];
    result = sub_140018650(v90);
    *(__m128i *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 32) = v18;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)a1 = -2;
    goto LABEL_75;
  }
  v102 = v95;
  v91 = __PAIR128__(v96.m128i_u64[0], *((unsigned __int64 *)&v95 + 1));
  v92 = 0;
  v93 = *((_QWORD *)&v95 + 1);
  v94 = v96.m128i_i64[0];
  sub_1408A6200(&v103, &v91);
  if ( v103.m128i_i8[0] != -1 )
  {
    v90[0] = _mm_loadu_si128(&v103);
    v90[1] = v104;
    v8 = sub_141470CD0(v7, v6);
    v9 = v8;
    if ( *(_BYTE *)(v8 + 16) == 1 )
    {
      v10 = *(_OWORD *)v8;
    }
    else
    {
      *(_QWORD *)&v10 = sub_141486EF0();
      *(_OWORD *)v9 = v10;
      *(_BYTE *)(v9 + 16) = 1;
    }
    *(_QWORD *)v9 = v10 + 1;
    v11 = _mm_loadu_si128((const __m128i *)&xmmword_141757120);
    v96 = v11;
    v95 = *(_OWORD *)&off_141757110;
    v97 = v10;
    v12 = sub_141470CD0(v10 + 1, *((_QWORD *)&v10 + 1));
    v13 = v12;
    if ( *(_BYTE *)(v12 + 16) == 1 )
    {
      v14 = *(_OWORD *)v12;
    }
    else
    {
      *(_QWORD *)&v14 = sub_141486EF0();
      *(_OWORD *)v13 = v14;
      *(_BYTE *)(v13 + 16) = 1;
    }
    *(_QWORD *)v13 = v14 + 1;
    v104 = v11;
    v103 = *(__m128i *)&off_141757110;
    v105 = v14;
    v113 = -1;
    v15 = (_BYTE *)sub_141433D50(aModels_0, 6, v90);
    if ( v15 )
    {
      v16 = nullptr;
      if ( *v15 == 4 )
        v16 = v15 + 8;
    }
    else
    {
      v16 = nullptr;
    }
    v23 = -1;
    v24 = 0;
    while ( 1 )
    {
      do
      {
LABEL_18:
        if ( !v24 || v24 == v13 )
        {
          if ( !v16 || (v25 = *((_QWORD *)v16 + 2)) == 0 )
          {
            v71 = v95;
            v72 = v96;
            *(_OWORD *)(a1 + 56) = v97;
            *(__m128i *)(a1 + 40) = v72;
            *(_OWORD *)(a1 + 24) = v71;
            v73 = v104;
            v74 = v105;
            *(__m128i *)(a1 + 72) = _mm_load_si128(&v103);
            *(__m128i *)(a1 + 88) = v73;
            *(_OWORD *)(a1 + 104) = v74;
            *(_QWORD *)a1 = v23;
            *(_QWORD *)(a1 + 8) = v114;
            *(_QWORD *)(a1 + 16) = v100;
            result = sub_1400104F0(v90);
            v75 = v102;
            if ( (_QWORD)v102 )
              goto LABEL_74;
            goto LABEL_75;
          }
          v24 = *((_QWORD *)v16 + 1);
          v13 = v24 + 32 * v25;
          v16 = nullptr;
        }
        v111 = v114;
        v113 = v23;
        v26 = sub_141433D50(&unk_14175C14A, 4, v24);
        v24 += 32;
      }
      while ( !v26 || *(_BYTE *)v26 != 3 );
      v98 = v13;
      v28 = *(_QWORD *)(v26 + 24);
      if ( v28 < 0 )
        break;
      v106 = *(_QWORD **)(v26 + 16);
      if ( v28 )
      {
        v29 = v16;
        v30 = a1;
        v31 = v4;
        v32 = v23;
        nullsub_1(v27);
        v33 = 1;
        v34 = sub_140001650(v28, 1);
        if ( !v34 )
        {
          v99 = v28;
LABEL_72:
          v111 = v114;
          v113 = v32;
          sub_1416C2D4B(v33, v99);
        }
        v35 = v34;
        sub_141684120(v34, v106, v28);
        v36 = v35;
        v23 = v32;
        v4 = v31;
        a1 = v30;
        v16 = v29;
      }
      else
      {
        v36 = 1;
      }
      *(_QWORD *)&v91 = v28;
      v99 = v36;
      *((_QWORD *)&v91 + 1) = v36;
      v112 = v28;
      v92.m128i_i64[0] = v28;
      v111 = v114;
      v113 = v23;
      sub_140474440(&v95, &v91);
      v13 = v98;
      v111 = v114;
      v113 = v23;
      sub_1414A2990((unsigned int)&v91, (_DWORD)v106, v112, (unsigned int)&unk_14175C14E, 2);
      v111 = v114;
      v113 = v23;
      sub_1404E2200(&v88, &v91);
      if ( v88.m128i_i32[0] == 1
        && v88.m128i_i64[1] >= 0xDuLL
        && !(*v106 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v106 + 5) ^ 0x5F79616C65725F69LL) )
      {
        v110 = v89.m128i_i64[0];
        v109 = (char *)v106 + v89.m128i_i64[0];
        v107 = v112 - v89.m128i_i64[0];
        sub_14033BC10((char *)v106 + v89.m128i_i64[0], v112 - v89.m128i_i64[0]);
        if ( v37 )
        {
          v38 = v112;
          v39 = v100;
          if ( v23 == -1 )
            v39 = v112;
          v40 = 1;
          if ( v23 != -1 )
            v40 = (__int64)v114;
          v108 = v40;
          LOBYTE(v40) = v23 == -1;
          if ( v23 == -1 )
            v23 = 0;
          if ( ((v112 != 0) & (unsigned __int8)v40) != 0 )
          {
            nullsub_1(v40);
            v41 = sub_140001650(v38, 1);
            if ( !v41 )
            {
              v111 = v114;
              v113 = -1;
              sub_1416C2D4B(1, v38);
            }
            v108 = v41;
            sub_141684120(v41, v106, v38);
            v39 = v38;
            v23 = v38;
          }
          v42 = 1;
          v21 = v38 == v110;
          v43 = v107;
          if ( !v21 )
          {
            nullsub_1(v40);
            v44 = sub_140001650(v43, 1);
            if ( !v44 )
            {
              v111 = (_QWORD *)v108;
              v113 = v23;
              sub_1416C2D4B(1, v43);
            }
            v114 = (_QWORD *)v44;
            sub_141684120(v44, v109, v43);
            v42 = (__int64)v114;
          }
          v100 = v39;
          v109 = (char *)v23;
          *(_QWORD *)&v91 = v43;
          v114 = (_QWORD *)v42;
          *((_QWORD *)&v91 + 1) = v42;
          v92.m128i_i64[0] = v43;
          v45 = sub_140378810(&v105, &v91);
          v13 = v98;
          _R8 = v103.m128i_i64[1];
          v48 = v103.m128i_i64[0];
          v83 = v45 >> 57;
          v49 = _mm_cvtsi32_si128(v45 >> 57);
          v50 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v49, v49), 0), 68);
          v51 = 0;
          v84 = v45;
          v52 = v45;
          while ( 1 )
          {
            v53 = _R8 & v52;
            v54 = _mm_loadu_si128((const __m128i *)(v48 + v53));
            _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v54, v50));
            if ( (_DWORD)_RAX )
              break;
LABEL_52:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v54, (__m128i)-1LL)) )
            {
              if ( !v104.m128i_i64[0] )
              {
                LOBYTE(v46) = 1;
                sub_1416B8700(&v103, 1, &v105, v46);
              }
              v57 = v112;
              if ( v112 )
              {
                nullsub_1(v51);
                v58 = sub_140001650(v57, 1);
                if ( !v58 )
                  sub_1416C2D4B(1, v57);
                v110 = v58;
                sub_141684120(v58, v106, v57);
              }
              else
              {
                v110 = 1;
              }
              v59 = v103.m128i_i64[0];
              v60 = v103.m128i_i64[1] & v84;
              _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v103.m128i_i64[0] + (v103.m128i_i64[1] & v84))));
              v23 = (__int64)v109;
              if ( _EDX )
              {
                v62 = v112;
                v63 = v110;
              }
              else
              {
                _R8 = 16;
                v62 = v112;
                v63 = v110;
                do
                {
                  v60 = v103.m128i_i64[1] & (_R8 + v60);
                  _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v103.m128i_i64[0] + v60)));
                  _R8 += 16;
                }
                while ( !_EDX );
              }
              __asm { tzcnt   r8d, edx }
              _R8 = v103.m128i_i64[1] & (v60 + _R8);
              v65 = *(_BYTE *)(v103.m128i_i64[0] + _R8);
              if ( v65 >= 0 )
              {
                _EDX = _mm_movemask_epi8(_mm_load_si128((const __m128i *)v103.m128i_i64[0]));
                __asm { tzcnt   r8d, edx }
                v65 = *(_BYTE *)(v103.m128i_i64[0] + _R8);
              }
              v66 = v103.m128i_i64[1] & (_R8 - 16);
              v67 = v83;
              *(_BYTE *)(v103.m128i_i64[0] + _R8) = v83;
              *(_BYTE *)(v59 + v66 + 16) = v67;
              v68 = -48 * _R8;
              v69 = v107;
              *(_QWORD *)(v59 + v68 - 48) = v107;
              *(_QWORD *)(v59 + v68 - 40) = v114;
              *(_QWORD *)(v59 + v68 - 32) = v69;
              *(_QWORD *)(v59 + v68 - 24) = v62;
              *(_QWORD *)(v59 + v68 - 16) = v63;
              *(_QWORD *)(v59 + v68 - 8) = v62;
              v104 = _mm_sub_epi64(
                       _mm_load_si128(&v104),
                       (__m128i)_mm_shuffle_ps((__m128)_mm_cvtsi32_si128(v65 & 1), (__m128)xmmword_141748CD0, 228));
              v114 = (_QWORD *)v108;
              goto LABEL_18;
            }
            v52 = v51 + v53 + 16;
            v51 += 16;
          }
          v86 = _R8;
          v87 = v51;
          while ( 1 )
          {
            v85 = _RAX;
            __asm { tzcnt   eax, eax }
            v56 = -48 * (_R8 & (v53 + _RAX));
            if ( *(_QWORD *)(v48 + v56 - 32) == v107
              && !(unsigned int)sub_1416847B0(*(_QWORD *)(v48 + v56 - 40), v114, v107) )
            {
              break;
            }
            _RAX = (unsigned int)(v85 - 1);
            LOWORD(_RAX) = v85 & (v85 - 1);
            _R8 = v86;
            v51 = v87;
            if ( !(_WORD)_RAX )
              goto LABEL_52;
          }
          if ( v112 != v110 )
            sub_140001660(v114, v107, 1);
          v114 = (_QWORD *)v108;
          v23 = (__int64)v109;
        }
      }
    }
    v32 = v23;
    v33 = 0;
    goto LABEL_72;
  }
  v101 = (_QWORD *)v103.m128i_i64[1];
  v79[0] = v4;
  v79[1] = v5;
  *(_QWORD *)&v91 = v79;
  *((_QWORD *)&v91 + 1) = sub_14148F3A0;
  v92.m128i_i64[0] = (__int64)&v101;
  v92.m128i_i64[1] = (__int64)sub_14142D3F0;
  sub_14149C0F0(&v77, &unk_141757E14, &v91);
  v92.m128i_i64[0] = v78;
  v91 = (unsigned __int128)_mm_loadu_si128(&v77);
  v20 = *v101;
  v21 = *v101 == 1;
  v114 = v101;
  if ( v21 )
  {
    sub_140018650(v101 + 1);
  }
  else if ( !v20 )
  {
    v22 = v114[2];
    if ( v22 )
      sub_140001660(v114[1], v22, 1);
  }
  result = sub_140001660(v114, 40, 8);
  si128 = _mm_load_si128((const __m128i *)&v91);
  v96 = v92;
  v89 = v92;
  v88 = si128;
  *(__m128i *)(a1 + 32) = v92;
  *(__m128i *)(a1 + 16) = si128;
  *(_QWORD *)(a1 + 8) = 10;
  *(_QWORD *)a1 = -2;
  v75 = v102;
  if ( (_QWORD)v102 )
LABEL_74:
    result = sub_140001660(*((_QWORD *)&v102 + 1), v75, 1);
LABEL_75:
  if ( v80 )
    return sub_140001660(v4, v80, 1);
  return result;
}