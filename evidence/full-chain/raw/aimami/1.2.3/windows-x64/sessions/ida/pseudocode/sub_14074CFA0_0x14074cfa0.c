// module: codexmate_lib/core/sessions
// addr: 0x14074cfa0
// name: sub_14074CFA0
// win 1.2.1 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_14074CFA0(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __m128i si128; // xmm6
  __m128i v7; // xmm7
  __m128i v8; // xmm8
  __m128i v9; // xmm9
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 v16; // r12
  _QWORD *v17; // rbx
  __int64 *i; // rax
  __int64 *v19; // r13
  __int64 v20; // r14
  __int64 v21; // r15
  unsigned __int64 v22; // xmm10_8
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r11
  __int64 v35; // rcx
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  __int64 v41; // rdx
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __int64 v44; // rdx
  unsigned __int64 v45; // r8
  char v46; // r9
  char v47; // cl
  char v48; // cl
  char v49; // cl
  char v50; // cl
  char v51; // al
  unsigned __int64 v52; // r14
  __int64 v53; // rdx
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __m128i *result; // rax
  __int64 v57; // rsi
  int v58[4]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v59; // [rsp+38h] [rbp-48h]
  __int64 v60; // [rsp+40h] [rbp-40h]
  __int64 v61; // [rsp+60h] [rbp-20h]
  _QWORD *v62; // [rsp+68h] [rbp-18h]
  __int64 v63; // [rsp+70h] [rbp-10h]
  __int64 v64; // [rsp+78h] [rbp-8h]
  __int64 v65; // [rsp+80h] [rbp+0h]
  _BYTE v66[8]; // [rsp+88h] [rbp+8h]
  __int64 v67; // [rsp+90h] [rbp+10h]
  char v68; // [rsp+98h] [rbp+18h]
  __m128i v69; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v70; // [rsp+B0h] [rbp+30h]
  __m128i v71; // [rsp+C0h] [rbp+40h]
  _QWORD v72[2]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v73; // [rsp+E0h] [rbp+60h]
  __int64 v74; // [rsp+E8h] [rbp+68h]
  __m128i v75; // [rsp+F0h] [rbp+70h]
  __m128i *v76; // [rsp+100h] [rbp+80h]
  __int64 v77; // [rsp+108h] [rbp+88h] BYREF
  __int64 v78; // [rsp+110h] [rbp+90h]
  unsigned __int64 v79; // [rsp+118h] [rbp+98h]
  __m128i v80; // [rsp+120h] [rbp+A0h] BYREF
  unsigned __int64 v81; // [rsp+130h] [rbp+B0h]
  __int64 v82; // [rsp+140h] [rbp+C0h]
  __m128i v83; // [rsp+148h] [rbp+C8h] BYREF
  unsigned __int64 v84; // [rsp+158h] [rbp+D8h]
  __int64 v85; // [rsp+160h] [rbp+E0h]
  unsigned __int64 v86; // [rsp+168h] [rbp+E8h]
  unsigned __int64 v87; // [rsp+170h] [rbp+F0h]
  __int64 v88; // [rsp+178h] [rbp+F8h]
  char v89; // [rsp+180h] [rbp+100h]
  __int16 v90; // [rsp+188h] [rbp+108h]
  __int64 v91; // [rsp+1A0h] [rbp+120h]
  __int64 v92; // [rsp+1A8h] [rbp+128h]
  __int64 v93; // [rsp+1B0h] [rbp+130h]
  unsigned __int64 v94; // [rsp+1B8h] [rbp+138h]
  char v95; // [rsp+1C7h] [rbp+147h]
  __int64 v96; // [rsp+1C8h] [rbp+148h]

  v96 = -2;
  v76 = a1;
  v3 = sub_141470CD0(a1, a2);
  if ( *(_BYTE *)(v3 + 16) == 1 )
  {
    v4 = *(_QWORD *)v3;
    v5 = *(_QWORD *)(v3 + 8);
  }
  else
  {
    v57 = v3;
    v4 = sub_141486EF0();
    v3 = v57;
    *(_QWORD *)v57 = v4;
    *(_QWORD *)(v57 + 8) = v5;
    *(_BYTE *)(v57 + 16) = 1;
  }
  *(_QWORD *)v3 = v4 + 1;
  v70 = *((__m128i *)&off_141786750 + 1);
  v69 = _mm_loadu_si128((const __m128i *)&off_141786750);
  v71.m128i_i64[0] = v4;
  v71.m128i_i64[1] = v5;
  v65 = a2 + 160;
  v66[0] = 0;
  v67 = a2 + 192;
  v68 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748D00);
  v7 = _mm_load_si128((const __m128i *)&xmmword_141748D10);
  v8 = _mm_load_si128((const __m128i *)&xmmword_141748CE0);
  v9 = _mm_load_si128((const __m128i *)&xmmword_141748CF0);
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)&v66[v10 - 8];
      v12 = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      sub_141486710(&v83, v12, v13);
      v14 = v10 + 16;
      if ( v83.m128i_i32[0] != 2 )
        break;
      sub_1401DD260(v83.m128i_i64[1]);
      v10 += 16;
      if ( v14 == 32 )
        goto LABEL_69;
    }
    v74 = v10 + 16;
    v83.m128i_i64[0] = 0;
    v83.m128i_i64[1] = 8;
    v84 = 0;
    sub_1407B2080(v12, v13, &v83);
    v15 = v83.m128i_i64[1] + 48 * v84;
    v61 = v83.m128i_i64[1];
    v75 = v83;
    v63 = v83.m128i_i64[0];
    v64 = v15;
    v16 = 48 * v84 - 48;
    v17 = (_QWORD *)(v83.m128i_i64[1] + 56);
    for ( i = (__int64 *)v83.m128i_i64[1]; i != (__int64 *)v15; i = v19 )
    {
      v19 = i + 6;
      v62 = i + 6;
      v91 = *i;
      if ( v91 == -1 )
      {
        if ( (__int64 *)v15 != v19 )
        {
          v52 = v16 / 0x30;
          do
          {
            v53 = *(v17 - 1);
            if ( v53 )
              sub_140001660(*v17, v53, 1);
            v17 += 6;
            --v52;
          }
          while ( v52 );
        }
        break;
      }
      v20 = i[2];
      v21 = i[4];
      v22 = i[5];
      v92 = i[1];
      v23 = sub_1414742C0(v92, v20);
      if ( !v23 )
        goto LABEL_59;
      sub_1414A3C90(&v83, v23, v24);
      v25 = v84;
      if ( v83.m128i_i8[0] | (v84 < 8) )
        goto LABEL_59;
      v26 = v83.m128i_i64[1];
      if ( *(_QWORD *)v83.m128i_i64[1] != 0x2D74756F6C6C6F72LL
        || *(_DWORD *)(v83.m128i_i64[1] + v84 - 6) ^ 0x6F736A2E
         | *(unsigned __int16 *)(v83.m128i_i64[1] + v84 - 2) ^ 0x6C6E )
      {
        goto LABEL_59;
      }
      v27 = v84 - 6;
      if ( v84 < 0xE || *(char *)(v83.m128i_i64[1] + 8) < -64 || *(char *)(v83.m128i_i64[1] + v27) <= -65 )
        sub_1416C2F60(v83.m128i_i32[2], v84, 8, v27, (__int64)&off_14178ACC8);
      v83.m128i_i64[0] = 0;
      v83.m128i_i64[1] = v84 - 14;
      v84 = v26 + 8;
      v85 = v25 - 14;
      v86 = 0;
      v87 = v25 - 14;
      v88 = 0x2D0000002DLL;
      v89 = 1;
      v90 = 1;
      sub_14031B430(&v77, &v83);
      if ( v79 <= 4 )
      {
        if ( !v77 )
          goto LABEL_59;
        v28 = v78;
        v29 = 16 * v77;
        goto LABEL_58;
      }
      v82 = v78;
      sub_1404408C0((unsigned int)&v83, v78 + 16 * v79 - 80, 5, (unsigned int)asc_14178ACE0, 1);
      v81 = v84;
      v80 = _mm_loadu_si128(&v83);
      sub_14149B760(v72, v92, v20);
      v31 = v73;
      v93 = v72[1];
      if ( v73 < 0 )
      {
        v32 = 0;
LABEL_71:
        v95 = 1;
        sub_1416C2D4B(v32, v31);
      }
      if ( !v73 )
      {
        v33 = 1;
        goto LABEL_50;
      }
      v94 = v73;
      nullsub_1(v30);
      v32 = 1;
      v33 = sub_140001650(v94, 1);
      v31 = v94;
      if ( !v33 )
        goto LABEL_71;
      v34 = v93;
      if ( v94 < 8 || (unsigned __int64)(v33 - v93) < 0x20 )
      {
        v35 = 0;
      }
      else
      {
        if ( v94 < 0x20 )
        {
          v35 = 0;
LABEL_32:
          v41 = v35;
          v35 = v31 & 0x7FFFFFFFFFFFFFF8LL;
          do
          {
            v42 = _mm_loadl_epi64((const __m128i *)(v34 + v41));
            v43 = _mm_cmpeq_epi8(v42, si128);
            *(_QWORD *)(v33 + v41) = _mm_or_si128(_mm_and_si128(v43, v7), _mm_andnot_si128(v43, v42)).m128i_u64[0];
            v41 += 8;
          }
          while ( v35 != v41 );
          if ( v31 == v35 )
            goto LABEL_50;
          goto LABEL_35;
        }
        v35 = v94 & 0x7FFFFFFFFFFFFFE0LL;
        v36 = 0;
        do
        {
          v37 = _mm_loadu_si128((const __m128i *)(v34 + v36));
          v38 = _mm_loadu_si128((const __m128i *)(v34 + v36 + 16));
          v39 = _mm_cmpeq_epi8(v37, v8);
          v40 = _mm_cmpeq_epi8(v38, v8);
          *(__m128i *)(v33 + v36) = _mm_or_si128(_mm_and_si128(v39, v9), _mm_andnot_si128(v39, v37));
          *(__m128i *)(v33 + v36 + 16) = _mm_or_si128(_mm_and_si128(v40, v9), _mm_andnot_si128(v40, v38));
          v36 += 32;
        }
        while ( v35 != v36 );
        if ( v31 == v35 )
          goto LABEL_50;
        if ( (v31 & 0x18) != 0 )
          goto LABEL_32;
      }
LABEL_35:
      v44 = v35;
      v45 = v31 & 3;
      if ( (v31 & 3) != 0 )
      {
        v44 = v35;
        do
        {
          v46 = *(_BYTE *)(v34 + v44);
          if ( v46 == 92 )
            v46 = 47;
          *(_BYTE *)(v33 + v44++) = v46;
          --v45;
        }
        while ( v45 );
      }
      v31 = v94;
      if ( v35 - v94 <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v47 = *(_BYTE *)(v34 + v44);
          if ( v47 == 92 )
            v47 = 47;
          *(_BYTE *)(v33 + v44) = v47;
          v48 = *(_BYTE *)(v34 + v44 + 1);
          if ( v48 == 92 )
            v48 = 47;
          *(_BYTE *)(v33 + v44 + 1) = v48;
          v49 = *(_BYTE *)(v34 + v44 + 2);
          if ( v49 == 92 )
            v49 = 47;
          *(_BYTE *)(v33 + v44 + 2) = v49;
          v50 = *(_BYTE *)(v34 + v44 + 3);
          if ( v50 == 92 )
            v50 = 47;
          *(_BYTE *)(v33 + v44 + 3) = v50;
          v44 += 4;
        }
        while ( v31 != v44 );
      }
LABEL_50:
      v84 = v31;
      v85 = v33;
      v86 = v31;
      v51 = v66[v10];
      v83.m128i_i64[0] = 1;
      v83.m128i_i64[1] = v21;
      LOBYTE(v88) = v51;
      v87 = v22;
      v95 = 0;
      sub_1404732E0(v58, &v69, &v80, &v83);
      if ( v58[0] != 2 && v59 != -1 && v59 )
        sub_140001660(v60, v59, 1);
      if ( v72[0] > 0LL )
        sub_140001660(v93, v72[0], 1);
      if ( v77 )
      {
        v29 = 16 * v77;
        v28 = v82;
LABEL_58:
        sub_140001660(v28, v29, 8);
      }
LABEL_59:
      if ( v91 )
        sub_140001660(v92, v91, 1);
      v16 -= 48LL;
      v17 += 6;
    }
    if ( v75.m128i_i64[0] )
      sub_140001660(v75.m128i_i64[1], 48 * v75.m128i_i64[0], 8);
    v10 = v74;
  }
  while ( v74 != 32 );
LABEL_69:
  v54 = v69;
  v55 = v70;
  result = v76;
  v76[2] = v71;
  result[1] = v55;
  *result = v54;
  return result;
}