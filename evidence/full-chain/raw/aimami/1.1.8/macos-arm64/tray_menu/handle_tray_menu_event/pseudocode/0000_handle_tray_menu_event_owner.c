// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x1004d0f50 depth=0
// handle_tray_menu_event_owner
__int64 __fastcall codexmate_lib::commands::tray_menu::handle_tray_menu_event::h72195a23d2679709(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        double a4,
        double a5)
{
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  char v9; // r12
  char v10; // of
  __int64 v11; // rt0
  volatile signed __int64 *v12; // r14
  __int64 v13; // rt0
  _QWORD *v14; // rax
  size_t v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  char v24; // of
  volatile signed __int64 *v25; // r15
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r14
  __int64 v28; // rt0
  __m128i v29; // xmm0
  char v30; // of
  __int64 v31; // r13
  __int64 v32; // rt0
  volatile signed __int64 *v33; // r15
  __int64 v34; // rt0
  __int64 v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rax
  volatile signed __int64 *v38; // rax
  volatile signed __int64 *v39; // r15
  pthread_mutex_t *v40; // rdi
  int v41; // ecx
  int v42; // eax
  __int64 v43; // r14
  __int64 v44; // r12
  _QWORD *v45; // rax
  size_t v46; // r15
  _QWORD *v47; // rax
  _QWORD *v48; // r15
  __int64 v49; // rax
  __int64 v50; // r13
  size_t __src[116]; // [rsp+8h] [rbp-858h] BYREF
  _QWORD __dst[19]; // [rsp+3A8h] [rbp-4B8h] BYREF
  _QWORD v53[116]; // [rsp+440h] [rbp-420h] BYREF
  size_t v54[3]; // [rsp+7E0h] [rbp-80h] BYREF
  size_t v55; // [rsp+7F8h] [rbp-68h]
  size_t v56; // [rsp+800h] [rbp-60h]
  _QWORD v57[3]; // [rsp+808h] [rbp-58h] BYREF
  size_t v58; // [rsp+820h] [rbp-40h]
  void *__s2; // [rsp+828h] [rbp-38h]
  int v60; // [rsp+834h] [rbp-2Ch]

  result = a3 - 9; /*0x1004d0f6a*/
  switch ( a3 ) /*0x1004d0f86*/
  {
    case 9uLL: /*0x1004d0f86*/
      result = *(_QWORD *)a2 ^ 0x6975715F79617274LL; /*0x1004d0f92*/
      if ( result | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL ) /*0x1004d0f9d*/
        return result; /*0x1004d0fa0*/
      v7 = *(_QWORD *)(a1 + 136); /*0x1004d0fa6*/
      v8 = tauri::state::StateManager::try_get::he36bec9b09fd8bd7(*(_QWORD *)(v7 + 4872) + 16LL); /*0x1004d0fb8*/
      if ( !v8 ) /*0x1004d0fc0*/
        return tauri::app::AppHandle$LT$R$GT$::exit::h7923661e53fcf671(a1, 0); /*0x1004d0fc0*/
      codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)__src, v8, a4, a5); /*0x1004d0fd3*/
      codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92((__int64)v53, (__int64)__src); /*0x1004d0fe2*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(__src, a4); /*0x1004d0fee*/
      v9 = BYTE4(v53[42]); /*0x1004d0ff3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v53); /*0x1004d1005*/
      if ( !v9 ) /*0x1004d100d*/
        return tauri::app::AppHandle$LT$R$GT$::exit::h7923661e53fcf671(a1, 0); /*0x1004d156d*/
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x1004d101d*/
        (__int64)__src,
        a1);
      v11 = _InterlockedIncrement64((volatile signed __int64 *)v7); /*0x1004d1022*/
      if ( (v11 < 0) ^ v10 | (v11 == 0) /*0x1004d1037*/
        || (v12 = *(volatile signed __int64 **)(a1 + 144),
            v13 = _InterlockedIncrement64(v12),
            (v13 < 0) ^ v10 | (v13 == 0)) )
      {
LABEL_93:
        BUG(); /*0x1004d1b1c*/
      }
      memcpy(__dst, __src, 0x88u); /*0x1004d1050*/
      __dst[17] = v7; /*0x1004d1055*/
      __dst[18] = v12; /*0x1004d105c*/
      if ( !tauri::state::StateManager::try_get::hdecac479e040b124(*(_QWORD *)(v7 + 4872) + 16LL) ) /*0x1004d1076*/
      {
        v53[0] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_900; /*0x1004d19fa*/
        v53[1] = 85; /*0x1004d1a01*/
        __src[0] = (size_t)v53; /*0x1004d1a0c*/
        __src[1] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004d1a1a*/
        core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004d1a36*/
          (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
          (__int64)__src,
          (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
      }
      tauri_plugin_dialog::_$LT$impl$u20$tauri_plugin_dialog..desktop..Dialog$LT$R$GT$$GT$::message::h16c03d17fe7a9897(__src); /*0x1004d1092*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d1097*/
      v14 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x16u, 1u); /*0x1004d10a6*/
      if ( !v14 ) /*0x1004d10ae*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x1004d1ac2*/
      v15 = (size_t)v14; /*0x1004d10b4*/
      *(_QWORD *)((char *)v14 + 14) = 0x9FBCEF694D614D69LL; /*0x1004d10c1*/
      v14[1] = 0x4D694120BA87E580LL; /*0x1004d10cf*/
      *v14 = 0x80E9A4AEE8AEA1E7LL; /*0x1004d10dd*/
      if ( __src[19] ) /*0x1004d10ea*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d10f8*/
      __src[19] = 22; /*0x1004d10fd*/
      __src[20] = v15; /*0x1004d1108*/
      __src[21] = 22; /*0x1004d110f*/
      memcpy(v53, __src, 0x140u); /*0x1004d112d*/
      *(_DWORD *)((char *)&v53[40] + 1) = *(_DWORD *)((char *)&__src[40] + 1); /*0x1004d113e*/
      HIDWORD(v53[40]) = HIDWORD(__src[40]); /*0x1004d1144*/
      LOBYTE(v53[40]) = 1; /*0x1004d114a*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d1151*/
      v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1004d1160*/
      if ( !v16 ) /*0x1004d1168*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1004d1ad3*/
      v17 = v16; /*0x1004d116e*/
      *(_QWORD *)v16 = 0x80E9A4AEE8AEA1E7LL; /*0x1004d1171*/
      *(_DWORD *)(v16 + 8) = -1165499008; /*0x1004d1174*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d117b*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1004d118a*/
      if ( !v18 ) /*0x1004d1192*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1004d1ae4*/
      v19 = v18; /*0x1004d1198*/
      *(_QWORD *)v18 = 0xBFE8818CE69DBFE4LL; /*0x1004d11a5*/
      *(_DWORD *)(v18 + 8) = -1935546224; /*0x1004d11a8*/
      core::ptr::drop_in_place$LT$tauri_plugin_dialog..models..MessageDialogButtons$GT$::h5bf90622e0af8b29(&v53[25]); /*0x1004d11b7*/
      v53[25] = 0x8000000000000005LL; /*0x1004d11ca*/
      v53[26] = 12; /*0x1004d11d1*/
      v53[27] = v17; /*0x1004d11dc*/
      v53[28] = 12; /*0x1004d11e3*/
      v53[29] = 12; /*0x1004d11ee*/
      v53[30] = v19; /*0x1004d11f9*/
      v53[31] = 12; /*0x1004d1200*/
      memcpy(__src, v53, 0x148u); /*0x1004d1221*/
      memcpy(v53, __dst, 0x98u); /*0x1004d123c*/
      return tauri_plugin_dialog::MessageDialogBuilder$LT$R$GT$::show::hecea754baedafc99(__src, v53); /*0x1004d124c*/
    case 0xEuLL: /*0x1004d0f86*/
      if ( !(*(_QWORD *)a2 ^ 0x65706F5F79617274LL | *(_QWORD *)(a2 + 6) ^ 0x6E69616D5F6E6570LL) ) /*0x1004d12d8*/
        goto LABEL_24; /*0x1004d12db*/
      goto LABEL_30; /*0x1004d12db*/
    case 0x11uLL: /*0x1004d0f86*/
      v20 = _mm_or_si128( /*0x1004d126d*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a2 + 16)), (__m128i)xmmword_10125CEC0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1012C54F0));
      if ( _mm_testz_si128(v20, v20) ) /*0x1004d1271*/
        goto LABEL_24; /*0x1004d1276*/
      goto LABEL_30; /*0x1004d1276*/
    case 0x14uLL: /*0x1004d0f86*/
      v22 = _mm_or_si128( /*0x1004d12fc*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1012C54D0),
              _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_1012C54C0));
      if ( _mm_testz_si128(v22, v22) ) /*0x1004d1305*/
        goto LABEL_24; /*0x1004d1305*/
      v23 = _mm_or_si128( /*0x1004d1320*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1012C54E0),
              _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_1012C54C0));
      if ( _mm_testz_si128(v23, v23) ) /*0x1004d1324*/
        goto LABEL_24; /*0x1004d1329*/
      goto LABEL_30; /*0x1004d1329*/
    case 0x17uLL: /*0x1004d0f86*/
      v29 = _mm_or_si128( /*0x1004d13ed*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1012C54B0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 7)), (__m128i)xmmword_1012C54A0));
      if ( !_mm_testz_si128(v29, v29) ) /*0x1004d13f6*/
        goto LABEL_30; /*0x1004d13f6*/
      goto LABEL_24; /*0x1004d13f6*/
    case 0x18uLL: /*0x1004d0f86*/
      v21 = _mm_or_si128( /*0x1004d129a*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1012C5490),
              _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(a2 + 16)), (__m128i)xmmword_1012C5480));
      if ( !_mm_testz_si128(v21, v21) ) /*0x1004d12a3*/
        goto LABEL_30; /*0x1004d12a3*/
LABEL_24:
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x1004d132f*/
        (__int64)v53,
        a1);
      v25 = *(volatile signed __int64 **)(a1 + 136); /*0x1004d133e*/
      v26 = _InterlockedIncrement64(v25); /*0x1004d1345*/
      if ( (v26 < 0) ^ v24 | (v26 == 0) ) /*0x1004d1349*/
        goto LABEL_93; /*0x1004d1349*/
      v27 = *(volatile signed __int64 **)(a1 + 144); /*0x1004d134f*/
      v28 = _InterlockedIncrement64(v27); /*0x1004d1356*/
      if ( (v28 < 0) ^ v24 | (v28 == 0) ) /*0x1004d135a*/
        goto LABEL_93; /*0x1004d135a*/
      memcpy(__src, v53, 0x88u); /*0x1004d1376*/
      __src[17] = (size_t)v25; /*0x1004d137b*/
      __src[18] = (size_t)v27; /*0x1004d1382*/
      codexmate_lib::commands::hotspot::focus_main_window::hc921ac903a91f29c(v53, (__int64)__src); /*0x1004d1393*/
      result = 0x8000000000000000LL; /*0x1004d13a9*/
      if ( v53[0] != 0x8000000000000000LL && v53[0] ) /*0x1004d13b8*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d13b8*/
      return result; /*0x1004d13b8*/
    default:
      if ( a3 < 0xD ) /*0x1004d12b2*/
        return result; /*0x1004d12b2*/
LABEL_30:
      result = *(_QWORD *)a2 ^ 0x6363615F79617274LL; /*0x1004d13fc*/
      if ( result | *(_QWORD *)(a2 + 5) ^ 0x3A746E756F636361LL ) /*0x1004d1417*/
        return result; /*0x1004d141a*/
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x1004d142d*/
        (__int64)__src,
        a1);
      v31 = *(_QWORD *)(a1 + 136); /*0x1004d1432*/
      v32 = _InterlockedIncrement64((volatile signed __int64 *)v31); /*0x1004d1439*/
      if ( (v32 < 0) ^ v30 | (v32 == 0) ) /*0x1004d143e*/
        goto LABEL_93; /*0x1004d143e*/
      v33 = *(volatile signed __int64 **)(a1 + 144); /*0x1004d1444*/
      v34 = _InterlockedIncrement64(v33); /*0x1004d144b*/
      if ( (v34 < 0) ^ v30 | (v34 == 0) ) /*0x1004d144f*/
        goto LABEL_93; /*0x1004d144f*/
      v35 = a3 - 13; /*0x1004d1455*/
      memcpy(__dst, __src, 0x88u); /*0x1004d1473*/
      __dst[17] = v31; /*0x1004d1478*/
      __dst[18] = v33; /*0x1004d147f*/
      if ( v35 < 0 ) /*0x1004d1489*/
      {
        v36 = 0; /*0x1004d148b*/
        goto LABEL_35; /*0x1004d148b*/
      }
      if ( v35 ) /*0x1004d149e*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d14a0*/
        v36 = 1; /*0x1004d14a5*/
        v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v35, 1u); /*0x1004d14b3*/
        if ( !v37 ) /*0x1004d14bb*/
LABEL_35:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v36, v35); /*0x1004d148e*/
      }
      else
      {
        v37 = 1; /*0x1004d14bf*/
      }
      __s2 = (void *)v37; /*0x1004d14c7*/
      memcpy((void *)v37, (const void *)(a2 + 13), v35); /*0x1004d14d1*/
      v38 = (volatile signed __int64 *)tauri::state::StateManager::try_get::h5668abcf78ad5dde(*(_QWORD *)(v31 + 4872) + 16LL); /*0x1004d14e1*/
      v39 = v38; /*0x1004d14e6*/
      if ( !v38 ) /*0x1004d14ec*/
      {
        v53[0] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_789; /*0x1004d1579*/
        v53[1] = 76; /*0x1004d1580*/
        __src[0] = (size_t)v53; /*0x1004d1592*/
        __src[1] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004d15a0*/
        core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004d15bc*/
          (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
          (__int64)__src,
          (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
      }
      v40 = (pthread_mutex_t *)*v38; /*0x1004d14f2*/
      if ( !*v38 ) /*0x1004d14f2*/
        v40 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v38); /*0x1004d15ce*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v40); /*0x1004d14fe*/
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1004d150d*/
      {
        LOBYTE(v42) = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004d15d6*/
        v41 = v42; /*0x1004d15db*/
        LOBYTE(v41) = v42 ^ 1; /*0x1004d15dd*/
        if ( *((_BYTE *)v39 + 8) ) /*0x1004d15ea*/
          goto LABEL_45; /*0x1004d15f1*/
      }
      else
      {
        v41 = 0; /*0x1004d1519*/
        if ( *((_BYTE *)v39 + 8) ) /*0x1004d1525*/
        {
LABEL_45:
          if ( !(_BYTE)v41 /*0x1004d1547*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
          {
            goto LABEL_82; /*0x1004d1547*/
          }
          goto LABEL_55; /*0x1004d1547*/
        }
      }
      v60 = v41; /*0x1004d15f7*/
      codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(__src, (_QWORD *)v39 + 2); /*0x1004d1608*/
      if ( LODWORD(__src[0]) == 2 ) /*0x1004d1614*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&__src[1]); /*0x1004d161d*/
LABEL_53:
        if ( !(_BYTE)v60 /*0x1004d1635*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
LABEL_82:
          if ( !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ) /*0x1004d1a40*/
            *((_BYTE *)v39 + 8) = 1; /*0x1004d1a4d*/
        }
LABEL_55:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v39); /*0x1004d163b*/
LABEL_56:
        if ( v35 ) /*0x1004d1646*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d1654*/
        return (__int64)core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f((__int64)__dst); /*0x1004d1660*/
      }
      memcpy(v53, __src, sizeof(v53)); /*0x1004d168a*/
      if ( LODWORD(v53[19]) != 2 && v53[43] == v35 && !memcmp((const void *)v53[42], __s2, v35) ) /*0x1004d16b6*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::hd95344f83d5f5579((__int64)v53); /*0x1004d19e9*/
        goto LABEL_53; /*0x1004d19ee*/
      }
      v58 = 0x8000000000000000LL; /*0x1004d16c7*/
      if ( v53[100] ) /*0x1004d16ce*/
      {
        v43 = 336LL * v53[100]; /*0x1004d16d7*/
        v44 = v53[99] + 200LL; /*0x1004d16de*/
        while ( *(_QWORD *)(v44 - 8) != v35 || memcmp(*(const void **)(v44 - 16), __s2, v35) ) /*0x1004d1711*/
        {
          v44 += 336; /*0x1004d16e7*/
          v43 -= 336; /*0x1004d16ee*/
          if ( !v43 ) /*0x1004d16f5*/
            goto LABEL_69; /*0x1004d16f5*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v44); /*0x1004d171d*/
        v58 = __src[0]; /*0x1004d1729*/
        v55 = __src[1]; /*0x1004d1734*/
        v56 = __src[2]; /*0x1004d173f*/
      }
LABEL_69:
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::hd95344f83d5f5579((__int64)v53); /*0x1004d174d*/
      if ( !(_BYTE)v60 /*0x1004d1a57*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
      {
        *((_BYTE *)v39 + 8) = 1; /*0x1004d1a64*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v39); /*0x1004d1778*/
      if ( v58 == 0x8000000000000000LL ) /*0x1004d1788*/
        goto LABEL_56; /*0x1004d1788*/
      v57[0] = v58; /*0x1004d178e*/
      v57[1] = v55; /*0x1004d179a*/
      v57[2] = v56; /*0x1004d179e*/
      if ( !tauri::state::StateManager::try_get::hdecac479e040b124(*(_QWORD *)(v31 + 4872) + 16LL) ) /*0x1004d17bb*/
      {
        v53[0] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_900; /*0x1004d1a75*/
        v53[1] = 85; /*0x1004d1a7c*/
        __src[0] = (size_t)v53; /*0x1004d1a87*/
        __src[1] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004d1a95*/
        core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004d1ab1*/
          (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
          (__int64)__src,
          (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
      }
      __src[0] = (size_t)v57; /*0x1004d17c5*/
      __src[1] = (size_t)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004d17d3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, byte_10122A624, (unsigned __int64)__src); /*0x1004d17ec*/
      tauri_plugin_dialog::_$LT$impl$u20$tauri_plugin_dialog..desktop..Dialog$LT$R$GT$$GT$::message::h4c0a788a30f542b1(__src); /*0x1004d17ff*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d1804*/
      v45 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1004d1813*/
      if ( !v45 ) /*0x1004d181b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1004d1af5*/
      v46 = (size_t)v45; /*0x1004d1821*/
      *(_QWORD *)((char *)v45 + 7) = 0x9FBCEFB78FE5A6B4LL; /*0x1004d182e*/
      *v45 = 0xB4E8A28DE68788E5LL; /*0x1004d183c*/
      if ( __src[19] ) /*0x1004d1849*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d1857*/
      __src[19] = 15; /*0x1004d185c*/
      __src[20] = v46; /*0x1004d1867*/
      __src[21] = 15; /*0x1004d186e*/
      memcpy(v53, __src, 0x140u); /*0x1004d188c*/
      *(_DWORD *)((char *)&v53[40] + 1) = *(_DWORD *)((char *)&__src[40] + 1); /*0x1004d189d*/
      HIDWORD(v53[40]) = HIDWORD(__src[40]); /*0x1004d18a3*/
      LOBYTE(v53[40]) = 1; /*0x1004d18a9*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d18b0*/
      v47 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x15u, 1u); /*0x1004d18bf*/
      if ( !v47 ) /*0x1004d18c7*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x1004d1b06*/
      v48 = v47; /*0x1004d18cd*/
      *(_QWORD *)((char *)v47 + 13) = 0x7865646F4320AF90LL; /*0x1004d18da*/
      v47[1] = 0x20AF90E58D87E9B6LL; /*0x1004d18e8*/
      *v47 = 0xB9E5A28DE68788E5LL; /*0x1004d18f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d18f9*/
      v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1004d1908*/
      if ( !v49 ) /*0x1004d1910*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1004d1b17*/
      v50 = v49; /*0x1004d1916*/
      *(_WORD *)(v49 + 4) = -30538; /*0x1004d1919*/
      *(_DWORD *)v49 = -426340379; /*0x1004d191f*/
      core::ptr::drop_in_place$LT$tauri_plugin_dialog..models..MessageDialogButtons$GT$::h5bf90622e0af8b29(&v53[25]); /*0x1004d192c*/
      v53[25] = 0x8000000000000005LL; /*0x1004d1935*/
      v53[26] = 21; /*0x1004d193c*/
      v53[27] = v48; /*0x1004d1947*/
      v53[28] = 21; /*0x1004d194e*/
      v53[29] = 6; /*0x1004d1959*/
      v53[30] = v50; /*0x1004d1964*/
      v53[31] = 6; /*0x1004d196b*/
      memcpy(__src, v53, 0x148u); /*0x1004d198c*/
      memcpy(v53, __dst, 0x98u); /*0x1004d19a0*/
      v53[19] = v35; /*0x1004d19a5*/
      v53[20] = __s2; /*0x1004d19b0*/
      v53[21] = v35; /*0x1004d19b7*/
      result = tauri_plugin_dialog::MessageDialogBuilder$LT$R$GT$::show::h6e40bc3dfd5ae4a7(__src, v53); /*0x1004d19c7*/
      if ( v57[0] ) /*0x1004d19d3*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d13c5*/
      return result;
  }
}