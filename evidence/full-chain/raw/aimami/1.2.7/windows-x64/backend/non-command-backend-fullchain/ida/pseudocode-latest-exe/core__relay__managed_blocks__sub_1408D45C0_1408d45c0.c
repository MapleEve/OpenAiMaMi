// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408d45c0 | successor of pre-update 0x140f008d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.81, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
char __fastcall sub_1408D45C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  char result; // al
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // bl
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r15
  _QWORD *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // rdx
  char v42; // si
  char v43; // si
  __m128i v44; // [rsp+28h] [rbp-58h] BYREF
  __int128 v45; // [rsp+38h] [rbp-48h]
  __int64 v46; // [rsp+48h] [rbp-38h]
  __int64 v47; // [rsp+50h] [rbp-30h]
  __int64 v48; // [rsp+58h] [rbp-28h]
  __int64 v49; // [rsp+60h] [rbp-20h]
  __int64 v50; // [rsp+68h] [rbp-18h]
  __int64 v51; // [rsp+70h] [rbp-10h]
  __int64 v52; // [rsp+78h] [rbp-8h]
  __int64 v53; // [rsp+80h] [rbp+0h]
  __int64 v54; // [rsp+88h] [rbp+8h]
  char v55[144]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v56; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v57[24]; // [rsp+128h] [rbp+A8h]
  __int64 v58; // [rsp+140h] [rbp+C0h]
  __int64 v59; // [rsp+148h] [rbp+C8h]
  __int64 v60; // [rsp+150h] [rbp+D0h]
  __int64 v61; // [rsp+158h] [rbp+D8h]
  __int64 v62; // [rsp+160h] [rbp+E0h]
  __int64 v63; // [rsp+168h] [rbp+E8h]
  __int64 v64; // [rsp+170h] [rbp+F0h]
  __int64 v65; // [rsp+178h] [rbp+F8h]
  __int64 v66; // [rsp+180h] [rbp+100h]
  char v67[144]; // [rsp+188h] [rbp+108h] BYREF
  __int64 v68; // [rsp+218h] [rbp+198h]
  __int64 v69; // [rsp+220h] [rbp+1A0h]
  __int64 v70; // [rsp+228h] [rbp+1A8h]
  __int64 v71; // [rsp+230h] [rbp+1B0h]
  __int64 v72; // [rsp+238h] [rbp+1B8h]
  _BYTE v73[15]; // [rsp+240h] [rbp+1C0h]
  char v74; // [rsp+250h] [rbp+1D0h] BYREF
  _BYTE v75[15]; // [rsp+251h] [rbp+1D1h]
  __int64 v76; // [rsp+260h] [rbp+1E0h]
  __int64 v77; // [rsp+268h] [rbp+1E8h]
  _QWORD v78[2]; // [rsp+270h] [rbp+1F0h]
  _QWORD v79[2]; // [rsp+280h] [rbp+200h]
  __m128i v80; // [rsp+290h] [rbp+210h] BYREF
  __int64 v81; // [rsp+2A0h] [rbp+220h]
  _QWORD v82[2]; // [rsp+2B0h] [rbp+230h]
  __int64 v83; // [rsp+2C0h] [rbp+240h]
  __int64 v84; // [rsp+2C8h] [rbp+248h]
  __int64 v85; // [rsp+2D0h] [rbp+250h]
  const __m128i *v86; // [rsp+2D8h] [rbp+258h]
  __int64 v87; // [rsp+2E0h] [rbp+260h]

  v87 = -2;
  v6 = sub_1408FEA60(a2, a3);
  sub_1408D1C90(&v44, v6, v7);
  if ( v44.m128i_i64[0] == -1 )
    return 0;
  v86 = (const __m128i *)v44.m128i_i64[1];
  v83 = v44.m128i_i64[0];
  v85 = v45;
  v8 = sub_1408FEA60(a2, a3);
  sub_1408D1C90(&v44, v8, v9);
  if ( v44.m128i_i64[0] == -1 )
    goto LABEL_34;
  v84 = a1;
  v81 = v45;
  v80 = _mm_loadu_si128(&v44);
  sub_1411F7620(&v56, a2, a3);
  v10 = v56;
  v11 = *(_QWORD *)v57;
  v12 = v57[8];
  v78[0] = *(_QWORD *)&v57[9];
  *(_QWORD *)((char *)v78 + 7) = *(_QWORD *)&v57[16];
  v13 = v58;
  v14 = v59;
  v15 = v61;
  v16 = v62;
  v17 = v63;
  v18 = v64;
  v19 = v65;
  if ( v56 == 2 )
  {
    v82[0] = v78[0];
    *(_QWORD *)((char *)v82 + 7) = *(_QWORD *)((char *)v78 + 7);
    v79[0] = v82[0];
    *(_QWORD *)((char *)v79 + 7) = *(_QWORD *)((char *)v78 + 7);
    if ( *(_QWORD *)v57 == 2 )
      goto LABEL_5;
LABEL_20:
    v32 = v15;
    if ( v13 )
    {
      v33 = v13;
      v34 = v19;
      sub_140001660(v14, v33, 1);
      v19 = v34;
    }
    if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v19, v18, 1);
    if ( v17 )
    {
      v35 = (_QWORD *)(v16 + 8);
      do
      {
        v36 = *(v35 - 1);
        if ( v36 )
          sub_140001660(*v35, v36, 1);
        v35 += 3;
        --v17;
      }
      while ( v17 );
    }
    if ( v32 )
      sub_140001660(v16, 24 * v32, 8);
    goto LABEL_32;
  }
  v70 = v62;
  v71 = v60;
  v68 = v66;
  v69 = v64;
  v72 = v61;
  v30 = v57[8];
  v31 = v65;
  sub_1419234B0(v55, v67, 144);
  v82[0] = v78[0];
  *(_QWORD *)((char *)v82 + 7) = *(_QWORD *)((char *)v78 + 7);
  v44.m128i_i64[0] = v10;
  v44.m128i_i64[1] = v11;
  LOBYTE(v45) = v30;
  *(_QWORD *)((char *)&v45 + 1) = v82[0];
  *((_QWORD *)&v45 + 1) = *(_QWORD *)((char *)v78 + 7);
  v46 = v13;
  v47 = v14;
  v48 = v71;
  v49 = v72;
  v50 = v70;
  v51 = v17;
  v52 = v69;
  v53 = v31;
  v54 = v68;
  sub_1401D25B0(&v56, &v44);
  v11 = v56;
  v12 = v57[0];
  v79[0] = *(_QWORD *)&v57[1];
  *(_QWORD *)((char *)v79 + 7) = *(_QWORD *)&v57[8];
  if ( v56 != 2 )
  {
    v15 = v60;
    v16 = v61;
    v17 = v62;
    v18 = v63;
    v19 = v64;
    v13 = *(_QWORD *)&v57[16];
    v14 = v58;
    goto LABEL_20;
  }
  v13 = *(_QWORD *)&v57[16];
  v14 = v58;
LABEL_5:
  *(_QWORD *)&v73[7] = *(_QWORD *)((char *)v79 + 7);
  *(_QWORD *)v73 = v79[0];
  if ( (_BYTE)v12 == 0xFF )
    goto LABEL_32;
  *(_QWORD *)&v75[7] = *(_QWORD *)&v73[7];
  *(_QWORD *)v75 = *(_QWORD *)v73;
  v76 = v13;
  v77 = v14;
  v74 = v12;
  v20 = sub_1410F6AD0(&v80, &v74, v12, v19);
  if ( !v20 )
  {
    sub_14084C210(&v74);
LABEL_32:
    if ( v80.m128i_i64[0] )
      sub_140001660(v80.m128i_i64[1], v80.m128i_i64[0], 1);
LABEL_34:
    v24 = v83;
LABEL_35:
    if ( v24 )
      sub_140001660(v86, v24, 1);
    return 0;
  }
  if ( *(_BYTE *)v20 )
  {
    v23 = -1;
    goto LABEL_9;
  }
  v23 = *(_QWORD *)(v20 + 24);
  if ( v23 < 0 )
  {
    v37 = 0;
    goto LABEL_41;
  }
  if ( v23 )
  {
    v38 = *(_QWORD *)(v20 + 16);
    nullsub_1(v22, v21);
    v37 = 1;
    v39 = sub_140001650(v23, 1);
    if ( !v39 )
LABEL_41:
      sub_14196B2DB(v37, v23);
    v11 = v39;
    sub_1419234B0(v39, v38, v23);
  }
  else
  {
    v11 = 1;
    v23 = 0;
  }
LABEL_9:
  sub_14084C210(&v74);
  if ( v80.m128i_i64[0] )
    sub_140001660(v80.m128i_i64[1], v80.m128i_i64[0], 1);
  v24 = v83;
  v25 = v84;
  if ( v23 == -1 )
    goto LABEL_35;
  v26 = v83;
  result = 0;
  switch ( v85 )
  {
    case 5LL:
      if ( v86->m128i_i32[0] ^ 0x65646F6D | v86->m128i_u8[4] ^ 0x6C )
        goto LABEL_55;
      if ( v23 == 12 )
        goto LABEL_49;
      if ( (unsigned __int64)v23 <= 0xC )
        goto LABEL_55;
      v28 = *(_QWORD *)v11 ^ 0x725F696D616D6961LL;
      v29 = *(_QWORD *)(v11 + 5) ^ 0x5F79616C65725F69LL;
      goto LABEL_50;
    case 7LL:
      if ( !(v86->m128i_i32[0] ^ 0x666F7270 | *(__int32 *)((char *)v86->m128i_i32 + 3) ^ 0x656C6966) )
        goto LABEL_48;
      goto LABEL_55;
    case 14LL:
      if ( v86->m128i_i64[0] ^ 0x72705F6C65646F6DLL | *(__int64 *)((char *)v86->m128i_i64 + 6) ^ 0x72656469766F7270LL )
        goto LABEL_55;
LABEL_48:
      if ( v23 == 12 )
      {
LABEL_49:
        v28 = *(_QWORD *)v11 ^ 0x725F696D616D6961LL;
        v29 = *(unsigned int *)(v11 + 8) ^ 0x79616C65LL;
LABEL_50:
        v40 = (v28 | v29) == 0;
        goto LABEL_51;
      }
      if ( (unsigned __int64)v23 <= 0xC
        || *(_QWORD *)v11 ^ 0x725F696D616D6961LL | *(_QWORD *)(v11 + 5) ^ 0x5F79616C65725F69LL )
      {
        if ( v23 == 6 )
        {
          v40 = (*(_DWORD *)v11 ^ 0x616D6961 | *(unsigned __int16 *)(v11 + 4) ^ 0x3169) == 0;
          goto LABEL_51;
        }
        if ( v23 == 19 )
        {
          v40 = _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v11), (__m128i)xmmword_141A45260),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v11 + 3)), (__m128i)xmmword_141A45250))) == 0xFFFF;
LABEL_51:
          result = v40;
          goto LABEL_56;
        }
LABEL_55:
        result = 0;
      }
      else
      {
        result = 1;
      }
LABEL_56:
      if ( v23 )
      {
        v41 = v23;
        v42 = result;
        sub_140001660(v11, v41, 1);
        result = v42;
      }
      if ( v26 )
      {
        v43 = result;
        sub_140001660(v86, v26, 1);
        result = v43;
      }
      break;
    case 15LL:
      if ( v86->m128i_i64[0] ^ 0x625F69616E65706FLL | *(__int64 *)((char *)v86->m128i_i64 + 7) ^ 0x6C72755F65736162LL )
        goto LABEL_55;
      v84 = v11;
      v85 = v23;
      result = (unsigned __int16)sub_1408C9F90(v11, v23) == 1;
      goto LABEL_67;
    case 18LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(v86[1].m128i_u16[0]), (__m128i)xmmword_141A50680),
               _mm_cmpeq_epi8(_mm_loadu_si128(v86), (__m128i)xmmword_141A50670))) != 0xFFFF )
        goto LABEL_55;
      v84 = v11;
      v85 = v23;
      result = sub_1408CFD20(v25, v11, v23);
LABEL_67:
      v26 = v83;
      v23 = v85;
      v11 = v84;
      goto LABEL_56;
    default:
      goto LABEL_56;
  }
  return result;
}
