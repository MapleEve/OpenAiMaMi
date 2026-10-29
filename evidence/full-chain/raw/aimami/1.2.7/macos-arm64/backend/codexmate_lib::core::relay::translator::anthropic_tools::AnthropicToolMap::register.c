// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::register::h115de28204431356; addr: 0x1007f56f0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:21Z
double __fastcall codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::register::h115de28204431356(
        const char **a1,
        _QWORD *a2,
        void *a3,
        signed __int64 a4,
        void *a5,
        signed __int64 a6,
        unsigned __int16 *__s2,
        __int64 __n)
{
  void *v9; // r14
  bool v10; // r13
  __int64 v11; // r15
  __int64 v12; // r15
  size_t v13; // r13
  const void *v14; // r14
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // r15
  void *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r13
  size_t v22; // rbx
  unsigned __int64 v23; // rax
  bool v24; // al
  __int64 v25; // rbx
  unsigned __int16 *v26; // r10
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r8
  unsigned __int64 v37; // rdi
  _QWORD *v38; // r15
  __int64 v39; // r8
  __int64 v40; // r14
  const void *v41; // rdi
  int v42; // eax
  void *v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdi
  unsigned __int8 *v46; // rdx
  unsigned __int64 v47; // rax
  int v48; // eax
  const void *v49; // rsi
  unsigned __int64 v50; // rcx
  int v51; // ecx
  int v52; // eax
  __int64 v53; // rsi
  int v54; // eax
  _QWORD *v55; // rbx
  size_t v56; // r15
  void *v57; // r12
  unsigned __int64 v58; // r14
  char *v59; // rax
  unsigned __int64 v60; // rcx
  size_t v61; // r13
  unsigned __int64 v62; // rax
  __int64 v63; // r12
  char *v64; // rbx
  unsigned __int64 v65; // r15
  size_t v66; // rdx
  __int64 v67; // r14
  int v68; // eax
  char v69; // cl
  unsigned __int64 v71; // r12
  int v72; // eax
  void *v73; // r13
  __int64 v74; // rax
  __int64 v75; // r14
  _QWORD *v76; // rbx
  double result; // xmm0_8
  size_t v78; // rax
  __int64 v79; // rdi
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  int v82; // eax
  bool v83; // zf
  unsigned __int64 v84; // rdx
  int v85; // ecx
  void *v86; // rcx
  size_t v87; // rax
  _BYTE v88[72]; // [rsp+10h] [rbp-1B0h] BYREF
  _BYTE v89[24]; // [rsp+58h] [rbp-168h] BYREF
  _QWORD v90[3]; // [rsp+70h] [rbp-150h] BYREF
  __int64 v91; // [rsp+88h] [rbp-138h]
  __int64 v92; // [rsp+90h] [rbp-130h]
  __int64 v93; // [rsp+A0h] [rbp-120h]
  __int64 v94; // [rsp+A8h] [rbp-118h]
  _QWORD v95[9]; // [rsp+B8h] [rbp-108h] BYREF
  __int64 v96; // [rsp+100h] [rbp-C0h]
  unsigned __int64 v97; // [rsp+108h] [rbp-B8h]
  void *v98; // [rsp+110h] [rbp-B0h]
  size_t v99; // [rsp+118h] [rbp-A8h] BYREF
  void *v100; // [rsp+120h] [rbp-A0h]
  size_t v101; // [rsp+128h] [rbp-98h]
  void *__s1; // [rsp+130h] [rbp-90h]
  _QWORD *v103; // [rsp+138h] [rbp-88h]
  void *v104; // [rsp+140h] [rbp-80h]
  void *v105; // [rsp+148h] [rbp-78h]
  size_t v106; // [rsp+150h] [rbp-70h]
  unsigned __int64 v107; // [rsp+158h] [rbp-68h]
  void *v108; // [rsp+160h] [rbp-60h]
  void *__src; // [rsp+168h] [rbp-58h]
  unsigned __int64 v110; // [rsp+170h] [rbp-50h]
  size_t v111; // [rsp+178h] [rbp-48h]
  void *v112; // [rsp+180h] [rbp-40h]
  const char **v113; // [rsp+188h] [rbp-38h]
  char v114; // [rsp+197h] [rbp-29h]

  if ( !a6 ) /*0x1007f5711*/
  {
    a1[1] = "Tool name is emptyConflicting Anthropic tool identitiesConflicting Anthropic tool types for one native identity"; /*0x1007f575a*/
    a1[2] = (const char *)18; /*0x1007f575e*/
    *a1 = (const char *)0x8000000000000000LL; /*0x1007f5766*/
    return result; /*0x1007f5766*/
  }
  v9 = nullptr; /*0x1007f5723*/
  v10 = a3 == nullptr || a4 == 0; /*0x1007f5726*/
  if ( !v10 ) /*0x1007f5729*/
  {
    if ( a4 >= 0 ) /*0x1007f577e*/
    {
      __src = a5; /*0x1007f5791*/
      v103 = a2; /*0x1007f5795*/
      v114 = a3 == nullptr || a4 == 0; /*0x1007f579c*/
      v105 = a3; /*0x1007f57a0*/
      v14 = a3; /*0x1007f57a4*/
      v13 = a4; /*0x1007f57aa*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1007f57ad*/
      v12 = 1; /*0x1007f57b2*/
      v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1); /*0x1007f57c0*/
      if ( v15 ) /*0x1007f57c8*/
      {
        v108 = v15; /*0x1007f57ca*/
        memcpy(v15, v14, v13); /*0x1007f57d7*/
        a3 = (void *)v14; /*0x1007f57dc*/
        v111 = v13; /*0x1007f57df*/
        v110 = v13; /*0x1007f57e3*/
        v9 = v105; /*0x1007f57ea*/
        v10 = v114; /*0x1007f57ee*/
        a2 = v103; /*0x1007f57f3*/
        a5 = __src; /*0x1007f57fa*/
        if ( a6 < 0 ) /*0x1007f580b*/
          goto LABEL_4; /*0x1007f580b*/
        goto LABEL_13; /*0x1007f580b*/
      }
    }
    else
    {
      v12 = 0; /*0x1007f5780*/
      v13 = a4; /*0x1007f5783*/
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v13); /*0x1007f578c*/
  }
  v111 = a4; /*0x1007f572f*/
  v110 = 0x8000000000000000LL; /*0x1007f5733*/
  if ( a6 < 0 ) /*0x1007f573a*/
  {
LABEL_4:
    v11 = 0; /*0x1007f5740*/
    goto LABEL_5; /*0x1007f5740*/
  }
LABEL_13:
  __src = a5; /*0x1007f5811*/
  v103 = a2; /*0x1007f5815*/
  v112 = a3; /*0x1007f581c*/
  v113 = a1; /*0x1007f5820*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1007f5824*/
  v11 = 1; /*0x1007f5829*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a6, 1); /*0x1007f5837*/
  if ( !v16 ) /*0x1007f583f*/
LABEL_5:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, a6); /*0x1007f5743*/
  v17 = __n; /*0x1007f5845*/
  v104 = v16; /*0x1007f5849*/
  v18 = v16; /*0x1007f584d*/
  memcpy(v16, __src, a6); /*0x1007f5857*/
  if ( __n < 0 ) /*0x1007f585f*/
  {
    v19 = 0; /*0x1007f5861*/
    goto LABEL_16; /*0x1007f5861*/
  }
  v114 = v10; /*0x1007f5875*/
  v105 = v9; /*0x1007f5879*/
  if ( __n ) /*0x1007f587d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18); /*0x1007f587f*/
    v19 = 1; /*0x1007f5887*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1007f5892*/
    if ( !v20 ) /*0x1007f589a*/
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, __n); /*0x1007f5864*/
    v21 = v20; /*0x1007f589c*/
    v17 = __n; /*0x1007f589f*/
  }
  else
  {
    v21 = 1; /*0x1007f58a5*/
  }
  memcpy((void *)v21, __s2, v17); /*0x1007f58b8*/
  v95[6] = v110; /*0x1007f58c1*/
  v95[7] = v108; /*0x1007f58cc*/
  v22 = v111; /*0x1007f58d3*/
  v95[8] = v111; /*0x1007f58d7*/
  v95[0] = a6; /*0x1007f58de*/
  v95[1] = v104; /*0x1007f58e9*/
  v95[2] = a6; /*0x1007f58f0*/
  v95[3] = v17; /*0x1007f58f7*/
  v98 = (void *)v21; /*0x1007f58fe*/
  v95[4] = v21; /*0x1007f5905*/
  v95[5] = v17; /*0x1007f590c*/
  v106 = a6; /*0x1007f5929*/
  codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::wire_name::h406181e9d0fd38d9( /*0x1007f5933*/
    &v99,
    (__int64)v105,
    v111,
    __src,
    a6,
    (__int64)__s2,
    v17);
  v23 = v103[4]; /*0x1007f593f*/
  v97 = v103[5]; /*0x1007f5947*/
  v107 = v23; /*0x1007f594e*/
  v24 = v23 != 0; /*0x1007f5955*/
  v114 |= v22 == 0; /*0x1007f595e*/
  v25 = v103[6]; /*0x1007f5961*/
  v26 = __s2; /*0x1007f5970*/
  if ( v24 && v25 != 0 )
  {
    v27 = 0; /*0x1007f5984*/
    v28 = v97; /*0x1007f5987*/
    v29 = v107; /*0x1007f598e*/
    while ( 1 )
    {
      if ( !v24 ) /*0x1007f59cf*/
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_4); /*0x1007f6255*/
      if ( v27 ) /*0x1007f59d8*/
      {
        v30 = __n; /*0x1007f59da*/
        if ( v28 < *(unsigned __int16 *)(v27 + 1066) ) /*0x1007f59e9*/
          goto LABEL_28; /*0x1007f59e9*/
        goto LABEL_39; /*0x1007f59e9*/
      }
      v30 = __n; /*0x1007f5a03*/
      if ( !v28 ) /*0x1007f5a07*/
      {
        v27 = v29; /*0x1007f5a3d*/
        goto LABEL_38; /*0x1007f5a40*/
      }
      v27 = v29; /*0x1007f5a0c*/
      if ( (v28 & 7) == 0 ) /*0x1007f5a13*/
        break; /*0x1007f5a13*/
      v33 = 0; /*0x1007f5a15*/
      do /*0x1007f5a2d*/
      {
        v27 = *(_QWORD *)(v27 + 1072); /*0x1007f5a20*/
        ++v33; /*0x1007f5a27*/
      }
      while ( (v28 & 7) != v33 ); /*0x1007f5a2d*/
      v34 = v28 - v33; /*0x1007f5a32*/
      if ( v28 >= 8 ) /*0x1007f5a39*/
        goto LABEL_37; /*0x1007f5a39*/
LABEL_38:
      v29 = 0; /*0x1007f5a8e*/
      v28 = 0; /*0x1007f5a90*/
      if ( *(_WORD *)(v27 + 1066) ) /*0x1007f5a93*/
      {
LABEL_28:
        v31 = v27; /*0x1007f59ef*/
        v32 = v28; /*0x1007f59f2*/
        goto LABEL_41; /*0x1007f59f5*/
      }
      do /*0x1007f5ad2*/
      {
LABEL_39:
        v31 = *(_QWORD *)v27; /*0x1007f5ab0*/
        if ( !*(_QWORD *)v27 ) /*0x1007f5ab7*/
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_745); /*0x1007f6247*/
        ++v29; /*0x1007f5abd*/
        v32 = *(unsigned __int16 *)(v27 + 1064); /*0x1007f5ac0*/
        v27 = *(_QWORD *)v27; /*0x1007f5ac8*/
      }
      while ( (unsigned __int16)v32 >= *(_WORD *)(v31 + 1066) ); /*0x1007f5ad2*/
LABEL_41:
      if ( v29 ) /*0x1007f5ad7*/
      {
        v35 = v31 + 8 * v32 + 1080; /*0x1007f5add*/
        if ( (v29 & 7) != 0 ) /*0x1007f5aec*/
        {
          v36 = 0; /*0x1007f5af2*/
          do /*0x1007f5b10*/
          {
            v27 = *(_QWORD *)v35; /*0x1007f5b00*/
            v35 = *(_QWORD *)v35 + 1072LL; /*0x1007f5b03*/
            ++v36; /*0x1007f5b0a*/
          }
          while ( (v29 & 7) != v36 ); /*0x1007f5b10*/
          v37 = v29 - v36; /*0x1007f5b15*/
          if ( v29 >= 8 ) /*0x1007f5b1c*/
          {
            do /*0x1007f5b5f*/
            {
LABEL_46:
              v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35 + 1072LL) /*0x1007f5b20*/
                                                                                          + 1072LL)
                                                                              + 1072LL)
                                                                  + 1072LL)
                                                      + 1072LL)
                                          + 1072LL)
                              + 1072LL);
              v35 = v27 + 1072; /*0x1007f5b54*/
              v37 -= 8LL; /*0x1007f5b5b*/
            }
            while ( v37 ); /*0x1007f5b5f*/
          }
        }
        else
        {
          v37 = v29; /*0x1007f5bd0*/
          if ( v29 >= 8 ) /*0x1007f5bd7*/
            goto LABEL_46; /*0x1007f5bd7*/
        }
        v28 = 0; /*0x1007f5b61*/
        if ( v30 != 6 ) /*0x1007f5b68*/
          goto LABEL_50; /*0x1007f5b68*/
        goto LABEL_23; /*0x1007f5b68*/
      }
      v28 = v32 + 1; /*0x1007f5b70*/
      v27 = v31; /*0x1007f5b74*/
      if ( v30 != 6 ) /*0x1007f5b7b*/
      {
LABEL_50:
        if ( v30 != 8 || *(_QWORD *)v26 != 0x6E6F6974636E7566LL ) /*0x1007f5b8e*/
          goto LABEL_24; /*0x1007f5b8e*/
        goto LABEL_52; /*0x1007f5b8e*/
      }
LABEL_23:
      if ( *(_DWORD *)v26 ^ 0x74737563 | v26[2] ^ 0x6D6F ) /*0x1007f59b5*/
        goto LABEL_24; /*0x1007f59b7*/
LABEL_52:
      v38 = (_QWORD *)(v31 + 72 * v32 + 272); /*0x1007f5b94*/
      v39 = *(_QWORD *)(v31 + 72 * v32 + 304); /*0x1007f5ba0*/
      v40 = *(_QWORD *)(v31 + 72 * v32 + 312); /*0x1007f5ba4*/
      if ( v40 == 6 ) /*0x1007f5bac*/
      {
        if ( *(_DWORD *)v39 ^ 0x74737563 | *(unsigned __int16 *)(v39 + 4) ^ 0x6D6F ) /*0x1007f5bf4*/
          goto LABEL_24; /*0x1007f5bf6*/
      }
      else if ( v40 != 8 || *(_QWORD *)v39 != 0x6E6F6974636E7566LL ) /*0x1007f5bbb*/
      {
        goto LABEL_24; /*0x1007f5bbb*/
      }
      if ( *(_QWORD *)(v31 + 72 * v32 + 288) != v106 ) /*0x1007f5c04*/
        goto LABEL_24; /*0x1007f5c04*/
      v41 = *(const void **)(v31 + 72 * v32 + 280); /*0x1007f5c0a*/
      __s1 = *(void **)(v31 + 72 * v32 + 304); /*0x1007f5c16*/
      v42 = memcmp(v41, __src, v106); /*0x1007f5c1d*/
      v43 = __s1; /*0x1007f5c22*/
      v26 = __s2; /*0x1007f5c33*/
      if ( v42 ) /*0x1007f5c39*/
        goto LABEL_24; /*0x1007f5c39*/
      v44 = v38[8]; /*0x1007f5c50*/
      if ( v38[6] != 0x8000000000000000LL && v44 != 0 ) /*0x1007f5c57*/
      {
        v45 = v38[7]; /*0x1007f5c70*/
        if ( v44 == 9 ) /*0x1007f5c78*/
        {
          v47 = _byteswap_uint64(*(_QWORD *)v45); /*0x1007f5c7d*/
          v46 = (unsigned __int8 *)v112; /*0x1007f5c8d*/
          if ( v47 == 0x66756E6374696F6ELL ) /*0x1007f5c91*/
            v48 = *(unsigned __int8 *)(v45 + 8) - 115; /*0x1007f5c97*/
          else
            v48 = 2 * (v47 >= 0x66756E6374696F6ELL) - 1; /*0x1007f5ca8*/
          if ( !v48 ) /*0x1007f5cb3*/
            v45 = 0; /*0x1007f5cb3*/
          v44 = 9; /*0x1007f5cb7*/
        }
        else
        {
          v46 = (unsigned __int8 *)v112; /*0x1007f5c9c*/
        }
        if ( v114 ) /*0x1007f5cc0*/
        {
          if ( v45 ) /*0x1007f5cc5*/
            goto LABEL_24; /*0x1007f5cc5*/
          goto LABEL_87; /*0x1007f5cc5*/
        }
        goto LABEL_75; /*0x1007f5cc0*/
      }
      if ( !v114 )
      {
        v45 = 0; /*0x1007f5c68*/
        v46 = (unsigned __int8 *)v112; /*0x1007f5c6a*/
LABEL_75:
        v49 = v46; /*0x1007f5cd0*/
        if ( v111 == 9 )
        {
          v50 = _byteswap_uint64(*(_QWORD *)v46); /*0x1007f5cdd*/
          v51 = v50 == 0x66756E6374696F6ELL ? v46[8] - 115 : 2 * (v50 >= 0x66756E6374696F6ELL) - 1;
          v49 = v105; /*0x1007f5d04*/
          if ( !v51 ) /*0x1007f5d0d*/
            v49 = nullptr; /*0x1007f5d0d*/
        }
        if ( v45 ) /*0x1007f5d14*/
        {
          if ( !v49 ) /*0x1007f5d19*/
            goto LABEL_24; /*0x1007f5d19*/
          if ( v44 != v111 ) /*0x1007f5d23*/
            goto LABEL_24; /*0x1007f5d23*/
          v52 = memcmp((const void *)v45, v49, v111); /*0x1007f5d2d*/
          v43 = __s1; /*0x1007f5d32*/
          v26 = __s2; /*0x1007f5d43*/
          if ( v52 ) /*0x1007f5d49*/
            goto LABEL_24; /*0x1007f5d49*/
        }
        else if ( v49 ) /*0x1007f5d54*/
        {
          goto LABEL_24; /*0x1007f5d54*/
        }
      }
LABEL_87:
      v53 = 56; /*0x1007f5d5a*/
      if ( v40 != __n ) /*0x1007f5d66*/
      {
        v55 = v113; /*0x1007f611b*/
        v56 = v106; /*0x1007f6129*/
        v57 = v108; /*0x1007f612d*/
        v58 = v110; /*0x1007f6131*/
        v59 = "Conflicting Anthropic tool types for one native identity"; /*0x1007f6135*/
        goto LABEL_120; /*0x1007f613c*/
      }
      v54 = memcmp(v43, v26, __n); /*0x1007f5d72*/
      v26 = __s2; /*0x1007f5d81*/
      if ( v54 ) /*0x1007f5d87*/
      {
        v55 = v113; /*0x1007f5d8d*/
        v56 = v106; /*0x1007f5d9b*/
        v57 = v108; /*0x1007f5d9f*/
        v58 = v110; /*0x1007f5da3*/
        v59 = "Conflicting Anthropic tool types for one native identity"; /*0x1007f5da7*/
        v53 = 56; /*0x1007f5dae*/
        goto LABEL_120; /*0x1007f5db3*/
      }
LABEL_24:
      v24 = 1; /*0x1007f59bd*/
      v29 = 0; /*0x1007f59bf*/
      if ( !--v25 ) /*0x1007f59c7*/
        goto LABEL_90; /*0x1007f59c7*/
    }
    v34 = v28; /*0x1007f5a42*/
    if ( v28 < 8 ) /*0x1007f5a49*/
      goto LABEL_38; /*0x1007f5a49*/
    do /*0x1007f5a8c*/
    {
LABEL_37:
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 1072) /*0x1007f5a50*/
                                                                                              + 1072LL)
                                                                                  + 1072LL)
                                                                      + 1072LL)
                                                          + 1072LL)
                                              + 1072LL)
                                  + 1072LL)
                      + 1072LL);
      v34 -= 8LL; /*0x1007f5a88*/
    }
    while ( v34 ); /*0x1007f5a8c*/
    goto LABEL_38; /*0x1007f5a8c*/
  }
LABEL_90:
  v60 = v107; /*0x1007f5db8*/
  if ( v107 ) /*0x1007f5dbf*/
  {
    __s1 = v100; /*0x1007f5dcc*/
    v61 = v101; /*0x1007f5dd3*/
LABEL_92:
    v62 = v60 + 8; /*0x1007f5dda*/
    v107 = v60; /*0x1007f5dde*/
    v96 = *(unsigned __int16 *)(v60 + 1066); /*0x1007f5de9*/
    __src = (void *)(9LL * (unsigned int)(8 * v96)); /*0x1007f5dfb*/
    v63 = -1; /*0x1007f5dff*/
    v64 = nullptr; /*0x1007f5e06*/
    do /*0x1007f5e58*/
    {
      if ( __src == v64 ) /*0x1007f5e14*/
      {
        v63 = v96; /*0x1007f5e63*/
LABEL_102:
        if ( v97-- == 0 ) /*0x1007f5e6e*/
          goto LABEL_109; /*0x1007f5e76*/
        v60 = *(_QWORD *)(v107 + 8 * v63 + 1072); /*0x1007f5e7c*/
        goto LABEL_92; /*0x1007f5e84*/
      }
      v65 = v62 + 24; /*0x1007f5e16*/
      v66 = *(_QWORD *)(v62 + 16); /*0x1007f5e1e*/
      v67 = v61 - v66; /*0x1007f5e25*/
      if ( v61 < v66 ) /*0x1007f5e28*/
        v66 = v61; /*0x1007f5e28*/
      v68 = memcmp(__s1, *(const void **)(v62 + 8), v66); /*0x1007f5e33*/
      if ( v68 ) /*0x1007f5e3c*/
        v67 = v68; /*0x1007f5e3c*/
      v69 = (v67 > 0) - (v67 < 0); /*0x1007f5e49*/
      v64 += 72; /*0x1007f5e4b*/
      ++v63; /*0x1007f5e4f*/
      v62 = v65; /*0x1007f5e52*/
    }
    while ( v69 == 1 ); /*0x1007f5e58*/
    if ( v69 ) /*0x1007f5e5f*/
      goto LABEL_102; /*0x1007f5e5f*/
    v53 = 37; /*0x1007f5e89*/
    v59 = "Conflicting Anthropic tool identitiesConflicting Anthropic tool types for one native identity"; /*0x1007f5e8e*/
    v56 = v106; /*0x1007f5e95*/
    v71 = v107; /*0x1007f5e99*/
    if ( *(_QWORD *)&v64[v107 + 216] != v106 ) /*0x1007f5ea5*/
    {
      v55 = v113; /*0x1007f6016*/
      v57 = v108; /*0x1007f6024*/
      v58 = v110; /*0x1007f6028*/
      goto LABEL_120; /*0x1007f602c*/
    }
    v72 = memcmp(*(const void **)&v64[v107 + 208], v104, v106); /*0x1007f5eba*/
    v73 = v108; /*0x1007f5ecb*/
    v58 = v110; /*0x1007f5ecf*/
    if ( v72 || *(_QWORD *)&v64[v71 + 240] != __n ) /*0x1007f5ee5*/
    {
      v55 = v113; /*0x1007f602e*/
      v59 = "Conflicting Anthropic tool identitiesConflicting Anthropic tool types for one native identity"; /*0x1007f6032*/
      v53 = 37; /*0x1007f6039*/
      v57 = v108; /*0x1007f603e*/
      goto LABEL_120; /*0x1007f603e*/
    }
    LODWORD(v74) = memcmp(*(const void **)&v64[v71 + 232], v98, __n); /*0x1007f5efa*/
    if ( (_DWORD)v74 ) /*0x1007f5f01*/
    {
      v55 = v113; /*0x1007f5f07*/
      v59 = "Conflicting Anthropic tool identitiesConflicting Anthropic tool types for one native identity"; /*0x1007f5f0b*/
      v53 = 37; /*0x1007f5f12*/
      v57 = v73; /*0x1007f5f17*/
      goto LABEL_120; /*0x1007f5f24*/
    }
    if ( *(_QWORD *)&v64[v71 + 248] == 0x8000000000000000LL ) /*0x1007f60c0*/
    {
      v79 = 0; /*0x1007f60c2*/
      v55 = v113; /*0x1007f60c4*/
      v57 = v73; /*0x1007f60c8*/
      goto LABEL_138; /*0x1007f60cb*/
    }
    v80 = v71; /*0x1007f60d0*/
    v74 = *(_QWORD *)&v64[v71 + 264]; /*0x1007f60d3*/
    v57 = v73; /*0x1007f60de*/
    if ( v74 ) /*0x1007f60e1*/
    {
      v79 = *(_QWORD *)&v64[v80 + 256]; /*0x1007f60e3*/
      if ( v74 == 9 ) /*0x1007f60ef*/
      {
        v81 = _byteswap_uint64(*(_QWORD *)v79); /*0x1007f60fe*/
        v55 = v113; /*0x1007f6104*/
        if ( v81 == 0x66756E6374696F6ELL ) /*0x1007f6108*/
          v82 = *(unsigned __int8 *)(v79 + 8) - 115; /*0x1007f610e*/
        else
          v82 = 2 * (v81 >= 0x66756E6374696F6ELL) - 1; /*0x1007f6147*/
        if ( !v82 ) /*0x1007f614f*/
          v79 = 0; /*0x1007f614f*/
        v74 = 9; /*0x1007f6153*/
LABEL_138:
        if ( v114 ) /*0x1007f615c*/
        {
          v83 = v79 == 0; /*0x1007f615e*/
        }
        else
        {
          if ( v111 == 9 ) /*0x1007f6168*/
          {
            v84 = _byteswap_uint64(*(_QWORD *)v112); /*0x1007f617b*/
            if ( v84 == 0x66756E6374696F6ELL ) /*0x1007f6181*/
              v85 = *((unsigned __int8 *)v112 + 8) - 115; /*0x1007f6187*/
            else
              v85 = 2 * (v84 >= 0x66756E6374696F6ELL) - 1; /*0x1007f6192*/
            v83 = v85 == 0; /*0x1007f6198*/
            v86 = v105; /*0x1007f619a*/
            if ( v83 ) /*0x1007f619e*/
              v86 = nullptr; /*0x1007f619e*/
            v112 = v86; /*0x1007f61a2*/
          }
          if ( v79 ) /*0x1007f61a9*/
          {
            if ( !v112 || v74 != v111 ) /*0x1007f61b9*/
            {
              v59 = "Conflicting Anthropic tool identitiesConflicting Anthropic tool types for one native identity"; /*0x1007f622f*/
              v53 = 37; /*0x1007f6236*/
              goto LABEL_120; /*0x1007f623b*/
            }
            v83 = memcmp((const void *)v79, v112, v111) == 0; /*0x1007f61ce*/
          }
          else
          {
            v83 = v112 == nullptr; /*0x1007f61d2*/
          }
        }
        v59 = "Conflicting Anthropic tool identitiesConflicting Anthropic tool types for one native identity"; /*0x1007f61d7*/
        v53 = 37; /*0x1007f61de*/
        if ( v83 ) /*0x1007f61e3*/
        {
          v55[2] = v101; /*0x1007f61f0*/
          v87 = v99; /*0x1007f61f4*/
          v55[1] = v100; /*0x1007f6202*/
          *v55 = v87; /*0x1007f6206*/
          if ( !(2 * v58) ) /*0x1007f6214*/
            goto LABEL_123; /*0x1007f6214*/
          goto LABEL_154; /*0x1007f6214*/
        }
LABEL_120:
        v55[1] = v59; /*0x1007f6041*/
        v55[2] = v53; /*0x1007f6045*/
        *v55 = 0x8000000000000000LL; /*0x1007f6049*/
        if ( v99 ) /*0x1007f6056*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v99, 1); /*0x1007f6064*/
        if ( !(2 * v58) ) /*0x1007f6069*/
          goto LABEL_123; /*0x1007f6074*/
LABEL_154:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v58, 1); /*0x1007f621a*/
LABEL_123:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v56, 1); /*0x1007f607a*/
        if ( __n ) /*0x1007f6092*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, __n, 1); /*0x1007f60a4*/
        return result; /*0x1007f60a9*/
      }
    }
    else
    {
      v79 = 0; /*0x1007f6113*/
    }
    v55 = v113; /*0x1007f6115*/
    goto LABEL_138; /*0x1007f6119*/
  }
LABEL_109:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v89, &v99); /*0x1007f5f29*/
  qmemcpy(v88, v95, sizeof(v88)); /*0x1007f5f60*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hf9b94b2b009864af(v90, v103 + 4, v89, v88); /*0x1007f5f7a*/
  v75 = v90[0]; /*0x1007f5f7f*/
  v76 = v113; /*0x1007f5f93*/
  if ( v90[0] != 0x8000000000000000LL ) /*0x1007f5f97*/
  {
    if ( v93 != 0x8000000000000000LL && v93 ) /*0x1007f5fa8*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x1007f5fb6*/
    if ( v75 ) /*0x1007f5fbe*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90[1], v75, 1); /*0x1007f5fcf*/
    if ( v91 ) /*0x1007f5fde*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1); /*0x1007f5fec*/
  }
  v76[2] = v101; /*0x1007f5ff8*/
  v78 = v99; /*0x1007f5ffc*/
  v76[1] = v100; /*0x1007f600a*/
  *v76 = v78; /*0x1007f600e*/
  return result; /*0x1007f5769*/
}