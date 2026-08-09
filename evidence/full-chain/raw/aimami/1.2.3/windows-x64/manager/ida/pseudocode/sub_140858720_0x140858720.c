// addr: 0x140858720
// name (owner-map): sub_140858720
// module: core::relay::manager
// source: IDA remote hexrays decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140858720(__int64 a1, _QWORD *a2, _QWORD *a3)
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
  __m128i *v16; // rdi
  char v17; // al
  _QWORD *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID v37; // rcx
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r14
  __int128 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rbx
  _QWORD *v50; // r14
  __int64 v51; // rdx
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  __int64 v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // r14
  const __m128i *v60; // r15
  __m128i si128; // xmm0
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdi
  bool v67; // zf
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rax
  char *v70; // rdi
  char v71; // al
  PVOID v72; // rcx
  char v73; // al
  int v74; // eax
  __int64 i; // r13
  char v76[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v77; // [rsp+30h] [rbp-50h]
  unsigned __int64 v78; // [rsp+38h] [rbp-48h]
  __m128i v79; // [rsp+40h] [rbp-40h]
  __int64 v80; // [rsp+50h] [rbp-30h]
  __int64 v81; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v82; // [rsp+158h] [rbp+D8h]
  __m128i v83; // [rsp+180h] [rbp+100h] BYREF
  __m128i v84; // [rsp+190h] [rbp+110h]
  __int128 v85; // [rsp+1A0h] [rbp+120h]
  __int128 v86; // [rsp+1B0h] [rbp+130h]
  __int128 v87; // [rsp+1C0h] [rbp+140h]
  __int128 v88; // [rsp+1D0h] [rbp+150h]
  __m128i v89; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v90; // [rsp+1F0h] [rbp+170h] BYREF
  __m512i v91; // [rsp+200h] [rbp+180h] BYREF
  char v92; // [rsp+304h] [rbp+284h]
  __m128i v93; // [rsp+310h] [rbp+290h] BYREF
  __m128i v94; // [rsp+320h] [rbp+2A0h]
  __int128 v95; // [rsp+330h] [rbp+2B0h]
  PVOID v96; // [rsp+340h] [rbp+2C0h]
  _QWORD *v97; // [rsp+348h] [rbp+2C8h]
  PVOID v98; // [rsp+350h] [rbp+2D0h]
  PVOID Address; // [rsp+358h] [rbp+2D8h]
  unsigned int v100; // [rsp+364h] [rbp+2E4h]
  int v101; // [rsp+368h] [rbp+2E8h]
  unsigned __int8 v102; // [rsp+36Fh] [rbp+2EFh]
  __int64 v103; // [rsp+370h] [rbp+2F0h]

  v103 = -2; /*0x14085873b*/
  v97 = a3; /*0x140858746*/
  v4 = a1; /*0x140858750*/
  v5 = a2[2]; /*0x140858753*/
  if ( *(_QWORD *)(v5 + 16) == -1 ) /*0x14085875c*/
  {
    v9 = a2[4]; /*0x1408587ce*/
    v10 = (char *)(v9 + 16); /*0x1408587d2*/
    LOBYTE(a1) = 1; /*0x1408587d7*/
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 16), 1, 0) ) /*0x1408587db*/
      sub_1416C15B0((volatile void *)(v9 + 16)); /*0x14085891a*/
    v11 = off_141EC90B8; /*0x1408587e8*/
    if ( 2 * *off_141EC90B8 ) /*0x1408587f2*/
    {
      v12 = sub_1416C2250(a1, v5); /*0x14085892b*/
      LOBYTE(v12) = v12 ^ 1; /*0x14085892e*/
      if ( *(_BYTE *)(v9 + 17) ) /*0x140858932*/
        goto LABEL_7; /*0x14085893a*/
    }
    else
    {
      v12 = 0; /*0x1408587fe*/
      if ( *(_BYTE *)(v9 + 17) ) /*0x140858801*/
      {
LABEL_7:
        nullsub_1(a1); /*0x14085880f*/
        v13 = (__m128i *)sub_140001650(40, 1); /*0x14085881e*/
        if ( !v13 ) /*0x140858826*/
        {
          v100 = v12; /*0x14085916a*/
          Address = (PVOID)(v9 + 16); /*0x140859171*/
          sub_1416C2D4B(1, 40); /*0x140859182*/
        }
        v16 = v13; /*0x14085882c*/
        qmemcpy(&v13[1], "nsition lock is poisoned", 24); /*0x140858836*/
        *v13 = _mm_loadu_si128((const __m128i *)&xmmword_141795608); /*0x140858842*/
        if ( !(_BYTE)v12 && 2 * *v11 && !(unsigned __int8)sub_1416C2250(v15, v14) ) /*0x140858fda*/
          *(_BYTE *)(v9 + 17) = 1; /*0x140858fe8*/
        v17 = *v10; /*0x14085886a*/
        *v10 = 0; /*0x14085886a*/
        if ( v17 == 2 ) /*0x14085886e*/
          WakeByAddressSingle((PVOID)(v9 + 16)); /*0x140858fcf*/
        *(_QWORD *)(v4 + 8) = 10; /*0x140858874*/
        *(_QWORD *)(v4 + 16) = 40; /*0x14085887c*/
        *(_QWORD *)(v4 + 24) = v16; /*0x140858884*/
        *(_QWORD *)(v4 + 32) = 40; /*0x140858888*/
        goto LABEL_13; /*0x140858888*/
      }
    }
    v100 = v12; /*0x140858940*/
    Address = (PVOID)(v9 + 16); /*0x140858947*/
    lock(&v89, a2 + 5, aReorderingRela, 26); /*0x140858966*/
    v25 = v89.m128i_i64[1]; /*0x140858973*/
    v24 = v89.m128i_i64[0]; /*0x140858973*/
    v26 = (unsigned __int8)v90; /*0x14085897a*/
    if ( v89.m128i_i64[0] != -1 ) /*0x140858985*/
    {
      *(_OWORD *)(v4 + 88) = *(_OWORD *)&v91.m512i_u64[6]; /*0x14085898e*/
      v27 = _mm_loadu_si128((const __m128i *)((char *)&v90 + 1)); /*0x140858992*/
      v28 = *(_OWORD *)&v91.m512i_i8[1]; /*0x14085899a*/
      v29 = *(_OWORD *)((char *)&v91.m512i_u64[2] + 1); /*0x1408589a1*/
      *(_OWORD *)(v4 + 73) = *(_OWORD *)((char *)&v91.m512i_u64[4] + 1); /*0x1408589af*/
      *(_OWORD *)(v4 + 57) = v29; /*0x1408589b3*/
      *(_OWORD *)(v4 + 41) = v28; /*0x1408589b7*/
      *(__m128i *)(v4 + 25) = v27; /*0x1408589bb*/
      *(_QWORD *)(v4 + 8) = v24; /*0x1408589c0*/
      *(_QWORD *)(v4 + 16) = v25; /*0x1408589c4*/
      *(_BYTE *)(v4 + 24) = v26; /*0x1408589c8*/
      *(_QWORD *)v4 = -1; /*0x1408589cb*/
LABEL_69:
      if ( !(_BYTE)v100 && 2 * *v11 && !(unsigned __int8)sub_1416C2250(v25, v26) ) /*0x140858ff3*/
        *(_BYTE *)(v9 + 17) = 1; /*0x140859001*/
      v72 = Address; /*0x140858f2d*/
      v73 = *(_BYTE *)Address; /*0x140858f34*/
      *(_BYTE *)Address = 0; /*0x140858f34*/
      if ( v73 == 2 ) /*0x140858f38*/
        WakeByAddressSingle(v72); /*0x140858f3e*/
      goto LABEL_14; /*0x140858f44*/
    }
    v102 = v90; /*0x1408589d7*/
    v98 = (PVOID)v89.m128i_i64[1]; /*0x1408589dd*/
    sub_14085A1E0((__int64)&v89, (__int64)a2); /*0x1408589ee*/
    if ( v92 ) /*0x1408589fb*/
    {
      sub_140018740(&v89); /*0x140858a08*/
      nullsub_1(v30); /*0x140858a0e*/
      v31 = sub_140001650(107, 1); /*0x140858a1d*/
      if ( !v31 ) /*0x140858a25*/
        sub_1416C2D4B(1, 107); /*0x140859194*/
      *(_OWORD *)(v31 + 91) = *(__int128 *)((char *)&xmmword_141798C00 + 11); /*0x140858a32*/
      *(_OWORD *)(v31 + 80) = xmmword_141798C00; /*0x140858a3d*/
      *(_OWORD *)(v31 + 64) = xmmword_141798BF0; /*0x140858a48*/
      *(_OWORD *)(v31 + 48) = xmmword_141798BE0; /*0x140858a53*/
      *(_OWORD *)(v31 + 32) = xmmword_141798BD0; /*0x140858a5e*/
      *(_OWORD *)(v31 + 16) = xmmword_141798BC0; /*0x140858a69*/
      *(__m128i *)v31 = _mm_loadu_si128((const __m128i *)&xmmword_141798BB0); /*0x140858a75*/
      *(_QWORD *)(v4 + 8) = 10; /*0x140858a79*/
      *(_QWORD *)(v4 + 16) = 107; /*0x140858a81*/
      *(_QWORD *)(v4 + 24) = v31; /*0x140858a89*/
      *(_QWORD *)(v4 + 32) = 107; /*0x140858a8d*/
      *(_QWORD *)v4 = -1; /*0x140858a95*/
LABEL_65:
      v70 = (char *)v98; /*0x140858ee6*/
      if ( (v102 & 1) == 0 && 2 * *v11 && !(unsigned __int8)sub_1416C2250(v25, v26) ) /*0x14085913c*/
        v70[1] = 1; /*0x14085914a*/
      v71 = *v70; /*0x140858f09*/
      *v70 = 0; /*0x140858f09*/
      if ( v71 == 2 ) /*0x140858f0d*/
        WakeByAddressSingle(v70); /*0x14085900f*/
      goto LABEL_69; /*0x14085900f*/
    }
    sub_140018740(&v89); /*0x140858aa8*/
    v33 = a2[1]; /*0x140858aae*/
    LOBYTE(v34) = 1; /*0x140858ab6*/
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v33 + 16), 1, 0) ) /*0x140858aba*/
      sub_1416C15B0((volatile void *)(v33 + 16)); /*0x14085901d*/
    if ( 2 * *v11 ) /*0x140858ac8*/
    {
      v74 = sub_1416C2250(v34, v32); /*0x140859028*/
      LOBYTE(v74) = v74 ^ 1; /*0x140859039*/
      v101 = v74; /*0x14085903b*/
      v96 = (PVOID)(v33 + 16); /*0x140859041*/
      if ( !*(_BYTE *)(v33 + 17) ) /*0x14085904e*/
      {
LABEL_32:
        sub_140892360(v76, v33 + 24); /*0x140858af1*/
        if ( !(_BYTE)v101 && 2 * *v11 && !(unsigned __int8)sub_1416C2250(v36, v35) ) /*0x140859153*/
          *(_BYTE *)(v33 + 17) = 1; /*0x140859161*/
        v37 = v96; /*0x140858b19*/
        v38 = *(_BYTE *)v96; /*0x140858b20*/
        *(_BYTE *)v96 = 0; /*0x140858b20*/
        if ( v38 == 2 ) /*0x140858b24*/
          WakeByAddressSingle(v37); /*0x14085909f*/
        v39 = v97[1] + 24LL * v97[2]; /*0x140858b3d*/
        v89.m128i_i64[0] = v97[1]; /*0x140858b41*/
        v89.m128i_i64[1] = v39; /*0x140858b48*/
        *(_QWORD *)&v90 = 0; /*0x140858b4f*/
        sub_14003B6B0(&v81, &v89); /*0x140858b6b*/
        v40 = v77; /*0x140858b71*/
        v41 = v78; /*0x140858b75*/
        v83.m128i_i64[0] = (__int64)&v81; /*0x140858b79*/
        v89.m128i_i64[0] = (__int64)&v83; /*0x140858b87*/
        if ( v78 >= 2 ) /*0x140858b92*/
        {
          if ( v78 >= 0x15 ) /*0x1408590ae*/
            sub_140B5A1F0(v77, v78, &v89); /*0x1408591a3*/
          else
            sub_1405578C0(v77, v78, 1, &v89); /*0x1408590c1*/
        }
        v42 = v79.m128i_i64[1]; /*0x140858b98*/
        v43 = v80; /*0x140858b9c*/
        v44 = sub_141470CD0(v40, v41); /*0x140858ba0*/
        v46 = v44; /*0x140858ba6*/
        if ( *(_BYTE *)(v44 + 16) == 1 ) /*0x140858bad*/
        {
          v47 = *(_OWORD *)v44; /*0x140858bb3*/
        }
        else
        {
          *(_QWORD *)&v47 = sub_141486EF0(); /*0x1408590cc*/
          *(_OWORD *)v46 = v47; /*0x1408590d2*/
          *(_BYTE *)(v46 + 16) = 1; /*0x1408590d9*/
        }
        *(_QWORD *)v46 = v47 + 1; /*0x140858bbe*/
        v90 = xmmword_1417939D0; /*0x140858bc8*/
        v89 = _mm_loadu_si128((const __m128i *)&off_1417939C0); /*0x140858bd7*/
        *(_OWORD *)v91.m512i_i8 = v47; /*0x140858bdf*/
        if ( v43 ) /*0x140858bf0*/
        {
          LOBYTE(v45) = 1; /*0x1408590f4*/
          sub_1416BA580(&v89, v43, &v91, v45); /*0x1408590f7*/
          for ( i = 0; i != v43; ++i ) /*0x1408590fd*/
          {
            sub_14149C500(&v83, v42 + 24 * i); /*0x140859119*/
            sub_140474440(&v89, &v83); /*0x140859129*/
          }
        }
        v48 = _mm_load_si128(&v89); /*0x140858bf6*/
        v95 = *(_OWORD *)v91.m512i_i8; /*0x140858c0c*/
        v94 = (__m128i)v90; /*0x140858c21*/
        v93 = v48; /*0x140858c28*/
        v89.m128i_i64[0] = v77; /*0x140858c3f*/
        v89.m128i_i64[1] = v77 + 232 * v78; /*0x140858c46*/
        *(_QWORD *)&v90 = &v93; /*0x140858c54*/
        sub_140312A50(&v83, &v89); /*0x140858c69*/
        v11 = off_141EC90B8; /*0x140858c6f*/
        v49 = v80; /*0x140858c76*/
        if ( v80 ) /*0x140858c7d*/
        {
          v50 = (_QWORD *)(v79.m128i_i64[1] + 8); /*0x140858c83*/
          do /*0x140858c97*/
          {
            v51 = *(v50 - 1); /*0x140858c99*/
            if ( v51 ) /*0x140858ca0*/
              sub_140001660(*v50, v51, 1); /*0x140858cab*/
            v50 += 3; /*0x140858c90*/
            --v49; /*0x140858c94*/
          }
          while ( v49 ); /*0x140858c97*/
        }
        if ( v79.m128i_i64[0] ) /*0x140858cbd*/
          sub_140001660(v79.m128i_i64[1], 24 * v79.m128i_i64[0], 8); /*0x140858cd1*/
        v80 = v84.m128i_i64[0]; /*0x140858cdd*/
        v79 = _mm_loadu_si128(&v83); /*0x140858ce9*/
        HIDWORD(_RAX) = (unsigned __int64)sub_140846F90(&v89, a2) >> 32; /*0x140858cf7*/
        if ( v89.m128i_i32[0] == -1 ) /*0x140858d04*/
        {
          sub_140892360(&v89, v76); /*0x140858d46*/
          HIDWORD(_RAX) = (unsigned __int64)sub_1408582D0((__int64)&v83, a2, (__int64)&v89) >> 32; /*0x140858d5d*/
          if ( v83.m128i_i32[0] == -1 ) /*0x140858d6a*/
          {
            sub_1404D4A90(&v89, v76); /*0x140858f54*/
            sub_141684120(v4, &v89, 296); /*0x140858f6a*/
            sub_14067FFB0(&v93); /*0x140858f77*/
            sub_140680B00(&v81); /*0x140858f84*/
            sub_140018740(v76); /*0x140858f8e*/
            sub_14000E270(v98, v102); /*0x140858fa2*/
            sub_14000E270(Address, v100); /*0x140858fb5*/
            sub_140009B20(v97); /*0x140858fc2*/
            return v4; /*0x140858fc7*/
          }
          *(_OWORD *)(v4 + 88) = v88; /*0x140858d77*/
          *(_OWORD *)(v4 + 72) = v87; /*0x140858d82*/
          v53 = _mm_loadu_si128(&v83); /*0x140858d86*/
          v54 = v84; /*0x140858d8e*/
          v55 = v85; /*0x140858d95*/
          v56 = v86; /*0x140858d9c*/
        }
        else
        {
          *(_OWORD *)(v4 + 88) = *(_OWORD *)&v91.m512i_u64[6]; /*0x140858d0d*/
          *(_OWORD *)(v4 + 72) = *(_OWORD *)&v91.m512i_u64[4]; /*0x140858d18*/
          v53 = _mm_loadu_si128(&v89); /*0x140858d1c*/
          v54 = (__m128i)v90; /*0x140858d24*/
          v55 = *(_OWORD *)v91.m512i_i8; /*0x140858d2b*/
          v56 = *(_OWORD *)&v91.m512i_u64[2]; /*0x140858d32*/
        }
        *(_OWORD *)(v4 + 56) = v56; /*0x140858da3*/
        *(_OWORD *)(v4 + 40) = v55; /*0x140858da7*/
        *(__m128i *)(v4 + 24) = v54; /*0x140858dab*/
        *(__m128i *)(v4 + 8) = v53; /*0x140858daf*/
        *(_QWORD *)v4 = -1; /*0x140858db4*/
        v57 = v93.m128i_i64[1]; /*0x140858dbb*/
        if ( v93.m128i_i64[1] ) /*0x140858dc5*/
        {
          v58 = v94.m128i_i64[1]; /*0x140858dcb*/
          if ( v94.m128i_i64[1] ) /*0x140858dd5*/
          {
            v59 = v93.m128i_i64[0]; /*0x140858ddb*/
            v60 = (const __m128i *)(v93.m128i_i64[0] + 16); /*0x140858de7*/
            _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v93.m128i_i64[0])); /*0x140858df0*/
            do /*0x140858e10*/
            {
              if ( !(_WORD)_R13D ) /*0x140858e16*/
              {
                do /*0x140858e3c*/
                {
                  si128 = _mm_load_si128(v60); /*0x140858e20*/
                  v59 -= 384; /*0x140858e25*/
                  ++v60; /*0x140858e2c*/
                  _R13D = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x140858e35*/
                }
                while ( !_R13D ); /*0x140858e3c*/
              }
              __asm { tzcnt eax, r13d } /*0x140858e3e*/
              v63 = -3 * _RAX; /*0x140858e46*/
              v64 = *(_QWORD *)(v59 + 8 * v63 - 24); /*0x140858e4a*/
              if ( v64 ) /*0x140858e52*/
                sub_140001660(*(_QWORD *)(v59 + 8 * v63 - 16), v64, 1); /*0x140858e62*/
              --v58; /*0x140858e00*/
              _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x140858e07*/
              _R13D &= _R13D - 1; /*0x140858e0a*/
            }
            while ( v58 ); /*0x140858e10*/
          }
          v65 = (24 * v57 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x140858e75*/
          v66 = v65 + v57; /*0x140858e79*/
          v67 = v66 == -17; /*0x140858e7c*/
          v68 = v66 + 17; /*0x140858e7c*/
          v11 = off_141EC90B8; /*0x140858e80*/
          if ( !v67 ) /*0x140858e87*/
            sub_140001660(v93.m128i_i64[0] - v65, v68, 16); /*0x140858e9c*/
        }
        if ( v82 ) /*0x140858eab*/
        {
          v69 = (24 * v82 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x140858eb9*/
          if ( v69 + v82 != -17 ) /*0x140858ec4*/
            sub_140001660(v81 - v69, v69 + v82 + 17, 16); /*0x140858ed6*/
        }
        sub_140018740(v76); /*0x140858ee0*/
        goto LABEL_65; /*0x140858ee0*/
      }
    }
    else
    {
      v101 = 0; /*0x140858ad4*/
      v96 = (PVOID)(v33 + 16); /*0x140858ade*/
      if ( !*(_BYTE *)(v33 + 17) ) /*0x140858ae5*/
        goto LABEL_32; /*0x140858aeb*/
    }
    v89.m128i_i64[0] = (__int64)v96; /*0x14085905b*/
    v89.m128i_i8[8] = v101; /*0x140859068*/
    sub_1416C3060( /*0x140859094*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v89,
      (unsigned int)&off_141796230,
      (__int64)&off_141797E10);
  }
  sub_14149C500(&v89.m128i_u64[1], v5 + 16); /*0x140858769*/
  v89.m128i_i64[0] = 9; /*0x14085876f*/
  *(_OWORD *)(v4 + 88) = *(_OWORD *)&v91.m512i_u64[6]; /*0x140858781*/
  v6 = _mm_loadu_si128((const __m128i *)&v90); /*0x140858785*/
  v7 = *(_OWORD *)v91.m512i_i8; /*0x14085878d*/
  v8 = *(_OWORD *)&v91.m512i_u64[2]; /*0x140858794*/
  *(_OWORD *)(v4 + 72) = *(_OWORD *)&v91.m512i_u64[4]; /*0x1408587a2*/
  *(_OWORD *)(v4 + 56) = v8; /*0x1408587a6*/
  *(_OWORD *)(v4 + 40) = v7; /*0x1408587aa*/
  *(__m128i *)(v4 + 24) = v6; /*0x1408587ae*/
  *(__m128i *)(v4 + 8) = v89; /*0x1408587ba*/
LABEL_13:
  *(_QWORD *)v4 = -1; /*0x140858890*/
LABEL_14:
  v18 = v97; /*0x140858897*/
  v19 = v97[1]; /*0x14085889e*/
  v20 = v97[2]; /*0x1408588a2*/
  if ( v20 ) /*0x1408588a9*/
  {
    v21 = (_QWORD *)(v19 + 8); /*0x1408588ab*/
    do /*0x1408588c7*/
    {
      v22 = *(v21 - 1); /*0x1408588c9*/
      if ( v22 ) /*0x1408588d0*/
        sub_140001660(*v21, v22, 1); /*0x1408588db*/
      v21 += 3; /*0x1408588c0*/
      --v20; /*0x1408588c4*/
    }
    while ( v20 ); /*0x1408588c7*/
  }
  if ( *v18 ) /*0x1408588e2*/
    sub_140001660(v19, 24LL * *v18, 8); /*0x1408588fb*/
  return v4; /*0x140858903*/
}

// --- refs ---
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x141795608  xmmword_141795608
// 0x1416c1670  WakeByAddressSingle
// 0x1403b7e80  lock
// 0x141797df0  aReorderingRela  // string: "reordering relay providers"
// 0x14085a1e0  sub_14085A1E0
// 0x140018740  sub_140018740
// 0x141798c00  xmmword_141798C00
// 0x141798bf0  xmmword_141798BF0
// 0x141798be0  xmmword_141798BE0
// 0x141798bd0  xmmword_141798BD0
// 0x141798bc0  xmmword_141798BC0
// 0x141798bb0  xmmword_141798BB0
// 0x140892360  sub_140892360
// 0x14003b6b0  sub_14003B6B0
// 0x140b5a1f0  sub_140B5A1F0
// 0x1405578c0  sub_1405578C0
// 0x141470cd0  sub_141470CD0
// 0x141486ef0  sub_141486EF0
// 0x1417939d0  xmmword_1417939D0
// 0x1417939c0  off_1417939C0
// 0x1416ba580  sub_1416BA580
// 0x14149c500  sub_14149C500
// 0x140474440  sub_140474440
// 0x140312a50  sub_140312A50
// 0x140001660  sub_140001660
// 0x140846f90  sub_140846F90
// 0x1408582d0  sub_1408582D0
// 0x1404d4a90  sub_1404D4A90
// 0x141684120  sub_141684120
// 0x14067ffb0  sub_14067FFB0
// 0x140680b00  sub_140680B00
// 0x14000e270  sub_14000E270
// 0x140009b20  sub_140009B20
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141797e10  off_141797E10
