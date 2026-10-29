_QWORD *__fastcall sub_14116A730(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbx
  char v15; // r12
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r8
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // r15
  _QWORD *v54; // rbx
  __int64 v55; // rsi
  __int64 v56; // rdi
  _QWORD *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rax
  __m128i v62; // xmm0
  __int64 v63; // rsi
  _QWORD *v64; // rdi
  __int64 v65; // rdx
  __m128i v66; // [rsp+30h] [rbp-50h] BYREF
  __int64 v67; // [rsp+40h] [rbp-40h]
  __m128i v68; // [rsp+50h] [rbp-30h] BYREF
  __int64 v69; // [rsp+60h] [rbp-20h]
  __int64 v70; // [rsp+68h] [rbp-18h]
  __m128i v71; // [rsp+70h] [rbp-10h] BYREF
  __m128i v72[2]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v73; // [rsp+A8h] [rbp+28h]
  _OWORD v74[2]; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int128 v75; // [rsp+D8h] [rbp+58h] BYREF
  __m128i v76; // [rsp+E8h] [rbp+68h] BYREF
  __m128i v77; // [rsp+F8h] [rbp+78h]
  __int64 v78; // [rsp+108h] [rbp+88h] BYREF
  __int64 v79; // [rsp+110h] [rbp+90h]
  __int64 v80; // [rsp+118h] [rbp+98h]
  __int64 v81; // [rsp+120h] [rbp+A0h]
  __int64 v82; // [rsp+128h] [rbp+A8h]
  __int64 v83; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v84; // [rsp+138h] [rbp+B8h]
  __int64 v85; // [rsp+140h] [rbp+C0h]
  _QWORD *v86; // [rsp+148h] [rbp+C8h]
  __int64 v87; // [rsp+150h] [rbp+D0h]
  __int64 v88; // [rsp+158h] [rbp+D8h]
  __int64 v89; // [rsp+160h] [rbp+E0h]
  __int64 v90; // [rsp+168h] [rbp+E8h]
  __int64 v91; // [rsp+170h] [rbp+F0h]
  __int64 v92; // [rsp+178h] [rbp+F8h]
  __int64 v93; // [rsp+188h] [rbp+108h]
  __int64 v94; // [rsp+190h] [rbp+110h]
  char v95; // [rsp+19Eh] [rbp+11Eh]
  char v96; // [rsp+19Fh] [rbp+11Fh]
  __int64 v97; // [rsp+1A0h] [rbp+120h]

  v97 = -2;
  v6 = a3;
  sub_1408FEA60(a3, a4);
  if ( !v10 )
  {
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    *((_BYTE *)a1 + 24) = 0;
    return a1;
  }
  v87 = a2;
  v86 = a1;
  v83 = 0;
  v84 = 8;
  v11 = -1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v73 = v6;
LABEL_3:
  v85 = v12;
  v16 = v13;
  while ( 1 )
  {
    v93 = v11;
    v94 = v4;
    if ( (v15 & 1) != 0 )
      break;
    if ( a4 < v14 )
    {
      v13 = v14;
LABEL_18:
      v14 = v13;
      LOBYTE(v9) = 1;
      v13 = v16;
      v21 = a4;
      if ( a4 != v16 )
        goto LABEL_19;
      break;
    }
    while ( 1 )
    {
      v17 = a4 - v14;
      v18 = v6 + v14;
      if ( a4 - v14 >= 0x10 )
      {
        v90 = v4;
        v89 = v11;
        v96 = 1;
        LOBYTE(v9) = 10;
        v20 = sub_1416E2CC0(v9, v6 + v14);
        v11 = v93;
        v4 = v94;
        if ( v20 != 1 )
        {
LABEL_17:
          v13 = a4;
          goto LABEL_18;
        }
      }
      else
      {
        v19 = 0;
        if ( !v17 )
          goto LABEL_17;
        while ( *(_BYTE *)(v18 + v19) != 10 )
        {
          if ( v17 == ++v19 )
            goto LABEL_17;
        }
      }
      v13 = v19 + v14 + 1;
      if ( v19 + v14 < a4 && *(_BYTE *)(v18 + v19) == 10 )
        break;
      v14 += v19 + 1;
      if ( v13 > a4 )
        goto LABEL_18;
    }
    LODWORD(v9) = 0;
    v14 += v19 + 1;
    v21 = v13;
LABEL_19:
    LODWORD(v92) = v9;
    v22 = v21 - v16;
    if ( v21 != v16 && *(_BYTE *)(v6 + v21 - 1) == 10 )
    {
      if ( v22 == 1 )
      {
        v22 = 0;
      }
      else if ( *(_BYTE *)(v6 + v21 - 2) == 13 )
      {
        v22 -= 2LL;
      }
      else
      {
        --v22;
      }
    }
    v90 = v4;
    v89 = v11;
    v96 = 1;
    v23 = v6 + v16;
    v24 = sub_14116A2A0(v6 + v16, v22, aEvent_5, 5);
    if ( v24 )
    {
      v90 = v94;
      v89 = v93;
      v96 = 1;
      v26 = sub_1408FEA60(v24, v25);
      v91 = v27;
      v29 = v27;
      if ( v27 < 0 )
      {
        v32 = 0;
        goto LABEL_47;
      }
      if ( v91 )
      {
        v30 = v26;
        nullsub_1(v28, v27);
        v31 = v29;
        v32 = 1;
        v33 = sub_140001650(v31, 1);
        if ( v33 )
        {
          v88 = v33;
          v29 = v91;
          sub_1419234B0(v33, v30, v91);
          v34 = v93;
          v35 = v94;
          if ( v93 > 0 )
            goto LABEL_31;
          goto LABEL_32;
        }
        v88 = v91;
LABEL_47:
        v90 = v94;
        v89 = v93;
        v96 = 1;
        sub_14196B2DB(v32, v88);
      }
      v88 = 1;
      v34 = v93;
      v35 = v94;
      if ( v93 > 0 )
LABEL_31:
        sub_140001660(v35, v34, 1);
LABEL_32:
      v36 = v88;
      v37 = v29;
      v6 = v73;
    }
    else
    {
      v37 = v93;
      v36 = v94;
    }
    v94 = v36;
    v90 = v36;
    v93 = v37;
    v89 = v37;
    v96 = 1;
    v38 = sub_14116A2A0(v23, v22, aData_10, 4);
    v16 = v13;
    v11 = v93;
    v4 = v94;
    v15 = v92;
    if ( v38 )
    {
      if ( v39 < 0 )
      {
        v59 = 0;
        goto LABEL_74;
      }
      v81 = v39;
      if ( v39 )
      {
        v70 = v38;
        nullsub_1(v9, v39);
        v40 = sub_140001650(v81, 1);
        if ( v40 )
        {
          v82 = v40;
          sub_1419234B0(v40, v70, v81);
          goto LABEL_43;
        }
        v82 = v81;
        v59 = 1;
        v11 = v93;
LABEL_74:
        v90 = v4;
        v89 = v11;
        v96 = 1;
        sub_14196B2DB(v59, v82);
      }
      v82 = 1;
LABEL_43:
      v41 = v85;
      if ( v85 == v83 )
        sub_141939F90(&v83);
      v42 = v84;
      v9 = 3 * v41;
      v43 = v81;
      *(_QWORD *)(v84 + 8 * v9) = v81;
      *(_QWORD *)(v42 + 8 * v9 + 8) = v82;
      *(_QWORD *)(v42 + 8 * v9 + 16) = v43;
      v12 = v41 + 1;
      v11 = v93;
      v4 = v94;
      goto LABEL_3;
    }
  }
  if ( v85 )
  {
    v90 = v4;
    v89 = v11;
    v96 = 1;
    sub_14116F1A0((unsigned int)&v75, v84, v85, (unsigned int)aContentBlockSt, 1);
    v92 = v75;
    v75 = __PAIR128__(v76.m128i_u64[0], *((unsigned __int64 *)&v75 + 1));
    v76 = 0;
    v88 = v75;
    v77 = (__m128i)v75;
    sub_141171E40(&v71, &v75);
    a1 = v86;
    if ( v71.m128i_i8[0] != -1 )
    {
      v45 = _mm_loadu_si128(&v71);
      v74[1] = _mm_loadu_si128(v72);
      v74[0] = v45;
      if ( v92 )
        sub_140001660(v88, v92, 1);
      v95 = 1;
      v46 = sub_1416724D0(aType_14, 4, v74);
      if ( v46 && *(_BYTE *)v46 == 3 )
      {
        v49 = *(_QWORD *)(v46 + 24);
        if ( v49 < 0 )
        {
          v50 = 0;
          goto LABEL_58;
        }
        if ( v49 )
        {
          v60 = *(_QWORD *)(v46 + 16);
          nullsub_1(v48, v47);
          v50 = 1;
          v61 = sub_140001650(v49, 1);
          v54 = v86;
          if ( !v61 )
          {
LABEL_58:
            v95 = 1;
            sub_14196B2DB(v50, v49);
          }
          v53 = v61;
          sub_1419234B0(v61, v60, v49);
        }
        else
        {
          v53 = 1;
          v54 = v86;
        }
        v52 = v94;
        v51 = v93;
        if ( v93 > 0 )
          sub_140001660(v94, v93, 1);
        v91 = v49;
      }
      else
      {
        v51 = v93;
        v49 = v93;
        v52 = v94;
        v53 = v94;
        v54 = v86;
        if ( v93 == -1 )
        {
          v53 = 1;
          v49 = 0;
LABEL_97:
          v78 = 0;
          v79 = 8;
          v80 = 0;
LABEL_102:
          v54[2] = v80;
          *v54 = v78;
          v54[1] = v79;
          *((_BYTE *)v54 + 24) = 0;
          if ( v49 )
            sub_140001660(v53, v49, 1);
          v90 = v52;
          v89 = v51;
          v96 = 0;
          sub_14115A970(v74);
          v63 = v85;
          if ( v85 )
          {
            v64 = (_QWORD *)(v84 + 8);
            do
            {
              v65 = *(v64 - 1);
              if ( v65 )
                sub_140001660(*v64, v65, 1);
              v64 += 3;
              --v63;
            }
            while ( v63 );
          }
LABEL_109:
          a1 = v86;
          if ( v83 )
            sub_140001660(v84, 24 * v83, 8);
          return a1;
        }
      }
      switch ( v91 )
      {
        case 5LL:
          if ( *(_DWORD *)v53 ^ 0x6F727265 | *(unsigned __int8 *)(v53 + 4) ^ 0x72 )
            goto LABEL_97;
          v91 = v53;
          v92 = v49;
          sub_14116A460(&v75, v74);
          v69 = v76.m128i_i64[0];
          v68 = (__m128i)v75;
          v67 = v77.m128i_i64[1];
          v66 = _mm_loadu_si128((const __m128i *)&v76.m128i_u64[1]);
          sub_141165BB0(&v75, v87, &v68, &v66);
          v62 = _mm_loadu_si128((const __m128i *)&v75);
          v72[0] = _mm_loadu_si128(&v76);
          v71 = v62;
          sub_141178770(&v75, &v71);
          v54[2] = v76.m128i_i64[0];
          *(__m128i *)v54 = _mm_loadu_si128((const __m128i *)&v75);
          *((_BYTE *)v54 + 24) = 1;
          if ( v92 )
            sub_140001660(v91, v92, 1);
          v90 = v94;
          v89 = v93;
          v96 = 0;
          sub_14115A970(v74);
          sub_1402346F0(&v83);
          goto LABEL_109;
        case 12LL:
          if ( *(_QWORD *)v53 ^ 0x5F6567617373656DLL | *(unsigned int *)(v53 + 8) ^ 0x706F7473LL )
            goto LABEL_97;
          v91 = v53;
          v92 = v49;
          sub_1411699C0(&v78, v87);
          goto LABEL_101;
        case 13LL:
          if ( *(_QWORD *)v53 ^ 0x5F6567617373656DLL | *(_QWORD *)(v53 + 5) ^ 0x74726174735F6567LL )
          {
            if ( *(_QWORD *)v53 ^ 0x5F6567617373656DLL | *(_QWORD *)(v53 + 5) ^ 0x61746C65645F6567LL )
              goto LABEL_96;
            v91 = v53;
            v92 = v49;
            sub_141167520(&v78, v87, v74);
          }
          else
          {
            v91 = v53;
            v92 = v49;
            sub_141167650(&v78, v87, v74);
          }
          goto LABEL_101;
        case 18LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v53 + 16)), (__m128i)xmmword_141A45170),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v53), (__m128i)xmmword_141A45160))) != 0xFFFF )
            goto LABEL_97;
          v91 = v53;
          v92 = v49;
          sub_141167CF0(&v78, v87, v74);
          goto LABEL_101;
        case 19LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v53), (__m128i)xmmword_141A45160),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v53 + 3)), (__m128i)xmmword_141A45180))) == 0xFFFF )
          {
            v91 = v53;
            v92 = v49;
            sub_141168750(&v78, v87, v74);
          }
          else
          {
            if ( _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v53), (__m128i)xmmword_141A35010),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v53 + 3)), (__m128i)xmmword_141A35000))) != 0xFFFF )
            {
LABEL_96:
              v51 = v93;
              v52 = v94;
              goto LABEL_97;
            }
            v91 = v53;
            v92 = v49;
            sub_141167D60(&v78, v87, v74);
          }
LABEL_101:
          v51 = v93;
          v52 = v94;
          v49 = v92;
          v53 = v91;
          break;
        default:
          goto LABEL_97;
      }
      goto LABEL_102;
    }
    sub_140032F30(&v71.m128i_u64[1]);
    if ( v92 )
      sub_140001660(v88, v92, 1);
    v55 = v84;
    v56 = v85;
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
    *((_BYTE *)a1 + 24) = 0;
    if ( v56 )
    {
      v57 = (_QWORD *)(v55 + 8);
      do
      {
        v58 = *(v57 - 1);
        if ( v58 )
          sub_140001660(*v57, v58, 1);
        v57 += 3;
        --v56;
      }
      while ( v56 );
    }
  }
  else
  {
    a1 = v86;
    *v86 = 0;
    a1[1] = 8;
    a1[2] = 0;
    *((_BYTE *)a1 + 24) = 0;
  }
  if ( v83 )
    sub_140001660(v84, 24 * v83, 8);
  if ( v93 > 0 )
    sub_140001660(v94, v93, 1);
  return a1;
}
