// __ZN13codexmate_lib4core5relay23codex_thread_visibility33restore_convergence_rollout_patch @ 0x100ae7f80 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_convergence_rollout_patch::h09310c7abde0e37f(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rsi
  double result; // xmm0_8
  __int64 v6; // rdx
  void *v7; // r15
  size_t v8; // rbx
  size_t v9; // r12
  size_t v10; // rax
  void *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rsi
  int v21; // eax
  size_t v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rbx
  void *v25; // rax
  void *v26; // r15
  size_t v27; // rbx
  __int64 v28; // r12
  int v29; // eax
  size_t v30; // rdx
  __int64 v31; // rbx
  int v32; // eax
  void *v33; // rax
  __int64 v34; // rbx
  _QWORD *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rbx
  __int64 v40; // r12
  void *v41; // rdi
  char v42; // r12
  __int64 v43; // r15
  __int64 v44; // rbx
  __int64 v45; // r12
  __int64 v46; // [rsp+0h] [rbp-180h]
  __int64 v47; // [rsp+8h] [rbp-178h]
  size_t v48; // [rsp+10h] [rbp-170h]
  __int128 v49; // [rsp+10h] [rbp-170h]
  __int64 v50; // [rsp+20h] [rbp-160h] BYREF
  __int64 v51; // [rsp+28h] [rbp-158h]
  __int64 v52; // [rsp+30h] [rbp-150h]
  size_t v53; // [rsp+38h] [rbp-148h]
  size_t v54; // [rsp+40h] [rbp-140h]
  void *v55; // [rsp+48h] [rbp-138h]
  void *v56; // [rsp+50h] [rbp-130h]
  _BYTE v57[24]; // [rsp+58h] [rbp-128h]
  __int64 v58; // [rsp+70h] [rbp-110h]
  __int64 v59; // [rsp+78h] [rbp-108h]
  __int64 v60; // [rsp+80h] [rbp-100h] BYREF
  __int64 v61; // [rsp+88h] [rbp-F8h]
  void *__s1; // [rsp+90h] [rbp-F0h]
  size_t __n; // [rsp+98h] [rbp-E8h]
  size_t v64; // [rsp+A0h] [rbp-E0h]
  size_t v65; // [rsp+A8h] [rbp-D8h]
  size_t v66; // [rsp+B0h] [rbp-D0h] BYREF
  void *v67; // [rsp+B8h] [rbp-C8h]
  size_t v68; // [rsp+C0h] [rbp-C0h]
  __int128 v69; // [rsp+C8h] [rbp-B8h]
  __int64 v70; // [rsp+D8h] [rbp-A8h]
  __int64 v71; // [rsp+E0h] [rbp-A0h]
  _QWORD v72[9]; // [rsp+E8h] [rbp-98h] BYREF
  __int64 v73; // [rsp+130h] [rbp-50h] BYREF
  __int64 v74; // [rsp+138h] [rbp-48h]
  __int64 v75; // [rsp+140h] [rbp-40h]
  __int64 v76; // [rsp+148h] [rbp-38h]
  char v77; // [rsp+156h] [rbp-2Ah]
  char v78; // [rsp+157h] [rbp-29h]

  v4 = (void *)a2[1]; /*0x100ae7f9a*/
  v46 = (__int64)v4; /*0x100ae7fa9*/
  v47 = a2[2]; /*0x100ae7fb0*/
  result = codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::hea544617b47f60bc( /*0x100ae7fb7*/
             &v60,
             v4,
             v47);
  v6 = v61; /*0x100ae7fc2*/
  v7 = __s1; /*0x100ae7fc9*/
  v8 = __n; /*0x100ae7fd0*/
  v9 = v64; /*0x100ae7fd7*/
  v53 = v65; /*0x100ae7fe5*/
  v54 = v66; /*0x100ae7ff3*/
  v55 = v67; /*0x100ae8001*/
  v56 = (void *)v68; /*0x100ae800f*/
  *(_OWORD *)v57 = v69; /*0x100ae801d*/
  *(_QWORD *)&v57[16] = v70; /*0x100ae8039*/
  v58 = v71; /*0x100ae8047*/
  if ( (_DWORD)v60 == 1 ) /*0x100ae8051*/
  {
    *(_QWORD *)(a1 + 88) = v58; /*0x100ae805a*/
    *(_QWORD *)(a1 + 80) = *(_QWORD *)&v57[16]; /*0x100ae8065*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)v57; /*0x100ae807b*/
    *(_QWORD *)(a1 + 56) = v56; /*0x100ae8086*/
    *(_QWORD *)(a1 + 48) = v55; /*0x100ae8091*/
    v10 = v53; /*0x100ae8095*/
    *(_QWORD *)(a1 + 40) = v54; /*0x100ae80a3*/
    *(_QWORD *)(a1 + 32) = v10; /*0x100ae80a7*/
    *(_QWORD *)a1 = v6; /*0x100ae80ab*/
    *(_QWORD *)(a1 + 8) = v7; /*0x100ae80ae*/
    *(_QWORD *)(a1 + 16) = v8; /*0x100ae80b2*/
    *(_QWORD *)(a1 + 24) = v9; /*0x100ae80b6*/
    return result; /*0x100ae80ba*/
  }
  if ( __OFSUB__(-v61, 1) ) /*0x100ae80c2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v60, v4); /*0x100ae80cb*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1); /*0x100ae80da*/
    if ( !v11 ) /*0x100ae80e2*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 48); /*0x100ae876b*/
    qmemcpy(v11, "session_meta missing during convergence rollback", 48); /*0x100ae8138*/
    *(_QWORD *)a1 = 9; /*0x100ae813b*/
    *(_QWORD *)(a1 + 8) = 48; /*0x100ae8142*/
    *(_QWORD *)(a1 + 16) = v11; /*0x100ae814a*/
    *(_QWORD *)(a1 + 24) = 48; /*0x100ae814e*/
    return result; /*0x100ae8156*/
  }
  v70 = v58; /*0x100ae8162*/
  v69 = *(_OWORD *)&v57[8]; /*0x100ae817e*/
  v68 = *(_QWORD *)v57; /*0x100ae818c*/
  v67 = v56; /*0x100ae819a*/
  v66 = (size_t)v55; /*0x100ae81a8*/
  v65 = v54; /*0x100ae81bd*/
  v64 = v53; /*0x100ae81c4*/
  v59 = v61; /*0x100ae81cb*/
  v60 = v61; /*0x100ae81d2*/
  v61 = (__int64)__s1; /*0x100ae81d9*/
  __s1 = (void *)__n; /*0x100ae81e0*/
  __n = v9; /*0x100ae81e7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v60, v4); /*0x100ae81ee*/
  v12 = 144; /*0x100ae81f3*/
  v13 = 8; /*0x100ae81f8*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 8); /*0x100ae81fd*/
  if ( !v14 ) /*0x100ae8205*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 144); /*0x100ae877a*/
  v15 = v14; /*0x100ae820b*/
  v73 = 2; /*0x100ae8218*/
  v74 = v14; /*0x100ae8220*/
  v75 = 0; /*0x100ae8224*/
  if ( a2[3] == 0x8000000000000000LL ) /*0x100ae8230*/
  {
    v16 = 0; /*0x100ae8236*/
    goto LABEL_9; /*0x100ae8236*/
  }
  if ( a2[8] == v8 ) /*0x100ae82c0*/
  {
    v13 = a2[7]; /*0x100ae82c2*/
    v12 = (__int64)v7; /*0x100ae82c6*/
    v76 = v14; /*0x100ae82cc*/
    v21 = memcmp(v7, (const void *)v13, v8); /*0x100ae82d0*/
    v15 = v76; /*0x100ae82d5*/
    if ( !v21 ) /*0x100ae82db*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v72, &v60); /*0x100ae8578*/
      v48 = v64; /*0x100ae8588*/
      v77 = BYTE1(v65); /*0x100ae85a0*/
      v78 = v65; /*0x100ae85a0*/
      v76 = v72[0]; /*0x100ae85aa*/
      v38 = v72[1]; /*0x100ae85ae*/
      v39 = v72[2]; /*0x100ae85b5*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v50, a2 + 3); /*0x100ae85c3*/
      v72[0] = v76; /*0x100ae85cc*/
      v72[1] = v38; /*0x100ae85d3*/
      v72[2] = v39; /*0x100ae85da*/
      v72[3] = v9; /*0x100ae85e1*/
      v72[4] = v48; /*0x100ae85ec*/
      LOBYTE(v72[5]) = v78; /*0x100ae85f4*/
      BYTE1(v72[5]) = v77; /*0x100ae85fb*/
      v72[6] = v50; /*0x100ae860c*/
      v72[7] = v51; /*0x100ae8610*/
      v72[8] = v52; /*0x100ae861b*/
      v40 = v75; /*0x100ae861f*/
      if ( v75 == v73 ) /*0x100ae8627*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v73); /*0x100ae862d*/
      v15 = v74; /*0x100ae8632*/
      v41 = (void *)(v74 + 72 * v40); /*0x100ae863a*/
      qmemcpy(v41, v72, 0x48u); /*0x100ae864a*/
      v13 = (__int64)&v73; /*0x100ae864a*/
      v12 = (__int64)v41 + 72; /*0x100ae864a*/
      v16 = v40 + 1; /*0x100ae864d*/
      v75 = v16; /*0x100ae8650*/
LABEL_9:
      if ( a2[9] == 0x8000000000000000LL ) /*0x100ae823d*/
        goto LABEL_10; /*0x100ae823d*/
      v26 = v67; /*0x100ae83a4*/
      v27 = v68; /*0x100ae83ab*/
      if ( v68 == a2[14] ) /*0x100ae83b6*/
      {
        v13 = a2[13]; /*0x100ae83b8*/
        v12 = (__int64)v67; /*0x100ae83bc*/
        v76 = v16; /*0x100ae83c2*/
        v28 = v15; /*0x100ae83c6*/
        v29 = memcmp(v67, (const void *)v13, v68); /*0x100ae83c9*/
        v15 = v28; /*0x100ae83ce*/
        v16 = v76; /*0x100ae83d1*/
        if ( !v29 ) /*0x100ae83d7*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v72, &v66); /*0x100ae8686*/
          v49 = v69; /*0x100ae8696*/
          v42 = v70; /*0x100ae869d*/
          v78 = BYTE1(v70); /*0x100ae86ac*/
          v76 = v72[0]; /*0x100ae86b6*/
          v43 = v72[1]; /*0x100ae86ba*/
          v44 = v72[2]; /*0x100ae86c1*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v50, a2 + 9); /*0x100ae86d2*/
          v72[0] = v76; /*0x100ae86db*/
          v72[1] = v43; /*0x100ae86e2*/
          v72[2] = v44; /*0x100ae86e9*/
          result = *(double *)&v49; /*0x100ae86f0*/
          *(_OWORD *)&v72[3] = v49; /*0x100ae86f7*/
          LOBYTE(v72[5]) = v42; /*0x100ae86fb*/
          BYTE1(v72[5]) = v78; /*0x100ae8703*/
          v72[6] = v50; /*0x100ae8714*/
          v72[7] = v51; /*0x100ae8718*/
          v72[8] = v52; /*0x100ae8723*/
          v45 = v75; /*0x100ae8727*/
          if ( v75 == v73 ) /*0x100ae872f*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v73); /*0x100ae8735*/
          v15 = v74; /*0x100ae873a*/
          qmemcpy((void *)(v74 + 72 * v45), v72, 0x48u); /*0x100ae8752*/
          v16 = v45 + 1; /*0x100ae8755*/
          v75 = v16; /*0x100ae8758*/
          goto LABEL_10; /*0x100ae875c*/
        }
      }
      if ( v27 == a2[11] ) /*0x100ae83e1*/
      {
        v13 = a2[10]; /*0x100ae83e3*/
        v12 = (__int64)v26; /*0x100ae83e7*/
        v30 = v27; /*0x100ae83ea*/
        v31 = v15; /*0x100ae83ed*/
        v32 = memcmp(v26, (const void *)v13, v30); /*0x100ae83f0*/
        v15 = v31; /*0x100ae83f5*/
        if ( !v32 ) /*0x100ae83fa*/
        {
LABEL_10:
          if ( v16 ) /*0x100ae8246*/
          {
            result = codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines::haca5d114b57dfff7( /*0x100ae8263*/
                       (_QWORD *)a1,
                       v46,
                       v47,
                       v15,
                       v16);
            v17 = v75; /*0x100ae8268*/
            if ( v75 ) /*0x100ae826f*/
            {
              v18 = (_QWORD *)(v74 + 56); /*0x100ae8279*/
              do /*0x100ae8287*/
              {
                v19 = *(v18 - 7); /*0x100ae828d*/
                if ( v19 ) /*0x100ae8294*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v18 - 6), v19, 1); /*0x100ae829f*/
                v20 = *(v18 - 1); /*0x100ae82a4*/
                if ( v20 ) /*0x100ae82ab*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v18, v20, 1); /*0x100ae82b5*/
                v18 += 9; /*0x100ae8280*/
                --v17; /*0x100ae8284*/
              }
              while ( v17 ); /*0x100ae8287*/
            }
          }
          else
          {
            *(_QWORD *)a1 = 11; /*0x100ae84f8*/
          }
          goto LABEL_37; /*0x100ae8287*/
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x100ae8400*/
      v24 = 53; /*0x100ae8405*/
      v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x100ae8414*/
      if ( v33 ) /*0x100ae841c*/
      {
        qmemcpy(v33, "last session_meta changed before convergence rollback", 53); /*0x100ae8480*/
        *(_QWORD *)a1 = 10; /*0x100ae8483*/
        *(_QWORD *)(a1 + 8) = 53; /*0x100ae848a*/
        *(_QWORD *)(a1 + 16) = v33; /*0x100ae8492*/
        *(_QWORD *)(a1 + 24) = 53; /*0x100ae8496*/
        v34 = v75; /*0x100ae849e*/
        if ( v75 ) /*0x100ae84a5*/
        {
          v35 = (_QWORD *)(v74 + 56); /*0x100ae84ab*/
          do /*0x100ae84c7*/
          {
            v36 = *(v35 - 7); /*0x100ae84c9*/
            if ( v36 ) /*0x100ae84d0*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v35 - 6), v36, 1); /*0x100ae84db*/
            v37 = *(v35 - 1); /*0x100ae84e0*/
            if ( v37 ) /*0x100ae84e7*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v35, v37, 1); /*0x100ae84f1*/
            v35 += 9; /*0x100ae84c0*/
            --v34; /*0x100ae84c4*/
          }
          while ( v34 ); /*0x100ae84c7*/
        }
        goto LABEL_37; /*0x100ae84c7*/
      }
LABEL_53:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24); /*0x100ae8781*/
    }
  }
  if ( a2[5] == v8 ) /*0x100ae82e5*/
  {
    v13 = a2[4]; /*0x100ae82e7*/
    v12 = (__int64)v7; /*0x100ae82eb*/
    v22 = v8; /*0x100ae82ee*/
    v23 = v15; /*0x100ae82f1*/
    if ( !memcmp(v7, (const void *)v13, v22) ) /*0x100ae82fb*/
    {
      v15 = v23; /*0x100ae8663*/
      v16 = 0; /*0x100ae8666*/
      goto LABEL_9; /*0x100ae8673*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x100ae8301*/
  v24 = 54; /*0x100ae8306*/
  v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x100ae8315*/
  if ( !v25 ) /*0x100ae831d*/
    goto LABEL_53; /*0x100ae831d*/
  qmemcpy(v25, "first session_meta changed before convergence rollback", 54); /*0x100ae8381*/
  *(_QWORD *)a1 = 10; /*0x100ae8384*/
  *(_QWORD *)(a1 + 8) = 54; /*0x100ae838b*/
  *(_QWORD *)(a1 + 16) = v25; /*0x100ae8393*/
  *(_QWORD *)(a1 + 24) = 54; /*0x100ae8397*/
LABEL_37:
  if ( v73 ) /*0x100ae8506*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, 72 * v73, 8); /*0x100ae8519*/
  if ( v59 ) /*0x100ae8528*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v59, 1); /*0x100ae8536*/
  if ( v66 ) /*0x100ae8545*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100ae8553*/
  return result; /*0x100ae8558*/
}