// __ZN13codexmate_lib4core5voice7runtime20remove_mode_shortcut @ 0x10067eb70 | 基线 same-set
char *__fastcall codexmate_lib::core::voice::runtime::remove_mode_shortcut::hb36ae4780f9670c5(
        char *__dst,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r15
  char v17; // r13
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  __int64 **v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  _QWORD *v25; // r12
  __int64 v26; // r13
  _QWORD *v27; // r14
  __int64 **v28; // r14
  __int64 v29; // r14
  __int64 *v30; // rax
  __int64 **v32; // [rsp+10h] [rbp-D0h]
  _QWORD *v33; // [rsp+18h] [rbp-C8h]
  __int64 *v34; // [rsp+20h] [rbp-C0h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+28h] [rbp-B8h]
  __int64 v36; // [rsp+30h] [rbp-B0h]
  _QWORD *v37; // [rsp+38h] [rbp-A8h]
  __int64 **v38; // [rsp+40h] [rbp-A0h]
  _QWORD *v39; // [rsp+50h] [rbp-90h]
  __int64 **v40; // [rsp+58h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-60h] BYREF
  __int64 v42; // [rsp+88h] [rbp-58h]
  __int64 v43; // [rsp+90h] [rbp-50h]
  __int64 v44; // [rsp+98h] [rbp-48h]
  _DWORD v45[2]; // [rsp+A0h] [rbp-40h]
  _QWORD *v46; // [rsp+A8h] [rbp-38h]
  char v47; // [rsp+B3h] [rbp-2Dh] BYREF
  int v48; // [rsp+B4h] [rbp-2Ch]

  v44 = a2; /*0x10067eb8d*/
  v7 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x10067eb94*/
  v8 = v7; /*0x10067eb99*/
  v9 = v7 + 32; /*0x10067eb9c*/
  v10 = *(_QWORD *)(v7 + 32); /*0x10067eba0*/
  if ( !v10 ) /*0x10067eba7*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v7 + 32); /*0x10067ecb1*/
  v46 = (_QWORD *)v9; /*0x10067ebad*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v10); /*0x10067ebbb*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, a2, v11, v12); /*0x10067ecb9*/
    LOBYTE(v19) = v19 ^ 1; /*0x10067ecbe*/
    v48 = v19; /*0x10067ecc0*/
    if ( *(_BYTE *)(v8 + 40) ) /*0x10067ecc3*/
      goto LABEL_5; /*0x10067ecca*/
  }
  else
  {
    v48 = 0; /*0x10067ebd6*/
    if ( *(_BYTE *)(v8 + 40) )
    {
LABEL_5:
      v41 = 0; /*0x10067ebea*/
      v42 = 1; /*0x10067ebf2*/
      v43 = 0; /*0x10067ebfa*/
      v36 = 1610612768; /*0x10067ec02*/
      v34 = &v41; /*0x10067ec11*/
      v35 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10067ec1f*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v34) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10067ee86*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v47,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v44 = v8; /*0x10067ec49*/
      v14 = v46; /*0x10067ec4d*/
      v15 = v41; /*0x10067ec51*/
      v16 = v42; /*0x10067ec55*/
      v17 = v43; /*0x10067ec59*/
      v45[0] = *(_DWORD *)((char *)&v43 + 1); /*0x10067ec61*/
      *(_DWORD *)((char *)v45 + 3) = HIDWORD(v43); /*0x10067ec67*/
      if ( !(_BYTE)v48
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v13,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v44 + 40) = 1; /*0x10067ee9e*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v14); /*0x10067ec87*/
      *((_QWORD *)__dst + 1) = v15; /*0x10067ec8c*/
      *((_QWORD *)__dst + 2) = v16; /*0x10067ec90*/
      __dst[24] = v17; /*0x10067ec94*/
      v18 = *(_DWORD *)((char *)v45 + 3); /*0x10067ec9b*/
      *(_DWORD *)(__dst + 25) = v45[0]; /*0x10067ec9e*/
      *((_DWORD *)__dst + 7) = v18; /*0x10067eca1*/
      goto LABEL_25; /*0x10067eca4*/
    }
  }
  v20 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v8 + 808, a3, a4); /*0x10067ecee*/
  v21 = &v34; /*0x10067ecf3*/
  hashbrown::raw::RawTable$LT$T$C$A$GT$::remove_entry::h8fb3bf5d90d72ad0(&v34, v8 + 776, v20, a3, a4); /*0x10067ed06*/
  v24 = v34; /*0x10067ed0b*/
  v25 = v46; /*0x10067ed1f*/
  if ( v34 != (__int64 *)0x8000000000000000LL ) /*0x10067ed23*/
  {
    v26 = (__int64)v37; /*0x10067ed25*/
    v21 = v38; /*0x10067ed2c*/
    v27 = v39; /*0x10067ed33*/
    v32 = v40; /*0x10067ed41*/
    if ( v34 ) /*0x10067ed4b*/
    {
      v33 = v39; /*0x10067ed4d*/
      v28 = v38; /*0x10067ed54*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v34, 1); /*0x10067ed63*/
      v21 = v28; /*0x10067ed68*/
      v27 = v33; /*0x10067ed6b*/
    }
    if ( !__OFSUB__(-v26, 1) ) /*0x10067ed78*/
    {
      if ( v26 ) /*0x10067ed7a*/
      {
        v24 = (_QWORD *)v26; /*0x10067ed81*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v26, 1); /*0x10067ed84*/
      }
      if ( v27 ) /*0x10067ed8c*/
      {
        v21 = v32; /*0x10067ed93*/
        v24 = v27; /*0x10067ed9a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v27, 1); /*0x10067ed9d*/
      }
    }
  }
  if ( !(_BYTE)v48 /*0x10067eea7*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, v24, v22, v23) )
  {
    *(_BYTE *)(v8 + 40) = 1; /*0x10067eeb4*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v25); /*0x10067edc3*/
  v29 = v44; /*0x10067edcf*/
  codexmate_lib::core::voice::runtime::persist_per_mode_shortcuts::h77a88a4d47aef74a(&v34, v44); /*0x10067edd6*/
  if ( v34 != (__int64 *)0x8000000000000000LL /*0x10067ee1c*/
    || (codexmate_lib::core::voice::runtime::restart_trigger_listener_internal::hbf9d14de69187c5e((__int64)&v34, v29),
        v34 != (__int64 *)0x8000000000000000LL)
    || (codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)&v34, v29),
        v34 != (__int64 *)0x8000000000000000LL) )
  {
    *((_QWORD *)__dst + 3) = v36; /*0x10067ee32*/
    v30 = v34; /*0x10067ee36*/
    *((_QWORD *)__dst + 2) = v35; /*0x10067ee44*/
    *((_QWORD *)__dst + 1) = v30; /*0x10067ee48*/
LABEL_25:
    *(_QWORD *)__dst = 2; /*0x10067ee4c*/
    return __dst; /*0x10067ee4c*/
  }
  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(__dst, v29); /*0x10067ee24*/
  return __dst; /*0x10067ee56*/
}