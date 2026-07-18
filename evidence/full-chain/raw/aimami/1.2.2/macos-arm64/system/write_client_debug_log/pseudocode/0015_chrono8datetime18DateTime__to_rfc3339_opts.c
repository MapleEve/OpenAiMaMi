// mac 1.2.2 NEW write_client_debug_log 0x1007df860 d=3
__int64 *__fastcall chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339_opts::h59d472254d332601(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+Ch] [rbp-54h] BYREF
  int v10; // [rsp+14h] [rbp-4Ch]
  __int64 v11; // [rsp+18h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-40h]
  __int64 v13; // [rsp+28h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007df87b*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x26u, 1u); /*0x1007df88a*/
  if ( !v6 ) /*0x1007df892*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1007df96a*/
  v11 = 38; /*0x1007df898*/
  v12 = v6; /*0x1007df8a0*/
  v13 = 0; /*0x1007df8a4*/
  v15 = *((_DWORD *)a2 + 2); /*0x1007df8b1*/
  v14 = *a2; /*0x1007df8b8*/
  chrono::naive::datetime::NaiveDateTime::checked_add_offset::h9b6d7eabe1f89a82(&v9, &v14, 0); /*0x1007df8c6*/
  if ( !(_DWORD)v9 ) /*0x1007df8cf*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1007df934*/
      &anon_e09fd79b0c076fb9bf9cf83012bf0a76_1280,
      43,
      &anon_e09fd79b0c076fb9bf9cf83012bf0a76_1281);
  v15 = v10; /*0x1007df8d4*/
  v14 = v9; /*0x1007df8db*/
  if ( (unsigned __int8)chrono::format::formatting::write_rfc3339::h3533c71d299e1547(&v11, &v14, 0, a3, a4) ) /*0x1007df8f1*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007df959*/
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1277,
      52,
      (__int64)&v14,
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1163,
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1282);
  a1[2] = v13; /*0x1007df8fe*/
  v7 = v11; /*0x1007df902*/
  a1[1] = v12; /*0x1007df90a*/
  *a1 = v7; /*0x1007df90e*/
  return a1; /*0x1007df914*/
}