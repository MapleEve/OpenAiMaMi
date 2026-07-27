// __ZN13codexmate_lib8commands3mcp17remove_mcp_server @ 0x100352890 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::mcp::remove_mcp_server::h2ddf18b927ea0cad(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r12d
  __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 *v16; // r14
  char v17; // cl
  char v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r14
  char v24; // r15
  int v25; // eax
  void *v26; // r14
  size_t v27; // r12
  __int64 *v28; // rdx
  __int64 *v29; // rbx
  __int64 v30; // rcx
  _WORD *v31; // rax
  _WORD *v32; // r14
  __int64 v33; // rsi
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  char *v37; // rbx
  __int64 *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v43; // rdi
  __int64 v44; // rdx
  _QWORD v45[12]; // [rsp+38h] [rbp-178h] BYREF
  __int64 *v46; // [rsp+98h] [rbp-118h]
  __int64 *v47; // [rsp+A0h] [rbp-110h]
  __int64 *v48; // [rsp+A8h] [rbp-108h]
  __int64 *v49[12]; // [rsp+B0h] [rbp-100h] BYREF
  __int64 *v50; // [rsp+110h] [rbp-A0h]
  __int64 v51; // [rsp+118h] [rbp-98h] BYREF
  __int64 v52; // [rsp+120h] [rbp-90h]
  __int64 v53; // [rsp+128h] [rbp-88h]
  __int64 *v54; // [rsp+130h] [rbp-80h]
  int v55; // [rsp+13Ch] [rbp-74h]
  __int64 *v56; // [rsp+148h] [rbp-68h] BYREF
  __int64 v57; // [rsp+150h] [rbp-60h]
  __int64 v58; // [rsp+158h] [rbp-58h]
  __int64 v59; // [rsp+160h] [rbp-50h]
  __int64 v60; // [rsp+168h] [rbp-48h] BYREF
  __int64 v61; // [rsp+170h] [rbp-40h]
  __int64 v62; // [rsp+178h] [rbp-38h]
  char v63; // [rsp+187h] [rbp-29h]

  v54 = a4; /*0x1003528a4*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x1003528ca*/
    v49,
    a3,
    "removing an MCP serverupdating an MCP serverchanging an MCP server",
    22);
  if ( LODWORD(v49[0]) != 11 ) /*0x1003528d6*/
  {
    qmemcpy(v45, v49, sizeof(v45)); /*0x100352a2f*/
    v60 = 0; /*0x100352a32*/
    v61 = 1; /*0x100352a3a*/
    v62 = 0; /*0x100352a42*/
    v58 = 1610612768; /*0x100352a4a*/
    v56 = &v60; /*0x100352a56*/
    v57 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100352a61*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100352a6c*/
                            v45,
                            &v56) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100352b0c*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v51,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v22 = v60; /*0x100352a75*/
    v23 = v61; /*0x100352a79*/
    v24 = v62; /*0x100352a7d*/
    LODWORD(v51) = *(_DWORD *)((char *)&v62 + 1); /*0x100352a85*/
    *(_DWORD *)((char *)&v51 + 3) = HIDWORD(v62); /*0x100352a8e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v49); /*0x100352a9b*/
    v25 = v51; /*0x100352aa0*/
    *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v51 + 3); /*0x100352aac*/
    *(_DWORD *)(a1 + 25) = v25; /*0x100352ab0*/
    *(_QWORD *)(a1 + 8) = v22; /*0x100352ab4*/
    *(_QWORD *)(a1 + 16) = v23; /*0x100352ab8*/
    *(_BYTE *)(a1 + 24) = v24; /*0x100352abc*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100352acd*/
    goto LABEL_32; /*0x100352ad1*/
  }
  v50 = v49[1]; /*0x1003528e3*/
  LODWORD(v7) = LOBYTE(v49[2]); /*0x1003528ea*/
  v63 = (char)v49[2]; /*0x1003528f1*/
  v8 = *a2; /*0x1003528f4*/
  if ( !*a2 ) /*0x1003528f4*/
  {
    LOBYTE(v7) = 1; /*0x100352ad6*/
    LODWORD(v59) = v7; /*0x100352ad8*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x100352ade*/
    v8 = v7; /*0x100352ae3*/
  }
  LOBYTE(v7) = 1; /*0x100352900*/
  LODWORD(v59) = v7; /*0x100352902*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8); /*0x100352905*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a3, v9, v10); /*0x100352b1b*/
    LOBYTE(v11) = v11 ^ 1; /*0x100352b1e*/
    v12 = v54; /*0x100352b29*/
    if ( *((_BYTE *)a2 + 8) ) /*0x100352b22*/
      goto LABEL_6; /*0x100352b2d*/
  }
  else
  {
    v11 = 0; /*0x100352920*/
    v12 = v54; /*0x10035292a*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_6:
      v49[0] = nullptr; /*0x100352934*/
      v49[1] = (__int64 *)1; /*0x10035293f*/
      v49[2] = nullptr; /*0x10035294a*/
      v45[2] = 1610612768; /*0x100352955*/
      v45[0] = v49; /*0x100352960*/
      v45[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10035296e*/
      v13 = 41; /*0x100352983*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v45) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035303b*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          &v51,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v15 = v49[0]; /*0x100352995*/
      v16 = v49[1]; /*0x10035299c*/
      v17 = v11; /*0x1003529a3*/
      v18 = (char)v49[2]; /*0x1003529a6*/
      LODWORD(v56) = *(_DWORD *)((char *)&v49[2] + 1); /*0x1003529b4*/
      *(_DWORD *)((char *)&v56 + 3) = HIDWORD(v49[2]); /*0x1003529bd*/
      if ( !v17
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v14,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x10035306f*/
      }
      v19 = *a2; /*0x1003529e1*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1003529e4*/
      v21 = (int)v56; /*0x1003529e9*/
      *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v56 + 3); /*0x1003529ef*/
      *(_DWORD *)(a1 + 25) = v21; /*0x1003529f3*/
      *(_QWORD *)(a1 + 8) = v15; /*0x1003529f7*/
      *(_QWORD *)(a1 + 16) = v16; /*0x1003529fb*/
      *(_BYTE *)(a1 + 24) = v18; /*0x1003529ff*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100352a10*/
LABEL_29:
      if ( !v63 /*0x100353045*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v19,
                               v13,
                               v20,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v50 + 8) = 1; /*0x100353059*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v50); /*0x100352f5d*/
LABEL_32:
      if ( *v54 ) /*0x100352f66*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54[1], *v54, 1); /*0x100352f77*/
      return a1; /*0x100352f77*/
    }
  }
  v55 = v11; /*0x100352b33*/
  v26 = (void *)v12[1]; /*0x100352b3f*/
  v27 = v12[2]; /*0x100352b43*/
  codexmate_lib::core::mcp::remove_mcp_server::hbc5dae6688e33fdc(v49, (void *)a2[9], a2[10], v26, v27); /*0x100352b54*/
  if ( LODWORD(v49[0]) != 11 ) /*0x100352b60*/
  {
    qmemcpy(v45, v49, sizeof(v45)); /*0x100352d94*/
    v60 = 0; /*0x100352d97*/
    v61 = 1; /*0x100352d9f*/
    v62 = 0; /*0x100352da7*/
    v58 = 1610612768; /*0x100352daf*/
    v56 = &v60; /*0x100352dbb*/
    v57 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100352dc6*/
    v13 = (__int64)&v56; /*0x100352dca*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100352dd1*/
                            v45,
                            &v56) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035309a*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v51,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v51 = v60; /*0x100352de6*/
    v52 = v61; /*0x100352ded*/
    v53 = v62; /*0x100352df8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v49); /*0x100352e06*/
    *(_QWORD *)(a1 + 24) = v53; /*0x100352e12*/
    v40 = v51; /*0x100352e16*/
    *(_QWORD *)(a1 + 16) = v52; /*0x100352e24*/
    *(_QWORD *)(a1 + 8) = v40; /*0x100352e28*/
    goto LABEL_26; /*0x100352e2c*/
  }
  codexmate_lib::core::mcp::load_mcp_servers::h201cbab0198c4973(v49, a2[9], a2[10]); /*0x100352b75*/
  if ( LODWORD(v49[0]) != 11 ) /*0x100352b81*/
  {
    qmemcpy(v45, v49, sizeof(v45)); /*0x100352e47*/
    v60 = 0; /*0x100352e4a*/
    v61 = 1; /*0x100352e52*/
    v62 = 0; /*0x100352e5a*/
    v58 = 1610612768; /*0x100352e62*/
    v56 = &v60; /*0x100352e6e*/
    v57 = (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100352e79*/
    v13 = (__int64)&v56; /*0x100352e7d*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100352e84*/
                            v45,
                            &v56) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100353107*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v51,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v51 = v60; /*0x100352e99*/
    v52 = v61; /*0x100352ea0*/
    v53 = v62; /*0x100352eab*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v49); /*0x100352eb9*/
    v41 = v51; /*0x100352ec5*/
    v39 = v52; /*0x100352ecc*/
    *(_QWORD *)(a1 + 24) = v53; /*0x100352ee8*/
    *(_QWORD *)(a1 + 16) = v39; /*0x100352eec*/
    *(_QWORD *)(a1 + 8) = v41; /*0x100352ef0*/
LABEL_26:
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100352ef4*/
    if ( !(_BYTE)v55 /*0x1003530a4*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v49,
                             &v56,
                             v39,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1003530b1*/
    }
    v19 = *a2; /*0x100352f28*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100352f2b*/
    goto LABEL_29; /*0x100352f2b*/
  }
  v28 = v12; /*0x100352b87*/
  v29 = v49[3]; /*0x100352b8a*/
  v46 = v49[1]; /*0x100352b9f*/
  v47 = v49[2]; /*0x100352ba6*/
  v48 = v49[3]; /*0x100352bad*/
  v59 = *v28; /*0x100352bb7*/
  v30 = a2[10]; /*0x100352bbf*/
  v60 = a2[9]; /*0x100352bc3*/
  v61 = v30; /*0x100352bc7*/
  v56 = nullptr; /*0x100352bcb*/
  v57 = 1; /*0x100352bd3*/
  v58 = 0; /*0x100352bdb*/
  v49[2] = (__int64 *)1610612768; /*0x100352be3*/
  v49[0] = (__int64 *)&v56; /*0x100352bf2*/
  v49[1] = (__int64 *)&anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100352c00*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v60, v49) ) /*0x100352c12*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003530dc*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      &v51,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v45[3] = v56; /*0x100352c27*/
  v45[4] = v57; /*0x100352c2e*/
  v45[5] = v58; /*0x100352c39*/
  v45[0] = v59; /*0x100352c44*/
  v45[1] = v26; /*0x100352c4b*/
  v45[2] = v27; /*0x100352c52*/
  LODWORD(v45[6]) = (_DWORD)v29; /*0x100352c59*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v60, v49); /*0x100352c5f*/
  v31 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100352c6e*/
  if ( !v31 ) /*0x100352c76*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100353153*/
  v32 = v31; /*0x100352c7c*/
  *v31 = 27503; /*0x100352c7f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100352c84*/
  v33 = 1; /*0x100352c8e*/
  v34 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100352c93*/
  if ( !v34 ) /*0x100352c9b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100353164*/
  *(_DWORD *)((char *)v34 + 3) = 1936942435; /*0x100352ca1*/
  *v34 = 1667462483; /*0x100352ca8*/
  *(_QWORD *)(a1 + 120) = v45[6]; /*0x100352cb5*/
  *(_QWORD *)(a1 + 112) = v45[5]; /*0x100352cc0*/
  *(_QWORD *)(a1 + 104) = v45[4]; /*0x100352ccb*/
  *(_QWORD *)(a1 + 96) = v45[3]; /*0x100352cd6*/
  *(_QWORD *)(a1 + 88) = v45[2]; /*0x100352ce1*/
  v35 = v45[0]; /*0x100352ce5*/
  v36 = v45[1]; /*0x100352cec*/
  *(_QWORD *)(a1 + 80) = v45[1]; /*0x100352cf3*/
  *(_QWORD *)(a1 + 72) = v35; /*0x100352cf7*/
  *(_QWORD *)a1 = 2; /*0x100352cfb*/
  *(_QWORD *)(a1 + 8) = v32; /*0x100352d03*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100352d07*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100352d0f*/
  *(_QWORD *)(a1 + 32) = v34; /*0x100352d17*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100352d1b*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100352d23*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100352d2b*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100352d33*/
  *(_DWORD *)(a1 + 128) = 1; /*0x100352d3b*/
  *(_BYTE *)(a1 + 132) = 1; /*0x100352d46*/
  v37 = (char *)v29 + 1; /*0x100352d55*/
  v38 = v47; /*0x100352d58*/
  while ( v37 != (char *)1 ) /*0x100352d64*/
  {
    --v37; /*0x100352d71*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(); /*0x100352d74*/
    v38 += 28; /*0x100352d79*/
  }
  if ( v46 ) /*0x100352f9b*/
  {
    v33 = 224LL * (_QWORD)v46; /*0x100352f9d*/
    v38 = v47; /*0x100352fa9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 224LL * (_QWORD)v46, 8); /*0x100352fac*/
  }
  if ( !(_BYTE)v55 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100352fce*/
  {
    LODWORD(v59) = 0; /*0x10035310e*/
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100353115*/
                             v38,
                             v33,
                             v36,
                             0x7FFFFFFFFFFFFFFFLL) )
      *((_BYTE *)a2 + 8) = 1; /*0x100353122*/
  }
  v43 = *a2; /*0x100352fd4*/
  LODWORD(v59) = 0; /*0x100352fd7*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v43); /*0x100352fde*/
  if ( !v63 /*0x10035312c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v43,
                           v33,
                           v44,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v50 + 8) = 1; /*0x100353140*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v50); /*0x100353010*/
  return a1; /*0x100352f7f*/
}