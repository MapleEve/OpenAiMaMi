// __ZN13codexmate_lib4core5relay12upstream_url17join_upstream_url @ 0x10089f940 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
        __int64 *a1,
        unsigned __int64 a2,
        size_t a3,
        _BYTE *a4,
        signed __int64 a5)
{
  char *v6; // r15
  __int64 *v7; // rbx
  size_t v8; // r12
  char *v9; // rdx
  int v10; // eax
  char v11; // si
  char v12; // di
  char v13; // r8
  char *v14; // rdx
  int v15; // edi
  int v16; // esi
  __int64 v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // r13
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  char *v25; // r12
  int v26; // eax
  char v27; // cl
  char v28; // dl
  char v29; // si
  char *v30; // r12
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // r12
  char *v35; // rdx
  int v36; // ecx
  char v37; // si
  char v38; // di
  char v39; // r8
  char *v40; // rdx
  int v41; // edi
  int v42; // esi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdi
  _BYTE *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r15
  _BYTE *v49; // r14
  size_t v50; // r12
  __int64 v51; // rax
  size_t v52; // rdx
  unsigned __int8 *v53; // rcx
  unsigned __int8 *v54; // rdx
  int v55; // eax
  int v56; // esi
  int v57; // r8d
  int v58; // edi
  void *v59; // rax
  __int64 v60; // r13
  __int64 v61; // rdx
  char *v62; // rax
  __int64 v63; // rdx
  __int64 *v64; // r14
  char v65; // bl
  bool v66; // zf
  __int64 v67; // rax
  signed __int64 v68; // rsi
  void *v70; // r12
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 *v73; // r15
  char *v74; // rbx
  __int64 v75; // rax
  _QWORD v76[11]; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v77[2]; // [rsp+58h] [rbp-E8h] BYREF
  void *v78; // [rsp+68h] [rbp-D8h]
  __int64 *v79; // [rsp+70h] [rbp-D0h]
  signed __int64 v80; // [rsp+78h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+80h] [rbp-C0h]
  unsigned __int64 v82; // [rsp+88h] [rbp-B8h]
  _QWORD v83[13]; // [rsp+90h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+F8h] [rbp-48h] BYREF
  unsigned __int64 v85; // [rsp+100h] [rbp-40h]
  void *__src; // [rsp+108h] [rbp-38h] BYREF
  size_t __n; // [rsp+110h] [rbp-30h]

  v6 = (char *)a2; /*0x10089f957*/
  v7 = a1; /*0x10089f95a*/
  v77[0] = a4; /*0x10089f95d*/
  v77[1] = a5; /*0x10089f964*/
  while ( 1 ) /*0x10089f97b*/
  {
    v8 = a3; /*0x10089f97b*/
    if ( !a3 ) /*0x10089f981*/
      break; /*0x10089f981*/
    v9 = &v6[a3]; /*0x10089f983*/
    v10 = v6[v8 - 1]; /*0x10089f987*/
    if ( v10 >= 0 ) /*0x10089f98d*/
    {
      a3 = v8 - 1; /*0x10089f973*/
      if ( v10 != 47 ) /*0x10089f979*/
        break; /*0x10089f979*/
    }
    else
    {
      v11 = *(v9 - 2); /*0x10089f98f*/
      if ( v11 >= -64 ) /*0x10089f997*/
      {
        v14 = v9 - 2; /*0x10089f9bc*/
        v16 = v11 & 0x1F; /*0x10089f9c0*/
      }
      else
      {
        v12 = *(v9 - 3); /*0x10089f999*/
        if ( v12 >= -64 ) /*0x10089f9a1*/
        {
          v14 = v9 - 3; /*0x10089f9c5*/
          v15 = v12 & 0xF; /*0x10089f9c9*/
        }
        else
        {
          v13 = *(v9 - 4); /*0x10089f9a3*/
          v14 = v9 - 4; /*0x10089f9a8*/
          v15 = ((v13 & 7) << 6) | v12 & 0x3F; /*0x10089f9b7*/
        }
        a1 = (__int64 *)(unsigned int)(v15 << 6); /*0x10089f9cc*/
        v16 = (unsigned int)a1 | v11 & 0x3F; /*0x10089f9d2*/
      }
      a2 = (unsigned int)(v16 << 6); /*0x10089f9d4*/
      a3 = v14 - v6; /*0x10089f9dc*/
      if ( ((unsigned int)a2 | v10 & 0x3F) != 0x2F ) /*0x10089f9e2*/
        break; /*0x10089f9e2*/
    }
  }
  __src = v6; /*0x10089f9e4*/
  __n = v8; /*0x10089f9e8*/
  if ( a5 && *a4 == 47 ) /*0x10089f9f4*/
  {
    if ( a5 < 0 ) /*0x10089f9f9*/
    {
      v17 = 0; /*0x10089f9ff*/
      goto LABEL_16; /*0x10089f9ff*/
    }
    v79 = v7; /*0x10089fe73*/
    v78 = a4; /*0x10089fe7a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10089fe81*/
    v17 = 1; /*0x10089fe86*/
    v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x10089fe93*/
    if ( !v59 ) /*0x10089fe9b*/
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, a5); /*0x10089fa01*/
    v60 = (__int64)v59; /*0x10089fea1*/
    memcpy(v59, v78, a5); /*0x10089feb1*/
    v80 = a5; /*0x10089feb6*/
    v81 = v60; /*0x10089febd*/
    v82 = a5; /*0x10089fec4*/
    v7 = v79; /*0x10089fecb*/
  }
  else
  {
    v83[0] = v77; /*0x10089fa13*/
    v83[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10089fa21*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v80, &unk_1017C5E59, v83); /*0x10089fa3d*/
    v6 = (char *)__src; /*0x10089fa42*/
    v8 = __n; /*0x10089fa46*/
  }
  v83[4] = 0; /*0x10089fa4a*/
  v83[0] = 0; /*0x10089fa55*/
  v83[2] = 0; /*0x10089fa60*/
  v18 = v83; /*0x10089fa72*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(v76, v83, v6, v8); /*0x10089fa7f*/
  v19 = v76[0]; /*0x10089fa84*/
  if ( __OFSUB__(-v76[0], 1) ) /*0x10089fa91*/
  {
    do /*0x10089fb47*/
    {
      while ( 1 ) /*0x10089fadb*/
      {
        if ( !v8 ) /*0x10089fade*/
        {
          v34 = 1; /*0x10089fc0f*/
          v24 = 0; /*0x10089fc15*/
          goto LABEL_47; /*0x10089fc15*/
        }
        v24 = v8; /*0x10089fae4*/
        v25 = &v6[v8]; /*0x10089fae7*/
        v26 = *(v25 - 1); /*0x10089faea*/
        if ( v26 < 0 ) /*0x10089faf2*/
          break; /*0x10089faf2*/
        v8 = v25 - 1 - v6; /*0x10089fad3*/
        if ( v26 != 47 ) /*0x10089fad9*/
          goto LABEL_30; /*0x10089fad9*/
      }
      v27 = *(v25 - 2); /*0x10089faf4*/
      if ( v27 >= -64 ) /*0x10089fafd*/
      {
        v30 = v25 - 2; /*0x10089fb21*/
        v32 = v27 & 0x1F; /*0x10089fb25*/
      }
      else
      {
        v28 = *(v25 - 3); /*0x10089faff*/
        if ( v28 >= -64 ) /*0x10089fb08*/
        {
          v30 = v25 - 3; /*0x10089fb2a*/
          v31 = v28 & 0xF; /*0x10089fb2e*/
        }
        else
        {
          v29 = *(v25 - 4); /*0x10089fb0a*/
          v30 = v25 - 4; /*0x10089fb10*/
          v18 = (_QWORD *)((unsigned __int8)(v29 & 7) << 6); /*0x10089fb17*/
          v31 = (unsigned int)v18 | v28 & 0x3F; /*0x10089fb1d*/
        }
        v32 = (v31 << 6) | v27 & 0x3F; /*0x10089fb37*/
      }
      v8 = v30 - v6; /*0x10089fb41*/
    }
    while ( ((v32 << 6) | v26 & 0x3F) == 0x2F ); /*0x10089fb47*/
LABEL_30:
    if ( v24 < 0 ) /*0x10089fb4c*/
    {
LABEL_113:
      v33 = 0; /*0x1008a013e*/
      goto LABEL_114; /*0x1008a013e*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v18); /*0x10089fb52*/
    v33 = 1; /*0x10089fb64*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x10089fb69*/
    if ( !v34 ) /*0x10089fb6f*/
LABEL_114:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v33, v24); /*0x1008a0140*/
LABEL_47:
    v44 = (__int64)v6; /*0x10089fc18*/
    memcpy((void *)v34, v6, v24); /*0x10089fc21*/
  }
  else
  {
    qmemcpy(&v83[1], &v76[1], 0x50u); /*0x10089faa6*/
    v20 = (unsigned __int64)v77; /*0x10089faa6*/
    v83[0] = v76[0]; /*0x10089faa9*/
    v21 = (unsigned __int64)v83; /*0x10089fab0*/
    v22 = (char *)url::Url::path::hdacd300d547f5011(v83); /*0x10089fab7*/
    do /*0x10089fbf5*/
    {
      while ( 1 ) /*0x10089fb8b*/
      {
        if ( !v23 ) /*0x10089fb8e*/
        {
          v34 = 1; /*0x10089fc28*/
          v24 = 0; /*0x10089fc2e*/
          goto LABEL_49; /*0x10089fc2e*/
        }
        v24 = v23; /*0x10089fb94*/
        v35 = &v22[v23]; /*0x10089fb97*/
        v36 = *(v35 - 1); /*0x10089fb9a*/
        if ( v36 < 0 ) /*0x10089fba0*/
          break; /*0x10089fba0*/
        v23 = v35 - 1 - v22; /*0x10089fb83*/
        if ( v36 != 47 ) /*0x10089fb89*/
          goto LABEL_43; /*0x10089fb89*/
      }
      v37 = *(v35 - 2); /*0x10089fba2*/
      if ( v37 >= -64 ) /*0x10089fbaa*/
      {
        v40 = v35 - 2; /*0x10089fbcf*/
        v42 = v37 & 0x1F; /*0x10089fbd3*/
      }
      else
      {
        v38 = *(v35 - 3); /*0x10089fbac*/
        if ( v38 >= -64 ) /*0x10089fbb4*/
        {
          v40 = v35 - 3; /*0x10089fbd8*/
          v41 = v38 & 0xF; /*0x10089fbdc*/
        }
        else
        {
          v39 = *(v35 - 4); /*0x10089fbb6*/
          v40 = v35 - 4; /*0x10089fbbb*/
          v41 = ((v39 & 7) << 6) | v38 & 0x3F; /*0x10089fbca*/
        }
        v21 = (unsigned int)(v41 << 6); /*0x10089fbdf*/
        v42 = v21 | v37 & 0x3F; /*0x10089fbe5*/
      }
      v20 = (unsigned int)(v42 << 6); /*0x10089fbe7*/
      v23 = v40 - v22; /*0x10089fbef*/
    }
    while ( ((unsigned int)v20 | v36 & 0x3F) == 0x2F ); /*0x10089fbf5*/
LABEL_43:
    if ( v24 < 0 ) /*0x10089fbfa*/
    {
      v43 = 0; /*0x10089fc00*/
      goto LABEL_45; /*0x10089fc00*/
    }
    v73 = v7; /*0x1008a01c8*/
    v74 = v22; /*0x1008a01cb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v20); /*0x1008a01ce*/
    v75 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x1008a01db*/
    v43 = 1; /*0x1008a01e0*/
    if ( !v75 ) /*0x1008a01e8*/
LABEL_45:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v43, v24); /*0x10089fc02*/
    v34 = v75; /*0x1008a01ee*/
    v22 = v74; /*0x1008a01f1*/
    v7 = v73; /*0x1008a01f4*/
LABEL_49:
    v44 = (__int64)v22; /*0x10089fc31*/
    memcpy((void *)v34, v22, v24); /*0x10089fc3a*/
    if ( v19 ) /*0x10089fc42*/
    {
      v44 = v19; /*0x10089fc50*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83[1], v19, 1); /*0x10089fc53*/
    }
  }
  v83[0] = 0; /*0x10089fc58*/
  v83[1] = v24; /*0x10089fc63*/
  v83[2] = v34; /*0x10089fc6a*/
  v83[3] = v24; /*0x10089fc71*/
  v83[4] = 0; /*0x10089fc78*/
  v83[5] = v24; /*0x10089fc83*/
  v83[6] = 0x2F0000002FLL; /*0x10089fc94*/
  LOBYTE(v83[7]) = 1; /*0x10089fc98*/
  LOWORD(v83[8]) = 1; /*0x10089fc9c*/
  v45 = (__int64)v83; /*0x10089fca2*/
  v46 = (_BYTE *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(v83); /*0x10089fca9*/
  LOBYTE(v44) = v46 == nullptr || v47 == 0; /*0x10089fcbb*/
  if ( (_BYTE)v44 || v47 == 1 || *v46 != 118 ) /*0x10089fdde*/
  {
LABEL_52:
    if ( v24 ) /*0x10089fcc7*/
    {
      v45 = v34; /*0x10089fcce*/
      v44 = v24; /*0x10089fcd1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v24, 1); /*0x10089fcd4*/
    }
    goto LABEL_54; /*0x10089fcd4*/
  }
  v53 = v46 + 1; /*0x10089fde4*/
  v54 = &v46[v47]; /*0x10089fde8*/
  while ( v53 != v54 ) /*0x10089fe02*/
  {
    v55 = *v53; /*0x10089fe08*/
    if ( (v55 & 0x80u) == 0 ) /*0x10089fe0d*/
    {
      ++v53; /*0x10089fdf0*/
    }
    else
    {
      v56 = v55 & 0x1F; /*0x10089fe11*/
      v57 = v53[1] & 0x3F; /*0x10089fe19*/
      if ( (unsigned __int8)v55 <= 0xDFu ) /*0x10089fe1f*/
      {
        v53 += 2; /*0x10089fe58*/
        v44 = v57 | (unsigned int)(v56 << 6); /*0x10089fe5f*/
        v55 = v44; /*0x10089fe62*/
      }
      else
      {
        v58 = (v57 << 6) | v53[2] & 0x3F; /*0x10089fe2c*/
        if ( (unsigned __int8)v55 < 0xF0u ) /*0x10089fe31*/
        {
          v53 += 3; /*0x10089fe66*/
          v44 = (unsigned int)(v56 << 12); /*0x10089fe6a*/
          v45 = (unsigned int)v44 | v58; /*0x10089fe6d*/
          v55 = v45; /*0x10089fe6f*/
        }
        else
        {
          v44 = (unsigned __int8)(v55 & 7) << 18; /*0x10089fe3a*/
          v45 = (unsigned int)(v58 << 6); /*0x10089fe3d*/
          v55 = v44 | v45 | v53[3] & 0x3F; /*0x10089fe45*/
          if ( v55 == 1114112 ) /*0x10089fe4c*/
            break; /*0x10089fe4c*/
          v53 += 4; /*0x10089fe52*/
        }
      }
    }
    if ( (unsigned int)(v55 - 58) < 0xFFFFFFF6 ) /*0x10089fdf9*/
      goto LABEL_52; /*0x10089fdf9*/
  }
  if ( v24 ) /*0x10089ff7b*/
  {
    v45 = v34; /*0x10089ff82*/
    v44 = v24; /*0x10089ff85*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v24, 1); /*0x10089ff88*/
  }
  v48 = v81; /*0x10089ff8d*/
  if ( v82 == 3 ) /*0x10089ff9f*/
  {
    if ( !(*(_WORD *)v81 ^ 0x762F | *(unsigned __int8 *)(v81 + 2) ^ 0x31) ) /*0x10089ffb7*/
      goto LABEL_110; /*0x10089ffba*/
LABEL_54:
    v48 = v81; /*0x10089fcd9*/
    v84 = v81; /*0x10089fcea*/
    v85 = v82; /*0x10089fcee*/
    if ( !v82 ) /*0x10089fcf5*/
      goto LABEL_112; /*0x10089fcf5*/
    goto LABEL_55; /*0x10089fcf5*/
  }
  if ( v82 <= 3 || *(_DWORD *)v81 != 791770671 ) /*0x1008a0108*/
    goto LABEL_54; /*0x1008a0108*/
LABEL_110:
  if ( *(_WORD *)v81 ^ 0x762F | *(unsigned __int8 *)(v81 + 2) ^ 0x31 ) /*0x1008a0120*/
  {
    v84 = 1; /*0x1008a0125*/
    v85 = 0; /*0x1008a012d*/
    goto LABEL_112; /*0x1008a012d*/
  }
  v84 = v81 + 3; /*0x1008a01a8*/
  v85 = v82 - 3; /*0x1008a01ac*/
  if ( v82 != 3 ) /*0x1008a01b3*/
  {
LABEL_55:
    v49 = __src; /*0x10089fcfb*/
    v50 = __n; /*0x10089fcff*/
    v83[4] = 0; /*0x10089fd03*/
    v83[0] = 0; /*0x10089fd0e*/
    v83[2] = 0; /*0x10089fd19*/
    url::ParseOptions::parse::h7da66aa6bebaf5b6(v76, v83, __src, __n); /*0x10089fd38*/
    if ( v76[0] == 0x8000000000000000LL ) /*0x10089fd4e*/
    {
      core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v83, v49, v50, "://https", 3); /*0x10089fd6e*/
      _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10089fd81*/
        v76,
        v83);
      if ( LODWORD(v76[0]) == 1 ) /*0x10089fd8d*/
      {
        v51 = v76[2]; /*0x10089fd93*/
        v52 = v50 - v76[2]; /*0x10089fd9d*/
        if ( v50 - v76[2] <= 0xF ) /*0x10089fda4*/
        {
          if ( v50 != v76[2] ) /*0x10089fdb3*/
          {
            while ( v49[v51] != 47 ) /*0x10089fdbe*/
            {
              if ( v50 == ++v51 ) /*0x10089fdca*/
                goto LABEL_101; /*0x10089fdca*/
            }
            goto LABEL_107; /*0x10089fdbe*/
          }
          goto LABEL_101; /*0x10089fdb3*/
        }
        v49 += v76[2]; /*0x1008a000a*/
LABEL_100:
        if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(47, v49, v52) == 1 ) /*0x1008a0023*/
          goto LABEL_107; /*0x1008a0023*/
        goto LABEL_101; /*0x1008a0023*/
      }
      if ( v50 > 0xF ) /*0x10089ff4f*/
      {
        v52 = v50; /*0x1008a000f*/
        goto LABEL_100; /*0x1008a000f*/
      }
      if ( v50 ) /*0x10089ff58*/
      {
        v67 = 0; /*0x10089ff5e*/
        while ( v49[v67] != 47 ) /*0x10089ff65*/
        {
          if ( v50 == ++v67 ) /*0x10089ff71*/
            goto LABEL_101; /*0x10089ff71*/
        }
        goto LABEL_107; /*0x10089ff65*/
      }
    }
    else
    {
      qmemcpy(v83, v76, 0x58u); /*0x10089feed*/
      url::Url::path::hdacd300d547f5011(v83); /*0x10089fef3*/
      if ( v61 ) /*0x10089fefb*/
      {
        v62 = (char *)url::Url::path::hdacd300d547f5011(v83); /*0x10089ff08*/
        if ( v63 != 1 ) /*0x10089ff11*/
        {
          if ( v83[0] ) /*0x10089ffee*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83[1], v83[0], 1); /*0x1008a0000*/
          goto LABEL_107; /*0x1008a0005*/
        }
        v64 = v7; /*0x10089ff17*/
        v65 = *v62; /*0x10089ff1a*/
        if ( v83[0] ) /*0x10089ff27*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83[1], v83[0], 1); /*0x10089ff35*/
        v66 = v65 == 47; /*0x10089ff3a*/
        v7 = v64; /*0x10089ff3d*/
        if ( !v66 ) /*0x10089ff40*/
        {
LABEL_107:
          v83[0] = &__src; /*0x1008a00b8*/
          v83[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008a00ca*/
          v83[2] = &v84; /*0x1008a00d5*/
          v83[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008a00dc*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &anon_10420c9971c21f44d230d15b39fb3fec_280, v83); /*0x1008a00f4*/
LABEL_104:
          v68 = v80; /*0x1008a008a*/
          if ( !v80 ) /*0x1008a0094*/
            return v7; /*0x1008a0094*/
LABEL_105:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v68, 1); /*0x1008a0096*/
          return v7; /*0x1008a009e*/
        }
      }
      else if ( v83[0] ) /*0x10089ffcf*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83[1], v83[0], 1); /*0x10089ffdd*/
      }
    }
LABEL_101:
    if ( v85 < 3 || *(_WORD *)v84 ^ 0x762F | *(unsigned __int8 *)(v84 + 2) ^ 0x31 ) /*0x1008a0044*/
    {
      v83[0] = &__src; /*0x1008a004d*/
      v83[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008a005b*/
      v83[2] = &v84; /*0x1008a0066*/
      v83[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008a006d*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &unk_1017C5E5D, v83); /*0x1008a0085*/
      goto LABEL_104; /*0x1008a0085*/
    }
    goto LABEL_107; /*0x1008a0047*/
  }
LABEL_112:
  v24 = __n; /*0x1008a0135*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1008a013c*/
    goto LABEL_113; /*0x1008a013c*/
  v70 = __src; /*0x1008a014a*/
  if ( __n ) /*0x1008a014e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v44); /*0x1008a0150*/
    v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x1008a015d*/
    if ( !v71 ) /*0x1008a0165*/
    {
      v33 = 1; /*0x1008a01be*/
      goto LABEL_114; /*0x1008a01c3*/
    }
    v72 = v71; /*0x1008a0167*/
  }
  else
  {
    v72 = 1; /*0x1008a016c*/
  }
  memcpy((void *)v72, v70, v24); /*0x1008a017b*/
  *v7 = v24; /*0x1008a0180*/
  v7[1] = v72; /*0x1008a0183*/
  v7[2] = v24; /*0x1008a0187*/
  v68 = v80; /*0x1008a018b*/
  if ( v80 ) /*0x1008a0195*/
    goto LABEL_105; /*0x1008a0195*/
  return v7; /*0x1008a00a6*/
}