// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14078ec40
// name: sub_14078EC40
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14078EC40(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  bool v17; // zf
  __int128 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r15
  __m128i *v22; // rdi
  __m128i *v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r13
  __m128i *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r14
  char v32; // al
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // r14
  __m128i *v36; // rbx
  __m128i *v37; // rsi
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rcx
  _QWORD *v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rbx
  const __m128i *v53; // r14
  __m128i si128; // xmm0
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int64 v61; // rsi
  _QWORD *v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rbx
  const __m128i *v67; // r14
  __m128i v69; // xmm0
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rsi
  __m128i v75; // [rsp+30h] [rbp-50h] BYREF
  __int64 v76; // [rsp+40h] [rbp-40h]
  unsigned __int64 v77; // [rsp+48h] [rbp-38h] BYREF
  __m128i v78; // [rsp+50h] [rbp-30h] BYREF
  __int128 v79; // [rsp+60h] [rbp-20h]
  __int128 v80; // [rsp+70h] [rbp-10h]
  __int128 v81; // [rsp+80h] [rbp+0h]
  __int128 v82; // [rsp+90h] [rbp+10h]
  __int128 v83; // [rsp+A0h] [rbp+20h]
  __int64 v84; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v85; // [rsp+C0h] [rbp+40h]
  __int64 v86; // [rsp+C8h] [rbp+48h]
  __m128i v87; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v88; // [rsp+E0h] [rbp+60h]
  __m128i v89; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v90; // [rsp+100h] [rbp+80h]
  __int128 v91; // [rsp+110h] [rbp+90h]
  __int128 v92; // [rsp+120h] [rbp+A0h]
  __int128 v93; // [rsp+130h] [rbp+B0h]
  __int128 v94; // [rsp+140h] [rbp+C0h]
  __m128i v95; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v96; // [rsp+160h] [rbp+E0h]
  __int64 v97; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v98; // [rsp+170h] [rbp+F0h]
  unsigned __int64 v99; // [rsp+178h] [rbp+F8h]
  __m128i v100; // [rsp+180h] [rbp+100h] BYREF
  __int64 v101; // [rsp+190h] [rbp+110h]
  __int64 v102; // [rsp+198h] [rbp+118h]
  __int64 v103; // [rsp+1A0h] [rbp+120h]
  __m128i v104; // [rsp+1A8h] [rbp+128h]
  char v105; // [rsp+1BEh] [rbp+13Eh] BYREF
  char v106; // [rsp+1BFh] [rbp+13Fh]
  __int64 v107; // [rsp+1C0h] [rbp+140h]

  v107 = -2;
  sub_140712830(&v89);
  if ( (_QWORD)v90 )
  {
    v2 = v89.m128i_i64[1];
    v3 = 32 * v90;
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(v2 + v4);
      if ( v5 )
        sub_140001660(*(_QWORD *)(v2 + v4 + 8), v5, 1);
      v4 += 32;
    }
    while ( v3 != v4 );
    if ( v89.m128i_i64[0] )
      sub_140001660(v2, 32 * v89.m128i_i64[0], 8);
    collect_diagnostic_main_threads((__int64)&v78);
    if ( v78.m128i_i32[0] == -1 )
    {
      v88 = *((_QWORD *)&v79 + 1);
      v87 = _mm_loadu_si128((const __m128i *)&v78.m128i_u64[1]);
      v15 = sub_141470CD0(v7, v6);
      v16 = v15;
      v17 = *(_BYTE *)(v15 + 16) == 1;
      v85 = a1;
      if ( v17 )
      {
        v18 = *(_OWORD *)v15;
      }
      else
      {
        *(_QWORD *)&v18 = sub_141486EF0();
        *(_OWORD *)v16 = v18;
        *(_BYTE *)(v16 + 16) = 1;
      }
      v19 = v18 + 1;
      *(_QWORD *)v16 = v18 + 1;
      v79 = *(&off_141786750 + 1);
      v78 = _mm_loadu_si128((const __m128i *)&off_141786750);
      v80 = v18;
      v97 = 0;
      v98 = 8;
      v99 = 0;
      v84 = 0;
      v20 = v87.m128i_i64[1];
      v21 = v87.m128i_i64[1] + 112 * v88;
      v22 = &v78;
      v23 = &v89;
      v104.m128i_i64[0] = 0;
      v103 = v87.m128i_i64[1];
      while ( v20 != v21 )
      {
        v24 = v20;
        v20 += 112;
        if ( *(_QWORD *)(v24 + 80) != -1 )
        {
          v25 = *(_QWORD *)(v24 + 96);
          if ( v25 < 0 )
          {
            v29 = 0;
LABEL_41:
            v106 = 1;
            sub_1416C2D4B(v29, v25);
          }
          if ( v25 )
          {
            v26 = v22;
            v27 = v21;
            v28 = *(_QWORD *)(v24 + 88);
            nullsub_1(v19);
            v29 = 1;
            v30 = sub_140001650(v25, 1);
            if ( !v30 )
              goto LABEL_41;
            v31 = v30;
            sub_141684120(v30, v28, v25);
            v21 = v27;
            v22 = v26;
            v23 = &v89;
            v20 = v24 + 112;
          }
          else
          {
            v31 = 1;
          }
          v32 = *(_BYTE *)(v24 + 104);
          v89.m128i_i64[0] = v25;
          v89.m128i_i64[1] = v31;
          *(_QWORD *)&v90 = v25;
          BYTE8(v90) = v32;
          v106 = 1;
          if ( !(unsigned __int8)sub_140474DC0(v22, v23) )
          {
            v33 = *(_QWORD *)(v24 + 88);
            v34 = *(_QWORD *)(v24 + 96);
            v106 = 1;
            sub_141486710(v23, v33, v34);
            if ( v89.m128i_i32[0] == 2 )
            {
              v106 = 1;
              sub_1401DD260(v89.m128i_i64[1]);
            }
            else
            {
              v84 = ++v104.m128i_i64[0];
              v106 = 1;
              find_first_session_meta_line(v23, v33, v34);
              if ( v89.m128i_i32[0] == -1 )
              {
                if ( v89.m128i_i64[1] != -1 )
                {
                  v104.m128i_i64[1] = v89.m128i_i64[1];
                  v102 = v90;
                  if ( sub_14078EA80(v90, *((__int64 *)&v90 + 1)) )
                  {
                    sub_14149C500(&v100, v24 + 32);
                    v35 = v20;
                    v36 = v23;
                    v37 = v22;
                    v38 = v99;
                    if ( v99 == v97 )
                      sub_141689AB0(&v97);
                    v39 = v98;
                    v19 = 3 * v38;
                    *(_QWORD *)(v98 + 8 * v19 + 16) = v101;
                    *(__m128i *)(v39 + 8 * v19) = _mm_loadu_si128(&v100);
                    v99 = v38 + 1;
                    v22 = v37;
                    v23 = v36;
                    v20 = v35;
                  }
                  if ( v104.m128i_i64[1] )
                    sub_140001660(v102, v104.m128i_i64[1], 1);
                }
              }
              else
              {
                v106 = 1;
                sub_1406CDA20(v23);
              }
            }
          }
        }
      }
      if ( v99 )
      {
        if ( v99 != 1 )
        {
          v106 = 1;
          if ( v99 >= 0x15 )
            sub_141346500(v98, v99, (__int64)&v105);
          else
            sub_140555D00((_QWORD *)v98, v99, 1);
        }
        v106 = 1;
        sub_1402AD260((__int64)&v97);
        v77 = v99;
        v89.m128i_i64[0] = v98;
        v89.m128i_i64[1] = v98;
        *(_QWORD *)&v90 = v97;
        *((_QWORD *)&v90 + 1) = v98 + 24 * v99;
        *(_QWORD *)&v91 = 5;
        v106 = 0;
        sub_1402CB680(&v100, v89.m128i_i64);
        v40 = v100.m128i_i64[1];
        v41 = v101;
        sub_140440300((unsigned int)&v89, v100.m128i_i32[2], v101, (unsigned int)&unk_141789BA4, 3);
        v96 = v90;
        v95 = _mm_loadu_si128(&v89);
        if ( v41 )
        {
          v43 = (_QWORD *)(v40 + 8);
          do
          {
            v44 = *(v43 - 1);
            if ( v44 )
              sub_140001660(*v43, v44, 1);
            v43 += 3;
            --v41;
          }
          while ( v41 );
        }
        if ( v100.m128i_i64[0] )
          sub_140001660(v40, 24 * v100.m128i_i64[0], 8);
        nullsub_1(v42);
        v45 = sub_140001650(28, 1);
        v47 = v85;
        if ( !v45 )
          sub_1416C2D4B(1, 28);
        *(_OWORD *)(v45 + 12) = *(__int128 *)((char *)&xmmword_14178D8E7 + 12);
        v104.m128i_i64[0] = v45;
        *(__m128i *)v45 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8E7);
        nullsub_1(v46);
        v48 = sub_140001650(5, 1);
        if ( !v48 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v48 + 4) = 114;
        v104.m128i_i64[1] = v48;
        *(_DWORD *)v48 = 1869771365;
        v100.m128i_i64[0] = (__int64)&v77;
        v100.m128i_i64[1] = (__int64)sub_1414AC520;
        sub_14149C0F0(&v89, &unk_14178F5D9, &v100);
        v86 = v89.m128i_i64[1];
        v102 = v89.m128i_i64[0];
        v49 = v90;
        v89.m128i_i64[0] = (__int64)&v95;
        v89.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&v75, &unk_14178F60D, &v89);
        *(_QWORD *)(v47 + 88) = v76;
        *(__m128i *)(v47 + 72) = _mm_loadu_si128(&v75);
        *(_QWORD *)v47 = 28;
        *(_QWORD *)(v47 + 8) = v104.m128i_i64[0];
        *(_QWORD *)(v47 + 16) = 28;
        *(_QWORD *)(v47 + 24) = 5;
        *(_QWORD *)(v47 + 32) = v104.m128i_i64[1];
        *(_QWORD *)(v47 + 40) = 5;
        *(_QWORD *)(v47 + 48) = v102;
        *(_QWORD *)(v47 + 56) = v86;
        *(_QWORD *)(v47 + 64) = v49;
        *(_BYTE *)(v47 + 96) = 1;
        if ( v95.m128i_i64[0] )
          sub_140001660(v95.m128i_i64[1], v95.m128i_i64[0], 1);
        v50 = v78.m128i_i64[1];
        if ( v78.m128i_i64[1] )
        {
          v51 = *((_QWORD *)&v79 + 1);
          if ( *((_QWORD *)&v79 + 1) )
          {
            v52 = v78.m128i_i64[0];
            v53 = (const __m128i *)(v78.m128i_i64[0] + 16);
            _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v78.m128i_i64[0]));
            do
            {
              if ( !(_WORD)_R15D )
              {
                do
                {
                  si128 = _mm_load_si128(v53);
                  v52 -= 512;
                  ++v53;
                  _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                }
                while ( !_R15D );
              }
              __asm { tzcnt   ecx, r15d }
              v57 = v52 - (unsigned int)(32 * _ECX);
              v58 = *(_QWORD *)(v57 - 32);
              if ( v58 )
                sub_140001660(*(_QWORD *)(v57 - 24), v58, 1);
              --v51;
              _R15D &= _R15D - 1;
            }
            while ( v51 );
          }
          v59 = 32 * v50;
          v60 = 33 * v50 + 49;
          if ( v60 )
            sub_140001660(v78.m128i_i64[0] - v59 - 32, v60, 16);
        }
        sub_140335260((__int64)&v87);
      }
      else
      {
        v100.m128i_i64[0] = (__int64)&v84;
        v100.m128i_i64[1] = (__int64)sub_1414AC520;
        v106 = 1;
        sub_14149C0F0(&v89, &unk_14178F5A9, &v100);
        v104 = v89;
        sub_140797030(v85, (unsigned int)&xmmword_14178D8E7, 28, v89.m128i_i32[2], v90);
        if ( v104.m128i_i64[0] )
          sub_140001660(v104.m128i_i64[1], v104.m128i_i64[0], 1);
        v61 = v99;
        if ( v99 )
        {
          v62 = (_QWORD *)(v98 + 8);
          do
          {
            v63 = *(v62 - 1);
            if ( v63 )
              sub_140001660(*v62, v63, 1);
            v62 += 3;
            --v61;
          }
          while ( v61 );
        }
        if ( v97 )
          sub_140001660(v98, 24 * v97, 8);
        v64 = v78.m128i_i64[1];
        if ( v78.m128i_i64[1] )
        {
          v65 = *((_QWORD *)&v79 + 1);
          if ( *((_QWORD *)&v79 + 1) )
          {
            v66 = v78.m128i_i64[0];
            v67 = (const __m128i *)(v78.m128i_i64[0] + 16);
            _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v78.m128i_i64[0]));
            do
            {
              if ( !(_WORD)_R15D )
              {
                do
                {
                  v69 = _mm_load_si128(v67);
                  v66 -= 512;
                  ++v67;
                  _R15D = _mm_movemask_epi8(v69) ^ 0xFFFF;
                }
                while ( !_R15D );
              }
              __asm { tzcnt   ecx, r15d }
              v71 = v66 - (unsigned int)(32 * _ECX);
              v72 = *(_QWORD *)(v71 - 32);
              if ( v72 )
                sub_140001660(*(_QWORD *)(v71 - 24), v72, 1);
              --v65;
              _R15D &= _R15D - 1;
            }
            while ( v65 );
          }
          v73 = 32 * v64;
          v74 = 33 * v64 + 49;
          if ( v74 )
            sub_140001660(v78.m128i_i64[0] - v73 - 32, v74, 16);
        }
        sub_140335260((__int64)&v87);
      }
      result = v87.m128i_i64[0];
      if ( v87.m128i_i64[0] )
        return sub_140001660(v103, 112 * v87.m128i_i64[0], 8);
    }
    else
    {
      v94 = v83;
      v93 = v82;
      v8 = _mm_loadu_si128(&v78);
      v92 = v81;
      v91 = v80;
      v90 = v79;
      v89 = v8;
      nullsub_1(v7);
      v9 = sub_140001650(28, 1);
      if ( !v9 )
        sub_1416C2D4B(1, 28);
      *(_OWORD *)(v9 + 12) = *(__int128 *)((char *)&xmmword_14178D8E7 + 12);
      v103 = v9;
      *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)&xmmword_14178D8E7);
      nullsub_1(v10);
      v11 = (_DWORD *)sub_140001650(7, 1);
      if ( !v11 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v11 + 3) = 1735289198;
      v104.m128i_i64[0] = (__int64)v11;
      *v11 = 1852989815;
      nullsub_1(v12);
      v13 = sub_140001650(30, 1);
      if ( !v13 )
        sub_1416C2D4B(1, 30);
      *(_OWORD *)(v13 + 14) = *(__int128 *)((char *)&xmmword_14178F740 + 14);
      v104.m128i_i64[1] = v13;
      *(__m128i *)v13 = _mm_loadu_si128((const __m128i *)&xmmword_14178F740);
      v95.m128i_i64[0] = 0;
      v95.m128i_i64[1] = 1;
      v96 = 0;
      v101 = 1610612768;
      v100.m128i_i64[0] = (__int64)&v95;
      v100.m128i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v89, &v100) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v105,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      *(_QWORD *)(a1 + 88) = v96;
      *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v95);
      *(_QWORD *)a1 = 28;
      *(_QWORD *)(a1 + 8) = v103;
      *(_QWORD *)(a1 + 16) = 28;
      *(_QWORD *)(a1 + 24) = 7;
      *(_QWORD *)(a1 + 32) = v104.m128i_i64[0];
      *(_QWORD *)(a1 + 40) = 7;
      *(_QWORD *)(a1 + 48) = 30;
      *(_QWORD *)(a1 + 56) = v104.m128i_i64[1];
      *(_QWORD *)(a1 + 64) = 30;
      *(_BYTE *)(a1 + 96) = 0;
      return sub_1406CDA20(&v78);
    }
  }
  else
  {
    if ( v89.m128i_i64[0] )
      sub_140001660(v89.m128i_i64[1], 32 * v89.m128i_i64[0], 8);
    return sub_140797030(a1, (unsigned int)&xmmword_14178D8E7, 28, (unsigned int)&unk_14178F570, 57);
  }
  return result;
}