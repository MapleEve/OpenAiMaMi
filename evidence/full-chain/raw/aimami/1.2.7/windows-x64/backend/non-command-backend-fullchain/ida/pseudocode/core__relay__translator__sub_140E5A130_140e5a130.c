// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e5a130 | name sub_140E5A130
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140E5A130(__m128i *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  char v11; // cl
  char v12; // r10
  char v13; // r11
  __int64 v14; // r9
  int v15; // r10d
  int v16; // ecx
  __int128 v17; // rax
  __int8 v18; // r14
  char *v19; // rax
  __int64 v20; // rdx
  __m128i v21; // xmm0
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  void *v33; // rax
  const __m128i *v34; // r14
  char v35; // di
  __int128 v36; // rax
  __int64 v37; // r8
  __m128i v38; // xmm0
  __m128i si128; // xmm0
  __m128i *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r12
  const __m128i *v43; // r15
  unsigned __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r12
  __int64 v48; // r14
  __m128i v49; // xmm0
  __int64 v50; // rax
  __m128i *v51; // rbx
  __int8 *v52; // rcx
  __int128 v53; // rax
  __int64 v54; // r8
  __m128i *v55; // rbx
  __m128i v56; // xmm0
  __m128i *v57; // rax
  __m128i *v58; // rcx
  __m128i *v59; // rdx
  __int64 v60; // rdx
  _QWORD v61[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v62[3]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v63[24]; // [rsp+78h] [rbp-8h]
  _BYTE v64[24]; // [rsp+90h] [rbp+10h]
  __int64 v65; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v66; // [rsp+B0h] [rbp+30h]
  char v67; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v68[31]; // [rsp+C1h] [rbp+41h] BYREF
  __int64 v69; // [rsp+E0h] [rbp+60h]
  __m128i v70; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v71; // [rsp+F8h] [rbp+78h]
  _OWORD v72[2]; // [rsp+100h] [rbp+80h] BYREF
  __m128i *v73; // [rsp+128h] [rbp+A8h]
  __m256i v74; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v75; // [rsp+150h] [rbp+D0h]
  __int128 v76; // [rsp+160h] [rbp+E0h]
  __int64 v77; // [rsp+170h] [rbp+F0h]
  __m128i *v78; // [rsp+178h] [rbp+F8h]
  _BYTE v79[31]; // [rsp+180h] [rbp+100h] BYREF
  __m128i *v80; // [rsp+1A0h] [rbp+120h]
  char v81; // [rsp+1AAh] [rbp+12Ah]
  char v82; // [rsp+1ABh] [rbp+12Bh]
  char v83; // [rsp+1ACh] [rbp+12Ch]
  char v84; // [rsp+1ADh] [rbp+12Dh]
  char v85; // [rsp+1AEh] [rbp+12Eh]
  char v86; // [rsp+1AFh] [rbp+12Fh]
  __int64 v87; // [rsp+1B0h] [rbp+130h]

  v87 = -2;
  if ( !*(_BYTE *)(a2 + 782) )
  {
    do
    {
      while ( 1 )
      {
        if ( !a4 )
          goto LABEL_2;
        v8 = a4;
        v9 = a3 + a4;
        v10 = *(char *)(v9 - 1);
        if ( v10 < 0 )
          break;
        a4 = v9 - 1 - a3;
        if ( v10 != 13 )
          goto LABEL_15;
      }
      v11 = *(_BYTE *)(v9 - 2);
      if ( v11 >= -64 )
      {
        v14 = v9 - 2;
        v16 = v11 & 0x1F;
      }
      else
      {
        v12 = *(_BYTE *)(v9 - 3);
        if ( v12 >= -64 )
        {
          v14 = v9 - 3;
          v15 = v12 & 0xF;
        }
        else
        {
          v13 = *(_BYTE *)(v9 - 4);
          v14 = v9 - 4;
          v15 = ((v13 & 7) << 6) | v12 & 0x3F;
        }
        v16 = (v15 << 6) | v11 & 0x3F;
      }
      a4 = v14 - a3;
    }
    while ( ((v16 << 6) | v10 & 0x3F) == 0xD );
LABEL_15:
    if ( v8 >= 5 && !(*(_DWORD *)a3 ^ 0x61746164 | *(unsigned __int8 *)(a3 + 4) ^ 0x3A) )
    {
      *(_QWORD *)&v17 = sub_140E91B30(a3 + 5, v8 - 5);
      if ( *((_QWORD *)&v17 + 1) )
      {
        if ( (_QWORD)v17 )
        {
          if ( *((_QWORD *)&v17 + 1) == 6 && !(*(_DWORD *)v17 ^ 0x4E4F445B | *(unsigned __int16 *)(v17 + 4) ^ 0x5D45) )
          {
            sub_140E4D8E0(
              (_DWORD)a1,
              a2,
              (unsigned int)"stream_truncated",
              16,
              (__int64)"Upstream Anthropic stream ended before message_stop",
              51,
              0);
            return a1;
          }
          *(_OWORD *)v74.m256i_i8 = v17;
          *(_OWORD *)&v74.m256i_u64[2] = 0;
          v75 = v17;
          sub_14062D280(v79, &v74);
          if ( v79[0] == 0xFF )
          {
            sub_140E4D8E0(
              (_DWORD)a1,
              a2,
              (unsigned int)aUpstreamProtoc,
              23,
              (__int64)"Invalid JSON in Anthropic SSE data",
              34,
              0);
            sub_14002F910(&v79[8]);
            return a1;
          }
          v72[1] = _mm_loadu_si128((const __m128i *)&v79[16]);
          v72[0] = _mm_loadu_si128((const __m128i *)v79);
          if ( *(_QWORD *)(a2 + 632) )
            sub_1401F81A0(a2 + 632, v72);
          v67 = -1;
          v18 = -1;
          if ( *(_QWORD *)(a2 + 368) == -2 )
            goto LABEL_25;
          v86 = -1;
          v85 = 1;
          v19 = sub_1401C3940((__int64 *)(a2 + 368), (__int64)v72);
          if ( v19 )
          {
            v86 = -1;
            v85 = 1;
            sub_140E4D8E0((_DWORD)a1, a2, (unsigned int)aUpstreamProtoc, 23, (__int64)v19, v20, 0);
LABEL_38:
            sub_140DF44E0(v72);
            return a1;
          }
          v86 = -1;
          v85 = 1;
          v23 = (_QWORD *)sub_1416419F0(aType_11, 4, v72);
          if ( !v23 )
            v23 = off_1421E7108;
          if ( *(_BYTE *)v23 != 3 )
          {
LABEL_25:
            v86 = v18;
            v85 = 1;
            sub_140E38370(&v70, (const __m128i *)a2, (__int64)v72);
            if ( (*(_BYTE *)(a2 + 782) | (v18 == -1)) == 1 )
            {
              a1[1].m128i_i64[0] = v71;
              *a1 = _mm_loadu_si128(&v70);
              if ( v18 != -1 )
                sub_140DF44E0(&v67);
            }
            else
            {
              LOBYTE(v80) = v18;
              v21 = _mm_loadu_si128((const __m128i *)&v67);
              *(__m128i *)&v74.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v68[15]);
              *(__m128i *)v74.m256i_i8 = v21;
              v22 = (_QWORD *)sub_1416419F0(aType_11, 4, &v74);
              if ( !v22 )
                v22 = off_1421E7108;
              if ( *(_BYTE *)v22 == 3
                && v22[3] == 15
                && !(*(_QWORD *)v22[2] ^ 0x745F726576726573LL | *(_QWORD *)(v22[2] + 7LL) ^ 0x6573755F6C6F6F74LL) )
              {
                v33 = (void *)sub_1416419F0(aId_8, 2, &v74);
                if ( !v33 )
                  v33 = off_1421E7108;
                if ( *(_BYTE *)v33 == 3 )
                {
                  v34 = *((const __m128i **)v33 + 2);
                  v4 = *((_QWORD *)v33 + 3);
                }
                else
                {
                  v34 = nullptr;
                }
                v41 = sub_141642800(&v74, aInputQuery_0, 12);
                if ( v41 && *(_BYTE *)v41 == 3 && v34 )
                {
                  v42 = a2;
                  v43 = *(const __m128i **)(v41 + 16);
                  v44 = *(_QWORD *)(v41 + 24);
                  sub_14072C410((unsigned int)v79, v4, 0, 1, 1);
                  v78 = *(__m128i **)&v79[8];
                  if ( *(_DWORD *)v79 == 1 )
                    sub_141938D2B(v78, *(_QWORD *)&v79[16]);
                  v45 = *(_QWORD *)&v79[16];
                  if ( v4 )
                    sub_1418F44E0(*(__m128i **)&v79[16], v34, v4);
                  v62[0] = v78;
                  v69 = v45;
                  v62[1] = v45;
                  v62[2] = v4;
                  sub_14072C410((unsigned int)v79, v44, 0, 1, 1);
                  v46 = *(_QWORD *)&v79[8];
                  LOBYTE(v73) = v79[0];
                  if ( v79[0] )
                    sub_141938D2B(*(_QWORD *)&v79[8], *(_QWORD *)&v79[16]);
                  v47 = v42 + 720;
                  v48 = *(_QWORD *)&v79[16];
                  if ( v44 )
                    sub_1418F44E0(*(__m128i **)&v79[16], v43, v44);
                  *(_QWORD *)v79 = v46;
                  *(_QWORD *)&v79[8] = v48;
                  *(_QWORD *)&v79[16] = v44;
                  sub_140E6F0A0(v61, v47, v62, v79);
                  if ( v61[0] != -1 && v61[0] )
                    sub_140001660(v61[1], v61[0], 1);
                }
              }
              sub_140DF44E0(&v74);
              a1[1].m128i_i64[0] = v71;
              *a1 = _mm_loadu_si128(&v70);
            }
            goto LABEL_38;
          }
          v4 = v23[2];
          v24 = v23[3];
          if ( *(_BYTE *)(a2 + 781) )
          {
            if ( v24 != 18 )
            {
              if ( v24 != 13 )
              {
                if ( v24 != 12 )
                  goto LABEL_25;
                if ( !(*(_QWORD *)v4 ^ 0x5F6567617373656DLL | *(unsigned int *)(v4 + 8) ^ 0x706F7473LL)
                  && *(_QWORD *)(a2 + 368) != -1
                  && *(_QWORD *)(a2 + 384) == 10
                  && !(**(_QWORD **)(a2 + 376) ^ 0x75745F6573756170LL
                     | *(unsigned __int16 *)(*(_QWORD *)(a2 + 376) + 8LL) ^ 0x6E72LL) )
                {
                  v86 = -1;
                  v85 = 1;
                  sub_1401C4910(v79, a2 + 368);
                  v84 = 1;
                  v25 = (_QWORD *)sub_1416419F0(aContent_9, 7, v79);
                  v80 = (__m128i *)a2;
                  if ( !v25 )
                    v25 = off_1421E7108;
                  if ( *(_BYTE *)v25 != 4 )
                  {
                    v84 = 1;
                    sub_141939020(&off_141A543A0);
                  }
                  v26 = v25[2];
                  v27 = v25[3];
                  v84 = 1;
                  v28 = sub_140280CD0(v26, v27);
                  if ( v28 )
                  {
                    v84 = 1;
                    sub_140E4D8E0((_DWORD)a1, (_DWORD)v80, (unsigned int)aUpstreamProtoc, 23, v28, v29, 0);
                    v86 = -1;
                    v85 = 1;
                    sub_140DF44E0(v79);
                  }
                  else
                  {
                    v51 = v80;
                    v84 = 1;
                    sub_140280F90(&v80[32].m128i_u64[1], &v80[24].m128i_u64[1]);
                    v52 = &v51[8].m128i_i8[8];
                    v73 = v51 + 27;
                    v53 = *(__int128 *)((char *)&v51[26] + 8);
                    v51[26].m128i_i64[1] = 0;
                    v54 = v53;
                    if ( (_QWORD)v53 )
                      v54 = v80[27].m128i_i64[1];
                    v55 = v80;
                    v80[27].m128i_i64[1] = 0;
                    *(_OWORD *)v74.m256i_i8 = (_QWORD)v53 != 0;
                    *(_OWORD *)&v74.m256i_u64[2] = v53;
                    v75 = *(_OWORD *)v74.m256i_i8;
                    v76 = v53;
                    v77 = v54;
                    v84 = 1;
                    sub_14037EAA0(v52, &v74);
                    v78 = (__m128i *)((char *)v55 + 552);
                    if ( v55[34].m128i_i8[8] != -1 )
                      sub_140DF44E0(v78);
                    v56 = *(__m128i *)v79;
                    v57 = v78;
                    v78[1] = _mm_loadu_si128((const __m128i *)&v79[16]);
                    *v57 = v56;
                    *(_OWORD *)&v63[8] = 0;
                    *(_OWORD *)&v64[8] = 0;
                    v66 = 0;
                    sub_140DF1EF0(a2 + 368);
                    v58 = v80;
                    v80[23].m128i_i64[0] = -1;
                    v58[24].m128i_i8[8] = 0;
                    v58[26].m128i_i64[1] = 0;
                    v59 = v73;
                    v73[1].m128i_i64[0] = *(_QWORD *)&v63[16];
                    *v59 = *(__m128i *)v63;
                    v58[29].m128i_i64[1] = *(_QWORD *)&v64[16];
                    *(__m128i *)((char *)v58 + 456) = *(__m128i *)v64;
                    v58[31].m128i_i64[0] = *((_QWORD *)&v66 + 1);
                    v58[30] = _mm_loadu_si128((const __m128i *)&v65);
                    v58[32].m128i_i8[0] = 0;
                    v60 = v58[21].m128i_i64[1];
                    if ( v60 != -1 && v60 )
                      sub_140001660(v80[22].m128i_i64[0], v60, 1);
                    v80[21].m128i_i64[1] = -1;
                    a1->m128i_i64[0] = 0;
                    a1->m128i_i64[1] = 1;
                    a1[1].m128i_i64[0] = 0;
                  }
                  goto LABEL_38;
                }
                goto LABEL_74;
              }
              goto LABEL_71;
            }
          }
          else
          {
            if ( v24 == 12 )
            {
LABEL_74:
              if ( !(*(_QWORD *)v4 ^ 0x5F6567617373656DLL | *(unsigned int *)(v4 + 8) ^ 0x706F7473LL) )
              {
                v36 = *(_OWORD *)(a2 + 424);
                *(_QWORD *)(a2 + 424) = 0;
                v37 = v36;
                if ( (_QWORD)v36 )
                  v37 = *(_QWORD *)(a2 + 440);
                *(_QWORD *)(a2 + 440) = 0;
                *(_OWORD *)v74.m256i_i8 = (_QWORD)v36 != 0;
                *(_OWORD *)&v74.m256i_u64[2] = v36;
                v75 = *(_OWORD *)v74.m256i_i8;
                v76 = v36;
                v77 = v37;
                v86 = -1;
                v85 = 1;
                sub_14037EAA0(a2 + 136, &v74);
              }
              if ( *(_QWORD *)v4 ^ 0x5F6567617373656DLL | *(unsigned int *)(v4 + 8) ^ 0x706F7473LL )
                goto LABEL_25;
              v35 = 0;
LABEL_80:
              v86 = -1;
              v85 = 1;
              sub_140E8EDA0(v79, a2 + 520);
              v83 = 1;
              sub_140280F90(v79, a2 + 392);
              if ( v35 && !(*(_QWORD *)v4 ^ 0x5F6567617373656DLL | *(_QWORD *)(v4 + 5) ^ 0x74726174735F6567LL) )
              {
                v49 = _mm_loadu_si128((const __m128i *)v79);
                *(__m128i *)&v74.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v79[16]);
                *(__m128i *)v74.m256i_i8 = v49;
                v82 = 1;
                v50 = sub_141641AF0("messagestackwindowLabelhref", 7, v72);
                v82 = 1;
                v80 = (__m128i *)sub_141641AF0(aUsage_5, 5, v50);
                sub_140DF44E0(v80);
              }
              else
              {
                v38 = _mm_loadu_si128((const __m128i *)v79);
                *(__m128i *)&v74.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v79[16]);
                *(__m128i *)v74.m256i_i8 = v38;
                v81 = 1;
                v80 = (__m128i *)sub_141641AF0(aUsage_5, 5, v72);
                sub_140DF44E0(v80);
              }
              si128 = _mm_load_si128((const __m128i *)&v74);
              v40 = v80;
              v80[1] = _mm_load_si128((const __m128i *)&v74.m256i_u64[2]);
              *v40 = si128;
              goto LABEL_25;
            }
            if ( v24 == 13 )
            {
LABEL_71:
              v35 = 1;
              if ( *(_QWORD *)v4 ^ 0x5F6567617373656DLL | *(_QWORD *)(v4 + 5) ^ 0x74726174735F6567LL
                && *(_QWORD *)v4 ^ 0x5F6567617373656DLL | *(_QWORD *)(v4 + 5) ^ 0x61746C65645F6567LL )
              {
                goto LABEL_25;
              }
              goto LABEL_80;
            }
            if ( v24 != 18 )
              goto LABEL_25;
          }
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v4 + 16)), (__m128i)xmmword_1419D34D0),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1419D34C0))) == 0xFFFF )
          {
            v86 = -1;
            v85 = 1;
            v30 = (_QWORD *)sub_1416419F0(aIndex_1, 5, v72);
            if ( !v30 )
              v30 = off_1421E7108;
            if ( *(_BYTE *)v30 == 2 && !v30[1] )
              v31 = sub_140E183E0(*(_QWORD *)(a2 + 424), *(_QWORD *)(a2 + 432), v30[2]);
            else
              v31 = 0;
            v86 = -1;
            v85 = 1;
            v32 = sub_140DDF1D0(v31);
            if ( v32 )
            {
              v86 = -1;
              v85 = 1;
              sub_140E8EDA0(&v74, v32);
              v18 = v74.m256i_i8[0];
              *(_OWORD *)v79 = *(_OWORD *)&v74.m256i_i8[1];
              *(__m128i *)&v79[15] = _mm_loadu_si128((const __m128i *)&v74.m256i_u64[2]);
            }
            v67 = v18;
            *(_OWORD *)v68 = *(_OWORD *)v79;
            *(__m128i *)&v68[15] = _mm_loadu_si128((const __m128i *)&v79[15]);
          }
          goto LABEL_25;
        }
      }
    }
  }
LABEL_2:
  a1->m128i_i64[0] = 0;
  a1->m128i_i64[1] = 1;
  a1[1].m128i_i64[0] = 0;
  return a1;
}
