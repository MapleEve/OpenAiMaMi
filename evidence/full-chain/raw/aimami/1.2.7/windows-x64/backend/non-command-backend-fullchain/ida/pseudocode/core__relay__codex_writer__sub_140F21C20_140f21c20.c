// win 1.2.7 | module src/core/relay/codex_writer.rs | ea 0x140f21c20 | name sub_140F21C20 (via content-string anchor xref)
__m128i *__fastcall sub_140F21C20(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _BYTE *v7; // r14
  __int64 v8; // rax
  __m128i *result; // rax
  __int64 v10; // rsi
  __m128i *v11; // rax
  __int64 v12; // rcx
  __m128i *v13; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rsi
  __m128i *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __m128i *v31; // rax
  __int64 v32; // rcx
  __m128i *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  __int64 v43; // [rsp+38h] [rbp-48h]
  __int64 v44; // [rsp+40h] [rbp-40h]
  _QWORD v45[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v46; // [rsp+58h] [rbp-28h] BYREF
  __m128i v47; // [rsp+60h] [rbp-20h] BYREF
  __int64 v48; // [rsp+70h] [rbp-10h]
  __int64 v49; // [rsp+80h] [rbp+0h]
  __m128i v50; // [rsp+88h] [rbp+8h] BYREF
  __int64 v51; // [rsp+98h] [rbp+18h]
  __int64 v52; // [rsp+A0h] [rbp+20h]
  __int64 v53; // [rsp+A8h] [rbp+28h]
  __int64 v54; // [rsp+B0h] [rbp+30h]
  _DWORD *v55; // [rsp+B8h] [rbp+38h]
  __m128i *v56; // [rsp+C0h] [rbp+40h]
  __int64 v57; // [rsp+C8h] [rbp+48h]
  __int64 v58; // [rsp+D0h] [rbp+50h]

  v58 = -2;
  if ( !a4[364] )
    return (__m128i *)sub_140F58830(a1, (unsigned int)aRouterHttpCont, 20, (unsigned int)&unk_141A5E265, 48);
  if ( !a2 )
  {
    v10 = a1;
    nullsub_1(a1);
    v11 = (__m128i *)sub_140001650(20, 1);
    if ( !v11 )
      sub_141938D2B(1, 20);
    v13 = v11;
    *v11 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
    v11[1].m128i_i32[0] = 1952670066;
    nullsub_1(v12);
    v14 = (_DWORD *)sub_140001650(7, 1);
    if ( !v14 )
    {
      v57 = (__int64)v13;
      sub_141938D2B(1, 7);
    }
    v16 = v14;
    *(_DWORD *)((char *)v14 + 3) = 1735289198;
    *v14 = 1852989815;
    nullsub_1(v15);
    v17 = sub_140001650(49, 1);
    if ( !v17 )
    {
      v55 = v16;
      v57 = (__int64)v13;
      sub_141938D2B(1, 49);
    }
    v19 = v17;
    *(_OWORD *)(v17 + 32) = xmmword_141A5E3A5;
    *(_OWORD *)(v17 + 16) = xmmword_141A5E395;
    *(__m128i *)v17 = _mm_loadu_si128((const __m128i *)&xmmword_141A5E385);
    *(_BYTE *)(v17 + 48) = -119;
    nullsub_1(v18);
    result = (__m128i *)sub_140001650(24, 1);
    if ( !result )
    {
      v56 = (__m128i *)v19;
      v55 = v16;
      v57 = (__int64)v13;
      sub_141938D2B(1, 24);
    }
    *result = _mm_loadu_si128(&xmmword_141A5D8D7);
    result[1].m128i_i64[0] = 0x6C6D6F742E676966LL;
    *(_QWORD *)v10 = 20;
    *(_QWORD *)(v10 + 8) = v13;
    *(_QWORD *)(v10 + 16) = 20;
    *(_QWORD *)(v10 + 24) = 7;
    *(_QWORD *)(v10 + 32) = v16;
    *(_QWORD *)(v10 + 40) = 7;
    *(_QWORD *)(v10 + 48) = 49;
    *(_QWORD *)(v10 + 56) = v19;
    *(_QWORD *)(v10 + 64) = 49;
    *(_QWORD *)(v10 + 72) = 24;
    *(_QWORD *)(v10 + 80) = result;
    *(_QWORD *)(v10 + 88) = 24;
    *(_BYTE *)(v10 + 96) = 0;
    return result;
  }
  v4 = a1;
  if ( a4[122] )
  {
    v50.m128i_i64[0] = (__int64)(a4 + 120);
    v50.m128i_i64[1] = (__int64)sub_1416BB1E0;
    v5 = a2;
    v6 = a3;
    v7 = a4;
    sub_1416ABFD0(&v42, &unk_141A5793B, &v50);
    a4 = v7;
    a2 = v5;
    a3 = v6;
    a1 = v44;
    v8 = 0;
    v57 = v42;
    v55 = (_DWORD *)v43;
    if ( v42 != -1 )
      v8 = v43;
  }
  else
  {
    v57 = -1;
    v8 = 0;
  }
  sub_140C72940(&v50, a2, a3, v8, a1, a4[382] ^ 1);
  if ( v50.m128i_i32[0] == 1 )
  {
    sub_140F58830(v4, (unsigned int)aRouterHttpCont, 20, (unsigned int)&unk_141A5E34D, 56);
    if ( v50.m128i_i64[1] )
      sub_140001660(v51, v50.m128i_i64[1], 1);
    v20 = v57;
    v21 = v55;
    result = (__m128i *)(v57 - 1);
    if ( (unsigned __int64)(v57 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      return (__m128i *)sub_140001660(v21, v20, 1);
  }
  else
  {
    v22 = v52;
    v48 = v52;
    v47 = _mm_loadu_si128((const __m128i *)&v50.m128i_u64[1]);
    if ( v52 )
    {
      if ( v52 == 1
        && *(_QWORD *)(v47.m128i_i64[1] + 16) == 31
        && _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)*(_QWORD *)(v47.m128i_i64[1] + 8)),
                 (__m128i)xmmword_141A55810),
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v47.m128i_i64[1] + 8) + 15LL)),
                 (__m128i)xmmword_141A55800))) == 0xFFFF )
      {
        nullsub_1(v4);
        v31 = (__m128i *)sub_140001650(20, 1);
        if ( !v31 )
          sub_141938D2B(1, 20);
        v33 = v31;
        *v31 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
        v31[1].m128i_i32[0] = 1952670066;
        nullsub_1(v32);
        v34 = sub_140001650(5, 1);
        v36 = v55;
        if ( !v34 )
        {
          v56 = v33;
          sub_141938D2B(1, 5);
        }
        v37 = v34;
        *(_BYTE *)(v34 + 4) = 114;
        *(_DWORD *)v34 = 1869771365;
        nullsub_1(v35);
        v38 = sub_140001650(32, 1);
        if ( !v38 )
        {
          v53 = v37;
          v56 = v33;
          sub_141938D2B(1, 32);
        }
        v40 = v38;
        *(_OWORD *)(v38 + 16) = xmmword_141A5E2A5;
        *(__m128i *)v38 = _mm_loadu_si128((const __m128i *)&xmmword_141A5E295);
        nullsub_1(v39);
        v41 = sub_140001650(68, 1);
        if ( !v41 )
        {
          v54 = v40;
          v53 = v37;
          v56 = v33;
          sub_141938D2B(1, 68);
        }
        qmemcpy((void *)(v41 + 48), "el_providers.aimai1]", 20);
        *(_OWORD *)(v41 + 32) = xmmword_141A5E2D5;
        *(_OWORD *)(v41 + 16) = xmmword_141A5E2C5;
        *(__m128i *)v41 = _mm_loadu_si128((const __m128i *)&xmmword_141A5E2B5);
        *(_QWORD *)v4 = 20;
        *(_QWORD *)(v4 + 8) = v33;
        *(_QWORD *)(v4 + 16) = 20;
        *(_QWORD *)(v4 + 24) = 5;
        *(_QWORD *)(v4 + 32) = v37;
        *(_QWORD *)(v4 + 40) = 5;
        *(_QWORD *)(v4 + 48) = 32;
        *(_QWORD *)(v4 + 56) = v40;
        *(_QWORD *)(v4 + 64) = 32;
        *(_QWORD *)(v4 + 72) = 68;
        *(_QWORD *)(v4 + 80) = v41;
        *(_QWORD *)(v4 + 88) = 68;
        *(_BYTE *)(v4 + 96) = 1;
        sub_140025530(&v47);
        v20 = v57;
        v21 = v36;
        result = (__m128i *)(v57 - 1);
        if ( (unsigned __int64)(v57 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          return (__m128i *)sub_140001660(v21, v20, 1);
        return result;
      }
      nullsub_1(v4);
      v23 = (__m128i *)sub_140001650(20, 1);
      if ( !v23 )
        sub_141938D2B(1, 20);
      *v23 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
      v56 = v23;
      v23[1].m128i_i32[0] = 1952670066;
      nullsub_1(v24);
      v25 = sub_140001650(5, 1);
      if ( !v25 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v25 + 4) = 114;
      v53 = v25;
      *(_DWORD *)v25 = 1869771365;
      v46 = v22;
      v45[0] = &v46;
      v45[1] = sub_1416BCB10;
      sub_1416ABFD0(&v50, &unk_141A5E31C, v45);
      v49 = v50.m128i_i64[1];
      v54 = v50.m128i_i64[0];
      v26 = v51;
      v27 = v47.m128i_i64[1];
      sub_140D1EE10((unsigned int)&v50, v47.m128i_i32[2], v22, (unsigned int)&unk_141A5B7F2, 3);
      *(_QWORD *)(v4 + 88) = v51;
      *(__m128i *)(v4 + 72) = _mm_loadu_si128(&v50);
      *(_QWORD *)v4 = 20;
      *(_QWORD *)(v4 + 8) = v56;
      *(_QWORD *)(v4 + 16) = 20;
      *(_QWORD *)(v4 + 24) = 5;
      *(_QWORD *)(v4 + 32) = v53;
      *(_QWORD *)(v4 + 40) = 5;
      *(_QWORD *)(v4 + 48) = v54;
      *(_QWORD *)(v4 + 56) = v49;
      *(_QWORD *)(v4 + 64) = v26;
      *(_BYTE *)(v4 + 96) = 1;
      v28 = (_QWORD *)(v27 + 8);
      do
      {
        v29 = *(v28 - 1);
        if ( v29 )
          sub_140001660(*v28, v29, 1);
        v28 += 3;
        --v22;
      }
      while ( v22 );
    }
    else
    {
      sub_140F58830(v4, (unsigned int)aRouterHttpCont, 20, (unsigned int)&unk_141A5E2F9, 35);
      v27 = v47.m128i_i64[1];
    }
    v30 = v57;
    if ( v47.m128i_i64[0] )
      sub_140001660(v27, 24 * v47.m128i_i64[0], 8);
    result = (__m128i *)(v30 - 1);
    if ( (unsigned __int64)(v30 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
    {
      v21 = v55;
      v20 = v30;
      return (__m128i *)sub_140001660(v21, v20, 1);
    }
  }
  return result;
}
