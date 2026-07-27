// __ZN13codexmate_lib8commands6system5clean @ 0x1007cd710 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::system::clean::h6320031e03e410b2(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r14
  __int64 v8; // r12
  char v9; // cl
  __int64 v10; // r14
  char v11; // r13
  int v12; // ecx
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v20[12]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v21[12]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v22[3]; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-58h]
  __int64 v25; // [rsp+F0h] [rbp-50h]
  __int64 v26; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+100h] [rbp-40h]
  __int64 v28; // [rsp+108h] [rbp-38h]
  _DWORD v29[12]; // [rsp+110h] [rbp-30h]

  v4 = *a2; /*0x1007cd72a*/
  if ( !*a2 ) /*0x1007cd72a*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007cd85a*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1007cd736*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007cd746*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x1007cd86a*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007cd878*/
      goto LABEL_5; /*0x1007cd87e*/
LABEL_10:
    codexmate_lib::core::repository::Repository::clean::h249caf1a46522ec0(&v19, a2 + 2); /*0x1007cd884*/
    if ( (_DWORD)v19 == 1 ) /*0x1007cd8a2*/
    {
      qmemcpy(v21, v20, sizeof(v21)); /*0x1007cd8b7*/
      v26 = 0; /*0x1007cd8ba*/
      v27 = 1; /*0x1007cd8c2*/
      v28 = 0; /*0x1007cd8ca*/
      v22[2] = 1610612768; /*0x1007cd8d2*/
      v22[0] = &v26; /*0x1007cd8de*/
      v22[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cd8e9*/
      v14 = v22; /*0x1007cd8ed*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007cd8f4*/
                              v21,
                              v22) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cd9db*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v23,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v23 = v26; /*0x1007cd909*/
      v24 = v27; /*0x1007cd90d*/
      v25 = v28; /*0x1007cd915*/
      v15 = v20; /*0x1007cd919*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v20); /*0x1007cd920*/
      a1[3] = v25; /*0x1007cd929*/
      v16 = v23; /*0x1007cd92d*/
      v17 = v24; /*0x1007cd931*/
      a1[2] = v24; /*0x1007cd935*/
      a1[1] = v16; /*0x1007cd939*/
      *a1 = 0x8000000000000000LL; /*0x1007cd942*/
      if ( v7 ) /*0x1007cd948*/
        goto LABEL_16; /*0x1007cd948*/
    }
    else
    {
      qmemcpy(a1, v20, 0x60u); /*0x1007cd954*/
      v14 = v21; /*0x1007cd954*/
      v15 = a1 + 12; /*0x1007cd954*/
      v17 = 0; /*0x1007cd954*/
      if ( v7 ) /*0x1007cd95a*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cd965*/
        return a1; /*0x1007cd968*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007cd9e2*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v14, v13, v17) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007cd9ef*/
    }
    goto LABEL_16; /*0x1007cd9f3*/
  }
  v7 = 0; /*0x1007cd752*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x1007cd765*/
    goto LABEL_10; /*0x1007cd765*/
LABEL_5:
  v21[0] = 0; /*0x1007cd76b*/
  v21[1] = 1; /*0x1007cd776*/
  v21[2] = 0; /*0x1007cd781*/
  v20[1] = 1610612768; /*0x1007cd78c*/
  v19 = v21; /*0x1007cd79e*/
  v20[0] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cd7ac*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          &v19) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cd9a0*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v23,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v8 = v21[0]; /*0x1007cd7d6*/
  v9 = v7; /*0x1007cd7dd*/
  v10 = v21[1]; /*0x1007cd7e0*/
  v11 = v21[2]; /*0x1007cd7e7*/
  v29[0] = *(_DWORD *)((char *)&v21[2] + 1); /*0x1007cd7f5*/
  *(_DWORD *)((char *)v29 + 3) = HIDWORD(v21[2]); /*0x1007cd7fe*/
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007cd9b4*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007cd81e*/
  a1[1] = v8; /*0x1007cd823*/
  a1[2] = v10; /*0x1007cd827*/
  *((_BYTE *)a1 + 24) = v11; /*0x1007cd82b*/
  v12 = *(_DWORD *)((char *)v29 + 3); /*0x1007cd832*/
  *(_DWORD *)((char *)a1 + 25) = v29[0]; /*0x1007cd835*/
  *((_DWORD *)a1 + 7) = v12; /*0x1007cd839*/
  *a1 = 0x8000000000000000LL; /*0x1007cd84a*/
  return a1; /*0x1007cd970*/
}