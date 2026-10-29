// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407de030 | successor of pre-update 0x140236130 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
double __fastcall sub_1407DE030(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  _QWORD *v11; // r13
  __int64 *i; // rax
  __int64 *v13; // rsi
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  __m128i *v24; // rcx
  __m128i si128; // xmm0
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  const __m128i *v29; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  _OWORD v37[7]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v38; // [rsp+90h] [rbp+10h]
  _QWORD *v39; // [rsp+98h] [rbp+18h]
  __int64 v40; // [rsp+A0h] [rbp+20h]
  __int64 v41; // [rsp+A8h] [rbp+28h]
  __int128 v42; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v43; // [rsp+C0h] [rbp+40h]
  __int64 v44; // [rsp+D0h] [rbp+50h]
  __int64 v45; // [rsp+D8h] [rbp+58h]
  __int128 v46; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v47; // [rsp+F0h] [rbp+70h]
  __int128 v48; // [rsp+100h] [rbp+80h]
  __int128 v49; // [rsp+110h] [rbp+90h]
  __m128i *v50; // [rsp+128h] [rbp+A8h]
  __int128 v51; // [rsp+130h] [rbp+B0h]
  __int64 v52; // [rsp+140h] [rbp+C0h]
  _BYTE v53[72]; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v54; // [rsp+190h] [rbp+110h]
  void *v55; // [rsp+198h] [rbp+118h]
  __int128 *v56; // [rsp+1A0h] [rbp+120h]
  __int64 v57; // [rsp+1A8h] [rbp+128h]
  __int128 v58; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v59; // [rsp+1C0h] [rbp+140h]
  __int128 v60; // [rsp+1D0h] [rbp+150h]
  __int128 v61; // [rsp+1E0h] [rbp+160h]
  __m128i v62; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v63; // [rsp+208h] [rbp+188h]
  __int128 v64; // [rsp+210h] [rbp+190h] BYREF
  __int128 v65; // [rsp+220h] [rbp+1A0h]
  __int128 v66; // [rsp+230h] [rbp+1B0h]
  __int128 v67; // [rsp+240h] [rbp+1C0h]
  __int128 v68; // [rsp+250h] [rbp+1D0h]
  __int128 v69; // [rsp+260h] [rbp+1E0h]
  __int128 v70; // [rsp+270h] [rbp+1F0h]
  __int128 v71; // [rsp+280h] [rbp+200h] BYREF
  __int128 *v72; // [rsp+290h] [rbp+210h]
  __int64 (__fastcall *v73)(_QWORD, _QWORD); // [rsp+298h] [rbp+218h]
  __int64 v74; // [rsp+2A8h] [rbp+228h]
  __int128 *v75; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v76; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 *v77; // [rsp+2C0h] [rbp+240h]
  __int64 v78; // [rsp+2C8h] [rbp+248h]
  __int64 v79; // [rsp+2D0h] [rbp+250h]
  char v80; // [rsp+2DEh] [rbp+25Eh] BYREF
  char v81; // [rsp+2DFh] [rbp+25Fh]
  __int64 v82; // [rsp+2E0h] [rbp+260h]

  v82 = -2;
  v50 = a1;
  v3 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v8 = *(_QWORD *)v3;
    v9 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v35 = v3;
    v8 = sub_1416C5230(v5, v4, v6, v7);
    v3 = v35;
    *(_QWORD *)v35 = v8;
    *(_QWORD *)(v35 + 8) = v9;
    *(_BYTE *)(v35 + 16) = 1;
  }
  *(_QWORD *)v3 = v8 + 1;
  v43 = xmmword_141A46B20;
  v42 = *(_OWORD *)&off_141A46B10;
  v44 = v8;
  v45 = v9;
  v62.m128i_i64[0] = 0;
  v62.m128i_i64[1] = 8;
  v63 = 0;
  sub_140A2C460(&v64, a2);
  v38 = *((_QWORD *)&v64 + 1);
  v51 = v64;
  v40 = v64;
  v57 = *((_QWORD *)&v64 + 1) + 32 * v65;
  v41 = v57;
  v10 = 32 * v65 - 32;
  v11 = (_QWORD *)(*((_QWORD *)&v64 + 1) + 40LL);
  for ( i = *((__int64 **)&v64 + 1); i != (__int64 *)v57; i = v13 )
  {
    v13 = i + 4;
    v39 = i + 4;
    v74 = *i;
    if ( v74 == -1 )
    {
      if ( (__int64 *)v57 != v13 )
      {
        v21 = v10 >> 5;
        do
        {
          v22 = *(v11 - 1);
          if ( v22 )
            sub_140001660(*v11, v22, 1);
          v11 += 4;
          --v21;
        }
        while ( v21 );
      }
      break;
    }
    v14 = i[2];
    v77 = (__int128 *)i[1];
    sub_140772490(&v64, v77, v14);
    if ( BYTE8(v70) != 0xFF )
    {
      v37[6] = v70;
      v37[5] = v69;
      v37[4] = v68;
      v37[3] = v67;
      v37[2] = v66;
      v37[1] = v65;
      v37[0] = v64;
      v58 = 0x1388u;
      *(_QWORD *)v53 = &v58;
      *(_QWORD *)&v53[8] = sub_1416E85A0;
      sub_1416DAFA0(&v64, &unk_141A4A9F9, v53);
      v78 = *((_QWORD *)&v64 + 1);
      v79 = v64;
      sub_141431530(&v64, v37, *((_QWORD *)&v64 + 1), v65);
      if ( (_QWORD)v64 != -1 )
        sub_1407785F0(&v64);
      if ( v79 )
        sub_140001660(v78, v79, 1);
      sub_1407C4200(v53, v37, aSelectRolloutP, 74);
      if ( v53[0] )
      {
        v61 = *(_OWORD *)&v53[56];
        v60 = *(_OWORD *)&v53[40];
        v59 = *(_OWORD *)&v53[24];
        v58 = *(_OWORD *)&v53[8];
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v75 = v77;
          v76 = v14;
          *(_QWORD *)&v71 = &v75;
          *((_QWORD *)&v71 + 1) = sub_1416CE600;
          v72 = &v58;
          v73 = sub_14142D4D0;
          *(_QWORD *)&v67 = 2;
          *((_QWORD *)&v67 + 1) = aCodexmateLibCo_11;
          *(_QWORD *)&v68 = 51;
          *(_QWORD *)&v69 = &unk_141A4AA97;
          *((_QWORD *)&v69 + 1) = &v71;
          *(_QWORD *)&v64 = 0;
          *((_QWORD *)&v64 + 1) = aCodexmateLibCo_11;
          v65 = 0x33u;
          *(_QWORD *)&v66 = aSrcCoreRelayCo_0;
          *((_QWORD *)&v66 + 1) = 41;
          *((_QWORD *)&v68 + 1) = 0x259D00000001LL;
          sub_141503E20(&v80, &v64);
        }
        sub_1407785F0(&v58);
      }
      else
      {
        v49 = *(_OWORD *)&v53[56];
        v48 = *(_OWORD *)&v53[40];
        v47 = *(_OWORD *)&v53[24];
        v46 = *(_OWORD *)&v53[8];
        v15 = sub_1417D8600(*(_QWORD *)&v53[64]);
        if ( !v15 )
        {
          v75 = &v46;
          v76 = 0;
          while ( 1 )
          {
            sub_1408402E0(v53, &v75);
            v16 = *(_QWORD *)v53;
            if ( *(_QWORD *)v53 == -1 )
            {
              if ( !v76
                || (sub_140658620(&v64, &v76, 0, &off_141A47590),
                    v17 = *((_QWORD *)&v64 + 1),
                    v16 = v64,
                    v71 = v65,
                    v59 = v67,
                    v58 = v66,
                    (_QWORD)v64 == -2) )
              {
                sub_1407784E0(&v75);
                sub_140778780(&v46);
                sub_140777BC0(v37);
                goto LABEL_24;
              }
            }
            else
            {
              v17 = *(_QWORD *)&v53[8];
              v67 = *(_OWORD *)&v53[48];
              v66 = *(_OWORD *)&v53[32];
              v65 = *(_OWORD *)&v53[16];
              v64 = *(_OWORD *)v53;
              v71 = *(_OWORD *)&v53[16];
              v58 = *(_OWORD *)&v53[32];
              v59 = *(_OWORD *)&v53[48];
            }
            v67 = v59;
            v66 = v58;
            *(_QWORD *)&v64 = v16;
            *((_QWORD *)&v64 + 1) = v17;
            v65 = v71;
            if ( v16 == -1 )
            {
              if ( v17 != -1 )
              {
                *(_OWORD *)&v53[8] = v71;
                v79 = v17;
                *(_QWORD *)v53 = v17;
                v81 = 1;
                sub_1416DB410(&v64, v53);
                v81 = 1;
                if ( (unsigned __int8)sub_140871180((__int64)&v42, &v64) )
                {
                  if ( v79 )
                    sub_140001660(*(_QWORD *)&v53[8], v79, 1);
                }
                else
                {
                  v78 = *(_QWORD *)&v53[8];
                  v52 = *(_QWORD *)&v53[16];
                  v18 = v63;
                  if ( v63 == v62.m128i_i64[0] )
                    sub_1419397B0(&v62);
                  v19 = v62.m128i_i64[1];
                  v20 = 32 * v18;
                  *(_QWORD *)(v62.m128i_i64[1] + v20) = v79;
                  *(_QWORD *)(v19 + v20 + 8) = v78;
                  *(_QWORD *)(v19 + v20 + 16) = v52;
                  *(_BYTE *)(v19 + v20 + 24) = 1;
                  v63 = v18 + 1;
                }
              }
            }
            else
            {
              sub_1407785F0(&v64);
            }
          }
        }
        *(_OWORD *)v53 = 0x8000000000000013uLL;
        *(_QWORD *)&v53[16] = v15;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)&v71 = v77;
          *((_QWORD *)&v71 + 1) = v14;
          *(_QWORD *)&v58 = &v71;
          *((_QWORD *)&v58 + 1) = sub_1416CE600;
          *(_QWORD *)&v59 = v53;
          *((_QWORD *)&v59 + 1) = sub_14142D4D0;
          *(_QWORD *)&v67 = 2;
          *((_QWORD *)&v67 + 1) = aCodexmateLibCo_11;
          *(_QWORD *)&v68 = 51;
          *(_QWORD *)&v69 = &unk_141A4AA5E;
          *((_QWORD *)&v69 + 1) = &v58;
          *(_QWORD *)&v64 = 0;
          *((_QWORD *)&v64 + 1) = aCodexmateLibCo_11;
          v65 = 0x33u;
          *(_QWORD *)&v66 = aSrcCoreRelayCo_0;
          *((_QWORD *)&v66 + 1) = 41;
          *((_QWORD *)&v68 + 1) = 0x25A700000001LL;
          sub_141503E20(&v80, &v64);
        }
        sub_1407785F0(v53);
        sub_140778780(&v46);
      }
      sub_140777BC0(v37);
      goto LABEL_24;
    }
    v61 = v67;
    v60 = v66;
    v59 = v65;
    v58 = v64;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v71 = v77;
      *((_QWORD *)&v71 + 1) = v14;
      *(_QWORD *)&v46 = &v71;
      *((_QWORD *)&v46 + 1) = sub_1416CE600;
      *(_QWORD *)&v47 = &v58;
      *((_QWORD *)&v47 + 1) = sub_14142D4D0;
      *(_QWORD *)&v53[48] = 2;
      *(_QWORD *)&v53[56] = aCodexmateLibCo_11;
      *(_QWORD *)&v53[64] = 51;
      v55 = &unk_141A4AACC;
      v56 = &v46;
      *(_QWORD *)v53 = 0;
      *(_QWORD *)&v53[8] = aCodexmateLibCo_11;
      *(_QWORD *)&v53[16] = 51;
      *(_QWORD *)&v53[24] = 0;
      *(_QWORD *)&v53[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v53[40] = 41;
      v54 = 0x258D00000001LL;
      sub_141503E20(&v80, v53);
    }
    sub_1407785F0(&v58);
LABEL_24:
    if ( v74 )
      sub_140001660(v77, v74, 1);
    v10 -= 32LL;
    v11 += 4;
  }
  if ( (_QWORD)v51 )
    sub_140001660(*((_QWORD *)&v51 + 1), 32 * v51, 8);
  HIDWORD(_RAX) = HIDWORD(v63);
  v24 = v50;
  v50[1].m128i_i64[0] = v63;
  si128 = _mm_loadu_si128(&v62);
  *v24 = si128;
  v26 = *((_QWORD *)&v42 + 1);
  if ( *((_QWORD *)&v42 + 1) )
  {
    v27 = *((_QWORD *)&v43 + 1);
    if ( *((_QWORD *)&v43 + 1) )
    {
      v28 = v42;
      si128 = _mm_load_si128((const __m128i *)v42);
      v29 = (const __m128i *)(v42 + 16);
      _R15D = ~_mm_movemask_epi8(si128);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v29);
            v28 -= 384;
            ++v29;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v31 = -3 * _RAX;
        v32 = *(_QWORD *)(v28 + 8 * v31 - 24);
        if ( v32 )
          *(double *)si128.m128i_i64 = sub_140001660(*(_QWORD *)(v28 + 8 * v31 - 16), v32, 1);
        --v27;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v27 );
    }
    v33 = (24 * v26 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v34 = v33 + v26 + 17;
    if ( v34 )
      *(double *)si128.m128i_i64 = sub_140001660(v42 - v33, v34, 16);
  }
  return *(double *)si128.m128i_i64;
}
