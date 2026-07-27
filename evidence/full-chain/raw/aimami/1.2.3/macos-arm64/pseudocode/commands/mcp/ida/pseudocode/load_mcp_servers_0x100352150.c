// __ZN13codexmate_lib8commands3mcp16load_mcp_servers @ 0x100352150 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::mcp::load_mcp_servers::hee1e8e8e9b82bbaa(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  char v10; // cl
  char v11; // r14
  int v12; // ecx
  int v13; // r13d
  __int64 (__fastcall **v14)(); // rcx
  __int64 v15; // r12
  int v16; // edx
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  _WORD *v24; // rax
  _WORD *v25; // r12
  _DWORD *v26; // rax
  _QWORD v28[12]; // [rsp+30h] [rbp-160h] BYREF
  __int64 *v29; // [rsp+90h] [rbp-100h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+98h] [rbp-F8h]
  __int64 v31; // [rsp+A0h] [rbp-F0h]
  __int64 v32; // [rsp+A8h] [rbp-E8h]
  __int64 v33; // [rsp+B0h] [rbp-E0h]
  __int64 v34; // [rsp+B8h] [rbp-D8h]
  __int64 v35; // [rsp+C0h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-C8h]
  __int64 v37; // [rsp+D0h] [rbp-C0h]
  __int64 v38; // [rsp+D8h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-B0h]
  __int64 v40; // [rsp+E8h] [rbp-A8h]
  __int64 v41; // [rsp+F0h] [rbp-A0h]
  _QWORD v42[12]; // [rsp+F8h] [rbp-98h] BYREF
  __int64 v43; // [rsp+158h] [rbp-38h]
  _DWORD v44[12]; // [rsp+160h] [rbp-30h]

  v4 = *a2; /*0x10035216a*/
  if ( !*a2 ) /*0x10035216a*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x10035229a*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x100352176*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100352186*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x1003522aa*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1003522b8*/
      goto LABEL_5; /*0x1003522be*/
LABEL_10:
    codexmate_lib::core::mcp::load_mcp_servers::h201cbab0198c4973(v42, a2[9], a2[10]); /*0x1003522c4*/
    if ( LODWORD(v42[0]) != 11 ) /*0x1003522e2*/
    {
      qmemcpy(v28, v42, sizeof(v28)); /*0x1003523fd*/
      v35 = 0; /*0x100352400*/
      v36 = 1; /*0x10035240b*/
      v37 = 0; /*0x100352416*/
      v31 = 1610612768; /*0x100352421*/
      v29 = &v35; /*0x100352433*/
      v30 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100352441*/
      v19 = (__int64)&v29; /*0x100352448*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100352452*/
                              v28,
                              &v29) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100352736*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          &v38,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v38 = v35; /*0x10035246d*/
      v39 = v36; /*0x100352474*/
      v40 = v37; /*0x100352482*/
      v20 = (__int64)v42; /*0x100352489*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v42); /*0x100352490*/
      v21 = v38; /*0x10035249c*/
      v22 = v39; /*0x1003524a3*/
      *(_QWORD *)(a1 + 24) = v40; /*0x1003524bf*/
      *(_QWORD *)(a1 + 16) = v22; /*0x1003524c3*/
      *(_QWORD *)(a1 + 8) = v21; /*0x1003524c7*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003524cf*/
      if ( v7 ) /*0x1003524d5*/
        goto LABEL_26; /*0x1003524d5*/
LABEL_25:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10035273d*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v19, v22, v21) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x10035274a*/
      }
LABEL_26:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10035268f*/
      return a1; /*0x100352692*/
    }
    v13 = v42[3]; /*0x1003522e8*/
    v32 = v42[1]; /*0x1003522fa*/
    v33 = v42[2]; /*0x100352301*/
    v34 = v42[3]; /*0x100352308*/
    v14 = (__int64 (__fastcall **)())a2[10]; /*0x100352313*/
    v29 = (__int64 *)a2[9]; /*0x100352317*/
    v30 = v14; /*0x10035231e*/
    v42[0] = 0; /*0x100352325*/
    v42[1] = 1; /*0x100352330*/
    v42[2] = 0; /*0x10035233b*/
    v28[2] = 1610612768; /*0x100352346*/
    v28[0] = v42; /*0x100352351*/
    v28[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10035235f*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v29, v28) ) /*0x100352374*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035270e*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        &v38,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v43 = v42[0]; /*0x100352388*/
    v41 = v42[1]; /*0x100352393*/
    v15 = v42[2]; /*0x10035239a*/
    v42[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(&v29, v28); /*0x1003523a6*/
    LODWORD(v42[1]) = v16; /*0x1003523ad*/
    v17 = v42; /*0x1003523ba*/
    std::time::SystemTime::duration_since::had059553cab94f96(v28, v42, 0, 0); /*0x1003523c5*/
    if ( LOBYTE(v28[0]) ) /*0x1003523d5*/
      v18 = 0; /*0x1003524e0*/
    else
      v18 = v28[1]; /*0x1003523db*/
    v42[0] = v32; /*0x1003524f0*/
    v42[1] = v33; /*0x1003524f7*/
    v42[2] = v34; /*0x100352505*/
    LODWORD(v42[7]) = v13; /*0x10035250c*/
    v42[3] = v43; /*0x100352514*/
    v42[4] = v41; /*0x10035251f*/
    v42[5] = v15; /*0x100352523*/
    v42[6] = v18; /*0x100352527*/
    v23 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2 + 2); /*0x10035252b*/
    if ( v23 ) /*0x10035253d*/
    {
      v28[0] = 2; /*0x10035253f*/
      v28[1] = v23; /*0x10035254a*/
    }
    else
    {
      v17 = (_QWORD *)a2[60]; /*0x100352553*/
      codexmate_lib::core::bootstrap_cache::update::h50213464ac459fea(v28, v17, a2[61], (__int64)v42); /*0x10035256f*/
      if ( v28[0] == 11 ) /*0x10035257c*/
        goto LABEL_22; /*0x10035257c*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v28); /*0x100352585*/
LABEL_22:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v17); /*0x10035258a*/
    v24 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100352599*/
    if ( !v24 ) /*0x1003525a1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10035275d*/
    v25 = v24; /*0x1003525a7*/
    *v24 = 27503; /*0x1003525aa*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003525af*/
    v20 = 7; /*0x1003525b4*/
    v19 = 1; /*0x1003525b9*/
    v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003525be*/
    if ( !v26 ) /*0x1003525c6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10035276e*/
    *(_DWORD *)((char *)v26 + 3) = 1936942435; /*0x1003525cc*/
    *v26 = 1667462483; /*0x1003525d3*/
    *(_QWORD *)(a1 + 128) = v42[7]; /*0x1003525dd*/
    *(_QWORD *)(a1 + 120) = v42[6]; /*0x1003525e8*/
    *(_QWORD *)(a1 + 112) = v42[5]; /*0x1003525f0*/
    *(_QWORD *)(a1 + 104) = v42[4]; /*0x1003525f8*/
    *(_QWORD *)(a1 + 96) = v42[3]; /*0x100352600*/
    *(_QWORD *)(a1 + 88) = v42[2]; /*0x10035260b*/
    v21 = v42[0]; /*0x10035260f*/
    v22 = v42[1]; /*0x100352616*/
    *(_QWORD *)(a1 + 80) = v42[1]; /*0x10035261d*/
    *(_QWORD *)(a1 + 72) = v21; /*0x100352621*/
    *(_QWORD *)a1 = 2; /*0x100352625*/
    *(_QWORD *)(a1 + 8) = v25; /*0x10035262c*/
    *(_QWORD *)(a1 + 16) = 2; /*0x100352630*/
    *(_QWORD *)(a1 + 24) = 7; /*0x100352638*/
    *(_QWORD *)(a1 + 32) = v26; /*0x100352640*/
    *(_QWORD *)(a1 + 40) = 7; /*0x100352644*/
    *(_QWORD *)(a1 + 48) = 0; /*0x10035264c*/
    *(_QWORD *)(a1 + 56) = 8; /*0x100352654*/
    *(_QWORD *)(a1 + 64) = 0; /*0x10035265c*/
    *(_DWORD *)(a1 + 136) = 1; /*0x100352664*/
    *(_BYTE *)(a1 + 140) = 1; /*0x10035266f*/
    if ( v7 ) /*0x10035267a*/
      goto LABEL_26; /*0x10035267a*/
    goto LABEL_25; /*0x10035267a*/
  }
  v7 = 0; /*0x100352192*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x1003521a5*/
    goto LABEL_10; /*0x1003521a5*/
LABEL_5:
  v42[0] = 0; /*0x1003521ab*/
  v42[1] = 1; /*0x1003521b6*/
  v42[2] = 0; /*0x1003521c1*/
  v28[2] = 1610612768; /*0x1003521cc*/
  v28[0] = v42; /*0x1003521de*/
  v28[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003521ec*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v28) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003526cd*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      &v38,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v8 = v42[0]; /*0x100352216*/
  v9 = v42[1]; /*0x10035221d*/
  v10 = v7; /*0x100352224*/
  v11 = v42[2]; /*0x100352227*/
  v44[0] = *(_DWORD *)((char *)&v42[2] + 1); /*0x100352235*/
  *(_DWORD *)((char *)v44 + 3) = HIDWORD(v42[2]); /*0x10035223e*/
  if ( !v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1003526e4*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10035225e*/
  *(_QWORD *)(a1 + 8) = v8; /*0x100352263*/
  *(_QWORD *)(a1 + 16) = v9; /*0x100352267*/
  *(_BYTE *)(a1 + 24) = v11; /*0x10035226b*/
  v12 = *(_DWORD *)((char *)v44 + 3); /*0x100352272*/
  *(_DWORD *)(a1 + 25) = v44[0]; /*0x100352275*/
  *(_DWORD *)(a1 + 28) = v12; /*0x100352279*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10035228a*/
  return a1; /*0x10035269a*/
}