// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140a78660 | successor of pre-update 0x140353510 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.651, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140A78660(__int64 a1, __int64 a2)
{
  const char *v4; // rax
  __int128 v5; // xmm0
  __m128i v6; // xmm0
  __int128 v7; // xmm1
  __int64 v9; // rax
  __int128 v10; // xmm0
  __m128i v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r12
  __int64 v14; // r14
  const char *v15; // rax
  __m128i v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // r14
  const __m128i *v28; // r15
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // r14
  const __m128i *v37; // r15
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rdi
  __m128i v47; // xmm0
  _OWORD v48[3]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v49[3]; // [rsp+60h] [rbp-20h] BYREF
  _OWORD v50[2]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v51; // [rsp+B0h] [rbp+30h]
  __int128 v52; // [rsp+C0h] [rbp+40h]
  __int64 v53; // [rsp+D0h] [rbp+50h]
  _OWORD v54[3]; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v55; // [rsp+110h] [rbp+90h] BYREF
  __int128 v56; // [rsp+120h] [rbp+A0h]
  __int128 v57; // [rsp+130h] [rbp+B0h]
  __m256i v58; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v59; // [rsp+160h] [rbp+E0h]
  __int128 v60; // [rsp+170h] [rbp+F0h]
  __m256i v61; // [rsp+180h] [rbp+100h] BYREF
  _BYTE v62[56]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v63; // [rsp+1D8h] [rbp+158h]
  __int128 v64; // [rsp+1E8h] [rbp+168h]
  __m128i si128; // [rsp+1F8h] [rbp+178h]
  __int128 v66; // [rsp+208h] [rbp+188h]
  __int128 v67; // [rsp+218h] [rbp+198h]
  __int64 v68; // [rsp+228h] [rbp+1A8h]
  _BYTE v69[72]; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v70; // [rsp+278h] [rbp+1F8h]
  __int64 v71; // [rsp+288h] [rbp+208h]
  const char *v72; // [rsp+290h] [rbp+210h] BYREF
  __m256i v73; // [rsp+298h] [rbp+218h]
  __int128 v74; // [rsp+2B8h] [rbp+238h]
  __int128 v75; // [rsp+2C8h] [rbp+248h]
  __m256i v76; // [rsp+2D8h] [rbp+258h]
  __int128 v77; // [rsp+2F8h] [rbp+278h]
  __int128 v78; // [rsp+308h] [rbp+288h]
  __int64 v79; // [rsp+318h] [rbp+298h]
  char v80; // [rsp+327h] [rbp+2A7h]
  __int64 v81; // [rsp+328h] [rbp+2A8h]

  v81 = -2;
  sub_14088C320(&v72);
  v4 = v72;
  *(__m256i *)v62 = v73;
  *(_OWORD *)&v62[32] = v74;
  if ( v72 == (const char *)-1LL )
  {
    v48[0] = *(_OWORD *)v62;
    v48[1] = *(_OWORD *)&v62[16];
    v48[2] = *(_OWORD *)&v62[32];
    sub_140A80310(&v72, a2, v48);
    v4 = v72;
    *(__m256i *)v62 = v73;
    *(_OWORD *)&v62[32] = v74;
    if ( v72 == (const char *)-1LL )
    {
      v54[0] = _mm_load_si128((const __m128i *)v62);
      v54[1] = *(_OWORD *)&v62[16];
      v54[2] = *(_OWORD *)&v62[32];
      sub_1407B9590(v69, a2);
      v9 = *(_QWORD *)v69;
      v55 = *(__m128i *)&v69[8];
      v56 = *(_OWORD *)&v69[24];
      v57 = *(_OWORD *)&v69[40];
      if ( *(_QWORD *)v69 == -1 )
      {
        v49[0] = _mm_load_si128(&v55);
        v49[1] = v56;
        v49[2] = v57;
        sub_1407BB100(&v72, v49, a2);
        v58 = v73;
        v59 = v74;
        v60 = v75;
        v61 = v76;
        if ( v72 )
        {
          v68 = v79;
          v67 = v78;
          v66 = v77;
          *(__m256i *)&v62[8] = v58;
          *(_OWORD *)&v62[40] = v59;
          v63 = v60;
          v64 = *(_OWORD *)v61.m256i_i8;
          si128 = _mm_load_si128((const __m128i *)&v61.m256i_u64[2]);
          *(_QWORD *)v62 = v72;
          sub_14018F700(&v55);
          sub_140A7E160(&v72, v54, v62, &v62[48]);
          v58.m256i_i64[2] = v73.m256i_i64[1];
          *(__m128i *)v58.m256i_i8 = _mm_loadu_si128((const __m128i *)&v72);
          *(_QWORD *)&v49[0] = v73.m256i_i64[2];
          if ( v73.m256i_i64[2] && *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)v69 = v49;
            *(_QWORD *)&v69[8] = sub_1416EBAE0;
            v72 = aCodexmateLibCo_41;
            v73.m256i_i64[0] = 37;
            v73.m256i_i64[1] = (__int64)aCodexmateLibCo_41;
            v73.m256i_i64[2] = 37;
            v73.m256i_i64[3] = (__int64)&off_141A6B6F0;
            sub_140AF72B0(&unk_141A6B697, v69, 2, &v72);
          }
          v13 = v58.m256i_i64[2];
          if ( v58.m256i_i64[2] )
          {
            v14 = v58.m256i_i64[1];
            sub_140876C50(&v72, a2, v58.m256i_i64[1], v58.m256i_i64[2]);
            v15 = v72;
            *(__m256i *)v69 = v73;
            *(_OWORD *)&v69[32] = v74;
            *(_OWORD *)&v69[48] = v75;
            *(_QWORD *)&v69[64] = v76.m256i_i64[0];
            if ( v72 == (const char *)-1LL )
            {
              v44 = _mm_load_si128((const __m128i *)v69);
              v50[1] = *(_OWORD *)&v69[16];
              v50[0] = v44;
              v51 = *(_OWORD *)&v69[32];
              v52 = *(_OWORD *)&v69[48];
              v53 = *(_QWORD *)&v69[64];
              v80 = 1;
              v45 = sub_140A25D30(v14, (int)v14 + 24 * (int)v13, v44.m128i_i32[2], *(_DWORD *)&v69[16], (__int64)v62);
              if ( *((_QWORD *)&v51 + 1) && *(_QWORD *)off_14223FF10 >= 2u )
              {
                v55.m128i_i64[0] = *((_QWORD *)&v51 + 1);
                *(_QWORD *)v69 = &v55;
                *(_QWORD *)&v69[8] = sub_1416EBAE0;
                v72 = aCodexmateLibCo_41;
                v73.m256i_i64[0] = 37;
                v73.m256i_i64[1] = (__int64)aCodexmateLibCo_41;
                v73.m256i_i64[2] = 37;
                v73.m256i_i64[3] = (__int64)&off_141A6B768;
                v80 = 1;
                v46 = v45;
                sub_140AF72B0(&unk_141A6B72D, v69, 2, &v72);
                v45 = v46;
              }
              v80 = 0;
              sub_140A79F60(&v72, v50, v45);
              *(_QWORD *)(a1 + 40) = v73.m256i_i64[3];
              v47 = _mm_loadu_si128((const __m128i *)&v72);
              *(_OWORD *)(a1 + 24) = *(_OWORD *)&v73.m256i_u64[1];
              *(__m128i *)(a1 + 8) = v47;
              *(_QWORD *)a1 = -1;
              sub_1400290B0(&v58);
              sub_140779DE0(v62);
              goto LABEL_7;
            }
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v76.m256i_u64[1];
            *(_QWORD *)(a1 + 72) = *(_QWORD *)&v69[64];
            v16 = _mm_load_si128((const __m128i *)v69);
            v17 = *(_OWORD *)&v69[16];
            v18 = *(_OWORD *)&v69[32];
            *(_OWORD *)(a1 + 56) = *(_OWORD *)&v69[48];
            *(_OWORD *)(a1 + 40) = v18;
            *(_OWORD *)(a1 + 24) = v17;
            *(__m128i *)(a1 + 8) = v16;
            *(_QWORD *)a1 = v15;
            v19 = (_QWORD *)(v14 + 8);
            do
            {
              v20 = *(v19 - 1);
              if ( v20 )
                sub_140001660(*v19, v20, 1);
              v19 += 3;
              --v13;
            }
            while ( v13 );
          }
          else
          {
            *(_QWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 8;
            *(_OWORD *)(a1 + 24) = 0;
            *(_QWORD *)(a1 + 40) = 0;
            *(_QWORD *)a1 = -1;
            v14 = v58.m256i_i64[1];
          }
          if ( v58.m256i_i64[0] )
            sub_140001660(v14, 24 * v58.m256i_i64[0], 8);
          HIDWORD(_RAX) = (unsigned __int64)sub_14018F950(v62) >> 32;
          v25 = v63;
          if ( (_QWORD)v63 )
          {
            v26 = v64;
            if ( (_QWORD)v64 )
            {
              v27 = *(_QWORD *)&v62[48];
              v28 = (const __m128i *)(*(_QWORD *)&v62[48] + 16LL);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v62[48]));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v30 = _mm_load_si128(v28);
                    v27 -= 384;
                    ++v28;
                    _R12D = _mm_movemask_epi8(v30) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v31 = -3LL * _RAX;
                v32 = *(_QWORD *)(v27 + 8 * v31 - 24);
                if ( v32 )
                  sub_140001660(*(_QWORD *)(v27 + 8 * v31 - 16), v32, 1);
                --v26;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v26 );
            }
            _RAX = (24 * v25 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v33 = _RAX + v25 + 17;
            if ( v33 )
              sub_140001660(*(_QWORD *)&v62[48] - _RAX, v33, 16);
          }
          v34 = v66;
          if ( (_QWORD)v66 )
          {
            v35 = v67;
            if ( (_QWORD)v67 )
            {
              v36 = si128.m128i_i64[1];
              v37 = (const __m128i *)(si128.m128i_i64[1] + 16);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)si128.m128i_i64[1]));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v39 = _mm_load_si128(v37);
                    v36 -= 384;
                    ++v37;
                    _R12D = _mm_movemask_epi8(v39) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v40 = -3LL * _RAX;
                v41 = *(_QWORD *)(v36 + 8 * v40 - 24);
                if ( v41 )
                  sub_140001660(*(_QWORD *)(v36 + 8 * v40 - 16), v41, 1);
                --v35;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v35 );
            }
            v42 = (24 * v34 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v43 = v42 + v34 + 17;
            if ( v43 )
              sub_140001660(si128.m128i_i64[1] - v42, v43, 16);
          }
        }
        else
        {
          *(__m256i *)(a1 + 64) = v61;
          v21 = _mm_load_si128((const __m128i *)&v58);
          v22 = *(_OWORD *)&v58.m256i_u64[2];
          v23 = v59;
          *(_OWORD *)(a1 + 48) = v60;
          *(_OWORD *)(a1 + 32) = v23;
          *(_OWORD *)(a1 + 16) = v22;
          *(__m128i *)a1 = v21;
          sub_14018F700(&v55);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v71;
        v10 = *(_OWORD *)&v69[56];
        *(_OWORD *)(a1 + 72) = v70;
        *(_OWORD *)(a1 + 56) = v10;
        v11 = _mm_load_si128(&v55);
        v12 = v56;
        *(_OWORD *)(a1 + 40) = v57;
        *(_OWORD *)(a1 + 24) = v12;
        *(__m128i *)(a1 + 8) = v11;
        *(_QWORD *)a1 = v9;
      }
LABEL_7:
      sub_14018FA70(v54);
      return a1;
    }
  }
  *(_QWORD *)(a1 + 88) = v76.m256i_i64[2];
  v5 = v75;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)v76.m256i_i8;
  *(_OWORD *)(a1 + 56) = v5;
  v6 = _mm_load_si128((const __m128i *)v62);
  v7 = *(_OWORD *)&v62[16];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v62[32];
  *(_OWORD *)(a1 + 24) = v7;
  *(__m128i *)(a1 + 8) = v6;
  *(_QWORD *)a1 = v4;
  return a1;
}
