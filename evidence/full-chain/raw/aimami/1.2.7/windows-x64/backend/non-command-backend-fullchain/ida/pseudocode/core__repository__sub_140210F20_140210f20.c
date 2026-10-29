// win 1.2.7 | module src/core/repository.rs | ea 0x140210f20 | name sub_140210F20
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_140210F20(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  const __m128i *v8; // rsi
  __m128i *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __m128i v19; // xmm6
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  const char *v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  char v31; // al
  _QWORD v32[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+48h] [rbp-38h]
  _QWORD *v36; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v37)(); // [rsp+58h] [rbp-28h]
  __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  const char *v39; // [rsp+68h] [rbp-18h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+78h] [rbp-8h]
  const char *v42; // [rsp+80h] [rbp+0h]
  __int64 v43; // [rsp+88h] [rbp+8h]
  __int64 v44; // [rsp+90h] [rbp+10h]
  const char *v45; // [rsp+98h] [rbp+18h]
  __int64 v46; // [rsp+A0h] [rbp+20h]
  __int64 v47; // [rsp+A8h] [rbp+28h]
  void *v48; // [rsp+B0h] [rbp+30h]
  _QWORD *v49; // [rsp+B8h] [rbp+38h]
  __int64 v50; // [rsp+C0h] [rbp+40h]
  char v51; // [rsp+CFh] [rbp+4Fh] BYREF
  unsigned __int64 v52; // [rsp+D0h] [rbp+50h]
  __int64 v53; // [rsp+D8h] [rbp+58h]

  v53 = -2;
  v33[0] = a1;
  v3 = *a3 ^ 0x8000000000000000uLL;
  result = 4;
  if ( *a3 < 0 )
    result = *a3 ^ 0x8000000000000000uLL;
  v33[1] = a2;
  switch ( result )
  {
    case 0uLL:
    case 1uLL:
      return result;
    case 2uLL:
      result = *(_QWORD *)off_1421E6EC0;
      if ( *(_QWORD *)off_1421E6EC0 <= 1u )
        return result;
      v34 = v33;
      v35 = sub_140186EE0;
      v44 = 2;
      v45 = aCodexmateLibCo_21;
      v46 = 31;
      v48 = &unk_1419DC1FC;
      v49 = &v34;
      v38 = 0;
      v39 = aCodexmateLibCo_21;
      v40 = 31;
      v41 = 0;
      v42 = aSrcCoreReposit;
      v43 = 22;
      v5 = 0xE8C00000001LL;
      goto LABEL_39;
    case 3uLL:
      result = *(_QWORD *)off_1421E6EC0;
      if ( *(_QWORD *)off_1421E6EC0 <= 1u )
        return result;
      v34 = v33;
      v35 = sub_140186EE0;
      v44 = 2;
      v45 = aCodexmateLibCo_21;
      v46 = 31;
      v48 = &unk_1419DC25C;
      v49 = &v34;
      v38 = 0;
      v39 = aCodexmateLibCo_21;
      v40 = 31;
      v41 = 0;
      v42 = aSrcCoreReposit;
      v43 = 22;
      v5 = 0xE9100000001LL;
      goto LABEL_39;
    case 4uLL:
      v6 = a3[2];
      if ( (v6 & 0x8000000000000000uLL) != 0LL )
      {
        v7 = 0;
        goto LABEL_8;
      }
      if ( !v6 )
      {
        v10 = 1;
        goto LABEL_27;
      }
      v8 = (const __m128i *)a3[1];
      nullsub_1(v3);
      v7 = 1;
      v9 = (__m128i *)sub_140001650(v6, 1);
      if ( !v9 )
LABEL_8:
        sub_141938D2B(v7, v6);
      v10 = (__int64)v9;
      sub_1418F44E0(v9, v8, v6);
      if ( v6 < 8 )
      {
        v11 = 0;
        goto LABEL_25;
      }
      if ( v6 < 0x20 )
      {
        v11 = 0;
        goto LABEL_22;
      }
      v11 = v6 & 0x7FFFFFFFFFFFFFE0LL;
      v12 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
      v14 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
      v15 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
      do
      {
        v16 = _mm_loadu_si128((const __m128i *)(v10 + v12));
        v17 = _mm_loadu_si128((const __m128i *)(v10 + v12 + 16));
        v18 = _mm_add_epi8(v16, si128);
        v19 = _mm_add_epi8(v17, si128);
        *(__m128i *)(v10 + v12) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v14), v18), v15), v16);
        *(__m128i *)(v10 + v12 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v14), v19), v15),
                                         v17);
        v12 += 32;
      }
      while ( v11 != v12 );
      if ( v6 == v11 )
        goto LABEL_27;
      if ( (v6 & 0x18) != 0 )
      {
LABEL_22:
        v20 = v11;
        v11 = v6 & 0x7FFFFFFFFFFFFFF8LL;
        v21 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
        v22 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
        v23 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
        do
        {
          v24 = _mm_loadl_epi64((const __m128i *)(v10 + v20));
          v25 = _mm_add_epi8(v24, v21);
          *(_QWORD *)(v10 + v20) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v25, v22), v25), v23), v24).m128i_u64[0];
          v20 += 8;
        }
        while ( v11 != v20 );
        goto LABEL_26;
      }
      do
      {
LABEL_25:
        *(_BYTE *)(v10 + v11) |= 32 * ((unsigned __int8)(*(_BYTE *)(v10 + v11) - 65) < 0x1Au);
        ++v11;
LABEL_26:
        ;
      }
      while ( v6 != v11 );
LABEL_27:
      v50 = v10;
      v52 = v6;
      if ( (unsigned __int8)sub_140291D70(aSnapshot, 8, v10, v6) && (unsigned __int8)sub_140291D70(aWrite, 5, v50, v52) )
      {
        v26 = (const char *)&unk_1419DC5CD;
        v27 = 21;
LABEL_34:
        v29 = v52;
        v30 = v50;
        goto LABEL_35;
      }
      v28 = (unsigned __int8)sub_140291D70(aAuthJson, 9, v50, v52) == 0;
      v29 = v52;
      v30 = v50;
      if ( !v28 )
      {
        v26 = (const char *)&unk_1419DC5BD;
        v27 = 16;
        if ( (unsigned __int8)sub_140291D70(aSync, 4, v50, v52) )
          goto LABEL_34;
        v28 = (unsigned __int8)sub_140291D70(aWrite, 5, v50, v52) == 0;
        v29 = v52;
        v30 = v50;
        if ( !v28 )
          goto LABEL_35;
      }
      v26 = (const char *)&unk_1419DC5AE;
      v27 = 15;
      if ( (unsigned __int8)sub_140291D70(aTimeout_1, 7, v30, v29) )
        goto LABEL_34;
      v28 = (unsigned __int8)sub_140291D70(aTimedOut, 9, v50, v52) == 0;
      v29 = v52;
      v30 = v50;
      if ( !v28 )
        goto LABEL_35;
      v26 = (const char *)&unk_1419DC535;
      v27 = 5;
      v28 = (unsigned __int8)sub_140291D70(&unk_1419DC535, 5, v50, v52) == 0;
      v29 = v52;
      v30 = v50;
      if ( !v28 )
        goto LABEL_35;
      v27 = 12;
      if ( (unsigned __int8)sub_140291D70(aHttp429, 8, v50, v52) )
      {
        v26 = (const char *)&unk_1419DC5A2;
        goto LABEL_34;
      }
      if ( (unsigned __int8)sub_140291D70(aHttp5, 6, v50, v52) )
      {
        v26 = (const char *)&unk_1419DC596;
        goto LABEL_34;
      }
      if ( (unsigned __int8)sub_140291D70(aSizeLimit, 10, v50, v52) )
      {
        v26 = (const char *)&unk_1419DC584;
        v27 = 18;
        goto LABEL_34;
      }
      v26 = (const char *)&unk_1419DC4D4;
      v27 = 7;
      if ( (unsigned __int8)sub_140291D70(aTokenEndpointR, 22, v50, v52) )
        goto LABEL_34;
      v28 = (unsigned __int8)sub_140291D70(aHttpClient, 11, v50, v52) == 0;
      v29 = v52;
      v30 = v50;
      if ( v28 )
      {
        v27 = 5;
        v31 = sub_140291D70(aParse_0, 5, v50, v52);
        if ( v31 )
          v27 = 12;
        v26 = aOther_1;
        if ( v31 )
          v26 = (const char *)&unk_1419DC578;
        goto LABEL_34;
      }
LABEL_35:
      if ( v29 )
        sub_140001660(v30, v29, 1);
      v32[0] = v26;
      v32[1] = v27;
      result = *(_QWORD *)off_1421E6EC0;
      if ( *(_QWORD *)off_1421E6EC0 > 1u )
      {
        v34 = v33;
        v35 = sub_140186EE0;
        v36 = v32;
        v37 = sub_140186EE0;
        v44 = 2;
        v45 = aCodexmateLibCo_21;
        v46 = 31;
        v48 = &unk_1419DC2B9;
        v49 = &v34;
        v38 = 0;
        v39 = aCodexmateLibCo_21;
        v40 = 31;
        v41 = 0;
        v42 = aSrcCoreReposit;
        v43 = 22;
        v5 = 0xE9700000001LL;
LABEL_39:
        v47 = v5;
        return sub_1414D53A0(&v51, &v38);
      }
      return result;
  }
}
