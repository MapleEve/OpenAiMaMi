// __ZN13codexmate_lib4core5voice7runtime11emit_status @ 0x10066b5d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // r13
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE __dst[712]; // [rsp+8h] [rbp-628h] BYREF
  _QWORD __src[89]; // [rsp+2D0h] [rbp-360h] BYREF
  __int64 **v20; // [rsp+598h] [rbp-98h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+5A0h] [rbp-90h]
  __int64 v22; // [rsp+5A8h] [rbp-88h]
  __int64 v23; // [rsp+5B0h] [rbp-80h]
  __int64 v24; // [rsp+5B8h] [rbp-78h]
  __int64 v25; // [rsp+5C0h] [rbp-70h]
  __int64 v26; // [rsp+5C8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+5D0h] [rbp-60h]
  __int64 v28; // [rsp+5D8h] [rbp-58h]
  _DWORD v29[2]; // [rsp+5E0h] [rbp-50h]
  __int64 *v30; // [rsp+5E8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+5F0h] [rbp-40h]
  __int64 v32; // [rsp+5F8h] [rbp-38h]
  int v33; // [rsp+600h] [rbp-30h]
  char v34; // [rsp+606h] [rbp-2Ah] BYREF
  char v35; // [rsp+607h] [rbp-29h]

  v3 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x10066b5ed*/
  v4 = v3; /*0x10066b5f2*/
  v5 = (_QWORD *)(v3 + 32); /*0x10066b5f5*/
  v6 = *(_QWORD *)(v3 + 32); /*0x10066b5f9*/
  if ( !v6 ) /*0x10066b600*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 32); /*0x10066b701*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x10066b606*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x10066b709*/
    LOBYTE(v13) = v13 ^ 1; /*0x10066b70e*/
    v33 = v13; /*0x10066b710*/
    if ( *(_BYTE *)(v4 + 40) ) /*0x10066b71d*/
      goto LABEL_5; /*0x10066b724*/
  }
  else
  {
    v33 = 0; /*0x10066b621*/
    if ( *(_BYTE *)(v4 + 40) )
    {
LABEL_5:
      v30 = nullptr; /*0x10066b63f*/
      v31 = 1; /*0x10066b647*/
      v32 = 0; /*0x10066b64f*/
      v22 = 1610612768; /*0x10066b657*/
      v20 = &v30; /*0x10066b666*/
      v21 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066b674*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v20) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066b89b*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v34,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v10 = v30; /*0x10066b69e*/
      v11 = v31; /*0x10066b6a2*/
      v35 = v32; /*0x10066b6aa*/
      v29[0] = *(_DWORD *)((char *)&v32 + 1); /*0x10066b6b0*/
      *(_DWORD *)((char *)v29 + 3) = HIDWORD(v32); /*0x10066b6b6*/
      if ( !(_BYTE)v33
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v9,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v4 + 40) = 1; /*0x10066b8af*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x10066b6d5*/
      *(_QWORD *)a1 = v10; /*0x10066b6da*/
      *(_QWORD *)(a1 + 8) = v11; /*0x10066b6dd*/
      *(_BYTE *)(a1 + 16) = v35; /*0x10066b6e5*/
      v12 = *(_DWORD *)((char *)v29 + 3); /*0x10066b6eb*/
      *(_DWORD *)(a1 + 17) = v29[0]; /*0x10066b6ee*/
      *(_DWORD *)(a1 + 20) = v12; /*0x10066b6f1*/
      return a1; /*0x10066b6f4*/
    }
  }
  codexmate_lib::core::voice::runtime::VoiceRuntimeInner::to_payload::h8404c411b85a7667(__src, v4 + 48); /*0x10066b738*/
  if ( !(_BYTE)v33 /*0x10066b8b9*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__src, v4 + 48, v14, v15) )
  {
    *(_BYTE *)(v4 + 40) = 1; /*0x10066b8c6*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x10066b759*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10066b774*/
  tauri::Emitter::emit::h855dc6bcd68b52ea(&v20, a2, "voice-runtime-updatedstop\nfailed to spawn thread", 21, __dst); /*0x10066b792*/
  if ( v20 == (__int64 **)0x8000000000000025LL ) /*0x10066b7a2*/
  {
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10066b7a7*/
  }
  else
  {
    __src[5] = v25; /*0x10066b7b3*/
    __src[4] = v24; /*0x10066b7be*/
    __src[3] = v23; /*0x10066b7c9*/
    __src[2] = v22; /*0x10066b7d7*/
    __src[1] = v21; /*0x10066b7ec*/
    __src[0] = v20; /*0x10066b7f3*/
    v26 = 0; /*0x10066b7fa*/
    v27 = 1; /*0x10066b802*/
    v28 = 0; /*0x10066b80a*/
    v32 = 1610612768; /*0x10066b812*/
    v30 = &v26; /*0x10066b81e*/
    v31 = (__int64)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066b829*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x10066b838*/
                            __src,
                            &v30) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066b8ee*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v34,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    *(_QWORD *)(a1 + 16) = v28; /*0x10066b849*/
    v16 = v26; /*0x10066b84d*/
    *(_QWORD *)(a1 + 8) = v27; /*0x10066b855*/
    *(_QWORD *)a1 = v16; /*0x10066b859*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x10066b863*/
  }
  return a1; /*0x10066b86b*/
}