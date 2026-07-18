// mac 1.2.2 NEW codexmate_lib4core12debug_bundle20header_names_sum 0x10121dd00 d=2
void __fastcall core::slice::sort::stable::drift::sort::h0a33c5d45a147c4d(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  unsigned int v18; // r14d
  int v19; // edi
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  const void *v26; // rdi
  size_t v27; // rbx
  const void *v28; // rsi
  size_t v29; // rdx
  __int64 v30; // r12
  int v31; // eax
  size_t *v32; // r12
  unsigned __int64 v33; // r14
  void *v34; // rsi
  size_t v35; // rdx
  const void *v36; // rdi
  __int64 v37; // r15
  int v38; // eax
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rsi
  size_t *v45; // r12
  void *v46; // rsi
  size_t v47; // rdx
  const void *v48; // rdi
  __int64 v49; // r15
  int v50; // eax
  void *v51; // rdi
  char *v52; // rbx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rbx
  char *v57; // rsi
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // r13
  char *v66; // r14
  char *v67; // r13
  _QWORD *v68; // rbx
  _QWORD *v69; // r14
  size_t v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // r15
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r14
  size_t v76; // rdx
  size_t v77; // r15
  bool v78; // cf
  __int64 v79; // r15
  int v80; // eax
  _QWORD *v81; // rcx
  __int64 v82; // rsi
  _QWORD *v83; // rdi
  unsigned __int64 v84; // r8
  _QWORD v85[75]; // [rsp+8h] [rbp-328h]
  unsigned __int64 v86; // [rsp+260h] [rbp-D0h]
  _QWORD *v87; // [rsp+268h] [rbp-C8h]
  __int64 v88; // [rsp+270h] [rbp-C0h]
  unsigned __int64 v89; // [rsp+278h] [rbp-B8h]
  __int64 v90; // [rsp+280h] [rbp-B0h]
  __int64 v91; // [rsp+288h] [rbp-A8h]
  __int64 v92; // [rsp+290h] [rbp-A0h]
  __int64 v93; // [rsp+298h] [rbp-98h]
  int v94; // [rsp+2A4h] [rbp-8Ch]
  unsigned __int64 v95; // [rsp+2A8h] [rbp-88h]
  __int64 v96; // [rsp+2B0h] [rbp-80h]
  unsigned __int64 v97; // [rsp+2B8h] [rbp-78h]
  unsigned __int64 v98; // [rsp+2C0h] [rbp-70h]
  __int64 v99; // [rsp+2C8h] [rbp-68h]
  __int64 v100; // [rsp+2D0h] [rbp-60h]
  unsigned __int64 v101; // [rsp+2D8h] [rbp-58h]
  void *__src; // [rsp+2E0h] [rbp-50h]
  unsigned __int64 v103; // [rsp+2E8h] [rbp-48h]
  unsigned __int64 v104; // [rsp+2F0h] [rbp-40h]
  unsigned __int64 v105; // [rsp+2F8h] [rbp-38h]
  void *__s2; // [rsp+300h] [rbp-30h]

  v96 = a6; /*0x10121dd14*/
  v94 = a5; /*0x10121dd18*/
  __src = a3; /*0x10121dd1f*/
  v100 = a1; /*0x10121dd23*/
  if ( a2 < 2 ) /*0x10121dd2b*/
    return; /*0x10121dd2b*/
  v6 = a4; /*0x10121dd31*/
  v89 = 0x4000000000000000LL / a2 - ((0x4000000000000000LL % a2 == 0) - 1LL); /*0x10121dd4b*/
  if ( a2 >= 0x1001 ) /*0x10121dd59*/
  {
    v8 = a2; /*0x10121dd83*/
    v10 = core::slice::sort::stable::drift::sqrt_approx::h1ec57ad8b40c89a5(a2); /*0x10121dd86*/
    v6 = a4; /*0x10121dd8b*/
    v98 = v10; /*0x10121dd8e*/
  }
  else
  {
    v7 = 64; /*0x10121dd6b*/
    if ( a2 - (a2 >> 1) < 0x40 ) /*0x10121dd70*/
      v7 = a2 - (a2 >> 1); /*0x10121dd70*/
    v98 = v7; /*0x10121dd74*/
    v8 = a2; /*0x10121dd78*/
  }
  v93 = v100 + 64; /*0x10121dd9a*/
  v91 = v100 + 16; /*0x10121dda5*/
  v92 = v100 - 8; /*0x10121ddb0*/
  v90 = v100 - 24; /*0x10121ddbb*/
  v11 = 1; /*0x10121ddc2*/
  v12 = 0; /*0x10121ddc8*/
  v13 = 0; /*0x10121ddcb*/
  v97 = v6; /*0x10121ddce*/
  v95 = v8; /*0x10121ddd2*/
  v14 = v8; /*0x10121dde0*/
  v104 = 0; /*0x10121dde3*/
LABEL_10:
  v16 = 3 * v12; /*0x10121de10*/
  v17 = v100 + 24 * v12; /*0x10121de18*/
  v105 = v14; /*0x10121de20*/
  if ( v14 < v98 ) /*0x10121de24*/
    goto LABEL_11; /*0x10121de24*/
  if ( v14 < 2 ) /*0x10121de84*/
  {
    v24 = v14; /*0x10121de86*/
LABEL_50:
    v23 = 2 * v24 + 1; /*0x10121e079*/
    goto LABEL_51; /*0x10121e079*/
  }
  v103 = v13; /*0x10121deb0*/
  v26 = *(const void **)(v17 + 32); /*0x10121deb4*/
  v27 = *(_QWORD *)(v17 + 40); /*0x10121deb8*/
  v29 = *(_QWORD *)(v17 + 16); /*0x10121dec0*/
  v30 = v27 - v29; /*0x10121dec7*/
  if ( v27 < v29 ) /*0x10121deca*/
    v29 = *(_QWORD *)(v17 + 40); /*0x10121deca*/
  v28 = *(const void **)(v17 + 8); /*0x10121debc*/
  __s2 = *(void **)(v17 + 32); /*0x10121dece*/
  v31 = memcmp(v26, v28, v29); /*0x10121ded2*/
  if ( v31 ) /*0x10121dedb*/
    v30 = v31; /*0x10121dedb*/
  if ( v30 < 0 ) /*0x10121dee2*/
  {
    if ( v105 == 2 ) /*0x10121df6f*/
    {
      v33 = 2; /*0x10121df75*/
      v39 = 1; /*0x10121df7b*/
      v12 = v104; /*0x10121df80*/
      v13 = v103; /*0x10121df84*/
      goto LABEL_36; /*0x10121df84*/
    }
    v99 = v30; /*0x10121dfee*/
    v101 = v17; /*0x10121dff2*/
    v45 = (size_t *)(v93 + 8 * v16); /*0x10121dffd*/
    v33 = 2; /*0x10121e001*/
    while ( 1 ) /*0x10121e010*/
    {
      v46 = __s2; /*0x10121e010*/
      v47 = v27; /*0x10121e014*/
      v48 = (const void *)*(v45 - 1); /*0x10121e017*/
      v27 = *v45; /*0x10121e01c*/
      v49 = *v45 - v47; /*0x10121e023*/
      if ( *v45 < v47 ) /*0x10121e026*/
        v47 = *v45; /*0x10121e026*/
      __s2 = (void *)*(v45 - 1); /*0x10121e02a*/
      v50 = memcmp(v48, v46, v47); /*0x10121e02e*/
      if ( v50 ) /*0x10121e037*/
        v49 = v50; /*0x10121e037*/
      if ( v49 >= 0 ) /*0x10121e03e*/
        break; /*0x10121e03e*/
      ++v33; /*0x10121e040*/
      v45 += 3; /*0x10121e043*/
      if ( v105 == v33 ) /*0x10121e04e*/
      {
        v33 = v105; /*0x10121e050*/
        break; /*0x10121e050*/
      }
    }
  }
  else
  {
    v24 = 2; /*0x10121dee8*/
    v12 = v104; /*0x10121def2*/
    v13 = v103; /*0x10121def6*/
    if ( v105 == 2 ) /*0x10121defa*/
      goto LABEL_50; /*0x10121defa*/
    v99 = v30; /*0x10121df00*/
    v101 = v17; /*0x10121df04*/
    v32 = (size_t *)(v93 + 8 * v16); /*0x10121df0f*/
    v33 = 2; /*0x10121df13*/
    while ( 1 ) /*0x10121df20*/
    {
      v34 = __s2; /*0x10121df20*/
      v35 = v27; /*0x10121df24*/
      v36 = (const void *)*(v32 - 1); /*0x10121df27*/
      v27 = *v32; /*0x10121df2c*/
      v37 = *v32 - v35; /*0x10121df33*/
      if ( *v32 < v35 ) /*0x10121df36*/
        v35 = *v32; /*0x10121df36*/
      __s2 = (void *)*(v32 - 1); /*0x10121df3a*/
      v38 = memcmp(v36, v34, v35); /*0x10121df3e*/
      if ( v38 ) /*0x10121df47*/
        v37 = v38; /*0x10121df47*/
      if ( v37 < 0 ) /*0x10121df4e*/
        break; /*0x10121df4e*/
      ++v33; /*0x10121df54*/
      v32 += 3; /*0x10121df57*/
      if ( v105 == v33 ) /*0x10121df5f*/
      {
        v33 = v105; /*0x10121df61*/
        break; /*0x10121df65*/
      }
    }
  }
  v12 = v104; /*0x10121e053*/
  v13 = v103; /*0x10121e05b*/
  LODWORD(v17) = v101; /*0x10121e05f*/
  if ( v33 >= v98 ) /*0x10121e067*/
  {
    if ( v99 >= 0 ) /*0x10121e070*/
    {
LABEL_49:
      v24 = v33; /*0x10121e076*/
      goto LABEL_50; /*0x10121e076*/
    }
    v24 = 1; /*0x10121e458*/
    if ( v33 < 2 ) /*0x10121e461*/
      goto LABEL_50; /*0x10121e461*/
    v39 = v33 >> 1; /*0x10121e46a*/
LABEL_36:
    v40 = (__int64 *)(24 * v12 + v91); /*0x10121df88*/
    v41 = (__int64 *)(v92 + 24 * v12 + 24 * v33); /*0x10121dfa6*/
    do /*0x10121dfe7*/
    {
      v42 = *(v40 - 2); /*0x10121dfb0*/
      *(v40 - 2) = *(v41 - 2); /*0x10121dfb8*/
      *(v41 - 2) = v42; /*0x10121dfbc*/
      v43 = *(v40 - 1); /*0x10121dfc0*/
      *(v40 - 1) = *(v41 - 1); /*0x10121dfc8*/
      *(v41 - 1) = v43; /*0x10121dfcc*/
      v44 = *v40; /*0x10121dfd0*/
      *v40 = *v41; /*0x10121dfd6*/
      *v41 = v44; /*0x10121dfd9*/
      v40 += 3; /*0x10121dfdc*/
      v41 -= 3; /*0x10121dfe0*/
      --v39; /*0x10121dfe4*/
    }
    while ( v39 ); /*0x10121dfe7*/
    goto LABEL_49; /*0x10121dfe7*/
  }
LABEL_11:
  if ( (_BYTE)v94 ) /*0x10121de2d*/
  {
    v18 = v105; /*0x10121de2f*/
    if ( v105 >= 0x20 ) /*0x10121de3c*/
      v18 = 32; /*0x10121de3c*/
    v19 = v17; /*0x10121de48*/
    v20 = v97; /*0x10121de52*/
    v21 = v13; /*0x10121de5c*/
    core::slice::sort::stable::quicksort::quicksort::haa9643497e19c03e(v19, v18, (_DWORD)__src, v97, 0, 0, v96); /*0x10121de62*/
    v22 = v20; /*0x10121de67*/
    v13 = v21; /*0x10121de6a*/
    v12 = v104; /*0x10121de6d*/
    v23 = 2LL * v18 + 1; /*0x10121de74*/
    goto LABEL_52; /*0x10121de79*/
  }
  v25 = v105; /*0x10121de94*/
  if ( v105 >= v98 ) /*0x10121de9b*/
    v25 = v98; /*0x10121de9b*/
  v23 = 2 * v25; /*0x10121de9f*/
LABEL_51:
  v22 = v97; /*0x10121e07e*/
LABEL_52:
  v105 = v23; /*0x10121e082*/
  _BitScanReverse64(&v23, (v89 * (2 * v12 - (v11 >> 1))) ^ (v89 * ((v23 >> 1) + 2 * v12))); /*0x10121e0b1*/
  v15 = (unsigned int)v23 ^ 0x3F; /*0x10121e0b5*/
  if ( v13 < 2 ) /*0x10121e0bc*/
    goto LABEL_96; /*0x10121e0bc*/
LABEL_53:
  v88 = 24 * v12 + v100; /*0x10121e0c2*/
  v87 = (_QWORD *)(v90 + 24 * v12); /*0x10121e0e3*/
  v99 = v15; /*0x10121e0ea*/
  do /*0x10121e16e*/
  {
    while ( 1 ) /*0x10121e12b*/
    {
      if ( *((_BYTE *)&v85[66] + v13 + 5) < (unsigned __int8)v15 ) /*0x10121e133*/
        goto LABEL_96; /*0x10121e133*/
      v54 = v85[--v13]; /*0x10121e13c*/
      v55 = v54 >> 1; /*0x10121e147*/
      v56 = v11 >> 1; /*0x10121e14d*/
      v53 = (v54 >> 1) + (v11 >> 1); /*0x10121e150*/
      if ( v53 <= v22 && (((unsigned __int8)v11 | (unsigned __int8)v54) & 1) == 0 ) /*0x10121e162*/
        break; /*0x10121e162*/
      v57 = (char *)(v100 + 24 * (v12 - v53)); /*0x10121e18e*/
      v103 = v13; /*0x10121e196*/
      __s2 = v57; /*0x10121e19a*/
      v101 = v11; /*0x10121e19e*/
      if ( (v54 & 1) != 0 ) /*0x10121e1a2*/
      {
        if ( (v11 & 1) != 0 ) /*0x10121e214*/
        {
LABEL_64:
          LOBYTE(v15) = v99; /*0x10121e1fa*/
          if ( v11 >= 2 ) /*0x10121e202*/
            goto LABEL_68; /*0x10121e202*/
          goto LABEL_56; /*0x10121e202*/
        }
      }
      else
      {
        _BitScanReverse64(&v58, v55 | 1); /*0x10121e1ab*/
        v59 = v22; /*0x10121e1d6*/
        core::slice::sort::stable::quicksort::quicksort::haa9643497e19c03e( /*0x10121e1d9*/
          (_DWORD)__s2,
          v55,
          (_DWORD)__src,
          v22,
          (2 * (v58 ^ 0x3F)) ^ 0x7E,
          0,
          v96);
        v57 = (char *)__s2; /*0x10121e1de*/
        v53 = v55 + (v11 >> 1); /*0x10121e1e2*/
        v11 = v101; /*0x10121e1e5*/
        v22 = v59; /*0x10121e1e9*/
        v13 = v103; /*0x10121e1ec*/
        v12 = v104; /*0x10121e1f0*/
        if ( (v101 & 1) != 0 ) /*0x10121e1f8*/
          goto LABEL_64; /*0x10121e1f8*/
      }
      _BitScanReverse64(&v60, v56 | 1); /*0x10121e229*/
      v61 = v53; /*0x10121e243*/
      v62 = v22; /*0x10121e250*/
      core::slice::sort::stable::quicksort::quicksort::haa9643497e19c03e( /*0x10121e253*/
        (_DWORD)__s2 + 24 * v55,
        v56,
        (_DWORD)__src,
        v22,
        (2 * (v60 ^ 0x3F)) ^ 0x7E,
        0,
        v96);
      v57 = (char *)__s2; /*0x10121e258*/
      v53 = v61; /*0x10121e25c*/
      v22 = v62; /*0x10121e263*/
      v13 = v103; /*0x10121e266*/
      v12 = v104; /*0x10121e26a*/
      LOBYTE(v15) = v99; /*0x10121e272*/
      if ( v101 >= 2 ) /*0x10121e276*/
      {
LABEL_68:
        if ( v54 >= 2 ) /*0x10121e280*/
        {
          v63 = v54 >> 1; /*0x10121e289*/
          if ( v56 < v55 ) /*0x10121e28c*/
            v63 = v56; /*0x10121e28c*/
          if ( v22 >= v63 ) /*0x10121e293*/
          {
            v86 = v53; /*0x10121e299*/
            v64 = (__int64)&v57[24 * v55]; /*0x10121e2a4*/
            if ( v55 > v56 ) /*0x10121e2ab*/
              v57 += 24 * v55; /*0x10121e2ab*/
            v65 = 24 * v63; /*0x10121e2b3*/
            v66 = (char *)__src; /*0x10121e2b7*/
            memcpy(__src, v57, 24 * v63); /*0x10121e2c1*/
            v67 = &v66[v65]; /*0x10121e2c6*/
            if ( v55 <= v56 ) /*0x10121e2cc*/
            {
              v52 = v66; /*0x10121e375*/
              v75 = v88; /*0x10121e378*/
              while ( 1 ) /*0x10121e38e*/
              {
                v76 = *((_QWORD *)v52 + 2); /*0x10121e38e*/
                v77 = *(_QWORD *)(v64 + 16); /*0x10121e392*/
                v78 = v77 < v76; /*0x10121e395*/
                v79 = v77 - v76; /*0x10121e395*/
                if ( v78 ) /*0x10121e398*/
                  v76 = *(_QWORD *)(v64 + 16); /*0x10121e398*/
                v80 = memcmp(*(const void **)(v64 + 8), *((const void **)v52 + 1), v76); /*0x10121e39c*/
                if ( v80 ) /*0x10121e3a5*/
                  v79 = v80; /*0x10121e3a5*/
                v81 = (_QWORD *)v64; /*0x10121e3b1*/
                if ( v79 >= 0 ) /*0x10121e3b4*/
                  v81 = v52; /*0x10121e3b4*/
                v82 = v81[1]; /*0x10121e3bb*/
                v83 = __s2; /*0x10121e3bf*/
                *(_QWORD *)__s2 = *v81; /*0x10121e3c3*/
                v83[1] = v82; /*0x10121e3c6*/
                v83[2] = v81[2]; /*0x10121e3ce*/
                v52 += 24 * (v79 >= 0); /*0x10121e3d6*/
                v51 = v83 + 3; /*0x10121e3da*/
                if ( v52 == v67 ) /*0x10121e3e1*/
                  break; /*0x10121e3e1*/
                __s2 = v51; /*0x10121e3e7*/
                v64 += 24 * ((unsigned __int64)v79 >> 63); /*0x10121e3f3*/
                if ( v64 == v75 ) /*0x10121e3fa*/
                {
                  v51 = __s2; /*0x10121e3fc*/
                  break; /*0x10121e400*/
                }
              }
            }
            else
            {
              v68 = v87; /*0x10121e2d2*/
              do /*0x10121e364*/
              {
                v69 = (_QWORD *)(v64 - 24); /*0x10121e2e0*/
                v101 = (unsigned __int64)(v67 - 24); /*0x10121e2e9*/
                v70 = *((_QWORD *)v67 - 1); /*0x10121e2f1*/
                v71 = *(_QWORD *)(v64 - 8); /*0x10121e2fa*/
                v72 = v70 - v71; /*0x10121e302*/
                if ( v70 >= v71 ) /*0x10121e305*/
                  v70 = *(_QWORD *)(v64 - 8); /*0x10121e305*/
                v73 = memcmp(*((const void **)v67 - 2), *(const void **)(v64 - 16), v70); /*0x10121e309*/
                if ( v73 ) /*0x10121e312*/
                  v72 = v73; /*0x10121e312*/
                if ( v72 >= 0 ) /*0x10121e31e*/
                  v69 = (_QWORD *)v101; /*0x10121e31e*/
                v74 = v69[1]; /*0x10121e326*/
                *v68 = *v69; /*0x10121e32a*/
                v68[1] = v74; /*0x10121e32d*/
                v68[2] = v69[2]; /*0x10121e335*/
                v64 = v64 + 24LL * (v72 >= 0) - 24; /*0x10121e33d*/
                v67 = &v67[24 * ((unsigned __int64)v72 >> 63) - 24]; /*0x10121e34a*/
                if ( (void *)v64 == __s2 ) /*0x10121e353*/
                {
                  v51 = (void *)v64; /*0x10121e0f0*/
                  v52 = (char *)__src; /*0x10121e0f3*/
                  goto LABEL_55; /*0x10121e0f3*/
                }
                v68 -= 3; /*0x10121e359*/
              }
              while ( v67 != __src ); /*0x10121e364*/
              v51 = (void *)v64; /*0x10121e36a*/
              v52 = (char *)__src; /*0x10121e36d*/
            }
LABEL_55:
            memcpy(v51, v52, v67 - v52); /*0x10121e0f7*/
            v12 = v104; /*0x10121e105*/
            v13 = v103; /*0x10121e109*/
            v22 = v97; /*0x10121e10d*/
            LOBYTE(v15) = v99; /*0x10121e111*/
            v53 = v86; /*0x10121e115*/
          }
        }
      }
LABEL_56:
      v11 = 2 * v53 + 1; /*0x10121e11c*/
      if ( v13 <= 1 ) /*0x10121e125*/
        goto LABEL_95; /*0x10121e125*/
    }
    v11 = 2 * v53; /*0x10121e167*/
  }
  while ( v13 > 1 ); /*0x10121e16e*/
LABEL_95:
  v13 = 1; /*0x10121e410*/
LABEL_96:
  while ( 1 ) /*0x10121e416*/
  {
    v85[v13] = v11; /*0x10121e416*/
    *((_BYTE *)&v85[66] + v13 + 6) = v15; /*0x10121e41e*/
    if ( v95 <= v12 ) /*0x10121e42d*/
      break; /*0x10121e42d*/
    ++v13; /*0x10121e42f*/
    v11 = v105; /*0x10121e432*/
    v12 += v105 >> 1; /*0x10121e43c*/
    v14 = v95 - v12; /*0x10121e446*/
    v104 = v12; /*0x10121e449*/
    if ( v95 > v12 ) /*0x10121e44d*/
      goto LABEL_10; /*0x10121e44d*/
    v15 = 0; /*0x10121ddf0*/
    v105 = 1; /*0x10121ddf7*/
    if ( v13 >= 2 ) /*0x10121ddff*/
      goto LABEL_53; /*0x10121ddff*/
  }
  if ( (v11 & 1) == 0 ) /*0x10121e476*/
  {
    _BitScanReverse64(&v84, v95 | 1); /*0x10121e486*/
    core::slice::sort::stable::quicksort::quicksort::haa9643497e19c03e( /*0x10121e4ab*/
      v100,
      v95,
      (_DWORD)__src,
      v22,
      (2 * (v84 ^ 0x3F)) ^ 0x7E,
      0,
      v96);
  }
}