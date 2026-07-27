// __ZN13codexmate_lib8commands8accounts34verify_account_switch_after_launch @ 0x1006a1600 | 基线 same-set
void __fastcall codexmate_lib::commands::accounts::verify_account_switch_after_launch::h1d7256492405a8a6(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r15
  void *v11; // rax
  __int64 v13; // [rsp+10h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]

  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 100000000); /*0x1006a1625*/
  codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d((__int64)&v14, a2, a3, a4); /*0x1006a1637*/
  v6 = v14; /*0x1006a163c*/
  v17 = v15; /*0x1006a1644*/
  v13 = v16; /*0x1006a164c*/
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 250000000); /*0x1006a1657*/
  codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d((__int64)&v14, a2, a3, a4); /*0x1006a1669*/
  v7 = v14; /*0x1006a1678*/
  if ( v14 != 0x8000000000000000LL ) /*0x1006a167f*/
  {
    if ( 2 * v6 ) /*0x1006a1681*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v6, 1); /*0x1006a169a*/
    v17 = v15; /*0x1006a16a3*/
    v13 = v16; /*0x1006a16ab*/
    v6 = v7; /*0x1006a16af*/
  }
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 500000000); /*0x1006a16b9*/
  codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d((__int64)&v14, a2, a3, a4); /*0x1006a16cb*/
  v8 = v14; /*0x1006a16d0*/
  if ( v14 != 0x8000000000000000LL ) /*0x1006a16e1*/
  {
    if ( 2 * v6 ) /*0x1006a171e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v6, 1); /*0x1006a1737*/
    v9 = v15; /*0x1006a173c*/
    v10 = v16; /*0x1006a1740*/
    v6 = v8; /*0x1006a1744*/
    goto LABEL_12; /*0x1006a1744*/
  }
  v9 = v17; /*0x1006a16e6*/
  if ( v7 != 0x8000000000000000LL ) /*0x1006a16ed*/
  {
    v10 = v13; /*0x1006a1768*/
    if ( v6 == 0x8000000000000000LL ) /*0x1006a176c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, a2); /*0x1006a176e*/
      v10 = 25; /*0x1006a1773*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x1006a1783*/
      if ( !v11 ) /*0x1006a178b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x1006a17cf*/
      v9 = (__int64)v11; /*0x1006a178d*/
      qmemcpy(v11, "SWITCH_LIVE_VERIFY_FAILED", 25); /*0x1006a17b6*/
      v6 = 25; /*0x1006a17bd*/
    }
LABEL_12:
    *a1 = v6; /*0x1006a1747*/
    a1[1] = v9; /*0x1006a174e*/
    a1[2] = v10; /*0x1006a1752*/
    return; /*0x1006a1752*/
  }
  *a1 = 0x8000000000000000LL; /*0x1006a16f3*/
  if ( 2 * v6 ) /*0x1006a16f6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v6, 1); /*0x1006a1719*/
}