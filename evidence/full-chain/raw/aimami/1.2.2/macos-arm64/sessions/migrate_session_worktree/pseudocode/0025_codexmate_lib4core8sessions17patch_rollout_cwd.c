// mac 1.2.2 NEW migrate_session_worktree 0x100a33be0 d=1
unsigned __int64 __fastcall codexmate_lib::core::sessions::patch_rollout_cwd::h93e9f21990842b0e(
        _QWORD *a1,
        _BYTE *a2,
        size_t a3,
        void *a4,
        size_t a5,
        void *a6,
        size_t a7)
{
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  _BYTE *v14; // rax
  char *v15; // rbx
  unsigned __int8 *v16; // r12
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
  size_t v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rdi
  int v28; // eax
  _BYTE *v29; // rax
  _BYTE *v30; // r12
  __int64 v31; // rax
  __int64 v32; // r14
  _BYTE *v33; // rbx
  void *v34; // r12
  __int128 v35; // kr00_16
  void *v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  void *v41; // r12
  __int64 v42; // rdi
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rdx
  size_t v47; // rax
  __int64 v48; // rbx
  __int64 v49; // r14
  _QWORD *v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // r14
  _QWORD *v55; // rax
  __int64 v56; // rbx
  __int64 v57; // r14
  __int64 v58; // rsi
  void *v59; // rax
  size_t v60; // rcx
  _QWORD *v61; // rsi
  _QWORD v62[4]; // [rsp+0h] [rbp-1F0h] BYREF
  size_t v63[3]; // [rsp+20h] [rbp-1D0h] BYREF
  _QWORD v64[3]; // [rsp+38h] [rbp-1B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-1A0h] BYREF
  __int64 *v66[3]; // [rsp+58h] [rbp-198h] BYREF
  void *__s2; // [rsp+70h] [rbp-180h]
  size_t v68; // [rsp+78h] [rbp-178h]
  _BYTE *v69; // [rsp+80h] [rbp-170h]
  char *v70; // [rsp+88h] [rbp-168h]
  _QWORD v71[4]; // [rsp+90h] [rbp-160h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-140h]
  unsigned __int64 v73; // [rsp+B8h] [rbp-138h]
  size_t __n; // [rsp+C0h] [rbp-130h]
  void *__src; // [rsp+C8h] [rbp-128h]
  void *__s1; // [rsp+D0h] [rbp-120h]
  __int128 v77; // [rsp+D8h] [rbp-118h] BYREF
  __int64 v78[5]; // [rsp+E8h] [rbp-108h] BYREF
  char v79; // [rsp+110h] [rbp-E0h]
  __int16 v80; // [rsp+118h] [rbp-D8h]
  __int128 v81; // [rsp+120h] [rbp-D0h] BYREF
  void *__dst; // [rsp+130h] [rbp-C0h]
  size_t v83; // [rsp+138h] [rbp-B8h]
  unsigned __int8 *v84; // [rsp+140h] [rbp-B0h]
  char *v85; // [rsp+148h] [rbp-A8h]
  __int64 v86; // [rsp+150h] [rbp-A0h]
  __int64 v87; // [rsp+158h] [rbp-98h]
  __int64 v88; // [rsp+160h] [rbp-90h]
  __int64 v89; // [rsp+168h] [rbp-88h]
  __int64 v90; // [rsp+170h] [rbp-80h]
  __int64 v91; // [rsp+178h] [rbp-78h]
  __int64 v92; // [rsp+180h] [rbp-70h]
  _QWORD *v93; // [rsp+188h] [rbp-68h]
  unsigned __int64 v94; // [rsp+190h] [rbp-60h]
  __int64 v95; // [rsp+198h] [rbp-58h] BYREF
  __int64 v96; // [rsp+1A0h] [rbp-50h]
  __int64 v97; // [rsp+1A8h] [rbp-48h]
  void *v98; // [rsp+1B0h] [rbp-40h]
  void *v99; // [rsp+1B8h] [rbp-38h]
  __int64 v100; // [rsp+1C0h] [rbp-30h]

  __s2 = a4; /*0x100a33bfa*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v81, a2, a3); /*0x100a33c11*/
  v10 = *((_QWORD *)&v81 + 1); /*0x100a33c1d*/
  result = -(__int64)v81; /*0x100a33c27*/
  if ( __OFSUB__(-(__int64)v81, 1) ) /*0x100a33c27*/
  {
    *a1 = 2; /*0x100a33c2c*/
    a1[1] = v10; /*0x100a33c33*/
    return result; /*0x100a33c33*/
  }
  __n = a5; /*0x100a33c49*/
  __src = a6; /*0x100a33c50*/
  v69 = a2; /*0x100a33c57*/
  v68 = a3; /*0x100a33c5e*/
  v93 = a1; /*0x100a33c65*/
  v100 = v81; /*0x100a33c69*/
  v12 = 0x8000000000000000LL; /*0x100a33c6d*/
  v95 = 0; /*0x100a33c7e*/
  v96 = 8; /*0x100a33c86*/
  v97 = 0; /*0x100a33c8e*/
  *(_QWORD *)&v77 = 0; /*0x100a33c96*/
  *((_QWORD *)&v77 + 1) = __dst; /*0x100a33ca1*/
  v92 = *((_QWORD *)&v81 + 1); /*0x100a33ca8*/
  v78[0] = *((_QWORD *)&v81 + 1); /*0x100a33cac*/
  v78[1] = (__int64)__dst; /*0x100a33cb3*/
  v78[2] = 0; /*0x100a33cba*/
  v70 = (char *)__dst; /*0x100a33cc5*/
  v78[3] = (__int64)__dst; /*0x100a33ccc*/
  v78[4] = 0xA0000000ALL; /*0x100a33cdd*/
  v79 = 1; /*0x100a33ce4*/
  v80 = 0; /*0x100a33ceb*/
  v73 = 0x8000000000000000LL; /*0x100a33cfb*/
  v72 = 0; /*0x100a33d02*/
  while ( 1 ) /*0x100a33fd1*/
  {
    while ( 1 ) /*0x100a33d0d*/
    {
      v13 = v78[0]; /*0x100a33d0d*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100a33d1e*/
        &v81,
        v78);
      if ( (_DWORD)v81 == 1 ) /*0x100a33d2a*/
      {
        v14 = (_BYTE *)v77; /*0x100a33d33*/
        *(_QWORD *)&v77 = __dst; /*0x100a33d3a*/
        v15 = (char *)((_BYTE *)__dst - v14); /*0x100a33d41*/
        v16 = &v14[v13]; /*0x100a33d44*/
        if ( __dst == v14 ) /*0x100a33d4a*/
          goto LABEL_17; /*0x100a33d4a*/
LABEL_11:
        if ( v15[(_QWORD)v16 - 1] == 10 ) /*0x100a33d98*/
        {
          if ( v15 == (char *)1 ) /*0x100a33da0*/
          {
            v15 = nullptr; /*0x100a33db0*/
          }
          else if ( v15[(_QWORD)v16 - 2] == 13 ) /*0x100a33da8*/
          {
            v15 -= 2; /*0x100a33daa*/
          }
          else
          {
            --v15; /*0x100a33db4*/
          }
        }
        goto LABEL_17; /*0x100a33dae*/
      }
      if ( HIBYTE(v80) ) /*0x100a33d57*/
        goto LABEL_59; /*0x100a33d57*/
      HIBYTE(v80) = 1; /*0x100a33d5d*/
      v15 = (char *)(*((_QWORD *)&v77 + 1) - v77); /*0x100a33d72*/
      if ( ((unsigned __int8)v80 | (*((_QWORD *)&v77 + 1) != (_QWORD)v77)) != 1 ) /*0x100a33d80*/
        goto LABEL_59; /*0x100a33d80*/
      v16 = (unsigned __int8 *)(v78[0] + v77); /*0x100a33d86*/
      if ( v15 ) /*0x100a33d90*/
        goto LABEL_11; /*0x100a33d90*/
LABEL_17:
      core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v16, (__int64)v15); /*0x100a33dc0*/
      if ( !v17 ) /*0x100a33dce*/
        goto LABEL_20; /*0x100a33dce*/
      *(_QWORD *)&v81 = v16; /*0x100a33dd0*/
      *((_QWORD *)&v81 + 1) = v15; /*0x100a33dd7*/
      v83 = 0; /*0x100a33de5*/
      __dst = nullptr; /*0x100a33ded*/
      v84 = v16; /*0x100a33df4*/
      v85 = v15; /*0x100a33dfb*/
      serde_json::de::from_trait::hd7f835a315d0fab8(&v65, (__int64 *)&v81); /*0x100a33e0c*/
      if ( (_BYTE)v65 == 6 ) /*0x100a33e18*/
      {
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(v66); /*0x100a33e21*/
LABEL_20:
        v18 = v15 == nullptr; /*0x100a33e26*/
        if ( (__int64)v15 < 0 ) /*0x100a33e29*/
          goto LABEL_57; /*0x100a33e29*/
        goto LABEL_28; /*0x100a33e29*/
      }
      v71[3] = v66[2]; /*0x100a33e47*/
      v71[2] = v66[1]; /*0x100a33e55*/
      v71[1] = v66[0]; /*0x100a33e6a*/
      v71[0] = v65; /*0x100a33e71*/
      v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a33e8b*/
              "typefullargsopenwithkindsavetrueuuidemitshowhide",
              4u,
              (__int64)v71);
      if ( !v19 /*0x100a33f90*/
        || *(_BYTE *)v19 != 3
        || *(_QWORD *)(v19 + 24) != 12
        || **(_QWORD **)(v19 + 16) ^ 0x5F6E6F6973736573LL
         | *(unsigned int *)(*(_QWORD *)(v19 + 16) + 8LL) ^ 0x6174656DLL
        || (v26 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v71, "/payload/cwdcwd", 12)) == 0
        || *(_BYTE *)v26 != 3 )
      {
LABEL_26:
        v20 = (size_t)v98; /*0x100a33ed0*/
        goto LABEL_27; /*0x100a33ed0*/
      }
      v27 = *(void **)(v26 + 16); /*0x100a33f96*/
      v20 = *(_QWORD *)(v26 + 24); /*0x100a33f9a*/
      __s1 = v27; /*0x100a33fa5*/
      if ( v20 == __n ) /*0x100a33fac*/
      {
        v28 = memcmp(__s1, __s2, __n); /*0x100a33fc3*/
        v27 = __s1; /*0x100a33fc8*/
        if ( !v28 ) /*0x100a33fd1*/
          break; /*0x100a33fd1*/
      }
      if ( v20 == a7 && !memcmp(v27, __src, a7) || v12 != 0x8000000000000000LL ) /*0x100a34001*/
        goto LABEL_26; /*0x100a34001*/
      v94 = 0x8000000000000000LL; /*0x100a34007*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h7da47a1739ade32e((__int64 *)&v81, v20, 0, 1u, 1); /*0x100a34022*/
      v12 = *((_QWORD *)&v81 + 1); /*0x100a34027*/
      if ( (_DWORD)v81 == 1 ) /*0x100a34035*/
        goto LABEL_94; /*0x100a34035*/
      v99 = __dst; /*0x100a34042*/
      memcpy(__dst, __s1, v20); /*0x100a34050*/
LABEL_27:
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v71); /*0x100a33ed4*/
      v98 = (void *)v20; /*0x100a33ee0*/
      v18 = v15 == nullptr; /*0x100a33ee4*/
      if ( (__int64)v15 < 0 ) /*0x100a33ee7*/
      {
LABEL_57:
        v42 = 0; /*0x100a34231*/
        goto LABEL_58; /*0x100a34231*/
      }
LABEL_28:
      if ( v18 ) /*0x100a33eed*/
      {
        v22 = 1; /*0x100a33f0f*/
        goto LABEL_32; /*0x100a33f0f*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a33eef*/
      v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((size_t)v15, 1u); /*0x100a33efc*/
      if ( !v21 ) /*0x100a33f04*/
      {
        v42 = 1; /*0x100a3467f*/
LABEL_58:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42); /*0x100a34233*/
      }
      v22 = v21; /*0x100a33f0a*/
LABEL_32:
      memcpy((void *)v22, v16, (size_t)v15); /*0x100a33f15*/
      v23 = v97; /*0x100a33f23*/
      if ( v97 == v95 ) /*0x100a33f2b*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v95); /*0x100a33f31*/
      v24 = v96; /*0x100a33f36*/
      v25 = 3 * v23; /*0x100a33f3a*/
      *(_QWORD *)(v96 + 8 * v25) = v15; /*0x100a33f3e*/
      *(_QWORD *)(v24 + 8 * v25 + 8) = v22; /*0x100a33f42*/
      *(_QWORD *)(v24 + 8 * v25 + 16) = v15; /*0x100a33f47*/
      v97 = v23 + 1; /*0x100a33f4f*/
      if ( HIBYTE(v80) ) /*0x100a33f61*/
      {
LABEL_59:
        if ( v12 == 0x8000000000000000LL ) /*0x100a34255*/
        {
          if ( (v72 & 1) == 0 ) /*0x100a34266*/
          {
            v50 = v93; /*0x100a343e5*/
            *((_BYTE *)v93 + 8) = 0; /*0x100a343e9*/
            *v50 = 10; /*0x100a343ed*/
            v43 = v100; /*0x100a343f4*/
            v51 = v97; /*0x100a343f8*/
            if ( v97 ) /*0x100a343ff*/
              goto LABEL_81; /*0x100a343ff*/
            goto LABEL_96; /*0x100a343ff*/
          }
          goto LABEL_61; /*0x100a34266*/
        }
        v41 = v99; /*0x100a3430e*/
        goto LABEL_67; /*0x100a3430e*/
      }
    }
    v29 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100a3406d*/
                     "payload",
                     7,
                     v71);
    if ( !v29 || *v29 != 5 ) /*0x100a3407e*/
      goto LABEL_26; /*0x100a3407e*/
    v94 = v12; /*0x100a34084*/
    v30 = v29; /*0x100a34088*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3408b*/
    v12 = 1; /*0x100a34096*/
    v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3u, 1u); /*0x100a340a6*/
    if ( !v31 ) /*0x100a340ae*/
LABEL_94:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12); /*0x100a3455c*/
    *(_BYTE *)(v31 + 2) = 100; /*0x100a340b7*/
    *(_WORD *)v31 = 30563; /*0x100a340bb*/
    v64[0] = 3; /*0x100a340c0*/
    v64[1] = v31; /*0x100a340cb*/
    v64[2] = 3; /*0x100a340d2*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h7da47a1739ade32e((__int64 *)&v81, a7, 0, 1u, 1); /*0x100a340f5*/
    v32 = *((_QWORD *)&v81 + 1); /*0x100a340fa*/
    if ( (_BYTE)v81 ) /*0x100a34108*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((__int64 *)&v81 + 1)); /*0x100a34693*/
    v33 = v30 + 8; /*0x100a34111*/
    v34 = __dst; /*0x100a34115*/
    memcpy(__dst, __src, a7); /*0x100a3412d*/
    *((_QWORD *)&v81 + 1) = v32; /*0x100a34132*/
    __dst = v34; /*0x100a34139*/
    v83 = a7; /*0x100a34140*/
    LOBYTE(v81) = 3; /*0x100a34147*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66(v62, v33, v64, &v81); /*0x100a34166*/
    if ( LOBYTE(v62[0]) != 6 ) /*0x100a34172*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v62); /*0x100a3417b*/
    serde_json::ser::to_vec::hd46ba7b10fc24129(&v81, v71); /*0x100a3418e*/
    v35 = v81; /*0x100a3419a*/
    if ( (_QWORD)v81 == 0x8000000000000000LL ) /*0x100a341ae*/
      break; /*0x100a341ae*/
    v36 = __dst; /*0x100a341b4*/
    v37 = v97; /*0x100a341bb*/
    if ( v97 == v95 ) /*0x100a341c3*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v95); /*0x100a341c9*/
    v38 = v96; /*0x100a341ce*/
    v39 = 3 * v37; /*0x100a341d2*/
    *(_OWORD *)(v96 + 8 * v39) = v35; /*0x100a341d6*/
    *(_QWORD *)(v38 + 8 * v39 + 16) = v36; /*0x100a341df*/
    v97 = v37 + 1; /*0x100a341e7*/
    v40 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v71); /*0x100a341f2*/
    LOBYTE(v40) = 1; /*0x100a341f7*/
    v72 = v40; /*0x100a341f9*/
    v12 = v94; /*0x100a34207*/
    if ( HIBYTE(v80) ) /*0x100a34212*/
    {
      v41 = v99; /*0x100a34225*/
      if ( v94 == 0x8000000000000000LL ) /*0x100a34229*/
      {
LABEL_61:
        v43 = v100; /*0x100a3426c*/
        alloc::str::join_generic_copy::hfccd3ffc09b1fad9(&v81, v96, v97, "\n", 1); /*0x100a3428f*/
        v78[0] = (__int64)__dst; /*0x100a3429b*/
        v77 = v81; /*0x100a342b7*/
        if ( v70 ) /*0x100a342c8*/
        {
          v44 = v78[0]; /*0x100a342d7*/
          if ( v70[v92 - 1] == 10 ) /*0x100a342de*/
          {
            v45 = v78[0]; /*0x100a342e4*/
            if ( (_QWORD)v77 == v78[0] ) /*0x100a342ee*/
            {
              v58 = v78[0]; /*0x100a34530*/
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x100a34541*/
                (unsigned __int64 *)&v77,
                v78[0],
                1,
                1,
                1u);
              v45 = v78[0]; /*0x100a34546*/
              v44 = v58; /*0x100a3454d*/
            }
            *(_BYTE *)(*((_QWORD *)&v77 + 1) + v45) = 10; /*0x100a342fb*/
            v78[0] = ++v44; /*0x100a34302*/
          }
        }
        else
        {
          v44 = v78[0]; /*0x100a34406*/
        }
        v52 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hd5da3edf4306a101( /*0x100a34428*/
                v69,
                v68,
                *((__int64 *)&v77 + 1),
                v44,
                0);
        if ( v52 ) /*0x100a34430*/
        {
          v53 = v93; /*0x100a34432*/
          *v93 = 2; /*0x100a34436*/
          v53[1] = v52; /*0x100a3443d*/
          if ( (_QWORD)v77 ) /*0x100a3444b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a34455*/
          v51 = v97; /*0x100a3445a*/
          if ( v97 ) /*0x100a34461*/
            goto LABEL_81; /*0x100a34461*/
          goto LABEL_96; /*0x100a34461*/
        }
        v55 = v93; /*0x100a344a5*/
        *((_BYTE *)v93 + 8) = 1; /*0x100a344a9*/
        *v55 = 10; /*0x100a344ad*/
        if ( (_QWORD)v77 ) /*0x100a344be*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a344c8*/
        v56 = v97; /*0x100a344cd*/
        if ( v97 ) /*0x100a344d4*/
        {
          v57 = v96 + 8; /*0x100a344da*/
          do /*0x100a344e7*/
          {
            if ( *(_QWORD *)(v57 - 8) ) /*0x100a344e9*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a344fa*/
            v57 += 24; /*0x100a344e0*/
            --v56; /*0x100a344e4*/
          }
          while ( v56 ); /*0x100a344e7*/
        }
LABEL_92:
        result = v95; /*0x100a34501*/
        if ( v95 ) /*0x100a34508*/
          goto LABEL_99; /*0x100a34508*/
        goto LABEL_100; /*0x100a34508*/
      }
LABEL_67:
      *(_QWORD *)&v81 = v12; /*0x100a34312*/
      *((_QWORD *)&v81 + 1) = v41; /*0x100a34319*/
      __dst = v98; /*0x100a34324*/
      *(_QWORD *)&v77 = &v81; /*0x100a3432b*/
      *((_QWORD *)&v77 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a34339*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v63, byte_1016FEAA7, (unsigned __int64)&v77); /*0x100a34355*/
      v46 = v93; /*0x100a34361*/
      v93[3] = v63[2]; /*0x100a34365*/
      v47 = v63[0]; /*0x100a34369*/
      v46[2] = v63[1]; /*0x100a34377*/
      v46[1] = v47; /*0x100a3437b*/
      *v46 = 9; /*0x100a3437f*/
      v43 = v100; /*0x100a34390*/
      if ( (_QWORD)v81 ) /*0x100a34394*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a343a2*/
      v48 = v97; /*0x100a343a7*/
      if ( v97 ) /*0x100a343ae*/
      {
        v49 = v96 + 8; /*0x100a343b8*/
        do /*0x100a343c7*/
        {
          if ( *(_QWORD *)(v49 - 8) ) /*0x100a343cd*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a343de*/
          v49 += 24; /*0x100a343c0*/
          --v48; /*0x100a343c4*/
        }
        while ( v48 ); /*0x100a343c7*/
      }
      goto LABEL_92; /*0x100a343c7*/
    }
  }
  codexmate_lib::core::sessions::patch_rollout_cwd::_$u7b$$u7b$closure$u7d$$u7d$::h6f7d72b6f858cb1a( /*0x100a34576*/
    &v81,
    *((_QWORD *)&v81 + 1));
  v59 = __dst; /*0x100a3457b*/
  v60 = v83; /*0x100a34582*/
  v61 = v93; /*0x100a3458d*/
  v93[11] = v91; /*0x100a34591*/
  v61[10] = v90; /*0x100a34599*/
  v61[9] = v89; /*0x100a345a4*/
  v61[8] = v88; /*0x100a345af*/
  v61[7] = v87; /*0x100a345ba*/
  v61[6] = v86; /*0x100a345c5*/
  v61[5] = v85; /*0x100a345d0*/
  v61[4] = v84; /*0x100a345db*/
  *(_OWORD *)v61 = v81; /*0x100a345e6*/
  v61[2] = v59; /*0x100a345e9*/
  v61[3] = v60; /*0x100a345ed*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v71); /*0x100a345f8*/
  v73 = v94; /*0x100a34601*/
  v43 = v100; /*0x100a34608*/
  v51 = v97; /*0x100a34610*/
  if ( !v97 ) /*0x100a34617*/
    goto LABEL_96; /*0x100a34617*/
LABEL_81:
  v54 = v96 + 8; /*0x100a34467*/
  do /*0x100a34487*/
  {
    if ( *(_QWORD *)(v54 - 8) ) /*0x100a3448d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3449e*/
    v54 += 24; /*0x100a34480*/
    --v51; /*0x100a34484*/
  }
  while ( v51 ); /*0x100a34487*/
LABEL_96:
  if ( v95 ) /*0x100a34624*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a34637*/
  result = 2 * v73; /*0x100a34643*/
  if ( 2 * v73 ) /*0x100a34643*/
LABEL_99:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a34658*/
LABEL_100:
  if ( v43 ) /*0x100a34660*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a34672*/
  return result; /*0x100a33c37*/
}