// win 1.2.7 latest-exe | module src/core/relay/models.rs | ea 0x1409f94c0 | successor of pre-update 0x14102c620 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.954, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1409F94C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  char *v29; // r13
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  unsigned __int8 *v34; // r12
  char *v35; // rcx
  unsigned int v36; // r8d
  int v37; // r9d
  int v38; // r11d
  int v39; // r8d
  unsigned __int8 v40; // r10
  unsigned int v41; // eax
  int v42; // ecx
  int v43; // r9d
  int v44; // eax
  unsigned __int8 v45; // r8
  __int64 v46; // r12
  char v47; // r13
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  __m128i v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // r14
  const __m128i *v59; // r15
  const __m128i *v61; // rdi
  unsigned __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // r14
  const __m128i *v68; // r15
  __m128i v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // rdx
  __m128i si128; // xmm0
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rdi
  _QWORD *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __m128i v84; // xmm0
  unsigned __int64 v85; // rax
  __int64 v86; // rdi
  unsigned __int64 v87; // rdx
  _BYTE v88[24]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v89[24]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v90; // [rsp+50h] [rbp-30h] BYREF
  __int64 v91; // [rsp+60h] [rbp-20h]
  __m128i v92; // [rsp+68h] [rbp-18h] BYREF
  __int64 v93; // [rsp+78h] [rbp-8h]
  __m128i v94; // [rsp+80h] [rbp+0h] BYREF
  __int64 v95; // [rsp+90h] [rbp+10h]
  unsigned __int64 v96; // [rsp+98h] [rbp+18h]
  __m128i v97; // [rsp+A0h] [rbp+20h]
  __m128i v98; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v99; // [rsp+C0h] [rbp+40h]
  __int64 v100; // [rsp+D0h] [rbp+50h]
  unsigned __int64 v101; // [rsp+D8h] [rbp+58h]
  __int64 v102; // [rsp+E8h] [rbp+68h]
  __m128i v103; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v104; // [rsp+100h] [rbp+80h]
  __m128i v105; // [rsp+110h] [rbp+90h] BYREF
  __int64 v106; // [rsp+120h] [rbp+A0h]
  __m512i v107; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v108; // [rsp+170h] [rbp+F0h]
  __int128 v109; // [rsp+180h] [rbp+100h]
  __m128i v110; // [rsp+190h] [rbp+110h] BYREF
  __int64 v111; // [rsp+1A0h] [rbp+120h]
  char *v112; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v113; // [rsp+1B0h] [rbp+130h]
  char *v114; // [rsp+1B8h] [rbp+138h]
  __int64 v115; // [rsp+1C0h] [rbp+140h]
  char v116; // [rsp+1CEh] [rbp+14Eh]
  char v117; // [rsp+1CFh] [rbp+14Fh]
  __int64 v118; // [rsp+1D0h] [rbp+150h]

  v118 = -2;
  v6 = a1;
  if ( !a3 )
  {
    sub_1409F9240(&v107, a4, a5);
    v98 = *(__m128i *)&v107.m512i_u64[1];
    *(_QWORD *)&v99 = v107.m512i_i64[3];
    if ( v107.m512i_i8[0] )
    {
      *(_QWORD *)(v6 + 24) = v99;
      *(__m128i *)(v6 + 8) = _mm_load_si128(&v98);
      *(_QWORD *)v6 = -1;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v99;
      *(__m128i *)(v6 + 24) = _mm_load_si128(&v98);
      *(_QWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = 8;
      *(_QWORD *)(v6 + 16) = 0;
      *(_BYTE *)(v6 + 48) = a6;
    }
    return v6;
  }
  v8 = a2;
  v9 = 96 * a3;
  nullsub_1(a1, a2);
  v10 = sub_140001650(v9, 8);
  if ( !v10 )
    sub_14196B2DB(8, v9);
  v110.m128i_i64[0] = a3;
  v110.m128i_i64[1] = v10;
  v111 = 0;
  v12 = sub_1416AE140(v11);
  v14 = v12;
  if ( *(_BYTE *)(v12 + 16) == 1 )
  {
    v15 = *(_QWORD *)v12;
    v16 = *(_QWORD *)(v12 + 8);
  }
  else
  {
    v15 = sub_1416C5230();
    v16 = v87;
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v87;
    *(_BYTE *)(v14 + 16) = 1;
  }
  *(_QWORD *)v14 = v15 + 1;
  LOBYTE(v13) = 1;
  sub_1400225A0(&v107, 24, a3, v13);
  v99 = *(_OWORD *)&v107.m512i_u64[2];
  v98 = _mm_loadu_si128((const __m128i *)&v107);
  v100 = v15;
  v101 = v16;
  v17 = v8 + 96 * a3;
  if ( v8 == v17 )
  {
LABEL_55:
    if ( !v111 )
      sub_14196B673(0, 0, &off_141A65C60);
    sub_1416DB410(&v105, v110.m128i_i64[1] + 16);
    if ( !v111 )
      sub_14196B673(0, 0, &off_141A65C78);
    _RAX = *(unsigned __int8 *)(v110.m128i_i64[1] + 88);
    v107.m512i_i64[2] = v111;
    *(__m128i *)v107.m512i_i8 = _mm_loadu_si128(&v110);
    v107.m512i_i64[5] = v106;
    *(__m128i *)&v107.m512i_u64[3] = v105;
    *(_OWORD *)v6 = *(_OWORD *)v107.m512i_i8;
    *(_OWORD *)(v6 + 32) = *(_OWORD *)&v107.m512i_u64[4];
    *(_OWORD *)(v6 + 16) = *(_OWORD *)&v107.m512i_u64[2];
    *(_BYTE *)(v6 + 48) = _RAX;
    v56 = v98.m128i_i64[1];
    if ( v98.m128i_i64[1] )
    {
      v57 = *((_QWORD *)&v99 + 1);
      if ( *((_QWORD *)&v99 + 1) )
      {
        v58 = v98.m128i_i64[0];
        v59 = (const __m128i *)(v98.m128i_i64[0] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v98.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              si128 = _mm_load_si128(v59);
              v58 -= 384;
              ++v59;
              _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v74 = -3 * _RAX;
          v75 = *(_QWORD *)(v58 + 8 * v74 - 24);
          if ( v75 )
            sub_140001660(*(_QWORD *)(v58 + 8 * v74 - 16), v75, 1);
          --v57;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v57 );
      }
      v85 = (24 * v56 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v86 = v85 + v56 + 17;
      if ( v86 )
        sub_140001660(v98.m128i_i64[0] - v85, v86, 16);
    }
    return v6;
  }
  while ( 1 )
  {
    sub_1409F9240(&v107, *(_QWORD *)(v8 + 24), *(_QWORD *)(v8 + 32));
    v105 = *(__m128i *)&v107.m512i_u64[1];
    v106 = v107.m512i_i64[3];
    if ( v107.m512i_i32[0] == 1 )
    {
      HIDWORD(_RAX) = HIDWORD(v106);
      *(_QWORD *)(v6 + 24) = v106;
      *(__m128i *)(v6 + 8) = _mm_load_si128(&v105);
      *(_QWORD *)v6 = -1;
      goto LABEL_67;
    }
    v104 = v106;
    v103 = _mm_load_si128(&v105);
    v116 = 1;
    sub_1416DB410(&v107, &v103);
    v116 = 1;
    if ( (unsigned __int8)sub_140871180(&v98, &v107) )
    {
      v107.m512i_i64[0] = (__int64)&v103;
      v107.m512i_i64[1] = (__int64)sub_1400015F0;
      v116 = 1;
      sub_1416DAFA0(&v94, &unk_141A65B66, &v107);
      HIDWORD(_RAX) = HIDWORD(v95);
      *(_QWORD *)(v6 + 24) = v95;
      v84 = _mm_loadu_si128(&v94);
      goto LABEL_103;
    }
    v18 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 && (unsigned __int64)(*(_QWORD *)(v8 + 8) - 1LL) >= 0x989680 )
    {
      v107.m512i_i64[0] = (__int64)&v103;
      v107.m512i_i64[1] = (__int64)sub_1400015F0;
      v107.m512i_i64[2] = (__int64)&unk_141A65B88;
      v107.m512i_i64[3] = (__int64)sub_1416EBBB0;
      v116 = 1;
      sub_1416DAFA0(&v92, &unk_141A65B90, &v107);
      HIDWORD(_RAX) = HIDWORD(v93);
      *(_QWORD *)(v6 + 24) = v93;
      v84 = v92;
LABEL_103:
      *(__m128i *)(v6 + 8) = v84;
      *(_QWORD *)v6 = -1;
      v64 = v103.m128i_i64[0];
      if ( v103.m128i_i64[0] )
        goto LABEL_66;
      goto LABEL_67;
    }
    v19 = -1;
    if ( *(_QWORD *)(v8 + 64) == -1 )
    {
      v102 = *(_QWORD *)v8;
      goto LABEL_21;
    }
    v20 = sub_1408FEA60(*(_QWORD *)(v8 + 72), *(_QWORD *)(v8 + 80));
    if ( !v21 )
    {
      v102 = v18;
      v19 = -1;
      goto LABEL_21;
    }
    if ( v21 < 0 )
    {
      v26 = 0;
      goto LABEL_96;
    }
    v23 = v21;
    v102 = v18;
    v24 = v6;
    v25 = v20;
    nullsub_1(v22, v21);
    v26 = 1;
    v27 = sub_140001650(v23, 1);
    if ( !v27 )
    {
      v16 = v23;
LABEL_96:
      v116 = 1;
      sub_14196B2DB(v26, v16);
    }
    v16 = v27;
    sub_1419234B0(v27, v25, v23);
    v114 = (char *)v16;
    v113 = v23;
    v117 = 1;
    if ( v23 >= 0x20 )
      v28 = sub_1416E23D0(v16, v23);
    else
      v28 = sub_1416E29F0(v16, v23);
    v6 = v24;
    if ( v28 >= 0x81 )
    {
      v107.m512i_i64[0] = (__int64)&v103;
      v107.m512i_i64[1] = (__int64)sub_1400015F0;
      v107.m512i_i64[2] = (__int64)&unk_141A65C28;
      v107.m512i_i64[3] = (__int64)sub_1416EBAE0;
      v114 = (char *)v16;
      v113 = v23;
      v117 = 1;
      sub_1416DAFA0(&v90, &unk_141A65C30, &v107);
      *(_QWORD *)(v24 + 24) = v91;
      *(_OWORD *)(v24 + 8) = v90;
      *(_QWORD *)v24 = -1;
      v63 = v23;
      goto LABEL_64;
    }
    v19 = v23;
    v96 = v23;
LABEL_21:
    v29 = *(char **)(v8 + 48);
    v30 = *(_QWORD *)(v8 + 56);
    v115 = v19;
    v114 = (char *)v16;
    v113 = v19;
    v117 = 1;
    v31 = v30 >= 0x20 ? sub_1416E23D0(v29, v30) : sub_1416E29F0(v29, v30);
    if ( v31 > 8 )
      break;
    v112 = (char *)v16;
    v32 = v8 + 96;
    v33 = v8 + 40;
    v34 = (unsigned __int8 *)&v29[v30];
    if ( v115 == -1 )
      goto LABEL_51;
    v35 = v112;
    while ( v35 != &v112[v96] )
    {
      v36 = (unsigned __int8)*v35;
      if ( *v35 < 0 )
      {
        v37 = v36 & 0x1F;
        v38 = v35[1] & 0x3F;
        if ( (unsigned __int8)v36 <= 0xDFu )
        {
          v35 += 2;
          v36 = v38 | (v37 << 6);
          if ( v36 < 0x20 )
            goto LABEL_62;
        }
        else
        {
          v39 = (v38 << 6) | v35[2] & 0x3F;
          if ( (unsigned __int8)*v35 < 0xF0u )
          {
            v35 += 3;
            v36 = (v37 << 12) | v39;
            if ( v36 < 0x20 )
              goto LABEL_62;
          }
          else
          {
            v40 = v35[3];
            v35 += 4;
            v36 = ((v37 & 7) << 18) | (v39 << 6) | v40 & 0x3F;
            if ( v36 < 0x20 )
              goto LABEL_62;
          }
        }
      }
      else
      {
        ++v35;
        if ( v36 < 0x20 )
          goto LABEL_62;
      }
      if ( v36 - 127 < 0x21 )
      {
LABEL_62:
        v107.m512i_i64[0] = (__int64)&v103;
        v107.m512i_i64[1] = (__int64)sub_1400015F0;
        v16 = (unsigned __int64)v112;
        v114 = v112;
        v113 = v115;
        v117 = 1;
        v61 = (const __m128i *)v88;
        sub_1416DAFA0(v88, &unk_141A65BBF, &v107);
        goto LABEL_63;
      }
    }
LABEL_51:
    while ( v29 != (char *)v34 )
    {
      v41 = (unsigned __int8)*v29;
      if ( *v29 < 0 )
      {
        v42 = v41 & 0x1F;
        v43 = v29[1] & 0x3F;
        if ( (unsigned __int8)v41 <= 0xDFu )
        {
          v29 += 2;
          v41 = v43 | (v42 << 6);
          if ( v41 < 0x20 )
            goto LABEL_62;
        }
        else
        {
          v44 = (v43 << 6) | v29[2] & 0x3F;
          if ( (unsigned __int8)*v29 < 0xF0u )
          {
            v29 += 3;
            v41 = (v42 << 12) | v44;
            if ( v41 < 0x20 )
              goto LABEL_62;
          }
          else
          {
            v45 = v29[3];
            v29 += 4;
            v41 = ((v42 & 7) << 18) | (v44 << 6) | v45 & 0x3F;
            if ( v41 < 0x20 )
              goto LABEL_62;
          }
        }
      }
      else
      {
        ++v29;
        if ( v41 < 0x20 )
          goto LABEL_62;
      }
      if ( v41 - 127 < 0x21 )
        goto LABEL_62;
    }
    v97 = v103;
    v46 = v104;
    v47 = *(_BYTE *)(v8 + 88);
    v48 = *(_QWORD *)(v8 + 8);
    sub_1416DB410(&v105, v33);
    *(__m128i *)&v107.m512i_u64[2] = v97;
    v107.m512i_i64[4] = v46;
    BYTE8(v109) = v47;
    v107.m512i_i64[0] = v102;
    v107.m512i_i64[1] = v48;
    *(_QWORD *)&v108 = v115;
    *((_QWORD *)&v108 + 1) = v112;
    *(_QWORD *)&v109 = v96;
    v107.m512i_i64[7] = v106;
    *(__m128i *)&v107.m512i_u64[5] = v105;
    v49 = v111;
    if ( v111 == v110.m128i_i64[0] )
      sub_14193A380(&v110);
    v50 = v110.m128i_i64[1];
    v51 = 96 * v49;
    *(_OWORD *)(v110.m128i_i64[1] + v51 + 80) = v109;
    *(_OWORD *)(v50 + v51 + 64) = v108;
    v52 = _mm_loadu_si128((const __m128i *)&v107);
    v53 = *(_OWORD *)&v107.m512i_u64[2];
    v54 = *(_OWORD *)&v107.m512i_u64[4];
    *(_OWORD *)(v50 + v51 + 48) = *(_OWORD *)&v107.m512i_u64[6];
    *(_OWORD *)(v50 + v51 + 32) = v54;
    *(_OWORD *)(v50 + v51 + 16) = v53;
    *(__m128i *)(v50 + v51) = v52;
    v111 = v49 + 1;
    v8 = v32;
    v16 = (unsigned __int64)v112;
    if ( v8 == v17 )
      goto LABEL_55;
  }
  v107.m512i_i64[0] = (__int64)&v103;
  v107.m512i_i64[1] = (__int64)sub_1400015F0;
  v107.m512i_i64[2] = (__int64)&unk_141A65BF8;
  v107.m512i_i64[3] = (__int64)sub_1416EBAE0;
  v114 = (char *)v16;
  v113 = v115;
  v117 = 1;
  v61 = (const __m128i *)v89;
  sub_1416DAFA0(v89, &unk_141A65C00, &v107);
LABEL_63:
  _RAX = v61[1].m128i_i64[0];
  *(_QWORD *)(v6 + 24) = _RAX;
  *(__m128i *)(v6 + 8) = _mm_loadu_si128(v61);
  *(_QWORD *)v6 = -1;
  v63 = v115;
  if ( v115 != -1 )
LABEL_64:
    sub_140001660(v16, v63, 1);
  v64 = v103.m128i_i64[0];
  if ( v103.m128i_i64[0] )
LABEL_66:
    sub_140001660(v103.m128i_i64[1], v64, 1);
LABEL_67:
  v65 = v98.m128i_i64[1];
  if ( v98.m128i_i64[1] )
  {
    v66 = *((_QWORD *)&v99 + 1);
    if ( *((_QWORD *)&v99 + 1) )
    {
      v67 = v98.m128i_i64[0];
      v68 = (const __m128i *)(v98.m128i_i64[0] + 16);
      _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v98.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v70 = _mm_load_si128(v68);
            v67 -= 384;
            ++v68;
            _R12D = _mm_movemask_epi8(v70) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v71 = -3 * _RAX;
        v72 = *(_QWORD *)(v67 + 8 * v71 - 24);
        if ( v72 )
          sub_140001660(*(_QWORD *)(v67 + 8 * v71 - 16), v72, 1);
        --v66;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v66 );
    }
    v76 = (24 * v65 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v77 = v76 + v65 + 17;
    if ( v77 )
      sub_140001660(v98.m128i_i64[0] - v76, v77, 16);
  }
  v78 = v111;
  if ( v111 )
  {
    v79 = (_QWORD *)(v110.m128i_i64[1] + 72);
    do
    {
      v80 = *(v79 - 7);
      if ( v80 )
        sub_140001660(*(v79 - 6), v80, 1);
      v81 = *(v79 - 1);
      if ( v81 > 0 )
        sub_140001660(*v79, v81, 1);
      v82 = *(v79 - 4);
      if ( v82 )
        sub_140001660(*(v79 - 3), v82, 1);
      v79 += 12;
      --v78;
    }
    while ( v78 );
  }
  if ( v110.m128i_i64[0] )
    sub_140001660(v110.m128i_i64[1], 96 * v110.m128i_i64[0], 8);
  return v6;
}
