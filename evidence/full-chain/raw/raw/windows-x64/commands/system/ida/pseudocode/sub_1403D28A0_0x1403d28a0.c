// module: codexmate_lib/commands/system
// addr: 0x1403d28a0
// name: sub_1403D28A0
// win 1.2.1 | module src/commands/system.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_1403D28A0(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  bool v10; // di
  __m128i si128; // xmm6
  char v12; // r13
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  const __m128i *v16; // rax
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  bool v21; // zf
  bool v22; // al
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __m128i *v28; // r14
  __m128i v29; // xmm6
  char v30; // di
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  __int64 v33; // rbx
  unsigned __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  _QWORD *v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // r12
  __int64 v54; // rax
  bool v55; // cf
  __int64 v56; // rax
  __int64 v57; // rcx
  const __m128i *v58; // rax
  unsigned __int64 v59; // rdx
  const __m128i *v60; // rsi
  unsigned __int64 v61; // r15
  __int8 v62; // bl
  _BYTE *v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // r14
  __int64 v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // [rsp+28h] [rbp-58h]
  unsigned __int64 v73; // [rsp+30h] [rbp-50h]
  __m128i v74; // [rsp+38h] [rbp-48h] BYREF
  __int64 v75; // [rsp+48h] [rbp-38h] BYREF
  __int64 v76; // [rsp+50h] [rbp-30h]
  __int64 v77; // [rsp+58h] [rbp-28h]
  __int64 v78; // [rsp+60h] [rbp-20h]
  __int64 v79; // [rsp+68h] [rbp-18h]
  char v80; // [rsp+70h] [rbp-10h]
  __int16 v81; // [rsp+78h] [rbp-8h]
  unsigned __int64 v82; // [rsp+80h] [rbp+0h]
  __int64 v83; // [rsp+88h] [rbp+8h]
  __m128i v84; // [rsp+90h] [rbp+10h] BYREF
  __int64 v85; // [rsp+A0h] [rbp+20h]
  __int64 v86; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v87; // [rsp+B0h] [rbp+30h]
  __m128i *v88; // [rsp+B8h] [rbp+38h]
  __int64 v89; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v90; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v91; // [rsp+D0h] [rbp+50h]
  __int64 v92; // [rsp+D8h] [rbp+58h]

  v92 = -2;
  v88 = a1;
  if ( a4 )
  {
    v74.m128i_i64[0] = 0;
    v74.m128i_i64[1] = a3;
    v86 = a2;
    v75 = a2;
    v76 = a3;
    v77 = 0;
    v78 = a3;
    v79 = 0xA0000000ALL;
    v80 = 1;
    v81 = 0;
    sub_14031D040(&v89, &v74);
    v6 = v90;
    v7 = v91;
    v8 = 16 * v91;
    if ( v91 )
    {
      v82 = v91;
      v72 = 16 * v91;
      v9 = v90 + v8;
      v10 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1417424C0);
      v12 = 0;
      v87 = 0;
      v83 = v90;
      v13 = 0;
      do
      {
        v6 += 16;
        while ( 1 )
        {
          v16 = (const __m128i *)sub_14033BC10(*(_QWORD *)(v6 - 16), *(_QWORD *)(v6 - 8));
          if ( !v17 )
            break;
          if ( v16->m128i_i8[0] != 91 )
          {
            if ( v10 )
            {
              v10 = 1;
              if ( v17 >= 0x10 && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v16), si128)) == 0xFFFF )
              {
                v18 = (_BYTE *)sub_14033C560(&v16[1], v17 - 16);
                if ( v19 )
                {
                  if ( *v18 == 61 )
                  {
                    v20 = sub_14033BC10(v18 + 1, v19 - 1);
                    v21 = v20 == 0;
                    v22 = v20 != 0;
                    v23 = v73;
                    if ( !v21 )
                      v23 = v13;
                    v73 = v23;
                    v24 = v87;
                    LOBYTE(v24) = v22 | v87;
                    v87 = v24;
                  }
                }
              }
            }
            else
            {
              v10 = 0;
            }
            break;
          }
          if ( !v10 )
          {
            if ( v17 == 10 )
            {
              v14 = v16->m128i_i64[0] ^ 0x657275746165665BLL | v16->m128i_u16[4] ^ 0x5D73LL;
              v10 = v14 == 0;
              if ( !v14 )
                v4 = v13;
              v12 |= v10;
            }
            else
            {
              v10 = 0;
            }
            v15 = v6 - 16;
            v6 += 16;
            ++v13;
            if ( v15 + 16 != v9 )
              continue;
          }
          goto LABEL_24;
        }
        ++v13;
      }
      while ( v6 != v9 );
LABEL_24:
      if ( (v87 & 1) != 0 )
      {
        if ( v73 >= v82 )
          sub_1416C30E3(v73, v82, &off_141751140);
        v25 = 16 * v73;
        v26 = v83;
        *(_QWORD *)(v83 + v25) = "image_generation = false";
        *(_QWORD *)(v26 + v25 + 8) = 24;
        LODWORD(v27) = v91;
        v28 = v88;
        goto LABEL_62;
      }
      v7 = v82;
      v6 = v83;
      v8 = v72;
      if ( (v12 & 1) != 0 )
      {
        v38 = v4 + 1;
        v28 = v88;
        if ( v82 < v38 )
          sub_1416C2D94(v38, v82, &off_141751170);
        if ( v82 == v89 )
        {
          sub_141688F50(&v89);
          v6 = v90;
        }
        v39 = (_QWORD *)(v6 + 16 * v38);
        if ( v7 > v38 )
          sub_141684120(v39 + 2, v6 + 16 * v38, 16 * (v7 - v38));
        *v39 = "image_generation = false";
        v39[1] = 24;
        v27 = v7 + 1;
LABEL_61:
        v91 = v27;
LABEL_62:
        sub_1404408C0((unsigned int)&v74, v90, v27, (unsigned int)asc_14174C720, 1);
        v46 = v75;
        v85 = v75;
        v84 = _mm_loadu_si128(&v74);
        if ( v84.m128i_i64[0] == v75 )
        {
          sub_141688D30((unsigned int)&v84, v75, 1, 1, 1);
          v46 = v85;
        }
        *(_BYTE *)(v84.m128i_i64[1] + v46) = 10;
        v85 = v46 + 1;
        v28[1].m128i_i64[0] = v46 + 1;
        goto LABEL_65;
      }
    }
    if ( a3 && *(_BYTE *)(v86 + a3 - 1) != 10 )
    {
      v28 = v88;
      if ( v7 == v89 )
      {
        sub_141688F50(&v89);
        v6 = v90;
      }
      *(_QWORD *)(v6 + v8) = 1;
      *(_QWORD *)(v6 + v8 + 8) = 0;
      v91 = ++v7;
      if ( v7 != v89 )
        goto LABEL_58;
    }
    else
    {
      v28 = v88;
      if ( v7 != v89 )
        goto LABEL_58;
    }
    sub_141688F50(&v89);
LABEL_58:
    v42 = v90;
    v43 = 16 * v7;
    *(_QWORD *)(v90 + v43) = aFeaturesUpdate;
    *(_QWORD *)(v42 + v43 + 8) = 10;
    v91 = v7 + 1;
    if ( v7 + 1 == v89 )
      sub_141688F50(&v89);
    v44 = v90;
    v45 = 16 * (v7 + 1);
    *(_QWORD *)(v90 + v45) = "image_generation = false";
    *(_QWORD *)(v44 + v45 + 8) = 24;
    v27 = v7 + 2;
    goto LABEL_61;
  }
  v89 = 0;
  v90 = 8;
  v91 = 0;
  v74.m128i_i64[0] = 0;
  v74.m128i_i64[1] = a3;
  v75 = a2;
  v76 = a3;
  v77 = 0;
  v78 = a3;
  v79 = 0xA0000000ALL;
  v80 = 1;
  v81 = 0;
  v86 = 0;
  v29 = _mm_load_si128((const __m128i *)&xmmword_1417424C0);
  v30 = 0;
  v83 = 0;
  v28 = v88;
  while ( 1 )
  {
    v50 = v75;
    sub_140421EE0(&v84, &v75);
    if ( v84.m128i_i32[0] == 1 )
    {
      v51 = v74.m128i_i64[0];
      v74.m128i_i64[0] = v85;
      v52 = v85 - v51;
      v53 = v51 + v50;
      v54 = v85 - v51;
      v55 = v54 == 0;
      v56 = v54 - 1;
      if ( v55 )
        goto LABEL_83;
      goto LABEL_76;
    }
    if ( HIBYTE(v81) )
      break;
    HIBYTE(v81) = 1;
    v52 = v74.m128i_i64[1] - v74.m128i_i64[0];
    if ( ((unsigned __int8)v81 | (v74.m128i_i64[1] != v74.m128i_i64[0])) != 1 )
      break;
    v53 = v75 + v74.m128i_i64[0];
    v56 = v52 - 1;
    if ( !v52 )
      goto LABEL_83;
LABEL_76:
    if ( *(_BYTE *)(v53 + v56) == 10 )
    {
      v52 -= 2;
      if ( !v56 || (v57 = v53, *(_BYTE *)(v53 + v52) != 13) )
        v57 = 0;
      if ( v57 )
        v53 = v57;
      else
        v52 = v56;
    }
LABEL_83:
    v58 = (const __m128i *)sub_14033BC10(v53, v52);
    if ( !v59 )
      goto LABEL_92;
    v60 = v58;
    v61 = v59;
    v62 = v58->m128i_i8[0];
    if ( v58->m128i_i8[0] == 91 )
    {
      if ( ((unsigned __int8)~(_BYTE)v86 & (unsigned __int8)(v83 & v30) & 1) != 0 )
      {
        v66 = v91;
        v67 = v87;
        if ( v87 >= v91 )
          sub_1416C2E1B(v87, v91, &off_141751128);
        v82 = 16 * v87;
        sub_141684120(16 * v87 + v90, v90 + 16 * v87 + 16, 16 * (v91 + ~v87));
        v68 = v66 - 1;
        v91 = v66 - 1;
        if ( v66 - 1 > v67 )
        {
          v69 = 16 * (v66 - v87) - 32;
          do
          {
            v70 = v90;
            sub_14033BC10(*(_QWORD *)(v90 + v82), *(_QWORD *)(v90 + v82 + 8));
            if ( v71 )
              break;
            sub_141684120(v82 + v70, v82 + v70 + 16, v69);
            v91 = --v68;
            v69 -= 16;
          }
          while ( v68 > v87 );
        }
      }
      if ( v61 == 10 )
      {
        v21 = (v60->m128i_i64[0] ^ 0x657275746165665BLL | v60->m128i_u16[4] ^ 0x5D73LL) == 0;
        v65 = v91;
        v28 = v88;
        if ( v21 )
        {
          v83 = 1;
          v30 = 1;
          v86 = 0;
          v87 = v91;
          if ( v91 != v89 )
            goto LABEL_69;
        }
        else
        {
          v30 = 0;
          if ( v91 != v89 )
            goto LABEL_69;
        }
      }
      else
      {
        v65 = v91;
        v30 = 0;
        v28 = v88;
        if ( v91 != v89 )
          goto LABEL_69;
      }
      goto LABEL_68;
    }
    if ( (v30 & 1) == 0 )
      goto LABEL_92;
    if ( v59 >= 0x10
      && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v58), v29)) == 0xFFFF
      && (v63 = (_BYTE *)sub_14033C560(&v58[1], v59 - 16), v64)
      && *v63 == 61 )
    {
      sub_14033BC10(v63 + 1, v64 - 1);
      v30 = 1;
      if ( HIBYTE(v81) )
        break;
    }
    else
    {
      if ( v62 != 35 )
      {
        v86 = 1;
LABEL_92:
        v65 = v91;
        if ( v91 != v89 )
          goto LABEL_69;
        goto LABEL_68;
      }
      v86 = (unsigned __int8)v86;
      v65 = v91;
      if ( v91 != v89 )
        goto LABEL_69;
LABEL_68:
      sub_141688F50(&v89);
LABEL_69:
      v48 = v90;
      v49 = 16 * v65;
      *(_QWORD *)(v90 + v49) = v53;
      *(_QWORD *)(v48 + v49 + 8) = v52;
      v91 = v65 + 1;
      if ( HIBYTE(v81) )
        break;
    }
  }
  v31 = v91;
  if ( ((unsigned __int8)~(_BYTE)v86 & (unsigned __int8)(v83 & v30) & 1) != 0 )
  {
    v32 = v87;
    if ( v87 < v91 )
    {
      v33 = 16 * v87;
      sub_141684120(16 * v87 + v90, v90 + 16 * v87 + 16, 16 * (v91 + ~v87));
      v34 = v31 - 1;
      v91 = v31 - 1;
      if ( v31 - 1 > v32 )
      {
        v35 = 16 * (v31 - v32) - 32;
        while ( 1 )
        {
          v36 = v90;
          sub_14033BC10(*(_QWORD *)(v90 + v33), *(_QWORD *)(v90 + v33 + 8));
          if ( v37 )
            break;
          sub_141684120(v33 + v36, v33 + v36 + 16, v35);
          v91 = --v34;
          v35 -= 16;
          if ( v34 <= v87 )
          {
            LODWORD(v31) = v87;
            goto LABEL_47;
          }
        }
      }
      LODWORD(v31) = v34;
LABEL_47:
      v28 = v88;
    }
  }
  sub_1404408C0((unsigned int)&v74, v90, v31, (unsigned int)asc_14174C720, 1);
  v40 = v75;
  v85 = v75;
  v84 = _mm_loadu_si128(&v74);
  if ( v75 )
  {
    v41 = v84.m128i_i64[1];
    if ( *(_BYTE *)(v84.m128i_i64[1] + v75 - 1) != 10 )
    {
      if ( v84.m128i_i64[0] == v75 )
      {
        sub_141688D30((unsigned int)&v84, v75, 1, 1, 1);
        v41 = v84.m128i_i64[1];
      }
      *(_BYTE *)(v41 + v40) = 10;
      v85 = v40 + 1;
    }
  }
  v28[1].m128i_i64[0] = v85;
LABEL_65:
  *v28 = v84;
  if ( v89 )
    sub_140001660(v90, 16 * v89, 8);
  return v28;
}