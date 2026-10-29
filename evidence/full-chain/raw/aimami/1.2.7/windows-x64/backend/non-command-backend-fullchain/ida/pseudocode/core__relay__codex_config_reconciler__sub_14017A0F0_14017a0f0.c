// win 1.2.7 | module src/core/relay/codex_config_reconciler.rs | ea 0x14017a0f0 | name sub_14017A0F0
// win 1.2.7 | module src/core/relay/codex_config_reconciler.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14017A0F0(_QWORD *a1, _QWORD *a2, __m128i *a3, __m128i *a4)
{
  __int64 v4; // rdi
  const __m128i *v5; // rbx
  char v7; // cl
  __int128 *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r15
  const __m128i *v15; // r14
  const __m128i *v16; // r12
  __m128i si128; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  __int128 *v21; // r13
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // r12
  __int64 v26; // r14
  __int8 v27; // si
  __int64 v28; // rdx
  __m128i *v29; // rax
  __m128i v30; // xmm0
  char v31; // bl
  _QWORD *v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r13
  bool v36; // zf
  unsigned __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // edx
  char v44; // r8
  char v45; // r9
  char v46; // r10
  __int64 v47; // rcx
  int v48; // r9d
  int v49; // r8d
  const __m128i *v50; // r13
  __int16 v51; // ax
  __m128i *v52; // r8
  __int64 v53; // r9
  __int8 v54; // di
  _QWORD *v55; // r13
  __m128i *v56; // rax
  __int64 result; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  const __m128i *v60; // rax
  __int64 v61; // rcx
  __m128i v62; // xmm0
  __int128 v63; // xmm1
  _QWORD *v64; // rdx
  _QWORD *v65; // rcx
  unsigned __int64 v66; // rax
  __m128i *v67; // rax
  _QWORD *v68; // rcx
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  __m128i *v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r14
  const __m128i *v75; // rax
  __int128 v76; // xmm0
  __m128i v77; // xmm0
  __int128 v78; // xmm1
  __m128i v79; // xmm0
  const __m128i *v80; // rax
  __int64 v81; // rcx
  __m128i v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  _QWORD *v85; // rsi
  __m128i v86; // [rsp+50h] [rbp-30h] BYREF
  __int128 v87; // [rsp+60h] [rbp-20h]
  __int128 v88; // [rsp+70h] [rbp-10h]
  __int128 v89; // [rsp+80h] [rbp+0h]
  __m128i v90; // [rsp+90h] [rbp+10h]
  __int128 v91; // [rsp+A0h] [rbp+20h] BYREF
  __m128i *v92; // [rsp+B0h] [rbp+30h]
  __int64 v93; // [rsp+B8h] [rbp+38h]
  __int64 v94; // [rsp+C0h] [rbp+40h]
  __m128i v95[3]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v96; // [rsp+F8h] [rbp+78h]
  __int64 v97; // [rsp+100h] [rbp+80h]
  __int64 v98; // [rsp+108h] [rbp+88h]
  __m128i v99; // [rsp+110h] [rbp+90h] BYREF
  __int128 v100; // [rsp+120h] [rbp+A0h]
  __int128 v101; // [rsp+130h] [rbp+B0h]
  __int64 v102; // [rsp+140h] [rbp+C0h]
  __int64 v103; // [rsp+148h] [rbp+C8h]
  __m128i v104; // [rsp+150h] [rbp+D0h]
  char v105; // [rsp+160h] [rbp+E0h]
  __int8 v106; // [rsp+161h] [rbp+E1h]
  const __m128i *v107; // [rsp+168h] [rbp+E8h]
  __int64 v108; // [rsp+170h] [rbp+F0h]
  _QWORD *v109; // [rsp+178h] [rbp+F8h]
  __int64 v110; // [rsp+180h] [rbp+100h]
  __int64 v111; // [rsp+188h] [rbp+108h]
  __int64 v112; // [rsp+190h] [rbp+110h]
  __int128 *v113; // [rsp+198h] [rbp+118h]
  const __m128i *v114; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v115; // [rsp+1A8h] [rbp+128h] BYREF
  _BYTE v116[56]; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v117; // [rsp+1F0h] [rbp+170h]
  __m128i v118; // [rsp+200h] [rbp+180h] BYREF
  __int128 v119; // [rsp+210h] [rbp+190h] BYREF
  __int128 v120; // [rsp+220h] [rbp+1A0h]
  __int64 v121; // [rsp+230h] [rbp+1B0h]
  char v122; // [rsp+247h] [rbp+1C7h] BYREF
  _QWORD *v123; // [rsp+248h] [rbp+1C8h]
  __m128i *v124; // [rsp+250h] [rbp+1D0h]
  char v125; // [rsp+25Fh] [rbp+1DFh]
  __m128i *v126; // [rsp+260h] [rbp+1E0h]
  _QWORD *v127; // [rsp+268h] [rbp+1E8h]
  __int64 v128; // [rsp+270h] [rbp+1F0h]

  v128 = -2;
  v5 = a3;
  v7 = a3[4].m128i_i8[0];
  v109 = a2;
  if ( v7 != 1 )
  {
    v21 = (__int128 *)a3[1].m128i_i64[0];
    v22 = a3[1].m128i_i64[1];
    v23 = a3[2].m128i_i64[0];
    v24 = a3[2].m128i_i64[1];
    v25 = a3->m128i_i64[0];
    v26 = a3->m128i_i64[1];
    v27 = a3[4].m128i_i8[1];
    v28 = -1;
    v29 = nullptr;
    goto LABEL_11;
  }
  v125 = 1;
  v127 = a1;
  v126 = a4;
  v8 = (__int128 *)a3[1].m128i_i64[0];
  v9 = a3[1].m128i_i64[1];
  v10 = v5[2].m128i_i64[0];
  v112 = v5[2].m128i_i64[1];
  v110 = v9;
  v111 = v10;
  HIDWORD(_RAX) = (unsigned __int64)sub_14102DF90((unsigned int)&v114, (_DWORD)v8, v9, v10, v112) >> 32;
  v13 = v115.m128i_i64[0];
  v14 = *(_QWORD *)v116;
  if ( v115.m128i_i64[0] )
  {
    v113 = v8;
    if ( *(_QWORD *)v116 )
    {
      v15 = v114;
      v16 = v114 + 1;
      _ESI = ~_mm_movemask_epi8(_mm_load_si128(v114));
      v4 = *(_QWORD *)v116;
      do
      {
        if ( !(_WORD)_ESI )
        {
          do
          {
            si128 = _mm_load_si128(v16);
            v15 -= 24;
            ++v16;
            _ESI = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_ESI );
        }
        __asm { tzcnt   eax, esi }
        v19 = -3 * _RAX;
        v20 = *((_QWORD *)&v15[-1] + v19 - 1);
        if ( v20 )
          sub_140001660(v15[-1].m128i_i64[v19], v20, 1);
        --v4;
        _RAX = _ESI & (unsigned int)(_ESI - 1);
        _ESI &= _ESI - 1;
      }
      while ( v4 );
    }
    v34 = (24 * v13 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v35 = v34 + v13;
    v36 = v35 == -17;
    v37 = v35 + 17;
    v8 = v113;
    if ( !v36 )
      sub_140001660((char *)v114 - v34, v37, 16);
  }
  if ( v14 )
  {
    v25 = v5->m128i_i64[0];
    v38 = -1;
    if ( v5->m128i_i64[0] )
    {
      v39 = v5->m128i_i64[1];
      v40 = v39;
      while ( 1 )
      {
        v41 = v40;
        if ( !v40 )
          break;
        v42 = v25 + v40;
        v43 = *(char *)(v25 + v41 - 1);
        if ( v43 >= 0 )
        {
          v40 = v41 - 1;
          if ( v43 != 47 )
            break;
        }
        else
        {
          v44 = *(_BYTE *)(v42 - 2);
          if ( v44 >= -64 )
          {
            v47 = v42 - 2;
            v49 = v44 & 0x1F;
          }
          else
          {
            v45 = *(_BYTE *)(v42 - 3);
            if ( v45 >= -64 )
            {
              v47 = v42 - 3;
              v48 = v45 & 0xF;
            }
            else
            {
              v46 = *(_BYTE *)(v42 - 4);
              v47 = v42 - 4;
              v48 = ((v46 & 7) << 6) | v45 & 0x3F;
            }
            v49 = (v48 << 6) | v44 & 0x3F;
          }
          v40 = v47 - v25;
          if ( ((v49 << 6) | v43 & 0x3F) != 0x2F )
            break;
        }
      }
      v118.m128i_i64[0] = v5->m128i_i64[0];
      v118.m128i_i64[1] = v41;
      v99.m128i_i64[0] = (__int64)&v118;
      v99.m128i_i64[1] = (__int64)sub_140186EE0;
      sub_1416ABFD0(&v114, &unk_141942366, &v99);
      v50 = v114;
      v4 = v115.m128i_i64[0];
      if ( v114 != (const __m128i *)-1LL )
      {
        v108 = v115.m128i_i64[0];
        v107 = v114;
        v51 = sub_140C72440(v115.m128i_i64[0], v115.m128i_i64[1]);
        v52 = v126;
        v53 = v110;
        v12 = v111;
        if ( v51 == 1 )
        {
          if ( v50 )
          {
            sub_140001660(v4, v50, 1);
            v12 = v111;
            v53 = v110;
            v52 = v126;
          }
          v97 = v39;
          v54 = v5[4].m128i_i8[1];
          if ( v52 )
          {
            a1 = v127;
            v55 = v109;
            if ( (v5[4].m128i_i8[1] ^ 1) != v52[5].m128i_i8[8] )
            {
              nullsub_1(v12);
              v56 = (__m128i *)sub_140001650(60, 1);
              if ( !v56 )
                sub_141938D2B(1, 60);
              qmemcpy(&v56[1], "atalog mode does not match the config target", 44);
              *v56 = _mm_loadu_si128((const __m128i *)&xmmword_1419D0EEC);
              *((_QWORD *)&v91 + 1) = 60;
              v92 = v56;
              v93 = 60;
              result = 9;
              goto LABEL_59;
            }
            sub_141019A20(&v91, v109, v52, v53);
          }
          else
          {
            v55 = v109;
            sub_141021AB0(&v91, (char)v109, v8);
            a1 = v127;
          }
          result = v91;
          if ( (_QWORD)v91 != -1 )
          {
LABEL_59:
            a1[11] = v96;
            v69 = _mm_loadu_si128(v95);
            v70 = v95[1];
            *(__m128i *)(a1 + 9) = v95[2];
            *(__m128i *)(a1 + 7) = v70;
            *(__m128i *)(a1 + 5) = v69;
            v71 = v92;
            v72 = v93;
            v73 = v94;
            a1[1] = *((_QWORD *)&v91 + 1);
            a1[2] = v71;
            a1[3] = v72;
            a1[4] = v73;
            *a1 = result;
            return result;
          }
          v74 = v93;
          v126 = v92;
          v124 = v92;
          v127 = *((_QWORD **)&v91 + 1);
          v123 = *((_QWORD **)&v91 + 1);
          sub_140F010E0(&v114, v55);
          v75 = v114;
          v99 = v115;
          v100 = *(_OWORD *)v116;
          v101 = *(_OWORD *)&v116[16];
          v102 = *(_QWORD *)&v116[32];
          if ( v114 != (const __m128i *)-1LL )
          {
            v76 = *(_OWORD *)&v116[40];
            *((_OWORD *)a1 + 5) = v117;
            *((_OWORD *)a1 + 4) = v76;
            a1[7] = v102;
            v77 = _mm_load_si128(&v99);
            v78 = v100;
            *(_OWORD *)(a1 + 5) = v101;
            *(_OWORD *)(a1 + 3) = v78;
            *(__m128i *)(a1 + 1) = v77;
            *a1 = v75;
            goto LABEL_38;
          }
          v79 = _mm_load_si128(&v99);
          v120 = v101;
          v119 = v100;
          v118 = v79;
          v121 = v102;
          if ( (unsigned __int64)v100 | *((_QWORD *)&v101 + 1) )
          {
            sub_140F02690(&v114, v55);
            v80 = v114;
            v86 = v115;
            v87 = *(_OWORD *)v116;
            v88 = *(_OWORD *)&v116[16];
            v89 = *(_OWORD *)&v116[32];
            v90 = _mm_loadu_si128((const __m128i *)&v116[48]);
            if ( v114 != (const __m128i *)-1LL )
            {
              v81 = *((_QWORD *)&v117 + 1);
              *(__m128i *)(a1 + 9) = v90;
              v82 = _mm_load_si128(&v86);
              v83 = v87;
              v84 = v88;
              *(_OWORD *)(a1 + 7) = v89;
              *(_OWORD *)(a1 + 5) = v84;
              *(_OWORD *)(a1 + 3) = v83;
              *(__m128i *)(a1 + 1) = v82;
              *a1 = v80;
              a1[11] = v81;
              sub_1403FAE40(&v118);
              if ( v118.m128i_i64[0] )
                sub_140001660(v118.m128i_i64[1], 24 * v118.m128i_i64[0], 8);
              sub_1403FAE40((char *)&v119 + 8);
              v64 = v127;
              if ( *((_QWORD *)&v119 + 1) )
              {
                v85 = v127;
                sub_140001660(v120, 24LL * *((_QWORD *)&v119 + 1), 8);
                v64 = v85;
              }
              goto LABEL_39;
            }
            sub_140035660(&v86);
          }
          sub_1403FAE40(&v118);
          if ( v118.m128i_i64[0] )
            sub_140001660(v118.m128i_i64[1], 24 * v118.m128i_i64[0], 8);
          v113 = v8;
          sub_1403FAE40((char *)&v119 + 8);
          v27 = v54;
          v98 = v74;
          if ( *((_QWORD *)&v119 + 1) )
            sub_140001660(v120, 24LL * *((_QWORD *)&v119 + 1), 8);
          v29 = nullptr;
          v28 = (__int64)v127;
          a3 = v126;
          if ( v127 != (_QWORD *)-1LL )
            v29 = v126;
          v7 = v125;
          v22 = v110;
          v23 = v111;
          v24 = v112;
          v26 = v97;
          v4 = v98;
          v21 = v113;
LABEL_11:
          v30 = _mm_loadu_si128(v5 + 3);
          *(_QWORD *)&v101 = v21;
          *((_QWORD *)&v101 + 1) = v22;
          v102 = v23;
          v103 = v24;
          v99.m128i_i64[0] = v25;
          v99.m128i_i64[1] = v26;
          v31 = v7;
          v105 = v7;
          v106 = v27;
          v104 = v30;
          *(_QWORD *)&v100 = v29;
          *((_QWORD *)&v100 + 1) = v4;
          v126 = a3;
          v124 = a3;
          v127 = (_QWORD *)v28;
          v123 = (_QWORD *)v28;
          v32 = v109;
          v33 = sub_1401B6D70(v109);
          if ( v33 )
          {
            v114 = (const __m128i *)2;
            v115.m128i_i64[0] = v33;
          }
          else
          {
            v58 = v32[9];
            v59 = v32[10];
            v124 = v126;
            v123 = v127;
            sub_140E9A360((__int64)&v114, v58, v59, (__int64)&unk_141A3E122, 23, (__int64)&v99);
            if ( v114 == (const __m128i *)-1LL )
            {
              if ( !v31 )
              {
                v124 = v126;
                v123 = v127;
                v66 = sub_141011E90((__int64)v32);
                if ( v66 )
                {
                  v118.m128i_i64[0] = v66;
                  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                  {
                    v99.m128i_i64[0] = (__int64)&v118;
                    v99.m128i_i64[1] = (__int64)sub_1416BB0B0;
                    *(_QWORD *)&v116[24] = 2;
                    *(_QWORD *)&v116[32] = aCodexmateLibCo_17;
                    *(_QWORD *)&v116[40] = 51;
                    *(_QWORD *)&v117 = &unk_1419D0F28;
                    *((_QWORD *)&v117 + 1) = &v99;
                    v114 = nullptr;
                    v115.m128i_i64[0] = (__int64)aCodexmateLibCo_17;
                    v115.m128i_i64[1] = 51;
                    *(_QWORD *)v116 = 0;
                    *(_QWORD *)&v116[8] = aSrcCoreRelayCo;
                    *(_QWORD *)&v116[16] = 41;
                    *(_QWORD *)&v116[48] = 0x7000000001LL;
                    sub_1414D53A0(&v122, &v114);
                    v66 = v118.m128i_i64[0];
                  }
                  if ( (v66 & 3) - 2 >= 2 && (v66 & 3) != 0 )
                  {
                    v115.m128i_i64[0] = v66 - 1;
                    LOBYTE(v114) = 3;
                    v124 = v126;
                    v123 = v127;
                    sub_1416BCB00(&v115);
                  }
                }
              }
              *a1 = -1;
              goto LABEL_38;
            }
          }
          *((_OWORD *)a1 + 5) = v117;
          *((_OWORD *)a1 + 4) = *(_OWORD *)&v116[40];
          v60 = v114;
          v61 = v115.m128i_i64[0];
          v62 = _mm_loadu_si128((const __m128i *)&v115.m128i_u64[1]);
          v63 = *(_OWORD *)&v116[8];
          *((_OWORD *)a1 + 3) = *(_OWORD *)&v116[24];
          *((_OWORD *)a1 + 2) = v63;
          *((__m128i *)a1 + 1) = v62;
          *a1 = v60;
          a1[1] = v61;
LABEL_38:
          v64 = v127;
LABEL_39:
          result = (__int64)v64 - 1;
          if ( (unsigned __int64)v64 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            return sub_140001660(v126, v64, 1);
          return result;
        }
        v38 = (__int64)v50;
      }
    }
    nullsub_1(v12);
    v67 = (__m128i *)sub_140001650(42, 1);
    v68 = v127;
    if ( !v67 )
    {
      v108 = v4;
      v107 = (const __m128i *)v38;
      sub_141938D2B(1, 42);
    }
    qmemcpy(&v67[1], "s the local proxy endpoint", 26);
    *v67 = _mm_loadu_si128((const __m128i *)&xmmword_1419D0FD7);
    *v68 = 9;
    v68[1] = 42;
    v68[2] = v67;
    v68[3] = 42;
    result = v38 - 1;
    if ( (unsigned __int64)(v38 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      return sub_140001660(v4, v38, 1);
  }
  else
  {
    nullsub_1(v12);
    result = sub_140001650(55, 1);
    if ( !result )
      sub_141938D2B(1, 55);
    qmemcpy((void *)(result + 16), "s an enabled card with a selected model", 39);
    *(__m128i *)result = _mm_loadu_si128((const __m128i *)&xmmword_1419D0EB5);
    v65 = v127;
    *v127 = 9;
    v65[1] = 55;
    v65[2] = result;
    v65[3] = 55;
  }
  return result;
}
