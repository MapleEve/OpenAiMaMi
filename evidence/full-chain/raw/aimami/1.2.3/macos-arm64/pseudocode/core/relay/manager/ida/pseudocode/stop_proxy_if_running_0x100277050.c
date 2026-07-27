// __ZN13codexmate_lib4core5relay7manager12RelayManager21stop_proxy_if_running @ 0x100277050
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::stop_proxy_if_running::hc1aaf5623ac85e67(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r12
  char v9; // al
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdx
  _BYTE *v18; // r12
  __int64 result; // rax
  volatile signed __int64 *v20; // rbx
  volatile signed __int64 *v21; // rax
  __int16 v22; // r15
  __int64 v23; // rdi
  char v24; // r14
  _QWORD *v25; // r13
  char v26; // bl
  void *v27; // rax
  signed __int64 v28; // rt0
  char v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // r14
  _QWORD v33[12]; // [rsp+0h] [rbp-2A0h] BYREF
  volatile signed __int64 *v34[12]; // [rsp+60h] [rbp-240h] BYREF
  unsigned __int64 v35; // [rsp+C0h] [rbp-1E0h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-1D8h]
  __int64 v37; // [rsp+D0h] [rbp-1D0h]
  __int64 v38; // [rsp+D8h] [rbp-1C8h]
  char *v39; // [rsp+E0h] [rbp-1C0h]
  __int64 v40; // [rsp+E8h] [rbp-1B8h]
  __int64 v41; // [rsp+F0h] [rbp-1B0h]
  char *v42; // [rsp+F8h] [rbp-1A8h]
  __int64 v43; // [rsp+100h] [rbp-1A0h]
  __int64 v44; // [rsp+108h] [rbp-198h]
  void *v45; // [rsp+110h] [rbp-190h]
  _QWORD *v46; // [rsp+118h] [rbp-188h]
  char v47; // [rsp+150h] [rbp-150h]
  __int64 v48; // [rsp+1E8h] [rbp-B8h] BYREF
  char *v49; // [rsp+1F0h] [rbp-B0h]
  __int64 v50; // [rsp+1F8h] [rbp-A8h]
  __int64 v51; // [rsp+200h] [rbp-A0h]
  char *v52; // [rsp+208h] [rbp-98h]
  __int64 v53; // [rsp+210h] [rbp-90h]
  __int64 v54; // [rsp+218h] [rbp-88h]
  char *v55; // [rsp+220h] [rbp-80h]
  __int64 v56; // [rsp+228h] [rbp-78h]
  __int64 v57; // [rsp+230h] [rbp-70h]
  void *v58; // [rsp+238h] [rbp-68h]
  __int16 **v59; // [rsp+240h] [rbp-60h]
  __int16 *v60; // [rsp+248h] [rbp-58h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+250h] [rbp-50h]
  volatile signed __int64 *v62; // [rsp+258h] [rbp-48h] BYREF
  volatile signed __int64 *v63; // [rsp+260h] [rbp-40h]
  _QWORD *v64; // [rsp+268h] [rbp-38h]
  __int16 v65; // [rsp+274h] [rbp-2Ch] BYREF
  __int16 v66; // [rsp+276h] [rbp-2Ah] BYREF

  v2 = a1; /*0x100277064*/
  v3 = a1[3]; /*0x100277067*/
  v4 = (_QWORD *)(v3 + 16); /*0x10027706b*/
  v5 = *(_QWORD *)(v3 + 16); /*0x10027706f*/
  if ( !v5 ) /*0x100277076*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 16); /*0x1002776d3*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x10027707c*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10027708b*/
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x1002776e3*/
  else
    v8 = 0; /*0x100277097*/
  v9 = *(_BYTE *)(v3 + 24); /*0x10027709a*/
  v36 = v3 + 16; /*0x1002770a6*/
  LOBYTE(v37) = v8; /*0x1002770ad*/
  v35 = v9 != 0; /*0x1002770b4*/
  if ( v9 ) /*0x1002770bb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, a2); /*0x1002770c1*/
    a2 = 1; /*0x1002770cb*/
    v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x1002770d0*/
    if ( !v10 ) /*0x1002770d8*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100277a83*/
    v12 = (__int64)v10; /*0x1002770de*/
    qmemcpy(v10, "relay proxy state lock is poisoned", 34); /*0x100277115*/
    if ( !v8 /*0x100277946*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             34,
                             1,
                             v11,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v3 + 24) = 1; /*0x100277953*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100277144*/
    v13 = 34; /*0x100277149*/
    v14 = 34; /*0x10027714f*/
    goto LABEL_10; /*0x10027714f*/
  }
  v64 = v2; /*0x1002772c2*/
  v20 = *(volatile signed __int64 **)(v3 + 32); /*0x1002772c6*/
  v21 = *(volatile signed __int64 **)(v3 + 40); /*0x1002772ca*/
  v63 = *(volatile signed __int64 **)(v3 + 48); /*0x1002772d2*/
  v62 = v21; /*0x1002772d6*/
  *(_QWORD *)(v3 + 32) = 0; /*0x1002772da*/
  if ( !v8 /*0x10027795d*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           a2,
                           v6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v3 + 24) = 1; /*0x10027796a*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100277307*/
  if ( !v20 ) /*0x10027730f*/
  {
LABEL_33:
    v2 = v64; /*0x1002775ad*/
    v15 = v64[1]; /*0x1002775b1*/
    v16 = *(_QWORD *)(v15 + 16); /*0x1002775b5*/
    if ( v16 ) /*0x1002775bc*/
      goto LABEL_13; /*0x1002775bc*/
    goto LABEL_34; /*0x1002775bc*/
  }
  v34[0] = v20; /*0x100277315*/
  v22 = (__int16)v63; /*0x100277327*/
  v34[1] = v62; /*0x10027732b*/
  v34[2] = v63; /*0x100277332*/
  v66 = (__int16)v63; /*0x100277339*/
  v23 = v64[7]; /*0x100277342*/
  if ( !v23 ) /*0x100277349*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0, a2); /*0x10027762d*/
    v13 = 34; /*0x100277632*/
    a2 = 1; /*0x10027763d*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100277642*/
    if ( !v27 ) /*0x10027764a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100277a94*/
    v12 = (__int64)v27; /*0x100277650*/
    qmemcpy(v27, "relay proxy runtime is unavailable", 34); /*0x100277687*/
    v14 = 34; /*0x100277691*/
    if ( _InterlockedDecrement64(v20) ) /*0x100277697*/
      goto LABEL_44; /*0x10027769b*/
    goto LABEL_43; /*0x10027769b*/
  }
  v35 = (unsigned __int64)v34; /*0x10027735a*/
  v47 = 0; /*0x100277361*/
  tokio::runtime::runtime::Runtime::block_on::h96911ce5432ea306((_DWORD *)(v23 + 16), &v35, (__int64)&off_10195DBD0); /*0x100277376*/
  v65 = v22; /*0x10027737b*/
  *(_DWORD *)((char *)&v48 + 2) = 16777343; /*0x100277380*/
  HIWORD(v48) = v22; /*0x10027738a*/
  LOWORD(v48) = 0; /*0x100277392*/
  a2 = (__int64)&v48; /*0x1002773a2*/
  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000); /*0x1002773b0*/
  if ( (_DWORD)v35 ) /*0x1002773bc*/
    goto LABEL_29; /*0x1002773bc*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x1002773c9*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x1002773d5*/
  a2 = (__int64)&v48; /*0x1002773e1*/
  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000); /*0x1002773ef*/
  if ( (_BYTE)v35 ) /*0x1002773fb*/
    goto LABEL_29; /*0x1002773fb*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x100277408*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x100277414*/
  a2 = (__int64)&v48; /*0x100277420*/
  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000); /*0x10027742e*/
  if ( (_BYTE)v35 ) /*0x10027743a*/
    goto LABEL_29; /*0x10027743a*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x100277447*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x100277453*/
  a2 = (__int64)&v48; /*0x10027745f*/
  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000); /*0x10027746d*/
  if ( (_BYTE)v35 ) /*0x100277479*/
    goto LABEL_29; /*0x100277479*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x100277486*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x100277492*/
  a2 = (__int64)&v48; /*0x10027749e*/
  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000); /*0x1002774ac*/
  if ( (_BYTE)v35 ) /*0x1002774b8*/
    goto LABEL_29; /*0x1002774b8*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x1002774c5*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x1002774d1*/
  a2 = (__int64)&v48; /*0x1002774dd*/
  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000); /*0x1002774eb*/
  if ( (_BYTE)v35 ) /*0x1002774f7*/
    goto LABEL_29; /*0x1002774f7*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x100277500*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x10027750c*/
  a2 = (__int64)&v48; /*0x100277518*/
  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000); /*0x100277526*/
  if ( (_BYTE)v35 /*0x10027756d*/
    || (core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35),
        std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000),
        a2 = (__int64)&v48,
        std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v35, &v48, 0, 80000000),
        (_BYTE)v35) )
  {
LABEL_29:
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x10027757a*/
    if ( !_InterlockedDecrement64(v34[0]) ) /*0x100277586*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb72ce9272227da16(v34); /*0x100277593*/
    if ( !_InterlockedDecrement64(v34[1]) ) /*0x10027759f*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v34[1]); /*0x1002775a8*/
    goto LABEL_33; /*0x1002775a8*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(&v35); /*0x100277992*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x10027799e*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1002779b1*/
  {
    v60 = &v65; /*0x1002779b7*/
    v61 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1002779c2*/
    v35 = (unsigned __int64)"codexmate_lib::core::relay::manager"; /*0x1002779cd*/
    v36 = 35; /*0x1002779d4*/
    v37 = (__int64)"codexmate_lib::core::relay::manager"; /*0x1002779df*/
    v38 = 35; /*0x1002779e6*/
    v39 = (char *)&off_10195DDE0; /*0x1002779f8*/
    log::__private_api::log::h719f4907c7336ae9(&unk_1017BAD9D, &v60, 2, &v35); /*0x100277a16*/
  }
  v35 = (unsigned __int64)&v66; /*0x100277a1f*/
  v36 = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x100277a2d*/
  a2 = (__int64)&unk_1017BA23F; /*0x100277a34*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v33, &unk_1017BA23F, &v35); /*0x100277a49*/
  v14 = v33[0]; /*0x100277a4e*/
  v12 = v33[1]; /*0x100277a55*/
  v13 = v33[2]; /*0x100277a5c*/
  if ( !_InterlockedDecrement64(v34[0]) ) /*0x100277a6e*/
LABEL_43:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb72ce9272227da16(v34); /*0x10027769d*/
LABEL_44:
  v28 = _InterlockedDecrement64(v34[1]); /*0x1002776a9*/
  v2 = v64; /*0x1002776b4*/
  if ( !v28 ) /*0x1002776b8*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v34[1]); /*0x1002776c1*/
LABEL_10:
  v48 = 10; /*0x100277155*/
  v49 = (char *)v14; /*0x100277160*/
  v50 = v12; /*0x100277167*/
  v51 = v13; /*0x10027716e*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100277183*/
  {
    v33[0] = &v48; /*0x100277190*/
    v33[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027719e*/
    v41 = 2; /*0x1002771a5*/
    v42 = "codexmate_lib::core::relay::manager"; /*0x1002771b7*/
    v43 = 35; /*0x1002771be*/
    v45 = &unk_1017BA27D; /*0x1002771d0*/
    v46 = v33; /*0x1002771de*/
    v35 = 0; /*0x1002771e5*/
    v36 = (__int64)"codexmate_lib::core::relay::manager"; /*0x1002771f0*/
    v37 = 35; /*0x1002771f7*/
    v38 = 0; /*0x100277202*/
    v39 = "src/core/relay/manager.rs"; /*0x100277214*/
    v40 = 25; /*0x10027721b*/
    v44 = 0x92E00000001LL; /*0x100277230*/
    a2 = (__int64)&v35; /*0x10027723b*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v62, &v35); /*0x100277242*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v48); /*0x10027724e*/
  v15 = v2[1]; /*0x100277253*/
  v16 = *(_QWORD *)(v15 + 16); /*0x100277257*/
  if ( !v16 ) /*0x10027725e*/
LABEL_34:
    v16 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v15 + 16); /*0x1002775c2*/
LABEL_13:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v16); /*0x100277264*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100277280*/
  {
    v29 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, a2, v17, 0x7FFFFFFFFFFFFFFFLL); /*0x1002776f1*/
    v18 = (_BYTE *)(v15 + 24); /*0x1002776f4*/
    if ( *(_BYTE *)(v15 + 24) ) /*0x1002776f8*/
    {
      if ( !v29 ) /*0x100277704*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v15 + 16)); /*0x1002772bd*/
LABEL_15:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10027770f*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v16,
                               a2,
                               v17,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *v18 = 1; /*0x10027771c*/
      }
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v15 + 16)); /*0x100277721*/
    }
    v24 = v29 ^ 1; /*0x100277726*/
    if ( *(_BYTE *)(v15 + 154) ) /*0x10027772a*/
      goto LABEL_53; /*0x100277732*/
  }
  else
  {
    v18 = (_BYTE *)(v15 + 24); /*0x100277286*/
    if ( *(_BYTE *)(v15 + 24) ) /*0x10027728a*/
      goto LABEL_15; /*0x100277291*/
    v24 = 0; /*0x1002775d3*/
    if ( *(_BYTE *)(v15 + 154) ) /*0x1002775d6*/
      goto LABEL_53; /*0x1002775de*/
  }
  if ( *(_WORD *)(v15 + 152) /*0x10027761d*/
    || *(_QWORD *)(v15 + 96)
    || *(_QWORD *)(v15 + 120)
    || *(_QWORD *)(v15 + 128) != 0x8000000000000000LL )
  {
LABEL_53:
    v30 = *(_QWORD *)(v15 + 80); /*0x100277738*/
    if ( v30 ) /*0x10027773f*/
    {
      v16 = *(_QWORD *)(v15 + 88); /*0x100277741*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v30, 1); /*0x10027774a*/
    }
    v25 = v2; /*0x10027774f*/
    v31 = *(_QWORD *)(v15 + 104); /*0x100277752*/
    if ( v31 ) /*0x100277759*/
    {
      v16 = *(_QWORD *)(v15 + 112); /*0x10027775b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v31, 1); /*0x100277764*/
    }
    a2 = *(_QWORD *)(v15 + 128); /*0x100277769*/
    if ( a2 != 0x8000000000000000LL && a2 ) /*0x100277786*/
    {
      v16 = *(_QWORD *)(v15 + 136); /*0x100277788*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, a2, 1); /*0x100277794*/
    }
    *(_QWORD *)(v15 + 80) = 0; /*0x100277799*/
    *(_QWORD *)(v15 + 88) = 1; /*0x1002777a1*/
    *(_QWORD *)(v15 + 96) = 0; /*0x1002777a9*/
    *(_QWORD *)(v15 + 104) = 0; /*0x1002777b1*/
    *(_QWORD *)(v15 + 112) = 1; /*0x1002777b9*/
    *(_QWORD *)(v15 + 120) = 0; /*0x1002777c1*/
    *(_QWORD *)(v15 + 128) = 0x8000000000000000LL; /*0x1002777c9*/
    *(_WORD *)(v15 + 152) = 0; /*0x1002777d0*/
    *(_BYTE *)(v15 + 154) = 0; /*0x1002777da*/
    v26 = 1; /*0x1002777e2*/
    goto LABEL_61; /*0x1002777e2*/
  }
  v25 = v2; /*0x100277623*/
  v26 = 0; /*0x100277626*/
LABEL_61:
  if ( !v24 /*0x100277974*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v16,
                           a2,
                           v17,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *v18 = 1; /*0x100277981*/
  }
  result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v15 + 16)); /*0x10027780a*/
  if ( v26 ) /*0x100277811*/
  {
    v32 = *v25 + 16LL; /*0x10027781e*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(&v35, v25); /*0x10027782c*/
    codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v34, v32, &v35); /*0x10027783e*/
    if ( LODWORD(v34[0]) != 11 ) /*0x10027784a*/
    {
      qmemcpy(v33, v34, sizeof(v33)); /*0x100277866*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100277877*/
      {
        v60 = (__int16 *)v33; /*0x10027787d*/
        v61 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100277888*/
        v54 = 2; /*0x10027788c*/
        v55 = "codexmate_lib::core::relay::manager"; /*0x10027789e*/
        v56 = 35; /*0x1002778a2*/
        v58 = &unk_1017BA2B2; /*0x1002778b1*/
        v59 = &v60; /*0x1002778b9*/
        v48 = 0; /*0x1002778bd*/
        v49 = "codexmate_lib::core::relay::manager"; /*0x1002778c8*/
        v50 = 35; /*0x1002778cf*/
        v51 = 0; /*0x1002778da*/
        v52 = "src/core/relay/manager.rs"; /*0x1002778ec*/
        v53 = 25; /*0x1002778f3*/
        v57 = 0x94100000001LL; /*0x100277908*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v62, &v48); /*0x100277917*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v33); /*0x100277923*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v35); /*0x10027792f*/
  }
  return result; /*0x100277934*/
}