// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb5e30 | successor of pre-update 0x140d98c70 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.929, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EB5E30(__int64 a1, _QWORD *a2, _QWORD *a3)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __m128i *v17; // rdi
  char v18; // al
  _QWORD *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // r14
  __int64 v23; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  char v32; // bl
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  char *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  PVOID v42; // rcx
  char v43; // al
  __int64 v44; // rbx
  __int64 v45; // r14
  const __m128i *v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // r14
  __int128 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rbx
  _QWORD *v57; // r14
  __int64 v58; // rdx
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __int128 v62; // xmm2
  __int128 v63; // xmm3
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // r14
  const __m128i *v67; // r15
  __m128i si128; // xmm0
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rdi
  bool v74; // zf
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rax
  char v77; // al
  PVOID v78; // rcx
  char v79; // al
  int v80; // eax
  __int64 i; // r13
  char v82[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v83; // [rsp+38h] [rbp-48h]
  unsigned __int64 v84; // [rsp+40h] [rbp-40h]
  __m128i v85; // [rsp+48h] [rbp-38h]
  __int64 v86; // [rsp+58h] [rbp-28h]
  __m128i v87; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v88; // [rsp+1C0h] [rbp+140h] BYREF
  __m512i v89; // [rsp+1D0h] [rbp+150h] BYREF
  char v90; // [rsp+31Ch] [rbp+29Ch]
  _OWORD v91[3]; // [rsp+330h] [rbp+2B0h] BYREF
  __m128i v92; // [rsp+360h] [rbp+2E0h] BYREF
  __m128i v93; // [rsp+370h] [rbp+2F0h]
  __int128 v94; // [rsp+380h] [rbp+300h]
  __int128 v95; // [rsp+390h] [rbp+310h]
  __int128 v96; // [rsp+3A0h] [rbp+320h]
  __int128 v97; // [rsp+3B0h] [rbp+330h]
  __m128i v98; // [rsp+3C0h] [rbp+340h] BYREF
  __m128i v99; // [rsp+3D0h] [rbp+350h]
  __int128 v100; // [rsp+3E0h] [rbp+360h]
  PVOID v101; // [rsp+3F0h] [rbp+370h]
  _QWORD *v102; // [rsp+3F8h] [rbp+378h]
  PVOID v103; // [rsp+400h] [rbp+380h]
  PVOID Address; // [rsp+408h] [rbp+388h]
  unsigned int v105; // [rsp+414h] [rbp+394h]
  int v106; // [rsp+418h] [rbp+398h]
  unsigned __int8 v107; // [rsp+41Fh] [rbp+39Fh]
  __int64 v108; // [rsp+420h] [rbp+3A0h]

  v108 = -2;
  v102 = a3;
  v4 = a1;
  v5 = a2[2];
  if ( *(_QWORD *)(v5 + 16) == -1 )
  {
    v9 = a2[4];
    v10 = (char *)(v9 + 16);
    LOBYTE(a1) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 16), 1, 0) )
      sub_141969A30((volatile void *)(v9 + 16));
    v11 = off_142240260;
    if ( 2 * *off_142240260 )
    {
      v12 = sub_14196A710(a1, v5, a3);
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
        nullsub_1(a1, v5);
        v13 = (__m128i *)sub_140001650(40, 1);
        if ( !v13 )
        {
          v105 = v12;
          Address = (PVOID)(v9 + 16);
          sub_14196B2DB(1, 40);
        }
        v17 = v13;
        qmemcpy(&v13[1], "nsition lock is poisoned", 24);
        *v13 = _mm_loadu_si128((const __m128i *)&xmmword_141A9EF8B);
        if ( !(_BYTE)v12 && 2 * *v11 && !(unsigned __int8)sub_14196A710(v15, v14, v16) )
          *(_BYTE *)(v9 + 17) = 1;
        v18 = *v10;
        *v10 = 0;
        if ( v18 == 2 )
          WakeByAddressSingle((PVOID)(v9 + 16));
        *(_QWORD *)(v4 + 8) = 10;
        *(_QWORD *)(v4 + 16) = 40;
        *(_QWORD *)(v4 + 24) = v17;
        *(_QWORD *)(v4 + 32) = 40;
        goto LABEL_13;
      }
    }
    v105 = v12;
    Address = (PVOID)(v9 + 16);
    sub_1408741F0(&v87, a2 + 5, aReorderingRela, 26);
    v27 = v87.m128i_i64[1];
    v26 = v87.m128i_i64[0];
    v28 = (unsigned __int8)v88;
    if ( v87.m128i_i64[0] != -1 )
    {
      *(_OWORD *)(v4 + 88) = *(_OWORD *)&v89.m512i_u64[6];
      v29 = _mm_loadu_si128((const __m128i *)((char *)&v88 + 1));
      v30 = *(_OWORD *)&v89.m512i_i8[1];
      v31 = *(_OWORD *)((char *)&v89.m512i_u64[2] + 1);
      *(_OWORD *)(v4 + 73) = *(_OWORD *)((char *)&v89.m512i_u64[4] + 1);
      *(_OWORD *)(v4 + 57) = v31;
      *(_OWORD *)(v4 + 41) = v30;
      *(__m128i *)(v4 + 25) = v29;
      *(_QWORD *)(v4 + 8) = v26;
      *(_QWORD *)(v4 + 16) = v27;
      *(_BYTE *)(v4 + 24) = v28;
      *(_QWORD *)v4 = -1;
LABEL_70:
      if ( !(_BYTE)v105 && 2 * *v11 && !(unsigned __int8)sub_14196A710(v27, v28, v25) )
        *(_BYTE *)(v9 + 17) = 1;
      v78 = Address;
      v79 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v79 == 2 )
        WakeByAddressSingle(v78);
      goto LABEL_14;
    }
    v107 = v88;
    v103 = (PVOID)v87.m128i_i64[1];
    sub_140EB7850(&v87, a2);
    v32 = v90;
    sub_140292E20(&v87);
    if ( v32 )
    {
      nullsub_1(v34, v33);
      v36 = sub_140001650(107, 1);
      if ( !v36 )
        sub_14196B2DB(1, 107);
      *(_OWORD *)(v36 + 91) = *(__int128 *)((char *)&xmmword_141AA19C0 + 11);
      *(_OWORD *)(v36 + 80) = xmmword_141AA19C0;
      *(_OWORD *)(v36 + 64) = xmmword_141AA19B0;
      *(_OWORD *)(v36 + 48) = xmmword_141AA19A0;
      *(_OWORD *)(v36 + 32) = xmmword_141AA1990;
      *(_OWORD *)(v36 + 16) = xmmword_141AA1980;
      *(__m128i *)v36 = _mm_loadu_si128((const __m128i *)&xmmword_141AA1970);
      *(_QWORD *)(v4 + 8) = 10;
      *(_QWORD *)(v4 + 16) = 107;
      *(_QWORD *)(v4 + 24) = v36;
      *(_QWORD *)(v4 + 32) = 107;
      *(_QWORD *)v4 = -1;
      v37 = (char *)v103;
      if ( (v107 & 1) != 0 )
        goto LABEL_68;
      goto LABEL_67;
    }
    v38 = a2[1];
    LOBYTE(v34) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v38 + 16), 1, 0) )
      sub_141969A30((volatile void *)(v38 + 16));
    if ( 2 * *v11 )
    {
      v80 = sub_14196A710(v34, v33, v35);
      LOBYTE(v80) = v80 ^ 1;
      v106 = v80;
      v101 = (PVOID)(v38 + 16);
      if ( !*(_BYTE *)(v38 + 17) )
        goto LABEL_33;
    }
    else
    {
      v106 = 0;
      v101 = (PVOID)(v38 + 16);
      if ( !*(_BYTE *)(v38 + 17) )
      {
LABEL_33:
        sub_140ED7B40(v82, v38 + 24);
        if ( !(_BYTE)v106 && 2 * *v11 && !(unsigned __int8)sub_14196A710(v40, v39, v41) )
          *(_BYTE *)(v38 + 17) = 1;
        v42 = v101;
        v43 = *(_BYTE *)v101;
        *(_BYTE *)v101 = 0;
        if ( v43 == 2 )
          WakeByAddressSingle(v42);
        v44 = v102[1];
        v45 = v102[2];
        v46 = (const __m128i *)sub_1404D9AA0(0);
        if ( !v46 )
          sub_14196A580(&off_141A6E388);
        v47 = _mm_loadu_si128(v46);
        ++v46->m128i_i64[0];
        v88 = xmmword_141A1CBA0;
        v87 = *(__m128i *)&off_141A1CB90;
        *(__m128i *)v89.m512i_i8 = v47;
        v92.m128i_i64[0] = v44;
        v92.m128i_i64[1] = v44 + 24 * v45;
        v93.m128i_i64[0] = 0;
        sub_140863DC0(&v87, &v92);
        v91[0] = _mm_load_si128(&v87);
        v91[1] = v88;
        v91[2] = *(_OWORD *)v89.m512i_i8;
        v48 = v83;
        v92.m128i_i64[0] = (__int64)v91;
        v87.m128i_i64[0] = (__int64)&v92;
        if ( v84 >= 2 )
        {
          if ( v84 >= 0x15 )
            sub_1401B8910(v83, v84, &v87);
          else
            sub_140CC4BD0(v83, v84, 1, &v87);
        }
        v49 = v85.m128i_i64[1];
        v50 = v86;
        v51 = sub_1416AE140(v48);
        v53 = v51;
        if ( *(_BYTE *)(v51 + 16) == 1 )
        {
          v54 = *(_OWORD *)v51;
        }
        else
        {
          *(_QWORD *)&v54 = sub_1416C5230();
          *(_OWORD *)v53 = v54;
          *(_BYTE *)(v53 + 16) = 1;
        }
        *(_QWORD *)v53 = v54 + 1;
        v88 = xmmword_141A9D670;
        v87 = _mm_loadu_si128((const __m128i *)&off_141A9D660);
        *(_OWORD *)v89.m512i_i8 = v54;
        if ( v50 )
        {
          LOBYTE(v52) = 1;
          sub_141962910(&v87, v50, &v89, v52);
          for ( i = 0; i != v50; ++i )
          {
            sub_1416DB410(&v92, v49 + 24 * i);
            sub_140871180(&v87, &v92);
          }
        }
        v55 = _mm_load_si128(&v87);
        v100 = *(_OWORD *)v89.m512i_i8;
        v99 = (__m128i)v88;
        v98 = v55;
        v87.m128i_i64[0] = v83;
        v87.m128i_i64[1] = v83 + (v84 << 8);
        *(_QWORD *)&v88 = &v98;
        sub_140209BA0(&v92, &v87);
        v11 = off_142240260;
        v56 = v86;
        if ( v86 )
        {
          v57 = (_QWORD *)(v85.m128i_i64[1] + 8);
          do
          {
            v58 = *(v57 - 1);
            if ( v58 )
              sub_140001660(*v57, v58, 1);
            v57 += 3;
            --v56;
          }
          while ( v56 );
        }
        if ( v85.m128i_i64[0] )
          sub_140001660(v85.m128i_i64[1], 24 * v85.m128i_i64[0], 8);
        v86 = v93.m128i_i64[0];
        v85 = _mm_loadu_si128(&v92);
        HIDWORD(_RAX) = (unsigned __int64)sub_140E9EBF0(&v87, a2) >> 32;
        if ( v87.m128i_i32[0] == -1 )
        {
          sub_140ED7B40(&v87, v82);
          HIDWORD(_RAX) = (unsigned __int64)sub_140EB5DA0(&v92, a2, &v87) >> 32;
          if ( v92.m128i_i32[0] == -1 )
          {
            sub_140747530(&v87, v82);
            sub_1419234B0(v4, &v87, 384);
            sub_140190060(&v98);
            sub_1401906C0(v91);
            sub_140292E20(v82);
            sub_14002B980(v103, v107);
            sub_14002B980(Address, v105);
            sub_1400290B0(v102);
            return v4;
          }
          *(_OWORD *)(v4 + 88) = v97;
          *(_OWORD *)(v4 + 72) = v96;
          v60 = _mm_loadu_si128(&v92);
          v61 = v93;
          v62 = v94;
          v63 = v95;
        }
        else
        {
          *(_OWORD *)(v4 + 88) = *(_OWORD *)&v89.m512i_u64[6];
          *(_OWORD *)(v4 + 72) = *(_OWORD *)&v89.m512i_u64[4];
          v60 = _mm_loadu_si128(&v87);
          v61 = (__m128i)v88;
          v62 = *(_OWORD *)v89.m512i_i8;
          v63 = *(_OWORD *)&v89.m512i_u64[2];
        }
        *(_OWORD *)(v4 + 56) = v63;
        *(_OWORD *)(v4 + 40) = v62;
        *(__m128i *)(v4 + 24) = v61;
        *(__m128i *)(v4 + 8) = v60;
        *(_QWORD *)v4 = -1;
        v64 = v98.m128i_i64[1];
        if ( v98.m128i_i64[1] )
        {
          v65 = v99.m128i_i64[1];
          if ( v99.m128i_i64[1] )
          {
            v66 = v98.m128i_i64[0];
            v67 = (const __m128i *)(v98.m128i_i64[0] + 16);
            _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v98.m128i_i64[0]));
            do
            {
              if ( !(_WORD)_R13D )
              {
                do
                {
                  si128 = _mm_load_si128(v67);
                  v66 -= 384;
                  ++v67;
                  _R13D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                }
                while ( !_R13D );
              }
              __asm { tzcnt   eax, r13d }
              v70 = -3 * _RAX;
              v71 = *(_QWORD *)(v66 + 8 * v70 - 24);
              if ( v71 )
                sub_140001660(*(_QWORD *)(v66 + 8 * v70 - 16), v71, 1);
              --v65;
              _RAX = _R13D & (unsigned int)(_R13D - 1);
              _R13D &= _R13D - 1;
            }
            while ( v65 );
          }
          v72 = (24 * v64 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          v73 = v72 + v64;
          v74 = v73 == -17;
          v75 = v73 + 17;
          v11 = off_142240260;
          if ( !v74 )
            sub_140001660(v98.m128i_i64[0] - v72, v75, 16);
        }
        if ( *((_QWORD *)&v91[0] + 1) )
        {
          v76 = (24LL * *((_QWORD *)&v91[0] + 1) + 39) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v76 + *((_QWORD *)&v91[0] + 1) != -17 )
            sub_140001660(*(_QWORD *)&v91[0] - v76, v76 + *((_QWORD *)&v91[0] + 1) + 17, 16);
        }
        sub_140292E20(v82);
        v37 = (char *)v103;
        if ( (v107 & 1) != 0 )
          goto LABEL_68;
LABEL_67:
        if ( 2 * *v11 && !(unsigned __int8)sub_14196A710(v27, v28, v25) )
          v37[1] = 1;
LABEL_68:
        v77 = *v37;
        *v37 = 0;
        if ( v77 == 2 )
          WakeByAddressSingle(v37);
        goto LABEL_70;
      }
    }
    v87.m128i_i64[0] = (__int64)v101;
    v87.m128i_i8[8] = v106;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)&v87,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141AA0C60);
  }
  sub_1416DB410(&v87.m128i_u64[1], v5 + 16);
  v87.m128i_i64[0] = 9;
  *(_OWORD *)(v4 + 88) = *(_OWORD *)&v89.m512i_u64[6];
  v6 = _mm_loadu_si128((const __m128i *)&v88);
  v7 = *(_OWORD *)v89.m512i_i8;
  v8 = *(_OWORD *)&v89.m512i_u64[2];
  *(_OWORD *)(v4 + 72) = *(_OWORD *)&v89.m512i_u64[4];
  *(_OWORD *)(v4 + 56) = v8;
  *(_OWORD *)(v4 + 40) = v7;
  *(__m128i *)(v4 + 24) = v6;
  *(__m128i *)(v4 + 8) = v87;
LABEL_13:
  *(_QWORD *)v4 = -1;
LABEL_14:
  v19 = v102;
  v20 = v102[1];
  v21 = v102[2];
  if ( v21 )
  {
    v22 = (_QWORD *)(v20 + 8);
    do
    {
      v23 = *(v22 - 1);
      if ( v23 )
        sub_140001660(*v22, v23, 1);
      v22 += 3;
      --v21;
    }
    while ( v21 );
  }
  if ( *v19 )
    sub_140001660(v20, 24LL * *v19, 8);
  return v4;
}
