// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140a5f9a0
// name: sub_140A5F9A0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140A5F9A0(__m128i *a1, __int64 a2)
{
  __m128i *v4; // r12
  bool v5; // zf
  __m128i *v6; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __m128i *v12; // r15
  __int64 v13; // r13
  __m128i v14; // xmm6
  __int64 v15; // rdi
  __int64 v16; // rbx
  __m128i v17; // xmm8
  unsigned __int64 v18; // xmm7_8
  __m128i *v19; // r13
  __int64 v20; // rdi
  __m128i v21; // kr20_16
  __m128i v22; // xmm6
  __int64 v23; // rbx
  __m128i *v24; // r14
  __int64 v25; // rax
  __int64 v26; // [rsp+28h] [rbp-58h]
  __m128i v27; // [rsp+30h] [rbp-50h] BYREF
  __m128i *v28; // [rsp+48h] [rbp-38h] BYREF
  __m128i *v29; // [rsp+50h] [rbp-30h]
  __m128i v30; // [rsp+58h] [rbp-28h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h]
  __m128i v33; // [rsp+78h] [rbp-8h] BYREF
  __int64 v34; // [rsp+88h] [rbp+8h]
  __int64 v35; // [rsp+90h] [rbp+10h]
  __int64 v36; // [rsp+98h] [rbp+18h]
  __int64 v37; // [rsp+A0h] [rbp+20h]
  __m128i *v38; // [rsp+A8h] [rbp+28h]
  __m128i *v39; // [rsp+B0h] [rbp+30h]
  __int64 v40; // [rsp+B8h] [rbp+38h]
  __int64 v41; // [rsp+C0h] [rbp+40h]
  __int64 v42; // [rsp+C8h] [rbp+48h]

  v42 = -2;
  v4 = *(__m128i **)a2;
  sub_140A67BD0(&v28, a2 + 8);
  if ( v28 != (__m128i *)-1LL )
  {
    v39 = v28;
    v41 = (__int64)v29;
    v37 = v30.m128i_i64[1];
    v40 = v30.m128i_i64[0];
    v34 = v31;
    v35 = v32;
    v27 = v33;
LABEL_3:
    v5 = v4->m128i_i64[0] == -1;
    v38 = v4;
    if ( !v5 )
      sub_140982F30(v38);
    v6 = v38;
    v38->m128i_i64[0] = (__int64)v39;
    v6->m128i_i64[1] = v41;
    v6[1].m128i_i64[0] = v40;
    v6[1].m128i_i64[1] = v37;
    v6[2].m128i_i64[0] = v34;
    v6[2].m128i_i64[1] = v35;
    v6[3] = _mm_load_si128(&v27);
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a2 + 16) )
  {
    v8 = a2 + 16;
    sub_14042B0E0(&v28, v8, 0);
    v9 = v30.m128i_i64[1];
    v41 = (__int64)v29;
    if ( v28 != (__m128i *)-1LL )
    {
      v39 = v28;
      v34 = v31;
      v35 = v32;
      v27 = v33;
      v37 = v30.m128i_i64[1];
      v40 = v30.m128i_i64[0];
      goto LABEL_3;
    }
    v38 = (__m128i *)v30.m128i_i64[0];
    sub_14042AE90(&v28, v8, 1, &off_1417A5200);
    v10 = (__int64)v29;
    v11 = v30.m128i_i64[1];
    v40 = v30.m128i_i64[0];
    if ( v28 != (__m128i *)-1LL )
    {
      v39 = v28;
      v34 = v31;
      v35 = v32;
      v27 = v33;
      if ( v41 )
        sub_140001660(v38, v41, 1);
      v37 = v11;
      v41 = v10;
      goto LABEL_3;
    }
    v36 = (__int64)v29;
    sub_14042AE90(&v28, v8, 2, &off_1417A5218);
    v12 = v28;
    v13 = (__int64)v29;
    v14 = _mm_loadu_si128(&v30);
    if ( v28 != (__m128i *)-1LL )
    {
      v15 = v31;
      v16 = v32;
      v17 = v33;
      v18 = _mm_shuffle_epi32(v14, 238).m128i_u64[0];
      if ( (unsigned __int64)(v36 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v40, v36, 1);
      v37 = v18;
      v40 = v14.m128i_i64[0];
      v39 = v12;
      v34 = v15;
      v35 = v16;
      v27 = v17;
      if ( v41 )
        sub_140001660(v38, v41, 1);
      v41 = v13;
      goto LABEL_3;
    }
    v39 = v29;
    v26 = v14.m128i_i64[0];
    sub_14042B0E0(&v28, v8, 3);
    v19 = v28;
    v20 = (__int64)v29;
    v21 = v30;
    if ( v28 != (__m128i *)-1LL )
    {
      v37 = v30.m128i_i64[1];
      v34 = v31;
      v35 = v32;
      v22 = _mm_loadu_si128(&v33);
      v23 = v41;
      if ( (unsigned __int64)&v39[-1].m128i_u64[1] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v26, v39, 1);
      v24 = v38;
      if ( (unsigned __int64)(v36 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v40, v36, 1);
      v39 = v19;
      v27 = v22;
      if ( v23 )
        sub_140001660(v24, v23, 1);
      v40 = v21.m128i_i64[0];
      v41 = v20;
      goto LABEL_3;
    }
    v25 = v41;
    if ( v41 != -2 )
    {
      if ( v41 != -1 )
      {
        a1[1].m128i_i64[1] = v36;
        a1[2].m128i_i64[0] = v40;
        a1[3].m128i_i64[1] = v14.m128i_i64[0];
        a1[4].m128i_i64[0] = _mm_shuffle_epi32(v14, 238).m128i_u64[0];
        a1[5] = v21;
        a1->m128i_i64[0] = v25;
        a1->m128i_i64[1] = (__int64)v38;
        a1[1].m128i_i64[0] = v9;
        a1[2].m128i_i64[1] = v11;
        a1[3].m128i_i64[0] = (__int64)v39;
        a1[4].m128i_i64[1] = v20;
        return a1;
      }
      v37 = v40;
      v40 = v36;
      v34 = v11;
      v35 = (__int64)v39;
      v41 = v9;
      v39 = v38;
      v27 = v14;
      goto LABEL_3;
    }
  }
LABEL_6:
  a1->m128i_i64[0] = -1;
  return a1;
}