// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140ec5890 | name sub_140EC5890
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EC5890(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)())
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __m128i si128; // xmm6
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int8 *v20; // rdi
  __int64 v21; // r14
  unsigned __int8 *v22; // rax
  unsigned __int64 v23; // rdx
  const __m128i *v24; // rdi
  unsigned __int64 v25; // rbx
  int v26; // eax
  __m128i *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int16 v32; // cx
  int v34[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  __int64 v38; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  __int64 v41; // [rsp+70h] [rbp-10h]
  __int64 v42; // [rsp+78h] [rbp-8h]
  __int128 v43; // [rsp+80h] [rbp+0h] BYREF
  __int64 v44; // [rsp+90h] [rbp+10h]
  __int128 v45; // [rsp+98h] [rbp+18h] BYREF
  __int64 v46; // [rsp+A8h] [rbp+28h]
  __int128 v47; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v48; // [rsp+C0h] [rbp+40h]
  __int64 v49; // [rsp+C8h] [rbp+48h]
  unsigned __int64 v50; // [rsp+D0h] [rbp+50h]
  __m128i *v51; // [rsp+D8h] [rbp+58h]
  __m128i v52; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v53; // [rsp+F0h] [rbp+70h]
  __m128i v54; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v55[5]; // [rsp+108h] [rbp+88h] BYREF
  char v56; // [rsp+130h] [rbp+B0h]
  __int16 v57; // [rsp+138h] [rbp+B8h]
  __int128 v58; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v59; // [rsp+150h] [rbp+D0h]
  __int64 v60; // [rsp+158h] [rbp+D8h]
  int v61; // [rsp+160h] [rbp+E0h]
  int v62; // [rsp+164h] [rbp+E4h]
  __int64 v63; // [rsp+168h] [rbp+E8h]
  _BYTE v64[3]; // [rsp+173h] [rbp+F3h] BYREF
  char v65; // [rsp+176h] [rbp+F6h]
  char v66; // [rsp+177h] [rbp+F7h]
  __int64 v67; // [rsp+178h] [rbp+F8h]

  v67 = -2;
  sub_140C72660((unsigned int)&v45, a3, (_DWORD)a4, (unsigned int)&unk_141A597F9, 14);
  v64[2] = 1;
  sub_140C72660((unsigned int)&v43, a3, (_DWORD)a4, (unsigned int)&unk_141A59807, 7);
  v66 = 1;
  sub_140C72660((unsigned int)&v54, a3, (_DWORD)a4, (unsigned int)aModel_8, 5);
  if ( v54.m128i_i64[0] == -1 )
  {
    v66 = 1;
    sub_140C71580(&v52, a3, a4);
  }
  else
  {
    v53 = v55[0];
    v52 = _mm_loadu_si128(&v54);
  }
  v64[1] = 1;
  sub_140C72660((unsigned int)&v47, a3, (_DWORD)a4, (unsigned int)aModelCatalogJs_1, 18);
  v61 = 0;
  v49 = v47;
  if ( a2 && (_QWORD)v47 != -1 )
  {
    v8 = *(_QWORD *)(a2 + 776);
    v9 = *(_QWORD *)(a2 + 784);
    v65 = 1;
    v61 = sub_140EFC0C0(v8, v9, *((_QWORD *)&v47 + 1), v48);
  }
  v65 = 1;
  sub_140C72660((unsigned int)&v54, a3, (_DWORD)a4, (unsigned int)&unk_141A59820, 15);
  if ( v54.m128i_i64[0] == -1 )
  {
    v62 = 0;
  }
  else
  {
    v60 = v54.m128i_i64[1];
    v63 = v54.m128i_i64[0];
    v10 = sub_140C72440(v54.m128i_i64[1], v55[0]);
    LOBYTE(v10) = (_WORD)v10 == 1;
    v62 = v10;
    if ( v63 )
      sub_140001660(v60, v63, 1);
  }
  v39 = *((_QWORD *)&v45 + 1);
  v36 = v45;
  v40 = *((_QWORD *)&v43 + 1);
  v37 = v43;
  v41 = v52.m128i_i64[1];
  v38 = v52.m128i_i64[0];
  v42 = *((_QWORD *)&v47 + 1);
  LOBYTE(v63) = sub_140C73960();
  LODWORD(v60) = sub_140C6E5C0(a3, a4);
  *(_QWORD *)&v58 = 0;
  *((_QWORD *)&v58 + 1) = 8;
  v59 = 0;
  v64[0] = 2;
  v54.m128i_i64[0] = 0;
  v54.m128i_i64[1] = (__int64)a4;
  v55[0] = a3;
  v55[1] = a4;
  v55[2] = 0;
  v55[3] = a4;
  v55[4] = 0xA0000000ALL;
  v56 = 1;
  v57 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419EC580);
  do
  {
    while ( 1 )
    {
      v13 = v55[0];
      sub_140F9C6A0(v34, v55);
      if ( v34[0] == 1 )
      {
        v14 = v54.m128i_i64[0];
        v54.m128i_i64[0] = v35;
        v15 = v35 - v14;
        v16 = v14 + v13;
        if ( v35 == v14 )
          goto LABEL_26;
LABEL_20:
        if ( *(_BYTE *)(v16 + v15 - 1) == 10 )
        {
          if ( v15 == 1 )
          {
            v15 = 0;
          }
          else if ( *(_BYTE *)(v16 + v15 - 2) == 13 )
          {
            v15 -= 2;
          }
          else
          {
            --v15;
          }
        }
        goto LABEL_26;
      }
      if ( HIBYTE(v57) )
        goto LABEL_50;
      HIBYTE(v57) = 1;
      v15 = v54.m128i_i64[1] - v54.m128i_i64[0];
      if ( ((unsigned __int8)v57 | (v54.m128i_i64[1] != v54.m128i_i64[0])) != 1 )
        goto LABEL_50;
      v16 = v55[0] + v54.m128i_i64[0];
      if ( v15 )
        goto LABEL_20;
LABEL_26:
      v17 = sub_140E91160(v16, v15);
      v19 = v18;
      if ( ((unsigned __int8)sub_1402B5F80(v64, v16, v15) & (v18 != 0)) != 1
        || *(_BYTE *)v17 != 91
        || *(_BYTE *)(v17 + v19 - 1) != 93 )
      {
        goto LABEL_13;
      }
      if ( v19 == 1 || *(char *)(v17 + 1) <= -65 )
        sub_141938F40(v17, v19, 1, v19 - 1, (__int64)&off_1419E98C8);
      if ( (unsigned __int64)(v19 - 2) >= 0x10 )
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v17 + 1)), si128)) == 0xFFFF )
        {
          v20 = (unsigned __int8 *)(v19 - 18);
          v21 = v17 + 17;
          goto LABEL_38;
        }
      }
      else if ( (unsigned __int64)(v19 - 2) < 9 )
      {
        goto LABEL_13;
      }
      if ( *(_QWORD *)(v17 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v17 + 9) ^ 0x2ELL )
        goto LABEL_13;
      v20 = (unsigned __int8 *)(v19 - 11);
      v21 = v17 + 10;
LABEL_38:
      v22 = sub_140E913E0(v21, v20, 34);
      v24 = (const __m128i *)v22;
      v25 = v23;
      if ( v23 == 12 )
      {
        v12 = *(_QWORD *)v22 ^ 0x725F696D616D6961LL | *((_DWORD *)v22 + 2) ^ 0x79616C65u;
        if ( !v12 )
          break;
        goto LABEL_13;
      }
      if ( v23 > 0xC )
      {
        v12 = *(_QWORD *)v22 ^ 0x725F696D616D6961LL | *(_QWORD *)(v22 + 5) ^ 0x5F79616C65725F69LL;
        if ( !v12 )
          break;
      }
      if ( v23 == 6 )
      {
        v26 = *(_DWORD *)v22 ^ 0x616D6961;
        v12 = v26 | v24->m128i_i16[2] ^ 0x3169u;
        if ( !(v26 | v24->m128i_i16[2] ^ 0x3169) )
          break;
      }
      else if ( v23 == 19
             && _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)((char *)&xmmword_141A3E902 + 3)),
                      _mm_loadu_si128((const __m128i *)(v22 + 3))),
                    _mm_cmpeq_epi8(
                      _mm_loadu_si128((const __m128i *)v22),
                      _mm_loadu_si128((const __m128i *)&xmmword_141A3E902)))) == 0xFFFF )
      {
        break;
      }
LABEL_13:
      if ( (v57 & 0x100) != 0 )
        goto LABEL_50;
    }
    nullsub_1(v12);
    v27 = (__m128i *)sub_140001650(v25, 1);
    if ( !v27 )
      sub_141938D2B(1, v25);
    v51 = v27;
    v50 = v25;
    sub_1418F44E0(v27, v24, v25);
    v28 = v59;
    if ( v59 == (_QWORD)v58 )
      sub_14190FDC0(&v58);
    v29 = *((_QWORD *)&v58 + 1);
    v30 = 3 * v28;
    v31 = v50;
    *(_QWORD *)(*((_QWORD *)&v58 + 1) + 8 * v30) = v50;
    *(_QWORD *)(v29 + 8 * v30 + 8) = v51;
    *(_QWORD *)(v29 + 8 * v30 + 16) = v31;
    v59 = v28 + 1;
  }
  while ( (v57 & 0x100) == 0 );
LABEL_50:
  *(_QWORD *)(a1 + 16) = v59;
  *(_OWORD *)a1 = v58;
  *(_QWORD *)(a1 + 40) = v46;
  *(_OWORD *)(a1 + 24) = v45;
  *(_QWORD *)(a1 + 64) = v44;
  *(_OWORD *)(a1 + 48) = v43;
  *(__m128i *)(a1 + 72) = v52;
  *(_QWORD *)(a1 + 88) = v53;
  *(_OWORD *)(a1 + 96) = v47;
  *(_QWORD *)(a1 + 112) = v48;
  *(_BYTE *)(a1 + 125) = v63;
  *(_BYTE *)(a1 + 120) = v61;
  *(_BYTE *)(a1 + 121) = v62;
  v32 = v60;
  *(_BYTE *)(a1 + 124) = BYTE2(v60);
  *(_WORD *)(a1 + 122) = v32;
  return a1;
}
