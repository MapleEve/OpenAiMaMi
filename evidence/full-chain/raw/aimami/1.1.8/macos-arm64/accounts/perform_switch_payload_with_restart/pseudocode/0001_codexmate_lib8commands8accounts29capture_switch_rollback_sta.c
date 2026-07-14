// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004c9310 depth=1
// codexmate_lib8commands8accounts29capture_switch_rollback_state
__int64 __fastcall codexmate_lib::commands::accounts::capture_switch_rollback_state::h4876b80d2797ba5c(
        char *__dst,
        __int64 a2)
{
  volatile signed __int64 *v3; // rax
  volatile signed __int64 *v4; // r14
  pthread_mutex_t *v5; // rdi
  bool v6; // r15
  __int64 v7; // rbx
  bool v8; // cl
  char v9; // r15
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  _QWORD *v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  _QWORD __src[18]; // [rsp+0h] [rbp-4D0h] BYREF
  __int64 v20; // [rsp+90h] [rbp-440h]
  __int64 v21; // [rsp+98h] [rbp-438h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-430h]
  __int64 v23; // [rsp+A8h] [rbp-428h]
  __int64 v24; // [rsp+B0h] [rbp-420h]
  __int64 v25; // [rsp+B8h] [rbp-418h]
  __int64 v26; // [rsp+C0h] [rbp-410h]
  __int64 v27; // [rsp+C8h] [rbp-408h]
  __int64 v28; // [rsp+D0h] [rbp-400h]
  __int64 v29; // [rsp+D8h] [rbp-3F8h]
  __int64 v30; // [rsp+E0h] [rbp-3F0h]
  __int64 v31; // [rsp+E8h] [rbp-3E8h]
  __int64 v32; // [rsp+F0h] [rbp-3E0h]
  __int64 v33; // [rsp+F8h] [rbp-3D8h]
  __int64 v34; // [rsp+100h] [rbp-3D0h]
  __int64 v35; // [rsp+108h] [rbp-3C8h]
  __int64 v36; // [rsp+110h] [rbp-3C0h]
  __int64 v37; // [rsp+118h] [rbp-3B8h]
  __int64 v38; // [rsp+120h] [rbp-3B0h]
  __int64 v39; // [rsp+128h] [rbp-3A8h]
  __int64 v40; // [rsp+130h] [rbp-3A0h]
  __int64 v41; // [rsp+138h] [rbp-398h]
  __int64 v42; // [rsp+140h] [rbp-390h] BYREF
  __int64 v43; // [rsp+148h] [rbp-388h]
  __int64 v44; // [rsp+150h] [rbp-380h]
  __int64 v45; // [rsp+158h] [rbp-378h]
  __int64 v46; // [rsp+160h] [rbp-370h]
  __int64 v47; // [rsp+168h] [rbp-368h]
  __int64 v48; // [rsp+170h] [rbp-360h]
  __int64 v49; // [rsp+178h] [rbp-358h]
  __int64 v50; // [rsp+180h] [rbp-350h]
  __int64 v51; // [rsp+188h] [rbp-348h]
  __int64 v52; // [rsp+190h] [rbp-340h]
  __int64 v53; // [rsp+198h] [rbp-338h]
  _DWORD v54[2]; // [rsp+1A0h] [rbp-330h]
  __int64 v55; // [rsp+1A8h] [rbp-328h] BYREF
  __int64 v56; // [rsp+1B0h] [rbp-320h]
  __int64 v57; // [rsp+1B8h] [rbp-318h]
  __int64 v58; // [rsp+1C0h] [rbp-310h]
  __int64 v59; // [rsp+1C8h] [rbp-308h]
  __int64 v60; // [rsp+1D0h] [rbp-300h]
  _QWORD *v61; // [rsp+1D8h] [rbp-2F8h] BYREF
  __int64 (__fastcall **v62)(); // [rsp+1E0h] [rbp-2F0h]
  __int64 v63; // [rsp+1E8h] [rbp-2E8h]
  __int64 v64; // [rsp+1F0h] [rbp-2E0h]
  __int64 v65; // [rsp+1F8h] [rbp-2D8h]
  __int64 v66; // [rsp+200h] [rbp-2D0h]
  __int64 v67; // [rsp+208h] [rbp-2C8h]
  __int64 v68; // [rsp+220h] [rbp-2B0h]
  __int64 v69; // [rsp+238h] [rbp-298h]
  __int64 v70; // [rsp+250h] [rbp-280h]
  __int64 v71; // [rsp+268h] [rbp-268h]
  __int64 v72; // [rsp+280h] [rbp-250h]
  __int64 v73; // [rsp+298h] [rbp-238h]
  __int64 v74; // [rsp+2B0h] [rbp-220h]
  __int64 v75; // [rsp+2B8h] [rbp-218h]
  __int64 v76; // [rsp+2C0h] [rbp-210h]
  __int64 v77; // [rsp+2C8h] [rbp-208h]
  __int64 v78; // [rsp+2E0h] [rbp-1F0h]
  __int64 v79; // [rsp+2F8h] [rbp-1D8h]
  __int64 v80; // [rsp+310h] [rbp-1C0h]
  __int64 v81; // [rsp+328h] [rbp-1A8h]
  __int64 v82; // [rsp+340h] [rbp-190h]
  __int64 v83; // [rsp+358h] [rbp-178h]
  __int64 v84; // [rsp+370h] [rbp-160h]
  __int64 v85; // [rsp+388h] [rbp-148h]
  __int64 v86; // [rsp+3A0h] [rbp-130h]
  __int64 v87; // [rsp+3B8h] [rbp-118h]
  __int64 v88; // [rsp+3C0h] [rbp-110h]
  __int64 v89; // [rsp+3C8h] [rbp-108h]
  __int64 v90; // [rsp+3D0h] [rbp-100h]
  __int64 v91; // [rsp+3D8h] [rbp-F8h]
  __int64 v92; // [rsp+3E0h] [rbp-F0h]
  __int64 v93; // [rsp+3E8h] [rbp-E8h]
  __int64 v94; // [rsp+400h] [rbp-D0h]
  __int64 v95; // [rsp+418h] [rbp-B8h]
  __int64 v96; // [rsp+430h] [rbp-A0h]
  __int64 v97; // [rsp+448h] [rbp-88h]
  __int64 v98; // [rsp+460h] [rbp-70h]
  __int64 v99; // [rsp+478h] [rbp-58h]
  __int64 v100; // [rsp+490h] [rbp-40h]

  v3 = (volatile signed __int64 *)tauri::state::StateManager::try_get::h5668abcf78ad5dde(*(_QWORD *)(a2 + 4872) + 16LL); /*0x1004c9332*/
  if ( !v3 ) /*0x1004c933a*/
  {
    __src[0] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_789; /*0x1004c948a*/
    __src[1] = 76; /*0x1004c9491*/
    v61 = __src; /*0x1004c94a3*/
    v62 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004c94b1*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004c94cd*/
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
      (__int64)&v61,
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
  }
  v4 = v3; /*0x1004c9340*/
  v5 = (pthread_mutex_t *)*v3; /*0x1004c9343*/
  if ( !*v3 ) /*0x1004c9343*/
    v5 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v3); /*0x1004c94da*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1004c9359*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v6 = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004c94ea*/
    if ( *((_BYTE *)v4 + 8) ) /*0x1004c94ee*/
      goto LABEL_6; /*0x1004c94f5*/
  }
  else
  {
    v6 = 0; /*0x1004c9375*/
    if ( *((_BYTE *)v4 + 8) )
    {
LABEL_6:
      __src[0] = 0; /*0x1004c9385*/
      __src[1] = 1; /*0x1004c9390*/
      __src[2] = 0; /*0x1004c939b*/
      v63 = 1610612768; /*0x1004c93a6*/
      v61 = __src; /*0x1004c93b8*/
      v62 = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c93c6*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              (__int64)"poisoned lock: another task failed inside",
                              41,
                              (__int64)&v61) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004ca3c3*/
          (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unw"
                   "rap()` on an `Err` value",
          55,
          (__int64)&v55,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
      v20 = __src[0]; /*0x1004c93f4*/
      v7 = __src[1]; /*0x1004c93fb*/
      v8 = v6; /*0x1004c9402*/
      v9 = __src[2]; /*0x1004c9405*/
      v54[0] = *(_DWORD *)((char *)&__src[2] + 1); /*0x1004c9413*/
      *(_DWORD *)((char *)v54 + 3) = HIDWORD(__src[2]); /*0x1004c941f*/
      if ( !v8 /*0x1004ca3ca*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
      {
        *((_BYTE *)v4 + 8) = 1; /*0x1004ca3d7*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v4); /*0x1004c943f*/
      *((_QWORD *)__dst + 1) = v20; /*0x1004c944b*/
      *((_QWORD *)__dst + 2) = v7; /*0x1004c9450*/
      __dst[24] = v9; /*0x1004c9455*/
      v10 = *(_DWORD *)((char *)v54 + 3); /*0x1004c9460*/
      *(_DWORD *)(__dst + 25) = v54[0]; /*0x1004c9466*/
      *((_DWORD *)__dst + 7) = v10; /*0x1004c946b*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1004c947a*/
      return 0x8000000000000000LL; /*0x1004c947e*/
    }
  }
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::ha049832356bd4e2b( /*0x1004c9509*/
    &v61,
    v4 + 2);
  if ( !v6 /*0x1004ca3e4*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x1004ca3f1*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v4); /*0x1004c952c*/
  v44 = v66; /*0x1004c9538*/
  v43 = v65; /*0x1004c954d*/
  v42 = v64; /*0x1004c9554*/
  codexmate_lib::commands::accounts::FileRestoreState::capture::hb86e64c0bb8e8d9e(&v55, &v42); /*0x1004c956c*/
  v12 = v55; /*0x1004c9571*/
  v33 = v56; /*0x1004c957f*/
  v34 = v57; /*0x1004c958d*/
  v35 = v58; /*0x1004c959b*/
  if ( v55 == 0x8000000000000000LL ) /*0x1004c95a5*/
  {
    *((_QWORD *)__dst + 3) = v35; /*0x1004c95b2*/
    result = v33; /*0x1004c95b7*/
    *((_QWORD *)__dst + 2) = v34; /*0x1004c95c5*/
    *((_QWORD *)__dst + 1) = result; /*0x1004c95ca*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1004c95cf*/
    if ( v61 ) /*0x1004c95dd*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c95eb*/
    if ( v67 ) /*0x1004c95fa*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9608*/
    if ( v68 ) /*0x1004c9617*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9625*/
    if ( v69 ) /*0x1004c9634*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9642*/
    if ( v70 ) /*0x1004c9651*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c965f*/
    if ( v71 ) /*0x1004c966e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c967c*/
    if ( v72 ) /*0x1004c968b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9699*/
    if ( v73 ) /*0x1004c96a8*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c96b6*/
    if ( v74 ) /*0x1004c96c5*/
LABEL_54:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c98dc*/
  }
  else
  {
    v53 = v60; /*0x1004c96e5*/
    v52 = v59; /*0x1004c96ec*/
    v49 = v33; /*0x1004c9701*/
    v50 = v34; /*0x1004c9708*/
    v51 = v35; /*0x1004c9716*/
    v48 = v55; /*0x1004c971d*/
    v44 = v76; /*0x1004c972b*/
    v43 = v75; /*0x1004c9740*/
    v42 = v74; /*0x1004c9747*/
    codexmate_lib::commands::accounts::FileRestoreState::capture::hb86e64c0bb8e8d9e(&v55, &v42); /*0x1004c975c*/
    v13 = v55; /*0x1004c9761*/
    v30 = v56; /*0x1004c976f*/
    v31 = v57; /*0x1004c977d*/
    v32 = v58; /*0x1004c978b*/
    if ( v55 != 0x8000000000000000LL ) /*0x1004c9795*/
    {
      v14 = __dst; /*0x1004c9b27*/
      v41 = v60; /*0x1004c9b38*/
      v40 = v59; /*0x1004c9b3f*/
      v37 = v30; /*0x1004c9b54*/
      v38 = v31; /*0x1004c9b5b*/
      v39 = v32; /*0x1004c9b69*/
      v36 = v55; /*0x1004c9b70*/
      v23 = v89; /*0x1004c9b7e*/
      v22 = v88; /*0x1004c9b93*/
      v21 = v87; /*0x1004c9b9a*/
      codexmate_lib::commands::accounts::FileRestoreState::capture::hb86e64c0bb8e8d9e(&v55, &v21); /*0x1004c9baf*/
      v15 = v55; /*0x1004c9bb4*/
      v27 = v56; /*0x1004c9bc2*/
      v28 = v57; /*0x1004c9bd0*/
      v29 = v58; /*0x1004c9bde*/
      if ( v55 != 0x8000000000000000LL ) /*0x1004c9be8*/
      {
        v47 = v60; /*0x1004c9ea0*/
        v46 = v59; /*0x1004c9ea7*/
        v43 = v27; /*0x1004c9ebc*/
        v44 = v28; /*0x1004c9ec3*/
        v45 = v29; /*0x1004c9ed1*/
        v42 = v55; /*0x1004c9ed8*/
        v23 = v92; /*0x1004c9ee6*/
        v22 = v91; /*0x1004c9efb*/
        v21 = v90; /*0x1004c9f02*/
        codexmate_lib::commands::accounts::FileRestoreState::capture::hb86e64c0bb8e8d9e(&v55, &v21); /*0x1004c9f17*/
        v24 = v56; /*0x1004c9f2a*/
        v25 = v57; /*0x1004c9f38*/
        v26 = v58; /*0x1004c9f46*/
        if ( v55 == 0x8000000000000000LL ) /*0x1004c9f50*/
        {
          v14[3] = v26; /*0x1004c9f5d*/
          result = v24; /*0x1004c9f61*/
          v14[2] = v25; /*0x1004c9f6f*/
          v14[1] = result; /*0x1004c9f73*/
          *v14 = 0x8000000000000000LL; /*0x1004c9f77*/
          if ( v15 ) /*0x1004c9f7e*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9f8f*/
          if ( v45 != 0x8000000000000000LL && v45 ) /*0x1004c9fa3*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9fb1*/
          if ( v13 ) /*0x1004c9fb9*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9fca*/
          if ( v39 != 0x8000000000000000LL && v39 ) /*0x1004c9fde*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9fec*/
          if ( v12 ) /*0x1004c9ff4*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca005*/
          if ( v51 != 0x8000000000000000LL && v51 ) /*0x1004ca01d*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca02f*/
        }
        else
        {
          v16 = v59; /*0x1004ca039*/
          v17 = v55; /*0x1004ca040*/
          v14[23] = v60; /*0x1004ca04a*/
          v14[22] = v16; /*0x1004ca051*/
          v14[21] = v26; /*0x1004ca05f*/
          v18 = v24; /*0x1004ca066*/
          v14[20] = v25; /*0x1004ca074*/
          v14[19] = v18; /*0x1004ca07b*/
          __src[0] = v48; /*0x1004ca090*/
          __src[1] = v49; /*0x1004ca097*/
          __src[2] = v50; /*0x1004ca0a5*/
          __src[3] = v51; /*0x1004ca0b3*/
          __src[4] = v52; /*0x1004ca0c1*/
          __src[5] = v53; /*0x1004ca0cf*/
          __src[6] = v36; /*0x1004ca0e4*/
          __src[7] = v37; /*0x1004ca0eb*/
          __src[8] = v38; /*0x1004ca0f9*/
          __src[9] = v39; /*0x1004ca107*/
          __src[10] = v40; /*0x1004ca115*/
          __src[11] = v41; /*0x1004ca123*/
          __src[17] = v47; /*0x1004ca131*/
          __src[16] = v46; /*0x1004ca13f*/
          __src[15] = v45; /*0x1004ca14d*/
          __src[14] = v44; /*0x1004ca15b*/
          __src[13] = v43; /*0x1004ca170*/
          __src[12] = v42; /*0x1004ca177*/
          result = (__int64)memcpy(v14, __src, 0x90u); /*0x1004ca18d*/
          v14[18] = v17; /*0x1004ca192*/
        }
        if ( v61 ) /*0x1004ca1a3*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca1b1*/
        if ( v67 ) /*0x1004ca1c0*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca1ce*/
        if ( v68 ) /*0x1004ca1dd*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca1eb*/
        if ( v69 ) /*0x1004ca1fa*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca208*/
        if ( v70 ) /*0x1004ca217*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca225*/
        if ( v71 ) /*0x1004ca234*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca242*/
        if ( v72 ) /*0x1004ca251*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca25f*/
        if ( v73 ) /*0x1004ca26e*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca27c*/
        if ( v77 ) /*0x1004ca28b*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca299*/
        if ( v78 ) /*0x1004ca2a8*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca2b6*/
        if ( v79 ) /*0x1004ca2c5*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca2d3*/
        if ( v80 ) /*0x1004ca2e2*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca2f0*/
        if ( v81 ) /*0x1004ca2ff*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca30d*/
        if ( v82 ) /*0x1004ca31c*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca32a*/
        if ( v83 ) /*0x1004ca339*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca347*/
        if ( v84 ) /*0x1004ca356*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca364*/
        if ( v85 ) /*0x1004ca373*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ca381*/
        if ( !v86 ) /*0x1004ca390*/
          goto LABEL_79; /*0x1004ca390*/
        goto LABEL_78; /*0x1004ca390*/
      }
      v14[3] = v29; /*0x1004c9bf5*/
      result = v27; /*0x1004c9bf9*/
      v14[2] = v28; /*0x1004c9c07*/
      v14[1] = result; /*0x1004c9c0b*/
      *v14 = 0x8000000000000000LL; /*0x1004c9c0f*/
      if ( v13 ) /*0x1004c9c16*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9c27*/
      if ( v39 != 0x8000000000000000LL && v39 ) /*0x1004c9c3b*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9c49*/
      if ( v12 ) /*0x1004c9c51*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9c62*/
      if ( v51 != 0x8000000000000000LL && v51 ) /*0x1004c9c76*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9c84*/
      if ( v61 ) /*0x1004c9c93*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9ca1*/
      if ( v67 ) /*0x1004c9cb0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9cbe*/
      if ( v68 ) /*0x1004c9ccd*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9cdb*/
      if ( v69 ) /*0x1004c9cea*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9cf8*/
      if ( v70 ) /*0x1004c9d07*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9d15*/
      if ( v71 ) /*0x1004c9d24*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9d32*/
      if ( v72 ) /*0x1004c9d41*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9d4f*/
      if ( v73 ) /*0x1004c9d5e*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9d6c*/
      if ( v77 ) /*0x1004c9d7b*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9d89*/
      if ( v78 ) /*0x1004c9d98*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9da6*/
      if ( v79 ) /*0x1004c9db5*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9dc3*/
      if ( v80 ) /*0x1004c9dd2*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9de0*/
      if ( v81 ) /*0x1004c9def*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9dfd*/
      if ( v82 ) /*0x1004c9e0c*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9e1a*/
      if ( v83 ) /*0x1004c9e29*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9e37*/
      if ( v84 ) /*0x1004c9e46*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9e54*/
      if ( v85 ) /*0x1004c9e63*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9e71*/
      if ( v86 ) /*0x1004c9e80*/
        goto LABEL_76; /*0x1004c9e80*/
      goto LABEL_77; /*0x1004c9e80*/
    }
    *((_QWORD *)__dst + 3) = v32; /*0x1004c97a2*/
    result = v30; /*0x1004c97a7*/
    *((_QWORD *)__dst + 2) = v31; /*0x1004c97b5*/
    *((_QWORD *)__dst + 1) = result; /*0x1004c97ba*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1004c97bf*/
    if ( v12 ) /*0x1004c97c6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c97d7*/
    if ( v51 != 0x8000000000000000LL && v51 ) /*0x1004c97eb*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c97f9*/
    if ( v61 ) /*0x1004c9808*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9816*/
    if ( v67 ) /*0x1004c9825*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9833*/
    if ( v68 ) /*0x1004c9842*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9850*/
    if ( v69 ) /*0x1004c985f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c986d*/
    if ( v70 ) /*0x1004c987c*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c988a*/
    if ( v71 ) /*0x1004c9899*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c98a7*/
    if ( v72 ) /*0x1004c98b6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c98c4*/
    if ( v73 ) /*0x1004c98d3*/
      goto LABEL_54; /*0x1004c98d3*/
  }
  if ( v77 ) /*0x1004c98f0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c98fe*/
  if ( v78 ) /*0x1004c990d*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c991b*/
  if ( v79 ) /*0x1004c992a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9938*/
  if ( v80 ) /*0x1004c9947*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9955*/
  if ( v81 ) /*0x1004c9964*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9972*/
  if ( v82 ) /*0x1004c9981*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c998f*/
  if ( v83 ) /*0x1004c999e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c99ac*/
  if ( v84 ) /*0x1004c99bb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c99c9*/
  if ( v85 ) /*0x1004c99d8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c99e6*/
  if ( v86 ) /*0x1004c99f5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9a03*/
  if ( v87 ) /*0x1004c9a12*/
LABEL_76:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9a1b*/
LABEL_77:
  if ( v90 ) /*0x1004c9a2f*/
LABEL_78:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9a38*/
LABEL_79:
  if ( v93 ) /*0x1004c9a4c*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9a5a*/
  if ( v94 ) /*0x1004c9a69*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9a77*/
  if ( v95 ) /*0x1004c9a86*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9a94*/
  if ( v96 ) /*0x1004c9aa3*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9ab1*/
  if ( v97 ) /*0x1004c9ac0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9acb*/
  if ( v98 ) /*0x1004c9ad7*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9ae2*/
  if ( v99 ) /*0x1004c9aee*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9af9*/
  if ( v100 ) /*0x1004c9b05*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c9b10*/
  return result; /*0x1004c9b15*/
}