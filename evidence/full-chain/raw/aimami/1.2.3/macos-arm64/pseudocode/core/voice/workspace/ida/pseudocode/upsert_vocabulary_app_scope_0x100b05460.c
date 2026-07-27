// __ZN13codexmate_lib4core5voice9workspace27upsert_vocabulary_app_scope @ 0x100b05460 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::upsert_vocabulary_app_scope::h95e47d40d7c1f060(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __m128i a4)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // r14
  const void *v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // r12
  __int64 v14; // r15
  char v15; // bl
  __int64 v16; // r15
  __int64 v17; // rdx
  double v18; // xmm0_8
  __int64 v19; // rcx
  __int64 *v20; // rdi
  _QWORD *v21; // rsi
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  void *v27; // rax
  char *v28; // r14
  __int64 v29; // rbx
  void *v30; // rax
  void *v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rsi
  void *v34; // rax
  __int64 v35; // rdx
  size_t v36; // r14
  __int64 v37; // r12
  void *v38; // rax
  void *v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rsi
  const void *v42; // rax
  __int64 v43; // rdx
  size_t v44; // r13
  __int64 v45; // r14
  const void *v46; // r12
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r12
  size_t v51; // r13
  __int64 v52; // r14
  const void *v53; // rdi
  __int64 v54; // rbx
  int v55; // eax
  __int64 v56; // rsi
  size_t v57; // rax
  _QWORD *v58; // rsi
  size_t v59; // r12
  char v60; // r12
  __int64 v61; // r14
  char *v62; // rdi
  int v63; // edx
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // [rsp+8h] [rbp-218h] BYREF
  _QWORD v67[12]; // [rsp+10h] [rbp-210h] BYREF
  _QWORD v68[3]; // [rsp+70h] [rbp-1B0h] BYREF
  __int64 v69; // [rsp+88h] [rbp-198h]
  __int64 v70; // [rsp+90h] [rbp-190h]
  __int64 v71; // [rsp+98h] [rbp-188h] BYREF
  int v72; // [rsp+A0h] [rbp-180h]
  _QWORD v73[12]; // [rsp+A8h] [rbp-178h] BYREF
  _QWORD v74[16]; // [rsp+108h] [rbp-118h] BYREF
  _QWORD v75[2]; // [rsp+188h] [rbp-98h] BYREF
  __int64 v76; // [rsp+198h] [rbp-88h]
  __int64 v77; // [rsp+1A0h] [rbp-80h]
  size_t v78; // [rsp+1A8h] [rbp-78h]
  __int64 v79; // [rsp+1B0h] [rbp-70h]
  size_t v80; // [rsp+1B8h] [rbp-68h] BYREF
  void *v81; // [rsp+1C0h] [rbp-60h]
  size_t v82; // [rsp+1C8h] [rbp-58h]
  void *__s2; // [rsp+1D0h] [rbp-50h]
  _QWORD *v84; // [rsp+1D8h] [rbp-48h]
  __int64 v85; // [rsp+1E0h] [rbp-40h]
  char *v86; // [rsp+1E8h] [rbp-38h]
  char v87; // [rsp+1F7h] [rbp-29h]

  v6 = a3[1]; /*0x100b0547a*/
  v84 = a3; /*0x100b0547e*/
  v7 = a3[2]; /*0x100b05482*/
  v76 = v6; /*0x100b05486*/
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v6, v7); /*0x100b0548d*/
  v10 = v9; /*0x100b05492*/
  if ( v9 ) /*0x100b05498*/
  {
    v11 = (const void *)v8; /*0x100b0549e*/
    codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119((__int64)v74, v7); /*0x100b054a8*/
    v12 = a2; /*0x100b054ad*/
    v86 = (char *)a1; /*0x100b054b0*/
    v13 = v74[0]; /*0x100b054b4*/
    v14 = v74[1]; /*0x100b054bb*/
    v15 = v74[2]; /*0x100b054c2*/
    if ( v74[0] == 11 ) /*0x100b054cd*/
    {
      v87 = v74[2]; /*0x100b054d3*/
      v85 = v74[1]; /*0x100b054d6*/
      v16 = (__int64)v12; /*0x100b054e1*/
      v18 = codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v74, v12, a4); /*0x100b054e7*/
      a1 = v86; /*0x100b054ec*/
      qmemcpy(v73, &v74[1], sizeof(v73)); /*0x100b0551a*/
      if ( __OFSUB__(-v74[0], 1) ) /*0x100b05504*/
      {
        qmemcpy(v86 + 8, v73, 0x60u); /*0x100b05534*/
        v21 = v74; /*0x100b05534*/
        v20 = a1 + 13; /*0x100b05534*/
        v19 = 0; /*0x100b05534*/
        *a1 = 0x8000000000000000LL; /*0x100b05537*/
        goto LABEL_5; /*0x100b05537*/
      }
      v70 = v75[1]; /*0x100b0568b*/
      v69 = v75[0]; /*0x100b05699*/
      v68[2] = v74[15]; /*0x100b056a7*/
      v68[1] = v74[14]; /*0x100b056bc*/
      v68[0] = v74[13]; /*0x100b056c3*/
      qmemcpy(v67, v73, sizeof(v67)); /*0x100b056dd*/
      v66 = v74[0]; /*0x100b056e0*/
      if ( v10 < 0 ) /*0x100b056ea*/
      {
        v29 = 0; /*0x100b056ec*/
        goto LABEL_21; /*0x100b056ec*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v68, v74); /*0x100b056fe*/
      v29 = 1; /*0x100b05703*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100b05710*/
      if ( !v30 ) /*0x100b05718*/
LABEL_21:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, v10); /*0x100b056ee*/
      v31 = v30; /*0x100b0571a*/
      memcpy(v30, v11, v10); /*0x100b05726*/
      v73[0] = v10; /*0x100b0572b*/
      v73[1] = v31; /*0x100b05732*/
      v73[2] = v10; /*0x100b05739*/
      v32 = v84[4]; /*0x100b05744*/
      v33 = v84[5]; /*0x100b05748*/
      v34 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v32, v33); /*0x100b0574c*/
      v36 = v35; /*0x100b05751*/
      if ( v35 ) /*0x100b05757*/
      {
        if ( v35 < 0 ) /*0x100b0575c*/
        {
          v37 = 0; /*0x100b0575e*/
          goto LABEL_26; /*0x100b0575e*/
        }
        __s2 = v34; /*0x100b05783*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v33); /*0x100b05787*/
        v37 = 1; /*0x100b0578c*/
        v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1); /*0x100b0579a*/
        if ( !v38 ) /*0x100b057a2*/
LABEL_26:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v37, v36); /*0x100b05761*/
        v39 = v38; /*0x100b057a4*/
        memcpy(v38, __s2, v36); /*0x100b057b1*/
        v80 = v36; /*0x100b057b6*/
        v81 = v39; /*0x100b057ba*/
        v82 = v36; /*0x100b057be*/
      }
      else
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v80, v73); /*0x100b0577c*/
      }
      v40 = v84[7]; /*0x100b057c6*/
      v41 = v84[8]; /*0x100b057ca*/
      v42 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v40, v41); /*0x100b057ce*/
      v44 = v43; /*0x100b057d3*/
      if ( v43 < 0 ) /*0x100b057d9*/
      {
        v45 = 0; /*0x100b057db*/
        goto LABEL_32; /*0x100b057db*/
      }
      if ( v43 ) /*0x100b057f1*/
      {
        v46 = v42; /*0x100b057f3*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v41); /*0x100b057f6*/
        v45 = 1; /*0x100b057fb*/
        v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v44, 1); /*0x100b05809*/
        if ( !v47 ) /*0x100b05811*/
LABEL_32:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v44); /*0x100b057de*/
        v48 = v47; /*0x100b05813*/
        v42 = v46; /*0x100b05816*/
      }
      else
      {
        v48 = 1; /*0x100b0581b*/
      }
      v79 = v48; /*0x100b05820*/
      v78 = v44; /*0x100b05827*/
      memcpy((void *)v48, v42, v44); /*0x100b0582e*/
      v49 = v67[6]; /*0x100b05833*/
      v77 = v67[7]; /*0x100b05841*/
      if ( v67[7] ) /*0x100b05848*/
      {
        v50 = 72 * v77; /*0x100b0585a*/
        __s2 = (void *)v73[1]; /*0x100b05865*/
        v51 = v73[2]; /*0x100b05869*/
        v52 = 0; /*0x100b05870*/
        while ( 1 ) /*0x100b0588d*/
        {
          if ( *(_QWORD *)(v49 + v52 + 16) == v51 ) /*0x100b05892*/
          {
            v53 = *(const void **)(v49 + v52 + 8); /*0x100b05894*/
            v54 = v49; /*0x100b0589d*/
            v55 = memcmp(v53, __s2, v51); /*0x100b058a3*/
            v49 = v54; /*0x100b058a8*/
            if ( !v55 ) /*0x100b058ad*/
              break; /*0x100b058ad*/
          }
          v52 += 72; /*0x100b05880*/
          if ( v50 == v52 ) /*0x100b05887*/
            goto LABEL_47; /*0x100b05887*/
        }
        v56 = *(_QWORD *)(v54 + v52 + 24); /*0x100b058b4*/
        if ( v56 ) /*0x100b058bc*/
        {
          v53 = *(const void **)(v54 + v52 + 32); /*0x100b058be*/
          v18 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v56, 1); /*0x100b058c8*/
          v49 = v54; /*0x100b058cd*/
        }
        *(_QWORD *)(v54 + v52 + 40) = v82; /*0x100b058d4*/
        v57 = v80; /*0x100b058d9*/
        *(_QWORD *)(v54 + v52 + 32) = v81; /*0x100b058e1*/
        *(_QWORD *)(v54 + v52 + 24) = v57; /*0x100b058e6*/
        v58 = *(_QWORD **)(v49 + v52 + 48); /*0x100b058ea*/
        v59 = v78; /*0x100b058f2*/
        if ( v58 ) /*0x100b058f6*/
        {
          v53 = *(const void **)(v49 + v52 + 56); /*0x100b058f8*/
          v18 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v58, 1); /*0x100b05902*/
          v49 = v54; /*0x100b05907*/
        }
        *(_QWORD *)(v49 + v52 + 48) = v59; /*0x100b0590a*/
        *(_QWORD *)(v49 + v52 + 56) = v79; /*0x100b05913*/
        *(_QWORD *)(v49 + v52 + 64) = v59; /*0x100b05918*/
        v60 = 1; /*0x100b0591d*/
      }
      else
      {
LABEL_47:
        v74[2] = v73[2]; /*0x100b0592f*/
        v74[1] = v73[1]; /*0x100b0594b*/
        v74[0] = v73[0]; /*0x100b05952*/
        v74[3] = v80; /*0x100b05961*/
        v74[4] = v81; /*0x100b05968*/
        v74[5] = v82; /*0x100b05973*/
        v74[6] = v78; /*0x100b0597e*/
        v74[7] = v79; /*0x100b05989*/
        v74[8] = v78; /*0x100b05990*/
        v61 = v77; /*0x100b05997*/
        if ( v77 == v67[5] ) /*0x100b059ac*/
        {
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v67[5]); /*0x100b059b5*/
          v49 = v67[6]; /*0x100b059ba*/
        }
        v62 = (char *)(v49 + 72 * v61); /*0x100b059c5*/
        qmemcpy(v62, v74, 0x48u); /*0x100b059d5*/
        v58 = &v74[9]; /*0x100b059d5*/
        v53 = v62 + 72; /*0x100b059d5*/
        v67[7] = v61 + 1; /*0x100b059db*/
        v60 = 0; /*0x100b059e2*/
      }
      LODWORD(v70) = 1; /*0x100b059e5*/
      v71 = std::time::SystemTime::now::h1fe79e41f9d5677f(v53, v58); /*0x100b059f4*/
      v72 = v63; /*0x100b059fb*/
      std::time::SystemTime::duration_since::had059553cab94f96(v74, &v71, 0, 0); /*0x100b05a13*/
      if ( LOBYTE(v74[0]) ) /*0x100b05a1f*/
        v64 = 0; /*0x100b05a2a*/
      else
        v64 = v74[1]; /*0x100b05a21*/
      v69 = v64; /*0x100b05a2c*/
      codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v66); /*0x100b05a3a*/
      codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v74, v16, (__int64)&v66, v18); /*0x100b05a50*/
      if ( LODWORD(v74[0]) == 11 ) /*0x100b05a5c*/
      {
        codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47( /*0x100b05a7e*/
          v74,
          *(_QWORD *)(v16 + 536),
          *(_QWORD *)(v16 + 544),
          (__int64)&v66);
        qmemcpy(v86, v74, 0x80u); /*0x100b05a93*/
        v21 = v75; /*0x100b05a93*/
        if ( v60 ) /*0x100b05a99*/
        {
          v21 = (_QWORD *)v73[0]; /*0x100b05a9b*/
          if ( v73[0] ) /*0x100b05aa5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[1], v73[0], 1); /*0x100b05ab3*/
        }
        v20 = &v66; /*0x100b05ab8*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v66); /*0x100b05abf*/
        a1 = v86; /*0x100b05ac4*/
        if ( (v87 & 1) != 0 /*0x100b05ae2*/
          || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
        {
LABEL_7:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v85); /*0x100b05557*/
          v22 = v84; /*0x100b05563*/
          v23 = *v84; /*0x100b05567*/
          if ( !*v84 ) /*0x100b0556d*/
            goto LABEL_9; /*0x100b0556d*/
          goto LABEL_8; /*0x100b0556d*/
        }
LABEL_64:
        if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v21, v17, v19) ) /*0x100b05b40*/
          *(_BYTE *)(v85 + 8) = 1; /*0x100b05b51*/
        goto LABEL_7; /*0x100b05b55*/
      }
      v65 = v86; /*0x100b05aef*/
      qmemcpy(v86 + 8, v74, 0x60u); /*0x100b05b03*/
      v21 = &v74[12]; /*0x100b05b03*/
      *v65 = 0x8000000000000000LL; /*0x100b05b06*/
      if ( v60 ) /*0x100b05b0c*/
      {
        v21 = (_QWORD *)v73[0]; /*0x100b05b0e*/
        if ( v73[0] ) /*0x100b05b18*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[1], v73[0], 1); /*0x100b05b26*/
      }
      v20 = &v66; /*0x100b05b2b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v66); /*0x100b05b32*/
      a1 = v86; /*0x100b05b37*/
LABEL_5:
      if ( (v87 & 1) != 0 /*0x100b05551*/
        || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      {
        goto LABEL_7; /*0x100b05551*/
      }
      goto LABEL_64; /*0x100b05551*/
    }
    v28 = v86; /*0x100b05640*/
    memcpy(v86 + 25, (char *)&v74[2] + 1, 0x4Fu); /*0x100b0564d*/
    *((_QWORD *)v28 + 1) = v13; /*0x100b05652*/
    a1 = v28; /*0x100b05656*/
    *((_QWORD *)v28 + 2) = v14; /*0x100b05659*/
    v28[24] = v15; /*0x100b0565d*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v7); /*0x100b055c3*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x100b055d2*/
    if ( !v27 ) /*0x100b055da*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x100b05b64*/
    qmemcpy(v27, "App bundle id cannot be empty", 29); /*0x100b05614*/
    a1[1] = 9; /*0x100b05617*/
    a1[2] = 29; /*0x100b05620*/
    a1[3] = v27; /*0x100b05629*/
    a1[4] = 29; /*0x100b0562e*/
  }
  *a1 = 0x8000000000000000LL; /*0x100b0566b*/
  v22 = v84; /*0x100b0566f*/
  v23 = *v84; /*0x100b05673*/
  if ( *v84 ) /*0x100b05673*/
LABEL_8:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v23, 1); /*0x100b0556f*/
LABEL_9:
  v24 = v22[3]; /*0x100b05580*/
  if ( v24 ) /*0x100b05587*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[4], v24, 1); /*0x100b05592*/
  v25 = v22[6]; /*0x100b05597*/
  if ( v25 ) /*0x100b0559e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22[7], v25, 1); /*0x100b055a9*/
  return a1; /*0x100b055b1*/
}