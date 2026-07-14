_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_display_tags::h4f28d2320318ad6e(
        _QWORD *__dst,
        __int64 *a2,
        _QWORD *a3,
        __int64 *a4,
        double a5,
        double a6)
{
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  _BYTE __src[344]; // [rsp+8h] [rbp-448h] BYREF
  _BYTE v14[128]; // [rsp+160h] [rbp-2F0h] BYREF
  __int64 v15; // [rsp+1E0h] [rbp-270h]
  __int64 v16; // [rsp+1E8h] [rbp-268h]
  __int64 v17; // [rsp+1F0h] [rbp-260h]
  __int64 v18; // [rsp+1F8h] [rbp-258h]
  __int64 v19; // [rsp+200h] [rbp-250h]
  __int64 v20; // [rsp+208h] [rbp-248h]
  _QWORD v21[42]; // [rsp+2B8h] [rbp-198h] BYREF
  char v22; // [rsp+40Ch] [rbp-44h]
  __int64 v23; // [rsp+410h] [rbp-40h]
  _QWORD *v24; // [rsp+418h] [rbp-38h]
  char v25; // [rsp+427h] [rbp-29h]

  v24 = a3; /*0x1005c1037*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v21, (__int64)a2, a5, a6); /*0x1005c103b*/
  v25 = v22; /*0x1005c1044*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v21); /*0x1005c104e*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v14, (__int64)a2, a5, a6); /*0x1005c105d*/
  v8 = a3[2]; /*0x1005c1067*/
  v23 = a3[1]; /*0x1005c1073*/
  codexmate_lib::core::relay::codex_catalog::sanitize_display_tag::had6cfbe1f7d6dd5e(v21, v23, v8); /*0x1005c1077*/
  if ( v15 ) /*0x1005c108d*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1005c109b*/
  v17 = v21[2]; /*0x1005c10a7*/
  v16 = v21[1]; /*0x1005c10b9*/
  v15 = v21[0]; /*0x1005c10bd*/
  v9 = a4[1]; /*0x1005c10c1*/
  codexmate_lib::core::relay::codex_catalog::sanitize_display_tag::had6cfbe1f7d6dd5e(v21, v9, a4[2]); /*0x1005c10d3*/
  if ( v18 ) /*0x1005c10e9*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x1005c10f7*/
  v20 = v21[2]; /*0x1005c1103*/
  v19 = v21[1]; /*0x1005c1116*/
  v18 = v21[0]; /*0x1005c111b*/
  codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v21, a2, v14, a5, a6); /*0x1005c1130*/
  if ( LODWORD(v21[0]) != 10 ) /*0x1005c113c*/
  {
    qmemcpy(__dst + 1, v21, 0x60u); /*0x1005c11c0*/
    goto LABEL_11; /*0x1005c11c0*/
  }
  if ( v25 ) /*0x1005c1142*/
  {
    codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9( /*0x1005c114e*/
      v21,
      a2,
      a5,
      a6);
    v10 = v21[0]; /*0x1005c1153*/
    if ( v21[0] != 10 ) /*0x1005c115e*/
    {
      qmemcpy(__dst + 2, &v21[1], 0x58u); /*0x1005c1224*/
      __dst[1] = v10; /*0x1005c1227*/
LABEL_11:
      *__dst = 0x8000000000000000LL; /*0x1005c11c3*/
      v11 = *a4; /*0x1005c11d0*/
      if ( !*a4 ) /*0x1005c11d6*/
        goto LABEL_13; /*0x1005c11d6*/
      goto LABEL_12; /*0x1005c11d6*/
    }
  }
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v21, (__int64)a2, a5, a6); /*0x1005c116e*/
  codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92((__int64)__src, (__int64)v21); /*0x1005c1181*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v21); /*0x1005c118d*/
  memcpy(__dst, __src, 0x158u); /*0x1005c11a1*/
  v11 = *a4; /*0x1005c11a6*/
  if ( *a4 ) /*0x1005c11a6*/
LABEL_12:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, 1); /*0x1005c11d8*/
LABEL_13:
  if ( *v24 ) /*0x1005c11e9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, *v24, 1); /*0x1005c11fa*/
  return __dst; /*0x1005c1202*/
}
