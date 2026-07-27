// module: codexmate_lib/core/relay/translator
// addr: 0x140319d60
// name: sub_140319D60
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__m128i *__fastcall sub_140319D60(__m128i *_RCX, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  const __m128i *v5; // rbx
  __m128i si128; // xmm0
  __int64 *v8; // rax
  const __m128i *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // r10
  __int64 v14; // r15
  __int128 v15; // xmm1
  __int64 v16; // r14
  __int128 v17; // xmm2
  char v18; // al
  __m128i *v19; // rsi
  __m128i *result; // rax
  __int64 v21; // rax
  __int64 v23; // r8
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int128 v26; // xmm2
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm3
  __int64 v30; // rdi
  __int64 v31; // rsi
  const __m128i *v33; // r14
  __m128i v34; // xmm0
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r15
  __m128i v38; // xmm0
  __int64 v39; // r13
  __int64 v40; // rbx
  __int128 v41; // xmm1
  __int64 v42; // r12
  __int128 v43; // xmm2
  __int64 v44; // rdx
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __int128 v48; // xmm2
  __m128i v49; // [rsp+30h] [rbp-50h] BYREF
  __m128i v50; // [rsp+40h] [rbp-40h]
  __m128i v51; // [rsp+50h] [rbp-30h]
  __m128i v52; // [rsp+60h] [rbp-20h]
  __m128i v53; // [rsp+70h] [rbp-10h]
  __int64 v54; // [rsp+80h] [rbp+0h]
  int v55; // [rsp+88h] [rbp+8h]
  __int64 v56; // [rsp+90h] [rbp+10h]
  int v57; // [rsp+98h] [rbp+18h]
  unsigned __int128 v58; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v59; // [rsp+B0h] [rbp+30h]
  __m256i v60; // [rsp+C0h] [rbp+40h]
  __int128 v61; // [rsp+E0h] [rbp+60h]
  __int128 v62; // [rsp+F0h] [rbp+70h]
  __int64 v63; // [rsp+100h] [rbp+80h]
  __m128i *v64; // [rsp+108h] [rbp+88h]
  __int64 v65; // [rsp+110h] [rbp+90h]
  __m128i v66; // [rsp+118h] [rbp+98h] BYREF
  __int64 v67; // [rsp+128h] [rbp+A8h]
  __int64 v68; // [rsp+130h] [rbp+B0h]
  __int64 v69; // [rsp+138h] [rbp+B8h]
  __int64 v70; // [rsp+140h] [rbp+C0h]
  const __m128i *v71; // [rsp+148h] [rbp+C8h]
  unsigned __int64 v72; // [rsp+150h] [rbp+D0h]
  __int16 v73; // [rsp+158h] [rbp+D8h]
  char v74; // [rsp+15Ah] [rbp+DAh]
  __int16 v75; // [rsp+15Ch] [rbp+DCh]
  char v76; // [rsp+15Eh] [rbp+DEh]
  __int64 v77; // [rsp+160h] [rbp+E0h]

  v77 = -2;
  v64 = _RCX;
  v71 = (const __m128i *)a2;
  v3 = *(_QWORD *)(a2 + 32);
  if ( v3 )
  {
    v4 = v71->m128i_i64[0];
    v5 = (const __m128i *)v71->m128i_i64[1];
    _R12D = v71[1].m128i_u16[4];
    do
    {
      if ( !(_WORD)_R12D )
      {
        do
        {
          si128 = _mm_load_si128(v5);
          v4 -= 1792;
          ++v5;
          _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
        }
        while ( !_R12D );
        v8 = (__int64 *)v71;
        v71->m128i_i64[1] = (__int64)v5;
        *v8 = v4;
      }
      __asm { tzcnt   ecx, r12d }
      _R12D &= _R12D - 1;
      v9 = v71;
      v71[1].m128i_i16[4] = _R12D;
      v10 = -112LL * (_QWORD)_RCX;
      v9[2].m128i_i64[0] = --v3;
      a2 = *(_QWORD *)(v4 - 112LL * (_QWORD)_RCX - 104);
      _RCX = *(__m128i **)(v4 - 112LL * (_QWORD)_RCX - 96);
      v11 = *(_QWORD *)(v4 + v10 - 80);
      v12 = _mm_loadu_si128((const __m128i *)(v4 + v10 - 88));
      v13 = *(_QWORD *)(v4 + v10 - 72);
      v14 = *(_QWORD *)(v4 + v10 - 56);
      v15 = *(_OWORD *)(v4 + v10 - 64);
      v70 = *(_QWORD *)(v4 + v10 - 48);
      v16 = *(_QWORD *)(v4 + v10 - 32);
      v17 = *(_OWORD *)(v4 + v10 - 40);
      v72 = *(_QWORD *)(v4 + v10 - 24);
      v57 = *(_DWORD *)(v4 + v10 - 8);
      v56 = *(_QWORD *)(v4 + v10 - 16);
      v18 = *(_BYTE *)(v4 + v10 - 4);
      v75 = *(_WORD *)(v4 + v10 - 3);
      a3 = *(unsigned __int8 *)(v4 + v10 - 1);
      v76 = a3;
      if ( a2 == -1 )
        break;
      if ( (v18 & 1) != 0 )
      {
        LODWORD(v63) = v57;
        *((_QWORD *)&v62 + 1) = v56;
        *(_WORD *)((char *)&v63 + 5) = v75;
        HIBYTE(v63) = v76;
        v59 = v12;
        v60.m256i_i64[0] = v13;
        *(_OWORD *)&v60.m256i_u64[1] = v15;
        v60.m256i_i64[3] = v70;
        v61 = v17;
        *(_QWORD *)&v62 = v72;
        BYTE4(v63) = 1;
        v58 = __PAIR128__((unsigned __int64)_RCX, a2);
        nullsub_1(_RCX);
        v21 = sub_140001650(416, 8);
        if ( !v21 )
          sub_1416C2D4B(8, 416);
        *(_QWORD *)(v21 + 96) = v63;
        *(_OWORD *)(v21 + 80) = v62;
        *(_OWORD *)(v21 + 64) = v61;
        v24 = (__m128i)v58;
        v25 = v59;
        v26 = *(_OWORD *)v60.m256i_i8;
        *(_OWORD *)(v21 + 48) = *(_OWORD *)&v60.m256i_u64[2];
        *(_OWORD *)(v21 + 32) = v26;
        *(__m128i *)(v21 + 16) = v25;
        *(__m128i *)v21 = v24;
        v66.m128i_i64[0] = 4;
        v66.m128i_i64[1] = v21;
        v67 = 1;
        v27 = *v71;
        v28 = v71[1];
        v29 = v71[3];
        v51 = v71[2];
        v49 = v27;
        v53 = _mm_loadu_si128(v71 + 4);
        v52 = v29;
        v50 = v28;
        v30 = v51.m128i_i64[0];
        v31 = v27.m128i_i64[0];
        if ( v51.m128i_i64[0] )
        {
          LODWORD(_RDX) = v50.m128i_u16[4];
          HIDWORD(_RCX) = 0;
          v68 = 1;
          v33 = (const __m128i *)v49.m128i_i64[1];
          v65 = v21;
          do
          {
            while ( 1 )
            {
              for ( ; !(_DWORD)_RDX; LODWORD(_RDX) = _mm_movemask_epi8(v34) ^ 0xFFFF )
              {
                v34 = _mm_load_si128(v33);
                v31 -= 1792;
                ++v33;
              }
              __asm { tzcnt   ecx, edx }
              v35 = (unsigned int)_RDX & ((_DWORD)_RDX - 1);
              v36 = -112LL * _RCX;
              _RDX = *(_QWORD *)(v31 - 112 * _RCX - 104);
              _RCX = *(_QWORD *)(v31 - 112 * _RCX - 96);
              v37 = *(_QWORD *)(v31 + v36 - 80);
              v38 = _mm_loadu_si128((const __m128i *)(v31 + v36 - 88));
              v39 = *(_QWORD *)(v31 + v36 - 72);
              v40 = *(_QWORD *)(v31 + v36 - 56);
              v41 = *(_OWORD *)(v31 + v36 - 64);
              v69 = *(_QWORD *)(v31 + v36 - 48);
              v42 = *(_QWORD *)(v31 + v36 - 32);
              v43 = *(_OWORD *)(v31 + v36 - 40);
              v70 = *(_QWORD *)(v31 + v36 - 24);
              v55 = *(_DWORD *)(v31 + v36 - 8);
              v54 = *(_QWORD *)(v31 + v36 - 16);
              v23 = *(unsigned __int8 *)(v31 + v36 - 4);
              v73 = *(_WORD *)(v31 + v36 - 3);
              v74 = *(_BYTE *)(v31 + v36 - 1);
              v72 = v35;
              --v30;
              if ( _RDX == -1 )
              {
                v50.m128i_i16[4] = v72;
                v49.m128i_i64[1] = (__int64)v33;
                goto LABEL_41;
              }
              if ( (v23 & 1) == 0 )
                break;
              v49.m128i_i64[1] = (__int64)v33;
              v51.m128i_i64[0] = v30;
              v49.m128i_i64[0] = v31;
              LODWORD(v63) = v55;
              *((_QWORD *)&v62 + 1) = v54;
              HIBYTE(v63) = v74;
              *(_WORD *)((char *)&v63 + 5) = v73;
              v59 = v38;
              v60.m256i_i64[0] = v39;
              *(_OWORD *)&v60.m256i_u64[1] = v41;
              v60.m256i_i64[3] = v69;
              v61 = v43;
              *(_QWORD *)&v62 = v70;
              BYTE4(v63) = 1;
              v58 = __PAIR128__(_RCX, _RDX);
              v44 = v68;
              if ( v68 == v66.m128i_i64[0] )
              {
                sub_141688D30((unsigned int)&v66, v68, 1, 8, 104);
                v65 = v66.m128i_i64[1];
                v44 = v68;
              }
              v45 = 104 * v44;
              HIDWORD(_RCX) = HIDWORD(v63);
              v23 = v65;
              *(_QWORD *)(v65 + v45 + 96) = v63;
              *(_OWORD *)(v23 + v45 + 80) = v62;
              *(_OWORD *)(v23 + v45 + 64) = v61;
              v46 = _mm_loadu_si128((const __m128i *)&v58);
              v47 = v59;
              v48 = *(_OWORD *)v60.m256i_i8;
              *(_OWORD *)(v23 + v45 + 48) = *(_OWORD *)&v60.m256i_u64[2];
              *(_OWORD *)(v23 + v45 + 32) = v48;
              *(__m128i *)(v23 + v45 + 16) = v47;
              *(__m128i *)(v23 + v45) = v46;
              v68 = v44 + 1;
              v67 = v44 + 1;
              _RDX = v72;
              if ( !v30 )
              {
                v50.m128i_i16[4] = v72;
                goto LABEL_40;
              }
            }
            if ( _RDX )
              sub_140001660(_RCX, _RDX, 1);
            if ( v37 )
              sub_140001660(v39, v37, 1);
            if ( v40 )
              sub_140001660(v69, v40, 1);
            if ( v42 )
              sub_140001660(v70, v42, 1);
            _RDX = v72;
          }
          while ( v30 );
          v50.m128i_i16[4] = v72;
          v49.m128i_i64[1] = (__int64)v33;
        }
LABEL_40:
        v30 = 0;
LABEL_41:
        v51.m128i_i64[0] = v30;
        v49.m128i_i64[0] = v31;
        sub_14067A360(&v49, _RDX, v23);
        result = v64;
        v64[1].m128i_i64[0] = v67;
        *result = _mm_loadu_si128(&v66);
        return result;
      }
      if ( a2 )
      {
        v69 = v13;
        sub_140001660(_RCX, a2, 1);
        v13 = v69;
      }
      if ( v11 )
        sub_140001660(v13, v11, 1);
      if ( v14 )
        sub_140001660(v70, v14, 1);
      if ( v16 )
        sub_140001660(v72, v16, 1);
    }
    while ( v3 );
  }
  v19 = v64;
  v64->m128i_i64[0] = 0;
  v19->m128i_i64[1] = 8;
  v19[1].m128i_i64[0] = 0;
  sub_14067A360(v71, a2, a3);
  return v19;
}