// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1407883e0
// name: sub_1407883E0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1407883E0(_OWORD *a1, __int64 a2, __int64 a3, const __m128i *a4, char a5)
{
  __m128i v8; // xmm6
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  const __m128i *v19; // rdi
  __m128i v20; // kr00_16
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int8 *v25; // rcx
  const __m128i *v26; // rdi
  __m128i v27; // xmm0
  __int64 v28; // r14
  const __m128i *v29; // rbx
  const __m128i *v30; // rbx
  __m128i si128; // xmm6
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 result; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // r14
  __int64 v42; // rdx
  __m128i v43; // [rsp+20h] [rbp-60h] BYREF
  __int128 v44; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-40h]
  __int64 v46; // [rsp+48h] [rbp-38h]
  _OWORD v47[2]; // [rsp+58h] [rbp-28h] BYREF
  __m128i v48; // [rsp+78h] [rbp-8h]
  __int64 v49; // [rsp+88h] [rbp+8h] BYREF
  __int64 v50; // [rsp+90h] [rbp+10h]
  __int64 v51; // [rsp+98h] [rbp+18h]
  __int64 v52; // [rsp+A0h] [rbp+20h]
  __int64 v53; // [rsp+A8h] [rbp+28h]
  __int64 v54; // [rsp+B0h] [rbp+30h]
  __m128i v55; // [rsp+B8h] [rbp+38h]
  __m128i v56; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v57; // [rsp+D8h] [rbp+58h]
  const __m128i *v58; // [rsp+E0h] [rbp+60h]
  const __m128i *v59; // [rsp+E8h] [rbp+68h]
  __int64 v60; // [rsp+F0h] [rbp+70h]
  __int16 v61; // [rsp+F8h] [rbp+78h]
  const __m128i *v62; // [rsp+100h] [rbp+80h]
  __int64 v63; // [rsp+108h] [rbp+88h]
  char v64; // [rsp+117h] [rbp+97h]
  __int64 v65; // [rsp+118h] [rbp+98h]

  v65 = -2;
  v8 = _mm_loadu_si128(a4 + 2);
  sub_14067DB50(v47);
  v48 = v8;
  nullsub_1(v9);
  v10 = sub_140001650(6, 1);
  if ( !v10 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v10 + 4) = 26977;
  *(_DWORD *)v10 = 1852141679;
  v56.m128i_i64[0] = 6;
  v56.m128i_i64[1] = v10;
  v57 = 6;
  sub_140474440(v47, &v56);
  nullsub_1(v11);
  v12 = sub_140001650(6, 1);
  if ( !v12 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v12 + 4) = 18753;
  *(_DWORD *)v12 = 1852141647;
  v56.m128i_i64[0] = 6;
  v56.m128i_i64[1] = v12;
  v57 = 6;
  sub_140474440(v47, &v56);
  if ( (a5 & 1) != 0 )
  {
    nullsub_1(v13);
    v14 = sub_140001650(6, 1);
    if ( !v14 )
      sub_1416C2D4B(1, 6);
    *(_WORD *)(v14 + 4) = 12649;
    *(_DWORD *)v14 = 1634560353;
    v56.m128i_i64[0] = 6;
    v56.m128i_i64[1] = v14;
    v57 = 6;
    sub_140474440(v47, &v56);
  }
  sub_14148D130(&v49, a2, a3);
  v63 = v49;
  if ( v49 == -1 )
  {
    v21 = sub_141470CD0(v16, v15);
    v22 = v21;
    if ( *(_BYTE *)(v21 + 16) == 1 )
    {
      v23 = *(_QWORD *)v21;
    }
    else
    {
      v23 = sub_141486EF0();
      *(_QWORD *)v22 = v23;
      *(_QWORD *)(v22 + 8) = v42;
      *(_BYTE *)(v22 + 16) = 1;
    }
    *(_QWORD *)v22 = v23 + 1;
    v24 = sub_1401DD260(v50);
    v26 = (const __m128i *)&unk_141786740;
    v27 = (__m128i)-1LL;
    v28 = 0;
    v29 = nullptr;
    goto LABEL_20;
  }
  v53 = v50;
  sub_14076CAF0(&v56, v50, v51);
  v18 = v56.m128i_i64[1];
  v20 = v56;
  v52 = (unsigned __int128)v20 >> 64;
  v19 = (const __m128i *)*(_OWORD *)&v20;
  if ( v56.m128i_i64[1] )
  {
    v55.m128i_i64[1] = 17 * v56.m128i_i64[1] + 33;
    v18 = v56.m128i_i64[0] - 16 * v56.m128i_i64[1] - 16;
    v54 = v18;
    v55.m128i_i64[0] = 16;
  }
  else
  {
    v55.m128i_i64[0] = 0;
  }
  v30 = v58;
  si128 = _mm_load_si128((const __m128i *)v56.m128i_i64[0]);
  v64 = 0;
  v32 = sub_141470CD0(v18, v17);
  if ( *(_BYTE *)(v32 + 16) == 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(_QWORD *)(v32 + 8);
  }
  else
  {
    v64 = 0;
    v41 = v32;
    v33 = sub_141486EF0();
    v32 = v41;
    *(_QWORD *)v41 = v33;
    *(_QWORD *)(v41 + 8) = v34;
    *(_BYTE *)(v41 + 16) = 1;
  }
  v35 = (__int64)v19->m128i_i64 + v52 + 1;
  *(_QWORD *)v32 = v33 + 1;
  v44 = *(&off_141786750 + 1);
  v43 = _mm_loadu_si128((const __m128i *)&off_141786750);
  v45 = v33;
  v46 = v34;
  v56 = v55;
  v57 = v54;
  v58 = v19;
  v59 = v19 + 1;
  v60 = v35;
  v61 = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v62 = v30;
  v24 = sub_140992330(&v56, &v43);
  v28 = v43.m128i_i64[1];
  v26 = (const __m128i *)v43.m128i_i64[0];
  v29 = *((const __m128i **)&v44 + 1);
  if ( v63 )
    v24 = sub_140001660(v53, v63, 1);
  v27 = _mm_load_si128(v26);
  if ( !v28 )
  {
    v28 = 0;
LABEL_20:
    v37 = 0;
    goto LABEL_21;
  }
  v36 = (24 * v28 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
  v24 = v28 + v36 + 17;
  v25 = &v26->m128i_i8[-v36];
  v37 = 16;
LABEL_21:
  v58 = v26;
  v59 = v26 + 1;
  v60 = (__int64)v26->m128i_i64 + v28 + 1;
  v61 = ~(unsigned __int16)_mm_movemask_epi8(v27);
  v62 = v29;
  v56.m128i_i64[0] = v37;
  v56.m128i_i64[1] = v24;
  v57 = (__int64)v25;
  result = sub_1404467A0(v47, &v56);
  v39 = v47[0];
  v40 = v47[1];
  a1[2] = v48;
  a1[1] = v40;
  *a1 = v39;
  return result;
}