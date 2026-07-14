// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1006a2c70 depth=2
void __fastcall core::slice::sort::stable::drift::sort::h1d0ca050d4c5d8d1(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  int v19; // r8d
  _BOOL4 v20; // r11d
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int128 *v23; // rsi
  __int128 *v24; // rdi
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  __int128 v38; // xmm0
  __int128 v39; // xmm0
  __int64 v40; // r9
  _DWORD *v41; // r9
  unsigned __int64 v42; // r10
  int v43; // r11d
  bool v44; // bl
  bool v45; // r10
  _DWORD *v46; // r9
  unsigned __int64 v47; // r10
  int v48; // r11d
  bool v49; // bl
  bool v50; // r10
  char v51; // dl
  unsigned __int64 v52; // rdx
  char *v53; // rdi
  _DWORD *v54; // rsi
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rbx
  char *v59; // r9
  unsigned __int64 v60; // r8
  int v61; // edi
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // rax
  char *v66; // r12
  __int64 v67; // r13
  char *v68; // r14
  char *v69; // r13
  char *v70; // rbx
  int v71; // ecx
  bool v72; // r15
  char *v73; // rsi
  _DWORD *v74; // rbx
  int v75; // ecx
  bool v76; // r15
  unsigned __int64 v77; // r8
  _QWORD v78[75]; // [rsp+8h] [rbp-328h]
  char *v79; // [rsp+260h] [rbp-D0h]
  unsigned __int64 v80; // [rsp+268h] [rbp-C8h]
  unsigned __int64 v81; // [rsp+270h] [rbp-C0h]
  void *__dst; // [rsp+278h] [rbp-B8h]
  unsigned __int64 v83; // [rsp+280h] [rbp-B0h]
  __int64 v84; // [rsp+288h] [rbp-A8h]
  __int64 v85; // [rsp+290h] [rbp-A0h]
  __int64 v86; // [rsp+298h] [rbp-98h]
  __int64 v87; // [rsp+2A0h] [rbp-90h]
  int v88; // [rsp+2ACh] [rbp-84h]
  unsigned __int64 v89; // [rsp+2B0h] [rbp-80h]
  __int64 v90; // [rsp+2B8h] [rbp-78h]
  unsigned __int64 v91; // [rsp+2C0h] [rbp-70h]
  unsigned __int64 v92; // [rsp+2C8h] [rbp-68h]
  __int64 v93; // [rsp+2D0h] [rbp-60h]
  unsigned __int64 v94; // [rsp+2D8h] [rbp-58h]
  unsigned __int64 v95; // [rsp+2E0h] [rbp-50h]
  __int64 v96; // [rsp+2E8h] [rbp-48h]
  unsigned __int64 v97; // [rsp+2F0h] [rbp-40h]
  void *v98; // [rsp+2F8h] [rbp-38h]
  void *__src; // [rsp+300h] [rbp-30h]

  v93 = a6; /*0x1006a2c84*/
  v88 = a5; /*0x1006a2c88*/
  v96 = a1; /*0x1006a2c8f*/
  if ( a2 < 2 ) /*0x1006a2c97*/
    return; /*0x1006a2c97*/
  __src = a3; /*0x1006a2c9d*/
  v83 = 0x4000000000000000LL / a2 - ((0x4000000000000000LL % a2 == 0) - 1LL); /*0x1006a2cb8*/
  v91 = a2; /*0x1006a2cc6*/
  if ( a2 >= 0x1001 ) /*0x1006a2cca*/
  {
    v7 = a4; /*0x1006a2cea*/
    v6 = core::slice::sort::stable::drift::sqrt_approx::h1ec57ad8b40c89a5(a2); /*0x1006a2ced*/
    a4 = v7; /*0x1006a2cf2*/
  }
  else
  {
    v6 = 64; /*0x1006a2cdc*/
    if ( a2 - (a2 >> 1) < 0x40 ) /*0x1006a2ce1*/
      v6 = a2 - (a2 >> 1); /*0x1006a2ce1*/
  }
  v94 = v6; /*0x1006a2cf5*/
  v87 = v96 + 712; /*0x1006a2d04*/
  v85 = v96 + 224; /*0x1006a2d12*/
  v86 = v96 - 16; /*0x1006a2d1d*/
  v84 = v96 - 240; /*0x1006a2d2a*/
  v8 = 1; /*0x1006a2d31*/
  v9 = 0; /*0x1006a2d37*/
  v10 = 0; /*0x1006a2d3a*/
  v81 = a4; /*0x1006a2d3d*/
  v11 = v91; /*0x1006a2d48*/
LABEL_11:
  v14 = 240 * v9; /*0x1006a2d80*/
  v15 = v96 + 240 * v9; /*0x1006a2d8b*/
  if ( v11 < v94 ) /*0x1006a2d93*/
    goto LABEL_12; /*0x1006a2d93*/
  if ( v11 >= 2 ) /*0x1006a2de4*/
  {
    v18 = *(_QWORD *)(v15 + 240); /*0x1006a2e10*/
    v19 = *(_DWORD *)(v15 + 472); /*0x1006a2e17*/
    v20 = *(_DWORD *)(v15 + 232) < v19; /*0x1006a2e30*/
    if ( *(_DWORD *)(v15 + 232) == v19 ) /*0x1006a2e34*/
      v20 = v18 < *(_QWORD *)v15; /*0x1006a2e34*/
    if ( v20 ) /*0x1006a2e3e*/
    {
      if ( v11 == 2 ) /*0x1006a2e48*/
      {
        v21 = 2; /*0x1006a2e4e*/
        v22 = 1; /*0x1006a2e53*/
        goto LABEL_26; /*0x1006a2e53*/
      }
      LODWORD(v98) = v20; /*0x1006a3040*/
      v97 = v10; /*0x1006a3044*/
      v46 = (_DWORD *)(v87 + v14); /*0x1006a304f*/
      v21 = 2; /*0x1006a3053*/
      while ( 1 ) /*0x1006a3060*/
      {
        v47 = v18; /*0x1006a3060*/
        v48 = v19; /*0x1006a3063*/
        v18 = *((_QWORD *)v46 - 29); /*0x1006a3066*/
        v19 = *v46; /*0x1006a306d*/
        v49 = v18 < v47; /*0x1006a3075*/
        v50 = v48 < *v46; /*0x1006a307e*/
        if ( v48 == *v46 ) /*0x1006a3082*/
          v50 = v49; /*0x1006a3082*/
        if ( !v50 ) /*0x1006a308a*/
          break; /*0x1006a308a*/
        ++v21; /*0x1006a308c*/
        v46 += 60; /*0x1006a308f*/
        if ( v11 == v21 ) /*0x1006a3099*/
          goto LABEL_41; /*0x1006a3099*/
      }
    }
    else
    {
      v40 = 2; /*0x1006a2fd0*/
      if ( v11 == 2 ) /*0x1006a2fda*/
        goto LABEL_48; /*0x1006a2fda*/
      LODWORD(v98) = v20; /*0x1006a2fe0*/
      v97 = v10; /*0x1006a2fe4*/
      v41 = (_DWORD *)(v87 + v14); /*0x1006a2fef*/
      v21 = 2; /*0x1006a2ff3*/
      while ( 1 ) /*0x1006a3000*/
      {
        v42 = v18; /*0x1006a3000*/
        v43 = v19; /*0x1006a3003*/
        v18 = *((_QWORD *)v41 - 29); /*0x1006a3006*/
        v19 = *v41; /*0x1006a300d*/
        v44 = v18 < v42; /*0x1006a3015*/
        v45 = v43 < *v41; /*0x1006a301e*/
        if ( v43 == *v41 ) /*0x1006a3022*/
          v45 = v44; /*0x1006a3022*/
        if ( v45 ) /*0x1006a3029*/
          break; /*0x1006a3029*/
        ++v21; /*0x1006a302f*/
        v41 += 60; /*0x1006a3032*/
        if ( v11 == v21 ) /*0x1006a303c*/
        {
LABEL_41:
          v21 = v11; /*0x1006a309b*/
          v10 = v97; /*0x1006a30a5*/
          v51 = (char)v98; /*0x1006a30a9*/
          if ( v11 < v94 ) /*0x1006a30ac*/
            goto LABEL_12; /*0x1006a30ac*/
          goto LABEL_44; /*0x1006a30ac*/
        }
      }
    }
    v10 = v97; /*0x1006a30bb*/
    v51 = (char)v98; /*0x1006a30bf*/
    if ( v21 < v94 ) /*0x1006a30c2*/
    {
LABEL_12:
      if ( (_BYTE)v88 ) /*0x1006a2d9c*/
      {
        if ( v11 >= 0x20 ) /*0x1006a2da7*/
          LODWORD(v11) = 32; /*0x1006a2da7*/
        v16 = a4; /*0x1006a2dbd*/
        v17 = v10; /*0x1006a2dc0*/
        core::slice::sort::stable::quicksort::quicksort::h41615b1707eb4837(v15, v11, (_DWORD)__src, a4, 0, 0, v93); /*0x1006a2dc6*/
        v10 = v17; /*0x1006a2dcb*/
        a4 = v16; /*0x1006a2dce*/
        v13 = 2LL * (unsigned int)v11 + 1; /*0x1006a2dd4*/
      }
      else
      {
        if ( v11 >= v94 ) /*0x1006a2df7*/
          v11 = v94; /*0x1006a2df7*/
        v13 = 2 * v11; /*0x1006a2dfb*/
      }
      goto LABEL_49; /*0x1006a2dd9*/
    }
LABEL_44:
    if ( !v51 ) /*0x1006a30ca*/
      goto LABEL_47; /*0x1006a30ca*/
    v40 = 1; /*0x1006a30cc*/
    if ( v21 >= 2 ) /*0x1006a30d6*/
    {
      v22 = v21 >> 1; /*0x1006a30db*/
LABEL_26:
      v23 = (__int128 *)(v14 + v85); /*0x1006a2e58*/
      v24 = (__int128 *)(v86 + v14 + 240 * v21); /*0x1006a2e6c*/
      do /*0x1006a2fc5*/
      {
        v25 = *(v23 - 14); /*0x1006a2e80*/
        *(v23 - 14) = *(v24 - 14); /*0x1006a2e8e*/
        *(v24 - 14) = v25; /*0x1006a2e95*/
        v26 = *(v23 - 13); /*0x1006a2e9c*/
        *(v23 - 13) = *(v24 - 13); /*0x1006a2eaa*/
        *(v24 - 13) = v26; /*0x1006a2eb1*/
        v27 = *(v23 - 12); /*0x1006a2eb8*/
        *(v23 - 12) = *(v24 - 12); /*0x1006a2ec6*/
        *(v24 - 12) = v27; /*0x1006a2ecd*/
        v28 = *(v23 - 11); /*0x1006a2ed4*/
        *(v23 - 11) = *(v24 - 11); /*0x1006a2ee2*/
        *(v24 - 11) = v28; /*0x1006a2ee9*/
        v29 = *(v23 - 10); /*0x1006a2ef0*/
        *(v23 - 10) = *(v24 - 10); /*0x1006a2efe*/
        *(v24 - 10) = v29; /*0x1006a2f05*/
        v30 = *(v23 - 9); /*0x1006a2f0c*/
        *(v23 - 9) = *(v24 - 9); /*0x1006a2f1a*/
        *(v24 - 9) = v30; /*0x1006a2f21*/
        v31 = *(v23 - 8); /*0x1006a2f28*/
        *(v23 - 8) = *(v24 - 8); /*0x1006a2f30*/
        *(v24 - 8) = v31; /*0x1006a2f34*/
        v32 = *(v23 - 7); /*0x1006a2f38*/
        *(v23 - 7) = *(v24 - 7); /*0x1006a2f40*/
        *(v24 - 7) = v32; /*0x1006a2f44*/
        v33 = *(v23 - 6); /*0x1006a2f48*/
        *(v23 - 6) = *(v24 - 6); /*0x1006a2f50*/
        *(v24 - 6) = v33; /*0x1006a2f54*/
        v34 = *(v23 - 5); /*0x1006a2f58*/
        *(v23 - 5) = *(v24 - 5); /*0x1006a2f60*/
        *(v24 - 5) = v34; /*0x1006a2f64*/
        v35 = *(v23 - 4); /*0x1006a2f68*/
        *(v23 - 4) = *(v24 - 4); /*0x1006a2f70*/
        *(v24 - 4) = v35; /*0x1006a2f74*/
        v36 = *(v23 - 3); /*0x1006a2f78*/
        *(v23 - 3) = *(v24 - 3); /*0x1006a2f80*/
        *(v24 - 3) = v36; /*0x1006a2f84*/
        v37 = *(v23 - 2); /*0x1006a2f88*/
        *(v23 - 2) = *(v24 - 2); /*0x1006a2f90*/
        *(v24 - 2) = v37; /*0x1006a2f94*/
        v38 = *(v23 - 1); /*0x1006a2f98*/
        *(v23 - 1) = *(v24 - 1); /*0x1006a2fa0*/
        *(v24 - 1) = v38; /*0x1006a2fa4*/
        v39 = *v23; /*0x1006a2fa8*/
        *v23 = *v24; /*0x1006a2fae*/
        *v24 = v39; /*0x1006a2fb1*/
        v23 += 15; /*0x1006a2fb4*/
        v24 -= 15; /*0x1006a2fbb*/
        --v22; /*0x1006a2fc2*/
      }
      while ( v22 ); /*0x1006a2fc5*/
LABEL_47:
      v40 = v21; /*0x1006a30e3*/
    }
LABEL_48:
    v13 = 2 * v40 + 1; /*0x1006a30e6*/
    goto LABEL_49; /*0x1006a30e6*/
  }
  v13 = 2 * v11 + 1; /*0x1006a2de6*/
LABEL_49:
  _BitScanReverse64(&v52, (v83 * (2 * v9 - (v8 >> 1))) ^ (v83 * ((v13 >> 1) + 2 * v9))); /*0x1006a30f0*/
  v12 = (unsigned int)v52 ^ 0x3F; /*0x1006a3122*/
  if ( v10 < 2 ) /*0x1006a3129*/
    goto LABEL_89; /*0x1006a3129*/
LABEL_50:
  v79 = (char *)(240 * v9 + v96); /*0x1006a312f*/
  __dst = (void *)(v84 + 240 * v9); /*0x1006a314b*/
  v95 = v9; /*0x1006a3152*/
  v89 = v13; /*0x1006a3156*/
  v90 = v12; /*0x1006a315a*/
  do /*0x1006a31de*/
  {
    while ( 1 ) /*0x1006a319b*/
    {
      if ( *((_BYTE *)&v78[66] + v10 + 5) < (unsigned __int8)v12 ) /*0x1006a31a3*/
        goto LABEL_89; /*0x1006a31a3*/
      v56 = v78[--v10]; /*0x1006a31ac*/
      v57 = v56 >> 1; /*0x1006a31b7*/
      v58 = v8 >> 1; /*0x1006a31bd*/
      v55 = (v56 >> 1) + (v8 >> 1); /*0x1006a31c0*/
      if ( v55 <= a4 && (((unsigned __int8)v8 | (unsigned __int8)v56) & 1) == 0 ) /*0x1006a31d2*/
        break; /*0x1006a31d2*/
      v59 = (char *)(v96 + 240 * (v9 - v55)); /*0x1006a31fd*/
      v97 = v10; /*0x1006a3205*/
      v98 = v59; /*0x1006a3209*/
      v92 = v8; /*0x1006a320d*/
      if ( (v56 & 1) != 0 ) /*0x1006a3211*/
      {
        if ( (v8 & 1) != 0 ) /*0x1006a3284*/
        {
LABEL_61:
          if ( v8 >= 2 ) /*0x1006a3271*/
            goto LABEL_65; /*0x1006a3271*/
          goto LABEL_53; /*0x1006a3271*/
        }
      }
      else
      {
        _BitScanReverse64(&v60, v57 | 1); /*0x1006a321a*/
        v61 = v96 + 240 * (v9 - v55); /*0x1006a3234*/
        v62 = a4; /*0x1006a3241*/
        core::slice::sort::stable::quicksort::quicksort::h41615b1707eb4837( /*0x1006a3244*/
          v61,
          v57,
          (_DWORD)__src,
          a4,
          (2 * (v60 ^ 0x3F)) ^ 0x7E,
          0,
          v93);
        v59 = (char *)v98; /*0x1006a3249*/
        v55 = v57 + (v8 >> 1); /*0x1006a324d*/
        v8 = v92; /*0x1006a3250*/
        LOBYTE(v12) = v90; /*0x1006a3254*/
        v13 = v89; /*0x1006a3258*/
        v10 = v97; /*0x1006a325c*/
        a4 = v62; /*0x1006a3260*/
        v9 = v95; /*0x1006a3263*/
        if ( (v92 & 1) != 0 ) /*0x1006a326b*/
          goto LABEL_61; /*0x1006a326b*/
      }
      _BitScanReverse64(&v63, v58 | 1); /*0x1006a329a*/
      v64 = a4; /*0x1006a32bb*/
      core::slice::sort::stable::quicksort::quicksort::h41615b1707eb4837( /*0x1006a32be*/
        (_DWORD)v59 + 240 * v57,
        v58,
        (_DWORD)__src,
        a4,
        (2 * (v63 ^ 0x3F)) ^ 0x7E,
        0,
        v93);
      v59 = (char *)v98; /*0x1006a32c3*/
      LOBYTE(v12) = v90; /*0x1006a32ce*/
      v13 = v89; /*0x1006a32d2*/
      v10 = v97; /*0x1006a32d6*/
      a4 = v64; /*0x1006a32da*/
      v9 = v95; /*0x1006a32dd*/
      if ( v92 >= 2 ) /*0x1006a32e5*/
      {
LABEL_65:
        if ( v56 >= 2 ) /*0x1006a32ef*/
        {
          v65 = v56 >> 1; /*0x1006a32f8*/
          if ( v58 < v57 ) /*0x1006a32fb*/
            v65 = v58; /*0x1006a32fb*/
          if ( a4 >= v65 ) /*0x1006a3302*/
          {
            v80 = v55; /*0x1006a3308*/
            v66 = &v59[240 * v57]; /*0x1006a3316*/
            if ( v57 > v58 ) /*0x1006a331c*/
              v59 += 240 * v57; /*0x1006a331c*/
            v67 = 240 * v65; /*0x1006a3320*/
            v68 = (char *)__src; /*0x1006a3327*/
            memcpy(__src, v59, 240 * v65); /*0x1006a3334*/
            v69 = &v68[v67]; /*0x1006a3339*/
            if ( v57 <= v58 ) /*0x1006a333f*/
            {
              v54 = v68; /*0x1006a33eb*/
              v53 = (char *)v98; /*0x1006a33ee*/
              v92 = (unsigned __int64)v69; /*0x1006a33f2*/
              do /*0x1006a3479*/
              {
                v74 = v54; /*0x1006a3400*/
                v75 = v54[58]; /*0x1006a3407*/
                v76 = v75 < *((_DWORD *)v66 + 58); /*0x1006a3420*/
                if ( v75 == *((_DWORD *)v66 + 58) ) /*0x1006a3424*/
                  v76 = *(_QWORD *)v66 < *(_QWORD *)v54; /*0x1006a3424*/
                if ( v76 ) /*0x1006a3432*/
                  v54 = v66; /*0x1006a3432*/
                memcpy(v53, v54, 0xF0u); /*0x1006a343e*/
                v69 = (char *)v92; /*0x1006a3446*/
                v54 = &v74[60 * !v76]; /*0x1006a3455*/
                v53 += 240; /*0x1006a3458*/
                if ( v54 == (_DWORD *)v92 ) /*0x1006a3462*/
                  break; /*0x1006a3462*/
                v66 += 240 * v76; /*0x1006a346f*/
              }
              while ( v66 != v79 ); /*0x1006a3479*/
              v9 = v95; /*0x1006a347b*/
            }
            else
            {
              v70 = (char *)__dst; /*0x1006a3345*/
              v9 = v95; /*0x1006a334c*/
              do /*0x1006a33dd*/
              {
                v71 = *((_DWORD *)v66 - 2); /*0x1006a3357*/
                v72 = v71 < *((_DWORD *)v69 - 2); /*0x1006a3378*/
                if ( v71 == *((_DWORD *)v69 - 2) ) /*0x1006a337c*/
                  v72 = *((_QWORD *)v69 - 30) < *((_QWORD *)v66 - 30); /*0x1006a337c*/
                v73 = v69 - 240; /*0x1006a3380*/
                if ( v72 ) /*0x1006a338a*/
                  v73 = v66 - 240; /*0x1006a338a*/
                memcpy(v70, v73, 0xF0u); /*0x1006a3396*/
                v66 = &v66[240 * !v72 - 240]; /*0x1006a33ae*/
                v69 = &v69[240 * v72 - 240]; /*0x1006a33bd*/
                if ( v66 == v98 ) /*0x1006a33c9*/
                {
                  v53 = v66; /*0x1006a3160*/
                  v54 = __src; /*0x1006a3163*/
                  goto LABEL_52; /*0x1006a3163*/
                }
                v70 -= 240; /*0x1006a33cf*/
                v54 = __src; /*0x1006a33d6*/
              }
              while ( v69 != __src ); /*0x1006a33dd*/
              v53 = v66; /*0x1006a33e3*/
            }
LABEL_52:
            memcpy(v53, v54, v69 - (char *)v54); /*0x1006a3167*/
            a4 = v81; /*0x1006a3172*/
            v10 = v97; /*0x1006a3179*/
            v13 = v89; /*0x1006a317d*/
            LOBYTE(v12) = v90; /*0x1006a3181*/
            v55 = v80; /*0x1006a3185*/
          }
        }
      }
LABEL_53:
      v8 = 2 * v55 + 1; /*0x1006a318c*/
      if ( v10 <= 1 ) /*0x1006a3195*/
        goto LABEL_88; /*0x1006a3195*/
    }
    v8 = 2 * v55; /*0x1006a31d7*/
  }
  while ( v10 > 1 ); /*0x1006a31de*/
LABEL_88:
  v10 = 1; /*0x1006a3490*/
LABEL_89:
  while ( 1 ) /*0x1006a3496*/
  {
    v78[v10] = v8; /*0x1006a3496*/
    *((_BYTE *)&v78[66] + v10 + 6) = v12; /*0x1006a349e*/
    if ( v91 <= v9 ) /*0x1006a34aa*/
      break; /*0x1006a34aa*/
    ++v10; /*0x1006a2d50*/
    v9 += v13 >> 1; /*0x1006a2d59*/
    v8 = v13; /*0x1006a2d5c*/
    v11 = v91 - v9; /*0x1006a2d63*/
    if ( v91 > v9 ) /*0x1006a2d66*/
      goto LABEL_11; /*0x1006a2d66*/
    v12 = 0; /*0x1006a2d68*/
    v13 = 1; /*0x1006a2d6a*/
    if ( v10 >= 2 ) /*0x1006a2d73*/
      goto LABEL_50; /*0x1006a2d73*/
  }
  if ( (v8 & 1) == 0 ) /*0x1006a34b4*/
  {
    _BitScanReverse64(&v77, v91 | 1); /*0x1006a34c1*/
    core::slice::sort::stable::quicksort::quicksort::h41615b1707eb4837( /*0x1006a34e3*/
      v96,
      v91,
      (_DWORD)__src,
      a4,
      (2 * (v77 ^ 0x3F)) ^ 0x7E,
      0,
      v93);
  }
}