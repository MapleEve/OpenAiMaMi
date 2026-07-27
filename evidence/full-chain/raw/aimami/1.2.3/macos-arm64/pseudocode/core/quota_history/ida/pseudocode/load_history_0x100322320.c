// __ZN13codexmate_lib4core13quota_history12load_history @ 0x100322320 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::quota_history::load_history::h91fd9dab00e9774b(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        void *a5,
        size_t a6)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // r13
  __int64 v23; // r15
  __int64 v24; // rdx
  int v25; // r14d
  __int64 v26; // r12
  void *v27; // rdi
  __int64 v28; // r15
  int v29; // eax
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int128 *v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int128 *v39; // r12
  __int64 v40; // r14
  _QWORD *v41; // rax
  _QWORD *v42; // r14
  __int64 v43; // rsi
  __int64 v44; // r13
  unsigned __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rbx
  void *v50; // r15
  __int64 v51; // r14
  __int64 v52; // rsi
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v56; // rbx
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // rsi
  __int64 v60; // [rsp+0h] [rbp-1D0h] BYREF
  unsigned __int64 v61; // [rsp+8h] [rbp-1C8h]
  __int64 v62; // [rsp+10h] [rbp-1C0h]
  __int64 v63; // [rsp+18h] [rbp-1B8h] BYREF
  unsigned __int64 v64; // [rsp+20h] [rbp-1B0h]
  unsigned __int64 v65; // [rsp+28h] [rbp-1A8h]
  __int64 v66; // [rsp+30h] [rbp-1A0h] BYREF
  __int64 v67; // [rsp+38h] [rbp-198h]
  __int128 *v68; // [rsp+40h] [rbp-190h] BYREF
  __int64 v69; // [rsp+48h] [rbp-188h]
  __int64 v70; // [rsp+50h] [rbp-180h]
  __int64 v71; // [rsp+58h] [rbp-178h]
  __int64 v72; // [rsp+60h] [rbp-170h]
  void *__s1; // [rsp+68h] [rbp-168h]
  __int64 v74; // [rsp+70h] [rbp-160h]
  __int64 v75; // [rsp+78h] [rbp-158h]
  __int16 v76; // [rsp+80h] [rbp-150h]
  __int64 v77; // [rsp+D8h] [rbp-F8h] BYREF
  __int64 v78; // [rsp+E0h] [rbp-F0h]
  __int64 v79; // [rsp+E8h] [rbp-E8h]
  __int64 v80; // [rsp+F0h] [rbp-E0h]
  __int64 v81; // [rsp+F8h] [rbp-D8h]
  unsigned int v82; // [rsp+100h] [rbp-D0h]
  void *__s2; // [rsp+108h] [rbp-C8h]
  size_t __n; // [rsp+110h] [rbp-C0h]
  void *v85; // [rsp+118h] [rbp-B8h]
  __int128 v86; // [rsp+120h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+130h] [rbp-A0h]
  unsigned __int64 v88; // [rsp+138h] [rbp-98h]
  __int64 *v89; // [rsp+140h] [rbp-90h]
  __int64 v90; // [rsp+148h] [rbp-88h]
  size_t v91; // [rsp+150h] [rbp-80h]
  void *__src; // [rsp+158h] [rbp-78h]
  __int64 v93; // [rsp+160h] [rbp-70h] BYREF
  void *__buf; // [rsp+168h] [rbp-68h]
  __int64 v95; // [rsp+170h] [rbp-60h]
  unsigned __int64 v96; // [rsp+178h] [rbp-58h]
  __int64 v97; // [rsp+180h] [rbp-50h]
  __int64 v98; // [rsp+188h] [rbp-48h] BYREF
  __int64 v99; // [rsp+190h] [rbp-40h]
  unsigned __int64 v100; // [rsp+198h] [rbp-38h]
  _QWORD *v101; // [rsp+1A0h] [rbp-30h]

  __n = a6; /*0x100322334*/
  __s2 = a5; /*0x10032233b*/
  v101 = a1; /*0x100322345*/
  v98 = 0; /*0x100322349*/
  v99 = 8; /*0x100322351*/
  v100 = 0; /*0x100322359*/
  __src = a2; /*0x100322368*/
  v91 = a3; /*0x10032236c*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v68, a2, a3); /*0x100322370*/
  if ( (_BYTE)v68 ) /*0x10032237c*/
  {
    if ( (v69 & 3) == 1 ) /*0x10032238d*/
    {
      v7 = v69 - 1; /*0x100322393*/
      v8 = *(_QWORD *)(v69 - 1); /*0x100322397*/
      v9 = *(_QWORD *)(v69 + 7); /*0x10032239b*/
      if ( *(_QWORD *)v9 ) /*0x10032239f*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x1003223ab*/
      v10 = *(_QWORD *)(v9 + 8); /*0x1003223ad*/
      if ( v10 ) /*0x1003223b5*/
      {
        v11 = *(_QWORD *)(v9 + 16); /*0x1003223b7*/
LABEL_7:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, v11); /*0x1003223bc*/
      }
LABEL_8:
      v12 = 24; /*0x1003223c4*/
      v13 = 8; /*0x1003223c9*/
      v14 = v7; /*0x1003223ce*/
LABEL_68:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v12, v13); /*0x100322a44*/
    }
LABEL_69:
    v53 = v101; /*0x100322a49*/
    v101[3] = v100; /*0x100322a51*/
    v54 = v98; /*0x100322a55*/
    v53[2] = v99; /*0x100322a5d*/
    v53[1] = v54; /*0x100322a61*/
    *v53 = 11; /*0x100322a65*/
    return v101; /*0x100322a65*/
  }
  *(_QWORD *)&v86 = std::time::SystemTime::now::h1fe79e41f9d5677f(&v68, a2); /*0x1003223db*/
  DWORD2(v86) = v15; /*0x1003223e2*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v68, &v86, 0, 0); /*0x1003223fa*/
  if ( (_BYTE)v68 ) /*0x100322406*/
    v97 = 0; /*0x100322415*/
  else
    v97 = v69; /*0x10032240f*/
  LODWORD(v86) = 0; /*0x10032241d*/
  WORD2(v86) = 438; /*0x100322427*/
  *(_DWORD *)((char *)&v86 + 6) = 1; /*0x100322430*/
  WORD5(v86) = 0; /*0x10032243a*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v68, &v86, __src, v91); /*0x100322460*/
  if ( (_DWORD)v68 == 1 ) /*0x10032246c*/
  {
    v16 = v69; /*0x10032246e*/
    v17 = v101; /*0x100322475*/
    *v101 = 2; /*0x100322479*/
    v17[1] = v16; /*0x100322480*/
    v18 = v100; /*0x100322484*/
    if ( v100 ) /*0x10032248b*/
      goto LABEL_49; /*0x10032248b*/
    goto LABEL_53; /*0x10032248b*/
  }
  v19 = HIDWORD(v68); /*0x100322496*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v68, &v86); /*0x10032249d*/
  v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x1003224ac*/
  if ( !v20 ) /*0x1003224b4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x100322b28*/
  v97 += -86400 * a4; /*0x1003224c1*/
  v81 = 0; /*0x1003224cf*/
  v80 = 0; /*0x1003224da*/
  v79 = 0; /*0x1003224e5*/
  v77 = v20; /*0x1003224f0*/
  v78 = 0x2000; /*0x1003224f7*/
  v82 = v19; /*0x100322502*/
  v96 = 0x8000000000000001LL; /*0x10032250d*/
  while ( 1 ) /*0x10032252b*/
  {
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3e6b44ac088bb82( /*0x10032252b*/
      &v93,
      &v77);
    v21 = v93; /*0x100322530*/
    if ( v93 == v96 ) /*0x100322538*/
    {
      if ( v78 ) /*0x100322734*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v78, 1); /*0x100322742*/
      close_NOCANCEL(v82); /*0x10032274d*/
      v68 = &v86; /*0x100322761*/
      if ( v100 >= 2 ) /*0x10032276c*/
      {
        if ( v100 >= 0x15 ) /*0x100322add*/
          core::slice::sort::stable::driftsort_main::hc935f5bc2fadb826(v99, v100, &v68); /*0x100322b36*/
        else
          core::slice::sort::shared::smallsort::insertion_sort_shift_left::h63d53145464161fd(v99, v100, 1, &v68); /*0x100322aeb*/
      }
      v66 = v97; /*0x100322776*/
      std::fs::read_to_string::inner::hcce2334f4117b5b3(&v68, __src, v91); /*0x10032278c*/
      v39 = v68; /*0x100322791*/
      if ( v68 == (__int128 *)0x8000000000000000LL ) /*0x1003227a5*/
      {
        if ( (v69 & 3) != 1 ) /*0x1003227ba*/
          goto LABEL_69; /*0x1003227ba*/
        v7 = v69 - 1; /*0x1003227c0*/
        v8 = *(_QWORD *)(v69 - 1); /*0x1003227c4*/
        v40 = *(_QWORD *)(v69 + 7); /*0x1003227c8*/
        if ( *(_QWORD *)v40 ) /*0x1003227cc*/
          (*(void (__fastcall **)(__int64))v40)(v8); /*0x1003227d7*/
        v10 = *(_QWORD *)(v40 + 8); /*0x1003227d9*/
        if ( v10 ) /*0x1003227e0*/
        {
          v11 = *(_QWORD *)(v40 + 16); /*0x1003227e6*/
          goto LABEL_7; /*0x1003227ea*/
        }
        goto LABEL_8; /*0x1003227e0*/
      }
      v44 = v69; /*0x100322885*/
      v68 = nullptr; /*0x100322893*/
      v69 = v70; /*0x10032289e*/
      v70 = v44; /*0x1003228a5*/
      v71 = v69; /*0x1003228ac*/
      v72 = 0; /*0x1003228b3*/
      __s1 = (void *)v69; /*0x1003228be*/
      v74 = 0xA0000000ALL; /*0x1003228cf*/
      LOBYTE(v75) = 1; /*0x1003228d6*/
      v76 = 0; /*0x1003228dd*/
      ((void (__fastcall *)(__int64 *, __int128 **, __int64, __int64, __int64, __int64, __int64, unsigned __int64, __int64))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h65d289e0da49e4b6)( /*0x1003228f4*/
        &v63,
        &v68,
        v35,
        v36,
        v37,
        v38,
        v60,
        v61,
        v62);
      if ( v65 < 0x7D0 ) /*0x100322906*/
      {
        if ( v63 ) /*0x100322912*/
        {
          v45 = v64; /*0x100322918*/
          v46 = 16 * v63; /*0x10032291f*/
LABEL_65:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v46, 8); /*0x100322a2f*/
        }
LABEL_66:
        if ( !v39 ) /*0x100322a37*/
          goto LABEL_69; /*0x100322a37*/
        v13 = 1; /*0x100322a39*/
        v14 = v44; /*0x100322a3e*/
        v12 = (__int64)v39; /*0x100322a41*/
        goto LABEL_68; /*0x100322a41*/
      }
      *(_QWORD *)&v86 = v64; /*0x100322942*/
      *((_QWORD *)&v86 + 1) = v64; /*0x100322949*/
      v87 = v63; /*0x100322950*/
      v88 = v64 + 16 * v65; /*0x100322957*/
      v89 = &v66; /*0x100322965*/
      alloc::vec::in_place_collect::from_iter_in_place::ha37a548b1b890226(&v60, &v86); /*0x10032297a*/
      v96 = v61; /*0x1003229a4*/
      alloc::str::join_generic_copy::ha9d2732844b8793d(&v77, v61, v62, "\n", 1); /*0x1003229a8*/
      v48 = v79; /*0x1003229ad*/
      v95 = v79; /*0x1003229b4*/
      v49 = v77; /*0x1003229b8*/
      __buf = (void *)v78; /*0x1003229c6*/
      v93 = v77; /*0x1003229ca*/
      if ( v77 == v79 ) /*0x1003229d1*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v93, v79, 1, 1, 1, v47); /*0x100322b0c*/
        v49 = v93; /*0x100322b11*/
        v48 = v95; /*0x100322b15*/
      }
      v50 = __buf; /*0x1003229d7*/
      *((_BYTE *)__buf + v48) = 10; /*0x1003229db*/
      v51 = std::fs::write::inner::had0c1bee0a2c1e21(__src, v91, v50, v48 + 1); /*0x1003229f3*/
      if ( v49 ) /*0x1003229f9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x100322a06*/
      if ( (v51 & 3) == 1 ) /*0x100322a14*/
      {
        v56 = v51 - 1; /*0x100322a85*/
        v57 = *(_QWORD *)(v51 - 1); /*0x100322a88*/
        v58 = *(_QWORD *)(v51 + 7); /*0x100322a8c*/
        if ( *(_QWORD *)v58 ) /*0x100322a90*/
          (*(void (__fastcall **)(__int64))v58)(v57); /*0x100322a9b*/
        v59 = *(_QWORD *)(v58 + 8); /*0x100322a9d*/
        if ( v59 ) /*0x100322aa4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v59, *(_QWORD *)(v58 + 16)); /*0x100322aad*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, 24, 8); /*0x100322abf*/
        v52 = v60; /*0x100322ac4*/
        if ( !v60 ) /*0x100322ace*/
          goto LABEL_66; /*0x100322ace*/
      }
      else
      {
        v52 = v60; /*0x100322a16*/
        if ( !v60 ) /*0x100322a20*/
          goto LABEL_66; /*0x100322a20*/
      }
      v46 = 16 * v52; /*0x100322a22*/
      v45 = v96; /*0x100322a2b*/
      goto LABEL_65; /*0x100322a2b*/
    }
    v22 = (__int64 *)__buf; /*0x10032253e*/
    if ( v93 == 0x8000000000000000LL ) /*0x10032254f*/
      break; /*0x10032254f*/
    v23 = v95; /*0x100322555*/
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(__buf, v95); /*0x10032255f*/
    if ( v24 ) /*0x100322567*/
    {
      *(_QWORD *)&v86 = v22; /*0x10032256d*/
      *((_QWORD *)&v86 + 1) = v23; /*0x100322574*/
      v88 = 0; /*0x100322582*/
      v87 = 0; /*0x10032258a*/
      v89 = v22; /*0x100322591*/
      v90 = v23; /*0x100322598*/
      serde_json::de::from_trait::h5ded0e954f4e1b5b(&v68, &v86); /*0x1003225ad*/
      v25 = (int)v68; /*0x1003225b2*/
      if ( v68 == (__int128 *)2 ) /*0x1003225bd*/
        goto LABEL_33; /*0x1003225bd*/
      v26 = v72; /*0x1003225c3*/
      v27 = __s1; /*0x1003225ca*/
      v28 = v75; /*0x1003225d1*/
      if ( __s2 ) /*0x1003225e0*/
      {
        if ( v74 == __n ) /*0x1003225f4*/
        {
          v67 = v72; /*0x100322608*/
          v29 = memcmp(__s1, __s2, __n); /*0x100322612*/
          v26 = v67; /*0x10032261a*/
          if ( v28 >= v97 && !v29 ) /*0x10032262d*/
          {
LABEL_25:
            v85 = v27; /*0x100322633*/
            v30 = v100; /*0x10032263a*/
            if ( v100 == v98 ) /*0x100322642*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9bb5ea9ba5fa07e7(&v98); /*0x100322648*/
            v31 = v99; /*0x10032264d*/
            v32 = v30 << 6; /*0x100322654*/
            *(_QWORD *)(v99 + v32 + 24) = v71; /*0x10032265f*/
            *(_QWORD *)(v31 + v32 + 16) = v70; /*0x10032266b*/
            v33 = v68; /*0x100322670*/
            *(_QWORD *)(v31 + v32 + 8) = v69; /*0x10032267e*/
            *(_QWORD *)(v31 + v32) = v33; /*0x100322683*/
            *(_QWORD *)(v31 + v32 + 32) = v26; /*0x100322687*/
            *(_QWORD *)(v31 + v32 + 40) = v85; /*0x100322693*/
            v34 = v75; /*0x1003226a2*/
            *(_QWORD *)(v31 + v32 + 48) = v74; /*0x1003226a6*/
            *(_QWORD *)(v31 + v32 + 56) = v34; /*0x1003226ab*/
            v100 = v30 + 1; /*0x1003226b3*/
            goto LABEL_33; /*0x1003226b7*/
          }
        }
      }
      else if ( v75 >= v97 ) /*0x1003226e2*/
      {
        goto LABEL_25; /*0x1003226e2*/
      }
      if ( v26 ) /*0x1003226eb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 1); /*0x1003226f5*/
LABEL_33:
      if ( v21 ) /*0x1003226fd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x10032270a*/
      if ( v25 == 2 ) /*0x100322713*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..quota_history..QuotaHistoryPoint$C$serde_json..error..Error$GT$$GT$::h88308286cde04496(&v68); /*0x100322720*/
    }
    else if ( v21 ) /*0x1003226c3*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x1003226d4*/
    }
  }
  v41 = v101; /*0x1003227ef*/
  *v101 = 2; /*0x1003227f3*/
  v41[1] = v22; /*0x1003227fa*/
  if ( v78 ) /*0x100322808*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v78, 1); /*0x100322816*/
  close_NOCANCEL(v82); /*0x100322821*/
  v18 = v100; /*0x100322826*/
  if ( !v100 ) /*0x10032282d*/
    goto LABEL_53; /*0x10032282d*/
LABEL_49:
  v42 = (_QWORD *)(v99 + 40); /*0x10032282f*/
  do /*0x100322847*/
  {
    v43 = *(v42 - 1); /*0x100322849*/
    if ( v43 ) /*0x100322850*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v43, 1); /*0x10032285a*/
    v42 += 8; /*0x100322840*/
    --v18; /*0x100322844*/
  }
  while ( v18 ); /*0x100322847*/
LABEL_53:
  if ( v98 ) /*0x100322868*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98 << 6, 8); /*0x10032287b*/
  return v101; /*0x100322a70*/
}