// __ZN13codexmate_lib8commands10account_io23export_accounts_to_file28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006f9b70 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::account_io::export_accounts_to_file::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2654960dce2a39f0(
        _DWORD *__dst,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  char v11; // cl
  __int64 v12; // r13
  __int64 v13; // r14
  char v14; // cl
  char v15; // bl
  int v16; // eax
  _QWORD *v17; // r15
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 *v26; // r14
  signed __int64 v27; // rdx
  __int64 v28; // r13
  const void *v29; // rsi
  signed __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r15
  signed __int64 v33; // rbx
  __int64 v34; // rax
  __int64 *v35; // rsi
  __int64 v36; // rdx
  _QWORD *v37; // r14
  signed __int64 v38; // rcx
  char v39; // bl
  __int64 *v40; // r15
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdi
  _QWORD *v44; // rbx
  _QWORD *v45; // rsi
  _QWORD *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdi
  _QWORD __src[18]; // [rsp+18h] [rbp-1D8h] BYREF
  _QWORD v51[3]; // [rsp+A8h] [rbp-148h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-130h]
  __int64 v53; // [rsp+C8h] [rbp-128h]
  __int64 v54; // [rsp+D0h] [rbp-120h]
  __int64 *v55; // [rsp+D8h] [rbp-118h]
  __int64 v56; // [rsp+E0h] [rbp-110h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-108h]
  __int64 v58; // [rsp+F0h] [rbp-100h]
  _QWORD v59[12]; // [rsp+F8h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+158h] [rbp-98h] BYREF
  __int64 v61; // [rsp+160h] [rbp-90h]
  __int64 v62; // [rsp+168h] [rbp-88h]
  __int64 v63; // [rsp+170h] [rbp-80h]
  __int64 v64; // [rsp+178h] [rbp-78h]
  __int64 v65; // [rsp+180h] [rbp-70h]
  __int64 v66; // [rsp+188h] [rbp-68h]
  __int64 v67; // [rsp+190h] [rbp-60h]
  __int64 v68; // [rsp+198h] [rbp-58h]
  __int64 v69; // [rsp+1A0h] [rbp-50h]
  int v70; // [rsp+1ACh] [rbp-44h]
  _QWORD *v71; // [rsp+1B0h] [rbp-40h]
  const void *v72; // [rsp+1B8h] [rbp-38h]
  char v73; // [rsp+1C7h] [rbp-29h]

  v71 = a2; /*0x1006f9b87*/
  v3 = a2[17]; /*0x1006f9b8b*/
  v4 = *(_QWORD *)(v3 + 4872) + 16LL; /*0x1006f9b99*/
  LOBYTE(v3) = 1; /*0x1006f9b9d*/
  LODWORD(v72) = v3; /*0x1006f9b9f*/
  v5 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(v4); /*0x1006f9ba2*/
  v6 = v5; /*0x1006f9ba7*/
  if ( !v5 ) /*0x1006f9bad*/
  {
    v59[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006f9d91*/
    v59[1] = 76; /*0x1006f9d98*/
    __src[0] = v59; /*0x1006f9daa*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006f9db8*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006f9dd4*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v7 = *v5; /*0x1006f9bb3*/
  if ( !*v5 ) /*0x1006f9bb3*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v5); /*0x1006f9de6*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1006f9bbf*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9); /*0x1006f9df3*/
    LOBYTE(v10) = v10 ^ 1; /*0x1006f9df5*/
    v11 = *((_BYTE *)v6 + 8); /*0x1006f9df8*/
    if ( v11 ) /*0x1006f9dff*/
      goto LABEL_6; /*0x1006f9dff*/
  }
  else
  {
    v10 = 0; /*0x1006f9bdb*/
    v11 = *((_BYTE *)v6 + 8); /*0x1006f9bdd*/
    if ( v11 )
    {
LABEL_6:
      v73 = v11; /*0x1006f9bea*/
      v59[0] = 0; /*0x1006f9bed*/
      v59[1] = 1; /*0x1006f9bf8*/
      v59[2] = 0; /*0x1006f9c03*/
      __src[2] = 1610612768; /*0x1006f9c0e*/
      __src[0] = v59; /*0x1006f9c20*/
      __src[1] = &off_101969DD0; /*0x1006f9c2e*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v56, &unk_101969E38, &off_101969E00); /*0x1006fa1c9*/
      v12 = v59[0]; /*0x1006f9c58*/
      v13 = v59[1]; /*0x1006f9c5f*/
      v14 = v10; /*0x1006f9c66*/
      v15 = v59[2]; /*0x1006f9c68*/
      LODWORD(v66) = *(_DWORD *)((char *)&v59[2] + 1); /*0x1006f9c75*/
      *(_DWORD *)((char *)&v66 + 3) = HIDWORD(v59[2]); /*0x1006f9c7e*/
      if ( !v14
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v6 + 8) = 1; /*0x1006fa1dd*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x1006f9c9e*/
      v16 = v66; /*0x1006f9ca3*/
      __dst[7] = *(_DWORD *)((char *)&v66 + 3); /*0x1006f9ca9*/
      *(_DWORD *)((char *)__dst + 25) = v16; /*0x1006f9cae*/
      *((_QWORD *)__dst + 1) = v12; /*0x1006f9cb3*/
      *((_QWORD *)__dst + 2) = v13; /*0x1006f9cb8*/
      *((_BYTE *)__dst + 24) = v15; /*0x1006f9cbd*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006f9ccf*/
      goto LABEL_10; /*0x1006f9ccf*/
    }
  }
  v26 = v6 + 2; /*0x1006f9e08*/
  v27 = v71[21]; /*0x1006f9e10*/
  if ( v27 < 0 ) /*0x1006f9e1a*/
  {
    v28 = 0; /*0x1006f9e1c*/
    goto LABEL_26; /*0x1006f9e1c*/
  }
  v73 = v11; /*0x1006f9e2f*/
  v29 = (const void *)v71[20]; /*0x1006f9e32*/
  v70 = v10; /*0x1006f9e39*/
  v55 = v6; /*0x1006f9e3c*/
  if ( v27 ) /*0x1006f9e43*/
  {
    v72 = v29; /*0x1006f9e45*/
    v30 = v27; /*0x1006f9e49*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f9e4c*/
    v28 = 1; /*0x1006f9e51*/
    v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x1006f9e5f*/
    v27 = v30; /*0x1006f9e64*/
    if ( !v31 ) /*0x1006f9e6d*/
LABEL_26:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x1006f9e1f*/
    v29 = v72; /*0x1006f9e76*/
  }
  else
  {
    v31 = 1; /*0x1006f9e7c*/
  }
  v32 = v31; /*0x1006f9e81*/
  v33 = v27; /*0x1006f9e87*/
  memcpy((void *)v31, v29, v27); /*0x1006f9e8a*/
  __src[2] = v71[24]; /*0x1006f9e9a*/
  v34 = v71[22]; /*0x1006f9ea1*/
  __src[1] = v71[23]; /*0x1006f9eaf*/
  __src[0] = v34; /*0x1006f9eb6*/
  v35 = v26; /*0x1006f9ecb*/
  v72 = (const void *)v32; /*0x1006f9ece*/
  v36 = v32; /*0x1006f9ed2*/
  v37 = (_QWORD *)v33; /*0x1006f9ed5*/
  v38 = v33; /*0x1006f9ed8*/
  v39 = v70; /*0x1006f9edb*/
  v40 = v55; /*0x1006f9ede*/
  codexmate_lib::core::account_io::export_accounts::h907743e6877b5d6f(v59, v35, v36, v38, __src); /*0x1006f9ee5*/
  if ( LODWORD(v59[0]) != 11 ) /*0x1006f9ef1*/
  {
    qmemcpy(__src, v59, 0x60u); /*0x1006fa08a*/
    v60 = 0; /*0x1006fa08d*/
    v61 = 1; /*0x1006fa098*/
    v62 = 0; /*0x1006fa0a3*/
    v51[2] = 1610612768; /*0x1006fa0ae*/
    v51[0] = &v60; /*0x1006fa0c0*/
    v51[1] = &off_101969DD0; /*0x1006fa0ce*/
    v45 = v51; /*0x1006fa0d5*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fa0df*/
                            __src,
                            v51) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v56, &unk_101969E38, &off_101969E00); /*0x1006fa208*/
    v56 = v60; /*0x1006fa0fa*/
    v57 = v61; /*0x1006fa101*/
    v58 = v62; /*0x1006fa10f*/
    v46 = v59; /*0x1006fa116*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v59); /*0x1006fa11d*/
    v47 = v56; /*0x1006fa129*/
    v48 = v57; /*0x1006fa130*/
    v63 = v56; /*0x1006fa137*/
    v64 = v57; /*0x1006fa13b*/
    v65 = v58; /*0x1006fa13f*/
    *((_QWORD *)__dst + 3) = v58; /*0x1006fa143*/
    *((_QWORD *)__dst + 2) = v48; /*0x1006fa148*/
    *((_QWORD *)__dst + 1) = v47; /*0x1006fa14d*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006fa15f*/
    if ( v37 ) /*0x1006fa166*/
    {
      v46 = v72; /*0x1006fa16d*/
      v45 = v37; /*0x1006fa171*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v37, 1); /*0x1006fa174*/
    }
    if ( !v39 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006fa18e*/
    {
      LODWORD(v72) = 0; /*0x1006fa22d*/
      if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1006fa234*/
                               v46,
                               v45,
                               v48,
                               0x7FFFFFFFFFFFFFFFLL) )
        *((_BYTE *)v40 + 8) = 1; /*0x1006fa241*/
    }
    v49 = *v40; /*0x1006fa194*/
    LODWORD(v72) = 0; /*0x1006fa197*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v49); /*0x1006fa19e*/
LABEL_10:
    v17 = v71; /*0x1006f9cd3*/
    result = core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v71); /*0x1006f9cda*/
    v19 = v17[19]; /*0x1006f9cdf*/
    if ( v19 ) /*0x1006f9ce9*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[20], v19, 1); /*0x1006f9cf7*/
    if ( v73 ) /*0x1006f9d00*/
    {
      result = v17[22]; /*0x1006f9d06*/
      if ( result != 0x8000000000000000LL ) /*0x1006f9d1d*/
      {
        v20 = v17[24]; /*0x1006f9d23*/
        if ( v20 ) /*0x1006f9d2d*/
        {
          v21 = (_QWORD *)(v17[23] + 8LL); /*0x1006f9d36*/
          do /*0x1006f9d47*/
          {
            v22 = *(v21 - 1); /*0x1006f9d49*/
            if ( v22 ) /*0x1006f9d50*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v22, 1); /*0x1006f9d5a*/
            v21 += 3; /*0x1006f9d40*/
            --v20; /*0x1006f9d44*/
          }
          while ( v20 ); /*0x1006f9d47*/
          result = v17[22]; /*0x1006f9d61*/
        }
        if ( result ) /*0x1006f9d6b*/
        {
          v23 = v17[23]; /*0x1006f9d71*/
          v24 = 24 * result; /*0x1006f9d7c*/
          v25 = 8; /*0x1006f9d80*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v24, v25); /*0x1006fa05d*/
        }
      }
    }
    return result; /*0x1006f9d6b*/
  }
  v41 = v59[1]; /*0x1006f9ef7*/
  v66 = v59[5]; /*0x1006f9f21*/
  v67 = v59[6]; /*0x1006f9f2c*/
  v68 = v59[7]; /*0x1006f9f37*/
  v69 = v59[8]; /*0x1006f9f42*/
  v63 = v59[2]; /*0x1006f9f46*/
  v64 = v59[3]; /*0x1006f9f4a*/
  v65 = v59[4]; /*0x1006f9f4e*/
  v54 = v59[4]; /*0x1006f9f56*/
  v53 = v59[3]; /*0x1006f9f65*/
  v52 = v59[2]; /*0x1006f9f6c*/
  if ( v37 ) /*0x1006f9f76*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v37, 1); /*0x1006f9f84*/
  v59[0] = v41; /*0x1006f9f89*/
  v59[1] = v52; /*0x1006f9f9e*/
  v59[2] = v53; /*0x1006f9fa5*/
  v59[3] = v54; /*0x1006f9fb3*/
  v59[4] = v66; /*0x1006f9fc2*/
  v59[5] = v67; /*0x1006f9fc9*/
  v59[6] = v68; /*0x1006f9fd4*/
  v59[7] = v69; /*0x1006f9fdf*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8b2d11717eab909(__src, v59); /*0x1006f9ff4*/
  memcpy(__dst, __src, 0x90u); /*0x1006fa008*/
  if ( !(_BYTE)v70 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006fa024*/
  {
    LODWORD(v72) = 0; /*0x1006fa20f*/
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1006fa216*/
                             __dst,
                             __src,
                             v42,
                             0x7FFFFFFFFFFFFFFFLL) )
      *((_BYTE *)v40 + 8) = 1; /*0x1006fa223*/
  }
  v43 = *v40; /*0x1006fa02a*/
  LODWORD(v72) = 0; /*0x1006fa02d*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v43); /*0x1006fa034*/
  v44 = v71; /*0x1006fa039*/
  result = core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v71); /*0x1006fa040*/
  v24 = v44[19]; /*0x1006fa045*/
  if ( v24 ) /*0x1006fa04f*/
  {
    v23 = v44[20]; /*0x1006fa051*/
    v25 = 1; /*0x1006fa058*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v24, v25); /*0x1006fa058*/
  }
  return result; /*0x1006fa062*/
}