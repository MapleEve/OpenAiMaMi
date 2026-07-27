// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1407798a0
// name: check_router_http_contract
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::check_router_http_contract | 跨平台字符串签名匹配(名↔函数一致)
__m128i *__fastcall check_router_http_contract(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r9
  __m128i *result; // rax
  __m128i *v10; // rax
  __int64 v11; // rcx
  __m128i *v12; // rdi
  _DWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rdi
  __m128i *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rbx
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rsi
  __m128i *v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // rbx
  __m128i *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // [rsp+30h] [rbp-50h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h]
  __int64 v45; // [rsp+40h] [rbp-40h]
  _QWORD v46[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  __m128i v48; // [rsp+60h] [rbp-20h] BYREF
  __int64 v49; // [rsp+70h] [rbp-10h]
  __int64 v50; // [rsp+78h] [rbp-8h]
  __m128i v51; // [rsp+80h] [rbp+0h] BYREF
  __int64 v52; // [rsp+90h] [rbp+10h]
  __int64 v53; // [rsp+98h] [rbp+18h]
  __int64 v54; // [rsp+A0h] [rbp+20h]
  __int64 v55; // [rsp+A8h] [rbp+28h]
  _DWORD *v56; // [rsp+B0h] [rbp+30h]
  __m128i *v57; // [rsp+B8h] [rbp+38h]
  __int64 v58; // [rsp+C0h] [rbp+40h]
  __int64 v59; // [rsp+C8h] [rbp+48h]

  v59 = -2;
  if ( !*(_BYTE *)(a4 + 292) )
    return (__m128i *)sub_140797030(a1, (unsigned int)aRouterHttpCont, 20, (unsigned int)&unk_14178DB0D, 48);
  if ( !a2 )
  {
    nullsub_1(a1);
    v10 = (__m128i *)sub_140001650(20, 1);
    if ( !v10 )
      sub_1416C2D4B(1, 20);
    v12 = v10;
    *v10 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
    v10[1].m128i_i32[0] = 1952670066;
    nullsub_1(v11);
    v13 = (_DWORD *)sub_140001650(7, 1);
    if ( !v13 )
    {
      v58 = (__int64)v12;
      sub_1416C2D4B(1, 7);
    }
    v15 = v13;
    *(_DWORD *)((char *)v13 + 3) = 1735289198;
    *v13 = 1852989815;
    nullsub_1(v14);
    v16 = sub_140001650(49, 1);
    if ( !v16 )
    {
      v56 = v15;
      v58 = (__int64)v12;
      sub_1416C2D4B(1, 49);
    }
    v18 = v16;
    *(_OWORD *)(v16 + 32) = xmmword_14178DC4D;
    *(_OWORD *)(v16 + 16) = xmmword_14178DC3D;
    *(__m128i *)v16 = _mm_loadu_si128((const __m128i *)&xmmword_14178DC2D);
    *(_BYTE *)(v16 + 48) = -119;
    nullsub_1(v17);
    result = (__m128i *)sub_140001650(24, 1);
    if ( !result )
    {
      v57 = (__m128i *)v18;
      v56 = v15;
      v58 = (__int64)v12;
      sub_1416C2D4B(1, 24);
    }
    *result = _mm_loadu_si128(&xmmword_14178D2DD);
    result[1].m128i_i64[0] = 0x6C6D6F742E676966LL;
    *(_QWORD *)a1 = 20;
    *(_QWORD *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 16) = 20;
    *(_QWORD *)(a1 + 24) = 7;
    *(_QWORD *)(a1 + 32) = v15;
    *(_QWORD *)(a1 + 40) = 7;
    *(_QWORD *)(a1 + 48) = 49;
    *(_QWORD *)(a1 + 56) = v18;
    *(_QWORD *)(a1 + 64) = 49;
    *(_QWORD *)(a1 + 72) = 24;
    *(_QWORD *)(a1 + 80) = result;
    *(_QWORD *)(a1 + 88) = 24;
    *(_BYTE *)(a1 + 96) = 0;
    return result;
  }
  if ( *(_BYTE *)(a4 + 122) )
  {
    v51.m128i_i64[0] = a4 + 120;
    v51.m128i_i64[1] = (__int64)sub_1414AAE30;
    v6 = a2;
    v7 = a3;
    sub_14149C0F0(&v43, &unk_141788C4F, &v51);
    a2 = v6;
    a3 = v7;
    v4 = v45;
    v8 = 0;
    v58 = v43;
    v56 = (_DWORD *)v44;
    if ( v43 != -1 )
      v8 = v44;
  }
  else
  {
    v58 = -1;
    v8 = 0;
  }
  router_http_contract_issues((__int64)&v51, a2, a3, v8, v4);
  if ( v51.m128i_i32[0] == 1 )
  {
    sub_140797030(a1, (unsigned int)aRouterHttpCont, 20, (unsigned int)&unk_14178DBF5, 56);
    if ( v51.m128i_i64[1] )
      sub_140001660(v52, v51.m128i_i64[1], 1);
    v20 = v58;
    v21 = v56;
    result = (__m128i *)(v58 - 1);
    if ( (unsigned __int64)(v58 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      return (__m128i *)sub_140001660(v21, v20, 1);
  }
  else
  {
    v22 = v53;
    v49 = v53;
    v48 = _mm_loadu_si128((const __m128i *)&v51.m128i_u64[1]);
    if ( v53 )
    {
      if ( v53 == 1
        && *(_QWORD *)(v48.m128i_i64[1] + 16) == 31
        && _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)*(_QWORD *)(v48.m128i_i64[1] + 8)),
                 (__m128i)xmmword_141786720),
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v48.m128i_i64[1] + 8) + 15LL)),
                 (__m128i)xmmword_141786710))) == 0xFFFF )
      {
        nullsub_1(v19);
        v31 = (__m128i *)sub_140001650(20, 1);
        v33 = v56;
        if ( !v31 )
          sub_1416C2D4B(1, 20);
        v34 = v31;
        *v31 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
        v31[1].m128i_i32[0] = 1952670066;
        nullsub_1(v32);
        v35 = sub_140001650(5, 1);
        v37 = v58;
        if ( !v35 )
        {
          v57 = v34;
          sub_1416C2D4B(1, 5);
        }
        v38 = v35;
        *(_BYTE *)(v35 + 4) = 114;
        *(_DWORD *)v35 = 1869771365;
        nullsub_1(v36);
        v39 = sub_140001650(32, 1);
        if ( !v39 )
        {
          v54 = v38;
          v57 = v34;
          sub_1416C2D4B(1, 32);
        }
        v41 = v39;
        *(_OWORD *)(v39 + 16) = xmmword_14178DB4D;
        *(__m128i *)v39 = _mm_loadu_si128((const __m128i *)&xmmword_14178DB3D);
        nullsub_1(v40);
        v42 = sub_140001650(68, 1);
        if ( !v42 )
        {
          v55 = v41;
          v54 = v38;
          v57 = v34;
          sub_1416C2D4B(1, 68);
        }
        qmemcpy((void *)(v42 + 48), "el_providers.aimai1]", 20);
        *(_OWORD *)(v42 + 32) = xmmword_14178DB7D;
        *(_OWORD *)(v42 + 16) = xmmword_14178DB6D;
        *(__m128i *)v42 = _mm_loadu_si128((const __m128i *)&xmmword_14178DB5D);
        *(_QWORD *)a1 = 20;
        *(_QWORD *)(a1 + 8) = v34;
        *(_QWORD *)(a1 + 16) = 20;
        *(_QWORD *)(a1 + 24) = 5;
        *(_QWORD *)(a1 + 32) = v38;
        *(_QWORD *)(a1 + 40) = 5;
        *(_QWORD *)(a1 + 48) = 32;
        *(_QWORD *)(a1 + 56) = v41;
        *(_QWORD *)(a1 + 64) = 32;
        *(_QWORD *)(a1 + 72) = 68;
        *(_QWORD *)(a1 + 80) = v42;
        *(_QWORD *)(a1 + 88) = 68;
        *(_BYTE *)(a1 + 96) = 1;
        sub_140009B20(&v48);
        v20 = v37;
        v21 = v33;
        result = (__m128i *)(v37 - 1);
        if ( (unsigned __int64)(v37 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          return (__m128i *)sub_140001660(v21, v20, 1);
        return result;
      }
      nullsub_1(v19);
      v23 = (__m128i *)sub_140001650(20, 1);
      if ( !v23 )
        sub_1416C2D4B(1, 20);
      *v23 = _mm_loadu_si128((const __m128i *)aRouterHttpCont);
      v57 = v23;
      v23[1].m128i_i32[0] = 1952670066;
      nullsub_1(v24);
      v25 = sub_140001650(5, 1);
      if ( !v25 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v25 + 4) = 114;
      v54 = v25;
      *(_DWORD *)v25 = 1869771365;
      v47 = v22;
      v46[0] = &v47;
      v46[1] = sub_1414AC520;
      sub_14149C0F0(&v51, &unk_14178DBC4, v46);
      v50 = v51.m128i_i64[1];
      v55 = v51.m128i_i64[0];
      v26 = v52;
      v27 = v48.m128i_i64[1];
      sub_140440300((unsigned int)&v51, v48.m128i_i32[2], v22, (unsigned int)&unk_14178CCCE, 3);
      *(_QWORD *)(a1 + 88) = v52;
      *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v51);
      *(_QWORD *)a1 = 20;
      *(_QWORD *)(a1 + 8) = v57;
      *(_QWORD *)(a1 + 16) = 20;
      *(_QWORD *)(a1 + 24) = 5;
      *(_QWORD *)(a1 + 32) = v54;
      *(_QWORD *)(a1 + 40) = 5;
      *(_QWORD *)(a1 + 48) = v55;
      *(_QWORD *)(a1 + 56) = v50;
      *(_QWORD *)(a1 + 64) = v26;
      *(_BYTE *)(a1 + 96) = 1;
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
      sub_140797030(a1, (unsigned int)aRouterHttpCont, 20, (unsigned int)&unk_14178DBA1, 35);
      v27 = v48.m128i_i64[1];
    }
    v30 = v58;
    if ( v48.m128i_i64[0] )
      sub_140001660(v27, 24 * v48.m128i_i64[0], 8);
    result = (__m128i *)(v30 - 1);
    if ( (unsigned __int64)(v30 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
    {
      v21 = v56;
      v20 = v30;
      return (__m128i *)sub_140001660(v21, v20, 1);
    }
  }
  return result;
}