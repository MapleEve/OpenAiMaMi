// module: codexmate_lib/core/repository
// addr: 0x1403bc100
// name: log_token_refresh_outcome
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::log_token_refresh_outcome | 跨平台字符串签名匹配(名↔函数一致)
unsigned __int64 __fastcall log_token_refresh_outcome(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  void *v5; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __m128i si128; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  unsigned __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  void *v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  char v30; // al
  _QWORD v31[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+48h] [rbp-38h]
  _QWORD *v35; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v36)(); // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+60h] [rbp-20h] BYREF
  const char *v38; // [rsp+68h] [rbp-18h]
  __int64 v39; // [rsp+70h] [rbp-10h]
  __int64 v40; // [rsp+78h] [rbp-8h]
  const char *v41; // [rsp+80h] [rbp+0h]
  __int64 v42; // [rsp+88h] [rbp+8h]
  __int64 v43; // [rsp+90h] [rbp+10h]
  const char *v44; // [rsp+98h] [rbp+18h]
  __int64 v45; // [rsp+A0h] [rbp+20h]
  __int64 v46; // [rsp+A8h] [rbp+28h]
  void *v47; // [rsp+B0h] [rbp+30h]
  _QWORD *v48; // [rsp+B8h] [rbp+38h]
  __int64 v49; // [rsp+C0h] [rbp+40h]
  char v50; // [rsp+CFh] [rbp+4Fh] BYREF
  unsigned __int64 v51; // [rsp+D0h] [rbp+50h]
  __int64 v52; // [rsp+D8h] [rbp+58h]

  v52 = -2;
  v32[0] = a1;
  v3 = *a3 ^ 0x8000000000000000uLL;
  result = 4;
  if ( *a3 < 0 )
    result = *a3 ^ 0x8000000000000000uLL;
  v32[1] = a2;
  switch ( result )
  {
    case 0uLL:
    case 1uLL:
      return result;
    case 2uLL:
      result = *(_QWORD *)off_141EC8D80;
      if ( *(_QWORD *)off_141EC8D80 > 1u )
      {
        v33 = v32;
        v34 = sub_14041F680;
        v37 = 0;
        v38 = aCodexmateLibCo_16;
        v39 = 31;
        v40 = 0;
        v41 = aSrcCoreReposit;
        v42 = 22;
        v43 = 2;
        v44 = aCodexmateLibCo_16;
        v45 = 31;
        v46 = 0xD9100000001LL;
        v5 = &unk_1417502A4;
        goto LABEL_37;
      }
      return result;
    case 3uLL:
      result = *(_QWORD *)off_141EC8D80;
      if ( *(_QWORD *)off_141EC8D80 > 1u )
      {
        v33 = v32;
        v34 = sub_14041F680;
        v37 = 0;
        v38 = aCodexmateLibCo_16;
        v39 = 31;
        v40 = 0;
        v41 = aSrcCoreReposit;
        v42 = 22;
        v43 = 2;
        v44 = aCodexmateLibCo_16;
        v45 = 31;
        v46 = 0xD9600000001LL;
        v5 = &unk_141750304;
        goto LABEL_37;
      }
      return result;
    case 4uLL:
      v6 = a3[2];
      if ( !v6 )
      {
        v9 = 1;
        goto LABEL_25;
      }
      v7 = a3[1];
      nullsub_1(v3);
      v8 = sub_140001650(v6, 1);
      if ( !v8 )
        sub_1416C2D4B(1, v6);
      v9 = v8;
      sub_141684120(v8, v7, v6);
      if ( v6 < 8 )
      {
        v10 = 0;
        goto LABEL_23;
      }
      if ( v6 < 0x20 )
      {
        v10 = 0;
        goto LABEL_19;
      }
      v10 = v6 & 0xFFFFFFFFFFFFFFE0uLL;
      v11 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
      v13 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
      v14 = _mm_load_si128((const __m128i *)&xmmword_141742470);
      do
      {
        v15 = _mm_loadu_si128((const __m128i *)(v9 + v11));
        v16 = _mm_loadu_si128((const __m128i *)(v9 + v11 + 16));
        v17 = _mm_add_epi8(v15, si128);
        v18 = _mm_add_epi8(v16, si128);
        *(__m128i *)(v9 + v11) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v17, v13), v17), v14), v15);
        *(__m128i *)(v9 + v11 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v13), v18), v14), v16);
        v11 += 32;
      }
      while ( v10 != v11 );
      if ( v6 == v10 )
        goto LABEL_25;
      if ( (v6 & 0x18) != 0 )
      {
LABEL_19:
        v19 = v10;
        v10 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
        v20 = _mm_load_si128((const __m128i *)&xmmword_141742480);
        v21 = _mm_load_si128((const __m128i *)&xmmword_141742490);
        v22 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
        do
        {
          v23 = _mm_loadl_epi64((const __m128i *)(v9 + v19));
          v24 = _mm_add_epi8(v23, v20);
          *(_QWORD *)(v9 + v19) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v24, v21), v24), v22), v23).m128i_u64[0];
          v19 += 8LL;
        }
        while ( v10 != v19 );
        goto LABEL_24;
      }
      do
      {
LABEL_23:
        *(_BYTE *)(v9 + v10) |= 32 * ((unsigned __int8)(*(_BYTE *)(v9 + v10) - 65) < 0x1Au);
        ++v10;
LABEL_24:
        ;
      }
      while ( v6 != v10 );
LABEL_25:
      v49 = v9;
      v51 = v6;
      if ( (unsigned __int8)sub_1404242F0(aSnapshot, 8, v9, v6) && (unsigned __int8)sub_1404242F0(aWrite, 5, v49, v51) )
      {
        v25 = &unk_141750682;
        v26 = 21;
LABEL_32:
        v28 = v51;
        v29 = v49;
        goto LABEL_33;
      }
      v27 = (unsigned __int8)sub_1404242F0(aAuthJson, 9, v49, v51) == 0;
      v28 = v51;
      v29 = v49;
      if ( !v27 )
      {
        v25 = &unk_141750672;
        v26 = 16;
        if ( (unsigned __int8)sub_1404242F0(aSync, 4, v49, v51) )
          goto LABEL_32;
        v27 = (unsigned __int8)sub_1404242F0(aWrite, 5, v49, v51) == 0;
        v28 = v51;
        v29 = v49;
        if ( !v27 )
          goto LABEL_33;
      }
      v25 = &unk_141750663;
      v26 = 15;
      if ( (unsigned __int8)sub_1404242F0(aTimeout_0, 7, v29, v28) )
        goto LABEL_32;
      v27 = (unsigned __int8)sub_1404242F0(aTimedOut, 9, v49, v51) == 0;
      v28 = v51;
      v29 = v49;
      if ( !v27 )
        goto LABEL_33;
      v25 = &unk_1417505E5;
      v26 = 5;
      v27 = (unsigned __int8)sub_1404242F0(&unk_1417505E5, 5, v49, v51) == 0;
      v28 = v51;
      v29 = v49;
      if ( !v27 )
        goto LABEL_33;
      v26 = 12;
      if ( (unsigned __int8)sub_1404242F0(aHttp429, 8, v49, v51) )
      {
        v25 = &unk_141750657;
        goto LABEL_32;
      }
      if ( (unsigned __int8)sub_1404242F0(aHttp5, 6, v49, v51) )
      {
        v25 = &unk_14175064B;
        goto LABEL_32;
      }
      if ( (unsigned __int8)sub_1404242F0(aSizeLimit, 10, v49, v51) )
      {
        v25 = &unk_141750639;
        v26 = 18;
        goto LABEL_32;
      }
      v25 = &unk_14175057C;
      v26 = 7;
      if ( (unsigned __int8)sub_1404242F0(aTokenEndpointR, 22, v49, v51) )
        goto LABEL_32;
      v27 = (unsigned __int8)sub_1404242F0(aHttpClient, 11, v49, v51) == 0;
      v28 = v51;
      v29 = v49;
      if ( v27 )
      {
        v26 = 5;
        v30 = sub_1404242F0(aParse_0, 5, v49, v51);
        if ( v30 )
          v26 = 12;
        v25 = &unk_141750628;
        if ( v30 )
          v25 = &unk_14175062D;
        goto LABEL_32;
      }
LABEL_33:
      if ( v28 )
        sub_140001660(v29, v28, 1);
      v31[0] = v25;
      v31[1] = v26;
      result = *(_QWORD *)off_141EC8D80;
      if ( *(_QWORD *)off_141EC8D80 > 1u )
      {
        v33 = v32;
        v34 = sub_14041F680;
        v35 = v31;
        v36 = sub_14041F680;
        v37 = 0;
        v38 = aCodexmateLibCo_16;
        v39 = 31;
        v40 = 0;
        v41 = aSrcCoreReposit;
        v42 = 22;
        v43 = 2;
        v44 = aCodexmateLibCo_16;
        v45 = 31;
        v46 = 0xD9C00000001LL;
        v5 = &unk_141750361;
LABEL_37:
        v47 = v5;
        v48 = &v33;
        return sub_1412C36A0(&v50, &v37);
      }
      return result;
  }
}