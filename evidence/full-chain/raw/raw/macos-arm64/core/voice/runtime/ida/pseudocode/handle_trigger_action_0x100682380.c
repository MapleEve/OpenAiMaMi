// __ZN13codexmate_lib4core5voice7runtime21handle_trigger_action @ 0x100682380 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::handle_trigger_action::h4d090c4954c0c158(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5,
        double result)
{
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // r14
  void *v11; // rdi
  __int64 v12; // rdx
  char v13; // r13
  void *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r15
  _QWORD *v17; // r14
  void *v18; // rdi
  __int64 v19; // rdx
  char v20; // r13
  void *v21; // r14
  void *v22; // rsi
  void *v23; // rdi
  void *v24; // [rsp+0h] [rbp-310h] BYREF
  void *v25; // [rsp+8h] [rbp-308h]
  void *__dst; // [rsp+10h] [rbp-300h]
  void *v27; // [rsp+2C8h] [rbp-48h]
  void *__src; // [rsp+2D0h] [rbp-40h]
  _QWORD *v29; // [rsp+2D8h] [rbp-38h]
  size_t __n; // [rsp+2E0h] [rbp-30h]

  if ( a3 == 4 ) /*0x10068239b*/
  {
    if ( *(_DWORD *)a2 != 1886352499 ) /*0x1006826c3*/
      return result; /*0x1006826c3*/
    goto LABEL_43; /*0x1006826c3*/
  }
  if ( a3 == 6 ) /*0x1006823a5*/
  {
    if ( *(_DWORD *)a2 ^ 0x636E6163 | *(unsigned __int16 *)(a2 + 4) ^ 0x6C65 ) /*0x100682544*/
    {
      if ( *(_DWORD *)a2 ^ 0x67676F74 | *(unsigned __int16 *)(a2 + 4) ^ 0x656C ) /*0x10068255d*/
        return result; /*0x10068255f*/
      if ( !a4 ) /*0x100682572*/
      {
LABEL_39:
        codexmate_lib::core::voice::runtime::handle_shortcut_toggle::he7aedf57bb83cd26(&v24, a1); /*0x100682691*/
        v22 = v24; /*0x1006826a0*/
        if ( v24 != (void *)0x8000000000000000LL && v24 ) /*0x1006826b2*/
        {
          v23 = v25; /*0x1006826b4*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x1006826f9*/
        }
        return result; /*0x1006826b2*/
      }
      __src = a4; /*0x100682578*/
      __n = a5; /*0x10068257c*/
      v15 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x100682583*/
      v16 = v15; /*0x100682588*/
      v17 = (_QWORD *)(v15 + 32); /*0x10068258b*/
      v18 = *(void **)(v15 + 32); /*0x10068258f*/
      if ( !v18 ) /*0x100682596*/
        v18 = (void *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v15 + 32); /*0x100682756*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v18); /*0x10068259c*/
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006825ae*/
      {
        v20 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x10068276c*/
                v18,
                a2,
                v19,
                &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6)
            ^ 1;
        if ( !*(_BYTE *)(v16 + 40) ) /*0x100682770*/
          goto LABEL_29; /*0x100682777*/
      }
      else
      {
        v20 = 0; /*0x1006825b4*/
        if ( !*(_BYTE *)(v16 + 40) ) /*0x1006825b7*/
        {
LABEL_29:
          if ( *(_BYTE *)(v16 + 908) == 5 || !*(_BYTE *)(v16 + 908) ) /*0x1006825c4*/
          {
            v29 = v17; /*0x1006825d9*/
            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v24, __n, 0, 1, 1); /*0x1006825f5*/
            v27 = v25; /*0x100682601*/
            if ( (_BYTE)v24 ) /*0x10068260c*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, __dst); /*0x1006827cd*/
            v21 = __dst; /*0x100682612*/
            v18 = __dst; /*0x100682619*/
            memcpy(__dst, __src, __n); /*0x100682624*/
            a2 = *(_QWORD *)(v16 + 592); /*0x100682629*/
            if ( a2 != 0x8000000000000000LL && a2 ) /*0x10068263d*/
            {
              v18 = *(void **)(v16 + 600); /*0x10068263f*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, a2, 1); /*0x10068264b*/
            }
            *(_QWORD *)(v16 + 592) = v27; /*0x100682654*/
            *(_QWORD *)(v16 + 600) = v21; /*0x10068265b*/
            *(_QWORD *)(v16 + 608) = __n; /*0x100682666*/
            v17 = v29; /*0x10068266d*/
          }
        }
      }
      if ( !v20 /*0x100682799*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v18,
                               a2,
                               v19,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
      {
        *(_BYTE *)(v16 + 40) = 1; /*0x1006827a6*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v17); /*0x10068268c*/
      goto LABEL_39; /*0x10068268c*/
    }
LABEL_43:
    codexmate_lib::core::voice::runtime::stop_capture::h955d7093ac8b0a2b(&v24, a1); /*0x1006826c5*/
    if ( (_DWORD)v24 != 2 ) /*0x1006826db*/
      goto LABEL_21; /*0x1006826db*/
LABEL_44:
    v22 = v25; /*0x1006826e1*/
    if ( !v25 ) /*0x1006826eb*/
      return result; /*0x1006826eb*/
    v23 = __dst; /*0x1006826ed*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x1006826ed*/
  }
  if ( a3 == 5 && !(*(_DWORD *)a2 ^ 0x72617473 | *(unsigned __int8 *)(a2 + 4) ^ 0x74) ) /*0x1006823c3*/
  {
    if ( !a4 ) /*0x1006823ce*/
      goto LABEL_20; /*0x1006823ce*/
    __src = a4; /*0x1006823d4*/
    v8 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x1006823de*/
    v9 = v8; /*0x1006823e3*/
    v10 = (_QWORD *)(v8 + 32); /*0x1006823e6*/
    v11 = *(void **)(v8 + 32); /*0x1006823ea*/
    if ( !v11 ) /*0x1006823f1*/
      v11 = (void *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v8 + 32); /*0x100682718*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11); /*0x1006823f7*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100682406*/
    {
      v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x10068272e*/
              v11,
              a2,
              v12,
              &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6)
          ^ 1;
      if ( !*(_BYTE *)(v9 + 40) ) /*0x10068273c*/
        goto LABEL_10; /*0x100682743*/
    }
    else
    {
      v13 = 0; /*0x100682412*/
      if ( !*(_BYTE *)(v9 + 40) ) /*0x10068241f*/
      {
LABEL_10:
        if ( *(_BYTE *)(v9 + 908) == 5 || !*(_BYTE *)(v9 + 908) ) /*0x10068242c*/
        {
          __n = (size_t)v10; /*0x100682441*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v24, a5, 0, 1, 1); /*0x10068245c*/
          v29 = v25; /*0x100682468*/
          if ( (_BYTE)v24 ) /*0x100682473*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, __dst); /*0x1006827bb*/
          v14 = __dst; /*0x100682479*/
          v11 = __dst; /*0x100682480*/
          memcpy(__dst, __src, a5); /*0x10068248a*/
          a2 = *(_QWORD *)(v9 + 592); /*0x10068248f*/
          if ( a2 != 0x8000000000000000LL && a2 ) /*0x1006824ac*/
          {
            v11 = *(void **)(v9 + 600); /*0x1006824ae*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, a2, 1); /*0x1006824ba*/
          }
          *(_QWORD *)(v9 + 592) = v29; /*0x1006824cd*/
          *(_QWORD *)(v9 + 600) = v14; /*0x1006824d4*/
          *(_QWORD *)(v9 + 608) = a5; /*0x1006824db*/
          v10 = (_QWORD *)__n; /*0x1006824e2*/
        }
      }
    }
    if ( !v13 /*0x100682782*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v11,
                             a2,
                             0x7FFFFFFFFFFFFFFFLL,
                             &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
    {
      *(_BYTE *)(v9 + 40) = 1; /*0x10068278f*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10); /*0x100682501*/
LABEL_20:
    codexmate_lib::core::voice::runtime::start_capture::hefa5b6a2d79b1300(&v24, a1, result); /*0x100682506*/
    if ( (_DWORD)v24 != 2 ) /*0x10068251c*/
    {
LABEL_21:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceRuntimeStatusPayload$GT$::hf84278f7de36477f(&v24); /*0x100682522*/
      return result; /*0x10068252e*/
    }
    goto LABEL_44; /*0x10068251c*/
  }
  return result; /*0x1006826fe*/
}