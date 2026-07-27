// __ZN13codexmate_lib4core6skills18load_skill_summary @ 0x10034cfe0 | 基线 same-set
void *__fastcall codexmate_lib::core::skills::load_skill_summary::h78677cb906cb96ee(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed __int64 a5)
{
  void *result; // rax
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  void *v12; // r15
  __int64 v13; // rax
  void *v14; // rdx
  __int64 v15; // r13
  signed __int64 v16; // rax
  char *v17; // rsi
  char *v18; // r13
  _BYTE *v19; // rax
  __int64 v20; // rdx
  char v21; // bl
  signed __int64 v22; // r15
  size_t v23; // r14
  signed __int64 v24; // rax
  char *v25; // rsi
  char *v26; // r14
  _BYTE *v27; // rax
  unsigned __int64 v28; // rdx
  const void *v29; // r13
  bool v30; // zf
  __int64 v31; // r12
  char *v32; // rbx
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rbx
  char *v37; // r12
  __int64 v38; // r13
  __int64 v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  signed __int64 v43; // r13
  signed __int64 v44; // r12
  __int64 v45; // rdi
  void *v46; // rsi
  __int64 v47; // rax
  signed __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // r13
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rsi
  size_t v57; // r13
  __int64 v58; // rbx
  __int64 v59; // rdi
  void *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rdi
  char v63; // al
  __int64 v64; // r12
  __int64 v65; // rbx
  __int64 v66; // r12
  __int64 v67; // r13
  char v68; // al
  __int64 *v69; // rcx
  __int64 v70; // rax
  _QWORD v71[2]; // [rsp+8h] [rbp-248h] BYREF
  _QWORD v72[2]; // [rsp+18h] [rbp-238h] BYREF
  __int64 v73; // [rsp+28h] [rbp-228h]
  void *v74; // [rsp+30h] [rbp-220h]
  void *v75; // [rsp+38h] [rbp-218h] BYREF
  _QWORD v76[17]; // [rsp+40h] [rbp-210h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-188h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-180h]
  __int64 v79; // [rsp+D8h] [rbp-178h]
  __int64 v80; // [rsp+E0h] [rbp-170h]
  __int64 v81; // [rsp+E8h] [rbp-168h]
  signed __int64 v82; // [rsp+F0h] [rbp-160h] BYREF
  void *v83; // [rsp+F8h] [rbp-158h]
  _QWORD __src[17]; // [rsp+100h] [rbp-150h] BYREF
  _QWORD *v85; // [rsp+188h] [rbp-C8h]
  __int64 v86; // [rsp+190h] [rbp-C0h]
  __int64 v87; // [rsp+198h] [rbp-B8h]
  __int64 v88; // [rsp+1A0h] [rbp-B0h]
  unsigned __int64 v89; // [rsp+1A8h] [rbp-A8h] BYREF
  signed __int64 v90; // [rsp+1B0h] [rbp-A0h]
  __int64 v91; // [rsp+1B8h] [rbp-98h]
  __int64 v92; // [rsp+1C0h] [rbp-90h]
  signed __int64 v93; // [rsp+1C8h] [rbp-88h]
  __int64 v94; // [rsp+1D0h] [rbp-80h]
  void *v95; // [rsp+1D8h] [rbp-78h]
  __int64 v96; // [rsp+1E0h] [rbp-70h]
  __int64 v97; // [rsp+1E8h] [rbp-68h]
  unsigned __int64 v98; // [rsp+1F0h] [rbp-60h]
  unsigned __int64 v99; // [rsp+1F8h] [rbp-58h]
  void *v100; // [rsp+200h] [rbp-50h]
  void *v101; // [rsp+208h] [rbp-48h]
  signed __int64 v102; // [rsp+210h] [rbp-40h]
  signed __int64 v103; // [rsp+218h] [rbp-38h]
  _BYTE v104[41]; // [rsp+227h] [rbp-29h] BYREF

  v96 = a4; /*0x10034cff7*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v82, a2, a3); /*0x10034d00b*/
  if ( __OFSUB__(-v82, 1) ) /*0x10034d01a*/
  {
    result = v83; /*0x10034d01f*/
    if ( ((unsigned __int8)v83 & 3) == 1 ) /*0x10034d02e*/
    {
      v8 = (char *)v83 - 1; /*0x10034d030*/
      v9 = *(_QWORD *)((char *)v83 - 1); /*0x10034d034*/
      v10 = *(_QWORD *)((char *)v83 + 7); /*0x10034d038*/
      if ( *(_QWORD *)v10 ) /*0x10034d03c*/
        (*(void (__fastcall **)(__int64))v10)(v9); /*0x10034d048*/
      v11 = *(_QWORD *)(v10 + 8); /*0x10034d04a*/
      if ( v11 ) /*0x10034d052*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x10034d05c*/
      result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8); /*0x10034d06e*/
    }
    *a1 = 2; /*0x10034d073*/
    return result; /*0x10034d07a*/
  }
  v102 = a5; /*0x10034d07f*/
  v85 = a1; /*0x10034d083*/
  v103 = v82; /*0x10034d08a*/
  v95 = v83; /*0x10034d095*/
  v12 = (void *)__src[0]; /*0x10034d099*/
  v13 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10034d0a6*/
  v101 = v14; /*0x10034d0ab*/
  v97 = v13; /*0x10034d0af*/
  if ( !v13 ) /*0x10034d0b6*/
  {
    result = v85; /*0x10034d54d*/
    *v85 = 2; /*0x10034d554*/
    v22 = v103; /*0x10034d55b*/
    goto LABEL_117; /*0x10034d55f*/
  }
  v92 = a2; /*0x10034d0bc*/
  v80 = a3; /*0x10034d0c3*/
  v98 = 0x8000000000000000LL; /*0x10034d0d4*/
  v82 = 0; /*0x10034d0d8*/
  v83 = v12; /*0x10034d0e3*/
  __src[0] = v95; /*0x10034d0f5*/
  __src[1] = v12; /*0x10034d0fc*/
  __src[2] = 0; /*0x10034d103*/
  __src[3] = v12; /*0x10034d10e*/
  __src[4] = 0xA0000000ALL; /*0x10034d11f*/
  LOBYTE(__src[5]) = 1; /*0x10034d126*/
  LOWORD(__src[6]) = 0; /*0x10034d12d*/
  while ( 1 ) /*0x10034d15d*/
  {
    v15 = __src[0]; /*0x10034d15d*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10034d16a*/
      &v75,
      __src);
    if ( (_DWORD)v75 == 1 ) /*0x10034d176*/
    {
      v16 = v82; /*0x10034d17f*/
      v82 = v76[1]; /*0x10034d186*/
      v17 = (char *)(v76[1] - v16); /*0x10034d18d*/
      v18 = (char *)(v16 + v15); /*0x10034d190*/
      if ( v76[1] == v16 ) /*0x10034d196*/
        goto LABEL_24; /*0x10034d196*/
LABEL_18:
      if ( v17[(_QWORD)v18 - 1] == 10 ) /*0x10034d1e8*/
      {
        if ( v17 == (char *)1 ) /*0x10034d1f0*/
        {
          v17 = nullptr; /*0x10034d200*/
        }
        else if ( v17[(_QWORD)v18 - 2] == 13 ) /*0x10034d1f8*/
        {
          v17 -= 2; /*0x10034d1fa*/
        }
        else
        {
          --v17; /*0x10034d204*/
        }
      }
      goto LABEL_24; /*0x10034d1fe*/
    }
    if ( BYTE1(__src[6]) /*0x10034d1d0*/
      || (BYTE1(__src[6]) = 1, v17 = (char *)v83 - v82, (LOBYTE(__src[6]) | (v83 != (void *)v82)) != 1) )
    {
LABEL_29:
      v99 = 0x8000000000000000LL; /*0x10034d283*/
      goto LABEL_30; /*0x10034d28d*/
    }
    v18 = (char *)(__src[0] + v82); /*0x10034d1d6*/
    if ( v17 ) /*0x10034d1e0*/
      goto LABEL_18; /*0x10034d1e0*/
LABEL_24:
    v19 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v18, v17); /*0x10034d213*/
    if ( v20 ) /*0x10034d21b*/
    {
      if ( *v19 == 35 ) /*0x10034d224*/
        break; /*0x10034d224*/
    }
LABEL_11:
    if ( BYTE1(__src[6]) ) /*0x10034d157*/
      goto LABEL_29; /*0x10034d157*/
  }
  v75 = v19; /*0x10034d22d*/
  v76[0] = &v19[v20]; /*0x10034d234*/
  LOBYTE(v76[1]) = 0; /*0x10034d23b*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0e9483fac2dfb3fc( /*0x10034d248*/
    &v89,
    &v75);
  if ( !v91 ) /*0x10034d257*/
  {
    if ( v89 ) /*0x10034d267*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1); /*0x10034d279*/
    goto LABEL_11; /*0x10034d27e*/
  }
  v73 = v91; /*0x10034d6f8*/
  v99 = v89; /*0x10034d706*/
  v93 = v90; /*0x10034d711*/
LABEL_30:
  v82 = 0; /*0x10034d291*/
  v83 = v12; /*0x10034d29c*/
  __src[0] = v95; /*0x10034d2ae*/
  __src[1] = v12; /*0x10034d2b5*/
  __src[2] = 0; /*0x10034d2bc*/
  __src[3] = v12; /*0x10034d2c7*/
  __src[4] = 0xA0000000ALL; /*0x10034d2d8*/
  LOBYTE(__src[5]) = 1; /*0x10034d2df*/
  LOWORD(__src[6]) = 0; /*0x10034d2e6*/
  v21 = 0; /*0x10034d2ef*/
  v22 = v103; /*0x10034d2f1*/
  while ( 2 ) /*0x10034d30f*/
  {
    v23 = __src[0]; /*0x10034d30f*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10034d320*/
      &v75,
      __src);
    if ( (_DWORD)v75 == 1 ) /*0x10034d32c*/
    {
      v24 = v82; /*0x10034d335*/
      v82 = v76[1]; /*0x10034d33c*/
      v25 = (char *)(v76[1] - v24); /*0x10034d343*/
      v26 = (char *)(v24 + v23); /*0x10034d346*/
      if ( v76[1] == v24 ) /*0x10034d34c*/
        goto LABEL_45; /*0x10034d34c*/
LABEL_39:
      if ( v25[(_QWORD)v26 - 1] == 10 ) /*0x10034d398*/
      {
        if ( v25 == (char *)1 ) /*0x10034d3a0*/
        {
          v25 = nullptr; /*0x10034d3b0*/
        }
        else if ( v25[(_QWORD)v26 - 2] == 13 ) /*0x10034d3a8*/
        {
          v25 -= 2; /*0x10034d3aa*/
        }
        else
        {
          --v25; /*0x10034d3b4*/
        }
      }
    }
    else
    {
      if ( BYTE1(__src[6]) ) /*0x10034d357*/
        goto LABEL_62; /*0x10034d357*/
      BYTE1(__src[6]) = 1; /*0x10034d35d*/
      v23 = v82; /*0x10034d364*/
      v25 = (char *)v83 - v82; /*0x10034d372*/
      if ( (LOBYTE(__src[6]) | (v83 != (void *)v82)) != 1 ) /*0x10034d380*/
        goto LABEL_62; /*0x10034d380*/
      v26 = (char *)(__src[0] + v82); /*0x10034d386*/
      if ( v25 ) /*0x10034d390*/
        goto LABEL_39; /*0x10034d390*/
    }
LABEL_45:
    v27 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v26, v25); /*0x10034d3c0*/
    v23 = v28; /*0x10034d3c8*/
    if ( !v28 ) /*0x10034d3ce*/
      goto LABEL_32; /*0x10034d3ce*/
    v29 = v27; /*0x10034d3d4*/
    if ( v28 == 3 ) /*0x10034d3db*/
    {
      if ( *(_WORD *)v27 ^ 0x2D2D | (unsigned __int8)v27[2] ^ 0x2D ) /*0x10034d3ef*/
      {
        v30 = (v21 & 1) == 0; /*0x10034d3f4*/
        v21 = 1; /*0x10034d3f7*/
        if ( v30 ) /*0x10034d3f9*/
        {
          if ( *v27 == 35 ) /*0x10034d404*/
            goto LABEL_31; /*0x10034d404*/
LABEL_57:
          if ( !(*(_WORD *)v27 ^ 0x6060 | (unsigned __int8)v27[2] ^ 0x60) ) /*0x10034d456*/
            goto LABEL_31; /*0x10034d456*/
          goto LABEL_58; /*0x10034d456*/
        }
      }
      else
      {
        v21 ^= 1u; /*0x10034d439*/
      }
LABEL_32:
      if ( BYTE1(__src[6]) ) /*0x10034d309*/
        goto LABEL_62; /*0x10034d309*/
      continue; /*0x10034d309*/
    }
    break;
  }
  v30 = (v21 & 1) == 0; /*0x10034d410*/
  v21 = 1; /*0x10034d413*/
  if ( !v30 ) /*0x10034d415*/
    goto LABEL_32; /*0x10034d415*/
  if ( *v27 == 35 ) /*0x10034d425*/
    goto LABEL_31; /*0x10034d425*/
  if ( v28 >= 3 ) /*0x10034d42f*/
    goto LABEL_57; /*0x10034d42f*/
  if ( v28 == 1 ) /*0x10034d435*/
    goto LABEL_60; /*0x10034d435*/
LABEL_58:
  if ( *(_WORD *)v27 == 8237 || *(_WORD *)v27 == 8234 ) /*0x10034d470*/
  {
LABEL_31:
    v21 = 0; /*0x10034d300*/
    goto LABEL_32; /*0x10034d300*/
  }
LABEL_60:
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v75, v28, 0, 1, 1); /*0x10034d476*/
  v98 = v76[0]; /*0x10034d499*/
  if ( (_DWORD)v75 == 1 ) /*0x10034d4a4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v98, v76[1]); /*0x10034dbf8*/
  v94 = v76[1]; /*0x10034d4b1*/
  memcpy((void *)v76[1], v29, v23); /*0x10034d4bb*/
LABEL_62:
  v31 = v97; /*0x10034d4c2*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v82, v92, v80); /*0x10034d4db*/
  v32 = (char *)v83; /*0x10034d4e0*/
  if ( !(_BYTE)v82 ) /*0x10034d4ee*/
  {
    memcpy(v76, __src, sizeof(v76)); /*0x10034d577*/
    v75 = v83; /*0x10034d57c*/
    std::fs::Metadata::modified::h0e075817eaa8c909(&v82, &v75); /*0x10034d591*/
    if ( (_DWORD)v83 == 1000000000 ) /*0x10034d5a1*/
    {
      if ( (v82 & 3) == 1 ) /*0x10034d5b2*/
      {
        v37 = (char *)(v82 - 1); /*0x10034d5b8*/
        v38 = *(_QWORD *)(v82 - 1); /*0x10034d5bc*/
        v39 = *(_QWORD *)(v82 + 7); /*0x10034d5c0*/
        if ( *(_QWORD *)v39 ) /*0x10034d5c4*/
          (*(void (__fastcall **)(__int64))v39)(v38); /*0x10034d5cf*/
        v40 = *(_QWORD *)(v39 + 8); /*0x10034d5d1*/
        if ( v40 ) /*0x10034d5d8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v40, *(_QWORD *)(v39 + 16)); /*0x10034d5e1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24, 8); /*0x10034d5f3*/
        v22 = v103; /*0x10034d5f8*/
        v31 = v97; /*0x10034d5fc*/
      }
    }
    else
    {
      v75 = (void *)v82; /*0x10034d609*/
      LODWORD(v76[0]) = (_DWORD)v83; /*0x10034d610*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v82, &v75, 0, 0); /*0x10034d628*/
      if ( (_DWORD)v82 != 1 ) /*0x10034d634*/
      {
        v74 = v83; /*0x10034d724*/
        v36 = 1; /*0x10034d72b*/
        goto LABEL_79; /*0x10034d730*/
      }
    }
LABEL_78:
    v36 = 0; /*0x10034d63a*/
    goto LABEL_79; /*0x10034d63a*/
  }
  if ( ((unsigned __int8)v83 & 3) != 1 ) /*0x10034d4f8*/
    goto LABEL_78; /*0x10034d4f8*/
  v33 = *(_QWORD *)((char *)v83 - 1); /*0x10034d502*/
  v34 = *(_QWORD *)((char *)v83 + 7); /*0x10034d506*/
  if ( *(_QWORD *)v34 ) /*0x10034d50a*/
    (*(void (__fastcall **)(_QWORD))v34)(*(_QWORD *)((char *)v83 - 1)); /*0x10034d515*/
  v35 = *(_QWORD *)(v34 + 8); /*0x10034d517*/
  if ( v35 ) /*0x10034d51e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x10034d527*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32 - 1, 24, 8); /*0x10034d539*/
  v36 = 0; /*0x10034d53e*/
  v22 = v103; /*0x10034d540*/
  v31 = v97; /*0x10034d544*/
LABEL_79:
  v41 = std::path::Path::_strip_prefix::h737731a9318ab115(v31, v101, v96, v102); /*0x10034d63c*/
  if ( v41 ) /*0x10034d653*/
  {
    std::path::Path::to_path_buf::h73855ce4b54f7174(&v82, v41, v42); /*0x10034d65f*/
    v43 = v82; /*0x10034d664*/
    v96 = (__int64)v83; /*0x10034d672*/
    v44 = __src[0]; /*0x10034d676*/
    goto LABEL_95; /*0x10034d67d*/
  }
  v45 = v31; /*0x10034d682*/
  v46 = v101; /*0x10034d685*/
  v47 = std::path::Path::file_name::hf6c2daad91e50ebf(v31, v101); /*0x10034d689*/
  v44 = v48; /*0x10034d691*/
  if ( !v47 ) /*0x10034d694*/
    v44 = 0; /*0x10034d694*/
  if ( v44 < 0 ) /*0x10034d69b*/
  {
    v49 = 0; /*0x10034d69d*/
    goto LABEL_85; /*0x10034d69d*/
  }
  v102 = v48; /*0x10034d6b3*/
  v50 = 1; /*0x10034d6b7*/
  if ( v44 ) /*0x10034d6bd*/
  {
    v86 = v36; /*0x10034d6bf*/
    v51 = v47; /*0x10034d6c6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v46); /*0x10034d6c9*/
    v49 = 1; /*0x10034d6ce*/
    v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v44, 1); /*0x10034d6db*/
    if ( !v52 ) /*0x10034d6e3*/
LABEL_85:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v44); /*0x10034d69f*/
    v53 = v52; /*0x10034d6e5*/
    v47 = v51; /*0x10034d6e8*/
    v22 = v103; /*0x10034d6eb*/
    v36 = v86; /*0x10034d6ef*/
  }
  else
  {
    v102 = 0; /*0x10034d735*/
    v53 = 1; /*0x10034d73d*/
  }
  if ( v47 ) /*0x10034d745*/
    v50 = v47; /*0x10034d745*/
  v96 = v53; /*0x10034d749*/
  memcpy((void *)v53, (const void *)v50, v44); /*0x10034d753*/
  v43 = v102; /*0x10034d758*/
LABEL_95:
  v54 = std::path::Path::file_name::hf6c2daad91e50ebf(v97, v101); /*0x10034d75c*/
  if ( !v54 || (core::str::converts::from_utf8::hb32deb9559450f6e(&v82, v54, v55), (_DWORD)v82 == 1) ) /*0x10034d784*/
  {
    *v85 = 2; /*0x10034d78d*/
    if ( v43 ) /*0x10034d797*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, v43, 1); /*0x10034d7a5*/
    if ( 2 * v98 ) /*0x10034d7ae*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v98, 1); /*0x10034d801*/
      v56 = v99; /*0x10034d806*/
      result = (void *)(2 * v99); /*0x10034d80a*/
      if ( 2 * v99 ) /*0x10034d80a*/
        goto LABEL_106; /*0x10034d815*/
    }
    else
    {
      v56 = v99; /*0x10034d7bb*/
      result = (void *)(2 * v99); /*0x10034d7bf*/
      if ( 2 * v99 ) /*0x10034d7bf*/
      {
LABEL_106:
        v59 = v93; /*0x10034d81b*/
        goto LABEL_116; /*0x10034d827*/
      }
    }
    goto LABEL_117; /*0x10034d7ca*/
  }
  v102 = v43; /*0x10034d7d2*/
  v57 = __src[0]; /*0x10034d7d6*/
  if ( __src[0] < 0LL ) /*0x10034d7e0*/
  {
    v58 = 0; /*0x10034d7e2*/
    goto LABEL_104; /*0x10034d7e2*/
  }
  v60 = v83; /*0x10034d82c*/
  v86 = v36; /*0x10034d833*/
  if ( __src[0] ) /*0x10034d83a*/
  {
    v100 = v83; /*0x10034d83c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v82, v83); /*0x10034d840*/
    v58 = 1; /*0x10034d845*/
    v61 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v57, 1); /*0x10034d852*/
    if ( !v61 ) /*0x10034d85a*/
LABEL_104:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v58, v57); /*0x10034d7e4*/
    v62 = v61; /*0x10034d85c*/
    v60 = v100; /*0x10034d85f*/
  }
  else
  {
    v62 = 1; /*0x10034d865*/
  }
  v88 = v62; /*0x10034d86a*/
  v100 = (void *)v57; /*0x10034d871*/
  memcpy((void *)v62, v60, v57); /*0x10034d878*/
  v89 = v96; /*0x10034d881*/
  v90 = v44; /*0x10034d888*/
  v75 = nullptr; /*0x10034d88f*/
  v76[0] = 1; /*0x10034d89a*/
  v76[1] = 0; /*0x10034d8a5*/
  __src[0] = 1610612768; /*0x10034d8b0*/
  v82 = (signed __int64)&v75; /*0x10034d8c2*/
  v83 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10034d8d0*/
  v63 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v89, &v82); /*0x10034d8e5*/
  v64 = v97; /*0x10034d8ec*/
  if ( v63 ) /*0x10034d8f0*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10034db9c*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      v104,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v77 = (__int64)v75; /*0x10034d904*/
  v78 = v76[0]; /*0x10034d90b*/
  v79 = v76[1]; /*0x10034d919*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v89, &v77); /*0x10034d92e*/
  v87 = v77; /*0x10034d93a*/
  v81 = v78; /*0x10034d948*/
  v65 = v79; /*0x10034d94f*/
  v72[0] = v64; /*0x10034d956*/
  v72[1] = v101; /*0x10034d961*/
  v75 = nullptr; /*0x10034d968*/
  v76[0] = 1; /*0x10034d973*/
  v76[1] = 0; /*0x10034d97e*/
  __src[0] = 1610612768; /*0x10034d989*/
  v82 = (signed __int64)&v75; /*0x10034d99b*/
  v83 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10034d9a2*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v72, &v82) ) /*0x10034d9b7*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10034dbc1*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      v104,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v101 = v75; /*0x10034d9cb*/
  v66 = v76[0]; /*0x10034d9cf*/
  v67 = v76[1]; /*0x10034d9d6*/
  v71[0] = v92; /*0x10034d9e4*/
  v71[1] = v80; /*0x10034d9f2*/
  v75 = nullptr; /*0x10034d9f9*/
  v76[0] = 1; /*0x10034da04*/
  v76[1] = 0; /*0x10034da0f*/
  __src[0] = 1610612768; /*0x10034da1a*/
  v82 = (signed __int64)&v75; /*0x10034da2c*/
  v83 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10034da33*/
  v68 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v71, &v82); /*0x10034da48*/
  v22 = v103; /*0x10034da4f*/
  if ( v68 ) /*0x10034da53*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10034dbe6*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      v104,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v69 = v85; /*0x10034da60*/
  v85[16] = v76[1]; /*0x10034da67*/
  v69[15] = v76[0]; /*0x10034da75*/
  v69[14] = (__int64)v75; /*0x10034da80*/
  v69[4] = v91; /*0x10034da8b*/
  v69[3] = v90; /*0x10034da96*/
  v69[2] = v89; /*0x10034daa1*/
  v70 = (__int64)v100; /*0x10034daa5*/
  v69[5] = (__int64)v100; /*0x10034daa9*/
  v69[6] = v88; /*0x10034dab4*/
  v69[7] = v70; /*0x10034dab8*/
  v69[17] = v99; /*0x10034dac0*/
  v69[18] = v93; /*0x10034dace*/
  v69[19] = v73; /*0x10034dadc*/
  v69[20] = v98; /*0x10034dae7*/
  v69[21] = v94; /*0x10034daf2*/
  v69[22] = v23; /*0x10034daf9*/
  v69[8] = v87; /*0x10034db07*/
  v69[9] = v81; /*0x10034db12*/
  v69[10] = v65; /*0x10034db16*/
  v69[11] = (__int64)v101; /*0x10034db1e*/
  v69[12] = v66; /*0x10034db22*/
  v69[13] = v67; /*0x10034db26*/
  *v69 = v86; /*0x10034db31*/
  result = v74; /*0x10034db34*/
  v69[1] = (__int64)v74; /*0x10034db3b*/
  v56 = v102; /*0x10034db3f*/
  if ( v102 ) /*0x10034db46*/
  {
    v59 = v96; /*0x10034db4d*/
LABEL_116:
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v56, 1); /*0x10034db51*/
  }
LABEL_117:
  if ( v22 ) /*0x10034db59*/
    return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v22, 1); /*0x10034db67*/
  return result; /*0x10034db6c*/
}