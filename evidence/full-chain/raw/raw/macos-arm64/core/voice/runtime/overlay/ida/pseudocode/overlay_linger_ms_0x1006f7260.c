// __ZN13codexmate_lib4core5voice7runtime7overlay17overlay_linger_ms @ 0x1006f7260 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::overlay::overlay_linger_ms::h671f3dfdfbf66e59(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  char v7; // r15
  __int64 v8; // r12
  int v10; // eax
  __int64 v11; // rax

  v2 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x1006f726e*/
  v3 = v2; /*0x1006f7273*/
  v4 = (_QWORD *)(v2 + 32); /*0x1006f7276*/
  v5 = *(_QWORD *)(v2 + 32); /*0x1006f727a*/
  if ( !v5 ) /*0x1006f7281*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v2 + 32); /*0x1006f72f2*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1006f7283*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006f7292*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1006f7305*/
           v5,
           a2,
           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
           v6)
       ^ 1;
    if ( *(_BYTE *)(v3 + 40) ) /*0x1006f7313*/
      goto LABEL_5; /*0x1006f731a*/
LABEL_10:
    v10 = *(unsigned __int8 *)(v3 + 908); /*0x1006f731c*/
    if ( v10 == 4 ) /*0x1006f7327*/
    {
      v8 = 0; /*0x1006f733c*/
    }
    else if ( v10 == 5 ) /*0x1006f732c*/
    {
      v8 = 1; /*0x1006f732e*/
    }
    else if ( *(_QWORD *)(v3 + 640) == 0x8000000000000000LL /*0x1006f7377*/
           || *(_QWORD *)(v3 + 656) != 9
           || (v11 = *(_QWORD *)(v3 + 648),
               v6 = *(_QWORD *)v11 ^ 0x63656570735F6F6ELL,
               v6 | *(unsigned __int8 *)(v11 + 8) ^ 0x68LL) )
    {
      v5 = *(_QWORD *)(v3 + 336); /*0x1006f737c*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v5, *(_QWORD *)(v3 + 344)); /*0x1006f738a*/
      v8 = 1; /*0x1006f73a1*/
    }
    else
    {
      v8 = 1; /*0x1006f73bd*/
    }
    goto LABEL_6; /*0x1006f733a*/
  }
  v7 = 0; /*0x1006f729a*/
  if ( !*(_BYTE *)(v3 + 40) ) /*0x1006f72ae*/
    goto LABEL_10; /*0x1006f72ae*/
LABEL_5:
  v8 = 1; /*0x1006f72b0*/
LABEL_6:
  if ( !v7 /*0x1006f73ce*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v6) )
  {
    *(_BYTE *)(v3 + 40) = 1; /*0x1006f73db*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006f72d0*/
  return v8; /*0x1006f72df*/
}