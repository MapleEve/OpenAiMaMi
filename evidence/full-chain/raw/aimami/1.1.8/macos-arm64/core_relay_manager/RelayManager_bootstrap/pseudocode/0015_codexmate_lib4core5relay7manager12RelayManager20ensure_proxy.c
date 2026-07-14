// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1005c1610 depth=1
volatile signed __int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hd0b215828faba6dc(
        __int64 a1,
        volatile signed __int64 **a2,
        double a3,
        double a4)
{
  volatile signed __int64 *result; // rax
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  char v10; // al
  int v11; // eax
  _WORD *v12; // rax
  bool v13; // zf
  char v14; // of
  __int16 v15; // ax
  int v16; // ebx
  int v17; // ebx
  volatile signed __int64 **v18; // r13
  __int64 v19; // r13
  __int64 v20; // rt0
  volatile signed __int64 *v21; // rax
  __int64 v22; // rt0
  volatile signed __int64 *v23; // r12
  __int64 v24; // rt0
  volatile signed __int64 *v25; // rsi
  volatile signed __int64 **v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdx
  volatile signed __int64 *v29; // rdi
  __int64 v30; // rdx
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rsi
  volatile signed __int64 *v39; // rax
  __int64 v40; // rdx
  volatile signed __int64 *v41; // r13
  __int16 v42; // bx
  volatile signed __int64 **v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  volatile signed __int64 *v47; // rax
  __int64 v48; // rdx
  volatile signed __int64 *v49; // [rsp+0h] [rbp-170h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+8h] [rbp-168h]
  __int64 v51; // [rsp+10h] [rbp-160h]
  volatile signed __int64 *v52; // [rsp+18h] [rbp-158h] BYREF
  const char *v53; // [rsp+20h] [rbp-150h]
  __int64 v54; // [rsp+28h] [rbp-148h]
  volatile signed __int64 *v55; // [rsp+30h] [rbp-140h]
  const char *v56; // [rsp+38h] [rbp-138h]
  __int64 v57; // [rsp+40h] [rbp-130h]
  __int64 v58; // [rsp+48h] [rbp-128h]
  const char *v59; // [rsp+50h] [rbp-120h]
  __int64 v60; // [rsp+58h] [rbp-118h]
  __int64 v61; // [rsp+60h] [rbp-110h]
  void *v62; // [rsp+68h] [rbp-108h]
  volatile signed __int64 **v63; // [rsp+70h] [rbp-100h]
  char v64; // [rsp+C8h] [rbp-A8h]
  volatile signed __int64 **v65; // [rsp+D0h] [rbp-A0h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+D8h] [rbp-98h]
  __int64 v67; // [rsp+E0h] [rbp-90h]
  volatile signed __int64 **v68; // [rsp+E8h] [rbp-88h]
  __int64 (__fastcall *v69)(); // [rsp+F0h] [rbp-80h] BYREF
  __int16 v70; // [rsp+F8h] [rbp-78h] BYREF
  _QWORD *v71; // [rsp+100h] [rbp-70h]
  _WORD *v72; // [rsp+108h] [rbp-68h]
  volatile signed __int64 *v73; // [rsp+110h] [rbp-60h] BYREF
  volatile signed __int64 *v74; // [rsp+118h] [rbp-58h] BYREF
  __int64 (__fastcall *v75)(); // [rsp+120h] [rbp-50h]
  __int64 v76; // [rsp+128h] [rbp-48h]
  __int16 v77; // [rsp+136h] [rbp-3Ah]
  volatile signed __int64 **v78; // [rsp+138h] [rbp-38h]
  int v79; // [rsp+140h] [rbp-30h]
  int v80; // [rsp+144h] [rbp-2Ch]

  result = *(volatile signed __int64 **)(a1 + 32); /*0x1005c1624*/
  if ( result ) /*0x1005c162b*/
  {
    if ( _InterlockedIncrement64(result) <= 0 ) /*0x1005c1635*/
      goto LABEL_93; /*0x1005c1635*/
    v73 = result; /*0x1005c163e*/
    v6 = *(_QWORD *)(a1 + 16); /*0x1005c1642*/
    v7 = (_QWORD *)(v6 + 16); /*0x1005c1646*/
    v8 = *(_QWORD *)(v6 + 16); /*0x1005c164a*/
    if ( !v8 ) /*0x1005c1651*/
      v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v6 + 16); /*0x1005c16b3*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c1653*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005c1662*/
    {
      v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, a3, a4); /*0x1005c16b8*/
      LOBYTE(v11) = v11 ^ 1; /*0x1005c16bd*/
      v79 = v11; /*0x1005c16bf*/
      if ( *(_BYTE *)(v6 + 24) ) /*0x1005c16c2*/
        goto LABEL_7; /*0x1005c16c9*/
    }
    else
    {
      v79 = 0; /*0x1005c166a*/
      if ( *(_BYTE *)(v6 + 24) ) /*0x1005c1671*/
      {
LABEL_7:
        if ( !(_BYTE)v79 /*0x1005c169b*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, a3, a4); /*0x1005c16a1*/
          goto LABEL_83; /*0x1005c16a6*/
        }
        goto LABEL_33; /*0x1005c169b*/
      }
    }
    v78 = (volatile signed __int64 **)(v6 + 32); /*0x1005c16cf*/
    v12 = (_WORD *)(v6 + 40); /*0x1005c16d3*/
    v14 = 0; /*0x1005c16d7*/
    v13 = *(_QWORD *)(v6 + 32) == 0; /*0x1005c16d7*/
    v71 = (_QWORD *)(v6 + 16); /*0x1005c16dc*/
    if ( !v13 ) /*0x1005c16e0*/
    {
      v15 = *v12; /*0x1005c16e9*/
      *(_DWORD *)((char *)&v52 + 2) = 16777343; /*0x1005c16ec*/
      HIWORD(v52) = v15; /*0x1005c16f6*/
      LOWORD(v52) = 0; /*0x1005c16fd*/
      a2 = &v52; /*0x1005c170a*/
      std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v74, &v52, 0, 300000000); /*0x1005c1718*/
      v16 = (int)v74; /*0x1005c171d*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpListener$C$std..io..error..Error$GT$$GT$::h5e072ede2f9d0326(&v74); /*0x1005c1724*/
      if ( !v16 /*0x1005c1765*/
        || (std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000),
            a2 = &v52,
            std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v74, &v52, 0, 300000000),
            v17 = (int)v74,
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpListener$C$std..io..error..Error$GT$$GT$::h5e072ede2f9d0326(&v74),
            !v17) )
      {
        v7 = v71; /*0x1005c196b*/
        if ( !(_BYTE)v79 /*0x1005c1988*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v74, &v52, v9, a3, a4); /*0x1005c1f0a*/
LABEL_83:
          if ( !v10 ) /*0x1005c1f11*/
            *(_BYTE *)(v6 + 24) = 1; /*0x1005c1f17*/
        }
LABEL_33:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v7, a2, v9, a3, a4); /*0x1005c198e*/
LABEL_77:
        result = v73; /*0x1005c1ed5*/
        if ( !_InterlockedDecrement64(v73) ) /*0x1005c1ed9*/
          return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb60c2360c09e1b41(&v73); /*0x1005c1ee3*/
        return result; /*0x1005c1ee3*/
      }
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c1779*/
      {
        v74 = (volatile signed __int64 *)(v6 + 40); /*0x1005c177f*/
        v75 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1005c178a*/
        v58 = 2; /*0x1005c178e*/
        v59 = "codexmate_lib::core::relay::manager"; /*0x1005c17a0*/
        v60 = 35; /*0x1005c17a7*/
        v62 = &unk_10122BC6D; /*0x1005c17b9*/
        v63 = &v74; /*0x1005c17c0*/
        v52 = nullptr; /*0x1005c17c7*/
        v53 = "codexmate_lib::core::relay::manager"; /*0x1005c17d2*/
        v54 = 35; /*0x1005c17d9*/
        v55 = nullptr; /*0x1005c17e4*/
        v56 = "src/core/relay/manager.rs"; /*0x1005c17f6*/
        v57 = 25; /*0x1005c17fd*/
        v61 = 0x6CE00000001LL; /*0x1005c1812*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v69, &v52); /*0x1005c1824*/
      }
      v18 = v78; /*0x1005c1829*/
      v14 = 0; /*0x1005c1831*/
      if ( *v78 && !_InterlockedDecrement64(*v78) ) /*0x1005c1836*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h2a27c335bdc7a994(v18); /*0x1005c183f*/
      *v18 = nullptr; /*0x1005c1844*/
      v12 = (_WORD *)(v6 + 40); /*0x1005c184c*/
    }
    v72 = v12; /*0x1005c184f*/
    v19 = *(_QWORD *)(a1 + 8); /*0x1005c1853*/
    v20 = _InterlockedIncrement64((volatile signed __int64 *)v19); /*0x1005c1858*/
    if ( (v20 < 0) ^ v14 | (v20 == 0) /*0x1005c187b*/
      || (v21 = *(volatile signed __int64 **)(a1 + 24), v22 = _InterlockedIncrement64(v21), (v22 < 0) ^ v14 | (v22 == 0))
      || (v23 = *(volatile signed __int64 **)a1, v24 = _InterlockedIncrement64(v23), (v24 < 0) ^ v14 | (v24 == 0)) )
    {
LABEL_93:
      BUG(); /*0x1005c1f7d*/
    }
    v25 = v73 + 2; /*0x1005c1885*/
    v52 = (volatile signed __int64 *)v19; /*0x1005c1889*/
    v53 = (const char *)v21; /*0x1005c1890*/
    v54 = (__int64)v23; /*0x1005c1897*/
    v64 = 0; /*0x1005c189e*/
    tokio::runtime::runtime::Runtime::block_on::ha7c40d421f206ad6(&v49, v73 + 2, &v52, &off_101534228); /*0x1005c18ba*/
    if ( v49 == (volatile signed __int64 *)0x8000000000000000LL ) /*0x1005c18d4*/
    {
      v69 = v50; /*0x1005c18e8*/
      v70 = v51; /*0x1005c18ec*/
      v26 = (volatile signed __int64 **)(v19 + 16); /*0x1005c18f0*/
      v27 = *(_QWORD *)(v19 + 16); /*0x1005c18f4*/
      if ( !v27 ) /*0x1005c18fb*/
        v27 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v19 + 16); /*0x1005c1b2a*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c1901*/
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005c191d*/
      {
        v35 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v27, v25, v28, a3, a4); /*0x1005c1b43*/
        LOBYTE(v35) = v35 ^ 1; /*0x1005c1b4e*/
        v80 = v35; /*0x1005c1b50*/
        if ( *(_BYTE *)(v19 + 24) ) /*0x1005c1b53*/
        {
LABEL_28:
          if ( !(_BYTE)v80 /*0x1005c1f21*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v27,
                                   v25,
                                   v28,
                                   a3,
                                   a4) )
          {
            *(_BYTE *)(v19 + 24) = 1; /*0x1005c1f2e*/
          }
          v29 = *v26; /*0x1005c195a*/
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v26, v25, v28, a3, a4); /*0x1005c195d*/
LABEL_57:
          v41 = (volatile signed __int64 *)v69; /*0x1005c1d24*/
          v42 = v70; /*0x1005c1d28*/
          v43 = v78; /*0x1005c1d2c*/
          if ( *v78 && !_InterlockedDecrement64(*v78) ) /*0x1005c1d39*/
          {
            v29 = (volatile signed __int64 *)v43; /*0x1005c1d3f*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h2a27c335bdc7a994(v43); /*0x1005c1d42*/
          }
          *v43 = v41; /*0x1005c1d47*/
          *v72 = v42; /*0x1005c1d4f*/
          v31 = v71; /*0x1005c1d52*/
LABEL_74:
          if ( !(_BYTE)v79 /*0x1005c1efa*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v29,
                                   v25,
                                   v30,
                                   a3,
                                   a4) )
          {
            *(_BYTE *)(v6 + 24) = 1; /*0x1005c1f03*/
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v31, v25, v30, a3, a4); /*0x1005c1ed0*/
          goto LABEL_77; /*0x1005c1ed0*/
        }
      }
      else
      {
        v80 = 0; /*0x1005c1923*/
        if ( *(_BYTE *)(v19 + 24) ) /*0x1005c192a*/
          goto LABEL_28; /*0x1005c1931*/
      }
      v68 = (volatile signed __int64 **)(v19 + 16); /*0x1005c1b60*/
      v77 = v70; /*0x1005c1b6f*/
      v52 = (volatile signed __int64 *)&v70; /*0x1005c1b73*/
      v53 = (const char *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1005c1b81*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v65, &unk_101226DFC, &v52); /*0x1005c1b9d*/
      v52 = (volatile signed __int64 *)&v70; /*0x1005c1ba6*/
      v53 = (const char *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1005c1bad*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v74, &unk_10122B429, &v52); /*0x1005c1bc6*/
      v52 = (volatile signed __int64 *)v65; /*0x1005c1bd9*/
      v53 = (const char *)v66; /*0x1005c1be0*/
      v54 = v67; /*0x1005c1bee*/
      v55 = v74; /*0x1005c1bfd*/
      v56 = (const char *)v75; /*0x1005c1c04*/
      v57 = v76; /*0x1005c1c0f*/
      v36 = *(_QWORD *)(v19 + 80); /*0x1005c1c16*/
      if ( v36 ) /*0x1005c1c1d*/
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + 88), v36, 1); /*0x1005c1c28*/
      v37 = *(_QWORD *)(v19 + 104); /*0x1005c1c2d*/
      if ( v37 ) /*0x1005c1c34*/
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + 112), v37, 1); /*0x1005c1c3f*/
      v38 = *(_QWORD *)(v19 + 128); /*0x1005c1c48*/
      if ( v38 != 0x8000000000000000LL && v38 ) /*0x1005c1c57*/
        a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + 136), v38, 1); /*0x1005c1c65*/
      *(_QWORD *)(v19 + 120) = v57; /*0x1005c1c71*/
      *(_QWORD *)(v19 + 112) = v56; /*0x1005c1c7c*/
      *(_QWORD *)(v19 + 104) = v55; /*0x1005c1c87*/
      *(_QWORD *)(v19 + 96) = v54; /*0x1005c1c92*/
      v39 = v52; /*0x1005c1c96*/
      *(_QWORD *)(v19 + 88) = v53; /*0x1005c1ca4*/
      *(_QWORD *)(v19 + 80) = v39; /*0x1005c1ca8*/
      *(_QWORD *)(v19 + 128) = 0x8000000000000000LL; /*0x1005c1cab*/
      *(_WORD *)(v19 + 152) = v77; /*0x1005c1cb6*/
      *(_BYTE *)(v19 + 154) = 1; /*0x1005c1cbe*/
      v25 = v23 + 2; /*0x1005c1cd5*/
      codexmate_lib::core::relay::storage::save::h4619a27159e38d20(&v52, (__int64)(v23 + 2), v19 + 32, a3); /*0x1005c1cd8*/
      if ( (_DWORD)v52 != 10 ) /*0x1005c1ce4*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v52); /*0x1005c1ced*/
      if ( !(_BYTE)v80 /*0x1005c1f66*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v52, v25, v40, a3, a4) )
      {
        *(_BYTE *)(v19 + 24) = 1; /*0x1005c1f73*/
      }
      v29 = *v68; /*0x1005c1d1c*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v68, v25, v40, a3, a4); /*0x1005c1d1f*/
      goto LABEL_57; /*0x1005c1d1f*/
    }
    v76 = v51; /*0x1005c19a2*/
    v75 = v50; /*0x1005c19b4*/
    v74 = v49; /*0x1005c19b8*/
    v31 = v71; /*0x1005c19ca*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c19ce*/
    {
      v65 = &v74; /*0x1005c19d8*/
      v66 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005c19e6*/
      v58 = 2; /*0x1005c19ed*/
      v59 = "codexmate_lib::core::relay::manager"; /*0x1005c19ff*/
      v60 = 35; /*0x1005c1a06*/
      v62 = &unk_10122BCC3; /*0x1005c1a18*/
      v63 = (volatile signed __int64 **)&v65; /*0x1005c1a26*/
      v52 = nullptr; /*0x1005c1a2d*/
      v53 = "codexmate_lib::core::relay::manager"; /*0x1005c1a38*/
      v54 = 35; /*0x1005c1a3f*/
      v55 = nullptr; /*0x1005c1a4a*/
      v56 = "src/core/relay/manager.rs"; /*0x1005c1a5c*/
      v57 = 25; /*0x1005c1a63*/
      v61 = 0x6E800000001LL; /*0x1005c1a78*/
      v25 = (volatile signed __int64 *)&v52; /*0x1005c1a83*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v69, &v52); /*0x1005c1a8a*/
    }
    v78 = (volatile signed __int64 **)(v19 + 16); /*0x1005c1a93*/
    v32 = *(_QWORD *)(v19 + 16); /*0x1005c1a97*/
    if ( !v32 ) /*0x1005c1a9e*/
      v32 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v78); /*0x1005c1b3b*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c1aa4*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005c1ac0*/
    {
      v34 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32, v25, v33, a3, a4); /*0x1005c1d60*/
      LOBYTE(v34) = v34 ^ 1; /*0x1005c1d62*/
      if ( *(_BYTE *)(v19 + 24) ) /*0x1005c1d65*/
      {
LABEL_40:
        if ( !(_BYTE)v34 /*0x1005c1f38*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32, v25, v33, a3, a4) )
        {
          *(_BYTE *)(v19 + 24) = 1; /*0x1005c1f45*/
        }
        v29 = *v78; /*0x1005c1afa*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v78, v25, v33, a3, a4); /*0x1005c1afd*/
        v25 = v74; /*0x1005c1b02*/
        if ( v74 ) /*0x1005c1b09*/
        {
          v29 = (volatile signed __int64 *)v75; /*0x1005c1b0f*/
          a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v74, 1); /*0x1005c1b18*/
        }
        goto LABEL_74; /*0x1005c1b1d*/
      }
    }
    else
    {
      v34 = 0; /*0x1005c1ac6*/
      if ( *(_BYTE *)(v19 + 24) ) /*0x1005c1ac8*/
        goto LABEL_40; /*0x1005c1acf*/
    }
    LODWORD(v72) = v34; /*0x1005c1d72*/
    v54 = v76; /*0x1005c1d79*/
    v53 = (const char *)v75; /*0x1005c1d88*/
    v52 = v74; /*0x1005c1d8f*/
    v44 = *(_QWORD *)(v19 + 80); /*0x1005c1d96*/
    if ( v44 ) /*0x1005c1d9d*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + 88), v44, 1); /*0x1005c1da8*/
    v45 = *(_QWORD *)(v19 + 104); /*0x1005c1dad*/
    if ( v45 ) /*0x1005c1db4*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + 112), v45, 1); /*0x1005c1dbf*/
    v46 = *(_QWORD *)(v19 + 128); /*0x1005c1dcb*/
    if ( v46 != 0x8000000000000000LL && v46 ) /*0x1005c1dda*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + 136), v46, 1); /*0x1005c1de8*/
    *(_QWORD *)(v19 + 80) = 0; /*0x1005c1ded*/
    *(_QWORD *)(v19 + 88) = 1; /*0x1005c1df5*/
    *(_QWORD *)(v19 + 96) = 0; /*0x1005c1dfd*/
    *(_QWORD *)(v19 + 104) = 0; /*0x1005c1e05*/
    *(_QWORD *)(v19 + 112) = 1; /*0x1005c1e0d*/
    *(_QWORD *)(v19 + 120) = 0; /*0x1005c1e15*/
    *(_QWORD *)(v19 + 144) = v54; /*0x1005c1e24*/
    v47 = v52; /*0x1005c1e28*/
    *(_QWORD *)(v19 + 136) = v53; /*0x1005c1e36*/
    *(_QWORD *)(v19 + 128) = v47; /*0x1005c1e3a*/
    *(_WORD *)(v19 + 152) = 0; /*0x1005c1e3d*/
    *(_BYTE *)(v19 + 154) = 0; /*0x1005c1e47*/
    v25 = v23 + 2; /*0x1005c1e5e*/
    codexmate_lib::core::relay::storage::save::h4619a27159e38d20(&v52, (__int64)(v23 + 2), v19 + 32, a3); /*0x1005c1e61*/
    if ( (_DWORD)v52 != 10 ) /*0x1005c1e6d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v52); /*0x1005c1e76*/
    v31 = v71; /*0x1005c1e7f*/
    if ( !(_BYTE)v72 /*0x1005c1f4f*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v52, v25, v48, a3, a4) )
    {
      *(_BYTE *)(v19 + 24) = 1; /*0x1005c1f5c*/
    }
    v29 = *v78; /*0x1005c1ea6*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v78, v25, v48, a3, a4); /*0x1005c1ea9*/
    goto LABEL_74; /*0x1005c1ea9*/
  }
  return result; /*0x1005c1ee8*/
}