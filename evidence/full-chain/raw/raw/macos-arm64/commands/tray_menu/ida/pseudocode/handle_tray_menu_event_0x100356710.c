// __ZN13codexmate_lib8commands9tray_menu22handle_tray_menu_event @ 0x100356710 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::tray_menu::handle_tray_menu_event::hb9ec2303b911a6fa(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __m128i a4,
        __m128i a5)
{
  __int64 result; // rax
  char v7; // of
  volatile signed __int64 *v8; // r15
  __int64 v9; // rt0
  volatile signed __int64 *v10; // r14
  __int64 v11; // rt0
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  char v14; // of
  __int64 v15; // r12
  __int64 v16; // rt0
  volatile signed __int64 *v17; // r15
  __int64 v18; // rt0
  signed __int64 v19; // rbx
  const void *v20; // r13
  __int64 v21; // r15
  __int64 v22; // rax
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // r15
  _QWORD *v38; // rax
  _QWORD *v39; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // r15
  __int64 v42; // rax
  __int64 v43; // r12
  _QWORD __dst[134]; // [rsp+8h] [rbp-978h] BYREF
  _QWORD v45[19]; // [rsp+438h] [rbp-548h] BYREF
  _QWORD __src[134]; // [rsp+4D0h] [rbp-4B0h] BYREF
  char v47[24]; // [rsp+900h] [rbp-80h] BYREF
  __int64 v48; // [rsp+918h] [rbp-68h]
  __int64 v49; // [rsp+920h] [rbp-60h]
  unsigned __int64 v50; // [rsp+928h] [rbp-58h] BYREF
  __int64 v51; // [rsp+930h] [rbp-50h]
  __int64 v52; // [rsp+938h] [rbp-48h]
  unsigned __int64 v53; // [rsp+940h] [rbp-40h]
  void *__s2; // [rsp+948h] [rbp-38h]
  int v55; // [rsp+954h] [rbp-2Ch]

  result = a3 - 9; /*0x10035672a*/
  switch ( a3 ) /*0x100356746*/
  {
    case 9uLL: /*0x100356746*/
      result = *(_QWORD *)a2 ^ 0x6975715F79617274LL; /*0x100356752*/
      if ( !(result | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL) ) /*0x10035675d*/
        return codexmate_lib::request_user_quit::h1f24750a32dd88a5(a1, a2, *(double *)a4.i64, *(double *)a5.i64); /*0x10035677a*/
      return result; /*0x10035677a*/
    case 0xEuLL: /*0x100356746*/
      if ( !(*(_QWORD *)a2 ^ 0x65706F5F79617274LL | *(_QWORD *)(a2 + 6) ^ 0x6E69616D5F6E6570LL) ) /*0x100356806*/
        goto LABEL_14; /*0x100356809*/
      goto LABEL_21; /*0x100356809*/
    case 0x11uLL: /*0x100356746*/
      a4 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E36A0); /*0x10035678b*/
      a5 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a2 + 16)), (__m128i)xmmword_1015E35B0), a4); /*0x10035679b*/
      if ( _mm_testz_si128(a5, a5) ) /*0x10035679f*/
        goto LABEL_14; /*0x1003567a4*/
      goto LABEL_21; /*0x1003567a4*/
    case 0x14uLL: /*0x100356746*/
      a5 = _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_1015E3670); /*0x10035681a*/
      a4 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3680), a5); /*0x10035682a*/
      if ( _mm_testz_si128(a4, a4) ) /*0x100356833*/
        goto LABEL_14; /*0x100356833*/
      a5 = _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_1015E3670); /*0x10035683e*/
      a4 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3690), a5); /*0x10035684e*/
      if ( _mm_testz_si128(a4, a4) ) /*0x100356852*/
        goto LABEL_14; /*0x100356857*/
      goto LABEL_21; /*0x100356857*/
    case 0x17uLL: /*0x100356746*/
      a5 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 7)), (__m128i)xmmword_1015E3650); /*0x10035690b*/
      a4 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3660), a5); /*0x10035691b*/
      if ( !_mm_testz_si128(a4, a4) ) /*0x100356924*/
        goto LABEL_21; /*0x100356924*/
      goto LABEL_14; /*0x100356924*/
    case 0x18uLL: /*0x100356746*/
      a5 = _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(a2 + 16)), (__m128i)xmmword_1015E3630); /*0x1003567b8*/
      a4 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3640), a5); /*0x1003567c8*/
      if ( !_mm_testz_si128(a4, a4) ) /*0x1003567d1*/
        goto LABEL_21; /*0x1003567d1*/
LABEL_14:
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x10035685d*/
      v8 = *(volatile signed __int64 **)(a1 + 136); /*0x10035686c*/
      v9 = _InterlockedIncrement64(v8); /*0x100356873*/
      if ( (v9 < 0) ^ v7 | (v9 == 0) ) /*0x100356877*/
        goto LABEL_79; /*0x100356877*/
      v10 = *(volatile signed __int64 **)(a1 + 144); /*0x10035687d*/
      v11 = _InterlockedIncrement64(v10); /*0x100356884*/
      if ( (v11 < 0) ^ v7 | (v11 == 0) ) /*0x100356888*/
        goto LABEL_79; /*0x100356888*/
      memcpy(__dst, __src, 0x88u); /*0x1003568a4*/
      __dst[17] = v8; /*0x1003568a9*/
      __dst[18] = v10; /*0x1003568b0*/
      codexmate_lib::commands::hotspot::focus_main_window::h83b1e451cc929a03( /*0x1003568c1*/
        __src,
        (__int64)__dst,
        *(double *)a4.i64,
        *(double *)a5.i64);
      v12 = __src[0]; /*0x1003568c6*/
      result = 0x8000000000000000LL; /*0x1003568d7*/
      if ( __src[0] == 0x8000000000000000LL || !__src[0] ) /*0x1003568e6*/
        return result; /*0x1003568e6*/
      v13 = __src[1]; /*0x1003568ec*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1003568ec*/
    default:
      if ( a3 < 0xD ) /*0x1003567e0*/
        return result; /*0x1003567e0*/
LABEL_21:
      result = *(_QWORD *)a2 ^ 0x6363615F79617274LL; /*0x10035692a*/
      if ( result | *(_QWORD *)(a2 + 5) ^ 0x3A746E756F636361LL ) /*0x100356945*/
        return result; /*0x100356948*/
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__dst, a1); /*0x10035695b*/
      v15 = *(_QWORD *)(a1 + 136); /*0x100356960*/
      v16 = _InterlockedIncrement64((volatile signed __int64 *)v15); /*0x100356967*/
      if ( (v16 < 0) ^ v14 | (v16 == 0) /*0x10035697d*/
        || (v17 = *(volatile signed __int64 **)(a1 + 144),
            v18 = _InterlockedIncrement64(v17),
            (v18 < 0) ^ v14 | (v18 == 0)) )
      {
LABEL_79:
        BUG(); /*0x100356fc2*/
      }
      v19 = a3 - 13; /*0x100356983*/
      v20 = (const void *)(a2 + 13); /*0x100356987*/
      memcpy(v45, __dst, 0x88u); /*0x1003569a1*/
      v45[17] = v15; /*0x1003569a6*/
      v45[18] = v17; /*0x1003569ad*/
      if ( v19 < 0 ) /*0x1003569b7*/
      {
        v21 = 0; /*0x1003569b9*/
        goto LABEL_26; /*0x1003569b9*/
      }
      if ( v19 ) /*0x1003569cc*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, __dst); /*0x1003569ce*/
        v21 = 1; /*0x1003569d3*/
        v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1); /*0x1003569e1*/
        if ( !v22 ) /*0x1003569e9*/
LABEL_26:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v19); /*0x1003569bc*/
      }
      else
      {
        v22 = 1; /*0x1003569ed*/
      }
      v23 = (_QWORD *)(a2 + 13); /*0x1003569f2*/
      __s2 = (void *)v22; /*0x1003569f5*/
      memcpy((void *)v22, v20, v19); /*0x1003569ff*/
      v24 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v15 + 4872) + 16LL); /*0x100356a10*/
      v25 = v24; /*0x100356a15*/
      if ( !v24 ) /*0x100356a1b*/
      {
        __src[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x100356a89*/
        __src[1] = 76; /*0x100356a90*/
        __dst[0] = __src; /*0x100356aa2*/
        __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100356ab0*/
        core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100356acc*/
          &anon_0df76e0cec988e6dc281ac0519b88803_1033,
          __dst,
          &anon_0df76e0cec988e6dc281ac0519b88803_1034);
      }
      v26 = (_QWORD *)*v24; /*0x100356a1d*/
      if ( !*v24 ) /*0x100356a1d*/
        v26 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v24); /*0x100356ade*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v26); /*0x100356a29*/
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100356a38*/
      {
        v30 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v26, v20, v27, v28); /*0x100356ae6*/
        v29 = v30; /*0x100356aeb*/
        LOBYTE(v29) = v30 ^ 1; /*0x100356aed*/
        if ( *((_BYTE *)v25 + 8) ) /*0x100356afa*/
          goto LABEL_36; /*0x100356b01*/
      }
      else
      {
        v29 = 0; /*0x100356a44*/
        if ( *((_BYTE *)v25 + 8) ) /*0x100356a50*/
        {
LABEL_36:
          if ( !(_BYTE)v29 /*0x100356a72*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
          {
LABEL_71:
            if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v26, v23, v27, v29) ) /*0x100356f19*/
              *((_BYTE *)v25 + 8) = 1; /*0x100356f26*/
          }
LABEL_44:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v25); /*0x100356b4b*/
LABEL_45:
          if ( v19 ) /*0x100356b56*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v19, 1); /*0x100356b64*/
          return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v45); /*0x100356b70*/
        }
      }
      v55 = v29; /*0x100356b07*/
      v23 = v25 + 2; /*0x100356b0d*/
      codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(__dst); /*0x100356b18*/
      if ( LODWORD(__dst[0]) == 2 ) /*0x100356b24*/
      {
        v26 = &__dst[1]; /*0x100356b26*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__dst[1]); /*0x100356b2d*/
        if ( (_BYTE)v55 ) /*0x100356b36*/
          goto LABEL_44; /*0x100356b36*/
        goto LABEL_43; /*0x100356b36*/
      }
      v23 = __dst; /*0x100356b8e*/
      memcpy(__src, __dst, sizeof(__src)); /*0x100356b9a*/
      if ( LODWORD(__src[19]) != 2 && __src[44] == v19 ) /*0x100356baf*/
      {
        v23 = __s2; /*0x100356bb8*/
        if ( !memcmp((const void *)__src[43], __s2, v19) ) /*0x100356bc6*/
        {
          v26 = __src; /*0x100356efe*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(__src); /*0x100356f05*/
          if ( (_BYTE)v55 ) /*0x100356f0e*/
            goto LABEL_44; /*0x100356f0e*/
LABEL_43:
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100356b45*/
            goto LABEL_71; /*0x100356b45*/
          goto LABEL_44; /*0x100356b45*/
        }
      }
      v53 = 0x8000000000000000LL; /*0x100356bd7*/
      if ( __src[103] ) /*0x100356bde*/
      {
        v31 = 352LL * __src[103]; /*0x100356be7*/
        v32 = __src[102] + 208LL; /*0x100356bee*/
        while ( 1 ) /*0x100356c07*/
        {
          if ( *(_QWORD *)(v32 - 8) == v19 ) /*0x100356c0b*/
          {
            v23 = __s2; /*0x100356c11*/
            if ( !memcmp(*(const void **)(v32 - 16), __s2, v19) ) /*0x100356c18*/
              break; /*0x100356c18*/
          }
          v32 += 352; /*0x100356bf7*/
          v31 -= 352; /*0x100356bfe*/
          if ( !v31 ) /*0x100356c05*/
            goto LABEL_58; /*0x100356c05*/
        }
        v23 = (_QWORD *)v32; /*0x100356c28*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v32); /*0x100356c2b*/
        v53 = __dst[0]; /*0x100356c37*/
        v48 = __dst[1]; /*0x100356c42*/
        v49 = __dst[2]; /*0x100356c4d*/
      }
LABEL_58:
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(__src); /*0x100356c5b*/
      if ( !(_BYTE)v55 /*0x100356f30*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__src, v23, v33, v34) )
      {
        *((_BYTE *)v25 + 8) = 1; /*0x100356f3d*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v25); /*0x100356c86*/
      if ( v53 == 0x8000000000000000LL ) /*0x100356c96*/
        goto LABEL_45; /*0x100356c96*/
      v50 = v53; /*0x100356c9c*/
      v35 = v48; /*0x100356ca0*/
      v51 = v48; /*0x100356ca8*/
      v52 = v49; /*0x100356cac*/
      v36 = *(_QWORD *)(v15 + 4872) + 16LL; /*0x100356cb8*/
      LOBYTE(v35) = 1; /*0x100356cbc*/
      v55 = v35; /*0x100356cbe*/
      v37 = tauri::state::StateManager::try_get::hcc293bf6c473fbed(v36); /*0x100356cc6*/
      if ( !v37 ) /*0x100356ccc*/
      {
        __src[0] = &anon_0df76e0cec988e6dc281ac0519b88803_1032; /*0x100356f4e*/
        __src[1] = 85; /*0x100356f55*/
        __dst[0] = __src; /*0x100356f60*/
        __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100356f6e*/
        core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100356f8a*/
          &anon_0df76e0cec988e6dc281ac0519b88803_1033,
          __dst,
          &anon_0df76e0cec988e6dc281ac0519b88803_1034);
      }
      __dst[0] = &v50; /*0x100356cd6*/
      __dst[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100356ce4*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, &unk_1017BCA78, __dst); /*0x100356cfd*/
      tauri_plugin_dialog::_$LT$impl$u20$tauri_plugin_dialog..desktop..Dialog$LT$R$GT$$GT$::message::hd3026c763b255742(__dst); /*0x100356d10*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v37); /*0x100356d15*/
      v38 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x100356d24*/
      if ( !v38 ) /*0x100356d2c*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x100356f9b*/
      v39 = v38; /*0x100356d32*/
      *(_QWORD *)((char *)v38 + 7) = 0x9FBCEFB78FE5A6B4LL; /*0x100356d3f*/
      *v38 = 0xB4E8A28DE68788E5LL; /*0x100356d4d*/
      if ( __dst[19] ) /*0x100356d5a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[20], __dst[19], 1); /*0x100356d68*/
      __dst[19] = 15; /*0x100356d6d*/
      __dst[20] = v39; /*0x100356d78*/
      __dst[21] = 15; /*0x100356d7f*/
      memcpy(__src, __dst, 0x140u); /*0x100356d9d*/
      *(_DWORD *)((char *)&__src[40] + 1) = *(_DWORD *)((char *)&__dst[40] + 1); /*0x100356dae*/
      HIDWORD(__src[40]) = HIDWORD(__dst[40]); /*0x100356db4*/
      LOBYTE(__src[40]) = 1; /*0x100356dba*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __dst); /*0x100356dc1*/
      v40 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100356dd0*/
      if ( !v40 ) /*0x100356dd8*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100356fac*/
      v41 = v40; /*0x100356dde*/
      *(_QWORD *)((char *)v40 + 13) = 0x7865646F4320AF90LL; /*0x100356deb*/
      v40[1] = 0x20AF90E58D87E9B6LL; /*0x100356df9*/
      *v40 = 0xB9E5A28DE68788E5LL; /*0x100356e07*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(21, 1); /*0x100356e0a*/
      v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100356e19*/
      if ( !v42 ) /*0x100356e21*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100356fbd*/
      v43 = v42; /*0x100356e27*/
      *(_WORD *)(v42 + 4) = -30538; /*0x100356e2a*/
      *(_DWORD *)v42 = -426340379; /*0x100356e30*/
      core::ptr::drop_in_place$LT$tauri_plugin_dialog..models..MessageDialogButtons$GT$::hf79451a9cbc3918d(&__src[25]); /*0x100356e3d*/
      __src[25] = 0x8000000000000005LL; /*0x100356e46*/
      __src[26] = 21; /*0x100356e4d*/
      __src[27] = v41; /*0x100356e58*/
      __src[28] = 21; /*0x100356e5f*/
      __src[29] = 6; /*0x100356e6a*/
      __src[30] = v43; /*0x100356e75*/
      __src[31] = 6; /*0x100356e7c*/
      memcpy(__dst, __src, 0x148u); /*0x100356e9d*/
      memcpy(__src, v45, 0x98u); /*0x100356eb8*/
      __src[19] = v19; /*0x100356ebd*/
      __src[20] = __s2; /*0x100356ec8*/
      __src[21] = v19; /*0x100356ecf*/
      v55 = 0; /*0x100356ed6*/
      result = tauri_plugin_dialog::MessageDialogBuilder$LT$R$GT$::show::hbe47db2c99cb6a4f(__dst, __src); /*0x100356ee3*/
      v12 = v50; /*0x100356ee8*/
      if ( v50 ) /*0x100356eef*/
      {
        v13 = v51; /*0x100356ef5*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1003568f3*/
      }
      return result;
  }
}