// win 1.2.7 | module src/core/relay/storage.rs | ea 0x140f71c80 | name sub_140F71C80
// win 1.2.7 | module src/core/relay/storage.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F71C80(_QWORD *a1, _QWORD *a2, const __m128i *a3, __int64 a4)
{
  __int128 *v7; // rax
  __int64 v8; // r9
  __int128 v9; // xmm0
  const __m128i *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  const __m128i *v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int128 v29; // rax
  _QWORD *v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rdi
  __m128i *v33; // rsi
  _QWORD *v34; // r14
  __int64 v35; // rdx
  _QWORD *v36; // r13
  _QWORD *v38; // r15
  __m128i v39; // xmm8
  __int64 v41; // r14
  unsigned __int64 v43; // r15
  int v44; // eax
  bool v45; // zf
  __int64 i; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rbx
  __m128i v49; // rdi
  __m128i v50; // xmm0
  __m128i v51; // xmm7
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rbx
  const __m128i *v55; // r14
  __m128i si128; // xmm0
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  __m128i v63; // [rsp+38h] [rbp-48h] BYREF
  __int64 v64; // [rsp+48h] [rbp-38h]
  __m128i v65; // [rsp+50h] [rbp-30h] BYREF
  __int128 v66; // [rsp+60h] [rbp-20h]
  __int128 v67; // [rsp+70h] [rbp-10h] BYREF
  __m128i v68; // [rsp+80h] [rbp+0h] BYREF
  __int64 v69; // [rsp+90h] [rbp+10h]
  __int64 v70; // [rsp+98h] [rbp+18h]
  __m128i v71; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v72; // [rsp+B0h] [rbp+30h]
  __int128 v73; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v74; // [rsp+D0h] [rbp+50h]
  const char *v75; // [rsp+D8h] [rbp+58h]
  __int64 v76; // [rsp+E0h] [rbp+60h]
  __int64 v77; // [rsp+E8h] [rbp+68h]
  void *v78; // [rsp+F0h] [rbp+70h]
  __m128i *v79; // [rsp+F8h] [rbp+78h]
  _QWORD *v80; // [rsp+100h] [rbp+80h]
  __m128i v81; // [rsp+108h] [rbp+88h] BYREF
  __m128i *v82; // [rsp+118h] [rbp+98h]
  __int64 (__fastcall *v83)(); // [rsp+120h] [rbp+A0h]
  _QWORD *v84; // [rsp+128h] [rbp+A8h]
  char v85; // [rsp+137h] [rbp+B7h] BYREF
  __int64 v86; // [rsp+138h] [rbp+B8h]

  v86 = -2;
  v84 = a1;
  v7 = (__int128 *)sub_1402928C0(0);
  if ( !v7 )
    sub_141937FD0(&off_141A229A8);
  v9 = *v7;
  ++*(_QWORD *)v7;
  v72 = xmmword_141A52790;
  v71 = *(__m128i *)&off_141A52780;
  v73 = v9;
  if ( a4 )
  {
    LOBYTE(v8) = 1;
    sub_1419161F0(&v71, a4, &v73, v8);
  }
  v10 = &a3[4 * a4];
  sub_1402ACFF0(a3, v10, &v71);
  v67 = v73;
  v66 = v72;
  v65 = _mm_load_si128(&v71);
  v12 = a2[1];
  v80 = a2;
  v13 = a2[2];
  while ( a3 != v10 )
  {
    v14 = a3;
    a3 += 4;
    v15 = v14[3].m128i_u64[0];
    if ( v15 < v13 )
    {
      v16 = v12 + (v15 << 8);
      if ( *(_BYTE *)(v16 + 252) != 1 )
        goto LABEL_18;
      v17 = _mm_loadu_si128(v14 + 2);
      sub_14034A780(
        (unsigned int)&v81,
        (_DWORD)v84,
        v14->m128i_i64[1],
        v14[1].m128i_i64[0],
        v17.m128i_i64[0],
        v17.m128i_i64[1]);
      if ( v81.m128i_i64[0] == -1 )
      {
        if ( v81.m128i_i8[8] )
        {
          v14[3].m128i_i8[8] = 1;
LABEL_18:
          if ( *(_QWORD *)off_1421E6EC0 < 2u )
            goto LABEL_20;
LABEL_19:
          v81.m128i_i64[0] = (__int64)v14;
          v81.m128i_i64[1] = (__int64)sub_140186F40;
          v82 = (__m128i *)&v14[1].m128i_u64[1];
          v83 = sub_1400015F0;
          v74 = 2;
          v75 = aCodexmateLibCo_47;
          v76 = 35;
          v78 = &unk_141A63712;
          v79 = &v81;
          v71.m128i_i64[0] = 0;
          v71.m128i_i64[1] = (__int64)aCodexmateLibCo_47;
          v72 = 0x23u;
          *(_QWORD *)&v73 = aSrcCoreRelaySt;
          *((_QWORD *)&v73 + 1) = 25;
          v77 = 0x1E100000001LL;
          sub_1414D53A0(&v85, &v71);
          goto LABEL_20;
        }
        *(_BYTE *)(v16 + 252) = 0;
        nullsub_1(v18);
        v20 = sub_140001650(82, 1);
        if ( !v20 )
          sub_141938D2B(1, 82);
        v21 = v20;
        *(_OWORD *)(v20 + 64) = xmmword_141A636B2;
        *(_OWORD *)(v20 + 48) = xmmword_141A636A2;
        *(_OWORD *)(v20 + 32) = xmmword_141A63692;
        *(_OWORD *)(v20 + 16) = xmmword_141A63682;
        *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)&xmmword_141A63672);
        *(_WORD *)(v20 + 80) = -23163;
        v22 = *(_QWORD *)(v16 + 168);
        if ( v22 != -1 && v22 )
          sub_140001660(*(_QWORD *)(v16 + 176), v22, 1);
        *(_QWORD *)(v16 + 168) = 82;
        *(_QWORD *)(v16 + 176) = v21;
        *(_QWORD *)(v16 + 184) = 82;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          goto LABEL_19;
      }
      else
      {
        *(_QWORD *)&v72 = v82;
        v71 = v81;
        *(_BYTE *)(v16 + 252) = 0;
        v68.m128i_i64[0] = (__int64)&v71;
        v68.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_1416ABFD0(&v63, &unk_141A636C4, &v68);
        v19 = *(_QWORD *)(v16 + 168);
        if ( v19 != -1 && v19 )
          sub_140001660(*(_QWORD *)(v16 + 176), v19, 1);
        *(_QWORD *)(v16 + 184) = v64;
        *(__m128i *)(v16 + 168) = _mm_loadu_si128(&v63);
        if ( !v71.m128i_i64[0] )
          goto LABEL_18;
        sub_140001660(v71.m128i_i64[1], v71.m128i_i64[0], 1);
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          goto LABEL_19;
      }
LABEL_20:
      sub_1416AC440(&v71, &v14[1].m128i_u64[1]);
      if ( *(_QWORD *)v16 )
        sub_140001660(*(_QWORD *)(v16 + 8), *(_QWORD *)v16, 1);
      *(_QWORD *)(v16 + 16) = v72;
      *(__m128i *)v16 = _mm_loadu_si128(&v71);
    }
  }
  v23 = sub_14167F170(v11);
  v28 = v23;
  if ( *(_BYTE *)(v23 + 16) == 1 )
  {
    v29 = *(_OWORD *)v23;
  }
  else
  {
    *(_QWORD *)&v29 = sub_141696260(v25, v24, v26, v27);
    *(_OWORD *)v28 = v29;
    *(_BYTE *)(v28 + 16) = 1;
  }
  *(_QWORD *)v28 = v29 + 1;
  v72 = *(&off_141A56DB0 + 1);
  v71 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
  v73 = v29;
  v30 = v80;
  v32 = v80[5];
  v81.m128i_i64[0] = v80[4];
  v31 = v81.m128i_i64[0];
  v81.m128i_i64[1] = v81.m128i_i64[0] + 24 * v32;
  v82 = &v65;
  v83 = (__int64 (__fastcall *)())&v71;
  sub_1403D5F50(&v68, &v81);
  v33 = (__m128i *)(v30 + 3);
  if ( v32 )
  {
    v34 = (_QWORD *)(v31 + 8);
    do
    {
      v35 = *(v34 - 1);
      if ( v35 )
        sub_140001660(*v34, v35, 1);
      v34 += 3;
      --v32;
    }
    while ( v32 );
  }
  if ( v33->m128i_i64[0] )
    sub_140001660(v31, 24 * v33->m128i_i64[0], 8);
  v30[5] = v69;
  *v33 = _mm_loadu_si128(&v68);
  v36 = (_QWORD *)v30[17];
  _RAX = 9LL * v30[18];
  v38 = &v36[9 * v30[18]];
  v84 = v38;
LABEL_48:
  while ( v36 != v38 )
  {
    v48 = v36;
    v36 += 9;
    if ( *((_QWORD *)&v66 + 1) )
    {
      v47 = sub_140D2AC70(&v67, v48);
      _RCX = v47 >> 57;
      v49 = v65;
      v50 = _mm_cvtsi32_si128(v47 >> 57);
      v51 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v50, v50), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        _RAX = v49.m128i_i64[1] & v47;
        v39 = _mm_loadu_si128((const __m128i *)(v49.m128i_i64[0] + _RAX));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v39, v51));
        if ( _R12D )
          break;
LABEL_43:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v39, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_48;
        v47 = i + _RAX + 16;
      }
      v41 = v48[2];
      v80 = (_QWORD *)_RAX;
      v70 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r12d }
        _RCX = -(__int64)(v49.m128i_i64[1] & (_RAX + _RCX));
        if ( v41 == *(_QWORD *)(v49.m128i_i64[0] + 48 * _RCX - 32) )
        {
          v43 = v49.m128i_i64[0] + 48 * _RCX;
          if ( !(unsigned int)sub_1418F4B70(v48[1], *(_QWORD *)(v43 - 40)) )
            break;
        }
        v44 = _R12D - 1;
        LOWORD(v44) = _R12D & (_R12D - 1);
        v45 = (_WORD)v44 == 0;
        _R12D = v44;
        _RAX = (__int64)v80;
        v38 = v84;
        i = v70;
        if ( v45 )
          goto LABEL_43;
      }
      sub_1416AC440(&v81, v43 - 24);
      v38 = v84;
      if ( *v48 )
        sub_140001660(v48[1], *v48, 1);
      HIDWORD(_RAX) = HIDWORD(v82);
      v48[2] = v82;
      *(__m128i *)v48 = _mm_loadu_si128(&v81);
    }
  }
  v52 = v71.m128i_i64[1];
  if ( v71.m128i_i64[1] )
  {
    v53 = *((_QWORD *)&v72 + 1);
    if ( *((_QWORD *)&v72 + 1) )
    {
      v54 = v71.m128i_i64[0];
      v55 = (const __m128i *)(v71.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v71.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v55);
            v54 -= 384;
            ++v55;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
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
    v60 = (24 * v52 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v61 = v60 + v52 + 17;
    if ( v61 )
      sub_140001660(v71.m128i_i64[0] - v60, v61, 16);
  }
  return sub_14036FB80(&v65);
}
