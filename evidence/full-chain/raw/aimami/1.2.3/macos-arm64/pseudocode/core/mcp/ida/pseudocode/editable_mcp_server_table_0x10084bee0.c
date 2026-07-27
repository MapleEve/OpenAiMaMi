// __ZN13codexmate_lib4core3mcp25editable_mcp_server_table @ 0x10084bee0 | 基线 same-set
void *__fastcall codexmate_lib::core::mcp::editable_mcp_server_table::hbad15a135f5ae9f0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r13
  _DWORD *v8; // rax
  _DWORD *v9; // r12
  _DWORD *v10; // rax
  void *result; // rax
  _QWORD v12[22]; // [rsp+8h] [rbp-198h] BYREF
  _QWORD v13[22]; // [rsp+B8h] [rbp-E8h] BYREF
  _QWORD v14[7]; // [rsp+168h] [rbp-38h] BYREF

  v14[0] = a3; /*0x10084bf00*/
  v14[1] = a4; /*0x10084bf04*/
  v6 = _$LT$toml_edit..document..Document$u20$as$u20$core..ops..deref..Deref$GT$::deref::h0396e46c313c7aac(a2); /*0x10084bf0b*/
  if ( !(unsigned __int8)toml_edit::table::Table::contains_key::h500c5369d9e41ad1( /*0x10084bf1f*/
                           v6,
                           "mcp_servers# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay cod"
                           "ex-router top start (DO NOT EDIT MANUALLY)'\"'\"'",
                           11) )
  {
    v7 = _$LT$toml_edit..document..Document$u20$as$u20$core..ops..deref..DerefMut$GT$::deref_mut::h13afcec52bc1dd0a(a2); /*0x10084bf30*/
    toml_edit::table::Table::new::hdf053039c5dc4b42( /*0x10084bf3a*/
      &v12[1],
      "mcp_servers# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay codex-router top start ("
      "DO NOT EDIT MANUALLY)'\"'\"'");
    v12[0] = 10; /*0x10084bf3f*/
    toml_edit::table::Table::insert::hb018739605f59eb7( /*0x10084bf67*/
      v13,
      v7,
      "mcp_servers# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay codex-router top start ("
      "DO NOT EDIT MANUALLY)'\"'\"'",
      11,
      v12);
    if ( LODWORD(v13[0]) != 12 ) /*0x10084bf73*/
      core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(v13); /*0x10084bf7c*/
  }
  v8 = (_DWORD *)toml_edit::index::_$LT$impl$u20$core..ops..index..IndexMut$LT$$RF$str$GT$$u20$for$u20$toml_edit..document..Document$GT$::index_mut::h2cf84eeafb311ab2( /*0x10084bf97*/
                   a2,
                   "mcp_servers# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay codex-route"
                   "r top start (DO NOT EDIT MANUALLY)'\"'\"'",
                   11,
                   &off_10196C7A0);
  if ( *v8 == 10 ) /*0x10084bf9f*/
  {
    v9 = v8 + 2; /*0x10084bfa8*/
    if ( !(unsigned __int8)toml_edit::table::Table::contains_key::h500c5369d9e41ad1(v8 + 2, a3, a4) ) /*0x10084bfb5*/
    {
      toml_edit::table::Table::new::hdf053039c5dc4b42(&v12[1], a3); /*0x10084bfc5*/
      v12[0] = 10; /*0x10084bfca*/
      toml_edit::table::Table::insert::hb018739605f59eb7(v13, v9, a3, a4, v12); /*0x10084bfec*/
      if ( LODWORD(v13[0]) != 12 ) /*0x10084bff8*/
        core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(v13); /*0x10084c001*/
    }
    v10 = (_DWORD *)toml_edit::table::Table::get_mut::h5c1bda9966f24991(v9, a3, a4); /*0x10084c00f*/
    if ( v10 && *v10 == 10 ) /*0x10084c020*/
    {
      result = v10 + 2; /*0x10084c026*/
      a1[1] = result; /*0x10084c02a*/
      *a1 = 11; /*0x10084c02e*/
    }
    else
    {
      v13[0] = v14; /*0x10084c0af*/
      v13[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084c0bd*/
      result = (void *)alloc::fmt::format::format_inner::h3c16c74008a310d4(&v12[1], &unk_1017C5ACA, v13); /*0x10084c0d9*/
      v12[0] = 9; /*0x10084c0de*/
      qmemcpy(a1, v12, 0x60u); /*0x10084c0f8*/
    }
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10084c03a*/
      a2,
      "mcp_servers# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)# >>> aimami-relay codex-router top start ("
      "DO NOT EDIT MANUALLY)'\"'\"'");
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x10084c049*/
    if ( !result ) /*0x10084c051*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x10084c117*/
    qmemcpy(result, "mcp_servers must be a TOML table", 32); /*0x10084c08b*/
    *a1 = 9; /*0x10084c08e*/
    a1[1] = 32; /*0x10084c095*/
    a1[2] = result; /*0x10084c09d*/
    a1[3] = 32; /*0x10084c0a1*/
  }
  return result; /*0x10084c0fb*/
}