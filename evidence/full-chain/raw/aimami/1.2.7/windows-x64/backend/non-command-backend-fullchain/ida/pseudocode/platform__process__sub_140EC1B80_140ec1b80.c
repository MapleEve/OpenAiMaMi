// win 1.2.7 | module src/platform/process.rs | ea 0x140ec1b80 | name sub_140EC1B80
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EC1B80(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __m128i *v8; // r12
  unsigned __int64 v9; // rax
  __int32 *v10; // rbx
  __int64 v11; // rcx
  unsigned int *v12; // rcx
  unsigned __int64 v13; // rdx
  __m128 v14; // xmm3
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v20; // rdx
  __m128i *v21; // r8
  unsigned __int32 v22; // r9d
  unsigned __int64 v23; // r10
  __int32 *v24; // r11
  unsigned __int64 v25; // r15
  bool v26; // cf
  __int32 *v28; // rcx
  __int64 v29; // rdx
  __m128i *v30; // r9
  unsigned __int32 v31; // r10d
  unsigned __int32 v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  __int32 v36; // eax
  __int32 v37; // ecx
  __int32 v38; // ecx
  __int64 v39; // [rsp+20h] [rbp-20h]
  char v40; // [rsp+37h] [rbp-9h] BYREF
  __int64 v41; // [rsp+38h] [rbp-8h]

  v41 = -2;
  if ( a3 )
  {
    v4 = a3;
    v6 = 4 * a3;
    nullsub_1(a1);
    v7 = sub_140001650(v6, 4);
    if ( !v7 )
      sub_141938D2B(4, v6);
    v8 = (__m128i *)v7;
    if ( v4 > 8 )
    {
      v11 = 8;
      if ( (v4 & 7) != 0 )
        v11 = v4 & 7;
      v9 = v4 - v11;
      v12 = (unsigned int *)(a2 + 224);
      v13 = 0;
      do
      {
        v14 = _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)*(v12 - 24), (__m128)*(v12 - 16)),
                _mm_unpacklo_ps((__m128)*(v12 - 8), (__m128)*v12));
        v8[v13 / 4] = (__m128i)_mm_movelh_ps(
                                 _mm_unpacklo_ps((__m128)*(v12 - 56), (__m128)*(v12 - 48)),
                                 _mm_unpacklo_ps((__m128)*(v12 - 40), (__m128)*(v12 - 32)));
        v8[v13 / 4 + 1] = (__m128i)v14;
        v13 += 8LL;
        v12 += 64;
      }
      while ( v9 != v13 );
    }
    else
    {
      v9 = 0;
    }
    v10 = (__int32 *)(32 * v9 + a2);
    do
    {
      v8->m128i_i32[v9++] = *v10;
      v10 += 8;
    }
    while ( v4 != v9 );
    if ( v4 == 1 )
    {
      v15 = 1;
      v4 = 1;
      goto LABEL_15;
    }
    v39 = v6;
    if ( v4 >= 0x15 )
    {
      sub_140EA2490(v8, v4, (__int64)&v40);
    }
    else
    {
      v28 = &v8->m128i_i32[1];
      v29 = 4;
      do
      {
        v31 = *(v28 - 1);
        v32 = *v28;
        if ( *v28 < v31 )
        {
          v33 = v29;
          do
          {
            *(__int32 *)((char *)v8->m128i_i32 + v33) = v31;
            if ( v33 == 4 )
            {
              v30 = v8;
              goto LABEL_39;
            }
            v31 = *(unsigned __int32 *)((char *)&v8->m128i_u32[-2] + v33);
            v33 -= 4;
          }
          while ( v32 < v31 );
          v30 = (__m128i *)((char *)v8 + v33);
LABEL_39:
          v30->m128i_i32[0] = v32;
        }
        ++v28;
        v29 += 4;
      }
      while ( v28 != (__int32 *)((char *)v8 + 4 * v4) );
    }
    v34 = 0;
    while ( v8->m128i_i32[v34 + 1] != v8->m128i_i32[v34] )
    {
      if ( v4 - 1 == ++v34 )
      {
        v15 = v4;
        goto LABEL_15;
      }
    }
    v35 = v34 + 2;
    v15 = v34 + 1;
    if ( v34 + 2 >= v4 )
      goto LABEL_15;
    if ( (((_BYTE)v4 - (_BYTE)v34) & 1) != 0 )
    {
      v36 = v8->m128i_i32[v34 + 2];
      if ( v36 != v8->m128i_i32[v34] )
      {
        v8->m128i_i32[v34 + 1] = v36;
        v15 = v34 + 2;
      }
      v35 = v34 + 3;
    }
    if ( v4 - 3 == v34 )
    {
LABEL_58:
      if ( !v15 )
      {
        a1[2] = 0;
        *((_WORD *)a1 + 12) = 1;
        *((_BYTE *)a1 + 26) = 0;
        sub_140001660(v8, v39, 4);
        goto LABEL_6;
      }
LABEL_15:
      v16 = a1[2];
      if ( v16 )
      {
        v17 = (_DWORD *)a1[1];
        if ( v16 == 1 )
        {
          v18 = 0;
          while ( v15 != v18 )
          {
            if ( *v17 != v8->m128i_i32[v18++] )
              goto LABEL_30;
          }
        }
        else
        {
          v21 = v8;
          while ( v21 != (__m128i *)((char *)v8 + 4 * v15) )
          {
            v22 = v21->m128i_i32[0];
            v23 = a1[2];
            v24 = nullptr;
            do
            {
              v10 = v24;
              v25 = v23 >> 1;
              v24 = (__int32 *)((char *)v24 + (v23 >> 1));
              if ( v17[(_QWORD)v24] > v22 )
                v24 = v10;
              v26 = v23 == v25;
              v23 -= v25;
            }
            while ( !v26 && v23 != 1 );
            v21 = (__m128i *)((char *)v21 + 4);
            if ( v17[(_QWORD)v24] != v22 )
            {
LABEL_30:
              *(_WORD *)((char *)a1 + 25) = 0;
              LOBYTE(v10) = 4;
              v20 = *a1;
              if ( *a1 )
                goto LABEL_33;
              goto LABEL_34;
            }
          }
        }
        LOBYTE(v10) = *((_BYTE *)a1 + 25) | (*((_BYTE *)a1 + 26) >= 3u) | 2;
        v20 = *a1;
        if ( !*a1 )
          goto LABEL_34;
      }
      else
      {
        *(_WORD *)((char *)a1 + 25) = 0;
        LODWORD(v10) = 3 * (*((_BYTE *)a1 + 24) != 0) + 1;
        v20 = *a1;
        if ( !*a1 )
          goto LABEL_34;
      }
LABEL_33:
      sub_140001660(a1[1], 4 * v20, 4);
LABEL_34:
      *a1 = v4;
      a1[1] = (unsigned __int64)v8;
      a1[2] = v15;
      return (unsigned int)v10;
    }
    while ( 1 )
    {
      v37 = v8->m128i_i32[v35];
      if ( v37 == v8->m128i_i32[v15 - 1] )
      {
        v38 = v8->m128i_i32[v35 + 1];
        if ( v38 != v8->m128i_i32[v15 - 1] )
          goto LABEL_65;
      }
      else
      {
        v8->m128i_i32[v15++] = v37;
        v38 = v8->m128i_i32[v35 + 1];
        if ( v38 != v8->m128i_i32[v15 - 1] )
LABEL_65:
          v8->m128i_i32[v15++] = v38;
      }
      v35 += 2;
      if ( v4 == v35 )
        goto LABEL_58;
    }
  }
  a1[2] = 0;
  *((_WORD *)a1 + 12) = 1;
  *((_BYTE *)a1 + 26) = 0;
LABEL_6:
  LODWORD(v10) = 0;
  return (unsigned int)v10;
}
