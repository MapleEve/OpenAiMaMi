// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140236130 | name sub_140236130
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140236130(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  _QWORD *v11; // r14
  __int64 *i; // rax
  __int64 *v13; // rsi
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  __int64 result; // rax
  __m128i *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  const __m128i *v29; // r14
  __m128i si128; // xmm0
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdi
  _OWORD v36[7]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v37; // [rsp+90h] [rbp+10h]
  _QWORD *v38; // [rsp+98h] [rbp+18h]
  __int64 v39; // [rsp+A0h] [rbp+20h]
  __int64 v40; // [rsp+A8h] [rbp+28h]
  __int128 v41; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v42; // [rsp+C0h] [rbp+40h]
  __int64 v43; // [rsp+D0h] [rbp+50h]
  __int64 v44; // [rsp+D8h] [rbp+58h]
  __int128 v45; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v46; // [rsp+F0h] [rbp+70h]
  __int128 v47; // [rsp+100h] [rbp+80h]
  __int128 v48; // [rsp+110h] [rbp+90h]
  __m128i *v49; // [rsp+128h] [rbp+A8h]
  __int128 v50; // [rsp+130h] [rbp+B0h]
  __int64 v51; // [rsp+140h] [rbp+C0h]
  _BYTE v52[72]; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v53; // [rsp+190h] [rbp+110h]
  void *v54; // [rsp+198h] [rbp+118h]
  __int128 *v55; // [rsp+1A0h] [rbp+120h]
  __int64 v56; // [rsp+1A8h] [rbp+128h]
  __int128 v57; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v58; // [rsp+1C0h] [rbp+140h]
  __int128 v59; // [rsp+1D0h] [rbp+150h]
  __int128 v60; // [rsp+1E0h] [rbp+160h]
  __m128i v61; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v62; // [rsp+208h] [rbp+188h]
  __int128 v63; // [rsp+210h] [rbp+190h] BYREF
  __int128 v64; // [rsp+220h] [rbp+1A0h]
  __int128 v65; // [rsp+230h] [rbp+1B0h]
  __int128 v66; // [rsp+240h] [rbp+1C0h]
  __int128 v67; // [rsp+250h] [rbp+1D0h]
  __int128 v68; // [rsp+260h] [rbp+1E0h]
  __int128 v69; // [rsp+270h] [rbp+1F0h]
  __int128 v70; // [rsp+280h] [rbp+200h] BYREF
  __int128 *v71; // [rsp+290h] [rbp+210h]
  __int64 (__fastcall *v72)(_QWORD, _QWORD); // [rsp+298h] [rbp+218h]
  __int64 v73; // [rsp+2A8h] [rbp+228h]
  __int128 *v74; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v75; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 *v76; // [rsp+2C0h] [rbp+240h]
  __int64 v77; // [rsp+2C8h] [rbp+248h]
  __int64 v78; // [rsp+2D0h] [rbp+250h]
  char v79; // [rsp+2DEh] [rbp+25Eh] BYREF
  char v80; // [rsp+2DFh] [rbp+25Fh]
  __int64 v81; // [rsp+2E0h] [rbp+260h]

  v81 = -2;
  v49 = a1;
  v3 = sub_14167F170(a1);
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v8 = *(_QWORD *)v3;
    v9 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v35 = v3;
    v8 = sub_141696260(v5, v4, v6, v7);
    v3 = v35;
    *(_QWORD *)v35 = v8;
    *(_QWORD *)(v35 + 8) = v9;
    *(_BYTE *)(v35 + 16) = 1;
  }
  *(_QWORD *)v3 = v8 + 1;
  v42 = xmmword_1419D6520;
  v41 = *(_OWORD *)&off_1419D6510;
  v43 = v8;
  v44 = v9;
  v61.m128i_i64[0] = 0;
  v61.m128i_i64[1] = 8;
  v62 = 0;
  sub_1401B7010(&v63, a2);
  v37 = *((_QWORD *)&v63 + 1);
  v50 = v63;
  v39 = v63;
  v56 = *((_QWORD *)&v63 + 1) + 32 * v64;
  v40 = v56;
  v10 = 32 * v64 - 32;
  v11 = (_QWORD *)(*((_QWORD *)&v63 + 1) + 40LL);
  for ( i = *((__int64 **)&v63 + 1); i != (__int64 *)v56; i = v13 )
  {
    v13 = i + 4;
    v38 = i + 4;
    v73 = *i;
    if ( v73 == -1 )
    {
      if ( (__int64 *)v56 != v13 )
      {
        v22 = v10 >> 5;
        do
        {
          v23 = *(v11 - 1);
          if ( v23 )
            sub_140001660(*v11, v23, 1);
          v11 += 4;
          --v22;
        }
        while ( v22 );
      }
      break;
    }
    v14 = i[2];
    v76 = (__int128 *)i[1];
    sub_140189400(&v63, v76, v14);
    if ( BYTE8(v69) != 0xFF )
    {
      v36[6] = v69;
      v36[5] = v68;
      v36[4] = v67;
      v36[3] = v66;
      v36[2] = v65;
      v36[1] = v64;
      v36[0] = v63;
      v57 = 0x1388u;
      *(_QWORD *)v52 = &v57;
      *(_QWORD *)&v52[8] = sub_1416B95D0;
      sub_1416ABFD0(&v63, &unk_1419DE6C3, v52);
      v77 = *((_QWORD *)&v63 + 1);
      v78 = v63;
      sub_1414039F0(&v63, v36, *((_QWORD *)&v63 + 1), v64);
      if ( (_QWORD)v63 != -1 )
        sub_140193AA0(&v63);
      if ( v78 )
        sub_140001660(v77, v78, 1);
      sub_1401C6270(v52, v36, aSelectRolloutP, 74);
      if ( v52[0] )
      {
        v60 = *(_OWORD *)&v52[56];
        v59 = *(_OWORD *)&v52[40];
        v58 = *(_OWORD *)&v52[24];
        v57 = *(_OWORD *)&v52[8];
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v74 = v76;
          v75 = v14;
          *(_QWORD *)&v70 = &v74;
          *((_QWORD *)&v70 + 1) = sub_14169F630;
          v71 = &v57;
          v72 = sub_141404740;
          *(_QWORD *)&v66 = 2;
          *((_QWORD *)&v66 + 1) = aCodexmateLibCo_0;
          *(_QWORD *)&v67 = 51;
          *(_QWORD *)&v68 = &unk_1419DE761;
          *((_QWORD *)&v68 + 1) = &v70;
          *(_QWORD *)&v63 = 0;
          *((_QWORD *)&v63 + 1) = aCodexmateLibCo_0;
          v64 = 0x33u;
          *(_QWORD *)&v65 = aSrcCoreRelayCo_0;
          *((_QWORD *)&v65 + 1) = 41;
          *((_QWORD *)&v67 + 1) = 0x259D00000001LL;
          sub_1414D53A0(&v79, &v63);
        }
        sub_140193AA0(&v57);
      }
      else
      {
        v48 = *(_OWORD *)&v52[56];
        v47 = *(_OWORD *)&v52[40];
        v46 = *(_OWORD *)&v52[24];
        v45 = *(_OWORD *)&v52[8];
        v15 = sub_1417A9630(*(_QWORD *)&v52[64]);
        if ( !v15 )
        {
          v74 = &v45;
          v75 = 0;
          while ( 1 )
          {
            sub_140287FB0(v52, &v74);
            v17 = *(_QWORD *)v52;
            if ( *(_QWORD *)v52 == -1 )
            {
              if ( !v75
                || (sub_14018E680(&v63, &v75, 0, v16, *(_QWORD *)&v36[0], *((_QWORD *)&v36[0] + 1)),
                    v18 = *((_QWORD *)&v63 + 1),
                    v17 = v63,
                    v70 = v64,
                    v58 = v66,
                    v57 = v65,
                    (_QWORD)v63 == -2) )
              {
                sub_140193890(&v74);
                sub_140193C30(&v45);
                sub_1401923E0(v36);
                goto LABEL_24;
              }
            }
            else
            {
              v18 = *(_QWORD *)&v52[8];
              v66 = *(_OWORD *)&v52[48];
              v65 = *(_OWORD *)&v52[32];
              v64 = *(_OWORD *)&v52[16];
              v63 = *(_OWORD *)v52;
              v70 = *(_OWORD *)&v52[16];
              v57 = *(_OWORD *)&v52[32];
              v58 = *(_OWORD *)&v52[48];
            }
            v66 = v58;
            v65 = v57;
            *(_QWORD *)&v63 = v17;
            *((_QWORD *)&v63 + 1) = v18;
            v64 = v70;
            if ( v17 == -1 )
            {
              if ( v18 != -1 )
              {
                *(_OWORD *)&v52[8] = v70;
                v78 = v18;
                *(_QWORD *)v52 = v18;
                v80 = 1;
                sub_1416AC440(&v63, v52);
                v80 = 1;
                if ( (unsigned __int8)sub_1403AAB80(&v41, &v63) )
                {
                  if ( v78 )
                    sub_140001660(*(_QWORD *)&v52[8], v78, 1);
                }
                else
                {
                  v77 = *(_QWORD *)&v52[8];
                  v51 = *(_QWORD *)&v52[16];
                  v19 = v62;
                  if ( v62 == v61.m128i_i64[0] )
                    sub_14190F570(&v61);
                  v20 = v61.m128i_i64[1];
                  v21 = 32 * v19;
                  *(_QWORD *)(v61.m128i_i64[1] + v21) = v78;
                  *(_QWORD *)(v20 + v21 + 8) = v77;
                  *(_QWORD *)(v20 + v21 + 16) = v51;
                  *(_BYTE *)(v20 + v21 + 24) = 1;
                  v62 = v19 + 1;
                }
              }
            }
            else
            {
              sub_140193AA0(&v63);
            }
          }
        }
        *(_OWORD *)v52 = 0x8000000000000013uLL;
        *(_QWORD *)&v52[16] = v15;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v70 = v76;
          *((_QWORD *)&v70 + 1) = v14;
          *(_QWORD *)&v57 = &v70;
          *((_QWORD *)&v57 + 1) = sub_14169F630;
          *(_QWORD *)&v58 = v52;
          *((_QWORD *)&v58 + 1) = sub_141404740;
          *(_QWORD *)&v66 = 2;
          *((_QWORD *)&v66 + 1) = aCodexmateLibCo_0;
          *(_QWORD *)&v67 = 51;
          *(_QWORD *)&v68 = &unk_1419DE728;
          *((_QWORD *)&v68 + 1) = &v57;
          *(_QWORD *)&v63 = 0;
          *((_QWORD *)&v63 + 1) = aCodexmateLibCo_0;
          v64 = 0x33u;
          *(_QWORD *)&v65 = aSrcCoreRelayCo_0;
          *((_QWORD *)&v65 + 1) = 41;
          *((_QWORD *)&v67 + 1) = 0x25A700000001LL;
          sub_1414D53A0(&v79, &v63);
        }
        sub_140193AA0(v52);
        sub_140193C30(&v45);
      }
      sub_1401923E0(v36);
      goto LABEL_24;
    }
    v60 = v66;
    v59 = v65;
    v58 = v64;
    v57 = v63;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v70 = v76;
      *((_QWORD *)&v70 + 1) = v14;
      *(_QWORD *)&v45 = &v70;
      *((_QWORD *)&v45 + 1) = sub_14169F630;
      *(_QWORD *)&v46 = &v57;
      *((_QWORD *)&v46 + 1) = sub_141404740;
      *(_QWORD *)&v52[48] = 2;
      *(_QWORD *)&v52[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v52[64] = 51;
      v54 = &unk_1419DE796;
      v55 = &v45;
      *(_QWORD *)v52 = 0;
      *(_QWORD *)&v52[8] = aCodexmateLibCo_0;
      *(_QWORD *)&v52[16] = 51;
      *(_QWORD *)&v52[24] = 0;
      *(_QWORD *)&v52[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v52[40] = 41;
      v53 = 0x258D00000001LL;
      sub_1414D53A0(&v79, v52);
    }
    sub_140193AA0(&v57);
LABEL_24:
    if ( v73 )
      sub_140001660(v76, v73, 1);
    v10 -= 32LL;
    v11 += 4;
  }
  if ( (_QWORD)v50 )
    sub_140001660(*((_QWORD *)&v50 + 1), 32 * v50, 8);
  result = v62;
  v25 = v49;
  v49[1].m128i_i64[0] = v62;
  *v25 = _mm_loadu_si128(&v61);
  v26 = *((_QWORD *)&v41 + 1);
  if ( *((_QWORD *)&v41 + 1) )
  {
    v27 = *((_QWORD *)&v42 + 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      v28 = v41;
      v29 = (const __m128i *)(v41 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v41));
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
        v32 = -3 * result;
        v33 = *(_QWORD *)(v28 + 8 * v32 - 24);
        if ( v33 )
          sub_140001660(*(_QWORD *)(v28 + 8 * v32 - 16), v33, 1);
        --v27;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v27 );
    }
    result = (24 * v26 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v34 = result + v26 + 17;
    if ( v34 )
      return sub_140001660(v41 - result, v34, 16);
  }
  return result;
}
