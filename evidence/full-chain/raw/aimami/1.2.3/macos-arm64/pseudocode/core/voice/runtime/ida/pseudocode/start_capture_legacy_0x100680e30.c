// __ZN13codexmate_lib4core5voice7runtime20start_capture_legacy @ 0x100680e30 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::start_capture_legacy::hc4830eeb5bb65184(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  char v9; // r14
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  double result; // xmm0_8
  char *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  int v30; // r14d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rdx
  char v38; // r15
  char v39; // al
  __int64 v40; // rdx
  char v41; // r9
  __int64 v42; // rbx
  __int64 v43; // r12
  char v44; // r15
  int v45; // eax
  signed __int64 v46; // rt0
  unsigned int v47; // ebx
  __int64 v48; // rdi
  void *v49; // rax
  void *v50; // rax
  __int64 *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rsi
  bool v54; // of
  __int64 v55; // rax
  __int64 v56; // rt0
  volatile signed __int64 *v57; // rbx
  __int64 v58; // rt0
  volatile signed __int64 *v59; // r12
  __int64 v60; // rbx
  char v61; // of
  __int64 v62; // rax
  volatile signed __int64 *v63; // rbx
  __int64 v64; // rt0
  volatile signed __int64 *v65; // r14
  __int64 v66; // rt0
  _BYTE __dst[200]; // [rsp+8h] [rbp-2F8h] BYREF
  int v68[2]; // [rsp+D0h] [rbp-230h]
  __int64 __src[25]; // [rsp+D8h] [rbp-228h] BYREF
  int v70[34]; // [rsp+1A0h] [rbp-160h] BYREF
  __int64 v71; // [rsp+228h] [rbp-D8h] BYREF
  volatile signed __int64 *v72; // [rsp+230h] [rbp-D0h]
  __int64 v73; // [rsp+238h] [rbp-C8h]
  __int64 v74; // [rsp+240h] [rbp-C0h]
  __int64 v75; // [rsp+248h] [rbp-B8h]
  unsigned __int128 v76; // [rsp+250h] [rbp-B0h]
  unsigned __int64 v77; // [rsp+260h] [rbp-A0h]
  __int64 v78; // [rsp+268h] [rbp-98h]
  __int64 v79; // [rsp+270h] [rbp-90h]
  int v80[2]; // [rsp+278h] [rbp-88h] BYREF
  __int64 v81; // [rsp+280h] [rbp-80h]
  __int64 v82; // [rsp+288h] [rbp-78h]
  volatile signed __int64 *v83[2]; // [rsp+290h] [rbp-70h] BYREF
  __int64 v84; // [rsp+2A0h] [rbp-60h]
  __int64 v85; // [rsp+2A8h] [rbp-58h]
  __int64 v86; // [rsp+2B0h] [rbp-50h]
  __int64 v87; // [rsp+2B8h] [rbp-48h]
  __int64 v88; // [rsp+2C0h] [rbp-40h]
  _QWORD *v89; // [rsp+2C8h] [rbp-38h]
  volatile signed __int64 *v90[6]; // [rsp+2D0h] [rbp-30h] BYREF

  *(_QWORD *)v68 = a5; /*0x100680e44*/
  v84 = a4; /*0x100680e4b*/
  v89 = a3; /*0x100680e4f*/
  codexmate_lib::platform::voice_macos::resolve_voice_sidecar_path::h69bec614c361cc72(__src, a2); /*0x100680e6a*/
  v7 = __src[1]; /*0x100680e76*/
  v8 = __src[2]; /*0x100680e81*/
  v9 = __src[3]; /*0x100680e88*/
  v79 = __src[0]; /*0x100680e90*/
  v77 = 0x8000000000000000LL; /*0x100680e97*/
  if ( __src[0] == 0x8000000000000000LL ) /*0x100680ea1*/
  {
    v10 = *(_DWORD *)((char *)&__src[3] + 1); /*0x100680ea3*/
    *(_DWORD *)(a1 + 20) = HIDWORD(__src[3]); /*0x100680eaf*/
    *(_DWORD *)(a1 + 17) = v10; /*0x100680eb3*/
    *(_QWORD *)a1 = v7; /*0x100680eb7*/
    *(_QWORD *)(a1 + 8) = v8; /*0x100680ebb*/
    *(_BYTE *)(a1 + 16) = v9; /*0x100680ebf*/
    return result; /*0x100680ec3*/
  }
  v78 = __src[2]; /*0x100680ec8*/
  v86 = __src[1]; /*0x100680ecf*/
  v74 = a2; /*0x100680ed3*/
  v11 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100680edd*/
  v12 = v11; /*0x100680ee2*/
  v13 = (_QWORD *)(v11 + 32); /*0x100680ee8*/
  v14 = *(_QWORD *)(v11 + 32); /*0x100680eec*/
  if ( !v14 ) /*0x100680ef3*/
    v14 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v11 + 32); /*0x100680fb5*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v14); /*0x100680ef9*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100680f15*/
  {
    v16 = 0; /*0x100680f1b*/
    if ( *(_BYTE *)(v12 + 40) ) /*0x100680f1e*/
      goto LABEL_7; /*0x100680f24*/
LABEL_13:
    v20 = *(_QWORD *)(v12 + 264); /*0x100680fd5*/
    result = codexmate_lib::core::voice::runtime::sidecar_locale_arg::h9d4a6b0e5224fa76( /*0x100680fea*/
               __src,
               v20,
               *(_QWORD *)(v12 + 272));
    if ( !v16 /*0x1006819c6*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             __src,
                             v20,
                             v21,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v12 + 40) = 1; /*0x1006819d3*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v13); /*0x100681015*/
    v87 = __src[0]; /*0x100681021*/
    v85 = __src[1]; /*0x10068102c*/
    v19 = __src[2]; /*0x100681030*/
    if ( (v9 & 1) != 0 ) /*0x10068103b*/
      goto LABEL_11; /*0x10068103b*/
    goto LABEL_16; /*0x10068103b*/
  }
  v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, v8, v15, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x100680fc5*/
  if ( !*(_BYTE *)(v12 + 40) ) /*0x100680fc9*/
    goto LABEL_13; /*0x100680fcf*/
LABEL_7:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v8); /*0x100680f2a*/
  v17 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1, 1); /*0x100680f39*/
  if ( !v17 ) /*0x100680f41*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1); /*0x100681a6d*/
  v85 = (__int64)v17; /*0x100680f47*/
  *v17 = 45; /*0x100680f4b*/
  if ( !v16 /*0x1006816a2*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           1,
                           1,
                           v18,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v12 + 40) = 1; /*0x1006816af*/
  }
  v19 = 1; /*0x100680f74*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v13); /*0x100680f79*/
  v87 = 1; /*0x100680f83*/
  if ( (v9 & 1) != 0 ) /*0x100680f8b*/
  {
LABEL_11:
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379(__dst, v86, v78); /*0x100680f91*/
    goto LABEL_17; /*0x100680fa8*/
  }
LABEL_16:
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(__src, "swifttranscribe", 5); /*0x100681041*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__src, v86, v78); /*0x10068106b*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x100681083*/
LABEL_17:
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, "transcribe", 10); /*0x100681088*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, v85, v19); /*0x1006810b1*/
  if ( v87 ) /*0x1006810bd*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v87, 1); /*0x1006810c8*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, "-voice-audio-levelstarted", 1); /*0x1006810e3*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, v89, v84); /*0x1006810fa*/
  std::sys::process::unix::common::Command::stdin::h62c5b3b4d0b5814e(__dst, 2); /*0x10068110e*/
  std::sys::process::unix::common::Command::stdout::h556648047a6f261e(__dst, 2); /*0x100681122*/
  std::sys::process::unix::common::Command::stderr::h9704f649d4d0b361(__dst, 1); /*0x100681136*/
  std::process::Command::spawn::hcb9dc323794e167a(&v71, __dst); /*0x10068114c*/
  if ( (_DWORD)v71 == 2 ) /*0x100681158*/
  {
    v90[0] = v72; /*0x100681165*/
    v83[0] = (volatile signed __int64 *)v90; /*0x10068116d*/
    v83[1] = (volatile signed __int64 *)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100681178*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v80, &unk_1017C2F0C, v83); /*0x10068118e*/
    if ( ((__int64)v90[0] & 3) == 1 ) /*0x10068119f*/
    {
      v23 = (char *)v90[0] - 1; /*0x1006811a1*/
      v24 = *(volatile signed __int64 *)((char *)v90[0] - 1); /*0x1006811a5*/
      v25 = *(volatile signed __int64 *)((char *)v90[0] + 7); /*0x1006811a9*/
      if ( *(_QWORD *)v25 ) /*0x1006811ad*/
        (*(void (__fastcall **)(__int64))v25)(v24); /*0x1006811b8*/
      v26 = *(_QWORD *)(v25 + 8); /*0x1006811ba*/
      if ( v26 ) /*0x1006811c1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v26, *(_QWORD *)(v25 + 16)); /*0x1006811ca*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 24, 8); /*0x1006811dc*/
    }
    v27 = *(_QWORD *)v80; /*0x1006811e5*/
    v28 = v81; /*0x1006811ec*/
    *(_QWORD *)&v70[1] = *(_QWORD *)v80; /*0x1006811f0*/
    *(_QWORD *)&v70[3] = v81; /*0x1006811f7*/
    *(_QWORD *)&v70[5] = v82; /*0x1006811fe*/
    *(_QWORD *)(a1 + 16) = v82; /*0x100681205*/
    *(_QWORD *)(a1 + 8) = v28; /*0x100681209*/
    *(_QWORD *)a1 = v27; /*0x10068120d*/
    goto LABEL_51; /*0x100681211*/
  }
  v29 = v73; /*0x100681216*/
  v75 = v71; /*0x10068122b*/
  *(_QWORD *)&v76 = v72; /*0x100681232*/
  HIDWORD(v76) = HIDWORD(v73); /*0x100681239*/
  DWORD2(v76) = -1; /*0x100681240*/
  if ( (_DWORD)v73 == -1 ) /*0x10068124d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v71, __dst); /*0x100681556*/
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100681565*/
    if ( !v49 ) /*0x10068156d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100681a7e*/
    qmemcpy(v49, "voice sidecar stdout not available", 34); /*0x1006815a7*/
    *(_QWORD *)a1 = 34; /*0x1006815b7*/
    *(_QWORD *)(a1 + 8) = v49; /*0x1006815bf*/
    *(_QWORD *)(a1 + 16) = 34; /*0x1006815c7*/
    LODWORD(v29) = DWORD1(v76); /*0x1006815cf*/
    if ( DWORD1(v76) == -1 ) /*0x1006815d8*/
    {
LABEL_49:
      v48 = HIDWORD(v76); /*0x10068165a*/
      if ( HIDWORD(v76) == -1 ) /*0x100681663*/
        goto LABEL_51; /*0x100681663*/
      goto LABEL_50; /*0x100681663*/
    }
LABEL_48:
    close_NOCANCEL((unsigned int)v29); /*0x100681653*/
    goto LABEL_49; /*0x100681655*/
  }
  v30 = DWORD1(v76); /*0x100681253*/
  DWORD1(v76) = -1; /*0x10068125a*/
  if ( v30 == -1 ) /*0x100681268*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v71, __dst); /*0x1006815dc*/
    v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x1006815eb*/
    if ( !v50 ) /*0x1006815f3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x100681a8f*/
    qmemcpy(v50, "voice sidecar stdin not available", 33); /*0x10068162d*/
    *(_QWORD *)a1 = 33; /*0x10068163b*/
    *(_QWORD *)(a1 + 8) = v50; /*0x100681643*/
    *(_QWORD *)(a1 + 16) = 33; /*0x10068164b*/
    goto LABEL_48; /*0x10068164b*/
  }
  *(_OWORD *)((char *)&v70[2] + 3) = v76; /*0x10068128a*/
  *(_QWORD *)((char *)v70 + 3) = v75; /*0x100681291*/
  __src[0] = 1; /*0x100681298*/
  __src[1] = 1; /*0x1006812a3*/
  __src[2] = 0; /*0x1006812ae*/
  LOBYTE(__src[3]) = 0; /*0x1006812b9*/
  *(__int64 *)((char *)&__src[3] + 1) = *(_QWORD *)v70; /*0x1006812c7*/
  *(__int64 *)((char *)&__src[4] + 1) = *(_QWORD *)&v70[2]; /*0x1006812d5*/
  *(__int64 *)((char *)&__src[5] + 1) = v76 >> 40; /*0x1006812e3*/
  LODWORD(__src[6]) = HIDWORD(v76); /*0x1006812f0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v71, __dst); /*0x1006812f6*/
  v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 8); /*0x100681305*/
  v84 = v29; /*0x10068130d*/
  if ( !v31 ) /*0x100681311*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 56); /*0x1006816c2*/
  *(_OWORD *)(v31 + 40) = *(_OWORD *)&__src[5]; /*0x100681329*/
  *(_QWORD *)(v31 + 32) = __src[4]; /*0x100681334*/
  *(_QWORD *)(v31 + 24) = __src[3]; /*0x10068133f*/
  *(_QWORD *)(v31 + 16) = __src[2]; /*0x10068134a*/
  v32 = __src[0]; /*0x10068134e*/
  *(_QWORD *)(v31 + 8) = __src[1]; /*0x10068135c*/
  *(_QWORD *)v31 = v32; /*0x100681360*/
  v90[0] = (volatile signed __int64 *)v31; /*0x100681363*/
  __src[0] = 1; /*0x100681367*/
  __src[1] = 1; /*0x100681372*/
  __src[2] = 0; /*0x10068137d*/
  LOBYTE(__src[3]) = 0; /*0x100681388*/
  HIDWORD(__src[3]) = v30; /*0x10068138f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(56, 8); /*0x100681396*/
  v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x1006813a5*/
  if ( !v33 ) /*0x1006813ad*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1006816d6*/
  *(_QWORD *)(v33 + 24) = __src[3]; /*0x1006813ba*/
  *(_QWORD *)(v33 + 16) = __src[2]; /*0x1006813c5*/
  v34 = __src[0]; /*0x1006813c9*/
  *(_QWORD *)(v33 + 8) = __src[1]; /*0x1006813d7*/
  *(_QWORD *)v33 = v34; /*0x1006813db*/
  v83[0] = (volatile signed __int64 *)v33; /*0x1006813de*/
  LOBYTE(v33) = 1; /*0x1006813e2*/
  v88 = v33; /*0x1006813e4*/
  v35 = tauri::Manager::state::hb5ba04dc9da9798f(v74); /*0x1006813f4*/
  v89 = (_QWORD *)(v35 + 32); /*0x1006813fb*/
  v36 = *(_QWORD *)(v35 + 32); /*0x1006813ff*/
  if ( !v36 ) /*0x100681406*/
    v36 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v89); /*0x1006816e9*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v36); /*0x10068140c*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100681428*/
  {
    v38 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v36, 8, v37, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x1006816f9*/
    if ( *(_BYTE *)(v35 + 40) ) /*0x1006816fd*/
      goto LABEL_35; /*0x100681704*/
LABEL_59:
    v71 = v86; /*0x10068170a*/
    v72 = (volatile signed __int64 *)v78; /*0x10068171c*/
    *(_QWORD *)v70 = 0; /*0x100681723*/
    *(_QWORD *)&v70[2] = 1; /*0x10068172e*/
    *(_QWORD *)&v70[4] = 0; /*0x100681739*/
    __src[2] = 1610612768; /*0x100681744*/
    __src[0] = (__int64)v70; /*0x100681756*/
    __src[1] = (__int64)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100681764*/
    v51 = &v71; /*0x10068176b*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v71, __src) ) /*0x100681779*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100681a2b*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        v80,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    *(_QWORD *)v80 = *(_QWORD *)v70; /*0x100681794*/
    v81 = *(_QWORD *)&v70[2]; /*0x10068179b*/
    v82 = *(_QWORD *)&v70[4]; /*0x1006817a6*/
    v53 = *(_QWORD *)(v35 + 688); /*0x1006817b1*/
    v54 = __OFSUB__(v53, v77); /*0x1006817b8*/
    if ( v53 != v77 ) /*0x1006817bf*/
    {
      v54 = 0; /*0x1006817c1*/
      if ( v53 ) /*0x1006817c4*/
      {
        v51 = *(__int64 **)(v35 + 696); /*0x1006817c6*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v53, 1); /*0x1006817d2*/
      }
    }
    *(_QWORD *)(v35 + 704) = v82; /*0x1006817db*/
    v55 = *(_QWORD *)v80; /*0x1006817df*/
    *(_QWORD *)(v35 + 696) = v81; /*0x1006817ea*/
    *(_QWORD *)(v35 + 688) = v55; /*0x1006817ee*/
    v56 = _InterlockedIncrement64(v90[0]); /*0x1006817f5*/
    if ( (v56 < 0) ^ v54 | (v56 == 0) ) /*0x1006817f9*/
      goto LABEL_90; /*0x1006817f9*/
    v57 = v90[0]; /*0x1006817ff*/
    v58 = _InterlockedIncrement64(v83[0]); /*0x100681807*/
    if ( (v58 < 0) ^ v54 | (v58 == 0) ) /*0x10068180b*/
      goto LABEL_90; /*0x10068180b*/
    v59 = v83[0]; /*0x100681811*/
    if ( *(_BYTE *)(v35 + 744) != 2 ) /*0x10068181d*/
    {
      v51 = (__int64 *)(v35 + 728); /*0x10068181f*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v35 + 728)) ) /*0x100681829*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(v51); /*0x10068182f*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v35 + 736)) ) /*0x10068183b*/
      {
        v51 = (__int64 *)(v35 + 736); /*0x100681844*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v35 + 736); /*0x10068184b*/
      }
    }
    *(_QWORD *)(v35 + 728) = v57; /*0x100681850*/
    *(_QWORD *)(v35 + 736) = v59; /*0x100681857*/
    *(_BYTE *)(v35 + 744) = 0; /*0x10068185e*/
    if ( !v38 /*0x100681a4c*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v51,
                             v53,
                             v52,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v35 + 40) = 1; /*0x100681a59*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v89); /*0x10068188f*/
    v60 = v74; /*0x100681894*/
    _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(v70, v74); /*0x1006818a5*/
    v62 = v60; /*0x1006818aa*/
    v63 = *(volatile signed __int64 **)(v60 + 136); /*0x1006818ad*/
    v64 = _InterlockedIncrement64(v63); /*0x1006818b4*/
    if ( (v64 < 0) ^ v61 | (v64 == 0) /*0x1006818c9*/
      || (v65 = *(volatile signed __int64 **)(v62 + 144),
          v66 = _InterlockedIncrement64(v65),
          (v66 < 0) ^ v61 | (v66 == 0)) )
    {
LABEL_90:
      BUG(); /*0x100681ac3*/
    }
    memcpy(__src, v70, 0x88u); /*0x1006818e5*/
    LODWORD(__src[21]) = v84; /*0x1006818f2*/
    __src[17] = (__int64)v63; /*0x1006818f8*/
    __src[18] = (__int64)v65; /*0x1006818ff*/
    __src[20] = *(_QWORD *)v68; /*0x10068190d*/
    __src[19] = (__int64)v90[0]; /*0x100681914*/
    *(_QWORD *)v80 = v77; /*0x100681922*/
    v88 = 0; /*0x100681929*/
    std::thread::lifecycle::spawn_unchecked::h574948a7a555862a((int)v70, (int)v80, 0, v68[0], 0, 0, __src); /*0x10068194b*/
    if ( !*(_QWORD *)v70 ) /*0x100681961*/
    {
      *(_QWORD *)v70 = *(_QWORD *)&v70[2]; /*0x100681a96*/
      core::result::unwrap_failed::h855bccc0ecc45c4f("failed to spawn thread", 22, v70, &off_101968498, &off_101967AA0); /*0x100681abe*/
    }
    v88 = 0; /*0x100681983*/
    core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v70); /*0x100681992*/
    *(_QWORD *)a1 = v77; /*0x10068199e*/
    if ( !_InterlockedDecrement64(v83[0]) ) /*0x1006819a6*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v83); /*0x1006819b0*/
    goto LABEL_51; /*0x1006819b0*/
  }
  v38 = 0; /*0x10068142e*/
  if ( !*(_BYTE *)(v35 + 40) ) /*0x100681438*/
    goto LABEL_59; /*0x100681438*/
LABEL_35:
  *(_QWORD *)v70 = 0; /*0x10068143e*/
  *(_QWORD *)&v70[2] = 1; /*0x100681449*/
  *(_QWORD *)&v70[4] = 0; /*0x100681454*/
  __src[2] = 1610612768; /*0x10068145f*/
  __src[0] = (__int64)v70; /*0x100681471*/
  __src[1] = (__int64)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068147f*/
  v39 = _$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
          "poisoned lock: another task failed inside",
          41,
          __src);
  v41 = v38; /*0x10068149e*/
  if ( v39 ) /*0x1006814a3*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100681a00*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v80,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v42 = *(_QWORD *)v70; /*0x1006814a9*/
  v43 = *(_QWORD *)&v70[2]; /*0x1006814b0*/
  v44 = v70[4]; /*0x1006814b7*/
  v80[0] = *(int *)((char *)&v70[4] + 1); /*0x1006814c5*/
  *(int *)((char *)v80 + 3) = v70[5]; /*0x1006814d1*/
  if ( !v41
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v40,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v35 + 40) = 1; /*0x100681a42*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v89); /*0x100681500*/
  v45 = v80[0]; /*0x100681505*/
  *(_DWORD *)(a1 + 20) = *(int *)((char *)v80 + 3); /*0x100681511*/
  *(_DWORD *)(a1 + 17) = v45; /*0x100681515*/
  *(_QWORD *)a1 = v42; /*0x100681519*/
  *(_QWORD *)(a1 + 8) = v43; /*0x10068151d*/
  *(_BYTE *)(a1 + 16) = v44; /*0x100681521*/
  if ( !_InterlockedDecrement64(v83[0]) ) /*0x100681529*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v83); /*0x100681533*/
  v46 = _InterlockedDecrement64(v90[0]); /*0x10068153c*/
  v47 = v84; /*0x100681540*/
  if ( !v46 ) /*0x100681544*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(v90); /*0x10068154a*/
  v48 = v47; /*0x10068154f*/
LABEL_50:
  close_NOCANCEL(v48); /*0x100681665*/
LABEL_51:
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(__dst); /*0x10068166a*/
  if ( v79 ) /*0x100681680*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v79, 1); /*0x10068168b*/
  return result; /*0x100681690*/
}