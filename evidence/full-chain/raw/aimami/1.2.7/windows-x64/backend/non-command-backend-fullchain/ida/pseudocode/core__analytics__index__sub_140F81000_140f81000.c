// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f81000 | name sub_140F81000
// win 1.2.7 | module src/core/analytics/index.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F81000(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r12
  __m128i si128; // xmm0
  int v7; // eax
  __m128i v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  int v11; // eax
  __int8 v12; // bl
  __m128i v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  bool v19; // r14
  __int64 v21; // rbx
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm0
  PVOID v25; // r14
  const __m128i *v26; // r14
  const __m128i *v27; // r13
  char *v29; // r12
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  bool v35; // zf
  __int64 v36; // rbx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  int v40; // eax
  __m128i v41; // rax
  __int64 v42; // rdi
  volatile signed __int64 *v43; // r13
  volatile signed __int64 *v44; // rbx
  __int64 *v45; // r15
  __m128i v46; // xmm0
  __int128 v47; // xmm6
  __int64 v48; // rdi
  int v49; // eax
  PVOID v50; // rcx
  char v51; // al
  char v52; // dl
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // [rsp+20h] [rbp-60h]
  __int64 v56; // [rsp+28h] [rbp-58h]
  __m128i v57; // [rsp+30h] [rbp-50h] BYREF
  __int128 v58; // [rsp+40h] [rbp-40h]
  __int128 v59; // [rsp+50h] [rbp-30h]
  __int128 v60; // [rsp+60h] [rbp-20h]
  PVOID Address; // [rsp+78h] [rbp-8h]
  _BYTE v62[88]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v63; // [rsp+D8h] [rbp+58h]
  __int64 v64; // [rsp+E8h] [rbp+68h]
  __m128i v65; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v66[48]; // [rsp+100h] [rbp+80h]
  volatile signed __int64 *v67; // [rsp+130h] [rbp+B0h] BYREF
  const __m128i *v68; // [rsp+138h] [rbp+B8h]
  __m512i v69; // [rsp+140h] [rbp+C0h] BYREF
  __m128i *v70; // [rsp+180h] [rbp+100h] BYREF
  __int64 v71; // [rsp+188h] [rbp+108h] BYREF
  __int8 v72; // [rsp+197h] [rbp+117h]
  __int64 v73; // [rsp+198h] [rbp+118h]

  v73 = -2;
  v67 = (volatile signed __int64 *)sub_140F81EA0(a2);
  v5 = *((_BYTE *)v67 + 97);
  sub_140EC0780(v62, a3, aSelectValueFro_1, 48);
  v69 = *(__m512i *)&v62[8];
  if ( *(_DWORD *)v62 == 1 )
  {
    si128 = _mm_load_si128((const __m128i *)&v69);
    *(_OWORD *)&v66[32] = *(_OWORD *)&v69.m512i_u64[6];
    *(_OWORD *)&v66[16] = *(_OWORD *)&v69.m512i_u64[4];
    *(_OWORD *)v66 = *(_OWORD *)&v69.m512i_u64[2];
    v65 = si128;
    goto LABEL_12;
  }
  v60 = *(_OWORD *)&v69.m512i_u64[6];
  v59 = *(_OWORD *)&v69.m512i_u64[4];
  v58 = *(_OWORD *)&v69.m512i_u64[2];
  v57 = _mm_load_si128((const __m128i *)&v69);
  v7 = sub_1417A9630(v69.m512i_i64[7]);
  if ( !v7 )
  {
    v70 = &v57;
    v71 = 0;
    sub_140F9AB20(v62, &v70);
    v8.m128i_i64[0] = *(_QWORD *)v62;
    if ( *(_QWORD *)v62 == -1 )
    {
      v8.m128i_i64[1] = (__int64)&v71;
      if ( v71 )
      {
        sub_14018E8C0(&v65, &v71, 0, &off_141A58A60);
        goto LABEL_10;
      }
      v8.m128i_i64[0] = 0x8000000000000009uLL;
    }
    else
    {
      v8.m128i_i64[1] = *(_QWORD *)&v62[8];
      *(_OWORD *)v69.m512i_i8 = *(_OWORD *)&v62[16];
      *(_OWORD *)&v69.m512i_u64[2] = *(_OWORD *)&v62[32];
      *(__m128i *)&v69.m512i_u64[4] = _mm_loadu_si128((const __m128i *)&v62[48]);
    }
    v65 = v8;
    *(__m128i *)v66 = _mm_load_si128((const __m128i *)&v69);
    *(_OWORD *)&v66[16] = *(_OWORD *)&v69.m512i_u64[2];
    *(_OWORD *)&v66[32] = *(_OWORD *)&v69.m512i_u64[4];
LABEL_10:
    sub_140E96D30(&v70);
    goto LABEL_11;
  }
  v65 = (__m128i)0x8000000000000013uLL;
  *(_QWORD *)v66 = v7;
LABEL_11:
  sub_140E970D0(&v57);
LABEL_12:
  if ( v65.m128i_i64[0] == -1 )
  {
    v72 = v65.m128i_i8[8];
  }
  else
  {
    if ( v65.m128i_i64[0] != 0x8000000000000009uLL )
    {
      v69.m512i_i64[7] = *(_QWORD *)&v66[40];
      *(_OWORD *)((char *)&v69.m512i_u64[5] + 1) = *(_OWORD *)&v66[25];
      *(_OWORD *)((char *)&v69.m512i_u64[3] + 1) = *(_OWORD *)&v66[9];
      *(__m128i *)((char *)&v69.m512i_u64[1] + 1) = _mm_loadu_si128((const __m128i *)((char *)&v65.m128i_u64[1] + 1));
      v69.m512i_i64[0] = v65.m128i_i64[0];
      v69.m512i_i8[8] = v65.m128i_i8[8];
      *(_QWORD *)v62 = &v69;
      *(_QWORD *)&v62[8] = sub_141404740;
      sub_1416ABFD0(&v57, &unk_141A6499F, v62);
      v12 = v57.m128i_i8[0];
      *(__m128i *)v62 = _mm_loadu_si128((const __m128i *)&v57.m128i_i8[1]);
      *(_QWORD *)&v62[15] = v58;
      sub_140E96F40(&v69);
LABEL_30:
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v62[79];
      *(_OWORD *)(a1 + 73) = *(_OWORD *)&v62[64];
      v15 = _mm_load_si128((const __m128i *)v62);
      v16 = *(_OWORD *)&v62[16];
      v17 = *(_OWORD *)&v62[32];
      *(_OWORD *)(a1 + 57) = *(_OWORD *)&v62[48];
      *(_OWORD *)(a1 + 41) = v17;
      *(_OWORD *)(a1 + 25) = v16;
      *(__m128i *)(a1 + 9) = v15;
      *(_QWORD *)a1 = 10;
      *(_BYTE *)(a1 + 8) = v12;
      goto LABEL_31;
    }
    v72 = 2;
    sub_1408EC870(&v65);
  }
  sub_140EC0780(v62, a3, aSelectExistsSe, 79);
  v69 = *(__m512i *)&v62[8];
  if ( *(_DWORD *)v62 == 1 )
  {
    v9 = _mm_load_si128((const __m128i *)&v69);
    *(_OWORD *)&v66[32] = *(_OWORD *)&v69.m512i_u64[6];
    *(_OWORD *)&v66[16] = *(_OWORD *)&v69.m512i_u64[4];
    *(_OWORD *)v66 = *(_OWORD *)&v69.m512i_u64[2];
    v65 = v9;
    goto LABEL_28;
  }
  v10 = _mm_load_si128((const __m128i *)&v69);
  v60 = *(_OWORD *)&v69.m512i_u64[6];
  v59 = *(_OWORD *)&v69.m512i_u64[4];
  v58 = *(_OWORD *)&v69.m512i_u64[2];
  v57 = v10;
  v11 = sub_1417A9630(v69.m512i_i64[7]);
  if ( !v11 )
  {
    v70 = &v57;
    v71 = 0;
    sub_140F9AB20(v62, &v70);
    v13.m128i_i64[0] = *(_QWORD *)v62;
    if ( *(_QWORD *)v62 == -1 )
    {
      v13.m128i_i64[1] = (__int64)&v71;
      if ( v71 )
      {
        sub_14018E8C0(&v65, &v71, 0, &off_141A58A90);
        goto LABEL_26;
      }
      v13.m128i_i64[0] = 0x8000000000000009uLL;
    }
    else
    {
      v13.m128i_i64[1] = *(_QWORD *)&v62[8];
      *(_OWORD *)v69.m512i_i8 = *(_OWORD *)&v62[16];
      *(_OWORD *)&v69.m512i_u64[2] = *(_OWORD *)&v62[32];
      *(__m128i *)&v69.m512i_u64[4] = _mm_loadu_si128((const __m128i *)&v62[48]);
    }
    v65 = v13;
    *(__m128i *)v66 = _mm_load_si128((const __m128i *)&v69);
    *(_OWORD *)&v66[16] = *(_OWORD *)&v69.m512i_u64[2];
    *(_OWORD *)&v66[32] = *(_OWORD *)&v69.m512i_u64[4];
LABEL_26:
    sub_140E96D30(&v70);
    goto LABEL_27;
  }
  v65 = (__m128i)0x8000000000000013uLL;
  *(_QWORD *)v66 = v11;
LABEL_27:
  sub_140E970D0(&v57);
LABEL_28:
  if ( v65.m128i_i64[0] != -1 )
  {
    v14 = _mm_load_si128(&v65);
    *(_OWORD *)&v69.m512i_u64[6] = *(_OWORD *)&v66[32];
    *(_OWORD *)&v69.m512i_u64[4] = *(_OWORD *)&v66[16];
    *(_OWORD *)&v69.m512i_u64[2] = *(_OWORD *)v66;
    *(__m128i *)v69.m512i_i8 = v14;
    *(_QWORD *)v62 = &v69;
    *(_QWORD *)&v62[8] = sub_141404740;
    sub_1416ABFD0(&v57, &unk_141A6499F, v62);
    v12 = v57.m128i_i8[0];
    *(__m128i *)v62 = _mm_loadu_si128((const __m128i *)&v57.m128i_i8[1]);
    *(_QWORD *)&v62[15] = v58;
    sub_140E96F40(&v69);
    goto LABEL_30;
  }
  v19 = 1;
  if ( (v72 & 1) != 0 && !v65.m128i_i8[8] )
  {
    sub_140F7D630(v62, a3);
    _RAX = *(_OWORD *)v62;
    v21 = *(_QWORD *)&v62[16];
    if ( *(_QWORD *)v62 != -1 )
    {
      v22 = *(_OWORD *)&v62[56];
      v23 = *(_OWORD *)&v62[72];
      *(_OWORD *)v69.m512i_i8 = *(_OWORD *)&v62[40];
      *(_QWORD *)(a1 + 88) = v63;
      *(_OWORD *)(a1 + 72) = v23;
      *(_OWORD *)(a1 + 56) = v22;
      v24 = *(_OWORD *)&v62[24];
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&_RAX + 1);
      *(_QWORD *)(a1 + 16) = v21;
      *(_OWORD *)(a1 + 24) = v24;
      *(__m128i *)(a1 + 40) = _mm_load_si128((const __m128i *)&v69);
      *(_QWORD *)a1 = _RAX;
      goto LABEL_31;
    }
    v25 = *(PVOID *)&v62[32];
    *(__m128i *)v69.m512i_i8 = _mm_loadu_si128((const __m128i *)&v62[40]);
    if ( *(_QWORD *)&v62[16] )
    {
      v68 = *(const __m128i **)&v62[8];
      LOBYTE(v64) = v5;
      Address = *(PVOID *)&v62[32];
      if ( *(_QWORD *)&v62[32] )
      {
        v26 = v68;
        v27 = v68 + 1;
        _R15D = ~_mm_movemask_epi8(_mm_load_si128(v68));
        v29 = (char *)Address;
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v30 = _mm_load_si128(v27);
              v26 -= 24;
              ++v27;
              _R15D = _mm_movemask_epi8(v30) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v31 = -3 * _RAX;
          v32 = *((_QWORD *)&v26[-1] + v31 - 1);
          if ( v32 )
            sub_140001660(v26[-1].m128i_i64[v31], v32, 1);
          --v29;
          *(_QWORD *)&_RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v29 );
      }
      v33 = (24 * v21 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v34 = v33 + v21;
      v35 = v34 == -17;
      v36 = v34 + 17;
      v5 = v64;
      v25 = Address;
      if ( !v35 )
        sub_140001660((char *)v68 - v33, v36, 16);
    }
    v19 = v25 != nullptr;
  }
  sub_140EC0780(v62, a3, aSelectValueFro_2, 45);
  v69 = *(__m512i *)&v62[8];
  if ( *(_DWORD *)v62 == 1 )
  {
    v38 = _mm_load_si128((const __m128i *)&v69);
    *(_OWORD *)&v66[32] = *(_OWORD *)&v69.m512i_u64[6];
    *(_OWORD *)&v66[16] = *(_OWORD *)&v69.m512i_u64[4];
    *(_OWORD *)v66 = *(_OWORD *)&v69.m512i_u64[2];
    v65 = v38;
    goto LABEL_62;
  }
  v39 = _mm_load_si128((const __m128i *)&v69);
  v60 = *(_OWORD *)&v69.m512i_u64[6];
  v59 = *(_OWORD *)&v69.m512i_u64[4];
  v58 = *(_OWORD *)&v69.m512i_u64[2];
  v57 = v39;
  v40 = sub_1417A9630(v69.m512i_i64[7]);
  if ( !v40 )
  {
    v70 = &v57;
    v71 = 0;
    sub_140F9AB20(v62, &v70);
    v41.m128i_i64[0] = *(_QWORD *)v62;
    if ( *(_QWORD *)v62 == -1 )
    {
      v41.m128i_i64[1] = (__int64)&v71;
      if ( v71 )
      {
        sub_14018EA70(&v65, &v71, 0, &off_141A58A78);
        goto LABEL_60;
      }
      v41.m128i_i64[0] = 0x8000000000000009uLL;
    }
    else
    {
      v41.m128i_i64[1] = *(_QWORD *)&v62[8];
      *(_OWORD *)v69.m512i_i8 = *(_OWORD *)&v62[16];
      *(_OWORD *)&v69.m512i_u64[2] = *(_OWORD *)&v62[32];
      *(__m128i *)&v69.m512i_u64[4] = _mm_loadu_si128((const __m128i *)&v62[48]);
    }
    v65 = v41;
    *(__m128i *)v66 = _mm_load_si128((const __m128i *)&v69);
    *(_OWORD *)&v66[16] = *(_OWORD *)&v69.m512i_u64[2];
    *(_OWORD *)&v66[32] = *(_OWORD *)&v69.m512i_u64[4];
LABEL_60:
    sub_140E96D30(&v70);
    goto LABEL_61;
  }
  v65 = (__m128i)0x8000000000000013uLL;
  *(_QWORD *)v66 = v40;
LABEL_61:
  sub_140E970D0(&v57);
LABEL_62:
  if ( v65.m128i_i64[0] == -1 )
  {
    v42 = 1;
    v55 = v65.m128i_i64[1];
  }
  else
  {
    if ( v65.m128i_i64[0] != 0x8000000000000009uLL )
    {
      *(_QWORD *)&v62[56] = *(_QWORD *)&v66[40];
      v46 = _mm_loadu_si128((const __m128i *)&v65.m128i_u64[1]);
      *(_OWORD *)&v62[40] = *(_OWORD *)&v66[24];
      *(_OWORD *)&v62[24] = *(_OWORD *)&v66[8];
      *(_QWORD *)v62 = v65.m128i_i64[0];
      *(__m128i *)&v62[8] = v46;
      v57.m128i_i64[0] = (__int64)v62;
      v57.m128i_i64[1] = (__int64)sub_141404740;
      sub_1416ABFD0(&v69, &unk_141A6499F, &v57);
      v47 = *(_OWORD *)v69.m512i_i8;
      v48 = v69.m512i_i64[2];
      sub_140E96F40(v62);
      *(_QWORD *)a1 = 10;
      *(_OWORD *)(a1 + 8) = v47;
      *(_QWORD *)(a1 + 24) = v48;
      goto LABEL_31;
    }
    sub_1408EC870(&v65);
    v42 = 0;
  }
  v43 = v67;
  v44 = v67 + 8;
  LOBYTE(v37) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v67 + 64, 1, 0) )
    sub_141937480(v44);
  v45 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v49 = sub_141938160(v37);
    LOBYTE(v49) = v49 ^ 1;
    LODWORD(v68) = v49;
    Address = (PVOID)v44;
    if ( *((_QWORD *)v43 + 9) != -1 )
    {
LABEL_70:
      sub_1416AC440(v62, v43 + 9);
      v56 = *(_QWORD *)&v62[8];
      v64 = *(_QWORD *)v62;
      v44 = *(volatile signed __int64 **)&v62[16];
      if ( (_BYTE)v68 )
        goto LABEL_77;
LABEL_76:
      if ( 2 * *v45 && !(unsigned __int8)sub_141938160(v37) )
        *((_BYTE *)v43 + 65) = 1;
      goto LABEL_77;
    }
  }
  else
  {
    LODWORD(v68) = 0;
    Address = (PVOID)v44;
    if ( *((_QWORD *)v43 + 9) != -1 )
      goto LABEL_70;
  }
  v64 = -1;
  if ( !(_BYTE)v68 )
    goto LABEL_76;
LABEL_77:
  v50 = Address;
  v51 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v51 == 2 )
    WakeByAddressSingle(v50);
  v52 = v72 & 1;
  v53 = *((_QWORD *)v67 + 6);
  v54 = *((_QWORD *)v67 + 7);
  *(_QWORD *)(a1 + 24) = v64;
  *(_QWORD *)(a1 + 32) = v56;
  *(_QWORD *)(a1 + 40) = v44;
  *(_QWORD *)(a1 + 8) = v42;
  *(_QWORD *)(a1 + 16) = v55;
  *(_QWORD *)(a1 + 48) = v53;
  *(_QWORD *)(a1 + 56) = v54;
  *(_BYTE *)(a1 + 64) = v5 != 0;
  *(_BYTE *)(a1 + 65) = v19;
  *(_BYTE *)(a1 + 66) = v52;
  *(_QWORD *)a1 = -1;
LABEL_31:
  if ( !_InterlockedDecrement64(v67) )
    sub_1409E6120(&v67);
  return a1;
}
