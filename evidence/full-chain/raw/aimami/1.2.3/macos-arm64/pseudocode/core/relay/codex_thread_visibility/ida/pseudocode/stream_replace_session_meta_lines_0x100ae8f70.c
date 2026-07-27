// __ZN13codexmate_lib4core5relay23codex_thread_visibility33stream_replace_session_meta_lines @ 0x100ae8f70 | 基线 same-set
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::stream_replace_session_meta_lines::ha4fc6f6a6135271f(
        __int64 *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // r15
  __int64 (__fastcall *v22)(); // rax
  __int64 *v23; // rcx
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(); // rax
  __int64 *v26; // rcx
  __int64 v27; // r14
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // r12
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r14
  bool v38; // cf
  unsigned __int64 v39; // rax
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r15d
  _DWORD **v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r13d
  _DWORD **v54; // r12
  __int64 v55; // rax
  size_t v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 *v65; // rdi
  void *v66; // rdi
  __int64 v67; // r14
  __int64 v68; // r12
  __int64 v69; // r13
  __int64 v70; // rsi
  _DWORD ***v71; // rdi
  size_t v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  void *v76; // rax
  __int64 v77; // rbx
  __int64 *v78; // rax
  _DWORD v79[20]; // [rsp+0h] [rbp-270h] BYREF
  __int64 v80; // [rsp+50h] [rbp-220h] BYREF
  __int64 v81; // [rsp+58h] [rbp-218h]
  __int64 v82; // [rsp+60h] [rbp-210h]
  _QWORD v83[2]; // [rsp+68h] [rbp-208h] BYREF
  __int64 v84; // [rsp+78h] [rbp-1F8h] BYREF
  __int64 v85; // [rsp+80h] [rbp-1F0h]
  __int64 v86; // [rsp+88h] [rbp-1E8h]
  _QWORD v87[18]; // [rsp+90h] [rbp-1E0h] BYREF
  __int64 v88; // [rsp+120h] [rbp-150h]
  __int64 v89; // [rsp+128h] [rbp-148h] BYREF
  void *v90; // [rsp+130h] [rbp-140h]
  size_t v91; // [rsp+138h] [rbp-138h]
  _DWORD **v92; // [rsp+140h] [rbp-130h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+148h] [rbp-128h] BYREF
  _QWORD v94[11]; // [rsp+150h] [rbp-120h] BYREF
  __int64 v95; // [rsp+1A8h] [rbp-C8h]
  __int64 v96; // [rsp+1B0h] [rbp-C0h]
  __int64 v97; // [rsp+1B8h] [rbp-B8h]
  __int64 v98; // [rsp+1C0h] [rbp-B0h]
  __int64 v99; // [rsp+1C8h] [rbp-A8h]
  __int64 v100; // [rsp+1D0h] [rbp-A0h]
  __int64 v101; // [rsp+1D8h] [rbp-98h]
  __int64 v102; // [rsp+1E0h] [rbp-90h]
  __int64 v103; // [rsp+1E8h] [rbp-88h] BYREF
  _DWORD *v104; // [rsp+1F0h] [rbp-80h] BYREF
  unsigned __int64 v105; // [rsp+1F8h] [rbp-78h]
  unsigned __int64 v106; // [rsp+200h] [rbp-70h]
  unsigned __int64 v107; // [rsp+208h] [rbp-68h] BYREF
  size_t v108; // [rsp+210h] [rbp-60h]
  void *v109; // [rsp+218h] [rbp-58h]
  __int64 v110; // [rsp+220h] [rbp-50h]
  size_t __n; // [rsp+228h] [rbp-48h]
  void *__src; // [rsp+230h] [rbp-40h]
  __int64 *v113; // [rsp+238h] [rbp-38h]
  unsigned int v114; // [rsp+240h] [rbp-30h] BYREF
  _DWORD v115[11]; // [rsp+244h] [rbp-2Ch] BYREF

  v113 = a1; /*0x100ae8f93*/
  v13 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x100ae8f9d*/
  v102 = v14; /*0x100ae8fa2*/
  v101 = v13; /*0x100ae8fa9*/
  if ( !v13 ) /*0x100ae8fb3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x100ae9005*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x100ae9014*/
    if ( !v19 ) /*0x100ae901c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x100ae984e*/
    qmemcpy(v19, "rollout path has no parent", 26); /*0x100ae9048*/
    v20 = v113; /*0x100ae9051*/
    *v113 = 9; /*0x100ae9055*/
    v20[1] = 26; /*0x100ae905c*/
    v20[2] = (__int64)v19; /*0x100ae9064*/
    v20[3] = 26; /*0x100ae9068*/
    return; /*0x100ae9070*/
  }
  v109 = a2; /*0x100ae8fb5*/
  v108 = a3; /*0x100ae8fbc*/
  v15 = std::path::Path::file_name::hf6c2daad91e50ebf(a2, a3); /*0x100ae8fc3*/
  if ( v15 ) /*0x100ae8fcb*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(&v92, v15, v16); /*0x100ae8fdb*/
    v17 = "rolloutrollout changed while router migration was streaming; retry required"; /*0x100ae8fe7*/
    if ( !(_BYTE)v92 ) /*0x100ae8fee*/
      v17 = (char *)v93; /*0x100ae8fee*/
    v18 = 7; /*0x100ae8ff6*/
    if ( !(_BYTE)v92 ) /*0x100ae8ffb*/
      v18 = v94[0]; /*0x100ae8ffb*/
  }
  else
  {
    v18 = 7; /*0x100ae9075*/
    v17 = "rolloutrollout changed while router migration was streaming; retry required"; /*0x100ae907a*/
  }
  v83[0] = v17; /*0x100ae9081*/
  v83[1] = v18; /*0x100ae9088*/
  v79[0] = std::process::id::ha72f58ec62264e78(); /*0x100ae9094*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v92); /*0x100ae90a1*/
  v87[1] = v93; /*0x100ae90b4*/
  v87[0] = v92; /*0x100ae90bb*/
  v92 = (_DWORD **)v83; /*0x100ae90c9*/
  v93 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ae90d7*/
  v94[0] = v79; /*0x100ae90e5*/
  v94[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x100ae90f3*/
  v94[2] = v87; /*0x100ae9101*/
  v94[3] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x100ae910f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v84, &unk_1017BEA32, &v92); /*0x100ae912b*/
  v21 = v85; /*0x100ae9130*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v89, v101, v102, v85, v86); /*0x100ae9156*/
  if ( v84 ) /*0x100ae9165*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v84, 1); /*0x100ae916f*/
  LODWORD(v87[0]) = 0; /*0x100ae9174*/
  WORD2(v87[0]) = 438; /*0x100ae917e*/
  *(_DWORD *)((char *)v87 + 6) = 1; /*0x100ae9187*/
  WORD1(v87[1]) = 0; /*0x100ae9191*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v92, v87, v109, v108); /*0x100ae91b7*/
  if ( (_DWORD)v92 == 1 ) /*0x100ae91c3*/
  {
    v22 = v93; /*0x100ae91c5*/
    v23 = v113; /*0x100ae91cc*/
    *v113 = 2; /*0x100ae91d0*/
    v23[1] = (__int64)v22; /*0x100ae91d7*/
    v24 = v89; /*0x100ae91db*/
    if ( !v89 ) /*0x100ae91e5*/
      return; /*0x100ae91e5*/
LABEL_60:
    v66 = v90; /*0x100ae9718*/
LABEL_61:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v24, 1); /*0x100ae9724*/
    return; /*0x100ae9724*/
  }
  v114 = HIDWORD(v92); /*0x100ae91f6*/
  LODWORD(v87[0]) = 0; /*0x100ae91f9*/
  WORD2(v87[0]) = 438; /*0x100ae9203*/
  *(_DWORD *)((char *)v87 + 6) = 256; /*0x100ae920c*/
  WORD1(v87[1]) = 256; /*0x100ae9216*/
  __src = v90; /*0x100ae9249*/
  __n = v91; /*0x100ae924d*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v92, v87, v90, v91); /*0x100ae9251*/
  if ( (_DWORD)v92 == 1 ) /*0x100ae925d*/
  {
    v25 = v93; /*0x100ae925f*/
LABEL_18:
    v26 = v113; /*0x100ae9266*/
    *v113 = 2; /*0x100ae926a*/
    v26[1] = (__int64)v25; /*0x100ae9271*/
    goto LABEL_59; /*0x100ae9275*/
  }
  v110 = a6; /*0x100ae927a*/
  v115[0] = HIDWORD(v92); /*0x100ae9284*/
  if ( a5 ) /*0x100ae928a*/
  {
    v88 = a5 << 6; /*0x100ae9294*/
    v27 = 0; /*0x100ae929b*/
    v28 = 0; /*0x100ae929e*/
    while ( 1 ) /*0x100ae92b0*/
    {
      v29 = v28; /*0x100ae92b0*/
      v30 = *(_QWORD *)(a4 + v27 + 48); /*0x100ae92b3*/
      v31 = 0; /*0x100ae92be*/
      if ( v30 >= v29 ) /*0x100ae92c4*/
        v31 = v30 - v29; /*0x100ae92c4*/
      v107 = v31; /*0x100ae92c8*/
      if ( v30 > v29 ) /*0x100ae92cc*/
      {
        v104 = &v114; /*0x100ae92d2*/
        v105 = v31; /*0x100ae92d6*/
        v106 = v31; /*0x100ae92da*/
        v32 = std::io::copy::stack_buffer_copy::h0b9a5f75733973ea(&v104, (__int64)v115); /*0x100ae92e6*/
        v34 = v33; /*0x100ae92eb*/
        if ( (v32 & 1) != 0 ) /*0x100ae92f0*/
        {
          v42 = 2; /*0x100ae95e5*/
          goto LABEL_56; /*0x100ae95ea*/
        }
        v103 = v33; /*0x100ae92f6*/
        if ( v31 != v33 ) /*0x100ae9300*/
          goto LABEL_55; /*0x100ae9300*/
      }
      v28 = *(_QWORD *)(a4 + v27 + 56) + v30; /*0x100ae9306*/
      if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(&v114, 0, v28) & 1) != 0 ) /*0x100ae931b*/
      {
        v34 = v35; /*0x100ae95d8*/
LABEL_53:
        v42 = 2; /*0x100ae95db*/
        goto LABEL_57; /*0x100ae95e0*/
      }
      v34 = std::io::Write::write_all::he2fd9a54c4cbfe2a(v115, *(_QWORD *)(a4 + v27 + 32), *(_QWORD *)(a4 + v27 + 40)); /*0x100ae9334*/
      if ( v34 ) /*0x100ae933a*/
        goto LABEL_53; /*0x100ae933a*/
      v27 += 64; /*0x100ae9340*/
      if ( v88 == v27 ) /*0x100ae934b*/
        goto LABEL_31; /*0x100ae934b*/
    }
  }
  v28 = 0; /*0x100ae9353*/
LABEL_31:
  v36 = *(_QWORD *)(v110 + 96); /*0x100ae9356*/
  v37 = 0; /*0x100ae935f*/
  v38 = v36 < v28; /*0x100ae9362*/
  v39 = v36 - v28; /*0x100ae9362*/
  if ( !v38 ) /*0x100ae9365*/
    v37 = v39; /*0x100ae9365*/
  v107 = v37; /*0x100ae9369*/
  if ( !v38 && v39 != 0 ) /*0x100ae9362*/
  {
    v104 = &v114; /*0x100ae9373*/
    v105 = v37; /*0x100ae9377*/
    v106 = v37; /*0x100ae937b*/
    v40 = std::io::copy::stack_buffer_copy::h0b9a5f75733973ea(&v104, (__int64)v115); /*0x100ae9387*/
    v34 = v41; /*0x100ae938c*/
    v42 = 2; /*0x100ae938f*/
    if ( (v40 & 1) != 0 ) /*0x100ae9396*/
      goto LABEL_56; /*0x100ae9396*/
    v103 = v41; /*0x100ae939c*/
    if ( v37 != v41 ) /*0x100ae93a6*/
    {
LABEL_55:
      v87[0] = &v107; /*0x100ae9639*/
      v87[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae964b*/
      v87[2] = &v103; /*0x100ae9659*/
      v87[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae9660*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v93, &unk_1017CA517, v87); /*0x100ae967c*/
      v42 = 10; /*0x100ae9681*/
      v34 = (__int64)v93; /*0x100ae9686*/
LABEL_56:
      qmemcpy(v79, v94, sizeof(v79)); /*0x100ae96a0*/
      goto LABEL_57; /*0x100ae96a0*/
    }
  }
  v34 = std::sys::fs::set_permissions::hfb7e5143e400282f(__src, __n); /*0x100ae93be*/
  v42 = 2; /*0x100ae93c1*/
  if ( v34 || (v34 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(v115)) != 0 ) /*0x100ae93de*/
  {
LABEL_57:
    close_NOCANCEL(v115[0]); /*0x100ae96a3*/
    v92 = (_DWORD **)v42; /*0x100ae96ab*/
    v93 = (__int64 (__fastcall *)())v34; /*0x100ae96b2*/
    qmemcpy(v94, v79, 0x50u); /*0x100ae96cc*/
    v64 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x100ae96d7*/
    if ( (v64 & 3) == 1 ) /*0x100ae96e4*/
    {
      v67 = v64 - 1; /*0x100ae973e*/
      v68 = *(_QWORD *)(v64 - 1); /*0x100ae9741*/
      v69 = *(_QWORD *)(v64 + 7); /*0x100ae9745*/
      if ( *(_QWORD *)v69 ) /*0x100ae9749*/
        (*(void (__fastcall **)(__int64))v69)(v68); /*0x100ae9755*/
      v70 = *(_QWORD *)(v69 + 8); /*0x100ae9757*/
      if ( v70 ) /*0x100ae975e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v70, *(_QWORD *)(v69 + 16)); /*0x100ae9767*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 24, 8); /*0x100ae9779*/
    }
    v65 = v113; /*0x100ae96e6*/
    *v113 = v42; /*0x100ae96ea*/
    v65[1] = v34; /*0x100ae96ed*/
    qmemcpy(v65 + 2, v79, 0x50u); /*0x100ae9701*/
LABEL_59:
    close_NOCANCEL(v114); /*0x100ae9704*/
    v24 = v89; /*0x100ae970c*/
    if ( !v89 ) /*0x100ae9716*/
      return; /*0x100ae9716*/
    goto LABEL_60; /*0x100ae9716*/
  }
  close_NOCANCEL(v115[0]); /*0x100ae93e7*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v92, v109, v108); /*0x100ae93fb*/
  v25 = v93; /*0x100ae9400*/
  if ( (_BYTE)v92 ) /*0x100ae940e*/
    goto LABEL_18; /*0x100ae940e*/
  qmemcpy(&v87[1], v94, 0x58u); /*0x100ae9427*/
  v43 = v95; /*0x100ae942a*/
  v87[13] = v96; /*0x100ae9438*/
  v87[14] = v97; /*0x100ae9446*/
  v87[15] = v98; /*0x100ae9454*/
  v87[16] = v99; /*0x100ae9462*/
  v87[17] = v100; /*0x100ae9470*/
  v87[0] = v93; /*0x100ae9477*/
  v87[12] = v95; /*0x100ae947e*/
  v44 = v110; /*0x100ae948c*/
  std::fs::Metadata::modified::h0e075817eaa8c909(&v92, v110); /*0x100ae9490*/
  v48 = (int)v93; /*0x100ae9495*/
  v49 = v92; /*0x100ae949c*/
  if ( (_DWORD)v93 == 1000000000 ) /*0x100ae94aa*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v92, v44, v45, v46, v47); /*0x100ae94b3*/
  std::fs::Metadata::modified::h0e075817eaa8c909(&v92, v87); /*0x100ae94c6*/
  v53 = (int)v93; /*0x100ae94cb*/
  v54 = v92; /*0x100ae94d2*/
  if ( (_DWORD)v93 == 1000000000 ) /*0x100ae94e0*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v92, v87, v50, v51, v52); /*0x100ae94e9*/
  if ( v43 != *(_QWORD *)(v110 + 96) || v48 != 1000000000 && (v53 != v48 || v53 == 1000000000 || v54 != v49) ) /*0x100ae951e*/
  {
    v71 = (_DWORD ***)__src; /*0x100ae9783*/
    v72 = __n; /*0x100ae9787*/
    v92 = (_DWORD **)std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x100ae9790*/
    if ( v92 ) /*0x100ae979a*/
    {
      v71 = &v92; /*0x100ae979c*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v92, v72, v73, v74, v75); /*0x100ae97a3*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v71, v72); /*0x100ae97a8*/
    v76 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(68, 1); /*0x100ae97b7*/
    if ( !v76 ) /*0x100ae97bf*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 68); /*0x100ae985d*/
    v77 = (__int64)v76; /*0x100ae97c5*/
    memcpy(v76, "rollout changed while router migration was streaming; retry required", 0x44u); /*0x100ae97d7*/
    v78 = v113; /*0x100ae97dc*/
    *v113 = 10; /*0x100ae97e0*/
    v78[1] = 68; /*0x100ae97e7*/
    v78[2] = v77; /*0x100ae97ef*/
    v78[3] = 68; /*0x100ae97f3*/
    goto LABEL_59; /*0x100ae97fb*/
  }
  v55 = std::sys::fs::rename::h7934e6142c921014(__src, __n, v109, v108); /*0x100ae9534*/
  if ( v55 ) /*0x100ae953c*/
  {
    v104 = (_DWORD *)v55; /*0x100ae9542*/
    v56 = __n; /*0x100ae954a*/
    v92 = (_DWORD **)std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x100ae9553*/
    if ( v92 ) /*0x100ae955d*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v92, v56, v57, v58, v59); /*0x100ae9566*/
    v92 = &v104; /*0x100ae956f*/
    v93 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100ae957d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v80, &unk_1017CB3D0, &v92); /*0x100ae9599*/
    v60 = v113; /*0x100ae95a5*/
    v113[3] = v82; /*0x100ae95a9*/
    v61 = v80; /*0x100ae95ad*/
    v62 = v81; /*0x100ae95b4*/
    v60[2] = v81; /*0x100ae95bb*/
    v60[1] = v61; /*0x100ae95bf*/
    *v60 = 10; /*0x100ae95c3*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v104, &unk_1017CB3D0, v60, v62, v63); /*0x100ae95ce*/
    goto LABEL_59; /*0x100ae95d3*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::sync_parent_dir::hde074ded825d1d2d(v101, v102); /*0x100ae980e*/
  *v113 = 11; /*0x100ae9817*/
  close_NOCANCEL(v114); /*0x100ae9821*/
  v24 = v89; /*0x100ae9826*/
  if ( v89 ) /*0x100ae9830*/
  {
    v66 = __src; /*0x100ae983b*/
    goto LABEL_61; /*0x100ae983f*/
  }
}