// win 1.2.1 | module src/core/relay/dialects/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140AE7DE0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  char v8; // r12
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int8 v11; // bl
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r13
  const char *v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rbx
  __m128i si128; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm3
  __m128i v34; // xmm4
  __m128i v35; // xmm5
  __m128i v36; // xmm6
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  __m128i v41; // xmm4
  char *v42; // r13
  __int64 v43; // rax
  __m128i v44; // xmm0
  _QWORD v45[2]; // [rsp+30h] [rbp-50h] BYREF
  __m256i v46; // [rsp+40h] [rbp-40h] BYREF
  __int64 v47; // [rsp+68h] [rbp-18h] BYREF
  _DWORD *v48; // [rsp+70h] [rbp-10h]
  __int64 v49; // [rsp+78h] [rbp-8h]
  __int128 v50; // [rsp+80h] [rbp+0h] BYREF
  __int64 v51; // [rsp+90h] [rbp+10h]
  __m256i v52; // [rsp+98h] [rbp+18h] BYREF
  __m128i *v53; // [rsp+B8h] [rbp+38h]
  char v54; // [rsp+C2h] [rbp+42h]
  char v55; // [rsp+C3h] [rbp+43h]
  char v56; // [rsp+C4h] [rbp+44h]
  char v57; // [rsp+C5h] [rbp+45h]
  char v58; // [rsp+C6h] [rbp+46h]
  char v59; // [rsp+C7h] [rbp+47h]
  __int64 v60; // [rsp+C8h] [rbp+48h]

  v60 = -2; /*0x140ae7e05*/
  switch ( a3 ) /*0x140ae7e25*/
  {
    case 0: /*0x140ae7e25*/
      return apply_reasoning_0(a1, a2, a4, a5); /*0x140ae7e6c*/
    case 1: /*0x140ae7e25*/
      LOBYTE(v5) = 1; /*0x140ae7e71*/
      v8 = 0; /*0x140ae7e74*/
      result = sub_140AE7B90(a2); /*0x140ae7e7a*/
      if ( (_BYTE)result != 2 ) /*0x140ae7e81*/
        goto LABEL_6; /*0x140ae7e81*/
      return result; /*0x140ae7e81*/
    case 2: /*0x140ae7e25*/
    case 4: /*0x140ae7e25*/
    case 5: /*0x140ae7e25*/
      v8 = 2; /*0x140ae7e27*/
      v5 = 0; /*0x140ae7e2a*/
      result = sub_140AE7B90(a2); /*0x140ae7e30*/
      if ( (_BYTE)result == 2 ) /*0x140ae7e37*/
        return result; /*0x140ae7e37*/
LABEL_6:
      v11 = result; /*0x140ae7e87*/
      *(_QWORD *)&v50 = 0; /*0x140ae7e89*/
      v51 = 0; /*0x140ae7e91*/
      nullsub_1(v10); /*0x140ae7e99*/
      v12 = (_DWORD *)sub_140001650(4, 1); /*0x140ae7ea8*/
      if ( !v12 ) /*0x140ae7eb0*/
        sub_1416C2D4B(1, 4); /*0x140ae82cb*/
      *v12 = 1701869940; /*0x140ae7eb6*/
      v47 = 4; /*0x140ae7ebc*/
      v48 = v12; /*0x140ae7ec4*/
      v49 = 4; /*0x140ae7ec8*/
      nullsub_1(v13); /*0x140ae7edc*/
      v14 = sub_140001650(8LL - v11, 1); /*0x140ae7ee9*/
      v53 = (__m128i *)v14; /*0x140ae7ef1*/
      if ( !v14 ) /*0x140ae7ef5*/
        sub_1416C2D4B(1, 8LL - v11); /*0x140ae82de*/
      v15 = v14; /*0x140ae7efb*/
      v16 = aDisabled_1; /*0x140ae7f05*/
      if ( (v11 & 1) != 0 ) /*0x140ae7f0f*/
        v16 = aEnabled_6; /*0x140ae7f0f*/
      sub_141684120(v14, v16, 8LL - v11); /*0x140ae7f19*/
      v52.m256i_i8[0] = 3; /*0x140ae7f1e*/
      v52.m256i_i64[1] = 8LL - v11; /*0x140ae7f22*/
      v52.m256i_i64[2] = v15; /*0x140ae7f26*/
      v52.m256i_i64[3] = v52.m256i_i64[1]; /*0x140ae7f2a*/
      sub_140307860(&v46, &v50, &v47, &v52); /*0x140ae7f3d*/
      if ( v46.m256i_i8[0] != -1 ) /*0x140ae7f47*/
        sub_1400104F0(&v46); /*0x140ae7f4d*/
      *(_OWORD *)&v52.m256i_u64[1] = v50; /*0x140ae7f57*/
      v52.m256i_i64[3] = v51; /*0x140ae7f5f*/
      v52.m256i_i8[0] = 5; /*0x140ae7f63*/
      v58 = 1; /*0x140ae7f67*/
      v53 = (__m128i *)sub_141433E50(aThinking_1, 8, a1); /*0x140ae7f80*/
      sub_1400104F0(v53); /*0x140ae7f87*/
      v17 = _mm_loadu_si128((const __m128i *)&v52); /*0x140ae7f8d*/
      result = (__int64)v53; /*0x140ae7f97*/
      v53[1] = _mm_loadu_si128((const __m128i *)&v52.m256i_u64[2]); /*0x140ae7f9b*/
      *(__m128i *)result = v17; /*0x140ae7fa0*/
      if ( (v11 & (unsigned __int8)v5) == 0 ) /*0x140ae7fa7*/
        return result; /*0x140ae7fa7*/
      goto LABEL_18; /*0x140ae7fa7*/
    case 3: /*0x140ae7e25*/
      result = sub_140AE7B90(a2); /*0x140ae7fb1*/
      if ( (_BYTE)result == 2 ) /*0x140ae7fb8*/
        return result; /*0x140ae7fb8*/
      v52.m256i_i8[0] = 1; /*0x140ae7fbe*/
      v52.m256i_i8[1] = result; /*0x140ae7fc2*/
      v57 = 1; /*0x140ae7fc5*/
      v53 = (__m128i *)sub_141433E50(aReasoningSplit, 15, a1); /*0x140ae7fde*/
      sub_1400104F0(v53); /*0x140ae7fe5*/
      goto LABEL_28; /*0x140ae7feb*/
    case 6: /*0x140ae7e25*/
      LOBYTE(result) = sub_140AE7B90(a2); /*0x140ae7ff3*/
      if ( !(_BYTE)result ) /*0x140ae7ffa*/
      {
        *(_QWORD *)&v50 = 0; /*0x140ae805b*/
        v51 = 0; /*0x140ae8063*/
        nullsub_1(v18); /*0x140ae806b*/
        v22 = sub_140001650(6, 1); /*0x140ae807a*/
        if ( !v22 ) /*0x140ae8082*/
          sub_1416C2D4B(1, 6); /*0x140ae82f3*/
        *(_WORD *)(v22 + 4) = 29810; /*0x140ae8088*/
        *(_DWORD *)v22 = 1868981861; /*0x140ae808e*/
        v47 = 6; /*0x140ae8094*/
        v48 = (_DWORD *)v22; /*0x140ae809c*/
        v49 = 6; /*0x140ae80a0*/
        nullsub_1(v23); /*0x140ae80a8*/
        v24 = (__m128i *)sub_140001650(4, 1); /*0x140ae80b7*/
        v53 = v24; /*0x140ae80bf*/
        if ( !v24 ) /*0x140ae80c3*/
          sub_1416C2D4B(1, 4); /*0x140ae8308*/
        v24->m128i_i32[0] = 1701736302; /*0x140ae80c9*/
        v52.m256i_i8[0] = 3; /*0x140ae80cf*/
        v52.m256i_i64[1] = 4; /*0x140ae80d3*/
        v52.m256i_i64[2] = (__int64)v24; /*0x140ae80db*/
        v52.m256i_i64[3] = 4; /*0x140ae80df*/
        sub_140307860(&v46, &v50, &v47, &v52); /*0x140ae80f6*/
        if ( v46.m256i_i8[0] != -1 ) /*0x140ae8100*/
          sub_1400104F0(&v46); /*0x140ae8106*/
        *(_OWORD *)&v52.m256i_u64[1] = v50; /*0x140ae8110*/
        v52.m256i_i64[3] = v51; /*0x140ae8118*/
        v52.m256i_i8[0] = 5; /*0x140ae811c*/
        v56 = 1; /*0x140ae8120*/
        v53 = (__m128i *)sub_141433E50(aReasoning_1, 9, a1); /*0x140ae8139*/
        sub_1400104F0(v53); /*0x140ae8140*/
        goto LABEL_28; /*0x140ae8140*/
      }
      result = (unsigned __int8)result; /*0x140ae7ffc*/
      v8 = 1; /*0x140ae7fff*/
      if ( (unsigned __int8)result == 2 ) /*0x140ae8005*/
        return result; /*0x140ae8005*/
LABEL_18:
      result = sub_14142E200(a2, aReasoningEffor, 17); /*0x140ae800b*/
      if ( !result || *(_BYTE *)result != 3 ) /*0x140ae802c*/
        return result; /*0x140ae802c*/
      result = sub_14033BC10(*(_QWORD *)(result + 16), *(_QWORD *)(result + 24)); /*0x140ae803a*/
      v21 = v19; /*0x140ae803f*/
      if ( v19 < 0 ) /*0x140ae8045*/
      {
        v5 = 0; /*0x140ae804b*/
        goto LABEL_22; /*0x140ae804b*/
      }
      if ( !v19 ) /*0x140ae8179*/
      {
        v29 = 1; /*0x140ae81bd*/
        goto LABEL_57; /*0x140ae81c2*/
      }
      v27 = result; /*0x140ae817b*/
      nullsub_1(v20); /*0x140ae817e*/
      v5 = 1; /*0x140ae8183*/
      v28 = sub_140001650(v21, 1); /*0x140ae8191*/
      if ( !v28 ) /*0x140ae8199*/
LABEL_22:
        sub_1416C2D4B(v5, v21); /*0x140ae804e*/
      v29 = v28; /*0x140ae819f*/
      sub_141684120(v28, v27, v21); /*0x140ae81ab*/
      if ( v21 < 8 ) /*0x140ae81b4*/
      {
        result = 0; /*0x140ae81b6*/
        goto LABEL_49; /*0x140ae81b8*/
      }
      if ( v21 < 0x20 ) /*0x140ae81cb*/
      {
        result = 0; /*0x140ae81cd*/
        goto LABEL_42; /*0x140ae81cf*/
      }
      result = v21 & 0x7FFFFFFFFFFFFFE0LL; /*0x140ae81de*/
      v20 = 0; /*0x140ae81e1*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_141742460); /*0x140ae81e3*/
      v31 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0); /*0x140ae81eb*/
      v32 = _mm_load_si128((const __m128i *)&xmmword_141742470); /*0x140ae81f3*/
      do /*0x140ae8250*/
      {
        v33 = _mm_loadu_si128((const __m128i *)(v29 + v20)); /*0x140ae81fb*/
        v34 = _mm_loadu_si128((const __m128i *)(v29 + v20 + 16)); /*0x140ae8200*/
        v35 = _mm_add_epi8(v33, si128); /*0x140ae820a*/
        v36 = _mm_add_epi8(v34, si128); /*0x140ae8212*/
        *(__m128i *)(v29 + v20) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v35, v31), v35), v32), v33); /*0x140ae823e*/
        *(__m128i *)(v29 + v20 + 16) = _mm_or_si128( /*0x140ae8243*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v36, v31), v36), v32),
                                         v34);
        v20 += 32; /*0x140ae8249*/
      }
      while ( result != v20 ); /*0x140ae8250*/
      if ( v21 == result ) /*0x140ae8255*/
        goto LABEL_51; /*0x140ae8255*/
      if ( (v21 & 0x18) != 0 ) /*0x140ae825f*/
      {
LABEL_42:
        v20 = result; /*0x140ae8265*/
        result = v21 & 0x7FFFFFFFFFFFFFF8LL; /*0x140ae8272*/
        v37 = _mm_load_si128((const __m128i *)&xmmword_141742480); /*0x140ae8275*/
        v38 = _mm_load_si128((const __m128i *)&xmmword_141742490); /*0x140ae827d*/
        v39 = _mm_load_si128((const __m128i *)&xmmword_1417424A0); /*0x140ae8285*/
        do /*0x140ae82bd*/
        {
          v40 = _mm_loadl_epi64((const __m128i *)(v29 + v20)); /*0x140ae8290*/
          v41 = _mm_add_epi8(v40, v37); /*0x140ae8299*/
          *(_QWORD *)(v29 + v20) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v41, v38), v41), v39), v40).m128i_u64[0]; /*0x140ae82b1*/
          v20 += 8; /*0x140ae82b6*/
        }
        while ( result != v20 ); /*0x140ae82bd*/
        goto LABEL_50; /*0x140ae82bd*/
      }
      do /*0x140ae832e*/
      {
LABEL_49:
        v20 = *(unsigned __int8 *)(v29 + result); /*0x140ae8313*/
        *(_BYTE *)(v29 + result++) = v20 | (32 * ((unsigned __int8)(v20 - 65) < 0x1Au)); /*0x140ae8325*/
LABEL_50:
        ; /*0x140ae832b*/
      }
      while ( v21 != result ); /*0x140ae832e*/
LABEL_51:
      if ( v21 == 3 ) /*0x140ae8334*/
      {
        result = *(unsigned __int16 *)v29 ^ 0x666Fu; /*0x140ae848b*/
        v20 = *(unsigned __int8 *)(v29 + 2) ^ 0x66u; /*0x140ae8494*/
        LOWORD(v20) = *(_WORD *)v29 ^ 0x666F | *(unsigned __int8 *)(v29 + 2) ^ 0x66; /*0x140ae8497*/
        if ( (_WORD)v20 ) /*0x140ae849a*/
          goto LABEL_57; /*0x140ae849a*/
        return sub_140001660(v29, v21, 1); /*0x140ae84b1*/
      }
      if ( v21 == 8 ) /*0x140ae833e*/
      {
        result = 0x64656C6261736964LL; /*0x140ae8353*/
        if ( *(_QWORD *)v29 != 0x64656C6261736964LL ) /*0x140ae8360*/
          goto LABEL_57; /*0x140ae8360*/
        return sub_140001660(v29, v21, 1); /*0x140ae8360*/
      }
      if ( v21 == 4 && *(_DWORD *)v29 == 1701736302 ) /*0x140ae834c*/
        return sub_140001660(v29, v21, 1); /*0x140ae834c*/
LABEL_57:
      if ( v8 ) /*0x140ae836d*/
      {
        result = v21 - 3; /*0x140ae836f*/
        if ( v8 == 1 ) /*0x140ae8377*/
        {
          switch ( v21 ) /*0x140ae8395*/
          {
            case 3uLL: /*0x140ae8395*/
              result = *(unsigned __int16 *)v29 ^ 0x616Du; /*0x140ae839a*/
              v20 = *(unsigned __int8 *)(v29 + 2) ^ 0x78u; /*0x140ae83a3*/
              LOWORD(v20) = *(_WORD *)v29 ^ 0x616D | *(unsigned __int8 *)(v29 + 2) ^ 0x78; /*0x140ae83a6*/
              if ( (_WORD)v20 ) /*0x140ae83a9*/
              {
                v20 = *(unsigned __int8 *)(v29 + 2) ^ 0x77u; /*0x140ae83bb*/
                v42 = nullptr; /*0x140ae83be*/
                LOWORD(v20) = *(_WORD *)v29 ^ 0x6F6C | *(unsigned __int8 *)(v29 + 2) ^ 0x77; /*0x140ae83c1*/
                result = (__int64)&aUltramaxxhighh[23]; /*0x140ae83c4*/
                if ( !(_WORD)v20 ) /*0x140ae83cb*/
                  v42 = &aUltramaxxhighh[23]; /*0x140ae83cb*/
                v5 = 3; /*0x140ae83cf*/
              }
              else
              {
                v42 = &aUltramaxxhighh[8]; /*0x140ae87a9*/
                v5 = 5; /*0x140ae87b0*/
              }
              break; /*0x140ae83d5*/
            case 4uLL: /*0x140ae8395*/
              v42 = nullptr; /*0x140ae8575*/
              result = (__int64)&aUltramaxxhighh[13]; /*0x140ae857e*/
              if ( *(_DWORD *)v29 == 1751607656 ) /*0x140ae8585*/
                v42 = &aUltramaxxhighh[13]; /*0x140ae8585*/
              goto LABEL_100; /*0x140ae8585*/
            case 5uLL: /*0x140ae8395*/
              result = *(_DWORD *)v29 ^ 0x72746C75u; /*0x140ae850f*/
              v5 = 5; /*0x140ae8518*/
              v20 = (unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x61; /*0x140ae851e*/
              if ( !((unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x61) ) /*0x140ae8520*/
                goto LABEL_113; /*0x140ae8520*/
              v42 = nullptr; /*0x140ae8534*/
              v20 = *(_DWORD *)v29 ^ 0x67696878 | *(unsigned __int8 *)(v29 + 4) ^ 0x68u; /*0x140ae8537*/
              result = (__int64)&aUltramaxxhighh[8]; /*0x140ae8539*/
              if ( !(*(_DWORD *)v29 ^ 0x67696878 | *(unsigned __int8 *)(v29 + 4) ^ 0x68) ) /*0x140ae8537*/
                v42 = &aUltramaxxhighh[8]; /*0x140ae8540*/
              break; /*0x140ae8540*/
            case 6uLL: /*0x140ae8395*/
              v42 = nullptr; /*0x140ae855a*/
              v20 = *(_DWORD *)v29 ^ 0x6964656D | *(unsigned __int16 *)(v29 + 4) ^ 0x6D75u; /*0x140ae855d*/
              result = (__int64)&aUltramaxxhighh[17]; /*0x140ae855f*/
              if ( !(*(_DWORD *)v29 ^ 0x6964656D | *(unsigned __int16 *)(v29 + 4) ^ 0x6D75) ) /*0x140ae855d*/
                v42 = &aUltramaxxhighh[17]; /*0x140ae8566*/
              v5 = 6; /*0x140ae856a*/
              break; /*0x140ae8570*/
            case 7uLL: /*0x140ae8395*/
              v42 = nullptr; /*0x140ae84ef*/
              v20 = *(_DWORD *)v29 ^ 0x696E696D | *(_DWORD *)(v29 + 3) ^ 0x6C616D69u; /*0x140ae84f2*/
              result = (__int64)&aUltramaxxhighh[26]; /*0x140ae84f4*/
              if ( !(*(_DWORD *)v29 ^ 0x696E696D | *(_DWORD *)(v29 + 3) ^ 0x6C616D69) ) /*0x140ae84f2*/
                v42 = &aUltramaxxhighh[26]; /*0x140ae84fb*/
              v5 = 7; /*0x140ae84ff*/
              break; /*0x140ae8505*/
            default:
              goto LABEL_98;
          }
        }
        else
        {
          switch ( v21 ) /*0x140ae8444*/
          {
            case 3uLL: /*0x140ae8444*/
              result = *(unsigned __int16 *)v29 ^ 0x6F6Cu; /*0x140ae8449*/
              v20 = *(unsigned __int8 *)(v29 + 2) ^ 0x77u; /*0x140ae8452*/
              v5 = 3; /*0x140ae8455*/
              LOWORD(v20) = *(_WORD *)v29 ^ 0x6F6C | *(unsigned __int8 *)(v29 + 2) ^ 0x77; /*0x140ae845b*/
              if ( (_WORD)v20 ) /*0x140ae845e*/
              {
                result = *(unsigned __int16 *)v29 ^ 0x616Du; /*0x140ae8467*/
                v20 = *(unsigned __int8 *)(v29 + 2) ^ 0x78u; /*0x140ae8470*/
                LOWORD(v20) = *(_WORD *)v29 ^ 0x616D | *(unsigned __int8 *)(v29 + 2) ^ 0x78; /*0x140ae8473*/
                if ( (_WORD)v20 ) /*0x140ae8476*/
                  goto LABEL_98; /*0x140ae8476*/
                v42 = &aUltramaxxhighh[5]; /*0x140ae847c*/
              }
              else
              {
                v42 = &aUltramaxxhighh[23]; /*0x140ae87bb*/
              }
              break; /*0x140ae8483*/
            case 4uLL: /*0x140ae8444*/
              if ( *(_DWORD *)v29 == 1751607656 ) /*0x140ae8611*/
                goto LABEL_99; /*0x140ae8611*/
              goto LABEL_98; /*0x140ae8611*/
            case 5uLL: /*0x140ae8444*/
              result = *(_DWORD *)v29 ^ 0x67696878u; /*0x140ae85b5*/
              v5 = 5; /*0x140ae85be*/
              v20 = (unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x68; /*0x140ae85c4*/
              if ( (unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x68 ) /*0x140ae85c4*/
              {
                result = *(_DWORD *)v29 ^ 0x72746C75u; /*0x140ae85d1*/
                v20 = (unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x61; /*0x140ae85da*/
                if ( (unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x61 ) /*0x140ae85da*/
LABEL_98:
                  v42 = nullptr; /*0x140ae8613*/
                else
                  v42 = aUltramaxxhighh; /*0x140ae85de*/
              }
              else
              {
LABEL_113:
                v42 = &aUltramaxxhighh[8]; /*0x140ae879d*/
              }
              break; /*0x140ae85e5*/
            case 6uLL: /*0x140ae8444*/
              result = *(_DWORD *)v29 ^ 0x6964656Du; /*0x140ae85ec*/
              v20 = (unsigned int)result | *(unsigned __int16 *)(v29 + 4) ^ 0x6D75; /*0x140ae85f8*/
              if ( (unsigned int)result | *(unsigned __int16 *)(v29 + 4) ^ 0x6D75 ) /*0x140ae85f8*/
                goto LABEL_98; /*0x140ae85fa*/
              v42 = &aUltramaxxhighh[17]; /*0x140ae85fc*/
              v5 = 6; /*0x140ae8603*/
              break; /*0x140ae8609*/
            case 7uLL: /*0x140ae8444*/
              result = *(_DWORD *)v29 ^ 0x696E696Du; /*0x140ae8593*/
              v20 = (unsigned int)result | *(_DWORD *)(v29 + 3) ^ 0x6C616D69; /*0x140ae859d*/
              if ( (unsigned int)result | *(_DWORD *)(v29 + 3) ^ 0x6C616D69 ) /*0x140ae859d*/
                goto LABEL_98; /*0x140ae859f*/
              v42 = &aUltramaxxhighh[26]; /*0x140ae85a1*/
              v5 = 7; /*0x140ae85a8*/
              break; /*0x140ae85ae*/
            default:
              goto LABEL_98;
          }
        }
      }
      else
      {
        if ( v21 == 3 ) /*0x140ae83de*/
        {
          result = *(unsigned __int16 *)v29 ^ 0x616Du; /*0x140ae84b9*/
          v20 = *(unsigned __int8 *)(v29 + 2) ^ 0x78u; /*0x140ae84c2*/
          LOWORD(v20) = *(_WORD *)v29 ^ 0x616D | *(unsigned __int8 *)(v29 + 2) ^ 0x78; /*0x140ae84c5*/
          if ( !(_WORD)v20 ) /*0x140ae84c8*/
          {
            v42 = &aUltramaxxhighh[5]; /*0x140ae84ce*/
            v5 = 3; /*0x140ae84d5*/
            goto LABEL_101; /*0x140ae84db*/
          }
        }
        else if ( v21 == 5 ) /*0x140ae83e8*/
        {
          result = *(_DWORD *)v29 ^ 0x72746C75u; /*0x140ae83f3*/
          v42 = &aUltramaxxhighh[5]; /*0x140ae83fc*/
          v5 = 3; /*0x140ae8403*/
          v20 = (unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x61; /*0x140ae8409*/
          if ( !((unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x61) ) /*0x140ae8409*/
            goto LABEL_101; /*0x140ae8409*/
          result = *(_DWORD *)v29 ^ 0x67696878u; /*0x140ae8416*/
          v20 = (unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x68; /*0x140ae841f*/
          if ( !((unsigned int)result | *(unsigned __int8 *)(v29 + 4) ^ 0x68) ) /*0x140ae841f*/
            goto LABEL_101; /*0x140ae8421*/
        }
LABEL_99:
        v42 = &aUltramaxxhighh[13]; /*0x140ae8618*/
LABEL_100:
        v5 = 4; /*0x140ae861f*/
      }
LABEL_101:
      if ( v21 ) /*0x140ae8628*/
        result = sub_140001660(v29, v21, 1); /*0x140ae8636*/
      if ( v42 ) /*0x140ae863e*/
      {
        v45[0] = v42; /*0x140ae8644*/
        v45[1] = v5; /*0x140ae8648*/
        if ( v8 != 2 ) /*0x140ae8650*/
        {
          if ( v8 != 1 ) /*0x140ae865a*/
          {
            sub_140B56640(&v52, v45); /*0x140ae874d*/
            if ( v52.m256i_i8[0] == -1 ) /*0x140ae8756*/
            {
              v46.m256i_i64[0] = v52.m256i_i64[1]; /*0x140ae87cb*/
              sub_1416C3060( /*0x140ae87f2*/
                (unsigned int)aCalledResultUn_12,
                43,
                (unsigned int)&v46,
                (unsigned int)&off_1417AEA50,
                (__int64)&off_1417B08E0);
            }
            v46 = v52; /*0x140ae8760*/
            v55 = 1; /*0x140ae8768*/
            v53 = (__m128i *)sub_141433E50("reasoning_effort", 16, a1); /*0x140ae8781*/
            sub_1400104F0(v53); /*0x140ae8788*/
            v25 = _mm_load_si128((const __m128i *)&v46); /*0x140ae878e*/
            v26 = _mm_load_si128((const __m128i *)&v46.m256i_u64[2]); /*0x140ae8793*/
            goto LABEL_29; /*0x140ae8798*/
          }
          *(_QWORD *)&v50 = 0; /*0x140ae8660*/
          v51 = 0; /*0x140ae8668*/
          nullsub_1(v20); /*0x140ae8670*/
          v43 = sub_140001650(6, 1); /*0x140ae867f*/
          if ( !v43 ) /*0x140ae8687*/
            sub_1416C2D4B(1, 6); /*0x140ae8837*/
          *(_WORD *)(v43 + 4) = 29810; /*0x140ae868d*/
          *(_DWORD *)v43 = 1868981861; /*0x140ae8693*/
          v47 = 6; /*0x140ae8699*/
          v48 = (_DWORD *)v43; /*0x140ae86a1*/
          v49 = 6; /*0x140ae86a5*/
          v59 = 1; /*0x140ae86ad*/
          sub_140B56640(&v52, v45); /*0x140ae86b9*/
          if ( v52.m256i_i8[0] == -1 ) /*0x140ae86c3*/
          {
            v46.m256i_i64[0] = v52.m256i_i64[1]; /*0x140ae87fe*/
            sub_1416C3060( /*0x140ae8825*/
              (unsigned int)aCalledResultUn_12,
              43,
              (unsigned int)&v46,
              (unsigned int)&off_1417AEA50,
              (__int64)&off_1417B0908);
          }
          v44 = _mm_loadu_si128((const __m128i *)&v52); /*0x140ae86c9*/
          *(__m128i *)&v46.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v52.m256i_u64[2]); /*0x140ae86d3*/
          *(__m128i *)v46.m256i_i8 = v44; /*0x140ae86d8*/
          v59 = 0; /*0x140ae86dd*/
          sub_140307860(&v52, &v50, &v47, &v46); /*0x140ae86f0*/
          if ( v52.m256i_i8[0] != -1 ) /*0x140ae86fa*/
            sub_1400104F0(&v52); /*0x140ae8700*/
          *(_OWORD *)&v52.m256i_u64[1] = v50; /*0x140ae870a*/
          v52.m256i_i64[3] = v51; /*0x140ae8712*/
          v52.m256i_i8[0] = 5; /*0x140ae8716*/
          v54 = 1; /*0x140ae871a*/
          v53 = (__m128i *)sub_141433E50(aReasoning_1, 9, a1); /*0x140ae8733*/
          sub_1400104F0(v53); /*0x140ae873a*/
LABEL_28:
          v25 = _mm_loadu_si128((const __m128i *)&v52); /*0x140ae8146*/
          v26 = _mm_loadu_si128((const __m128i *)&v52.m256i_u64[2]); /*0x140ae814b*/
LABEL_29:
          result = (__int64)v53; /*0x140ae8150*/
          v53[1] = v26; /*0x140ae8154*/
          *(__m128i *)result = v25; /*0x140ae8159*/
        }
      }
      return result;
  }
}