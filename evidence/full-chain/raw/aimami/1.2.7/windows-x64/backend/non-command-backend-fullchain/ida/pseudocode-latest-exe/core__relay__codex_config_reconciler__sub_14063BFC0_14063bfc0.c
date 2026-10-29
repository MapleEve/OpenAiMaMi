// win 1.2.7 latest-exe | module src/core/relay/codex_config_reconciler.rs | ea 0x14063bfc0 | successor of pre-update 0x14017a0f0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
void __fastcall sub_14063BFC0(_QWORD *a1, __int64 a2, const __m128i *a3, __m128i *a4)
{
  __int64 v4; // rdi
  __m128i *v5; // r11
  char v8; // cl
  __int128 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r15
  const __m128i *v17; // r14
  const __m128i *v18; // r12
  __m128i si128; // xmm0
  __int64 v21; // rax
  __int128 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // r14
  __int8 v28; // si
  __int64 v29; // r10
  __m128i *v30; // rax
  __m128i v31; // xmm0
  char v32; // bl
  __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r13
  bool v37; // zf
  unsigned __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  char v45; // r8
  char v46; // r9
  char v47; // r10
  __int64 v48; // rcx
  int v49; // r9d
  int v50; // r8d
  const __m128i *v51; // r13
  __int16 v52; // ax
  __m128i *v53; // r8
  __int8 v54; // di
  __int64 v55; // r13
  __m128i *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  const __m128i *v60; // rax
  __int64 v61; // rcx
  __m128i v62; // xmm0
  __int128 v63; // xmm1
  _QWORD *v64; // rdx
  __m128i *v65; // rax
  _QWORD *v66; // rcx
  __int64 v67; // rax
  __m128i *v68; // rax
  _QWORD *v69; // rcx
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  __m128i *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r14
  const __m128i *v76; // rax
  __int128 v77; // xmm0
  __m128i v78; // xmm0
  __int128 v79; // xmm1
  __m128i v80; // xmm0
  const __m128i *v81; // rax
  __int64 v82; // rcx
  __m128i v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm2
  _QWORD *v86; // rsi
  __m128i v87; // [rsp+50h] [rbp-30h] BYREF
  __int128 v88; // [rsp+60h] [rbp-20h]
  __int128 v89; // [rsp+70h] [rbp-10h]
  __int128 v90; // [rsp+80h] [rbp+0h]
  __m128i v91; // [rsp+90h] [rbp+10h]
  __int128 v92; // [rsp+A0h] [rbp+20h] BYREF
  __m128i *v93; // [rsp+B0h] [rbp+30h]
  __int64 v94; // [rsp+B8h] [rbp+38h]
  __int64 v95; // [rsp+C0h] [rbp+40h]
  __m128i v96[3]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v97; // [rsp+F8h] [rbp+78h]
  __int64 v98; // [rsp+100h] [rbp+80h]
  __int64 v99; // [rsp+108h] [rbp+88h]
  __m128i v100; // [rsp+110h] [rbp+90h] BYREF
  __int128 v101; // [rsp+120h] [rbp+A0h]
  __int128 v102; // [rsp+130h] [rbp+B0h]
  __int64 v103; // [rsp+140h] [rbp+C0h]
  __int64 v104; // [rsp+148h] [rbp+C8h]
  __m128i v105; // [rsp+150h] [rbp+D0h]
  char v106; // [rsp+160h] [rbp+E0h]
  __int8 v107; // [rsp+161h] [rbp+E1h]
  const __m128i *v108; // [rsp+170h] [rbp+F0h]
  __int64 v109; // [rsp+178h] [rbp+F8h]
  __int128 *v110; // [rsp+180h] [rbp+100h]
  __int64 v111; // [rsp+188h] [rbp+108h]
  __m128i v112; // [rsp+190h] [rbp+110h] BYREF
  __int128 v113; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v114; // [rsp+1B0h] [rbp+130h]
  __int64 v115; // [rsp+1C0h] [rbp+140h]
  __int64 v116; // [rsp+1C8h] [rbp+148h]
  __int64 v117; // [rsp+1D0h] [rbp+150h]
  __int64 v118; // [rsp+1D8h] [rbp+158h]
  const __m128i *v119; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v120; // [rsp+1E8h] [rbp+168h] BYREF
  _BYTE v121[56]; // [rsp+1F8h] [rbp+178h] BYREF
  __int128 v122; // [rsp+230h] [rbp+1B0h]
  char v123; // [rsp+247h] [rbp+1C7h] BYREF
  _QWORD *v124; // [rsp+248h] [rbp+1C8h]
  __m128i *v125; // [rsp+250h] [rbp+1D0h]
  __m128i *v126; // [rsp+258h] [rbp+1D8h]
  char v127; // [rsp+266h] [rbp+1E6h]
  __int8 v128; // [rsp+267h] [rbp+1E7h]
  _QWORD *v129; // [rsp+268h] [rbp+1E8h]
  __int64 v130; // [rsp+270h] [rbp+1F0h]

  v130 = -2;
  v8 = a3[4].m128i_i8[0];
  v116 = a2;
  if ( v8 != 1 )
  {
    v22 = (__int128 *)a3[1].m128i_i64[0];
    v23 = a3[1].m128i_i64[1];
    v24 = a3[2].m128i_i64[0];
    v25 = a3[2].m128i_i64[1];
    v26 = a3->m128i_i64[0];
    v27 = a3->m128i_i64[1];
    v28 = a3[4].m128i_i8[1];
    v29 = -1;
    v30 = nullptr;
    goto LABEL_11;
  }
  v127 = 1;
  v129 = a1;
  v126 = a4;
  v9 = (__int128 *)a3[1].m128i_i64[0];
  v10 = a3[1].m128i_i64[1];
  v11 = a3[2].m128i_i64[0];
  v117 = a3[2].m128i_i64[1];
  v110 = v9;
  v111 = v10;
  HIDWORD(_RAX) = (unsigned __int64)sub_1409FADF0((unsigned int)&v119, (_DWORD)v9, v10, v11, v117) >> 32;
  v15 = v120.m128i_i64[0];
  v16 = *(_QWORD *)v121;
  if ( v120.m128i_i64[0] )
  {
    v118 = v11;
    if ( *(_QWORD *)v121 )
    {
      v17 = v119;
      v18 = v119 + 1;
      _ESI = ~_mm_movemask_epi8(_mm_load_si128(v119));
      v4 = *(_QWORD *)v121;
      do
      {
        if ( !(_WORD)_ESI )
        {
          do
          {
            si128 = _mm_load_si128(v18);
            v17 -= 24;
            ++v18;
            _ESI = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_ESI );
        }
        __asm { tzcnt   eax, esi }
        v21 = -3 * _RAX;
        v13 = *((_QWORD *)&v17[-1] + v21 - 1);
        if ( v13 )
          sub_140001660(v17[-1].m128i_i64[v21], v13, 1);
        --v4;
        _RAX = _ESI & (unsigned int)(_ESI - 1);
        _ESI &= _ESI - 1;
      }
      while ( v4 );
    }
    v35 = (24 * v15 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v36 = v35 + v15;
    v37 = v36 == -17;
    v38 = v36 + 17;
    v11 = v118;
    if ( !v37 )
      sub_140001660((char *)v119 - v35, v38, 16);
  }
  if ( v16 )
  {
    v26 = a3->m128i_i64[0];
    v39 = -1;
    if ( a3->m128i_i64[0] )
    {
      v40 = a3->m128i_i64[1];
      v41 = v40;
      while ( 1 )
      {
        v42 = v41;
        if ( !v41 )
          break;
        v43 = v26 + v41;
        v44 = *(char *)(v26 + v42 - 1);
        if ( v44 >= 0 )
        {
          v41 = v42 - 1;
          if ( v44 != 47 )
            break;
        }
        else
        {
          v45 = *(_BYTE *)(v43 - 2);
          if ( v45 >= -64 )
          {
            v48 = v43 - 2;
            v50 = v45 & 0x1F;
          }
          else
          {
            v46 = *(_BYTE *)(v43 - 3);
            if ( v46 >= -64 )
            {
              v48 = v43 - 3;
              v49 = v46 & 0xF;
            }
            else
            {
              v47 = *(_BYTE *)(v43 - 4);
              v48 = v43 - 4;
              v49 = ((v47 & 7) << 6) | v46 & 0x3F;
            }
            v50 = (v49 << 6) | v45 & 0x3F;
          }
          v41 = v48 - v26;
          if ( ((v50 << 6) | v44 & 0x3F) != 0x2F )
            break;
        }
      }
      v112.m128i_i64[0] = a3->m128i_i64[0];
      v112.m128i_i64[1] = v42;
      v100.m128i_i64[0] = (__int64)&v112;
      v100.m128i_i64[1] = (__int64)sub_140191200;
      sub_1416DAFA0(&v119, &unk_141A2C808, &v100);
      v51 = v119;
      v4 = v120.m128i_i64[0];
      if ( v119 != (const __m128i *)-1LL )
      {
        v109 = v120.m128i_i64[0];
        v108 = v119;
        v52 = sub_1408C9F90(v120.m128i_i64[0], v120.m128i_i64[1]);
        v53 = v126;
        v14 = v117;
        if ( v52 == 1 )
        {
          if ( v51 )
          {
            sub_140001660(v4, v51, 1);
            v14 = v117;
            v53 = v126;
          }
          v98 = v40;
          v54 = a3[4].m128i_i8[1];
          if ( v53 )
          {
            a1 = v129;
            v55 = v116;
            if ( (a3[4].m128i_i8[1] ^ 1) != v53[5].m128i_i8[8] )
            {
              nullsub_1(v14, v13);
              v56 = (__m128i *)sub_140001650(60, 1);
              if ( !v56 )
                sub_14196B2DB(1, 60);
              qmemcpy(&v56[1], "atalog mode does not match the config target", 44);
              *v56 = _mm_loadu_si128((const __m128i *)&xmmword_141A2DFA0);
              *((_QWORD *)&v92 + 1) = 60;
              v93 = v56;
              v94 = 60;
              v57 = 9;
              goto LABEL_59;
            }
            sub_140D5EDE0(&v92, v116);
          }
          else
          {
            v55 = v116;
            sub_140D67800(&v92, v116, v110);
            a1 = v129;
          }
          v57 = v92;
          if ( (_QWORD)v92 != -1 )
          {
LABEL_59:
            a1[11] = v97;
            v70 = _mm_loadu_si128(v96);
            v71 = v96[1];
            *(__m128i *)(a1 + 9) = v96[2];
            *(__m128i *)(a1 + 7) = v71;
            *(__m128i *)(a1 + 5) = v70;
            v72 = v93;
            v73 = v94;
            v74 = v95;
            a1[1] = *((_QWORD *)&v92 + 1);
            a1[2] = v72;
            a1[3] = v73;
            a1[4] = v74;
            *a1 = v57;
            return;
          }
          v75 = v94;
          v126 = v93;
          v125 = v93;
          v129 = *((_QWORD **)&v92 + 1);
          v124 = *((_QWORD **)&v92 + 1);
          sub_1408D52F0(&v119, v55);
          v76 = v119;
          v100 = v120;
          v101 = *(_OWORD *)v121;
          v102 = *(_OWORD *)&v121[16];
          v103 = *(_QWORD *)&v121[32];
          if ( v119 != (const __m128i *)-1LL )
          {
            v77 = *(_OWORD *)&v121[40];
            *((_OWORD *)a1 + 5) = v122;
            *((_OWORD *)a1 + 4) = v77;
            a1[7] = v103;
            v78 = _mm_load_si128(&v100);
            v79 = v101;
            *(_OWORD *)(a1 + 5) = v102;
            *(_OWORD *)(a1 + 3) = v79;
            *(__m128i *)(a1 + 1) = v78;
            *a1 = v76;
            goto LABEL_38;
          }
          v80 = _mm_load_si128(&v100);
          v114 = v102;
          v113 = v101;
          v112 = v80;
          v115 = v103;
          if ( (unsigned __int64)v101 | *((_QWORD *)&v102 + 1) )
          {
            sub_1408D67F0(&v119, v55);
            v81 = v119;
            v87 = v120;
            v88 = *(_OWORD *)v121;
            v89 = *(_OWORD *)&v121[16];
            v90 = *(_OWORD *)&v121[32];
            v91 = _mm_loadu_si128((const __m128i *)&v121[48]);
            if ( v119 != (const __m128i *)-1LL )
            {
              v82 = *((_QWORD *)&v122 + 1);
              *(__m128i *)(a1 + 9) = v91;
              v83 = _mm_load_si128(&v87);
              v84 = v88;
              v85 = v89;
              *(_OWORD *)(a1 + 7) = v90;
              *(_OWORD *)(a1 + 5) = v85;
              *(_OWORD *)(a1 + 3) = v84;
              *(__m128i *)(a1 + 1) = v83;
              *a1 = v81;
              a1[11] = v82;
              sub_1402346F0(&v112);
              if ( v112.m128i_i64[0] )
                sub_140001660(v112.m128i_i64[1], 24 * v112.m128i_i64[0], 8);
              sub_1402346F0((char *)&v113 + 8);
              v64 = v129;
              if ( *((_QWORD *)&v113 + 1) )
              {
                v86 = v129;
                sub_140001660(v114, 24LL * *((_QWORD *)&v113 + 1), 8);
                v64 = v86;
              }
              goto LABEL_39;
            }
            sub_1401B0D60(&v87);
          }
          sub_1402346F0(&v112);
          if ( v112.m128i_i64[0] )
            sub_140001660(v112.m128i_i64[1], 24 * v112.m128i_i64[0], 8);
          v118 = v11;
          v128 = v54;
          v99 = v75;
          sub_1402346F0((char *)&v113 + 8);
          if ( *((_QWORD *)&v113 + 1) )
            sub_140001660(v114, 24LL * *((_QWORD *)&v113 + 1), 8);
          v30 = nullptr;
          v29 = (__int64)v129;
          v5 = v126;
          if ( v129 != (_QWORD *)-1LL )
            v30 = v126;
          v8 = v127;
          v22 = v110;
          v23 = v111;
          v25 = v117;
          v27 = v98;
          v4 = v99;
          v28 = v128;
          v24 = v118;
LABEL_11:
          v31 = _mm_loadu_si128(a3 + 3);
          *(_QWORD *)&v102 = v22;
          *((_QWORD *)&v102 + 1) = v23;
          v103 = v24;
          v104 = v25;
          v100.m128i_i64[0] = v26;
          v100.m128i_i64[1] = v27;
          v32 = v8;
          v106 = v8;
          v107 = v28;
          v105 = v31;
          *(_QWORD *)&v101 = v30;
          *((_QWORD *)&v101 + 1) = v4;
          v126 = v5;
          v125 = v5;
          v129 = (_QWORD *)v29;
          v124 = (_QWORD *)v29;
          v33 = v116;
          v34 = sub_140A2C1C0(v116);
          if ( v34 )
          {
            v119 = (const __m128i *)2;
            v120.m128i_i64[0] = v34;
          }
          else
          {
            v58 = *(_QWORD *)(v33 + 72);
            v59 = *(_QWORD *)(v33 + 80);
            v125 = v126;
            v124 = v129;
            sub_140908D10((unsigned int)&v119, v58, v59, (unsigned int)&unk_141A542D8, 23, (__int64)&v100);
            if ( v119 == (const __m128i *)-1LL )
            {
              if ( !v32 )
              {
                v125 = v126;
                v124 = v129;
                v67 = sub_140D57090(v33);
                if ( v67 )
                {
                  v112.m128i_i64[0] = v67;
                  if ( *(_QWORD *)off_14223FF10 >= 2u )
                  {
                    v100.m128i_i64[0] = (__int64)&v112;
                    v100.m128i_i64[1] = (__int64)sub_1416EA080;
                    *(_QWORD *)&v121[24] = 2;
                    *(_QWORD *)&v121[32] = aCodexmateLibCo_4;
                    *(_QWORD *)&v121[40] = 51;
                    *(_QWORD *)&v122 = &unk_141A2DFDC;
                    *((_QWORD *)&v122 + 1) = &v100;
                    v119 = nullptr;
                    v120.m128i_i64[0] = (__int64)aCodexmateLibCo_4;
                    v120.m128i_i64[1] = 51;
                    *(_QWORD *)v121 = 0;
                    *(_QWORD *)&v121[8] = aSrcCoreRelayCo;
                    *(_QWORD *)&v121[16] = 41;
                    *(_QWORD *)&v121[48] = 0x7000000001LL;
                    sub_141503E20(&v123, &v119);
                    v67 = v112.m128i_i64[0];
                  }
                  if ( (unsigned int)(v67 & 3) - 2 >= 2 && (v67 & 3) != 0 )
                  {
                    v120.m128i_i64[0] = v67 - 1;
                    LOBYTE(v119) = 3;
                    v125 = v126;
                    v124 = v129;
                    sub_1416EBAD0(&v120);
                  }
                }
              }
              *a1 = -1;
              goto LABEL_38;
            }
          }
          *((_OWORD *)a1 + 5) = v122;
          *((_OWORD *)a1 + 4) = *(_OWORD *)&v121[40];
          v60 = v119;
          v61 = v120.m128i_i64[0];
          v62 = _mm_loadu_si128((const __m128i *)&v120.m128i_u64[1]);
          v63 = *(_OWORD *)&v121[8];
          *((_OWORD *)a1 + 3) = *(_OWORD *)&v121[24];
          *((_OWORD *)a1 + 2) = v63;
          *((__m128i *)a1 + 1) = v62;
          *a1 = v60;
          a1[1] = v61;
LABEL_38:
          v64 = v129;
LABEL_39:
          if ( (unsigned __int64)v64 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v126, v64, 1);
          return;
        }
        v39 = (__int64)v51;
      }
    }
    nullsub_1(v14, v13);
    v68 = (__m128i *)sub_140001650(42, 1);
    v69 = v129;
    if ( !v68 )
    {
      v109 = v4;
      v108 = (const __m128i *)v39;
      sub_14196B2DB(1, 42);
    }
    qmemcpy(&v68[1], "s the local proxy endpoint", 26);
    *v68 = _mm_loadu_si128((const __m128i *)aRouteronRequir);
    *v69 = 9;
    v69[1] = 42;
    v69[2] = v68;
    v69[3] = 42;
    if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v4, v39, 1);
  }
  else
  {
    nullsub_1(v14, v13);
    v65 = (__m128i *)sub_140001650(55, 1);
    if ( !v65 )
      sub_14196B2DB(1, 55);
    qmemcpy(&v65[1], "s an enabled card with a selected model", 39);
    *v65 = _mm_loadu_si128((const __m128i *)&xmmword_141A2DF69);
    v66 = v129;
    *v129 = 9;
    v66[1] = 55;
    v66[2] = v65;
    v66[3] = 55;
  }
}
