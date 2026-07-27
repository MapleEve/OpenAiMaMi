// __ZN13codexmate_lib8commands6system20set_api_proxy_config @ 0x1007c89e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::system::set_api_proxy_config::hf56921607dbc87f1(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int8 a3,
        _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r12
  char v14; // bl
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rbx
  _QWORD v23[14]; // [rsp+0h] [rbp-150h] BYREF
  _QWORD v24[12]; // [rsp+70h] [rbp-E0h] BYREF
  _QWORD v25[3]; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-60h]
  __int64 v28; // [rsp+F8h] [rbp-58h]
  __int64 v29; // [rsp+100h] [rbp-50h] BYREF
  __int64 v30; // [rsp+108h] [rbp-48h]
  __int64 v31; // [rsp+110h] [rbp-40h]
  _QWORD *v32; // [rsp+118h] [rbp-38h]
  __int64 *v33; // [rsp+120h] [rbp-30h]

  v32 = a4; /*0x1007c89f4*/
  v33 = a2; /*0x1007c89fe*/
  v6 = *a2; /*0x1007c8a02*/
  if ( !*a2 ) /*0x1007c8a02*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v33); /*0x1007c8c72*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1007c8a0e*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007c8a1d*/
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x1007c8c7f*/
    LOBYTE(v9) = v9 ^ 1; /*0x1007c8c82*/
  }
  else
  {
    v9 = 0; /*0x1007c8a29*/
  }
  if ( !*((_BYTE *)v33 + 8) ) /*0x1007c8a40*/
  {
    codexmate_lib::core::repository::Repository::set_api_proxy_config::h8bc9c4bdc38afba1(v23, v33 + 2, a3, v32); /*0x1007c8b59*/
    if ( v23[0] == 0x8000000000000000LL ) /*0x1007c8b69*/
    {
      qmemcpy(v24, &v23[1], sizeof(v24)); /*0x1007c8b8b*/
      v29 = 0; /*0x1007c8b8e*/
      v30 = 1; /*0x1007c8b96*/
      v31 = 0; /*0x1007c8b9e*/
      v25[2] = 1610612768; /*0x1007c8ba6*/
      v25[0] = &v29; /*0x1007c8bb2*/
      v25[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c8bbd*/
      v17 = v25; /*0x1007c8bc1*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c8bc8*/
                              v24,
                              v25) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c8ce8*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v26,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v26 = v29; /*0x1007c8bdd*/
      v27 = v30; /*0x1007c8be1*/
      v28 = v31; /*0x1007c8be9*/
      v18 = &v23[1]; /*0x1007c8bed*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v23[1]); /*0x1007c8bf3*/
      a1[3] = v28; /*0x1007c8bfc*/
      v19 = v26; /*0x1007c8c00*/
      v20 = v27; /*0x1007c8c04*/
      a1[2] = v27; /*0x1007c8c08*/
      a1[1] = v19; /*0x1007c8c0c*/
      *a1 = 0x8000000000000000LL; /*0x1007c8c10*/
      v21 = v33; /*0x1007c8c16*/
      if ( (_BYTE)v9 ) /*0x1007c8c1a*/
        goto LABEL_17; /*0x1007c8c1a*/
    }
    else
    {
      qmemcpy(a1, v23, 0x70u); /*0x1007c8c2d*/
      v17 = v24; /*0x1007c8c2d*/
      v18 = a1 + 14; /*0x1007c8c2d*/
      v20 = 0; /*0x1007c8c2d*/
      v21 = v33; /*0x1007c8c33*/
      if ( (_BYTE)v9 ) /*0x1007c8c37*/
      {
LABEL_17:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v21); /*0x1007c8c4c*/
        return a1; /*0x1007c8c4f*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1007c8cef*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v18, v17, v16, v20) )
    {
      *((_BYTE *)v21 + 8) = 1; /*0x1007c8cfc*/
    }
    goto LABEL_17; /*0x1007c8d00*/
  }
  v24[0] = 0; /*0x1007c8a46*/
  v24[1] = 1; /*0x1007c8a51*/
  v24[2] = 0; /*0x1007c8a5c*/
  v23[2] = 1610612768; /*0x1007c8a67*/
  v23[0] = v24; /*0x1007c8a79*/
  v23[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c8a87*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v23) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c8ca9*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v26,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v11 = v24[0]; /*0x1007c8aae*/
  v12 = v9; /*0x1007c8ab5*/
  v13 = v24[1]; /*0x1007c8ab8*/
  v14 = v24[2]; /*0x1007c8abf*/
  LODWORD(v25[0]) = *(_DWORD *)((char *)&v24[2] + 1); /*0x1007c8acc*/
  *(_DWORD *)((char *)v25 + 3) = HIDWORD(v24[2]); /*0x1007c8ad5*/
  if ( !(_BYTE)v12
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v10,
                           v12) )
  {
    *((_BYTE *)v33 + 8) = 1; /*0x1007c8cc1*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v33); /*0x1007c8af6*/
  v15 = v25[0]; /*0x1007c8afb*/
  *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v25 + 3); /*0x1007c8b01*/
  *(_DWORD *)((char *)a1 + 25) = v15; /*0x1007c8b05*/
  a1[1] = v11; /*0x1007c8b09*/
  a1[2] = v13; /*0x1007c8b0d*/
  *((_BYTE *)a1 + 24) = v14; /*0x1007c8b11*/
  *a1 = 0x8000000000000000LL; /*0x1007c8b18*/
  if ( 2LL * *v32 ) /*0x1007c8b22*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32[1], *v32, 1); /*0x1007c8b3c*/
  return a1; /*0x1007c8c57*/
}