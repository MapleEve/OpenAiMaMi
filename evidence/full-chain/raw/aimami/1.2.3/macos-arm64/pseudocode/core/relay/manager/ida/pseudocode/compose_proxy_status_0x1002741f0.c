// __ZN13codexmate_lib4core5relay7manager12RelayManager20compose_proxy_status @ 0x1002741f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::compose_proxy_status::h7248b3f51c4d799d(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  char v7; // r14
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(); // rcx
  _QWORD v11[2]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v12[3]; // [rsp+18h] [rbp-68h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h]
  _QWORD *v16; // [rsp+48h] [rbp-38h]
  __int16 v17; // [rsp+56h] [rbp-2Ah]

  v3 = a2[3]; /*0x100274204*/
  v4 = (_QWORD *)(v3 + 16); /*0x100274208*/
  v5 = *(__int64 **)(v3 + 16); /*0x10027420d*/
  if ( !v5 ) /*0x100274215*/
    v5 = (__int64 *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 16); /*0x1002742c3*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x10027421b*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x10027422a*/
  {
    v7 = 0; /*0x100274236*/
    if ( *(_BYTE *)(v3 + 24) ) /*0x100274243*/
      goto LABEL_5; /*0x10027424b*/
LABEL_9:
    if ( *(_QWORD *)(v3 + 32) ) /*0x1002742f5*/
    {
      v16 = (_QWORD *)(v3 + 16); /*0x100274301*/
      v17 = *(_WORD *)(v3 + 48); /*0x100274310*/
      v13 = v3 + 48; /*0x100274314*/
      v14 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10027431f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v12, &unk_1017B98DA, &v13); /*0x100274332*/
      v11[0] = v3 + 48; /*0x100274337*/
      v11[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x100274342*/
      a2 = &unk_1017B98BC; /*0x100274346*/
      v5 = &v13; /*0x10027434d*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v13, &unk_1017B98BC, v11); /*0x100274355*/
      *(_BYTE *)(a1 + 74) = 1; /*0x10027435a*/
      *(_WORD *)(a1 + 72) = v17; /*0x100274363*/
      v9 = v12[1]; /*0x10027436c*/
      *(_QWORD *)a1 = v12[0]; /*0x100274370*/
      *(_QWORD *)(a1 + 8) = v9; /*0x100274373*/
      *(_QWORD *)(a1 + 16) = v12[2]; /*0x10027437b*/
      v10 = v14; /*0x100274383*/
      *(_QWORD *)(a1 + 24) = v13; /*0x100274387*/
      *(_QWORD *)(a1 + 32) = v10; /*0x10027438b*/
      *(_QWORD *)(a1 + 40) = v15; /*0x100274393*/
      *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x10027439b*/
      v4 = v16; /*0x10027439f*/
      if ( v7 ) /*0x1002743ad*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1002743ad*/
    }
    else
    {
      *(_BYTE *)(a1 + 74) = 0; /*0x1002743b1*/
      *(_WORD *)(a1 + 72) = 0; /*0x1002743b6*/
      *(_QWORD *)a1 = 0; /*0x1002743bd*/
      *(_QWORD *)(a1 + 8) = 1; /*0x1002743c4*/
      *(_QWORD *)(a1 + 16) = 0; /*0x1002743cc*/
      *(_QWORD *)(a1 + 24) = 0; /*0x1002743d4*/
      *(_QWORD *)(a1 + 32) = 1; /*0x1002743dc*/
      *(_QWORD *)(a1 + 40) = 0; /*0x1002743e4*/
      *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x1002743f0*/
      if ( v7 ) /*0x1002743f7*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100274417*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100274430*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v5,
                             a2,
                             v6,
                             &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
    {
      *(_BYTE *)(v3 + 24) = 1; /*0x100274439*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10027443f*/
  }
  v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1002742d9*/
         v5,
         a2,
         v6,
         &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6)
     ^ 1;
  if ( !*(_BYTE *)(v3 + 24) ) /*0x1002742e7*/
    goto LABEL_9; /*0x1002742ef*/
LABEL_5:
  *(_BYTE *)(a1 + 74) = 0; /*0x100274251*/
  *(_WORD *)(a1 + 72) = 0; /*0x100274256*/
  *(_QWORD *)a1 = 0; /*0x10027425d*/
  *(_QWORD *)(a1 + 8) = 1; /*0x100274264*/
  *(_QWORD *)(a1 + 16) = 0; /*0x10027426c*/
  *(_QWORD *)(a1 + 24) = 0; /*0x100274274*/
  *(_QWORD *)(a1 + 32) = 1; /*0x10027427c*/
  *(_QWORD *)(a1 + 40) = 0; /*0x100274284*/
  *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x100274290*/
  if ( !v7 /*0x100274418*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           a2,
                           v6,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v3 + 24) = 1; /*0x100274425*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1002742a8*/
}