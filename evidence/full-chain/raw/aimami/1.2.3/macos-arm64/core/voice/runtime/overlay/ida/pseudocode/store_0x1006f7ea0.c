// __ZN13codexmate_lib4core5voice7runtime7overlay22VoiceSearchResultState5store @ 0x1006f7ea0 | 基线 same-set
void __fastcall codexmate_lib::core::voice::runtime::overlay::VoiceSearchResultState::store::h6eda1f6a3378cea0(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  _BYTE *v15; // [rsp+8h] [rbp-38h]
  char v16; // [rsp+14h] [rbp-2Ch]

  v4 = *a1; /*0x1006f7eb7*/
  if ( !v4 ) /*0x1006f7ebd*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a1); /*0x1006f7ffc*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006f7ec3*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006f7edd*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006f8004*/
    v7 = a1 + 1; /*0x1006f8009*/
    v6 = *((unsigned __int8 *)a1 + 8); /*0x1006f800d*/
    if ( (_BYTE)v6 ) /*0x1006f8014*/
    {
      if ( !v14 ) /*0x1006f8018*/
      {
LABEL_6:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a1); /*0x1006f7f03*/
        v8 = *a2; /*0x1006f7f0b*/
        if ( *a2 ) /*0x1006f7f0b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], v8, 1); /*0x1006f7f1c*/
        v9 = a2[3]; /*0x1006f7f21*/
        if ( v9 ) /*0x1006f7f28*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[4], v9, 1); /*0x1006f7f45*/
        return; /*0x1006f7f45*/
      }
LABEL_5:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006f8023*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) )
      {
        *v7 = 1; /*0x1006f8030*/
      }
      goto LABEL_6; /*0x1006f8034*/
    }
    v15 = a1 + 1; /*0x1006f8039*/
    v10 = v14 ^ 1; /*0x1006f803d*/
  }
  else
  {
    v7 = a1 + 1; /*0x1006f7ee9*/
    if ( *((_BYTE *)a1 + 8) ) /*0x1006f7eed*/
      goto LABEL_5; /*0x1006f7ef4*/
    v15 = a1 + 1; /*0x1006f7f4a*/
    v10 = 0; /*0x1006f7f4e*/
  }
  v11 = a1[2]; /*0x1006f7f54*/
  if ( v11 != 0x8000000000000000LL ) /*0x1006f7f5f*/
  {
    v16 = v10; /*0x1006f7f64*/
    if ( v11 ) /*0x1006f7f67*/
    {
      v4 = a1[3]; /*0x1006f7f69*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v11, 1); /*0x1006f7f72*/
      v10 = v16; /*0x1006f7f77*/
    }
    v11 = a1[5]; /*0x1006f7f7a*/
    if ( v11 ) /*0x1006f7f81*/
    {
      v4 = a1[6]; /*0x1006f7f83*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v11, 1); /*0x1006f7f8c*/
      v10 = v16; /*0x1006f7f91*/
    }
  }
  a1[7] = a2[5]; /*0x1006f7f98*/
  a1[6] = a2[4]; /*0x1006f7fa0*/
  a1[5] = a2[3]; /*0x1006f7fa8*/
  a1[4] = a2[2]; /*0x1006f7fb0*/
  v12 = *a2; /*0x1006f7fb4*/
  v13 = a2[1]; /*0x1006f7fb7*/
  a1[3] = v13; /*0x1006f7fbb*/
  a1[2] = v12; /*0x1006f7fbf*/
  if ( !v10 /*0x1006f8044*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, v11, v12, v13) )
  {
    *v15 = 1; /*0x1006f8051*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a1); /*0x1006f7fe0*/
}