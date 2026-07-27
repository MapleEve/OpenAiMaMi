// __ZN13codexmate_lib4core5voice7runtime22handle_shortcut_toggle @ 0x1006844a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::handle_shortcut_toggle::he7aedf57bb83cd26(
        __int64 a1,
        __int64 a2,
        double a3)
{
  __int64 v4; // rax
  _BYTE *v5; // r15
  _QWORD *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 v11; // r14
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rax
  _QWORD *v19; // [rsp+0h] [rbp-5E0h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+8h] [rbp-5D8h]
  __int64 v21; // [rsp+10h] [rbp-5D0h]
  __int64 v22; // [rsp+18h] [rbp-5C8h]
  _BYTE __src[680]; // [rsp+20h] [rbp-5C0h] BYREF
  _QWORD *v24; // [rsp+2C8h] [rbp-318h] BYREF
  __int64 v25; // [rsp+2D0h] [rbp-310h]
  __int64 v26; // [rsp+2D8h] [rbp-308h]
  __int64 v27; // [rsp+2E0h] [rbp-300h]
  _BYTE __dst[680]; // [rsp+2E8h] [rbp-2F8h] BYREF
  _DWORD v29[2]; // [rsp+590h] [rbp-50h]
  __int64 (__fastcall **v30)(); // [rsp+598h] [rbp-48h] BYREF
  __int64 v31; // [rsp+5A0h] [rbp-40h]
  __int64 v32; // [rsp+5A8h] [rbp-38h]
  int v33; // [rsp+5B0h] [rbp-30h]
  char v34; // [rsp+5B7h] [rbp-29h]

  v4 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x1006844bd*/
  v5 = (_BYTE *)v4; /*0x1006844c2*/
  v6 = (_QWORD *)(v4 + 32); /*0x1006844c5*/
  v7 = *(_QWORD *)(v4 + 32); /*0x1006844c9*/
  if ( !v7 ) /*0x1006844d0*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 32); /*0x1006845ed*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1006844d6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1006845f8*/
            v7,
            a2,
            v8,
            &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6);
    LOBYTE(v13) = v13 ^ 1; /*0x100684600*/
    v33 = v13; /*0x100684602*/
    if ( v5[40] ) /*0x10068460f*/
      goto LABEL_5; /*0x100684616*/
  }
  else
  {
    v33 = 0; /*0x1006844f1*/
    if ( v5[40] )
    {
LABEL_5:
      v24 = nullptr; /*0x10068450f*/
      v25 = 1; /*0x10068451a*/
      v26 = 0; /*0x100684525*/
      v21 = 1610612768; /*0x100684530*/
      v19 = &v24; /*0x100684542*/
      v20 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100684550*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v19) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100684787*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v30,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v10 = v24; /*0x10068457a*/
      v11 = v25; /*0x100684581*/
      v34 = v26; /*0x10068458f*/
      v29[0] = *(_DWORD *)((char *)&v26 + 1); /*0x100684598*/
      *(_DWORD *)((char *)v29 + 3) = HIDWORD(v26); /*0x1006845a1*/
      if ( !(_BYTE)v33
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v9,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        v5[40] = 1; /*0x10068479b*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x1006845c1*/
      *(_QWORD *)a1 = v10; /*0x1006845c6*/
      *(_QWORD *)(a1 + 8) = v11; /*0x1006845c9*/
      *(_BYTE *)(a1 + 16) = v34; /*0x1006845d1*/
      v12 = *(_DWORD *)((char *)v29 + 3); /*0x1006845d7*/
      *(_DWORD *)(a1 + 17) = v29[0]; /*0x1006845da*/
      *(_DWORD *)(a1 + 20) = v12; /*0x1006845dd*/
      return a1; /*0x1006845e0*/
    }
  }
  if ( v5[898] ) /*0x10068461c*/
  {
    v14 = (unsigned __int8)v5[908]; /*0x100684626*/
    if ( !(_BYTE)v33 /*0x1006847a5*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v7,
                             a2,
                             v8,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      v5[40] = 1; /*0x1006847b2*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x10068464e*/
    v15 = 6; /*0x100684653*/
    if ( _bittest(&v15, v14) ) /*0x10068465c*/
    {
      codexmate_lib::core::voice::runtime::stop_capture::h955d7093ac8b0a2b(&v19, a2); /*0x1006846af*/
    }
    else
    {
      v16 = 24; /*0x10068465e*/
      if ( _bittest(&v16, v14) ) /*0x100684667*/
        goto LABEL_23; /*0x100684667*/
      codexmate_lib::core::voice::runtime::start_capture::hefa5b6a2d79b1300(&v19, a2, a3); /*0x100684677*/
    }
    v30 = v20; /*0x1006846c2*/
    v31 = v21; /*0x1006846cd*/
    v32 = v22; /*0x1006846d8*/
    if ( v19 == (_QWORD *)2 ) /*0x1006846e0*/
    {
      *(_QWORD *)(a1 + 16) = v32; /*0x1006846e6*/
      v17 = (unsigned __int64)v30; /*0x1006846ea*/
      *(_QWORD *)(a1 + 8) = v31; /*0x1006846f2*/
LABEL_24:
      *(_QWORD *)a1 = v17; /*0x100684751*/
      return a1; /*0x100684751*/
    }
    memcpy(__dst, __src, sizeof(__dst)); /*0x10068470b*/
    v25 = (__int64)v30; /*0x100684718*/
    v26 = v31; /*0x10068471f*/
    v27 = v32; /*0x10068472a*/
    v24 = v19; /*0x100684731*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceRuntimeStatusPayload$GT$::hf84278f7de36477f(&v24); /*0x10068473f*/
LABEL_23:
    v17 = 0x8000000000000000LL; /*0x100684744*/
    goto LABEL_24; /*0x10068474e*/
  }
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100684682*/
  if ( !(_BYTE)v33 /*0x1006847bc*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v7,
                           a2,
                           v8,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    v5[40] = 1; /*0x1006847c9*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x10068469b*/
  return a1; /*0x100684757*/
}