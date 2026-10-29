// win 1.2.7 | module src/core/sessions.rs | ea 0x140c48060 | name sub_140C48060
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C48060(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // r13
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm0
  unsigned __int64 j; // rcx
  unsigned __int64 v29; // r14
  const __m128i *v30; // rbx
  __int128 v31; // kr00_16
  _QWORD *v32; // rdx
  __int64 v34; // rsi
  _QWORD *v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  _QWORD *v38; // rcx
  _QWORD *v39; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rbx
  const __m128i *v44; // r14
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rdx
  __m128i v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rbx
  const __m128i *v55; // r14
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // rsi
  _QWORD *v67; // rcx
  _QWORD *v68; // rsi
  __int64 i; // r15
  __int64 v71; // [rsp+20h] [rbp-60h]
  _BYTE v72[24]; // [rsp+38h] [rbp-48h] BYREF
  __m128i v73; // [rsp+50h] [rbp-30h] BYREF
  __int128 v74; // [rsp+60h] [rbp-20h]
  __int128 v75; // [rsp+70h] [rbp-10h]
  __int128 v76; // [rsp+80h] [rbp+0h]
  __int128 v77; // [rsp+90h] [rbp+10h]
  __m128i v78[17]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v79; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v80; // [rsp+1B8h] [rbp+138h]
  __int128 v81; // [rsp+1C8h] [rbp+148h]
  __int128 v82; // [rsp+1D8h] [rbp+158h]
  __int128 v83; // [rsp+1E8h] [rbp+168h]
  __int128 v84; // [rsp+1F8h] [rbp+178h]
  __m128i si128; // [rsp+208h] [rbp+188h]
  __int128 v86; // [rsp+218h] [rbp+198h]
  __int128 v87; // [rsp+228h] [rbp+1A8h]
  __int128 v88; // [rsp+238h] [rbp+1B8h]
  __int128 v89; // [rsp+248h] [rbp+1C8h]
  __int64 v90; // [rsp+258h] [rbp+1D8h]
  _BYTE v91[104]; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v92; // [rsp+2C8h] [rbp+248h]
  __int128 v93; // [rsp+2D8h] [rbp+258h]
  __int128 v94; // [rsp+2E8h] [rbp+268h]
  __int128 v95; // [rsp+2F8h] [rbp+278h]
  __int64 v96; // [rsp+308h] [rbp+288h]
  __int64 v97; // [rsp+3C0h] [rbp+340h]
  _QWORD *v98; // [rsp+3C8h] [rbp+348h]
  __int64 v99; // [rsp+3D0h] [rbp+350h]
  __int64 v100; // [rsp+3D8h] [rbp+358h]
  __int64 v101; // [rsp+3E0h] [rbp+360h] BYREF
  int v102; // [rsp+3E8h] [rbp+368h]
  unsigned __int64 v103; // [rsp+3F0h] [rbp+370h]
  __int64 v104; // [rsp+3F8h] [rbp+378h]
  __int64 v105; // [rsp+400h] [rbp+380h]
  _QWORD *v106; // [rsp+408h] [rbp+388h]
  __m128i v107; // [rsp+410h] [rbp+390h] BYREF
  __int128 v108; // [rsp+420h] [rbp+3A0h]
  __int64 v109; // [rsp+430h] [rbp+3B0h]
  __int64 v110; // [rsp+438h] [rbp+3B8h]
  __int64 v111; // [rsp+440h] [rbp+3C0h] BYREF
  const __m128i *v112; // [rsp+448h] [rbp+3C8h]
  __int64 v113; // [rsp+450h] [rbp+3D0h]
  __int64 v114; // [rsp+458h] [rbp+3D8h]
  int v115; // [rsp+464h] [rbp+3E4h]
  __int64 v116; // [rsp+468h] [rbp+3E8h]
  __int64 v117; // [rsp+470h] [rbp+3F0h]
  __int64 v118; // [rsp+478h] [rbp+3F8h]
  __m128i v119; // [rsp+480h] [rbp+400h] BYREF
  unsigned __int64 v120; // [rsp+490h] [rbp+410h]
  __int64 v121; // [rsp+4A0h] [rbp+420h]
  char v122; // [rsp+4AFh] [rbp+42Fh]
  __int64 v123; // [rsp+4B0h] [rbp+430h]

  v123 = -2;
  sub_140C1C870((__int64)v91, a2);
  v73 = *(__m128i *)&v91[8];
  v74 = *(_OWORD *)&v91[24];
  v75 = *(_OWORD *)&v91[40];
  v76 = *(_OWORD *)&v91[56];
  v77 = *(_OWORD *)&v91[72];
  v78[0] = *(__m128i *)&v91[88];
  if ( *(_QWORD *)v91 == 2 )
  {
    *(__m128i *)(a1 + 80) = v78[0];
    *(_OWORD *)(a1 + 64) = v77;
    v6 = _mm_load_si128(&v73);
    v7 = v74;
    v8 = v75;
    *(_OWORD *)(a1 + 48) = v76;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(__m128i *)a1 = v6;
  }
  else
  {
    v90 = v96;
    v89 = v95;
    v88 = v94;
    v87 = v93;
    v86 = v92;
    v80 = v73;
    v81 = v74;
    v82 = v75;
    v83 = v76;
    v84 = v77;
    si128 = _mm_load_si128(v78);
    v79 = *(_QWORD *)v91;
    v9 = sub_14167FC00(v96, v3, v4, v5);
    v11 = v10;
    v101 = v9;
    v102 = v10;
    sub_140BBAA20(v91, (__int64)&v101, (__int64)&v79, nullptr, v71, v9, v10);
    v12 = *(_QWORD *)v91;
    v73 = *(__m128i *)&v91[8];
    *(_QWORD *)&v74 = *(_QWORD *)&v91[24];
    if ( *(_QWORD *)v91 == -1 )
    {
      v119 = _mm_load_si128(&v73);
      v16 = v74;
      v120 = v74;
      v17 = v119.m128i_i64[1];
      v18 = sub_14167F170(*(_QWORD *)&v91[24]);
      v23 = v18;
      v24 = *(_BYTE *)(v18 + 16) == 1;
      v115 = v11;
      if ( v24 )
      {
        v25 = *(_QWORD *)v18;
        v26 = *(_QWORD *)(v23 + 8);
      }
      else
      {
        v25 = sub_141696260(v20, v19, v21, v22);
        *(_QWORD *)v23 = v25;
        *(_QWORD *)(v23 + 8) = v26;
        *(_BYTE *)(v23 + 16) = 1;
      }
      *(_QWORD *)v23 = v25 + 1;
      *(_OWORD *)&v91[16] = xmmword_141A39750;
      *(__m128i *)v91 = _mm_loadu_si128((const __m128i *)&off_141A39740);
      *(_QWORD *)&v91[32] = v25;
      *(_QWORD *)&v91[40] = v26;
      if ( v16 )
      {
        LOBYTE(v22) = 1;
        sub_141930360(v91, v16, &v91[32], v22);
        for ( i = 0; i != v16; ++i )
        {
          sub_1416AC440(&v73, v17 + 352 * i + 16);
          sub_1403AAB80(v91, &v73);
        }
      }
      v104 = v9;
      v114 = a1;
      v27 = _mm_load_si128((const __m128i *)v91);
      v109 = *(_QWORD *)&v91[32];
      v110 = *(_QWORD *)&v91[40];
      v108 = *(_OWORD *)&v91[16];
      v107 = v27;
      for ( j = 0; j < v120; j = v103 )
      {
        v29 = j;
        sub_1416AC440(&v111, v119.m128i_i64[1] + 352 * j + 16);
        v30 = v112;
        sub_140BBAA20(v91, (__int64)&v101, (__int64)&v79, v112, v113, v104, v115);
        v31 = *(_OWORD *)v91;
        v32 = *(_QWORD **)&v91[16];
        _RAX = *(_QWORD *)&v91[24];
        if ( *(_QWORD *)v91 != -1 )
        {
          v49 = _mm_loadu_si128((const __m128i *)&v91[32]);
          v50 = *(_OWORD *)&v91[48];
          v51 = *(_OWORD *)&v91[64];
          a1 = v114;
          *(_OWORD *)(v114 + 80) = *(_OWORD *)&v91[80];
          *(_OWORD *)(a1 + 64) = v51;
          *(_OWORD *)(a1 + 48) = v50;
          *(__m128i *)(a1 + 32) = v49;
          *(_OWORD *)a1 = v31;
          *(_QWORD *)(a1 + 16) = v32;
          *(_QWORD *)(a1 + 24) = _RAX;
          if ( v111 )
            HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v30, v111, 1) >> 32;
          v52 = v107.m128i_i64[1];
          if ( v107.m128i_i64[1] )
          {
            v53 = *((_QWORD *)&v108 + 1);
            if ( *((_QWORD *)&v108 + 1) )
            {
              v54 = v107.m128i_i64[0];
              v55 = (const __m128i *)(v107.m128i_i64[0] + 16);
              _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v107.m128i_i64[0]));
              do
              {
                if ( !(_WORD)_R15D )
                {
                  do
                  {
                    v57 = _mm_load_si128(v55);
                    v54 -= 384;
                    ++v55;
                    _R15D = _mm_movemask_epi8(v57) ^ 0xFFFF;
                  }
                  while ( !_R15D );
                }
                __asm { tzcnt   eax, r15d }
                v58 = -3 * _RAX;
                v59 = *(_QWORD *)(v54 + 8 * v58 - 24);
                if ( v59 )
                  sub_140001660(*(_QWORD *)(v54 + 8 * v58 - 16), v59, 1);
                --v53;
                _RAX = _R15D & (unsigned int)(_R15D - 1);
                _R15D &= _R15D - 1;
              }
              while ( v53 );
            }
            v65 = (24 * v52 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v66 = v65 + v52 + 17;
            if ( v66 )
              sub_140001660(v107.m128i_i64[0] - v65, v66, 16);
          }
          v67 = (_QWORD *)v119.m128i_i64[1];
          v118 = v120;
          v121 = 0;
          v117 = v119.m128i_i64[1];
          while ( v118 != v121 )
          {
            ++v121;
            v68 = v67 + 44;
            sub_14038AB90(v67);
            v67 = v68;
          }
          if ( v119.m128i_i64[0] )
          {
            v62 = v119.m128i_i64[1];
            v64 = 352 * v119.m128i_i64[0];
            v63 = 8;
            goto LABEL_57;
          }
          goto LABEL_58;
        }
        v103 = v29 + 1;
        v105 = 352LL * *(_QWORD *)&v91[24];
        v34 = *(_QWORD *)&v91[16] + 352LL * *(_QWORD *)&v91[24];
        v97 = *(_QWORD *)&v91[16];
        v98 = *(_QWORD **)&v91[16];
        v117 = *(_QWORD *)&v91[8];
        v99 = *(_QWORD *)&v91[8];
        v100 = v34;
        v116 = *(_QWORD *)&v91[16];
        while ( 1 )
        {
          if ( v32 == (_QWORD *)v34 )
          {
            v38 = (_QWORD *)v34;
            goto LABEL_23;
          }
          v35 = v32 + 44;
          v98 = v32 + 44;
          v36 = *v32;
          sub_1418F44E0(&v73, (const __m128i *)(v32 + 1), 0x158u);
          if ( v36 == 2 )
            break;
          *(_QWORD *)v91 = v36;
          sub_1418F44E0((__m128i *)&v91[8], &v73, 0x158u);
          v122 = 1;
          sub_1416AC440(v72, &v91[16]);
          v122 = 1;
          if ( (unsigned __int8)sub_1403AAB80(&v107, v72) )
          {
            sub_14029D3A0(v91);
          }
          else
          {
            v37 = v120;
            if ( v120 == v119.m128i_i64[0] )
              sub_14190FA40(v119.m128i_i64);
            sub_1418F44E0((__m128i *)(v119.m128i_i64[1] + 352 * v37), (const __m128i *)v91, 0x160u);
            v120 = v37 + 1;
          }
          v32 = v35;
        }
        v38 = v35;
LABEL_23:
        v118 = 0x2E8BA2E8BA2E8BA3LL * ((unsigned __int64)(v34 - (_QWORD)v38) >> 5);
        v106 = v38;
        v121 = 0;
        while ( v118 != v121 )
        {
          ++v121;
          v39 = v38 + 44;
          sub_14038AB90(v38);
          v38 = v39;
        }
        if ( v117 )
          sub_140001660(v116, 352 * v117, 8);
        if ( v111 )
          sub_140001660(v112, v111, 1);
      }
      HIDWORD(_RAX) = HIDWORD(v120);
      a1 = v114;
      *(_QWORD *)(v114 + 24) = v120;
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v119);
      *(_QWORD *)a1 = -1;
      v41 = v107.m128i_i64[1];
      if ( v107.m128i_i64[1] )
      {
        v42 = *((_QWORD *)&v108 + 1);
        if ( *((_QWORD *)&v108 + 1) )
        {
          v43 = v107.m128i_i64[0];
          v44 = (const __m128i *)(v107.m128i_i64[0] + 16);
          _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v107.m128i_i64[0]));
          do
          {
            if ( !(_WORD)_R15D )
            {
              do
              {
                v46 = _mm_load_si128(v44);
                v43 -= 384;
                ++v44;
                _R15D = _mm_movemask_epi8(v46) ^ 0xFFFF;
              }
              while ( !_R15D );
            }
            __asm { tzcnt   eax, r15d }
            v47 = -3 * _RAX;
            v48 = *(_QWORD *)(v43 + 8 * v47 - 24);
            if ( v48 )
              sub_140001660(*(_QWORD *)(v43 + 8 * v47 - 16), v48, 1);
            --v42;
            _RAX = _R15D & (unsigned int)(_R15D - 1);
            _R15D &= _R15D - 1;
          }
          while ( v42 );
        }
        v60 = (24 * v41 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
        v61 = v60 + v41 + 17;
        if ( v61 )
        {
          v62 = v107.m128i_i64[0] - v60;
          v63 = 16;
          v64 = v61;
LABEL_57:
          sub_140001660(v62, v64, v63);
        }
      }
    }
    else
    {
      v13 = *(_OWORD *)&v91[32];
      v14 = *(_OWORD *)&v91[48];
      v15 = *(_OWORD *)&v91[64];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v91[80];
      *(_OWORD *)(a1 + 64) = v15;
      *(_OWORD *)(a1 + 48) = v14;
      *(_OWORD *)(a1 + 32) = v13;
      *(_QWORD *)(a1 + 24) = v74;
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v73);
      *(_QWORD *)a1 = v12;
    }
LABEL_58:
    sub_140BAC0A0(&v79);
  }
  return a1;
}
