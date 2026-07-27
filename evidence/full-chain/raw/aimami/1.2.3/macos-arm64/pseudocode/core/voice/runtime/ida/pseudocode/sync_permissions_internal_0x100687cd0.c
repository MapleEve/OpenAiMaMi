// __ZN13codexmate_lib4core5voice7runtime25sync_permissions_internal @ 0x100687cd0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::sync_permissions_internal::h1300a66e8cd539dc(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r15
  int v5; // r13d
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  char v12; // cl
  char v13; // r12
  __int64 result; // rax
  int v15; // ecx
  _QWORD v16[3]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v17; // [rsp+20h] [rbp-50h]
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  __int64 v20; // [rsp+38h] [rbp-38h]
  _BYTE v21[7]; // [rsp+40h] [rbp-30h]
  _BYTE v22[41]; // [rsp+47h] [rbp-29h] BYREF

  v2 = a2; /*0x100687ce1*/
  if ( codexmate_lib::core::voice::runtime::VOICE_TCC_DIAG_ONCE::h6b9415cfd0b78888 ) /*0x100687cf1*/
  {
    LOBYTE(v18) = 1; /*0x100687e11*/
    v16[0] = &v18; /*0x100687e19*/
    a2 = 0; /*0x100687e36*/
    std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x100687e38*/
      &codexmate_lib::core::voice::runtime::VOICE_TCC_DIAG_ONCE::h6b9415cfd0b78888,
      0,
      v16,
      &unk_101968250,
      &off_101967AD0);
  }
  v4 = tauri::Manager::state::hb5ba04dc9da9798f(v2); /*0x100687cff*/
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 24) + 24LL))(*(_QWORD *)(v4 + 16)); /*0x100687d0d*/
  v6 = (_QWORD *)(v4 + 32); /*0x100687d10*/
  v7 = *(_QWORD *)(v4 + 32); /*0x100687d14*/
  if ( !v7 ) /*0x100687d1b*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 32); /*0x100687e4a*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x100687d21*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100687e60*/
           v7,
           a2,
           v8,
           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6)
       ^ 1;
    if ( *(_BYTE *)(v4 + 40) ) /*0x100687e6e*/
      goto LABEL_7; /*0x100687e75*/
  }
  else
  {
    v9 = 0; /*0x100687d3c*/
    if ( *(_BYTE *)(v4 + 40) )
    {
LABEL_7:
      v18 = 0; /*0x100687d56*/
      v19 = 1; /*0x100687d5e*/
      v20 = 0; /*0x100687d66*/
      v16[2] = 1610612768; /*0x100687d6e*/
      v16[0] = &v18; /*0x100687d7a*/
      v16[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100687d85*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v16) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100687ed7*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v22,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v11 = v18; /*0x100687da6*/
      v17 = v19; /*0x100687dae*/
      v12 = v9; /*0x100687db2*/
      v13 = v20; /*0x100687db5*/
      *(_DWORD *)v21 = *(_DWORD *)((char *)&v20 + 1); /*0x100687dbd*/
      *(_DWORD *)&v21[3] = HIDWORD(v20); /*0x100687dc3*/
      if ( !v12
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v10,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v4 + 40) = 1; /*0x100687eeb*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100687dea*/
      *(_QWORD *)a1 = v11; /*0x100687def*/
      *(_QWORD *)(a1 + 8) = v17; /*0x100687df6*/
      *(_BYTE *)(a1 + 16) = v13; /*0x100687dfa*/
      result = *(unsigned int *)v21; /*0x100687dfe*/
      v15 = *(_DWORD *)&v21[3]; /*0x100687e01*/
      *(_DWORD *)(a1 + 17) = *(_DWORD *)v21; /*0x100687e04*/
      *(_DWORD *)(a1 + 20) = v15; /*0x100687e08*/
      return result; /*0x100687e0c*/
    }
  }
  *(_WORD *)(v4 + 905) = v5; /*0x100687e7b*/
  *(_BYTE *)(v4 + 907) = BYTE2(v5); /*0x100687e87*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100687e92*/
  if ( !v9 /*0x100687ef5*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v7,
                           a2,
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v4 + 40) = 1; /*0x100687efe*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100687eaa*/
}