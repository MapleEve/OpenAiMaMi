// __ZN13codexmate_lib4core8sessions17patch_rollout_cwd @ 0x100534ee0 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::patch_rollout_cwd::hc5553e10255ff27b(
        _QWORD *a1,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        void *a6,
        size_t a7)
{
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  __int64 v13; // r12
  _BYTE *v14; // rax
  char *v15; // rbx
  _QWORD *v16; // r12
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rax
  size_t v22; // r14
  __int64 v23; // rax
  __int64 v24; // r14
  double result; // xmm0_8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rdi
  int v30; // eax
  _BYTE *v31; // rax
  _BYTE *v32; // r12
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r14
  _BYTE *v36; // rbx
  void *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int128 v42; // kr00_16
  void *v43; // r13
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rdi
  __int64 v50; // r15
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbx
  _QWORD *v57; // r14
  __int64 v58; // rsi
  _QWORD *v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rax
  _QWORD *v63; // rcx
  _QWORD *v64; // r14
  __int64 v65; // rsi
  _QWORD *v66; // rax
  __int64 v67; // rbx
  _QWORD *v68; // r14
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rsi
  void *v74; // rax
  size_t v75; // rcx
  _QWORD *v76; // rsi
  _QWORD v77[4]; // [rsp+0h] [rbp-1F0h] BYREF
  _QWORD v78[3]; // [rsp+20h] [rbp-1D0h] BYREF
  _QWORD v79[3]; // [rsp+38h] [rbp-1B8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-1A0h] BYREF
  _QWORD v81[3]; // [rsp+58h] [rbp-198h] BYREF
  void *__s2; // [rsp+70h] [rbp-180h]
  size_t v83; // [rsp+78h] [rbp-178h]
  void *v84; // [rsp+80h] [rbp-170h]
  char *v85; // [rsp+88h] [rbp-168h]
  _QWORD v86[4]; // [rsp+90h] [rbp-160h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-140h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-138h]
  size_t __n; // [rsp+C0h] [rbp-130h]
  void *__src; // [rsp+C8h] [rbp-128h]
  void *__s1; // [rsp+D0h] [rbp-120h]
  __int128 v92; // [rsp+D8h] [rbp-118h] BYREF
  _QWORD v93[5]; // [rsp+E8h] [rbp-108h] BYREF
  char v94; // [rsp+110h] [rbp-E0h]
  __int16 v95; // [rsp+118h] [rbp-D8h]
  __int128 v96; // [rsp+120h] [rbp-D0h] BYREF
  void *__dst; // [rsp+130h] [rbp-C0h]
  size_t v98; // [rsp+138h] [rbp-B8h]
  _QWORD *v99; // [rsp+140h] [rbp-B0h]
  char *v100; // [rsp+148h] [rbp-A8h]
  __int64 v101; // [rsp+150h] [rbp-A0h]
  __int64 v102; // [rsp+158h] [rbp-98h]
  __int64 v103; // [rsp+160h] [rbp-90h]
  __int64 v104; // [rsp+168h] [rbp-88h]
  __int64 v105; // [rsp+170h] [rbp-80h]
  __int64 v106; // [rsp+178h] [rbp-78h]
  __int64 v107; // [rsp+180h] [rbp-70h]
  _QWORD *v108; // [rsp+188h] [rbp-68h]
  unsigned __int64 v109; // [rsp+190h] [rbp-60h]
  __int64 v110; // [rsp+198h] [rbp-58h] BYREF
  __int64 v111; // [rsp+1A0h] [rbp-50h]
  __int64 v112; // [rsp+1A8h] [rbp-48h]
  void *v113; // [rsp+1B0h] [rbp-40h]
  void *v114; // [rsp+1B8h] [rbp-38h]
  __int64 v115; // [rsp+1C0h] [rbp-30h]

  __s2 = a4; /*0x100534efa*/
  v10 = (__int64)a2; /*0x100534f04*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v96, a2, a3); /*0x100534f11*/
  v11 = *((_QWORD *)&v96 + 1); /*0x100534f1d*/
  if ( __OFSUB__(-(__int64)v96, 1) ) /*0x100534f27*/
  {
    *a1 = 2; /*0x100534f2c*/
    a1[1] = v11; /*0x100534f33*/
    return result; /*0x100534f33*/
  }
  __n = a5; /*0x100534f49*/
  __src = a6; /*0x100534f50*/
  v84 = a2; /*0x100534f57*/
  v83 = a3; /*0x100534f5e*/
  v108 = a1; /*0x100534f65*/
  v115 = v96; /*0x100534f69*/
  v12 = 0x8000000000000000LL; /*0x100534f6d*/
  v110 = 0; /*0x100534f7e*/
  v111 = 8; /*0x100534f86*/
  v112 = 0; /*0x100534f8e*/
  *(_QWORD *)&v92 = 0; /*0x100534f96*/
  *((_QWORD *)&v92 + 1) = __dst; /*0x100534fa1*/
  v107 = *((_QWORD *)&v96 + 1); /*0x100534fa8*/
  v93[0] = *((_QWORD *)&v96 + 1); /*0x100534fac*/
  v93[1] = __dst; /*0x100534fb3*/
  v93[2] = 0; /*0x100534fba*/
  v85 = (char *)__dst; /*0x100534fc5*/
  v93[3] = __dst; /*0x100534fcc*/
  v93[4] = 0xA0000000ALL; /*0x100534fdd*/
  v94 = 1; /*0x100534fe4*/
  v95 = 0; /*0x100534feb*/
  v88 = 0x8000000000000000LL; /*0x100534ffb*/
  v87 = 0; /*0x100535002*/
  while ( 1 ) /*0x1005352d1*/
  {
    while ( 1 ) /*0x10053500d*/
    {
      v13 = v93[0]; /*0x10053500d*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10053501e*/
        &v96,
        v93);
      if ( (_DWORD)v96 == 1 ) /*0x10053502a*/
      {
        v14 = (_BYTE *)v92; /*0x100535033*/
        *(_QWORD *)&v92 = __dst; /*0x10053503a*/
        v15 = (char *)((_BYTE *)__dst - v14); /*0x100535041*/
        v16 = &v14[v13]; /*0x100535044*/
        if ( __dst == v14 ) /*0x10053504a*/
          goto LABEL_17; /*0x10053504a*/
LABEL_11:
        if ( v15[(_QWORD)v16 - 1] == 10 ) /*0x100535098*/
        {
          if ( v15 == (char *)1 ) /*0x1005350a0*/
          {
            v15 = nullptr; /*0x1005350b0*/
          }
          else if ( v15[(_QWORD)v16 - 2] == 13 ) /*0x1005350a8*/
          {
            v15 -= 2; /*0x1005350aa*/
          }
          else
          {
            --v15; /*0x1005350b4*/
          }
        }
        goto LABEL_17; /*0x1005350ae*/
      }
      if ( HIBYTE(v95) ) /*0x100535057*/
        goto LABEL_59; /*0x100535057*/
      HIBYTE(v95) = 1; /*0x10053505d*/
      v15 = (char *)(*((_QWORD *)&v92 + 1) - v92); /*0x100535072*/
      if ( ((unsigned __int8)v95 | (*((_QWORD *)&v92 + 1) != (_QWORD)v92)) != 1 ) /*0x100535080*/
        goto LABEL_59; /*0x100535080*/
      v16 = (_QWORD *)(v93[0] + v92); /*0x100535086*/
      if ( v15 ) /*0x100535090*/
        goto LABEL_11; /*0x100535090*/
LABEL_17:
      v17 = v16; /*0x1005350c0*/
      v18 = (__int64)v15; /*0x1005350c3*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v16, v15); /*0x1005350c6*/
      if ( !v19 ) /*0x1005350ce*/
        goto LABEL_20; /*0x1005350ce*/
      *(_QWORD *)&v96 = v16; /*0x1005350d0*/
      *((_QWORD *)&v96 + 1) = v15; /*0x1005350d7*/
      v98 = 0; /*0x1005350e5*/
      __dst = nullptr; /*0x1005350ed*/
      v99 = v16; /*0x1005350f4*/
      v100 = v15; /*0x1005350fb*/
      v18 = (__int64)&v96; /*0x100535109*/
      serde_json::de::from_trait::h51e180b4bb6af5e0(&v80, &v96); /*0x10053510c*/
      if ( (_BYTE)v80 == 6 ) /*0x100535118*/
      {
        v17 = v81; /*0x10053511a*/
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v81); /*0x100535121*/
LABEL_20:
        v20 = v15 == nullptr; /*0x100535126*/
        if ( (__int64)v15 < 0 ) /*0x100535129*/
          goto LABEL_57; /*0x100535129*/
        goto LABEL_28; /*0x100535129*/
      }
      v86[3] = v81[2]; /*0x100535147*/
      v86[2] = v81[1]; /*0x100535155*/
      v86[1] = v81[0]; /*0x10053516a*/
      v86[0] = v80; /*0x100535171*/
      v18 = 4; /*0x100535178*/
      v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10053518b*/
              "typefullargsopenwithkindsavetrueuuidemitshowhide",
              4,
              v86);
      if ( !v21 /*0x100535290*/
        || *(_BYTE *)v21 != 3
        || *(_QWORD *)(v21 + 24) != 12
        || **(_QWORD **)(v21 + 16) ^ 0x5F6E6F6973736573LL
         | *(unsigned int *)(*(_QWORD *)(v21 + 16) + 8LL) ^ 0x6174656DLL
        || (v18 = (__int64)"/payload/cwdcwd",
            (v28 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v86, "/payload/cwdcwd", 12)) == 0)
        || *(_BYTE *)v28 != 3 )
      {
LABEL_26:
        v22 = (size_t)v113; /*0x1005351d0*/
        goto LABEL_27; /*0x1005351d0*/
      }
      v29 = *(void **)(v28 + 16); /*0x100535296*/
      v22 = *(_QWORD *)(v28 + 24); /*0x10053529a*/
      __s1 = v29; /*0x1005352a5*/
      if ( v22 == __n ) /*0x1005352ac*/
      {
        v18 = (__int64)__s2; /*0x1005352b5*/
        v30 = memcmp(__s1, __s2, __n); /*0x1005352c3*/
        v29 = __s1; /*0x1005352c8*/
        if ( !v30 ) /*0x1005352d1*/
          break; /*0x1005352d1*/
      }
      if ( v22 == a7 ) /*0x1005352de*/
      {
        v18 = (__int64)__src; /*0x1005352e0*/
        if ( !memcmp(v29, __src, a7) ) /*0x1005352e7*/
          goto LABEL_26; /*0x1005352e7*/
      }
      if ( v12 != 0x8000000000000000LL ) /*0x100535301*/
        goto LABEL_26; /*0x100535301*/
      v109 = 0x8000000000000000LL; /*0x100535307*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v96, v22, 0, 1, 1); /*0x100535322*/
      v12 = *((_QWORD *)&v96 + 1); /*0x100535327*/
      if ( (_DWORD)v96 == 1 ) /*0x100535335*/
      {
        v33 = (__int64)__dst; /*0x100535855*/
LABEL_95:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v33); /*0x10053585c*/
      }
      v114 = __dst; /*0x100535342*/
      v18 = (__int64)__s1; /*0x100535346*/
      memcpy(__dst, __s1, v22); /*0x100535350*/
LABEL_27:
      v17 = v86; /*0x1005351d4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v86); /*0x1005351db*/
      v113 = (void *)v22; /*0x1005351e0*/
      v20 = v15 == nullptr; /*0x1005351e4*/
      if ( (__int64)v15 < 0 ) /*0x1005351e7*/
      {
LABEL_57:
        v49 = 0; /*0x100535531*/
        goto LABEL_58; /*0x100535531*/
      }
LABEL_28:
      if ( v20 ) /*0x1005351ed*/
      {
        v10 = 1; /*0x10053520f*/
        goto LABEL_32; /*0x10053520f*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v18); /*0x1005351ef*/
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1005351fc*/
      if ( !v23 ) /*0x100535204*/
      {
        v10 = (__int64)v15; /*0x10053597c*/
        v49 = 1; /*0x10053597f*/
LABEL_58:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v10); /*0x100535533*/
      }
      v10 = v23; /*0x10053520a*/
LABEL_32:
      memcpy((void *)v10, v16, (size_t)v15); /*0x100535215*/
      v24 = v112; /*0x100535223*/
      if ( v112 == v110 ) /*0x10053522b*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v110); /*0x100535231*/
      v26 = v111; /*0x100535236*/
      v27 = 3 * v24; /*0x10053523a*/
      *(_QWORD *)(v111 + 8 * v27) = v15; /*0x10053523e*/
      *(_QWORD *)(v26 + 8 * v27 + 8) = v10; /*0x100535242*/
      *(_QWORD *)(v26 + 8 * v27 + 16) = v15; /*0x100535247*/
      v112 = v24 + 1; /*0x10053524f*/
      if ( HIBYTE(v95) ) /*0x100535261*/
      {
LABEL_59:
        if ( v12 == 0x8000000000000000LL ) /*0x100535555*/
        {
          v48 = (__int64)v114; /*0x100535562*/
          if ( (v87 & 1) == 0 ) /*0x100535566*/
          {
            v59 = v108; /*0x1005356e5*/
            *((_BYTE *)v108 + 8) = 0; /*0x1005356e9*/
            *v59 = 11; /*0x1005356ed*/
            v50 = v115; /*0x1005356f4*/
            v60 = v112; /*0x1005356f8*/
            if ( v112 ) /*0x1005356ff*/
              goto LABEL_81; /*0x1005356ff*/
            goto LABEL_97; /*0x1005356ff*/
          }
          goto LABEL_61; /*0x100535566*/
        }
        v48 = (__int64)v114; /*0x10053560e*/
        goto LABEL_67; /*0x10053560e*/
      }
    }
    v18 = 7; /*0x10053535a*/
    v31 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x10053536d*/
                     "payloadbase_instructions",
                     7,
                     v86);
    if ( !v31 || *v31 != 5 ) /*0x10053537e*/
      goto LABEL_26; /*0x10053537e*/
    v109 = v12; /*0x100535384*/
    v32 = v31; /*0x100535388*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payloadbase_instructions", 7); /*0x10053538b*/
    v33 = 3; /*0x100535390*/
    v12 = 1; /*0x100535396*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x1005353a6*/
    if ( !v34 ) /*0x1005353ae*/
      goto LABEL_95; /*0x1005353ae*/
    *(_BYTE *)(v34 + 2) = 100; /*0x1005353b7*/
    *(_WORD *)v34 = 30563; /*0x1005353bb*/
    v79[0] = 3; /*0x1005353c0*/
    v79[1] = v34; /*0x1005353cb*/
    v79[2] = 3; /*0x1005353d2*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v96, a7, 0, 1, 1); /*0x1005353f5*/
    v35 = *((_QWORD *)&v96 + 1); /*0x1005353fa*/
    if ( (_BYTE)v96 ) /*0x100535408*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v96 + 1), __dst); /*0x100535993*/
    v36 = v32 + 8; /*0x100535411*/
    v37 = __dst; /*0x100535415*/
    memcpy(__dst, __src, a7); /*0x10053542d*/
    *((_QWORD *)&v96 + 1) = v35; /*0x100535432*/
    __dst = v37; /*0x100535439*/
    v98 = a7; /*0x100535440*/
    LOBYTE(v96) = 3; /*0x100535447*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v77, v36, v79, &v96); /*0x100535466*/
    if ( LOBYTE(v77[0]) != 6 ) /*0x100535472*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v77); /*0x10053547b*/
    serde_json::ser::to_vec::haa2ccd5674877793(&v96, v86, v38, v39, v40, v41, v77[0], v77[1], v77[2]); /*0x10053548e*/
    v42 = v96; /*0x10053549a*/
    if ( (_QWORD)v96 == 0x8000000000000000LL ) /*0x1005354ae*/
      break; /*0x1005354ae*/
    v43 = __dst; /*0x1005354b4*/
    v44 = v112; /*0x1005354bb*/
    if ( v112 == v110 ) /*0x1005354c3*/
      result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v110); /*0x1005354c9*/
    v45 = v111; /*0x1005354ce*/
    v46 = 3 * v44; /*0x1005354d2*/
    *(_OWORD *)(v111 + 8 * v46) = v42; /*0x1005354d6*/
    *(_QWORD *)(v45 + 8 * v46 + 16) = v43; /*0x1005354df*/
    v112 = v44 + 1; /*0x1005354e7*/
    v47 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v86); /*0x1005354f2*/
    LOBYTE(v47) = 1; /*0x1005354f7*/
    v87 = v47; /*0x1005354f9*/
    v12 = v109; /*0x100535507*/
    if ( HIBYTE(v95) ) /*0x100535512*/
    {
      v48 = (__int64)v114; /*0x100535525*/
      if ( v109 == 0x8000000000000000LL ) /*0x100535529*/
      {
LABEL_61:
        v50 = v115; /*0x10053556c*/
        alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10053558f*/
          &v96,
          v111,
          v112,
          &anon_92869709a5e99ce1936aa4e326b6c562_1024,
          1);
        v93[0] = __dst; /*0x10053559b*/
        v92 = v96; /*0x1005355b7*/
        if ( v85 ) /*0x1005355c8*/
        {
          v52 = v93[0]; /*0x1005355d7*/
          if ( v85[v107 - 1] == 10 ) /*0x1005355de*/
          {
            v53 = v93[0]; /*0x1005355e4*/
            if ( (_QWORD)v92 == v93[0] ) /*0x1005355ee*/
            {
              v73 = v93[0]; /*0x100535830*/
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100535841*/
                &v92,
                v93[0],
                1,
                1,
                1,
                v51);
              v53 = v93[0]; /*0x100535846*/
              v52 = v73; /*0x10053584d*/
            }
            *(_BYTE *)(*((_QWORD *)&v92 + 1) + v53) = 10; /*0x1005355fb*/
            v93[0] = ++v52; /*0x100535602*/
          }
        }
        else
        {
          v52 = v93[0]; /*0x100535706*/
        }
        v61 = *((_QWORD *)&v92 + 1); /*0x10053570d*/
        v62 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100535728*/
                v84,
                v83,
                *((__int64 *)&v92 + 1),
                v52,
                0);
        if ( v62 ) /*0x100535730*/
        {
          v63 = v108; /*0x100535732*/
          *v108 = 2; /*0x100535736*/
          v63[1] = v62; /*0x10053573d*/
          if ( (_QWORD)v92 ) /*0x10053574b*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v92, 1); /*0x100535755*/
          v60 = v112; /*0x10053575a*/
          if ( v112 ) /*0x100535761*/
            goto LABEL_81; /*0x100535761*/
          goto LABEL_97; /*0x100535761*/
        }
        v66 = v108; /*0x1005357a5*/
        *((_BYTE *)v108 + 8) = 1; /*0x1005357a9*/
        *v66 = 11; /*0x1005357ad*/
        if ( (_QWORD)v92 ) /*0x1005357be*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v92, 1); /*0x1005357c8*/
        v67 = v112; /*0x1005357cd*/
        if ( v112 ) /*0x1005357d4*/
        {
          v68 = (_QWORD *)(v111 + 8); /*0x1005357da*/
          do /*0x1005357e7*/
          {
            v69 = *(v68 - 1); /*0x1005357e9*/
            if ( v69 ) /*0x1005357f0*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v68, v69, 1); /*0x1005357fa*/
            v68 += 3; /*0x1005357e0*/
            --v67; /*0x1005357e4*/
          }
          while ( v67 ); /*0x1005357e7*/
        }
LABEL_92:
        if ( v110 ) /*0x100535808*/
        {
          v70 = v111; /*0x10053580e*/
          v71 = 24 * v110; /*0x100535816*/
          v72 = 8; /*0x10053581a*/
          goto LABEL_101; /*0x10053581f*/
        }
        goto LABEL_102; /*0x100535808*/
      }
LABEL_67:
      *(_QWORD *)&v96 = v12; /*0x100535612*/
      *((_QWORD *)&v96 + 1) = v48; /*0x100535619*/
      __dst = v113; /*0x100535624*/
      *(_QWORD *)&v92 = &v96; /*0x10053562b*/
      *((_QWORD *)&v92 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100535639*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017C1A2D, &v92); /*0x100535655*/
      v54 = v108; /*0x100535661*/
      v108[3] = v78[2]; /*0x100535665*/
      v55 = v78[0]; /*0x100535669*/
      v54[2] = v78[1]; /*0x100535677*/
      v54[1] = v55; /*0x10053567b*/
      *v54 = 10; /*0x10053567f*/
      v50 = v115; /*0x100535690*/
      if ( (_QWORD)v96 ) /*0x100535694*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v96 + 1), v96, 1); /*0x1005356a2*/
      v56 = v112; /*0x1005356a7*/
      if ( v112 ) /*0x1005356ae*/
      {
        v57 = (_QWORD *)(v111 + 8); /*0x1005356b8*/
        do /*0x1005356c7*/
        {
          v58 = *(v57 - 1); /*0x1005356cd*/
          if ( v58 ) /*0x1005356d4*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v57, v58, 1); /*0x1005356de*/
          v57 += 3; /*0x1005356c0*/
          --v56; /*0x1005356c4*/
        }
        while ( v56 ); /*0x1005356c7*/
      }
      goto LABEL_92; /*0x1005356c7*/
    }
  }
  codexmate_lib::core::sessions::patch_rollout_cwd::_$u7b$$u7b$closure$u7d$$u7d$::h1a70da12796aabef( /*0x100535876*/
    &v96,
    *((_QWORD *)&v96 + 1));
  v74 = __dst; /*0x10053587b*/
  v75 = v98; /*0x100535882*/
  v76 = v108; /*0x10053588d*/
  v108[11] = v106; /*0x100535891*/
  v76[10] = v105; /*0x100535899*/
  v76[9] = v104; /*0x1005358a4*/
  v76[8] = v103; /*0x1005358af*/
  v76[7] = v102; /*0x1005358ba*/
  v76[6] = v101; /*0x1005358c5*/
  v76[5] = v100; /*0x1005358d0*/
  v76[4] = v99; /*0x1005358db*/
  result = *(double *)&v96; /*0x1005358df*/
  *(_OWORD *)v76 = v96; /*0x1005358e6*/
  v76[2] = v74; /*0x1005358e9*/
  v76[3] = v75; /*0x1005358ed*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v86); /*0x1005358f8*/
  v88 = v109; /*0x100535901*/
  v50 = v115; /*0x100535908*/
  v48 = (__int64)v114; /*0x10053590c*/
  v60 = v112; /*0x100535910*/
  if ( !v112 ) /*0x100535917*/
    goto LABEL_97; /*0x100535917*/
LABEL_81:
  v64 = (_QWORD *)(v111 + 8); /*0x100535767*/
  do /*0x100535787*/
  {
    v65 = *(v64 - 1); /*0x10053578d*/
    if ( v65 ) /*0x100535794*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v65, 1); /*0x10053579e*/
    v64 += 3; /*0x100535780*/
    --v60; /*0x100535784*/
  }
  while ( v60 ); /*0x100535787*/
LABEL_97:
  if ( v110 ) /*0x100535924*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 24 * v110, 8); /*0x100535937*/
  v71 = v88; /*0x10053593c*/
  if ( 2 * v88 ) /*0x100535943*/
  {
    v72 = 1; /*0x100535950*/
    v70 = v48; /*0x100535955*/
LABEL_101:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v71, v72); /*0x100535958*/
  }
LABEL_102:
  if ( v50 ) /*0x100535960*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v50, 1); /*0x100535972*/
  return result; /*0x100534f37*/
}