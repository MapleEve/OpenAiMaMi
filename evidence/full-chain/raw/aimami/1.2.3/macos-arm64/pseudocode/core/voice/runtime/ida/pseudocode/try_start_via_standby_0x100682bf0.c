// __ZN13codexmate_lib4core5voice7runtime21try_start_via_standby @ 0x100682bf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::try_start_via_standby::h3d631c6e535767e9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r15
  char v11; // r12
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  double v16; // xmm0_8
  __int64 v17; // rdi
  __int64 v18; // rdx
  char v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+10h] [rbp-E0h]
  __int64 v30; // [rsp+18h] [rbp-D8h]
  _QWORD v31[3]; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v32[6]; // [rsp+38h] [rbp-B8h] BYREF
  _QWORD v33[2]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v34; // [rsp+78h] [rbp-78h] BYREF
  __int64 v35; // [rsp+80h] [rbp-70h]
  __int64 v36; // [rsp+88h] [rbp-68h] BYREF
  __int64 v37; // [rsp+90h] [rbp-60h]
  __int64 v38; // [rsp+98h] [rbp-58h]
  _QWORD *v39; // [rsp+A0h] [rbp-50h]
  __int64 v40; // [rsp+A8h] [rbp-48h]
  __int64 v41; // [rsp+B0h] [rbp-40h]
  volatile signed __int64 *v42[7]; // [rsp+B8h] [rbp-38h] BYREF

  v33[0] = a2; /*0x100682c04*/
  v33[1] = a3; /*0x100682c0b*/
  v34 = a4; /*0x100682c0f*/
  v4 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x100682c13*/
  v5 = v4; /*0x100682c18*/
  v6 = (_QWORD *)(v4 + 32); /*0x100682c1b*/
  v7 = *(_QWORD *)(v4 + 32); /*0x100682c1f*/
  if ( !v7 ) /*0x100682c26*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 32); /*0x100682c8e*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x100682c28*/
  v10 = &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6; /*0x100682c2d*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100682c37*/
  {
    v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9) ^ 1; /*0x100682c9b*/
    if ( *(_BYTE *)(v5 + 40) ) /*0x100682ca9*/
    {
LABEL_5:
      if ( !v11 /*0x100682dac*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v7,
                               a2,
                               v8,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v5 + 40) = 1; /*0x100682db9*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100682c69*/
LABEL_8:
      LODWORD(v10) = 0; /*0x100682c6e*/
      return (unsigned int)v10; /*0x100682c6e*/
    }
  }
  else
  {
    v11 = 0; /*0x100682c3f*/
    if ( *(_BYTE *)(v5 + 40) ) /*0x100682c4c*/
      goto LABEL_5; /*0x100682c53*/
  }
  if ( (*(_BYTE *)(v5 + 768) & 1) != 0 ) /*0x100682cba*/
  {
    if ( _InterlockedIncrement64(*(volatile signed __int64 **)(v5 + 760)) <= 0 ) /*0x100682ccc*/
      BUG(); /*0x100683014*/
    v13 = *(_QWORD *)(v5 + 760); /*0x100682cd2*/
  }
  else
  {
    v13 = 0; /*0x100682cbc*/
  }
  v32[0] = v13; /*0x100682cd9*/
  v14 = *(_QWORD *)(v5 + 264); /*0x100682ce0*/
  v16 = codexmate_lib::core::voice::runtime::sidecar_locale_arg::h9d4a6b0e5224fa76(v31, v14, *(_QWORD *)(v5 + 272)); /*0x100682cf5*/
  if ( !v11 /*0x100682fb8*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v31,
                           v14,
                           v15,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v5 + 40) = 1; /*0x100682fc5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100682d1b*/
  v38 = v31[2]; /*0x100682d27*/
  v37 = v31[1]; /*0x100682d39*/
  v36 = v31[0]; /*0x100682d3d*/
  LOBYTE(v10) = v13 != 0; /*0x100682d44*/
  if ( v13 ) /*0x100682d48*/
  {
    v42[0] = (volatile signed __int64 *)v13; /*0x100682d4e*/
    v17 = *(_QWORD *)(v13 + 16); /*0x100682d56*/
    if ( !v17 ) /*0x100682d5d*/
      v17 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v13 + 16); /*0x100682dcb*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v17); /*0x100682d5f*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100682d75*/
    {
      v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v17, v14, v18, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x100682dd8*/
      if ( *(_BYTE *)(v13 + 24) ) /*0x100682ddc*/
      {
LABEL_22:
        if ( !v19 /*0x100682fcf*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v17,
                                 v14,
                                 v18,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v13 + 24) = 1; /*0x100682fdc*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v13 + 16)); /*0x100682da2*/
LABEL_40:
        if ( !_InterlockedDecrement64(v42[0]) ) /*0x100682f18*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v42); /*0x100682f22*/
        if ( v36 ) /*0x100682f2e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x100682f3d*/
        goto LABEL_8; /*0x100682f42*/
      }
    }
    else
    {
      v19 = 0; /*0x100682d77*/
      if ( *(_BYTE *)(v13 + 24) ) /*0x100682d7a*/
        goto LABEL_22; /*0x100682d81*/
    }
    v39 = (_QWORD *)(v13 + 16); /*0x100682de5*/
    v32[0] = &v34; /*0x100682ded*/
    v32[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100682dfb*/
    v32[2] = &v36; /*0x100682e06*/
    v32[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100682e14*/
    v32[4] = v33; /*0x100682e22*/
    v32[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100682e30*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v28, &unk_1017C2F5C, v32); /*0x100682e4c*/
    v41 = v28; /*0x100682e58*/
    v20 = v29; /*0x100682e5c*/
    v21 = v13 + 28; /*0x100682e6a*/
    v22 = std::io::Write::write_all::h3ce78d18b5b98128(v13 + 28, v29, v30); /*0x100682e71*/
    if ( v22 ) /*0x100682e79*/
    {
      if ( (v22 & 3) == 1 ) /*0x100682e87*/
      {
        v35 = v22 - 1; /*0x100682e8f*/
        v40 = *(_QWORD *)(v22 - 1); /*0x100682e97*/
        v24 = *(_QWORD *)(v22 + 7); /*0x100682e9b*/
        if ( *(_QWORD *)v24 ) /*0x100682e9f*/
          (*(void (__fastcall **)(__int64, double))v24)(v40, v16); /*0x100682eab*/
        v25 = *(_QWORD *)(v24 + 8); /*0x100682eb1*/
        if ( v25 ) /*0x100682eb8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v25, *(_QWORD *)(v24 + 16)); /*0x100682ebe*/
        v21 = v35; /*0x100682ecd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24, 8); /*0x100682ed1*/
      }
      v26 = v41; /*0x100682ed6*/
      if ( v41 ) /*0x100682edd*/
      {
        v21 = v20; /*0x100682ee4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v41, 1); /*0x100682ee7*/
      }
      if ( !v19 /*0x100682fe6*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v21,
                               v26,
                               v23,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v13 + 24) = 1; /*0x100682ff3*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v39); /*0x100682f0f*/
      goto LABEL_40; /*0x100682f0f*/
    }
    v27 = v41; /*0x100682f47*/
    if ( v41 ) /*0x100682f4e*/
    {
      v21 = v20; /*0x100682f55*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v41, 1); /*0x100682f58*/
    }
    if ( !v19 /*0x100682ffd*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v21,
                             v27,
                             v23,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v13 + 24) = 1; /*0x10068300a*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v39); /*0x100682f80*/
    if ( !_InterlockedDecrement64(v42[0]) ) /*0x100682f89*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v42); /*0x100682f93*/
  }
  if ( v36 ) /*0x100682f9f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x100682fae*/
  return (unsigned int)v10; /*0x100682c74*/
}