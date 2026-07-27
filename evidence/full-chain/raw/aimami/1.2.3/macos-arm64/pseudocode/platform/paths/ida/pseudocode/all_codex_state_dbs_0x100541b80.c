// __ZN13codexmate_lib8platform5paths10CodexPaths19all_codex_state_dbs @ 0x100541b80 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  void *v5; // rbx
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r15
  void *v13; // r13
  size_t v14; // r12
  void *v15; // r8
  _QWORD *v16; // r14
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r14
  const void *v23; // r15
  size_t v24; // rbx
  __int64 v25; // r12
  _QWORD *result; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r14
  _QWORD *v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rdx
  _QWORD v32[2]; // [rsp+0h] [rbp-220h] BYREF
  char v33; // [rsp+10h] [rbp-210h]
  __int64 v34; // [rsp+11h] [rbp-20Fh]
  __int64 v35; // [rsp+19h] [rbp-207h]
  __int64 v36; // [rsp+21h] [rbp-1FFh]
  _BYTE v37[15]; // [rsp+29h] [rbp-1F7h]
  __int16 v38; // [rsp+38h] [rbp-1E8h]
  char v39; // [rsp+3Ah] [rbp-1E6h]
  void *__s2; // [rsp+40h] [rbp-1E0h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-1D8h]
  char v42; // [rsp+50h] [rbp-1D0h]
  __int64 v43; // [rsp+51h] [rbp-1CFh]
  __int64 v44; // [rsp+59h] [rbp-1C7h]
  __int64 v45; // [rsp+61h] [rbp-1BFh]
  _BYTE v46[15]; // [rsp+69h] [rbp-1B7h]
  __int16 v47; // [rsp+78h] [rbp-1A8h]
  char v48; // [rsp+7Ah] [rbp-1A6h]
  void *__s1; // [rsp+80h] [rbp-1A0h] BYREF
  size_t __n; // [rsp+88h] [rbp-198h]
  char v51; // [rsp+90h] [rbp-190h]
  __int64 v52; // [rsp+91h] [rbp-18Fh]
  __int64 v53; // [rsp+99h] [rbp-187h]
  __int64 v54; // [rsp+A1h] [rbp-17Fh]
  _BYTE v55[15]; // [rsp+A9h] [rbp-177h]
  __int16 v56; // [rsp+B8h] [rbp-168h]
  char v57; // [rsp+BAh] [rbp-166h]
  unsigned __int64 v58[3]; // [rsp+C0h] [rbp-160h] BYREF
  void *v59; // [rsp+D8h] [rbp-148h] BYREF
  _QWORD *v60; // [rsp+E0h] [rbp-140h]
  _BYTE v61[25]; // [rsp+E8h] [rbp-138h]
  _BYTE v62[15]; // [rsp+101h] [rbp-11Fh]
  __int16 v63; // [rsp+110h] [rbp-110h]
  char v64; // [rsp+112h] [rbp-10Eh]
  void *v65; // [rsp+118h] [rbp-108h]
  __int64 v66; // [rsp+120h] [rbp-100h]
  __int64 v67; // [rsp+128h] [rbp-F8h]
  __int64 v68; // [rsp+130h] [rbp-F0h]
  _BYTE v69[15]; // [rsp+138h] [rbp-E8h]
  __int64 v70; // [rsp+148h] [rbp-D8h]
  __int64 v71; // [rsp+150h] [rbp-D0h]
  __int64 v72; // [rsp+158h] [rbp-C8h]
  _BYTE v73[15]; // [rsp+160h] [rbp-C0h]
  _QWORD *v74; // [rsp+170h] [rbp-B0h]
  _QWORD *v75; // [rsp+178h] [rbp-A8h]
  void *v76; // [rsp+180h] [rbp-A0h]
  _QWORD *v77; // [rsp+188h] [rbp-98h]
  unsigned __int64 v78; // [rsp+190h] [rbp-90h]
  __int64 v79; // [rsp+198h] [rbp-88h]
  __int64 v80; // [rsp+1A0h] [rbp-80h]
  void *v81; // [rsp+1A8h] [rbp-78h]
  _QWORD *v82; // [rsp+1B0h] [rbp-70h]
  _QWORD *v83; // [rsp+1B8h] [rbp-68h]
  __int64 *v84; // [rsp+1C0h] [rbp-60h]
  __int64 v85; // [rsp+1C8h] [rbp-58h] BYREF
  __int64 v86; // [rsp+1D0h] [rbp-50h]
  __int64 v87; // [rsp+1D8h] [rbp-48h]
  _QWORD *v88; // [rsp+1E0h] [rbp-40h]
  unsigned __int64 v89; // [rsp+1E8h] [rbp-38h]
  unsigned __int64 v90; // [rsp+1F0h] [rbp-30h]

  v83 = a1; /*0x100541b97*/
  if ( !__OFSUB__(0, a2[90]) ) /*0x100541ba4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100541fa0*/
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100541faf*/
    if ( !v21 ) /*0x100541fb7*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005420c2*/
    v22 = (_QWORD *)v21; /*0x100541fbd*/
    v23 = (const void *)a2[91]; /*0x100541fc0*/
    v24 = a2[92]; /*0x100541fc7*/
    if ( v24 ) /*0x100541fd1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100541fd3*/
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x100541fe5*/
      if ( !v25 ) /*0x100541feb*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24); /*0x100541ff5*/
    }
    else
    {
      v25 = 1; /*0x100541ffc*/
    }
    memcpy((void *)v25, v23, v24); /*0x10054200b*/
    *v22 = v24; /*0x100542010*/
    v22[1] = v25; /*0x100542013*/
    v22[2] = v24; /*0x100542017*/
    result = v83; /*0x10054201b*/
    *v83 = 1; /*0x10054201f*/
    result[1] = v22; /*0x100542026*/
    result[2] = 1; /*0x10054202a*/
    return result; /*0x100542032*/
  }
  v3 = a2[1]; /*0x100541baa*/
  v4 = a2[2]; /*0x100541bae*/
  v85 = 0; /*0x100541bb2*/
  v86 = 8; /*0x100541bba*/
  v87 = 0; /*0x100541bc2*/
  codexmate_lib::platform::paths::CodexPaths::state_db_search_dirs::he3f621873ba76902(&v59, v3, v4); /*0x100541bd1*/
  v5 = v59; /*0x100541bd6*/
  v6 = v60; /*0x100541bdd*/
  v7 = &v60[4 * *(_QWORD *)v61]; /*0x100541bf2*/
  v74 = v60; /*0x100541bf5*/
  v75 = v60; /*0x100541bfc*/
  v76 = v59; /*0x100541c03*/
  v77 = v7; /*0x100541c0a*/
  v84 = v60; /*0x100541c11*/
  if ( !*(_QWORD *)v61 ) /*0x100541c18*/
    goto LABEL_35; /*0x100541c18*/
  v8 = v84; /*0x100541c1e*/
  v81 = v59; /*0x100541c22*/
  v82 = &v60[4 * *(_QWORD *)v61]; /*0x100541c26*/
  while ( 1 ) /*0x100541c56*/
  {
    v6 = v8 + 4; /*0x100541c56*/
    v79 = *v8; /*0x100541c5d*/
    if ( v79 == 0x8000000000000000LL ) /*0x100541c71*/
      break; /*0x100541c71*/
    v10 = v8[2]; /*0x100541c7b*/
    v80 = v8[1]; /*0x100541c86*/
    codexmate_lib::platform::paths::CodexPaths::highest_state_db::h679fbb676dfaffc6(v58, v80, v10); /*0x100541c8a*/
    if ( v58[0] != 0x8000000000000000LL ) /*0x100541ca3*/
    {
      v90 = v58[0]; /*0x100541ca5*/
      v88 = v6; /*0x100541ca9*/
      v89 = v58[1]; /*0x100541cb4*/
      v78 = v58[2]; /*0x100541cbf*/
      v11 = v86; /*0x100541cc6*/
      v12 = 24 * v87; /*0x100541cd2*/
      while ( v12 ) /*0x100541ce3*/
      {
        std::path::Path::components::he8b0f71a48373be5(&__s1, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16)); /*0x100541cf8*/
        std::path::Path::components::he8b0f71a48373be5(&__s2, v89, v78); /*0x100541d0f*/
        v13 = __s1; /*0x100541d14*/
        v14 = __n; /*0x100541d1b*/
        v15 = __s2; /*0x100541d22*/
        v16 = v41; /*0x100541d29*/
        if ( (_QWORD *)__n != v41 /*0x100541d74*/
          || (_BYTE)v56 != (_BYTE)v47
          || HIBYTE(v56) != 2
          || HIBYTE(v47) != 2
          || (v65 = __s2, v17 = memcmp(__s1, __s2, __n), v15 = v65, v17) )
        {
          if ( v51 != 6 ) /*0x100541d83*/
          {
            *(_QWORD *)&v73[7] = *(_QWORD *)&v55[7]; /*0x100541d90*/
            *(_QWORD *)v73 = *(_QWORD *)v55; /*0x100541d9b*/
            v72 = v54; /*0x100541da6*/
            v71 = v53; /*0x100541db4*/
            v70 = v52; /*0x100541dbb*/
          }
          v32[0] = v13; /*0x100541dd0*/
          v32[1] = v14; /*0x100541dd7*/
          v33 = v51; /*0x100541dde*/
          *(_QWORD *)&v37[7] = *(_QWORD *)&v73[7]; /*0x100541df2*/
          *(_QWORD *)v37 = *(_QWORD *)v73; /*0x100541dfd*/
          v36 = v72; /*0x100541e08*/
          v35 = v71; /*0x100541e1a*/
          v34 = v70; /*0x100541e1e*/
          v38 = v56; /*0x100541e21*/
          v39 = v57; /*0x100541e28*/
          if ( v42 != 6 ) /*0x100541e37*/
          {
            *(_QWORD *)&v69[7] = *(_QWORD *)&v46[7]; /*0x100541e44*/
            *(_QWORD *)v69 = *(_QWORD *)v46; /*0x100541e4f*/
            v68 = v45; /*0x100541e5a*/
            v67 = v44; /*0x100541e68*/
            v66 = v43; /*0x100541e6f*/
          }
          v59 = v15; /*0x100541e84*/
          v60 = v16; /*0x100541e8b*/
          v61[0] = v42; /*0x100541e92*/
          *(_QWORD *)&v62[7] = *(_QWORD *)&v69[7]; /*0x100541ea6*/
          *(_QWORD *)v62 = *(_QWORD *)v69; /*0x100541eb1*/
          *(_QWORD *)&v61[17] = v68; /*0x100541ebc*/
          *(_QWORD *)&v61[9] = v67; /*0x100541ece*/
          *(_QWORD *)&v61[1] = v66; /*0x100541ed2*/
          v63 = v47; /*0x100541ed5*/
          v64 = v48; /*0x100541edc*/
          v11 += 24; /*0x100541ef5*/
          v12 -= 24; /*0x100541ef9*/
          if ( !(unsigned __int8)core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v32, &v59) ) /*0x100541ef0*/
            continue; /*0x100541ef0*/
        }
        v5 = v81; /*0x100541f0c*/
        v7 = v82; /*0x100541f10*/
        v6 = v88; /*0x100541f14*/
        if ( v90 ) /*0x100541f18*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v90, 1); /*0x100541f27*/
        goto LABEL_4; /*0x100541f2c*/
      }
      v18 = v87; /*0x100541f40*/
      if ( v87 == v85 ) /*0x100541f48*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v85); /*0x100541f4e*/
      v19 = v86; /*0x100541f53*/
      v20 = 3 * v18; /*0x100541f57*/
      *(_QWORD *)(v86 + 8 * v20) = v90; /*0x100541f5f*/
      *(_QWORD *)(v19 + 8 * v20 + 8) = v89; /*0x100541f67*/
      *(_QWORD *)(v19 + 8 * v20 + 16) = v78; /*0x100541f73*/
      v87 = v18 + 1; /*0x100541f7b*/
      v5 = v81; /*0x100541f7f*/
      v7 = v82; /*0x100541f83*/
      v6 = v88; /*0x100541f87*/
      v9 = v79; /*0x100541f8b*/
      if ( !v79 ) /*0x100541f95*/
        goto LABEL_6; /*0x100541f95*/
LABEL_5:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v9, 1); /*0x100541c3c*/
      goto LABEL_6; /*0x100541c45*/
    }
LABEL_4:
    v9 = v79; /*0x100541c30*/
    if ( v79 ) /*0x100541c3a*/
      goto LABEL_5; /*0x100541c3a*/
LABEL_6:
    v8 = v6; /*0x100541c4a*/
    if ( v6 == v7 ) /*0x100541c50*/
    {
      v6 = v7; /*0x100542034*/
      break; /*0x100542034*/
    }
  }
  v75 = v6; /*0x100542037*/
LABEL_35:
  v27 = (char *)v7 - (char *)v6; /*0x10054203e*/
  if ( v27 ) /*0x100542041*/
  {
    v28 = v27 >> 5; /*0x100542043*/
    v29 = v6 + 1; /*0x100542047*/
    do /*0x100542057*/
    {
      v30 = *(v29 - 1); /*0x100542059*/
      if ( v30 ) /*0x100542060*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v30, 1); /*0x10054206a*/
      v29 += 4; /*0x100542050*/
      --v28; /*0x100542054*/
    }
    while ( v28 ); /*0x100542057*/
  }
  if ( v5 ) /*0x100542074*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, 32LL * (_QWORD)v5, 8); /*0x100542086*/
  result = v83; /*0x10054208f*/
  v83[2] = v87; /*0x100542093*/
  v31 = v85; /*0x100542097*/
  result[1] = v86; /*0x10054209f*/
  *result = v31; /*0x1005420a3*/
  return result; /*0x1005420a6*/
}