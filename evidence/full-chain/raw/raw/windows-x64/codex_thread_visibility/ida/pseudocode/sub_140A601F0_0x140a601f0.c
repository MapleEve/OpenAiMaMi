// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140a601f0
// name: sub_140A601F0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A601F0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r13
  bool v5; // zf
  __m128i *v6; // rcx
  __int64 v8; // rdi
  __int64 v9; // r15
  __m128i v10; // kr10_16
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // r12
  __int64 v14; // r14
  __m128i v15; // xmm6
  __m128i v16; // kr30_16
  __int64 v17; // r12
  __int64 v18; // rbx
  __m128i v19; // xmm6
  __int64 v20; // rax
  __m128i v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __m128i v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __m128i v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  __int64 v30; // [rsp+80h] [rbp+0h]
  __int64 v31; // [rsp+88h] [rbp+8h]
  __int64 v32; // [rsp+90h] [rbp+10h]
  __m128i v33; // [rsp+98h] [rbp+18h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+28h]
  __int64 v35; // [rsp+B0h] [rbp+30h]
  __int64 v36; // [rsp+B8h] [rbp+38h]

  v36 = -2;
  v4 = *(_QWORD **)a2;
  sub_140A67BD0(&v22, a2 + 8);
  if ( v22 != -1 )
  {
    v30 = v22;
    v34 = v23.m128i_i64[1];
    v35 = v23.m128i_i64[0];
    v33.m128i_i64[1] = v24;
LABEL_3:
    v21 = _mm_loadu_si128(&v25);
    v31 = v26;
    v32 = v27;
LABEL_4:
    v5 = *v4 == -1;
    v33.m128i_i64[0] = (__int64)v4;
    if ( !v5 )
      sub_140982F30(v33.m128i_i64[0]);
    v6 = (__m128i *)v33.m128i_i64[0];
    *(_QWORD *)v33.m128i_i64[0] = v30;
    v6->m128i_i64[1] = v35;
    v6[1].m128i_i64[0] = v34;
    v6[1].m128i_i64[1] = v33.m128i_i64[1];
    v6[2] = v21;
    v6[3].m128i_i64[0] = v31;
    v6[3].m128i_i64[1] = v32;
    goto LABEL_7;
  }
  if ( *(_QWORD *)(a2 + 16) )
  {
    v8 = a2 + 16;
    sub_14042B0E0(&v22, v8, 0);
    v34 = v23.m128i_i64[1];
    v9 = v24;
    v35 = v23.m128i_i64[0];
    if ( v22 != -1 )
    {
      v33.m128i_i64[1] = v24;
      v30 = v22;
      goto LABEL_3;
    }
    sub_14042AE90(&v22, v8, 1, &off_1417A5298);
    v10 = v23;
    v11 = v24;
    if ( v22 != -1 )
    {
      v30 = v22;
      v12 = _mm_loadu_si128(&v25);
      v31 = v26;
      v32 = v27;
      v21 = v12;
      if ( v35 )
        sub_140001660(v34, v35, 1);
      v33.m128i_i64[1] = v11;
      v34 = v10.m128i_i64[1];
      v35 = v10.m128i_i64[0];
      goto LABEL_4;
    }
    v33 = v23;
    sub_14042B0E0(&v22, v8, 2);
    v29 = v23.m128i_i64[1];
    v13 = v23.m128i_i64[0];
    v14 = v24;
    if ( v22 != -1 )
    {
      v30 = v22;
      v15 = v25;
      v31 = v26;
      v32 = v27;
      if ( (unsigned __int64)(v33.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v33.m128i_i64[1], v33.m128i_i64[0], 1);
      v21 = v15;
      if ( v35 )
        sub_140001660(v34, v35, 1);
      v33.m128i_i64[1] = v14;
      v34 = v29;
      v35 = v13;
      goto LABEL_4;
    }
    v28 = v23.m128i_i64[0];
    sub_14042B0E0(&v22, v8, 3);
    v16 = v23;
    v17 = v24;
    if ( v22 != -1 )
    {
      v18 = v23.m128i_i64[0];
      v30 = v22;
      v19 = v25;
      v31 = v26;
      v32 = v27;
      if ( v28 )
        sub_140001660(v29, v28, 1);
      if ( (unsigned __int64)(v33.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v33.m128i_i64[1], v33.m128i_i64[0], 1);
      v21 = v19;
      if ( v35 )
        sub_140001660(v34, v35, 1);
      v33.m128i_i64[1] = v17;
      v34 = v16.m128i_i64[1];
      v35 = v18;
      goto LABEL_4;
    }
    v20 = v35;
    if ( v35 != -2 )
    {
      if ( v35 != -1 )
      {
        *(__m128i *)(a1 + 48) = v33;
        *(_QWORD *)(a1 + 64) = v11;
        *(_QWORD *)a1 = v20;
        *(_QWORD *)(a1 + 8) = v34;
        *(_QWORD *)(a1 + 16) = v9;
        *(_QWORD *)(a1 + 24) = v28;
        *(_QWORD *)(a1 + 32) = v29;
        *(_QWORD *)(a1 + 40) = v14;
        *(__m128i *)(a1 + 72) = v16;
        *(_QWORD *)(a1 + 88) = v17;
        return a1;
      }
      v30 = v34;
      v35 = v9;
      v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, _mm_loadl_epi64(&v33));
      v31 = v33.m128i_i64[1];
      v32 = v11;
      v33.m128i_i64[1] = v29;
      v34 = v28;
      goto LABEL_4;
    }
  }
LABEL_7:
  *(_QWORD *)a1 = -1;
  return a1;
}