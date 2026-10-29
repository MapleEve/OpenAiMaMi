// win 1.2.7 latest-exe | module src/core/sessions.rs | ea 0x14087f200 | successor of pre-update 0x1402d1bd0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.892, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_14087F200(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r14
  const __m128i *v20; // r15
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r14
  __int128 v31; // kr10_16
  __m128i v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // [rsp+30h] [rbp-50h] BYREF
  __m128i v40; // [rsp+38h] [rbp-48h] BYREF
  __int128 v41; // [rsp+48h] [rbp-38h]
  __int128 v42; // [rsp+58h] [rbp-28h]
  __int128 v43; // [rsp+68h] [rbp-18h]
  __int128 v44; // [rsp+78h] [rbp-8h]
  __m128i v45; // [rsp+88h] [rbp+8h]
  _BYTE v46[104]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v47; // [rsp+1F8h] [rbp+178h]
  __int128 v48; // [rsp+208h] [rbp+188h]
  __int128 v49; // [rsp+218h] [rbp+198h]
  __int128 v50; // [rsp+228h] [rbp+1A8h]
  __int64 v51; // [rsp+238h] [rbp+1B8h]
  __m128i si128; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v53; // [rsp+250h] [rbp+1D0h]
  __int128 v54; // [rsp+260h] [rbp+1E0h]
  __m128i v55; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v56; // [rsp+280h] [rbp+200h]
  __int128 v57; // [rsp+290h] [rbp+210h]
  __int128 v58; // [rsp+2A0h] [rbp+220h]
  __int128 v59; // [rsp+2B0h] [rbp+230h]
  __m128i v60; // [rsp+2C0h] [rbp+240h] BYREF
  _BYTE v61[104]; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v62; // [rsp+338h] [rbp+2B8h]
  __int128 v63; // [rsp+348h] [rbp+2C8h]
  __int128 v64; // [rsp+358h] [rbp+2D8h]
  __int128 v65; // [rsp+368h] [rbp+2E8h]
  __int64 v66; // [rsp+378h] [rbp+2F8h]
  __int64 v67; // [rsp+380h] [rbp+300h] BYREF
  __int64 v68; // [rsp+388h] [rbp+308h]
  __int128 v69; // [rsp+390h] [rbp+310h]
  char v70; // [rsp+3A6h] [rbp+326h] BYREF
  char v71; // [rsp+3A7h] [rbp+327h]
  __int64 v72; // [rsp+3A8h] [rbp+328h]

  v72 = -2;
  v67 = a3;
  v68 = a4;
  if ( a4 < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  *((_QWORD *)&v69 + 1) = a4;
  if ( a4 )
  {
    nullsub_1(a1, a2);
    v5 = 1;
    v9 = sub_140001650(a4, 1);
    if ( !v9 )
LABEL_3:
      sub_14196B2DB(v5, a4);
    *(_QWORD *)&v69 = v9;
    sub_1419234B0(v9, a3, a4);
  }
  else
  {
    *(_QWORD *)&v69 = 1;
  }
  v71 = 0;
  v10 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v10 + 16) == 1 )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(_QWORD *)(v10 + 8);
  }
  else
  {
    v71 = 0;
    v38 = v10;
    v11 = sub_1416C5230();
    v10 = v38;
    *(_QWORD *)v38 = v11;
    *(_QWORD *)(v38 + 8) = v12;
    *(_BYTE *)(v38 + 16) = 1;
  }
  *(_QWORD *)v10 = v11 + 1;
  *(_OWORD *)&v61[16] = xmmword_141A51860;
  *(_OWORD *)v61 = *(_OWORD *)&off_141A51850;
  *(_QWORD *)&v61[32] = v11;
  *(_QWORD *)&v61[40] = v12;
  *(_QWORD *)v46 = 0;
  *(_QWORD *)&v46[8] = 1;
  *(_QWORD *)&v46[16] = *((_QWORD *)&v69 + 1);
  *(_OWORD *)&v46[24] = v69;
  sub_140862110(v61, v46);
  si128 = _mm_load_si128((const __m128i *)v61);
  v53 = *(_OWORD *)&v61[16];
  v54 = *(_OWORD *)&v61[32];
  sub_140932A70(v61);
  v55 = *(__m128i *)&v61[8];
  v56 = *(_OWORD *)&v61[24];
  v57 = *(_OWORD *)&v61[40];
  v58 = *(_OWORD *)&v61[56];
  v59 = *(_OWORD *)&v61[72];
  v60 = *(__m128i *)&v61[88];
  if ( *(_QWORD *)v61 == 2 )
  {
    v40 = v55;
    v41 = v56;
    v42 = v57;
    v43 = v58;
    v44 = v59;
    v45 = _mm_load_si128(&v60);
    v39 = 2;
LABEL_13:
    *(__m128i *)&v46[80] = v45;
    *(_OWORD *)&v46[64] = v44;
    v15 = _mm_loadu_si128(&v40);
    *(_OWORD *)&v46[48] = v43;
    *(_OWORD *)&v46[32] = v42;
    *(_OWORD *)&v46[16] = v41;
    *(__m128i *)v46 = v15;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v55.m128i_i64[0] = (__int64)&v67;
      v55.m128i_i64[1] = (__int64)sub_140191200;
      *(_QWORD *)&v56 = v46;
      *((_QWORD *)&v56 + 1) = sub_140D76130;
      *(_QWORD *)&v61[48] = 2;
      *(_QWORD *)&v61[56] = aCodexmateLibCo_12;
      *(_QWORD *)&v61[64] = 29;
      *(_QWORD *)&v61[80] = &unk_141A533C9;
      *(_QWORD *)&v61[88] = &v55;
      *(_QWORD *)v61 = 0;
      *(_QWORD *)&v61[8] = aCodexmateLibCo_12;
      *(_OWORD *)&v61[16] = 0x1Du;
      *(_QWORD *)&v61[32] = aSrcCoreSession_6;
      *(_QWORD *)&v61[40] = 20;
      *(_QWORD *)&v61[72] = 0x6700000001LL;
      sub_141503E20(&v70, v61);
    }
    sub_14084C890(v46);
    HIDWORD(_RAX) = (unsigned __int64)sub_14088C570(a1, a2, v67, v68) >> 32;
    goto LABEL_16;
  }
  v51 = v66;
  v50 = v65;
  v49 = v64;
  v48 = v63;
  v47 = v62;
  *(__m128i *)&v46[8] = v55;
  *(_OWORD *)&v46[24] = v56;
  *(_OWORD *)&v46[40] = v57;
  *(_OWORD *)&v46[56] = v58;
  *(_OWORD *)&v46[72] = v59;
  *(__m128i *)&v46[88] = _mm_load_si128(&v60);
  *(_QWORD *)v46 = *(_QWORD *)v61;
  sub_14096FE10((unsigned int)&v39, (unsigned int)v46, a3, DWORD2(v69), 0);
  sub_140905CE0(v46);
  if ( v39 == 2 )
    goto LABEL_13;
  nullsub_1(v14, v13);
  v28 = sub_140001650(352, 8);
  *((_QWORD *)&v69 + 1) = v28;
  if ( !v28 )
    sub_14196B2C1(8, 352);
  v29 = v28;
  sub_1419234B0(v28, &v39, 352);
  *(_QWORD *)v46 = 1;
  *(_QWORD *)&v46[8] = v29;
  *(_QWORD *)&v46[16] = 1;
  sub_14088A850(v61, a2, v46, &si128);
  v30 = *(_QWORD *)&v61[8];
  _RAX = *(_QWORD *)v61;
  v31 = *(_OWORD *)&v61[16];
  if ( *(_QWORD *)v61 != -1 )
  {
    v32 = _mm_loadu_si128((const __m128i *)&v61[32]);
    v33 = *(_OWORD *)&v61[48];
    v34 = *(_OWORD *)&v61[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v61[80];
    *(_OWORD *)(a1 + 72) = v34;
    *(_OWORD *)(a1 + 56) = v33;
    *(__m128i *)(a1 + 40) = v32;
    *(_QWORD *)(a1 + 16) = v30;
    *(_OWORD *)(a1 + 24) = v31;
    *(_QWORD *)(a1 + 8) = _RAX;
    *(_QWORD *)a1 = -1;
    goto LABEL_16;
  }
  if ( *(_QWORD *)&v61[24] )
  {
    v35 = *(_QWORD *)&v61[24] - 1LL;
    v36 = *(_QWORD *)&v61[16] + 536 * (*(_QWORD *)&v61[24] - 1LL) + 8;
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)&v61[16] + 536 * (*(_QWORD *)&v61[24] - 1LL));
    sub_1419234B0(a1 + 8, v36, 528);
    if ( v35 )
    {
      v37 = v31;
      do
      {
        sub_1401AF160(v37);
        v37 += 536;
        --v35;
      }
      while ( v35 );
    }
  }
  else
  {
    *(_QWORD *)a1 = 2;
    if ( !v30 )
      goto LABEL_16;
  }
  sub_140001660(v31, 536 * v30, 8);
LABEL_16:
  v17 = si128.m128i_i64[1];
  if ( si128.m128i_i64[1] )
  {
    v18 = *((_QWORD *)&v53 + 1);
    if ( *((_QWORD *)&v53 + 1) )
    {
      v19 = si128.m128i_i64[0];
      v20 = (const __m128i *)(si128.m128i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)si128.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v22 = _mm_load_si128(v20);
            v19 -= 384;
            ++v20;
            _R12D = _mm_movemask_epi8(v22) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v23 = -3 * _RAX;
        v24 = *(_QWORD *)(v19 + 8 * v23 - 24);
        if ( v24 )
          sub_140001660(*(_QWORD *)(v19 + 8 * v23 - 16), v24, 1);
        --v18;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v18 );
    }
    v25 = (24 * v17 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v26 = v25 + v17 + 17;
    if ( v26 )
      sub_140001660(si128.m128i_i64[0] - v25, v26, 16);
  }
  return a1;
}
