// __ZN13codexmate_lib4core5voice7runtime20set_trigger_bindings28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100680d20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::set_trigger_bindings::_$u7b$$u7b$closure$u7d$$u7d$::hf58be6894db2c6d5(
        _QWORD *a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v9; // [rsp+18h] [rbp-38h] BYREF
  __int64 v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+28h] [rbp-28h]
  _BYTE v12[25]; // [rsp+37h] [rbp-19h] BYREF

  v9 = 0; /*0x100680d36*/
  v10 = 1; /*0x100680d3e*/
  v11 = 0; /*0x100680d46*/
  v8[2] = 1610612768; /*0x100680d4e*/
  v8[0] = &v9; /*0x100680d5a*/
  v8[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100680d65*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v8) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100680de1*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v12,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  a1[2] = v11; /*0x100680d86*/
  v5 = v9; /*0x100680d8a*/
  v6 = v10; /*0x100680d8e*/
  a1[1] = v10; /*0x100680d92*/
  *a1 = v5; /*0x100680d96*/
  if ( !a3
    && 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v4,
                           v6) )
  {
    *(_BYTE *)(a2 + 8) = 1; /*0x100680df1*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)a2); /*0x100680db8*/
}