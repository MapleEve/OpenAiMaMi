// __ZN13codexmate_lib8platform7process23WriterGenerationTracker7observe @ 0x1003621b0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::WriterGenerationTracker::observe::h6905b00f550c77af(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned int *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  int *v11; // rcx
  __int64 v12; // rdx
  __m128i inserted; // xmm1
  unsigned int *v14; // r13
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v20; // rsi
  unsigned int *v21; // rsi
  unsigned int v22; // edi
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned __int64 v26; // r11
  bool v27; // cf
  unsigned int *v29; // rcx
  __int64 v30; // rdx
  unsigned int *v31; // rdi
  unsigned int v32; // r8d
  unsigned int v33; // esi
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  _BYTE v40[41]; // [rsp+1h] [rbp-29h] BYREF

  v40[0] = HIBYTE(v3); /*0x1003621bd*/
  if ( a3 ) /*0x1003621c4*/
  {
    v5 = a3; /*0x1003621c6*/
    v6 = 4 * a3; /*0x1003621cc*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003621d4*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 4); /*0x1003621e1*/
    if ( !v7 ) /*0x1003621e9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(4, v6); /*0x10036242b*/
    v8 = (unsigned int *)v7; /*0x1003621ef*/
    if ( v5 > 8 ) /*0x1003621f6*/
    {
      v10 = 8; /*0x10036221f*/
      if ( (v5 & 7) != 0 ) /*0x100362224*/
        v10 = v5 & 7; /*0x100362224*/
      v9 = v5 - v10; /*0x10036222b*/
      v11 = (int *)(a2 + 224); /*0x10036222e*/
      v12 = 0; /*0x100362235*/
      do /*0x100362297*/
      {
        inserted = _mm_insert_epi32( /*0x100362276*/
                     _mm_insert_epi32(_mm_insert_epi32(_mm_cvtsi32_si128(*(v11 - 24)), *(v11 - 16), 1), *(v11 - 8), 2),
                     *v11,
                     3);
        *(__m128i *)&v8[v12] = _mm_insert_epi32( /*0x10036227c*/
                                 _mm_insert_epi32(
                                   _mm_insert_epi32(_mm_cvtsi32_si128(*(v11 - 56)), *(v11 - 48), 1),
                                   *(v11 - 40),
                                   2),
                                 *(v11 - 32),
                                 3);
        *(__m128i *)&v8[v12 + 4] = inserted; /*0x100362282*/
        v12 += 8; /*0x100362289*/
        v11 += 64; /*0x10036228d*/
      }
      while ( v9 != v12 ); /*0x100362297*/
    }
    else
    {
      v9 = 0; /*0x1003621f8*/
    }
    v14 = (unsigned int *)(32 * v9 + a2); /*0x1003622a0*/
    do /*0x1003622c2*/
    {
      v8[v9++] = *v14; /*0x1003622b4*/
      v14 += 8; /*0x1003622bb*/
    }
    while ( v5 != v9 ); /*0x1003622c2*/
    if ( v5 == 1 ) /*0x1003622c8*/
    {
      v15 = 1; /*0x1003622ce*/
      v5 = 1; /*0x1003622d4*/
      goto LABEL_15; /*0x1003622d4*/
    }
    if ( v5 >= 0x15 ) /*0x1003623d5*/
    {
      core::slice::sort::unstable::ipnsort::h18f86c8ec873c643(v8, v5, v40); /*0x10036243a*/
    }
    else
    {
      v29 = v8 + 1; /*0x1003623db*/
      v30 = 4; /*0x1003623df*/
      do /*0x1003623f6*/
      {
        v32 = *(v29 - 1); /*0x1003623f8*/
        v33 = *v29; /*0x1003623fc*/
        if ( *v29 < v32 ) /*0x100362401*/
        {
          v34 = v30; /*0x100362403*/
          do /*0x10036241c*/
          {
            *(unsigned int *)((char *)v8 + v34) = v32; /*0x100362406*/
            if ( v34 == 4 ) /*0x10036240e*/
            {
              v31 = v8; /*0x1003623e6*/
              goto LABEL_39; /*0x1003623e6*/
            }
            v32 = *(unsigned int *)((char *)v8 + v34 - 8); /*0x100362410*/
            v34 -= 4; /*0x100362415*/
          }
          while ( v33 < v32 ); /*0x10036241c*/
          v31 = (unsigned int *)((char *)v8 + v34); /*0x10036241e*/
LABEL_39:
          *v31 = v33; /*0x1003623e9*/
        }
        ++v29; /*0x1003623eb*/
        v30 += 4; /*0x1003623ef*/
      }
      while ( v29 != &v8[v5] ); /*0x1003623f6*/
    }
    v35 = 0; /*0x100362443*/
    while ( v8[v35 + 1] != v8[v35] ) /*0x10036244e*/
    {
      if ( v5 - 1 == ++v35 ) /*0x100362456*/
      {
        v15 = v5; /*0x100362458*/
        goto LABEL_15; /*0x10036245b*/
      }
    }
    v36 = v35 + 2; /*0x100362460*/
    v15 = v35 + 1; /*0x100362464*/
    if ( v35 + 2 >= v5 ) /*0x10036246b*/
      goto LABEL_15; /*0x10036246b*/
    if ( (((_BYTE)v5 - (_BYTE)v35) & 1) != 0 ) /*0x10036247e*/
    {
      v37 = v8[v35 + 2]; /*0x100362480*/
      if ( v37 != v8[v35] ) /*0x100362489*/
      {
        v8[v35 + 1] = v37; /*0x10036248b*/
        v15 = v35 + 2; /*0x100362490*/
      }
      v36 = v35 + 3; /*0x100362494*/
    }
    if ( v5 - 3 == v35 ) /*0x10036249b*/
    {
LABEL_58:
      if ( !v15 ) /*0x1003624a0*/
      {
        a1[2] = 0; /*0x1003624a6*/
        *((_WORD *)a1 + 12) = 1; /*0x1003624ae*/
        *((_BYTE *)a1 + 26) = 0; /*0x1003624b4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v6, 4); /*0x1003624c3*/
        goto LABEL_6; /*0x1003624c8*/
      }
LABEL_15:
      v16 = a1[2]; /*0x1003622da*/
      if ( v16 ) /*0x1003622e1*/
      {
        v17 = (_DWORD *)a1[1]; /*0x1003622e3*/
        if ( v16 == 1 ) /*0x1003622eb*/
        {
          v18 = 0; /*0x1003622f5*/
          while ( v15 != v18 ) /*0x100362303*/
          {
            if ( *v17 != v8[v18++] ) /*0x10036230b*/
              goto LABEL_30; /*0x100362313*/
          }
        }
        else
        {
          v21 = v8; /*0x10036233c*/
          while ( v21 != &v8[v15] ) /*0x100362343*/
          {
            v22 = *v21; /*0x100362345*/
            v23 = a1[2]; /*0x100362347*/
            v24 = 0; /*0x10036234a*/
            do /*0x10036236b*/
            {
              v25 = v24; /*0x100362350*/
              v26 = v23 >> 1; /*0x100362356*/
              v24 += v23 >> 1; /*0x100362359*/
              if ( v17[v24] > v22 ) /*0x100362360*/
                v24 = v25; /*0x100362360*/
              v27 = v23 == v26; /*0x100362367*/
              v23 -= v26; /*0x100362364*/
            }
            while ( !v27 && v23 != 1 ); /*0x10036236b*/
            ++v21; /*0x10036236d*/
            if ( v17[v24] != v22 ) /*0x100362375*/
            {
LABEL_30:
              *(_WORD *)((char *)a1 + 25) = 0; /*0x100362377*/
              LOBYTE(v6) = 4; /*0x10036237d*/
              v20 = *a1; /*0x100362380*/
              if ( *a1 ) /*0x100362380*/
                goto LABEL_33; /*0x100362386*/
              goto LABEL_34; /*0x100362386*/
            }
          }
        }
        LOBYTE(v6) = *((_BYTE *)a1 + 25) | (*((_BYTE *)a1 + 26) >= 3u) | 2; /*0x100362396*/
        v20 = *a1; /*0x10036239a*/
        if ( !*a1 ) /*0x1003623a0*/
          goto LABEL_34; /*0x1003623a0*/
      }
      else
      {
        *(_WORD *)((char *)a1 + 25) = 0; /*0x100362317*/
        LODWORD(v6) = 3 * (*((_BYTE *)a1 + 24) != 0) + 1; /*0x100362326*/
        v20 = *a1; /*0x10036232b*/
        if ( !*a1 ) /*0x10036232b*/
          goto LABEL_34; /*0x100362331*/
      }
LABEL_33:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[1], 4 * v20, 4); /*0x1003623a2*/
LABEL_34:
      *a1 = v5; /*0x1003623b4*/
      a1[1] = (unsigned __int64)v8; /*0x1003623b7*/
      a1[2] = v15; /*0x1003623bb*/
      return (unsigned int)v6; /*0x1003623bb*/
    }
    while ( 1 ) /*0x1003624d6*/
    {
      v38 = v8[v36]; /*0x1003624d6*/
      if ( v38 == v8[v15 - 1] ) /*0x1003624df*/
      {
        v39 = v8[v36 + 1]; /*0x1003624e1*/
        if ( v39 != v8[v15 - 1] ) /*0x1003624eb*/
          goto LABEL_65; /*0x1003624eb*/
      }
      else
      {
        v8[v15++] = v38; /*0x1003624ef*/
        v39 = v8[v36 + 1]; /*0x1003624f6*/
        if ( v39 != v8[v15 - 1] ) /*0x100362500*/
LABEL_65:
          v8[v15++] = v39; /*0x100362502*/
      }
      v36 += 2; /*0x1003624cd*/
      if ( v5 == v36 ) /*0x1003624d4*/
        goto LABEL_58; /*0x1003624d4*/
    }
  }
  a1[2] = 0; /*0x1003621ff*/
  *((_WORD *)a1 + 12) = 1; /*0x100362207*/
  *((_BYTE *)a1 + 26) = 0; /*0x10036220d*/
LABEL_6:
  LODWORD(v6) = 0; /*0x100362211*/
  return (unsigned int)v6; /*0x1003623c6*/
}