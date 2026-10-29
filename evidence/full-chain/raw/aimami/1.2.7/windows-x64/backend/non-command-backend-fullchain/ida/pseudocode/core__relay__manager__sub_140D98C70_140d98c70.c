// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d98c70 | name sub_140D98C70
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D98C70(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // r12
  char *v10; // rbx
  __int64 *v11; // r15
  unsigned int v12; // r14d
  __m128i *v13; // rax
  __int64 v14; // rcx
  __m128i *v15; // rdi
  char v16; // al
  _QWORD *v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // r14
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int8 v25; // dl
  __m128i v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  PVOID v34; // rcx
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r14
  __int128 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rbx
  _QWORD *v49; // r14
  __int64 v50; // rdx
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm3
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // r14
  const __m128i *v59; // r15
  __m128i si128; // xmm0
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdi
  bool v66; // zf
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rax
  char *v69; // rdi
  char v70; // al
  PVOID v71; // rcx
  char v72; // al
  int v73; // eax
  __int64 i; // r13
  char v75[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v76; // [rsp+38h] [rbp-48h]
  unsigned __int64 v77; // [rsp+40h] [rbp-40h]
  __m128i v78; // [rsp+48h] [rbp-38h]
  __int64 v79; // [rsp+58h] [rbp-28h]
  __int64 v80; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v81; // [rsp+1B8h] [rbp+138h]
  __m128i v82; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v83; // [rsp+1F0h] [rbp+170h]
  __int128 v84; // [rsp+200h] [rbp+180h]
  __int128 v85; // [rsp+210h] [rbp+190h]
  __int128 v86; // [rsp+220h] [rbp+1A0h]
  __int128 v87; // [rsp+230h] [rbp+1B0h]
  __m128i v88; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v89; // [rsp+250h] [rbp+1D0h] BYREF
  __m512i v90; // [rsp+260h] [rbp+1E0h] BYREF
  char v91; // [rsp+3ACh] [rbp+32Ch]
  __m128i v92; // [rsp+3C0h] [rbp+340h] BYREF
  __m128i v93; // [rsp+3D0h] [rbp+350h]
  __int128 v94; // [rsp+3E0h] [rbp+360h]
  PVOID v95; // [rsp+3F0h] [rbp+370h]
  _QWORD *v96; // [rsp+3F8h] [rbp+378h]
  PVOID v97; // [rsp+400h] [rbp+380h]
  PVOID Address; // [rsp+408h] [rbp+388h]
  unsigned int v99; // [rsp+414h] [rbp+394h]
  int v100; // [rsp+418h] [rbp+398h]
  unsigned __int8 v101; // [rsp+41Fh] [rbp+39Fh]
  __int64 v102; // [rsp+420h] [rbp+3A0h]

  v102 = -2;
  v96 = a3;
  v4 = a1;
  v5 = a2[2];
  if ( *(_QWORD *)(v5 + 16) == -1 )
  {
    v9 = a2[4];
    v10 = (char *)(v9 + 16);
    LOBYTE(a1) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 16), 1, 0) )
      sub_141937480((volatile void *)(v9 + 16));
    v11 = off_1421E7210;
    if ( 2 * *off_1421E7210 )
    {
      v12 = sub_141938160(a1);
      LOBYTE(v12) = v12 ^ 1;
      if ( *(_BYTE *)(v9 + 17) )
        goto LABEL_7;
    }
    else
    {
      v12 = 0;
      if ( *(_BYTE *)(v9 + 17) )
      {
LABEL_7:
        nullsub_1(a1);
        v13 = (__m128i *)sub_140001650(40, 1);
        if ( !v13 )
        {
          v99 = v12;
          Address = (PVOID)(v9 + 16);
          sub_141938D2B(1, 40);
        }
        v15 = v13;
        qmemcpy(&v13[1], "nsition lock is poisoned", 24);
        *v13 = _mm_loadu_si128((const __m128i *)&xmmword_141A47A11);
        if ( !(_BYTE)v12 && 2 * *v11 && !(unsigned __int8)sub_141938160(v14) )
          *(_BYTE *)(v9 + 17) = 1;
        v16 = *v10;
        *v10 = 0;
        if ( v16 == 2 )
          WakeByAddressSingle((PVOID)(v9 + 16));
        *(_QWORD *)(v4 + 8) = 10;
        *(_QWORD *)(v4 + 16) = 40;
        *(_QWORD *)(v4 + 24) = v15;
        *(_QWORD *)(v4 + 32) = 40;
        goto LABEL_13;
      }
    }
    v99 = v12;
    Address = (PVOID)(v9 + 16);
    sub_140DA5500(&v88, a2 + 5, aReorderingRela, 26);
    v24 = v88.m128i_i64[1];
    v23 = v88.m128i_i64[0];
    v25 = v89;
    if ( v88.m128i_i64[0] != -1 )
    {
      *(_OWORD *)(v4 + 88) = *(_OWORD *)&v90.m512i_u64[6];
      v26 = _mm_loadu_si128((const __m128i *)((char *)&v89 + 1));
      v27 = *(_OWORD *)&v90.m512i_i8[1];
      v28 = *(_OWORD *)((char *)&v90.m512i_u64[2] + 1);
      *(_OWORD *)(v4 + 73) = *(_OWORD *)((char *)&v90.m512i_u64[4] + 1);
      *(_OWORD *)(v4 + 57) = v28;
      *(_OWORD *)(v4 + 41) = v27;
      *(__m128i *)(v4 + 25) = v26;
      *(_QWORD *)(v4 + 8) = v23;
      *(_QWORD *)(v4 + 16) = v24;
      *(_BYTE *)(v4 + 24) = v25;
      *(_QWORD *)v4 = -1;
LABEL_69:
      if ( !(_BYTE)v99 && 2 * *v11 && !(unsigned __int8)sub_141938160(v24) )
        *(_BYTE *)(v9 + 17) = 1;
      v71 = Address;
      v72 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v72 == 2 )
        WakeByAddressSingle(v71);
      goto LABEL_14;
    }
    v101 = v89;
    v97 = (PVOID)v88.m128i_i64[1];
    sub_140D9A5F0(&v88, a2);
    if ( v91 )
    {
      sub_1407ADB20(&v88);
      nullsub_1(v29);
      v30 = sub_140001650(107, 1);
      if ( !v30 )
        sub_141938D2B(1, 107);
      *(_OWORD *)(v30 + 91) = *(__int128 *)((char *)&xmmword_141A4E29B + 11);
      *(_OWORD *)(v30 + 80) = xmmword_141A4E29B;
      *(_OWORD *)(v30 + 64) = xmmword_141A4E28B;
      *(_OWORD *)(v30 + 48) = xmmword_141A4E27B;
      *(_OWORD *)(v30 + 32) = xmmword_141A4E26B;
      *(_OWORD *)(v30 + 16) = xmmword_141A4E25B;
      *(__m128i *)v30 = _mm_loadu_si128((const __m128i *)&xmmword_141A4E24B);
      *(_QWORD *)(v4 + 8) = 10;
      *(_QWORD *)(v4 + 16) = 107;
      *(_QWORD *)(v4 + 24) = v30;
      *(_QWORD *)(v4 + 32) = 107;
      *(_QWORD *)v4 = -1;
LABEL_65:
      v69 = (char *)v97;
      if ( (v101 & 1) == 0 && 2 * *v11 && !(unsigned __int8)sub_141938160(v24) )
        v69[1] = 1;
      v70 = *v69;
      *v69 = 0;
      if ( v70 == 2 )
        WakeByAddressSingle(v69);
      goto LABEL_69;
    }
    sub_1407ADB20(&v88);
    v31 = a2[1];
    LOBYTE(v32) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v31 + 16), 1, 0) )
      sub_141937480((volatile void *)(v31 + 16));
    if ( 2 * *v11 )
    {
      v73 = sub_141938160(v32);
      LOBYTE(v73) = v73 ^ 1;
      v100 = v73;
      v95 = (PVOID)(v31 + 16);
      if ( !*(_BYTE *)(v31 + 17) )
      {
LABEL_32:
        sub_140DCB2E0(v75, v31 + 24);
        if ( !(_BYTE)v100 && 2 * *v11 && !(unsigned __int8)sub_141938160(v33) )
          *(_BYTE *)(v31 + 17) = 1;
        v34 = v95;
        v35 = *(_BYTE *)v95;
        *(_BYTE *)v95 = 0;
        if ( v35 == 2 )
          WakeByAddressSingle(v34);
        v36 = v96[1] + 24LL * v96[2];
        v88.m128i_i64[0] = v96[1];
        v88.m128i_i64[1] = v36;
        *(_QWORD *)&v89 = 0;
        sub_140E16430(&v80, &v88);
        v37 = v76;
        v82.m128i_i64[0] = (__int64)&v80;
        v88.m128i_i64[0] = (__int64)&v82;
        if ( v77 >= 2 )
        {
          if ( v77 >= 0x15 )
            sub_14065CEF0(v76, v77, &v88);
          else
            sub_140E011C0(v76, v77, 1, &v88);
        }
        v38 = v78.m128i_i64[1];
        v39 = v79;
        v40 = sub_14167F170(v37);
        v45 = v40;
        if ( *(_BYTE *)(v40 + 16) == 1 )
        {
          v46 = *(_OWORD *)v40;
        }
        else
        {
          *(_QWORD *)&v46 = sub_141696260(v42, v41, v43, v44);
          *(_OWORD *)v45 = v46;
          *(_BYTE *)(v45 + 16) = 1;
        }
        *(_QWORD *)v45 = v46 + 1;
        v89 = xmmword_141A43480;
        v88 = _mm_loadu_si128((const __m128i *)&off_141A43470);
        *(_OWORD *)v90.m512i_i8 = v46;
        if ( v39 )
        {
          LOBYTE(v44) = 1;
          sub_141930360(&v88, v39, &v90, v44);
          for ( i = 0; i != v39; ++i )
          {
            sub_1416AC440(&v82, v38 + 24 * i);
            sub_1403AAB80(&v88, &v82);
          }
        }
        v47 = _mm_load_si128(&v88);
        v94 = *(_OWORD *)v90.m512i_i8;
        v93 = (__m128i)v89;
        v92 = v47;
        v88.m128i_i64[0] = v76;
        v88.m128i_i64[1] = v76 + (v77 << 8);
        *(_QWORD *)&v89 = &v92;
        sub_1403D3440(&v82, &v88);
        v11 = off_1421E7210;
        v48 = v79;
        if ( v79 )
        {
          v49 = (_QWORD *)(v78.m128i_i64[1] + 8);
          do
          {
            v50 = *(v49 - 1);
            if ( v50 )
              sub_140001660(*v49, v50, 1);
            v49 += 3;
            --v48;
          }
          while ( v48 );
        }
        if ( v78.m128i_i64[0] )
          sub_140001660(v78.m128i_i64[1], 24 * v78.m128i_i64[0], 8);
        v79 = v83.m128i_i64[0];
        v78 = _mm_loadu_si128(&v82);
        HIDWORD(_RAX) = (unsigned __int64)sub_140D82100(&v88, a2) >> 32;
        if ( v88.m128i_i32[0] == -1 )
        {
          sub_140DCB2E0(&v88, v75);
          HIDWORD(_RAX) = (unsigned __int64)sub_140D98BE0(&v82, a2, &v88) >> 32;
          if ( v82.m128i_i32[0] == -1 )
          {
            sub_140F6F6F0(&v88, v75);
            sub_1418F44E0((__m128i *)v4, &v88, 0x180u);
            sub_140370B80(&v92);
            sub_140371380(&v80);
            sub_1407ADB20(v75);
            sub_140028CC0(v97, v101);
            sub_140028CC0(Address, v99);
            sub_140025530(v96);
            return v4;
          }
          *(_OWORD *)(v4 + 88) = v87;
          *(_OWORD *)(v4 + 72) = v86;
          v52 = _mm_loadu_si128(&v82);
          v53 = v83;
          v54 = v84;
          v55 = v85;
        }
        else
        {
          *(_OWORD *)(v4 + 88) = *(_OWORD *)&v90.m512i_u64[6];
          *(_OWORD *)(v4 + 72) = *(_OWORD *)&v90.m512i_u64[4];
          v52 = _mm_loadu_si128(&v88);
          v53 = (__m128i)v89;
          v54 = *(_OWORD *)v90.m512i_i8;
          v55 = *(_OWORD *)&v90.m512i_u64[2];
        }
        *(_OWORD *)(v4 + 56) = v55;
        *(_OWORD *)(v4 + 40) = v54;
        *(__m128i *)(v4 + 24) = v53;
        *(__m128i *)(v4 + 8) = v52;
        *(_QWORD *)v4 = -1;
        v56 = v92.m128i_i64[1];
        if ( v92.m128i_i64[1] )
        {
          v57 = v93.m128i_i64[1];
          if ( v93.m128i_i64[1] )
          {
            v58 = v92.m128i_i64[0];
            v59 = (const __m128i *)(v92.m128i_i64[0] + 16);
            _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v92.m128i_i64[0]));
            do
            {
              if ( !(_WORD)_R13D )
              {
                do
                {
                  si128 = _mm_load_si128(v59);
                  v58 -= 384;
                  ++v59;
                  _R13D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                }
                while ( !_R13D );
              }
              __asm { tzcnt   eax, r13d }
              v62 = -3 * _RAX;
              v63 = *(_QWORD *)(v58 + 8 * v62 - 24);
              if ( v63 )
                sub_140001660(*(_QWORD *)(v58 + 8 * v62 - 16), v63, 1);
              --v57;
              _RAX = _R13D & (unsigned int)(_R13D - 1);
              _R13D &= _R13D - 1;
            }
            while ( v57 );
          }
          v64 = (24 * v56 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v65 = v64 + v56;
          v66 = v65 == -17;
          v67 = v65 + 17;
          v11 = off_1421E7210;
          if ( !v66 )
            sub_140001660(v92.m128i_i64[0] - v64, v67, 16);
        }
        if ( v81 )
        {
          v68 = (24 * v81 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v68 + v81 != -17 )
            sub_140001660(v80 - v68, v68 + v81 + 17, 16);
        }
        sub_1407ADB20(v75);
        goto LABEL_65;
      }
    }
    else
    {
      v100 = 0;
      v95 = (PVOID)(v31 + 16);
      if ( !*(_BYTE *)(v31 + 17) )
        goto LABEL_32;
    }
    v88.m128i_i64[0] = (__int64)v95;
    v88.m128i_i8[8] = v100;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v88,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4B878);
  }
  sub_1416AC440(&v88.m128i_u64[1], v5 + 16);
  v88.m128i_i64[0] = 9;
  *(_OWORD *)(v4 + 88) = *(_OWORD *)&v90.m512i_u64[6];
  v6 = _mm_loadu_si128((const __m128i *)&v89);
  v7 = *(_OWORD *)v90.m512i_i8;
  v8 = *(_OWORD *)&v90.m512i_u64[2];
  *(_OWORD *)(v4 + 72) = *(_OWORD *)&v90.m512i_u64[4];
  *(_OWORD *)(v4 + 56) = v8;
  *(_OWORD *)(v4 + 40) = v7;
  *(__m128i *)(v4 + 24) = v6;
  *(__m128i *)(v4 + 8) = v88;
LABEL_13:
  *(_QWORD *)v4 = -1;
LABEL_14:
  v17 = v96;
  v18 = v96[1];
  v19 = v96[2];
  if ( v19 )
  {
    v20 = (_QWORD *)(v18 + 8);
    do
    {
      v21 = *(v20 - 1);
      if ( v21 )
        sub_140001660(*v20, v21, 1);
      v20 += 3;
      --v19;
    }
    while ( v19 );
  }
  if ( *v17 )
    sub_140001660(v18, 24LL * *v17, 8);
  return v4;
}
