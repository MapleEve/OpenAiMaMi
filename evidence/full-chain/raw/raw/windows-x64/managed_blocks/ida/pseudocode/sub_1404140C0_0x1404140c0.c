// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x1404140c0
// name: sub_1404140C0
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1404140C0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  int v6; // edx
  unsigned __int64 v7; // rax
  char result; // al
  __int64 v9; // rax
  __int64 v10; // rcx
  char *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // r12
  unsigned int v16; // r13d
  int v17; // ecx
  int v18; // r9d
  int v19; // r13d
  char v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  char v24; // cl
  unsigned int v25; // r8d
  char v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdx
  bool v40; // zf
  char v41; // al
  unsigned __int64 v42; // rdx
  char v43; // si
  __int64 v44; // [rsp+28h] [rbp-18h] BYREF
  __int64 v45; // [rsp+30h] [rbp-10h]
  __int64 v46; // [rsp+38h] [rbp-8h]
  __int64 v47; // [rsp+40h] [rbp+0h]

  v47 = -2;
  if ( a2 >= 0x10 )
  {
    v4 = _byteswap_uint64(*a1);
    v5 = 0x6D6F64656C5F7072LL;
    if ( v4 != 0x6D6F64656C5F7072LL
      || (v4 = _byteswap_uint64(a1[1]), v5 = 0x6F7669646572732ELL, v6 = 0, v4 != 0x6F7669646572732ELL) )
    {
      v6 = 2 * (v5 >= v4) - 1;
    }
    if ( !v6 )
    {
      v9 = -16;
      v10 = 16;
      goto LABEL_14;
    }
  }
  else if ( a2 < 9 )
  {
    return 0;
  }
  v7 = _byteswap_uint64(*a1);
  if ( v7 == 0x70726F66696C6573LL )
  {
    if ( *((_BYTE *)a1 + 8) != 46 )
      return 0;
  }
  else if ( 2 * (v7 <= 0x70726F66696C6573LL) != 1 )
  {
    return 0;
  }
  v9 = -9;
  v10 = 9;
LABEL_14:
  v11 = (char *)a1 + v10;
  v44 = 0;
  v45 = 1;
  v46 = 0;
  v12 = &v11[v9 + a2];
  v13 = 1;
  v14 = 0;
  v15 = 0;
  while ( v11 != v12 )
  {
    while ( 1 )
    {
      v16 = (unsigned __int8)*v11;
      if ( *v11 < 0 )
        break;
      ++v11;
      if ( v16 != 34 )
        goto LABEL_26;
LABEL_23:
      v15 ^= 1u;
      if ( v11 == v12 )
        goto LABEL_44;
    }
    v17 = v16 & 0x1F;
    v18 = v11[1] & 0x3F;
    if ( (unsigned __int8)v16 <= 0xDFu )
    {
      v11 += 2;
      v16 = v18 | (v17 << 6);
      if ( v16 != 34 )
        goto LABEL_26;
      goto LABEL_23;
    }
    v19 = (v18 << 6) | v11[2] & 0x3F;
    if ( (unsigned __int8)*v11 < 0xF0u )
    {
      v11 += 3;
      v16 = (v17 << 12) | v19;
      if ( v16 != 34 )
        goto LABEL_26;
      goto LABEL_23;
    }
    v20 = v11[3];
    v11 += 4;
    v16 = ((v17 & 7) << 18) | (v19 << 6) | v20 & 0x3F;
    if ( v16 == 34 )
      goto LABEL_23;
LABEL_26:
    if ( v16 == 46 )
    {
      if ( (v15 & 1) == 0 )
        break;
      v15 = 1;
      v21 = v44;
    }
    else
    {
      v21 = v44;
      if ( v16 >= 0x80 )
      {
        v23 = 4LL - (v16 < 0x10000);
        if ( v16 < 0x800 )
          v23 = 2;
        if ( v23 > v44 - v14 )
        {
          v29 = v14;
          sub_141688D30((unsigned int)&v44, v14, v23, 1, 1);
          v14 = v29;
          v13 = v45;
        }
        v24 = v16 & 0x3F | 0x80;
        v25 = v16 >> 6;
        if ( v16 >= 0x800 )
        {
          v26 = v25 & 0x3F | 0x80;
          v27 = v16 >> 12;
          if ( v16 > 0xFFFF )
          {
            *(_BYTE *)(v13 + v14) = (v16 >> 18) | 0xF0;
            *(_BYTE *)(v13 + v14 + 1) = v27 & 0x3F | 0x80;
            *(_BYTE *)(v13 + v14 + 2) = v26;
            *(_BYTE *)(v13 + v14 + 3) = v24;
            v22 = 4;
          }
          else
          {
            *(_BYTE *)(v13 + v14) = v27 | 0xE0;
            *(_BYTE *)(v13 + v14 + 1) = v26;
            *(_BYTE *)(v13 + v14 + 2) = v24;
            v22 = 3;
          }
        }
        else
        {
          *(_BYTE *)(v13 + v14) = v25 | 0xC0;
          *(_BYTE *)(v13 + v14 + 1) = v24;
          v22 = 2;
        }
        goto LABEL_33;
      }
    }
    if ( v21 == v14 )
    {
      v28 = v14;
      sub_141688D30((unsigned int)&v44, v14, 1, 1, 1);
      v14 = v28;
    }
    v13 = v45;
    *(_BYTE *)(v45 + v14) = v16;
    v22 = 1;
LABEL_33:
    v14 += v22;
    v46 = v14;
  }
LABEL_44:
  v30 = v45;
  v31 = sub_14033BC10(v45, v14);
  v34 = v32;
  if ( v32 < 0 )
  {
    v35 = 0;
    goto LABEL_46;
  }
  if ( v32 )
  {
    v36 = v31;
    nullsub_1(v33);
    v35 = 1;
    v37 = sub_140001650(v34, 1);
    if ( !v37 )
LABEL_46:
      sub_1416C2D4B(v35, v34);
    v38 = v37;
    sub_141684120(v37, v36, v34);
    v39 = v44;
    if ( v44 )
      goto LABEL_50;
  }
  else
  {
    v38 = 1;
    v39 = v44;
    if ( v44 )
LABEL_50:
      sub_140001660(v30, v39, 1);
  }
  if ( v34 == 12 )
  {
    v40 = (*(_QWORD *)v38 ^ 0x725F696D616D6961LL | *(unsigned int *)(v38 + 8) ^ 0x79616C65LL) == 0;
LABEL_61:
    v41 = v40;
LABEL_62:
    result = v41 ^ 1;
LABEL_63:
    v42 = v34;
    v43 = result;
    sub_140001660(v38, v42, 1);
    return v43;
  }
  if ( v34 > 0xC && !(*(_QWORD *)v38 ^ 0x725F696D616D6961LL | *(_QWORD *)(v38 + 5) ^ 0x5F79616C65725F69LL) )
  {
    v41 = 1;
    goto LABEL_62;
  }
  if ( v34 == 6 )
  {
    v40 = (*(_DWORD *)v38 ^ 0x616D6961 | *(unsigned __int16 *)(v38 + 4) ^ 0x3169) == 0;
    goto LABEL_61;
  }
  if ( v34 == 19 )
  {
    v40 = _mm_movemask_epi8(
            _mm_and_si128(
              _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v38), (__m128i)xmmword_141748EE0),
              _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v38 + 3)), (__m128i)xmmword_141748ED0))) == 0xFFFF;
    goto LABEL_61;
  }
  result = 1;
  if ( v34 )
    goto LABEL_63;
  return result;
}