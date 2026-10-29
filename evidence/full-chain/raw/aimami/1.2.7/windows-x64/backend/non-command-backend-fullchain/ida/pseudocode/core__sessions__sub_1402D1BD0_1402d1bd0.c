// win 1.2.7 | module src/core/sessions.rs | ea 0x1402d1bd0 | name sub_1402D1BD0
// win 1.2.7 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402D1BD0(__int64 a1, __int64 a2, const __m128i *a3, signed __int64 a4)
{
  __int64 v5; // r14
  __m128i *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r14
  const __m128i *v23; // r15
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  __m128i *v31; // rax
  __m128i *v32; // rbx
  __int64 v33; // rcx
  __int128 v34; // kr10_16
  __m128i v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // r14
  __int64 v43; // [rsp+30h] [rbp-50h] BYREF
  __m128i v44; // [rsp+38h] [rbp-48h] BYREF
  __int128 v45; // [rsp+48h] [rbp-38h]
  __int128 v46; // [rsp+58h] [rbp-28h]
  __int128 v47; // [rsp+68h] [rbp-18h]
  __int128 v48; // [rsp+78h] [rbp-8h]
  __m128i v49; // [rsp+88h] [rbp+8h]
  _BYTE v50[104]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v51; // [rsp+1F8h] [rbp+178h]
  __int128 v52; // [rsp+208h] [rbp+188h]
  __int128 v53; // [rsp+218h] [rbp+198h]
  __int128 v54; // [rsp+228h] [rbp+1A8h]
  __int64 v55; // [rsp+238h] [rbp+1B8h]
  _BYTE v56[104]; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v57; // [rsp+408h] [rbp+388h]
  __int128 v58; // [rsp+418h] [rbp+398h]
  __int128 v59; // [rsp+428h] [rbp+3A8h]
  __int128 v60; // [rsp+438h] [rbp+3B8h]
  __int64 v61; // [rsp+448h] [rbp+3C8h]
  __m128i si128; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v63; // [rsp+460h] [rbp+3E0h]
  __int128 v64; // [rsp+470h] [rbp+3F0h]
  __m128i v65; // [rsp+480h] [rbp+400h] BYREF
  __int128 v66; // [rsp+490h] [rbp+410h]
  __int128 v67; // [rsp+4A0h] [rbp+420h]
  __int128 v68; // [rsp+4B0h] [rbp+430h]
  __int128 v69; // [rsp+4C0h] [rbp+440h]
  __m128i v70; // [rsp+4D0h] [rbp+450h] BYREF
  __m128i *v71; // [rsp+4E0h] [rbp+460h]
  const __m128i *v72; // [rsp+4E8h] [rbp+468h] BYREF
  signed __int64 v73; // [rsp+4F0h] [rbp+470h]
  __int64 v74; // [rsp+4F8h] [rbp+478h]
  __int64 v75; // [rsp+500h] [rbp+480h]
  char v76; // [rsp+50Fh] [rbp+48Fh] BYREF
  __int128 v77; // [rsp+510h] [rbp+490h]
  char v78; // [rsp+527h] [rbp+4A7h]
  __int64 v79; // [rsp+528h] [rbp+4A8h]

  v79 = -2;
  v72 = a3;
  v73 = a4;
  if ( a4 < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  *((_QWORD *)&v77 + 1) = a4;
  if ( a4 )
  {
    nullsub_1(a1);
    v5 = 1;
    v9 = (__m128i *)sub_140001650(a4, 1);
    if ( !v9 )
LABEL_3:
      sub_141938D2B(v5, a4);
    *(_QWORD *)&v77 = v9;
    sub_1418F44E0(v9, a3, a4);
  }
  else
  {
    *(_QWORD *)&v77 = 1;
  }
  v78 = 0;
  v10 = sub_14167F170(a1);
  if ( *(_BYTE *)(v10 + 16) == 1 )
  {
    v15 = *(_QWORD *)v10;
    v16 = *(_QWORD *)(v10 + 8);
  }
  else
  {
    v78 = 0;
    v42 = v10;
    v15 = sub_141696260(v12, v11, v13, v14);
    v10 = v42;
    *(_QWORD *)v42 = v15;
    *(_QWORD *)(v42 + 8) = v16;
    *(_BYTE *)(v42 + 16) = 1;
  }
  *(_QWORD *)v10 = v15 + 1;
  *(_OWORD *)&v50[16] = xmmword_1419E4880;
  *(_OWORD *)v50 = *(_OWORD *)&off_1419E4870;
  *(_QWORD *)&v50[32] = v15;
  *(_QWORD *)&v50[40] = v16;
  *(_QWORD *)v56 = 0;
  *(_QWORD *)&v56[8] = 1;
  *(_QWORD *)&v56[16] = *((_QWORD *)&v77 + 1);
  *(_OWORD *)&v56[24] = v77;
  sub_140394060(v50, v56);
  si128 = _mm_load_si128((const __m128i *)v50);
  v63 = *(_OWORD *)&v50[16];
  v64 = *(_OWORD *)&v50[32];
  sub_140C1C870((__int64)v50, a2);
  v65 = *(__m128i *)&v50[8];
  v66 = *(_OWORD *)&v50[24];
  v67 = *(_OWORD *)&v50[40];
  v68 = *(_OWORD *)&v50[56];
  v69 = *(_OWORD *)&v50[72];
  v70 = *(__m128i *)&v50[88];
  if ( *(_QWORD *)v50 == 2 )
  {
    v44 = v65;
    v45 = v66;
    v46 = v67;
    v47 = v68;
    v48 = v69;
    v49 = _mm_load_si128(&v70);
    v43 = 2;
LABEL_13:
    *(__m128i *)&v56[80] = v49;
    *(_OWORD *)&v56[64] = v48;
    v18 = _mm_loadu_si128(&v44);
    *(_OWORD *)&v56[48] = v47;
    *(_OWORD *)&v56[32] = v46;
    *(_OWORD *)&v56[16] = v45;
    *(__m128i *)v56 = v18;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v65.m128i_i64[0] = (__int64)&v72;
      v65.m128i_i64[1] = (__int64)sub_140186EE0;
      *(_QWORD *)&v66 = v56;
      *((_QWORD *)&v66 + 1) = sub_14104A7D0;
      *(_QWORD *)&v50[48] = 2;
      *(_QWORD *)&v50[56] = aCodexmateLibCo_2;
      *(_QWORD *)&v50[64] = 29;
      *(_QWORD *)&v50[80] = &unk_1419E7D61;
      *(_QWORD *)&v50[88] = &v65;
      *(_QWORD *)v50 = 0;
      *(_QWORD *)&v50[8] = aCodexmateLibCo_2;
      *(_OWORD *)&v50[16] = 0x1Du;
      *(_QWORD *)&v50[32] = aSrcCoreSession_5;
      *(_QWORD *)&v50[40] = 20;
      *(_QWORD *)&v50[72] = 0x6700000001LL;
      sub_1414D53A0(&v76, v50);
    }
    sub_14029DA50(v56);
    HIDWORD(_RAX) = (unsigned __int64)sub_1402DE620(a1, a2, v72, v73) >> 32;
    goto LABEL_16;
  }
  v61 = v55;
  v60 = v54;
  v59 = v53;
  v58 = v52;
  v57 = v51;
  *(__m128i *)&v56[8] = v65;
  *(_OWORD *)&v56[24] = v66;
  *(_OWORD *)&v56[40] = v67;
  *(_OWORD *)&v56[56] = v68;
  *(_OWORD *)&v56[72] = v69;
  *(__m128i *)&v56[88] = _mm_load_si128(&v70);
  *(_QWORD *)v56 = *(_QWORD *)v50;
  sub_140C4A4F0((unsigned int)&v43, (unsigned int)v56, (_DWORD)a3, DWORD2(v77), 0);
  sub_140BAC0A0(v56);
  if ( v43 == 2 )
    goto LABEL_13;
  nullsub_1(v17);
  v31 = (__m128i *)sub_140001650(352, 8);
  v71 = v31;
  if ( !v31 )
    sub_141938D11(8, 352);
  v32 = v31;
  sub_1418F44E0(v31, (const __m128i *)&v43, 0x160u);
  *(_QWORD *)v56 = 1;
  *(_QWORD *)&v56[8] = v32;
  *(_QWORD *)&v56[16] = 1;
  sub_1402DCB00(v50, a2, v56, &si128);
  v33 = *(_QWORD *)&v50[8];
  _RAX = *(_QWORD *)v50;
  v34 = *(_OWORD *)&v50[16];
  if ( *(_QWORD *)v50 == -1 )
  {
    v74 = *(_QWORD *)&v50[8];
    if ( *(_QWORD *)&v50[24] )
    {
      *(_QWORD *)&v77 = *(_QWORD *)&v50[24] - 1LL;
      v38 = 536 * (*(_QWORD *)&v50[24] - 1LL);
      v39 = *(_QWORD *)(*(_QWORD *)&v50[16] + v38);
      sub_1418F44E0((__m128i *)v50, (const __m128i *)(*(_QWORD *)&v50[16] + v38 + 8), 0x210u);
    }
    else
    {
      v39 = 2;
      *(_QWORD *)&v77 = 0;
    }
    *(_QWORD *)a1 = v39;
    sub_1418F44E0((__m128i *)(a1 + 8), (const __m128i *)v50, 0x210u);
    *((_QWORD *)&v77 + 1) = 0;
    v75 = v34;
    v40 = v34;
    while ( (_QWORD)v77 != *((_QWORD *)&v77 + 1) )
    {
      ++*((_QWORD *)&v77 + 1);
      v41 = v40 + 536;
      sub_14029D790(v40);
      v40 = v41;
    }
    HIDWORD(_RAX) = HIDWORD(v74);
    if ( v74 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v75, 536 * v74, 8) >> 32;
  }
  else
  {
    v35 = _mm_loadu_si128((const __m128i *)&v50[32]);
    v36 = *(_OWORD *)&v50[48];
    v37 = *(_OWORD *)&v50[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v50[80];
    *(_OWORD *)(a1 + 72) = v37;
    *(_OWORD *)(a1 + 56) = v36;
    *(__m128i *)(a1 + 40) = v35;
    *(_QWORD *)(a1 + 16) = v33;
    *(_OWORD *)(a1 + 24) = v34;
    *(_QWORD *)(a1 + 8) = _RAX;
    *(_QWORD *)a1 = -1;
  }
LABEL_16:
  v20 = si128.m128i_i64[1];
  if ( si128.m128i_i64[1] )
  {
    v21 = *((_QWORD *)&v63 + 1);
    if ( *((_QWORD *)&v63 + 1) )
    {
      v22 = si128.m128i_i64[0];
      v23 = (const __m128i *)(si128.m128i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)si128.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v25 = _mm_load_si128(v23);
            v22 -= 384;
            ++v23;
            _R12D = _mm_movemask_epi8(v25) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v26 = -3 * _RAX;
        v27 = *(_QWORD *)(v22 + 8 * v26 - 24);
        if ( v27 )
          sub_140001660(*(_QWORD *)(v22 + 8 * v26 - 16), v27, 1);
        --v21;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v21 );
    }
    v28 = (24 * v20 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v29 = v28 + v20 + 17;
    if ( v29 )
      sub_140001660(si128.m128i_i64[0] - v28, v29, 16);
  }
  return a1;
}
