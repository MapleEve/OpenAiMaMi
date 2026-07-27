// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1407846c0
// name: check_config_global_validity
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::check_config_global_validity | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall check_config_global_validity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rcx
  __m128i si128; // xmm7
  __m128i v9; // xmm8
  __m128i v10; // xmm9
  __m128i v11; // xmm10
  bool v12; // r15
  bool v13; // r12
  bool v14; // al
  __int64 v15; // rdi
  __int64 *v16; // rax
  signed __int64 v17; // rdx
  char *v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rcx
  const char *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  const char *v27; // rdx
  int v28; // eax
  bool v29; // zf
  bool v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  _BYTE *v43; // rax
  unsigned __int64 v44; // rdx
  _BYTE *v45; // r13
  unsigned __int64 v46; // r12
  __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // r15
  unsigned __int128 v50; // kr00_16
  __m128i v51; // xmm0
  __m128i v52; // xmm11
  unsigned __int64 v54; // r15
  __m128i v55; // xmm12
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  __int64 v60; // rsi
  __int64 v61; // rax
  char *v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rcx
  _BYTE *v71; // rax
  unsigned __int64 v72; // rdx
  _BYTE *v73; // r12
  unsigned __int64 v74; // r13
  unsigned __int64 v75; // rax
  unsigned __int128 v77; // kr10_16
  __m128i v78; // xmm0
  __m128i v79; // xmm11
  __int64 i; // r9
  unsigned __int64 v81; // rax
  __m128i v82; // xmm12
  int v84; // eax
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 *v90; // rsi
  __int64 v91; // rcx
  __int64 result; // rax
  __int64 v93; // rsi
  _QWORD *v94; // rdi
  __int64 v95; // rdx
  unsigned __int128 v96; // [rsp+28h] [rbp-58h] BYREF
  __int64 v97; // [rsp+40h] [rbp-40h]
  char v98[16]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int128 v99; // [rsp+58h] [rbp-28h] BYREF
  __int64 v100; // [rsp+70h] [rbp-10h]
  char v101[16]; // [rsp+78h] [rbp-8h] BYREF
  __m128i v102; // [rsp+88h] [rbp+8h] BYREF
  __int64 v103; // [rsp+98h] [rbp+18h]
  __m128i v104; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v105; // [rsp+B0h] [rbp+30h]
  __m128i v106; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v107; // [rsp+C8h] [rbp+48h]
  __m128i v108; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v109; // [rsp+E0h] [rbp+60h]
  __int64 v110; // [rsp+E8h] [rbp+68h]
  __m128i v111; // [rsp+F0h] [rbp+70h] BYREF
  __int64 *v112; // [rsp+100h] [rbp+80h]
  __int64 v113; // [rsp+148h] [rbp+C8h]
  __int64 *v114; // [rsp+150h] [rbp+D0h] BYREF
  __int64 (__fastcall *v115)(); // [rsp+158h] [rbp+D8h]
  _QWORD v116[5]; // [rsp+160h] [rbp+E0h] BYREF
  char v117; // [rsp+188h] [rbp+108h]
  __int16 v118; // [rsp+190h] [rbp+110h]
  __int64 v119; // [rsp+198h] [rbp+118h]
  _BYTE *v120; // [rsp+1A0h] [rbp+120h] BYREF
  unsigned __int64 v121; // [rsp+1A8h] [rbp+128h]
  __int64 v122; // [rsp+1B0h] [rbp+130h]
  __int64 v123; // [rsp+1B8h] [rbp+138h]
  __int64 v124; // [rsp+1C0h] [rbp+140h]
  __int64 v125; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v126; // [rsp+1D0h] [rbp+150h]
  __int64 v127; // [rsp+1D8h] [rbp+158h]
  unsigned __int64 v128; // [rsp+1E0h] [rbp+160h]
  __int64 v129; // [rsp+1E8h] [rbp+168h]

  v129 = -2;
  if ( !a2 )
    return sub_140797030(a1, (unsigned int)aConfigGlobalVa, 22, (unsigned int)&unk_14178E448, 42);
  v113 = a1;
  v119 = a4;
  sub_14076CAF0((__m128i *)&v99, a2, a3);
  sub_14076AFC0(&v96, a2, a3);
  v125 = 0;
  v126 = 8;
  v127 = 0;
  v114 = nullptr;
  v115 = (__int64 (__fastcall *)())a3;
  v116[0] = a2;
  v116[1] = a3;
  v116[2] = 0;
  v116[3] = a3;
  v116[4] = 0xA0000000ALL;
  v117 = 1;
  v118 = 0;
  v7 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748F40);
  v9 = _mm_cvtsi32_si128(0x6E6Fu);
  v10 = _mm_load_si128((const __m128i *)&xmmword_141748F20);
  v11 = _mm_load_si128((const __m128i *)&xmmword_141748F30);
  v12 = 0;
  v13 = 0;
  while ( (v7 & 1) == 0 )
  {
    v15 = v116[0];
    sub_1407BC790(&v111, v116);
    if ( v111.m128i_i32[0] == 1 )
    {
      v16 = v114;
      v114 = v112;
      v17 = (char *)v112 - (char *)v16;
      v18 = (char *)v16 + v15;
      if ( v112 != v16 )
        goto LABEL_13;
    }
    else
    {
      if ( HIBYTE(v118) )
        break;
      HIBYTE(v118) = 1;
      v17 = (char *)v115 - (char *)v114;
      if ( ((unsigned __int8)v118 | ((char *)v115 != (char *)v114)) != 1 )
        break;
      v18 = (char *)v114 + v116[0];
      if ( v17 )
      {
LABEL_13:
        if ( v18[v17 - 1] == 10 )
        {
          if ( v17 == 1 )
          {
            v17 = 0;
          }
          else if ( v18[v17 - 2] == 13 )
          {
            v17 -= 2LL;
          }
          else
          {
            --v17;
          }
        }
      }
    }
    v20 = sub_14033BC10(v18, v17);
    v21 = v19;
    switch ( v19 )
    {
      case 0x1EuLL:
        v22 = 30;
        v23 = v20;
        v24 = aAimamiRelayMan_2;
        goto LABEL_28;
      case 0x24uLL:
        v22 = 36;
        v23 = v20;
        v24 = aAimamiRelayMan_3;
        goto LABEL_28;
      case 0x27uLL:
        v22 = 39;
        v23 = v20;
        v24 = aAimamiRelayCod_0;
LABEL_28:
        v28 = sub_1416847B0(v23, v24, v22);
        v29 = v28 == 0;
        v14 = v28 != 0;
        if ( !v29 && !v13 )
          goto LABEL_33;
        goto LABEL_5;
      case 0x37uLL:
        v25 = 55;
        v26 = v20;
        v27 = aAimamiRelayMan_4;
        goto LABEL_32;
      case 0x3CuLL:
        v25 = 60;
        v26 = v20;
        v27 = aAimamiRelayMan_5;
        goto LABEL_32;
      case 0x40uLL:
        v25 = 64;
        v26 = v20;
        v27 = aAimamiRelayCod_1;
LABEL_32:
        v30 = (unsigned int)sub_1416847B0(v26, v27, v25) == 0 || v13;
        v14 = 1;
        if ( !v30 )
          goto LABEL_33;
        goto LABEL_5;
      default:
        v14 = 1;
        if ( v13 )
          goto LABEL_5;
        if ( v19 )
        {
LABEL_33:
          if ( *(_BYTE *)v20 == 91 )
          {
            v12 = 1;
            goto LABEL_4;
          }
          if ( v12 )
          {
LABEL_35:
            v12 = v21 != 0;
            goto LABEL_4;
          }
          if ( v21 >= 0xE )
          {
            v31 = *(_QWORD *)v20 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v20 + 6) ^ 0x72656469766F7270LL;
            if ( !v31 )
            {
              if ( v21 > 0xF )
              {
                LOBYTE(v31) = 61;
                if ( sub_1414A3EA0(v31, v20, v21) != 1 )
                  goto LABEL_38;
              }
              else
              {
                v47 = 0;
                while ( *(_BYTE *)(v20 + v47) != 61 )
                {
                  if ( v21 == ++v47 )
                    goto LABEL_38;
                }
              }
              v71 = (_BYTE *)sub_1407624C0(v20, v21);
              v73 = v71;
              if ( v71 )
              {
                v74 = v72;
                v120 = v71;
                v121 = v72;
                if ( v72 == 6 )
                {
                  if ( (*v71 | (unsigned __int8)(32 * ((unsigned __int8)(*v71 - 65) < 0x1Au))) == 111
                    && (v71[1] | (unsigned __int8)(32 * ((unsigned __int8)(v71[1] - 65) < 0x1Au))) == 112
                    && (v71[2] | (unsigned __int8)(32 * ((unsigned __int8)(v71[2] - 65) < 0x1Au))) == 101
                    && (v71[3] | (unsigned __int8)(32 * ((unsigned __int8)(v71[3] - 65) < 0x1Au))) == 110
                    && (v71[4] | (unsigned __int8)(32 * ((unsigned __int8)(v71[4] - 65) < 0x1Au))) == 97
                    && (v71[5] | (unsigned __int8)(32 * ((unsigned __int8)(v71[5] - 65) < 0x1Au))) == 105 )
                  {
                    goto LABEL_38;
                  }
                }
                else if ( !v72 )
                {
                  goto LABEL_38;
                }
                if ( v100 )
                {
                  v75 = sub_1403795A0(v101, v71, v72);
                  _RCX = v75 >> 57;
                  v77 = v99;
                  v78 = _mm_cvtsi32_si128(v75 >> 57);
                  v79 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v78, v78), 0), 68);
                  for ( i = 0; ; i += 16 )
                  {
                    v81 = *((_QWORD *)&v77 + 1) & v75;
                    v82 = _mm_loadu_si128((const __m128i *)(v77 + v81));
                    _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v82, v79));
                    if ( _R15D )
                      break;
LABEL_116:
                    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v82, (__m128i)-1LL));
                    if ( (_DWORD)_RCX )
                      goto LABEL_118;
                    v75 = i + v81 + 16;
                  }
                  v128 = v81;
                  v123 = v77 >> 64;
                  v124 = v77;
                  v110 = i;
                  while ( 1 )
                  {
                    __asm { tzcnt   ecx, r15d }
                    _RCX = 16 * (*((_QWORD *)&v77 + 1) & (v81 + _RCX));
                    if ( v74 == *(_QWORD *)(v77 - _RCX - 8)
                      && !(unsigned int)sub_1416847B0(v73, *(_QWORD *)(v77 - _RCX - 16), v74) )
                    {
                      break;
                    }
                    v84 = _R15D - 1;
                    LOWORD(v84) = _R15D & (_R15D - 1);
                    v29 = (_WORD)v84 == 0;
                    _R15D = v84;
                    v81 = v128;
                    i = v110;
                    v77 = __PAIR128__(v123, v124);
                    if ( v29 )
                      goto LABEL_116;
                  }
                }
                else
                {
LABEL_118:
                  v111.m128i_i64[0] = (__int64)&v120;
                  v111.m128i_i64[1] = (__int64)sub_14041F680;
                  sub_14149C0F0(&v108, &unk_14178E359, &v111);
                  v85 = v127;
                  if ( v127 == v125 )
                    sub_141689AB0(&v125);
                  v86 = v126;
                  v87 = 3 * v85;
                  *(_QWORD *)(v126 + 8 * v87 + 16) = v109;
                  *(__m128i *)(v86 + 8 * v87) = _mm_loadu_si128(&v108);
                  v127 = v85 + 1;
                }
              }
            }
          }
        }
        else if ( v12 )
        {
          goto LABEL_35;
        }
LABEL_38:
        if ( (unsigned __int8)sub_140764DD0(v20, v21) )
        {
          v33 = sub_1407624C0(v20, v21);
          if ( v33 )
          {
            v120 = (_BYTE *)v33;
            v121 = v34;
            if ( (unsigned __int8)sub_1407BE9C0(aCcSwitch, 9, v33, v34)
              || (unsigned __int8)sub_1407BE9C0(aCcSwitch_0, 9, v120, v121) )
            {
              v111.m128i_i64[0] = (__int64)&v120;
              v111.m128i_i64[1] = (__int64)sub_14041F680;
              sub_14149C0F0(&v106, &unk_14178E38C, &v111);
              v35 = v127;
              if ( v127 == v125 )
                sub_141689AB0(&v125);
              v36 = v126;
              v32 = 3 * v35;
              *(_QWORD *)(v126 + 8 * v32 + 16) = v107;
              *(__m128i *)(v36 + 8 * v32) = _mm_loadu_si128(&v106);
              v127 = v35 + 1;
            }
          }
        }
        if ( v21 >= 0x16
          && _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v20 + 6)), v10),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v20), v11))) == 0xFFFF )
        {
          LOBYTE(v32) = 61;
          if ( sub_1414A3EA0(v32, v20, v21) == 1 )
          {
            v37 = sub_1407624C0(v20, v21);
            if ( v37 )
            {
              v120 = (_BYTE *)v37;
              v121 = v38;
              if ( !(unsigned __int8)sub_14078D140(v37) )
              {
                v111.m128i_i64[0] = (__int64)&v120;
                v111.m128i_i64[1] = (__int64)sub_14041F680;
                sub_14149C0F0(&v104, &unk_14178E3BD, &v111);
                v39 = v127;
                if ( v127 == v125 )
                  sub_141689AB0(&v125);
                v40 = v126;
                v41 = 3 * v39;
                *(_QWORD *)(v126 + 8 * v41 + 16) = v105;
                *(__m128i *)(v40 + 8 * v41) = _mm_loadu_si128(&v104);
                v127 = v39 + 1;
              }
            }
          }
        }
        if ( !(unsigned __int8)sub_1407640D0(v20, v21) )
          goto LABEL_83;
        v43 = (_BYTE *)sub_1407624C0(v20, v21);
        v45 = v43;
        if ( !v43 )
          goto LABEL_83;
        v46 = v44;
        v120 = v43;
        v121 = v44;
        if ( v44 == 6 )
        {
          if ( (*v43 | (unsigned __int8)(32 * ((unsigned __int8)(*v43 - 65) < 0x1Au))) == 111
            && (v43[1] | (unsigned __int8)(32 * ((unsigned __int8)(v43[1] - 65) < 0x1Au))) == 112
            && (v43[2] | (unsigned __int8)(32 * ((unsigned __int8)(v43[2] - 65) < 0x1Au))) == 101
            && (v43[3] | (unsigned __int8)(32 * ((unsigned __int8)(v43[3] - 65) < 0x1Au))) == 110
            && (v43[4] | (unsigned __int8)(32 * ((unsigned __int8)(v43[4] - 65) < 0x1Au))) == 97 )
          {
            v48 = (unsigned __int8)v43[5];
            v42 = (unsigned int)(v48 - 65);
            if ( ((unsigned __int8)v48 | (unsigned __int8)(32 * ((unsigned __int8)(v48 - 65) < 0x1Au))) == 105 )
              goto LABEL_83;
          }
        }
        else if ( !v44 )
        {
          goto LABEL_83;
        }
        if ( v97 )
        {
          v49 = sub_1403795A0(v98, v45, v44);
          v50 = v96;
          v51 = _mm_cvtsi32_si128(v49 >> 57);
          v52 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v51, v51), 0), 68);
          for ( _RCX = 0; ; _RCX += 16 )
          {
            v54 = *((_QWORD *)&v50 + 1) & v49;
            v55 = _mm_loadu_si128((const __m128i *)(v50 + v54));
            _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v55, v52));
            if ( _ESI )
              break;
LABEL_76:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v55, (__m128i)-1LL)) )
              goto LABEL_78;
            v49 = _RCX + v54 + 16;
          }
          v124 = v50 >> 64;
          v128 = v50;
          v123 = _RCX;
          while ( 1 )
          {
            __asm { tzcnt   ecx, esi }
            v57 = v50 - 16 * (*((_QWORD *)&v50 + 1) & (v54 + _RCX));
            if ( v46 == *(_QWORD *)(v57 - 8) && !(unsigned int)sub_1416847B0(v45, *(_QWORD *)(v57 - 16), v46) )
              break;
            v58 = _ESI - 1;
            LOWORD(v58) = _ESI & (_ESI - 1);
            _ESI = v58;
            _RCX = v123;
            v50 = __PAIR128__(v124, v128);
            if ( !(_WORD)v58 )
              goto LABEL_76;
          }
        }
        else
        {
LABEL_78:
          if ( v46 != 6
            || (v59 = *(_DWORD *)v45 ^ 0x616D6961, (v42 = v59 | *((unsigned __int16 *)v45 + 2) ^ 0x3169u) != 0) )
          {
            v111.m128i_i64[0] = (__int64)&v120;
            v111.m128i_i64[1] = (__int64)sub_14041F680;
            sub_14149C0F0(&v102, &unk_14178E3EC, &v111);
            v60 = v127;
            if ( v127 == v125 )
              sub_141689AB0(&v125);
            v61 = v126;
            v42 = 3 * v60;
            *(_QWORD *)(v126 + 8 * v42 + 16) = v103;
            *(__m128i *)(v61 + 8 * v42) = _mm_loadu_si128(&v102);
            v127 = v60 + 1;
          }
        }
LABEL_83:
        if ( v21 < 0x12 )
          goto LABEL_97;
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v20 + 16)), v9),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v20), si128))) != 0xFFFF )
          goto LABEL_97;
        LOBYTE(v42) = 61;
        if ( sub_1414A3EA0(v42, v20, v21) != 1 )
          goto LABEL_97;
        v62 = (char *)sub_1407624C0(v20, v21);
        if ( !v62 )
          goto LABEL_97;
        sub_14077D150((__int64 *)&v120, v62, v63);
        v64 = v121;
        v65 = v122;
        if ( !v122 )
          goto LABEL_95;
        v128 = v121;
        sub_141486710(&v111, v121, v122);
        if ( v111.m128i_i32[0] != 2 )
          goto LABEL_94;
        sub_1401DD260(v111.m128i_i64[1]);
        v29 = (unsigned __int8)sub_1407607B0(v128, v65, v119, a5) == 0;
        v64 = v128;
        if ( v29 )
        {
          nullsub_1(v66);
          v67 = sub_140001650(49, 1);
          if ( !v67 )
            sub_1416C2D4B(1, 49);
          *(_OWORD *)(v67 + 32) = xmmword_14178E437;
          *(_OWORD *)(v67 + 16) = xmmword_14178E427;
          *(__m128i *)v67 = _mm_loadu_si128((const __m128i *)&xmmword_14178E417);
          v124 = v67;
          *(_BYTE *)(v67 + 48) = -124;
          v68 = v127;
          if ( v127 == v125 )
            sub_141689AB0(&v125);
          v69 = v126;
          v70 = 3 * v68;
          *(_QWORD *)(v126 + 8 * v70) = 49;
          *(_QWORD *)(v69 + 8 * v70 + 8) = v124;
          *(_QWORD *)(v69 + 8 * v70 + 16) = 49;
          v127 = v68 + 1;
LABEL_94:
          v64 = v128;
        }
LABEL_95:
        if ( v120 )
          sub_140001660(v64, v120, 1);
LABEL_97:
        v12 = 0;
LABEL_4:
        v14 = 0;
LABEL_5:
        v7 = HIBYTE(v118);
        v13 = v14;
        break;
    }
  }
  if ( v127 )
  {
    nullsub_1(v7);
    v88 = sub_140001650(22, 1);
    if ( !v88 )
      sub_1416C2D4B(1, 22);
    *(__m128i *)v88 = _mm_loadu_si128((const __m128i *)aConfigGlobalVa);
    v119 = v88;
    *(_QWORD *)(v88 + 14) = 0x79746964696C6176LL;
    nullsub_1(0x79746964696C6176LL);
    v89 = sub_140001650(5, 1);
    if ( !v89 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v89 + 4) = 114;
    v128 = v89;
    *(_DWORD *)v89 = 1869771365;
    v120 = (_BYTE *)v127;
    v114 = (__int64 *)&v120;
    v115 = sub_1414AC520;
    sub_14149C0F0(&v111, &unk_14178E332, &v114);
    v123 = v111.m128i_i64[1];
    v124 = v111.m128i_i64[0];
    v90 = v112;
    sub_140440300((unsigned int)&v111, v126, v127, (unsigned int)&unk_14178CCCE, 3);
    v91 = v113;
    *(_QWORD *)(v113 + 88) = v112;
    *(__m128i *)(v91 + 72) = _mm_loadu_si128(&v111);
    *(_QWORD *)v91 = 22;
    *(_QWORD *)(v91 + 8) = v119;
    *(_QWORD *)(v91 + 16) = 22;
    *(_QWORD *)(v91 + 24) = 5;
    *(_QWORD *)(v91 + 32) = v128;
    *(_QWORD *)(v91 + 40) = 5;
    *(_QWORD *)(v91 + 48) = v124;
    *(_QWORD *)(v91 + 56) = v123;
    *(_QWORD *)(v91 + 64) = v90;
    *(_BYTE *)(v91 + 96) = 1;
  }
  else
  {
    sub_140797030(v113, (unsigned int)aConfigGlobalVa, 22, (unsigned int)&unk_14178E31A, 24);
  }
  v93 = v127;
  if ( v127 )
  {
    v94 = (_QWORD *)(v126 + 8);
    do
    {
      v95 = *(v94 - 1);
      if ( v95 )
        sub_140001660(*v94, v95, 1);
      v94 += 3;
      --v93;
    }
    while ( v93 );
  }
  result = v125;
  if ( v125 )
    result = sub_140001660(v126, 24 * v125, 8);
  if ( *((_QWORD *)&v96 + 1) )
  {
    result = 16LL * *((_QWORD *)&v96 + 1);
    if ( 17LL * *((_QWORD *)&v96 + 1) != -33 )
      result = sub_140001660(v96 - result - 16, 17LL * *((_QWORD *)&v96 + 1) + 33, 16);
  }
  if ( *((_QWORD *)&v99 + 1) )
  {
    result = 16LL * *((_QWORD *)&v99 + 1);
    if ( 17LL * *((_QWORD *)&v99 + 1) != -33 )
      return sub_140001660(v99 - result - 16, 17LL * *((_QWORD *)&v99 + 1) + 33, 16);
  }
  return result;
}