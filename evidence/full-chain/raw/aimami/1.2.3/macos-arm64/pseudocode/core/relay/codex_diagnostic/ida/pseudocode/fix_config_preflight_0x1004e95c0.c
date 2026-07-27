// __ZN13codexmate_lib4core5relay16codex_diagnostic20fix_config_preflight @ 0x1004e95c0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_preflight::h229fe8c2ec3369f8(
        __int64 *a1,
        __int64 a2)
{
  char v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  const char *v8; // rdx
  __int64 v10; // [rsp+0h] [rbp-80h] BYREF
  void *v11; // [rsp+8h] [rbp-78h]
  __int64 v12; // [rsp+10h] [rbp-70h]
  __int64 v13; // [rsp+18h] [rbp-68h]
  const char *v14; // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-50h]
  void *v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  void *v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  char v22[25]; // [rsp+67h] [rbp-19h] BYREF

  v3 = codexmate_lib::core::relay::codex_diagnostic::config_needs_syntax_fix::h220242c850b77e0e(a2); /*0x1004e95db*/
  if ( v3 ) /*0x1004e95e0*/
  {
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1004e95f4*/
    {
      v16 = 3; /*0x1004e95f6*/
      v17 = &anon_92869709a5e99ce1936aa4e326b6c562_437; /*0x1004e9605*/
      v18 = 44; /*0x1004e9609*/
      v20 = &anon_92869709a5e99ce1936aa4e326b6c562_435; /*0x1004e9618*/
      v21 = 123; /*0x1004e961c*/
      v10 = 0; /*0x1004e9624*/
      v11 = &anon_92869709a5e99ce1936aa4e326b6c562_437; /*0x1004e962c*/
      v12 = 44; /*0x1004e9630*/
      v13 = 0; /*0x1004e9638*/
      v14 = "src/core/relay/codex_diagnostic.rs"; /*0x1004e9647*/
      v15 = 34; /*0x1004e964b*/
      v19 = 0x21200000001LL; /*0x1004e965d*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v22, &v10); /*0x1004e9669*/
    }
    codexmate_lib::core::relay::codex_diagnostic::fix_config_toml_syntax_text::hcfdbad13ceb8a6f8(&v10, a2); /*0x1004e9675*/
    v4 = v10; /*0x1004e967a*/
    v5 = (__int64)v11; /*0x1004e967e*/
    v6 = v12; /*0x1004e9682*/
    if ( v10 != 11 ) /*0x1004e968a*/
    {
      v7 = v13; /*0x1004e96a6*/
      v8 = v14; /*0x1004e96aa*/
      a1[11] = v21; /*0x1004e96b2*/
      a1[10] = (__int64)v20; /*0x1004e96ba*/
      a1[9] = v19; /*0x1004e96c2*/
      a1[8] = v18; /*0x1004e96ca*/
      a1[7] = (__int64)v17; /*0x1004e96d2*/
      a1[6] = v16; /*0x1004e96da*/
      a1[5] = v15; /*0x1004e96e2*/
      a1[4] = (__int64)v8; /*0x1004e96e6*/
      a1[1] = v5; /*0x1004e96ea*/
      a1[2] = v6; /*0x1004e96ee*/
      a1[3] = v7; /*0x1004e96f2*/
      goto LABEL_9; /*0x1004e96f2*/
    }
    if ( v11 ) /*0x1004e968f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x1004e9696*/
  }
  *((_BYTE *)a1 + 8) = v3; /*0x1004e969b*/
  v4 = 11; /*0x1004e969f*/
LABEL_9:
  *a1 = v4; /*0x1004e96f6*/
  return a1; /*0x1004e96fc*/
}