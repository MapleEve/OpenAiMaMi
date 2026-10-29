// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140db5070 | name sub_140DB5070
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_140DB5070(_OWORD *a1, __int128 *a2)
{
  __int64 v3; // rax
  _BYTE *v4; // rdi
  _BYTE *v5; // r12
  __m128i si128; // xmm6
  __m128i v7; // xmm7
  __int64 v8; // rax
  _BYTE *v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  const __m128i *v12; // r8
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // r15
  const __m128i *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _BYTE *v31; // r15
  _DWORD *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // rax
  unsigned __int64 v37; // r15
  __m128i *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  _BYTE *v43; // rax
  __m128i v44; // xmm0
  __int128 v45; // xmm0
  _BYTE v47[7]; // [rsp+29h] [rbp-57h] BYREF
  __int128 v48; // [rsp+30h] [rbp-50h] BYREF
  __int64 v49; // [rsp+40h] [rbp-40h]
  _QWORD v50[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v51; // [rsp+60h] [rbp-20h]
  __int128 v52; // [rsp+68h] [rbp-18h] BYREF
  __int64 v53; // [rsp+78h] [rbp-8h]
  __int128 v54; // [rsp+80h] [rbp+0h] BYREF
  __int64 v55; // [rsp+90h] [rbp+10h]
  __int64 v56; // [rsp+98h] [rbp+18h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+20h]
  const __m128i *v58; // [rsp+A8h] [rbp+28h]
  const __m128i *v59; // [rsp+B0h] [rbp+30h]
  __int64 v60; // [rsp+B8h] [rbp+38h] BYREF
  _DWORD *v61; // [rsp+C0h] [rbp+40h]
  __int64 v62; // [rsp+C8h] [rbp+48h]
  __int128 *v63; // [rsp+D0h] [rbp+50h]
  const __m128i *v64; // [rsp+D8h] [rbp+58h]
  __m256i v65; // [rsp+E0h] [rbp+60h] BYREF
  __int64 *v66; // [rsp+100h] [rbp+80h] BYREF
  __int64 (__fastcall *v67)(); // [rsp+108h] [rbp+88h] BYREF
  __m128i v68; // [rsp+110h] [rbp+90h] BYREF
  const __m128i *v69; // [rsp+120h] [rbp+A0h]
  __int64 v70; // [rsp+128h] [rbp+A8h]
  __m256i v71; // [rsp+130h] [rbp+B0h] BYREF
  _BYTE *v72; // [rsp+158h] [rbp+D8h]
  char v73; // [rsp+166h] [rbp+E6h]
  char v74; // [rsp+167h] [rbp+E7h]
  __int64 v75; // [rsp+168h] [rbp+E8h]

  v75 = -2;
  v63 = a2;
  v3 = sub_1416419F0(aInput_3, 5, a2);
  if ( v3 && *(_BYTE *)v3 == 4 )
  {
    v4 = *(_BYTE **)(v3 + 16);
    v5 = &v4[32 * *(_QWORD *)(v3 + 24)];
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A42040);
    v7 = _mm_cvtsi32_si128(0x3A31u);
    while ( v4 != v5 )
    {
      v8 = sub_1416419F0(aType_10, 4, v4);
      v9 = v4;
      v4 += 32;
      if ( v8 )
      {
        if ( *(_BYTE *)v8 == 3
          && *(_QWORD *)(v8 + 24) == 10
          && !(**(_QWORD **)(v8 + 16) ^ 0x69746361706D6F63LL
             | *(unsigned __int16 *)(*(_QWORD *)(v8 + 16) + 8LL) ^ 0x6E6FLL) )
        {
          v10 = sub_1416419F0(aEncryptedConte_1, 17, v9);
          if ( v10 )
          {
            if ( *(_BYTE *)v10 == 3 )
            {
              v11 = *(_QWORD *)(v10 + 24);
              if ( v11 >= 0x12 )
              {
                v12 = *(const __m128i **)(v10 + 16);
                if ( _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_cvtsi32_si128(v12[1].m128i_u16[0]), v7),
                         _mm_cmpeq_epi8(_mm_loadu_si128(v12), si128))) == 0xFFFF )
                {
                  sub_1401A44D0(&v71, "", &v12[1].m128i_i16[1], v11 - 18);
                  if ( v71.m256i_i64[0] != -1 )
                  {
                    v70 = v71.m256i_i64[1];
                    v72 = (_BYTE *)v71.m256i_i64[0];
                    *(_OWORD *)v71.m256i_i8 = *(_OWORD *)&v71.m256i_u64[1];
                    *(_OWORD *)&v71.m256i_u64[2] = 0;
                    sub_14062F970(&v66, &v71);
                    if ( (_BYTE)v66 == 0xFF )
                    {
                      sub_14002F910(&v67);
                      if ( v72 )
                        sub_140001660(v70, v72, 1);
                    }
                    else
                    {
                      v13 = _mm_loadu_si128((const __m128i *)((char *)&v66 + 1));
                      *(__m128i *)&v65.m256i_u64[2] = _mm_loadu_si128(&v68);
                      *(__m128i *)&v65.m256i_i8[1] = v13;
                      v65.m256i_i8[0] = (char)v66;
                      v14 = sub_1416419F0(aSummary_4, 7, &v65);
                      v15 = -1;
                      if ( v14 )
                      {
                        if ( *(_BYTE *)v14 == 3 )
                        {
                          v16 = *(const __m128i **)(v14 + 24);
                          v64 = *(const __m128i **)(v14 + 16);
                          v69 = v16;
                          sub_140E91160(v64, v16);
                          if ( v17 )
                          {
                            sub_14072C410((unsigned int)&v71, (_DWORD)v69, 0, 1, 1);
                            v15 = v71.m256i_i64[1];
                            if ( v71.m256i_i8[0] )
                              sub_141938D2B(v71.m256i_i64[1], v71.m256i_i64[2]);
                            v51 = v71.m256i_i64[2];
                            if ( v69 )
                            {
                              sub_1418F44E0((__m128i *)v71.m256i_i64[2], v64, (unsigned __int64)v69);
                              v59 = v69;
                            }
                            else
                            {
                              v59 = nullptr;
                            }
                          }
                        }
                      }
                      sub_140409B40(&v65);
                      if ( v72 )
                        sub_140001660(v70, v72, 1);
                      if ( v15 != -1 )
                      {
                        v56 = v15;
                        v57 = v51;
                        v58 = v59;
                        *(_QWORD *)&v54 = 0;
                        v55 = 0;
                        nullsub_1(v18);
                        v19 = (_DWORD *)sub_140001650(4, 1);
                        if ( !v19 )
                          sub_141938D2B(1, 4);
                        *v19 = 1701869940;
                        v65.m256i_i64[0] = 4;
                        v65.m256i_i64[1] = (__int64)v19;
                        v65.m256i_i64[2] = 4;
                        nullsub_1(v20);
                        v21 = (_DWORD *)sub_140001650(7, 1);
                        v72 = v21;
                        if ( !v21 )
                          sub_141938D2B(1, 7);
                        *(_DWORD *)((char *)v21 + 3) = 1701273971;
                        *v21 = 1936942445;
                        v71.m256i_i8[0] = 3;
                        v71.m256i_i64[1] = 7;
                        v71.m256i_i64[2] = (__int64)v21;
                        v71.m256i_i64[3] = 7;
                        sub_140E72AA0(&v66, &v54, &v65, &v71);
                        if ( (_BYTE)v66 != 0xFF )
                          sub_140409B40(&v66);
                        nullsub_1(v22);
                        v23 = (_DWORD *)sub_140001650(4, 1);
                        if ( !v23 )
                          sub_141938D2B(1, 4);
                        *v23 = 1701605234;
                        v65.m256i_i64[0] = 4;
                        v65.m256i_i64[1] = (__int64)v23;
                        v65.m256i_i64[2] = 4;
                        nullsub_1(v24);
                        v25 = sub_140001650(6, 1);
                        v72 = (_BYTE *)v25;
                        if ( !v25 )
                          sub_141938D2B(1, 6);
                        *(_WORD *)(v25 + 4) = 28005;
                        *(_DWORD *)v25 = 1953724787;
                        v71.m256i_i8[0] = 3;
                        v71.m256i_i64[1] = 6;
                        v71.m256i_i64[2] = v25;
                        v71.m256i_i64[3] = 6;
                        sub_140E72AA0(&v66, &v54, &v65, &v71);
                        if ( (_BYTE)v66 != 0xFF )
                          sub_140409B40(&v66);
                        nullsub_1(v26);
                        v27 = (_DWORD *)sub_140001650(7, 1);
                        if ( !v27 )
                          sub_141938D2B(1, 7);
                        *(_DWORD *)((char *)v27 + 3) = 1953391988;
                        *v27 = 1953394531;
                        v50[0] = 7;
                        v50[1] = v27;
                        v50[2] = 7;
                        nullsub_1(v28);
                        v29 = sub_140001650(32, 8);
                        if ( !v29 )
                        {
                          v74 = 1;
                          sub_141938D11(8, 32);
                        }
                        v31 = (_BYTE *)v29;
                        *(_QWORD *)&v52 = 0;
                        v53 = 0;
                        nullsub_1(v30);
                        v32 = (_DWORD *)sub_140001650(4, 1);
                        v72 = v31;
                        if ( !v32 )
                          sub_141938D2B(1, 4);
                        *v32 = 1701869940;
                        v60 = 4;
                        v61 = v32;
                        v62 = 4;
                        nullsub_1(v33);
                        v34 = (void *)sub_140001650(10, 1);
                        v70 = (__int64)v34;
                        if ( !v34 )
                          sub_141938D2B(1, 10);
                        qmemcpy(v34, "input_text", 10);
                        v71.m256i_i8[0] = 3;
                        v71.m256i_i64[1] = 10;
                        v71.m256i_i64[2] = (__int64)v34;
                        v71.m256i_i64[3] = 10;
                        sub_140E72AA0(&v66, &v52, &v60, &v71);
                        if ( (_BYTE)v66 != 0xFF )
                          sub_140409B40(&v66);
                        nullsub_1(v35);
                        v36 = (_DWORD *)sub_140001650(4, 1);
                        if ( !v36 )
                          sub_141938D2B(1, 4);
                        *v36 = 1954047348;
                        v60 = 4;
                        v70 = (__int64)v36;
                        v61 = v36;
                        v62 = 4;
                        v66 = &v56;
                        v67 = sub_1400015F0;
                        sub_1416ABFD0(&v71, &unk_141A4DD6E, &v66);
                        v37 = v71.m256i_u64[2];
                        v69 = (const __m128i *)v71.m256i_i64[1];
                        v70 = v71.m256i_i64[0];
                        if ( v71.m256i_i64[2] < 0 )
                        {
                          v39 = 0;
LABEL_57:
                          v73 = 1;
                          sub_141938D2B(v39, v37);
                        }
                        if ( v71.m256i_i64[2] )
                        {
                          nullsub_1(v71.m256i_i64[1]);
                          v38 = (__m128i *)sub_140001650(v37, 1);
                          v39 = 1;
                          if ( !v38 )
                            goto LABEL_57;
                          v64 = v38;
                          sub_1418F44E0(v38, v69, v37);
                          v40 = (__int64)v64;
                        }
                        else
                        {
                          v40 = 1;
                        }
                        v71.m256i_i8[0] = 3;
                        v71.m256i_i64[1] = v37;
                        v71.m256i_i64[2] = v40;
                        v71.m256i_i64[3] = v37;
                        v73 = 0;
                        sub_140E72AA0(&v66, &v52, &v60, &v71);
                        if ( (_BYTE)v66 != 0xFF )
                          sub_140409B40(&v66);
                        if ( v70 )
                          sub_140001660(v69, v70, 1);
                        *(_OWORD *)v71.m256i_i8 = v52;
                        v71.m256i_i64[2] = v53;
                        *(__int64 *)((char *)&v65.m256i_i64[2] + 7) = v53;
                        *(_OWORD *)((char *)&v65.m256i_u32[1] + 3) = v52;
                        v41 = (__int64)v72;
                        *v72 = 5;
                        v42 = _mm_loadu_si128((const __m128i *)&v65);
                        *(__m128i *)(v41 + 16) = _mm_loadu_si128((const __m128i *)((char *)&v65.m256i_u64[1] + 7));
                        *(__m128i *)(v41 + 1) = v42;
                        v71.m256i_i64[1] = 1;
                        v71.m256i_i64[2] = v41;
                        v71.m256i_i64[3] = 1;
                        v71.m256i_i8[0] = 4;
                        v74 = 0;
                        sub_140E72AA0(&v66, &v54, v50, &v71);
                        if ( (_BYTE)v66 != 0xFF )
                          sub_140409B40(&v66);
                        *(_OWORD *)v71.m256i_i8 = v54;
                        v71.m256i_i64[2] = v55;
                        v49 = v55;
                        v48 = v54;
                        v72 = v9;
                        sub_140409B40(v9);
                        v43 = v72;
                        *v72 = 5;
                        v44 = _mm_loadu_si128((const __m128i *)v47);
                        *((__m128i *)v43 + 1) = _mm_loadu_si128((const __m128i *)((char *)&v48 + 8));
                        *(__m128i *)(v43 + 1) = v44;
                        if ( v56 )
                          sub_140001660(v57, v56, 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v45 = *v63;
  a1[1] = v63[1];
  *a1 = v45;
  return a1;
}
