// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::account_transition::verify_after_launch::h38ed69f07a62f4b8; addr: 0x1003223e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
__int64 *__fastcall codexmate_lib::commands::account_transition::verify_after_launch::h38ed69f07a62f4b8(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // r15
  void *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-58h]
  __int64 v15; // [rsp+10h] [rbp-50h] BYREF
  __int64 v16; // [rsp+18h] [rbp-48h]
  __int64 v17; // [rsp+20h] [rbp-40h]
  __int64 *v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h]

  v18 = a1; /*0x1003223f1*/
  v2 = *a2; /*0x1003223f5*/
  v3 = a2[1]; /*0x1003223f8*/
  v4 = a2[2]; /*0x1003223fc*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 100000000); /*0x100322407*/
  codexmate_lib::commands::accounts::verify_account_switch::h2df78a2e25775c93(&v15, v2, v3, v4); /*0x100322419*/
  v5 = v15; /*0x10032241e*/
  v19 = v16; /*0x100322426*/
  v14 = v17; /*0x10032242e*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 250000000); /*0x100322439*/
  codexmate_lib::commands::accounts::verify_account_switch::h2df78a2e25775c93(&v15, v2, v3, v4); /*0x10032244b*/
  v6 = v15; /*0x10032245a*/
  if ( v15 != 0x8000000000000000LL ) /*0x100322461*/
  {
    if ( 2 * v5 ) /*0x100322463*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v5, 1); /*0x10032247c*/
    v19 = v16; /*0x100322485*/
    v14 = v17; /*0x10032248d*/
    v5 = v6; /*0x100322491*/
  }
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 500000000); /*0x10032249b*/
  codexmate_lib::commands::accounts::verify_account_switch::h2df78a2e25775c93(&v15, v2, v3, v4); /*0x1003224ad*/
  v8 = v15; /*0x1003224b2*/
  if ( v15 != 0x8000000000000000LL ) /*0x1003224c3*/
  {
    if ( 2 * v5 ) /*0x1003224f1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v5, 1); /*0x10032250a*/
    v9 = v16; /*0x10032250f*/
    v11 = v17; /*0x100322513*/
    v5 = v8; /*0x100322517*/
    v10 = v18; /*0x10032251a*/
    goto LABEL_12; /*0x10032251a*/
  }
  v9 = v19; /*0x1003224c8*/
  if ( v6 != 0x8000000000000000LL ) /*0x1003224cc*/
  {
    v10 = v18; /*0x10032253e*/
    v11 = v14; /*0x100322542*/
    if ( v5 == 0x8000000000000000LL ) /*0x100322546*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v2, v7); /*0x100322548*/
      v11 = 25; /*0x10032254d*/
      v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x10032255d*/
      if ( !v13 ) /*0x100322565*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x1003225ac*/
      v9 = (__int64)v13; /*0x100322567*/
      qmemcpy(v13, "SWITCH_LIVE_VERIFY_FAILED", 25); /*0x100322590*/
      v5 = 25; /*0x100322597*/
    }
LABEL_12:
    *v10 = v5; /*0x10032251e*/
    v10[1] = v9; /*0x100322521*/
    v10[2] = v11; /*0x100322525*/
    return v10; /*0x100322525*/
  }
  v10 = v18; /*0x1003224ce*/
  *v18 = 0x8000000000000000LL; /*0x1003224d2*/
  if ( 2 * v5 ) /*0x1003224d5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v5, 1); /*0x1003224ea*/
  return v10; /*0x10032252c*/
}