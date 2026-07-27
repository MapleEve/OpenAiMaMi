// module: codexmate_lib/platform/debug_log
// addr: 0x140405a30
// name: sub_140405A30
// win 1.2.1 | module src/platform/debug_log.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140405A30(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // r8
  char *v7; // r9
  unsigned __int8 *v8; // r12
  int v9; // r10d
  unsigned __int8 *v10; // rdx
  int v11; // r8d
  int v12; // r11d
  int v13; // r10d
  unsigned __int8 *v14; // r13
  unsigned __int8 *v15; // r9
  int v16; // r10d
  char v17; // r11
  char v18; // bl
  int v19; // ebx
  int v20; // r11d
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __m128i si128; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  unsigned __int64 v33; // rcx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  _QWORD *v39; // r15
  _QWORD *v40; // r12
  __int64 v41; // rbx
  _QWORD *v42; // r14
  unsigned __int8 *v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  bool v48; // al
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  _QWORD *v52; // rsi
  char v53[24]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v54[5]; // [rsp+48h] [rbp-38h] BYREF
  char v55; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v56; // [rsp+78h] [rbp-8h]
  _QWORD *v57; // [rsp+80h] [rbp+0h]
  unsigned __int64 v58; // [rsp+88h] [rbp+8h]
  __int64 v59; // [rsp+90h] [rbp+10h]
  __int64 v60; // [rsp+98h] [rbp+18h]

  v60 = -2;
  if ( a3 )
  {
    v3 = a3;
    v5 = (unsigned __int8 *)&a2[a3];
    v6 = nullptr;
    v7 = a2;
    do
    {
      v8 = v6;
      if ( v7 == (char *)v5 )
      {
        v10 = v5;
        v14 = nullptr;
        v8 = nullptr;
        break;
      }
      v9 = (unsigned __int8)*v7;
      if ( *v7 < 0 )
      {
        v11 = v9 & 0x1F;
        v12 = v7[1] & 0x3F;
        if ( (unsigned __int8)v9 <= 0xDFu )
        {
          v10 = (unsigned __int8 *)(v7 + 2);
          v9 = v12 | (v11 << 6);
        }
        else
        {
          v13 = (v12 << 6) | v7[2] & 0x3F;
          if ( (unsigned __int8)*v7 < 0xF0u )
          {
            v10 = (unsigned __int8 *)(v7 + 3);
            v9 = (v11 << 12) | v13;
          }
          else
          {
            v10 = (unsigned __int8 *)(v7 + 4);
            v9 = ((v11 & 7) << 18) | (v13 << 6) | v7[3] & 0x3F;
          }
        }
      }
      else
      {
        v10 = (unsigned __int8 *)(v7 + 1);
      }
      v6 = &v8[v10 - (unsigned __int8 *)v7];
      if ( v9 == 95 )
      {
        v14 = &v8[v10 - (unsigned __int8 *)v7];
        break;
      }
      if ( v9 == 45 )
      {
        v14 = &v8[v10 - (unsigned __int8 *)v7];
        break;
      }
      if ( (unsigned int)(v9 - 48) < 0xA )
      {
        v14 = &v8[v10 - (unsigned __int8 *)v7];
        break;
      }
      v7 = (char *)v10;
      v14 = v6;
    }
    while ( (v9 & 0xFFFFFFDF) - 65 > 0x19 );
    while ( v10 != v5 )
    {
      v15 = v5;
      v16 = (char)*(v5 - 1);
      if ( v16 < 0 )
      {
        v17 = *(v5 - 2);
        if ( v17 >= -64 )
        {
          v5 -= 2;
          v20 = v17 & 0x1F;
        }
        else
        {
          v18 = *(v5 - 3);
          if ( v18 >= -64 )
          {
            v5 -= 3;
            v19 = v18 & 0xF;
          }
          else
          {
            v5 -= 4;
            v19 = ((*(v15 - 4) & 7) << 6) | v18 & 0x3F;
          }
          v20 = (v19 << 6) | v17 & 0x3F;
        }
        v16 = (v20 << 6) | v16 & 0x3F;
        if ( v16 == 95 )
        {
LABEL_34:
          v14 = &v15[v6 - v10];
          break;
        }
      }
      else
      {
        --v5;
        if ( v16 == 95 )
          goto LABEL_34;
      }
      if ( v16 == 45 || (unsigned int)(v16 - 48) < 0xA || (v16 & 0x1FFFDFu) - 65 <= 0x19 )
        goto LABEL_34;
    }
    v21 = v14 - v8;
    if ( v14 == v8 )
      goto LABEL_49;
    v57 = a1;
    nullsub_1(a1);
    v22 = sub_140001650(v14 - v8, 1);
    if ( !v22 )
      sub_1416C2D4B(1, v14 - v8);
    v59 = v22;
    v56 = &v8[(_QWORD)a2];
    sub_141684120(v22, &v8[(_QWORD)a2], v14 - v8);
    if ( v21 < 8 )
    {
      v23 = 0;
      v24 = v59;
      goto LABEL_55;
    }
    if ( v21 >= 0x20 )
    {
      v23 = v21 & 0xFFFFFFFFFFFFFFE0uLL;
      v25 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
      v27 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
      v28 = _mm_load_si128((const __m128i *)&xmmword_141742470);
      v24 = v59;
      do
      {
        v29 = _mm_loadu_si128((const __m128i *)(v24 + v25));
        v30 = _mm_loadu_si128((const __m128i *)(v24 + v25 + 16));
        v31 = _mm_add_epi8(v29, si128);
        v32 = _mm_add_epi8(v30, si128);
        *(__m128i *)(v24 + v25) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v31, v27), v31), v28), v29);
        *(__m128i *)(v24 + v25 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v32, v27), v32), v28),
                                         v30);
        v25 += 32;
      }
      while ( v23 != v25 );
      if ( v21 == v23 )
      {
LABEL_57:
        v43 = v8;
        if ( v21 <= 2 )
          goto LABEL_58;
        v44 = 0;
        if ( v21 >= 0xA )
        {
          LOBYTE(v44) = (*(_WORD *)v59 ^ 0x6B73 | *(unsigned __int8 *)(v59 + 2) ^ 0x2D) != 0;
          if ( !v44 )
            goto LABEL_67;
        }
        v45 = v8[(_QWORD)a2 + 2] ^ 0x4Au;
        LOWORD(v45) = *(_WORD *)&v8[(_QWORD)a2] ^ 0x7965 | v8[(_QWORD)a2 + 2] ^ 0x4A;
        if ( !(_WORD)v45 )
        {
          v54[0] = &v8[(_QWORD)a2];
          v54[1] = v14 - v8;
          v54[2] = 0;
          v58 = v14 - v8;
          v54[3] = v14 - v8;
          v54[4] = 0x2E0000002ELL;
          v55 = 1;
          v46 = 0;
          do
          {
            v47 = v46;
            sub_140421EE0(v53, v54);
            v46 = v47 + 1;
          }
          while ( v53[0] );
          v48 = v47 >= 2;
          v21 = v58;
          if ( v48 && v58 >= 0x28 )
          {
LABEL_67:
            sub_140001660(v59, v21, 1);
            a1 = v57;
            v39 = v57 + 2;
            v40 = v57 + 1;
LABEL_68:
            v41 = a1[2];
            if ( (unsigned __int64)(*a1 - v41) <= 9 )
            {
              v52 = a1;
              sub_141688D30((_DWORD)a1, v41, 10, 1, 1);
              v41 = v52[2];
            }
            qmemcpy((void *)(*v40 + v41), "[REDACTED]", 10);
            v3 = 10;
            goto LABEL_53;
          }
        }
        v43 = v8;
        if ( v21 < 0x10 )
        {
LABEL_58:
          while ( v43[(_QWORD)a2] != 64 )
          {
            if ( v14 == ++v43 )
              goto LABEL_60;
          }
          while ( v8[(_QWORD)a2] != 46 )
          {
            if ( v14 == ++v8 )
              goto LABEL_60;
          }
          sub_140001660(v59, v21, 1);
          a1 = v57;
          v39 = v57 + 2;
          v40 = v57 + 1;
          if ( v21 > 4 )
            goto LABEL_68;
          goto LABEL_50;
        }
        LOBYTE(v45) = 64;
        v58 = v21;
        v49 = sub_1414A3EA0(v45, v56, v21);
        v21 = v58;
        if ( v49 == 1 )
        {
          LOBYTE(v50) = 46;
          v51 = sub_1414A3EA0(v50, v56, v58);
          sub_140001660(v59, v58, 1);
          a1 = v57;
          v39 = v57 + 2;
          v40 = v57 + 1;
          if ( v51 == 1 )
            goto LABEL_68;
LABEL_50:
          v41 = a1[2];
          if ( v3 > *a1 - v41 )
          {
            v42 = a1;
            sub_141688D30((_DWORD)a1, v41, v3, 1, 1);
            v41 = v42[2];
          }
          sub_141684120(v41 + *v40, a2, v3);
LABEL_53:
          *v39 = v3 + v41;
          return;
        }
LABEL_60:
        sub_140001660(v59, v21, 1);
        a1 = v57;
LABEL_49:
        v39 = a1 + 2;
        v40 = a1 + 1;
        goto LABEL_50;
      }
      if ( (v21 & 0x18) == 0 )
      {
        do
        {
LABEL_55:
          *(_BYTE *)(v24 + v23) |= 32 * ((unsigned __int8)(*(_BYTE *)(v24 + v23) - 65) < 0x1Au);
          ++v23;
LABEL_56:
          ;
        }
        while ( v21 != v23 );
        goto LABEL_57;
      }
    }
    else
    {
      v23 = 0;
      v24 = v59;
    }
    v33 = v23;
    v23 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
    v34 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v35 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v36 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v37 = _mm_loadl_epi64((const __m128i *)(v24 + v33));
      v38 = _mm_add_epi8(v37, v34);
      *(_QWORD *)(v24 + v33) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v38, v35), v38), v36), v37).m128i_u64[0];
      v33 += 8LL;
    }
    while ( v23 != v33 );
    goto LABEL_56;
  }
}