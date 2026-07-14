// mac 1.1.8 force_kill_codex node va=0x1001c2d50 depth=2
// codexmate_lib8platform7process32kill_codex_processes_until_clear
__int64 __fastcall codexmate_lib::platform::process::kill_codex_processes_until_clear::h163807c1665f0c95(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // r14d
  __int64 result; // rax
  __int64 *v7; // r13
  __int64 v8; // r14
  char *v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r14
  size_t v14; // r12
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rax
  signed __int64 v18; // rdx
  const void *v19; // rbx
  __int64 *v20; // rcx
  signed __int64 v21; // r13
  __int64 *v22; // r14
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // r14
  _QWORD *v29; // rbx
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(); // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rbx
  __int64 *v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // r12
  __int64 v40; // rsi
  __int64 *v41; // r12
  __int64 v42; // r13
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 *v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 v52; // rsi
  _QWORD v53[3]; // [rsp+0h] [rbp-1B0h] BYREF
  _QWORD v54[3]; // [rsp+18h] [rbp-198h] BYREF
  __int64 *v55; // [rsp+30h] [rbp-180h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+38h] [rbp-178h]
  __int64 v57; // [rsp+40h] [rbp-170h]
  char *v58; // [rsp+48h] [rbp-168h]
  __int64 v59; // [rsp+50h] [rbp-160h]
  __int64 v60; // [rsp+58h] [rbp-158h]
  __int64 v61; // [rsp+60h] [rbp-150h]
  __int64 v62; // [rsp+68h] [rbp-148h]
  __int64 v63; // [rsp+70h] [rbp-140h]
  __int64 v64; // [rsp+78h] [rbp-138h]
  __int64 v65; // [rsp+80h] [rbp-130h]
  __int64 v66; // [rsp+88h] [rbp-128h]
  __int64 v67; // [rsp+F8h] [rbp-B8h]
  __int64 v68; // [rsp+100h] [rbp-B0h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+108h] [rbp-A8h]
  __int64 v70; // [rsp+110h] [rbp-A0h]
  __int64 v71; // [rsp+118h] [rbp-98h]
  __int64 v72; // [rsp+120h] [rbp-90h]
  __int64 v73; // [rsp+138h] [rbp-78h] BYREF
  __int64 v74; // [rsp+140h] [rbp-70h]
  __int64 v75; // [rsp+148h] [rbp-68h]
  unsigned int v76; // [rsp+154h] [rbp-5Ch]
  __int64 (__fastcall *v77)(); // [rsp+158h] [rbp-58h]
  __int64 v78; // [rsp+160h] [rbp-50h]
  __int64 *v79; // [rsp+168h] [rbp-48h]
  size_t __n; // [rsp+170h] [rbp-40h]
  __int64 v81; // [rsp+178h] [rbp-38h]
  size_t v82; // [rsp+180h] [rbp-30h]

  v1 = a1; /*0x1001c2d64*/
  v2 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c2d67*/
  v67 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1001c2d7d*/
          v2,
          v3,
          3,
          0);
  v5 = v4; /*0x1001c2d84*/
  codexmate_lib::platform::process::collect_codex_kill_targets::h9e99c6072be19f0b(&v55); /*0x1001c2d8e*/
  result = (__int64)v55; /*0x1001c2d93*/
  if ( v55 != (__int64 *)10 ) /*0x1001c2d9e*/
    goto LABEL_35; /*0x1001c2d9e*/
  v7 = &v68; /*0x1001c2da4*/
  v79 = a1; /*0x1001c2dab*/
  v76 = v5; /*0x1001c2daf*/
  while ( 1 ) /*0x1001c2dba*/
  {
    v77 = v56; /*0x1001c2dba*/
    v8 = v57; /*0x1001c2dbe*/
    v9 = v58; /*0x1001c2dc5*/
    if ( !v58 ) /*0x1001c2dcf*/
      break; /*0x1001c2dcf*/
    v10 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c2dd5*/
    v12 = v67; /*0x1001c2dda*/
    if ( v10 == v67 ) /*0x1001c2de4*/
    {
      if ( v11 >= v76 ) /*0x1001c2de9*/
        goto LABEL_46; /*0x1001c2de9*/
    }
    else if ( v10 >= v67 ) /*0x1001c2df3*/
    {
LABEL_46:
      v41 = v7; /*0x1001c3247*/
      v42 = v8; /*0x1001c3258*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hec90eb6497e9710a( /*0x1001c325e*/
        &v73,
        v8,
        v8 + 32LL * (_QWORD)v9);
      v43 = v74; /*0x1001c3263*/
      v44 = v75; /*0x1001c3267*/
      alloc::str::join_generic_copy::hd50f750ef8c6057e(&v55, v74, v75, " | ", 3); /*0x1001c3285*/
      v70 = v57; /*0x1001c3291*/
      v69 = v56; /*0x1001c32a6*/
      v68 = (__int64)v55; /*0x1001c32ad*/
      v55 = v41; /*0x1001c32b4*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1001c32c2*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_101223E60, &v55); /*0x1001c32de*/
      if ( v68 ) /*0x1001c32ed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x1001c32fb*/
      v45 = v79; /*0x1001c3307*/
      v79[3] = v53[2]; /*0x1001c330b*/
      v46 = v53[0]; /*0x1001c330f*/
      v45[2] = v53[1]; /*0x1001c331d*/
      v45[1] = v46; /*0x1001c3321*/
      *v45 = 9; /*0x1001c3325*/
      if ( v44 ) /*0x1001c332f*/
      {
        v47 = (_QWORD *)(v43 + 8); /*0x1001c3331*/
        do /*0x1001c3347*/
        {
          v48 = *(v47 - 1); /*0x1001c3349*/
          if ( v48 ) /*0x1001c3351*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v47, v48, 1); /*0x1001c335c*/
          v47 += 3; /*0x1001c3340*/
          --v44; /*0x1001c3344*/
        }
        while ( v44 ); /*0x1001c3347*/
      }
      result = v73; /*0x1001c3363*/
      if ( v73 ) /*0x1001c336a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, 24 * v73, 8); /*0x1001c337c*/
      v49 = v42; /*0x1001c3381*/
      goto LABEL_59; /*0x1001c3384*/
    }
    v81 = v8; /*0x1001c2df9*/
    v13 = 32LL * (_QWORD)v9; /*0x1001c2e00*/
    v14 = 0; /*0x1001c2e04*/
    do /*0x1001c2fb6*/
    {
      v15 = *(_DWORD *)(v81 + v14); /*0x1001c2e0b*/
      std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v55, "kill-wal-shmlsof", 4, v12); /*0x1001c2e22*/
      v16 = v15; /*0x1001c2e2c*/
      v17 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::h94ede26950885649(v15, v7, 10); /*0x1001c2e31*/
      if ( v18 < 0 ) /*0x1001c2e39*/
      {
        v23 = 0; /*0x1001c30ca*/
        goto LABEL_38; /*0x1001c30ca*/
      }
      v19 = (const void *)v17; /*0x1001c2e3f*/
      v20 = v7; /*0x1001c2e42*/
      __n = v18; /*0x1001c2e48*/
      if ( v18 ) /*0x1001c2e4c*/
      {
        v21 = v18; /*0x1001c2e4e*/
        v82 = v14; /*0x1001c2e51*/
        v78 = v13; /*0x1001c2e55*/
        v22 = v20; /*0x1001c2e59*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16); /*0x1001c2e5c*/
        v23 = 1; /*0x1001c2e61*/
        v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v21, 1); /*0x1001c2e6f*/
        if ( !v24 ) /*0x1001c2e77*/
        {
          v82 = __n; /*0x1001c341b*/
LABEL_38:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v82); /*0x1001c30cd*/
        }
        v7 = v22; /*0x1001c2e7d*/
        v13 = v78; /*0x1001c2e80*/
        v14 = v82; /*0x1001c2e84*/
      }
      else
      {
        v24 = 1; /*0x1001c2e8a*/
      }
      v82 = v24; /*0x1001c2e92*/
      memcpy((void *)v24, v19, __n); /*0x1001c2ea0*/
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v55, "-9", 2); /*0x1001c2ebb*/
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v55, v82, __n); /*0x1001c2ecb*/
      std::process::Command::output::h737eedd4de2ee22e(v7, &v55); /*0x1001c2ed6*/
      if ( __OFSUB__(-v68, 1) ) /*0x1001c2ee5*/
      {
        if ( ((unsigned __int8)v69 & 3) == 1 ) /*0x1001c2ef9*/
        {
          v78 = (__int64)v69 - 1; /*0x1001c2f03*/
          v25 = *(_QWORD *)((char *)v69 - 1); /*0x1001c2f07*/
          v26 = *(_QWORD *)((char *)v69 + 7); /*0x1001c2f0b*/
          if ( *(_QWORD *)v26 ) /*0x1001c2f0f*/
            (*(void (__fastcall **)(__int64))v26)(v25); /*0x1001c2f1b*/
          v27 = *(_QWORD *)(v26 + 8); /*0x1001c2f1d*/
          if ( v27 ) /*0x1001c2f24*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v27, *(_QWORD *)(v26 + 16)); /*0x1001c2f2d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, 24, 8); /*0x1001c2f40*/
          v7 = &v68; /*0x1001c2f45*/
        }
      }
      else
      {
        if ( v68 ) /*0x1001c2f60*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x1001c2f6e*/
        if ( v71 ) /*0x1001c2f7d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x1001c2f8b*/
      }
      if ( __n ) /*0x1001c2f97*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, __n, 1); /*0x1001c2fa2*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v55); /*0x1001c2faa*/
      v14 += 32LL; /*0x1001c2faf*/
    }
    while ( v13 != v14 ); /*0x1001c2fb6*/
    v28 = v81; /*0x1001c2fc3*/
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 300000000); /*0x1001c2fc7*/
    v29 = (_QWORD *)(v28 + 16); /*0x1001c2fcc*/
    do /*0x1001c2fe7*/
    {
      v30 = *(v29 - 1); /*0x1001c2fe9*/
      if ( v30 ) /*0x1001c2ff0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v30, 1); /*0x1001c2ffa*/
      v29 += 4; /*0x1001c2fe0*/
      --v9; /*0x1001c2fe4*/
    }
    while ( v9 ); /*0x1001c2fe7*/
    if ( v77 ) /*0x1001c3008*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 32LL * (_QWORD)v77, 8); /*0x1001c3016*/
    codexmate_lib::platform::process::collect_codex_kill_targets::h9e99c6072be19f0b(&v55); /*0x1001c3022*/
    result = (__int64)v55; /*0x1001c3027*/
    v1 = v79; /*0x1001c3032*/
    if ( v55 != (__int64 *)10 ) /*0x1001c3036*/
    {
LABEL_35:
      v31 = v56; /*0x1001c303c*/
      v32 = v57; /*0x1001c3043*/
      v33 = (__int64)v58; /*0x1001c304a*/
      v1[11] = v66; /*0x1001c3058*/
      v1[10] = v65; /*0x1001c3063*/
      v1[9] = v64; /*0x1001c306e*/
      v1[8] = v63; /*0x1001c3079*/
      v1[7] = v62; /*0x1001c3084*/
      v1[6] = v61; /*0x1001c308f*/
      v1[5] = v60; /*0x1001c309a*/
      v1[4] = v59; /*0x1001c30a5*/
      v1[1] = (__int64)v31; /*0x1001c30a9*/
      v1[2] = v32; /*0x1001c30ad*/
      v1[3] = v33; /*0x1001c30b1*/
      *v1 = result; /*0x1001c30b5*/
      return result; /*0x1001c30b5*/
    }
  }
  v34 = v57; /*0x1001c30df*/
  codexmate_lib::platform::process::list_codex_db_holder_processes::hc3af5600c2e57f87(&v68); /*0x1001c30ec*/
  v55 = (__int64 *)v69; /*0x1001c310d*/
  v56 = v69; /*0x1001c3114*/
  v57 = v68; /*0x1001c311b*/
  v58 = (char *)v69 + 32 * v70; /*0x1001c3122*/
  alloc::vec::in_place_collect::from_iter_in_place::hdbff3a2a33c05b22(&v73, &v55); /*0x1001c3134*/
  v35 = v75; /*0x1001c3139*/
  if ( v75 ) /*0x1001c3140*/
  {
    v36 = v74; /*0x1001c3146*/
    alloc::str::join_generic_copy::hd50f750ef8c6057e(&v55, v74, v75, " | ", 3); /*0x1001c3164*/
    v70 = v57; /*0x1001c3170*/
    v69 = v56; /*0x1001c3185*/
    v68 = (__int64)v55; /*0x1001c318c*/
    v55 = &v68; /*0x1001c3193*/
    v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1001c31a1*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, &unk_10125C09E, &v55); /*0x1001c31bd*/
    if ( v68 ) /*0x1001c31cc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x1001c31da*/
    v37 = v79; /*0x1001c31e6*/
    v79[3] = v54[2]; /*0x1001c31ea*/
    v38 = v54[0]; /*0x1001c31ee*/
    v37[2] = v54[1]; /*0x1001c31fc*/
    v37[1] = v38; /*0x1001c3200*/
    *v37 = 9; /*0x1001c3204*/
    v39 = (_QWORD *)(v36 + 8); /*0x1001c320b*/
    do /*0x1001c3227*/
    {
      v40 = *(v39 - 1); /*0x1001c322d*/
      if ( v40 ) /*0x1001c3235*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v39, v40, 1); /*0x1001c3240*/
      v39 += 3; /*0x1001c3220*/
      --v35; /*0x1001c3224*/
    }
    while ( v35 ); /*0x1001c3227*/
  }
  else
  {
    *v79 = 10; /*0x1001c338a*/
    v36 = v74; /*0x1001c3391*/
  }
  result = v73; /*0x1001c3395*/
  v49 = v34; /*0x1001c339c*/
  if ( v73 ) /*0x1001c339f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24 * v73, 8); /*0x1001c33b1*/
LABEL_59:
  if ( v9 ) /*0x1001c33b9*/
  {
    v50 = 32LL * (_QWORD)v9; /*0x1001c33bb*/
    v51 = 0; /*0x1001c33bf*/
    do /*0x1001c33d7*/
    {
      v52 = *(_QWORD *)(v49 + v51 + 8); /*0x1001c33d9*/
      if ( v52 ) /*0x1001c33e1*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v49 + v51 + 16), v52, 1); /*0x1001c33ed*/
      v51 += 32; /*0x1001c33d0*/
    }
    while ( v50 != v51 ); /*0x1001c33d7*/
  }
  if ( v77 ) /*0x1001c33fb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 32LL * (_QWORD)v77, 8); /*0x1001c340d*/
  return result; /*0x1001c30b8*/
}