// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x140d28e00 | successor of pre-update 0x140ec5890 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140D28E00(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)())
{
  int v8; // eax
  __m128i si128; // xmm6
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int16 v30; // cx
  int v32[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-38h]
  __int64 v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+60h] [rbp-20h]
  __int64 v38; // [rsp+68h] [rbp-18h]
  __int64 v39; // [rsp+70h] [rbp-10h]
  __int64 v40; // [rsp+78h] [rbp-8h]
  __int128 v41; // [rsp+80h] [rbp+0h] BYREF
  __int64 v42; // [rsp+90h] [rbp+10h]
  __int128 v43; // [rsp+98h] [rbp+18h] BYREF
  __int64 v44; // [rsp+A8h] [rbp+28h]
  __int128 v45; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v46; // [rsp+C0h] [rbp+40h]
  __int64 v47; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v48; // [rsp+D0h] [rbp+50h]
  __int64 v49; // [rsp+D8h] [rbp+58h]
  __m128i v50; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v51; // [rsp+F0h] [rbp+70h]
  __m128i v52; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v53[5]; // [rsp+108h] [rbp+88h] BYREF
  char v54; // [rsp+130h] [rbp+B0h]
  __int16 v55; // [rsp+138h] [rbp+B8h]
  __int128 v56; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v57; // [rsp+150h] [rbp+D0h]
  __int64 v58; // [rsp+158h] [rbp+D8h]
  int v59; // [rsp+160h] [rbp+E0h]
  int v60; // [rsp+164h] [rbp+E4h]
  __int64 v61; // [rsp+168h] [rbp+E8h]
  _BYTE v62[3]; // [rsp+173h] [rbp+F3h] BYREF
  char v63; // [rsp+176h] [rbp+F6h]
  char v64; // [rsp+177h] [rbp+F7h]
  __int64 v65; // [rsp+178h] [rbp+F8h]

  v65 = -2;
  sub_1408CA1B0((unsigned int)&v43, a3, (_DWORD)a4, (unsigned int)aModelProviderp, 14);
  v62[2] = 1;
  sub_1408CA1B0((unsigned int)&v41, a3, (_DWORD)a4, (unsigned int)&aModelProviderp[14], 7);
  v64 = 1;
  sub_1408CA1B0((unsigned int)&v52, a3, (_DWORD)a4, (unsigned int)aModel_6, 5);
  if ( v52.m128i_i64[0] == -1 )
  {
    v64 = 1;
    sub_1408C9090(&v50, a3, a4);
  }
  else
  {
    v51 = v53[0];
    v50 = _mm_loadu_si128(&v52);
  }
  v62[1] = 1;
  sub_1408CA1B0((unsigned int)&v45, a3, (_DWORD)a4, (unsigned int)&aModelProviderp[21], 18);
  v59 = 0;
  v47 = v45;
  if ( a2 && (_QWORD)v45 != -1 )
  {
    v63 = 1;
    v59 = sub_1408CFD20(a2);
  }
  v63 = 1;
  sub_1408CA1B0((unsigned int)&v52, a3, (_DWORD)a4, (unsigned int)&aModelProviderp[39], 15);
  if ( v52.m128i_i64[0] == -1 )
  {
    v60 = 0;
  }
  else
  {
    v58 = v52.m128i_i64[1];
    v61 = v52.m128i_i64[0];
    v8 = sub_1408C9F90(v52.m128i_i64[1], v53[0]);
    LOBYTE(v8) = (_WORD)v8 == 1;
    v60 = v8;
    if ( v61 )
      sub_140001660(v58, v61, 1);
  }
  v37 = *((_QWORD *)&v43 + 1);
  v34 = v43;
  v38 = *((_QWORD *)&v41 + 1);
  v35 = v41;
  v39 = v50.m128i_i64[1];
  v36 = v50.m128i_i64[0];
  v40 = *((_QWORD *)&v45 + 1);
  LOBYTE(v61) = sub_1408CB410(a3, (__int64)a4);
  LODWORD(v58) = sub_1408C62B0(a3, a4);
  *(_QWORD *)&v56 = 0;
  *((_QWORD *)&v56 + 1) = 8;
  v57 = 0;
  v62[0] = 2;
  v52.m128i_i64[0] = 0;
  v52.m128i_i64[1] = (__int64)a4;
  v53[0] = a3;
  v53[1] = a4;
  v53[2] = 0;
  v53[3] = a4;
  v53[4] = 0xA0000000ALL;
  v54 = 1;
  v55 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A04550);
  do
  {
    while ( 1 )
    {
      v11 = v53[0];
      sub_140D824C0(v32, v53);
      if ( v32[0] == 1 )
      {
        v12 = v52.m128i_i64[0];
        v52.m128i_i64[0] = v33;
        v13 = v33 - v12;
        v14 = v12 + v11;
        if ( v33 == v12 )
          goto LABEL_26;
LABEL_20:
        if ( *(_BYTE *)(v14 + v13 - 1) == 10 )
        {
          if ( v13 == 1 )
          {
            v13 = 0;
          }
          else if ( *(_BYTE *)(v14 + v13 - 2) == 13 )
          {
            v13 -= 2;
          }
          else
          {
            --v13;
          }
        }
        goto LABEL_26;
      }
      if ( HIBYTE(v55) )
        goto LABEL_50;
      HIBYTE(v55) = 1;
      v13 = v52.m128i_i64[1] - v52.m128i_i64[0];
      if ( ((unsigned __int8)v55 | (v52.m128i_i64[1] != v52.m128i_i64[0])) != 1 )
        goto LABEL_50;
      v14 = v53[0] + v52.m128i_i64[0];
      if ( v13 )
        goto LABEL_20;
LABEL_26:
      v15 = sub_1408FEA60(v14, v13);
      v17 = v16;
      if ( ((unsigned __int8)toml_lexical_state_line_is_structural(v62, v14, v13) & (v16 != 0)) != 1
        || *(_BYTE *)v15 != 91
        || *(_BYTE *)(v15 + v17 - 1) != 93 )
      {
        goto LABEL_13;
      }
      if ( v17 == 1 || *(char *)(v15 + 1) <= -65 )
        sub_14196B4F0(v15, v17, 1, v17 - 1, (__int64)&off_141A496C8);
      if ( (unsigned __int64)(v17 - 2) >= 0x10 )
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v15 + 1)), si128)) == 0xFFFF )
        {
          v18 = v17 - 18;
          v19 = v15 + 17;
          goto LABEL_38;
        }
      }
      else if ( (unsigned __int64)(v17 - 2) < 9 )
      {
        goto LABEL_13;
      }
      if ( *(_QWORD *)(v15 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v15 + 9) ^ 0x2ELL )
        goto LABEL_13;
      v18 = v17 - 11;
      v19 = v15 + 10;
LABEL_38:
      v20 = sub_1408FECE0(v19, v18, 34);
      v22 = v20;
      v23 = v21;
      if ( v21 == 12 )
      {
        v10 = *(_QWORD *)v20 ^ 0x725F696D616D6961LL | *(_DWORD *)(v20 + 8) ^ 0x79616C65u;
        if ( !v10 )
          break;
        goto LABEL_13;
      }
      if ( v21 >= 0xD )
      {
        v10 = *(_QWORD *)v20 ^ 0x725F696D616D6961LL | *(_QWORD *)(v20 + 5) ^ 0x5F79616C65725F69LL;
        if ( !v10 )
          break;
      }
      if ( v21 == 6 )
      {
        v24 = *(_DWORD *)v20 ^ 0x616D6961;
        v10 = v24 | *(_WORD *)(v22 + 4) ^ 0x3169u;
        if ( !(v24 | *(_WORD *)(v22 + 4) ^ 0x3169) )
          break;
      }
      else if ( v21 == 19
             && _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)((char *)&xmmword_141A54ABD + 3)),
                      _mm_loadu_si128((const __m128i *)(v20 + 3))),
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)v20),
                      _mm_loadu_si128((const __m128i *)&xmmword_141A54ABD)))) == 0xFFFF )
      {
        break;
      }
LABEL_13:
      if ( (v55 & 0x100) != 0 )
        goto LABEL_50;
    }
    nullsub_1(v10, v21);
    v25 = sub_140001650(v23, 1);
    if ( !v25 )
      sub_14196B2DB(1, v23);
    v49 = v25;
    v48 = v23;
    sub_1419234B0(v25, v22, v23);
    v26 = v57;
    if ( v57 == (_QWORD)v56 )
      sub_141939F90(&v56);
    v27 = *((_QWORD *)&v56 + 1);
    v28 = 3 * v26;
    v29 = v48;
    *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v28) = v48;
    *(_QWORD *)(v27 + 8 * v28 + 8) = v49;
    *(_QWORD *)(v27 + 8 * v28 + 16) = v29;
    v57 = v26 + 1;
  }
  while ( (v55 & 0x100) == 0 );
LABEL_50:
  *(_QWORD *)(a1 + 16) = v57;
  *(_OWORD *)a1 = v56;
  *(_QWORD *)(a1 + 40) = v44;
  *(_OWORD *)(a1 + 24) = v43;
  *(_QWORD *)(a1 + 64) = v42;
  *(_OWORD *)(a1 + 48) = v41;
  *(__m128i *)(a1 + 72) = v50;
  *(_QWORD *)(a1 + 88) = v51;
  *(_OWORD *)(a1 + 96) = v45;
  *(_QWORD *)(a1 + 112) = v46;
  *(_BYTE *)(a1 + 125) = v61;
  *(_BYTE *)(a1 + 120) = v59;
  *(_BYTE *)(a1 + 121) = v60;
  v30 = v58;
  *(_BYTE *)(a1 + 124) = BYTE2(v58);
  *(_WORD *)(a1 + 122) = v30;
  return a1;
}
