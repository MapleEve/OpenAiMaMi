// __ZN13codexmate_lib4core10repository28collect_account_api_contexts @ 0x100a7f150
// 1.2.3 NEW-delta | codexmate_lib::core::repository::collect_account_api_contexts | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 *__fastcall codexmate_lib::core::repository::collect_account_api_contexts::h971697002a904cf0(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  signed __int64 v3; // rbx
  __int64 v4; // r15
  const void *v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 *result; // rax
  __int64 v10[6]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-38h]
  char v13; // [rsp+57h] [rbp-29h] BYREF

  v13 = a3; /*0x100a7f161*/
  v3 = a2[68]; /*0x100a7f164*/
  if ( v3 < 0 ) /*0x100a7f16e*/
  {
    v4 = 0; /*0x100a7f170*/
    goto LABEL_3; /*0x100a7f170*/
  }
  v5 = (const void *)a2[67]; /*0x100a7f181*/
  v12 = a1; /*0x100a7f188*/
  if ( v3 ) /*0x100a7f18c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a7f18e*/
    v4 = 1; /*0x100a7f193*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1); /*0x100a7f1a1*/
    if ( !v6 ) /*0x100a7f1a9*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x100a7f173*/
    v7 = v6; /*0x100a7f1ab*/
  }
  else
  {
    v7 = 1; /*0x100a7f1b0*/
  }
  memcpy((void *)v7, v5, v3); /*0x100a7f1bf*/
  std::path::Path::_join::hb1a495d4f06b13b8(v11, v7, v3, &unk_10167C8BD, 9); /*0x100a7f1de*/
  if ( v3 ) /*0x100a7f1e6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v3, 1); /*0x100a7f1f3*/
  v8 = a2[102] + 352LL * a2[103]; /*0x100a7f20a*/
  v10[0] = a2[102]; /*0x100a7f20d*/
  v10[1] = v8; /*0x100a7f211*/
  v10[2] = 0; /*0x100a7f215*/
  v10[3] = (__int64)&v13; /*0x100a7f221*/
  v10[4] = (__int64)a2; /*0x100a7f225*/
  v10[5] = (__int64)v11; /*0x100a7f229*/
  result = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h87e1713c257dda06( /*0x100a7f235*/
             v12,
             v10);
  if ( v11[0] ) /*0x100a7f241*/
    return (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11[1], v11[0], 1); /*0x100a7f24c*/
  return result; /*0x100a7f251*/
}