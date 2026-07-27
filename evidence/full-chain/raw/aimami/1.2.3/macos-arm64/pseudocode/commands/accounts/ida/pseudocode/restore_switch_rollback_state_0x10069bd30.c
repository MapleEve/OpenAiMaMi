// __ZN13codexmate_lib8commands8accounts29restore_switch_rollback_state28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10069bd30
__int64 __fastcall codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h96eb2137a4fe34ac(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rsi
  _QWORD v7[11]; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v8[7]; // [rsp+58h] [rbp-38h] BYREF

  v3 = a2[1]; /*0x10069bd43*/
  v4 = a2[2]; /*0x10069bd47*/
  v8[0] = v3; /*0x10069bd4b*/
  v8[1] = v4; /*0x10069bd4f*/
  v8[2] = 0; /*0x10069bd53*/
  v8[3] = 0; /*0x10069bd5b*/
  serde_json::de::from_trait::he2657665c660c290(v7, v8); /*0x10069bd6e*/
  result = 0; /*0x10069bd73*/
  if ( __OFSUB__(0, v7[0]) ) /*0x10069bd75*/
  {
    *a1 = 0x8000000000000000LL; /*0x10069bd88*/
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..repository..RegistryFile$C$serde_json..error..Error$GT$$GT$::h53e91be4d6d18114(v7); /*0x10069bd92*/
    v6 = *a2; /*0x10069bd97*/
    if ( !*a2 ) /*0x10069bd9d*/
      return result; /*0x10069bd9d*/
  }
  else
  {
    qmemcpy(a1, v7, 0x58u); /*0x10069bdc6*/
    v6 = *a2; /*0x10069bdc9*/
    if ( !*a2 ) /*0x10069bdc9*/
      return result; /*0x10069bdcf*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v6, 1); /*0x10069bdac*/
}