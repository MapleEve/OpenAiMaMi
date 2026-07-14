// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_complete 0x10105f7e0 d=1
char *__fastcall _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
        void *__src,
        __int64 __n,
        _QWORD *a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r12
  char *v7; // rbx
  _QWORD v9[4]; // [rsp+8h] [rbp-108h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-C8h] BYREF
  _QWORD v12[2]; // [rsp+68h] [rbp-A8h] BYREF
  _QWORD *v13; // [rsp+78h] [rbp-98h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+80h] [rbp-90h]
  _QWORD *v15; // [rsp+88h] [rbp-88h]
  __int64 (__fastcall *v16)(); // [rsp+90h] [rbp-80h]
  __int64 v17; // [rsp+98h] [rbp-78h]
  __int64 v18; // [rsp+A0h] [rbp-70h]
  __int64 v19; // [rsp+A8h] [rbp-68h]
  _QWORD *v20; // [rsp+B0h] [rbp-60h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+B8h] [rbp-58h]
  _QWORD *v22; // [rsp+C0h] [rbp-50h]
  __int64 (__fastcall *v23)(); // [rsp+C8h] [rbp-48h]
  __int64 v24; // [rsp+D0h] [rbp-40h]
  __int64 v25; // [rsp+D8h] [rbp-38h]
  __int64 v26; // [rsp+E0h] [rbp-30h]

  v12[0] = __src; /*0x10105f7fd*/
  v12[1] = __n; /*0x10105f804*/
  if ( *(_BYTE *)a3 ) /*0x10105f80b*/
  {
    if ( *(_BYTE *)a3 != 5 ) /*0x10105f82b*/
    {
      v13 = a3; /*0x10105f988*/
      v20 = v12; /*0x10105f996*/
      v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hb7d48e5dab0cbc18; /*0x10105f9a1*/
      v22 = &v13; /*0x10105f9ac*/
      v23 = _$LT$serde_json..value..index..Type$u20$as$u20$core..fmt..Display$GT$::fmt::h5f7efae7d9ef9943; /*0x10105f9b7*/
      core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101257220, (__int64)&v20, (__int64)&off_1015ABEC0); /*0x10105f9cd*/
    }
  }
  else
  {
    *(_BYTE *)a3 = 5; /*0x10105f812*/
    a3[1] = 0; /*0x10105f816*/
    a3[3] = 0; /*0x10105f81e*/
  }
  if ( __n < 0 ) /*0x10105f834*/
  {
    v4 = 0; /*0x10105f836*/
    goto LABEL_6; /*0x10105f836*/
  }
  if ( __n ) /*0x10105f844*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10105f846*/
    v4 = 1; /*0x10105f84b*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x10105f859*/
    if ( !v5 ) /*0x10105f861*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, __n); /*0x10105f839*/
    v6 = v5; /*0x10105f863*/
  }
  else
  {
    v6 = 1; /*0x10105f868*/
  }
  memcpy((void *)v6, __src, __n); /*0x10105f87b*/
  v20 = (_QWORD *)__n; /*0x10105f880*/
  v21 = (__int64 (__fastcall *)())v6; /*0x10105f884*/
  v22 = (_QWORD *)__n; /*0x10105f888*/
  serde_json::map::Map$LT$alloc..string..String$C$serde_json..value..Value$GT$::entry::heb130057db8658a9( /*0x10105f89a*/
    &v13,
    a3 + 1,
    &v20);
  LOBYTE(v11[0]) = 0; /*0x10105f89f*/
  if ( __OFSUB__(0, v13) ) /*0x10105f8a8*/
  {
    v7 = (char *)v14 + 32 * (_QWORD)v16; /*0x10105f8b9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hbbfe41f9e765b9f6(v11); /*0x10105f8c7*/
  }
  else
  {
    v26 = v19; /*0x10105f8d5*/
    v25 = v18; /*0x10105f8dd*/
    v24 = v17; /*0x10105f8e5*/
    v23 = v16; /*0x10105f8ed*/
    v22 = v15; /*0x10105f8f8*/
    v21 = v14; /*0x10105f90a*/
    v20 = v13; /*0x10105f90e*/
    v10[3] = v11[3]; /*0x10105f919*/
    v10[2] = v11[2]; /*0x10105f927*/
    v10[1] = v11[1]; /*0x10105f93c*/
    v10[0] = v11[0]; /*0x10105f943*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h836cbc569a44ed0f(v9, &v20, v10); /*0x10105f95c*/
    return (char *)(v9[0] + 32LL * v9[2]); /*0x10105f96c*/
  }
  return v7; /*0x10105f976*/
}