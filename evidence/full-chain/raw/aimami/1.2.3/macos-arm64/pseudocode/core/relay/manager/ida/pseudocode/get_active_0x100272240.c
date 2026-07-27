// __ZN13codexmate_lib4core5relay7manager12RelayManager10get_active @ 0x100272240 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::get_active::he74a40ddd4d37459(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r13
  __int64 *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r12
  int v12; // ecx
  _QWORD v13[2]; // [rsp+0h] [rbp-50h] BYREF
  char v14; // [rsp+10h] [rbp-40h]
  _BYTE v15[7]; // [rsp+11h] [rbp-3Fh]
  __int64 *v16; // [rsp+18h] [rbp-38h]
  _BYTE v17[7]; // [rsp+20h] [rbp-30h]
  char v18; // [rsp+27h] [rbp-29h]

  v3 = *(_QWORD *)(a2 + 8); /*0x100272254*/
  v4 = (__int64 *)(v3 + 16); /*0x100272258*/
  v5 = *(_QWORD *)(v3 + 16); /*0x10027225c*/
  if ( !v5 ) /*0x100272263*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 16); /*0x10027237e*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100272269*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100272279*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x10027238e*/
    if ( *(_BYTE *)(v3 + 24) ) /*0x10027239c*/
      goto LABEL_9; /*0x1002723a3*/
  }
  else
  {
    v8 = 0; /*0x100272285*/
    if ( *(_BYTE *)(v3 + 24) ) /*0x100272292*/
      goto LABEL_9; /*0x100272299*/
  }
  a2 = v3 + 56; /*0x10027229b*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(v13, v3 + 56); /*0x1002722a3*/
  v10 = v13[0]; /*0x1002722a8*/
  v16 = (__int64 *)v13[1]; /*0x1002722b0*/
  v18 = v14; /*0x1002722b8*/
  *(_DWORD *)v17 = *(_DWORD *)v15; /*0x1002722be*/
  *(_DWORD *)&v17[3] = *(_DWORD *)&v15[3]; /*0x1002722c4*/
  if ( !v8 /*0x1002723c1*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v13,
                           a2,
                           v9,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v3 + 24) = 1; /*0x1002723ce*/
  }
  v5 = *v4; /*0x1002722e9*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1002722ec*/
  if ( v10 != 0x8000000000000000LL ) /*0x100272302*/
  {
    *(_QWORD *)a1 = v10; /*0x100272356*/
    *(_QWORD *)(a1 + 8) = v16; /*0x10027235d*/
    *(_BYTE *)(a1 + 16) = v18; /*0x100272365*/
    v12 = *(_DWORD *)&v17[3]; /*0x10027236b*/
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v17; /*0x10027236e*/
    *(_DWORD *)(a1 + 20) = v12; /*0x100272371*/
    return a1; /*0x100272374*/
  }
  v4 = v16; /*0x100272304*/
  v8 = v18; /*0x10027230c*/
LABEL_9:
  *(_QWORD *)a1 = 0; /*0x100272316*/
  *(_QWORD *)(a1 + 8) = 8; /*0x10027231d*/
  *(_QWORD *)(a1 + 16) = 0; /*0x100272325*/
  if ( (v8 & 1) == 0 /*0x1002723ae*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           a2,
                           v6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x1002723b7*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10027233f*/
  return a1; /*0x100272347*/
}