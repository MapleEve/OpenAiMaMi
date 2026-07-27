// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a16e0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3451fe53d03d24e1(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // r14
  void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-728h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-5C0h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-3B8h] BYREF
  _QWORD v17[50]; // [rsp+508h] [rbp-228h] BYREF
  _QWORD v18[3]; // [rsp+698h] [rbp-98h] BYREF
  int v19; // [rsp+6B0h] [rbp-80h] BYREF
  __int64 *v20; // [rsp+6B8h] [rbp-78h]
  void *__srca; // [rsp+6C0h] [rbp-70h]
  size_t __n; // [rsp+6C8h] [rbp-68h]
  __int64 v23; // [rsp+6D0h] [rbp-60h] BYREF
  __int64 *v24; // [rsp+6D8h] [rbp-58h]
  __int64 v25; // [rsp+6E0h] [rbp-50h]
  size_t v26; // [rsp+6E8h] [rbp-48h]
  __int64 v27; // [rsp+6F0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+6F8h] [rbp-38h]
  __int64 v29; // [rsp+700h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a1709*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a1724*/
  v29 = *((_QWORD *)__src + 117); /*0x1009a1730*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a1734*/
  v28 = *((_QWORD *)__src + 116); /*0x1009a1742*/
  v27 = v2; /*0x1009a1746*/
  v17[6] = 0; /*0x1009a174a*/
  v17[0] = "get_usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update"; /*0x1009a175c*/
  v17[1] = 26; /*0x1009a1763*/
  v17[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a1775*/
  v17[3] = 4; /*0x1009a177c*/
  v17[4] = __dst; /*0x1009a1787*/
  v17[5] = &v27; /*0x1009a1792*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009a17a7*/
  if ( !v3 ) /*0x1009a17af*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a17c3*/
      &v23,
      v17,
      &v17[2]);
    if ( (_BYTE)v23 != 6 ) /*0x1009a17cc*/
    {
      v17[4] = v26; /*0x1009a1870*/
      v17[3] = v25; /*0x1009a187b*/
      v17[2] = v24; /*0x1009a188a*/
      v17[1] = v23; /*0x1009a1891*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a18aa*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a18bd*/
      v18[0] = *((_QWORD *)__src + 110); /*0x1009a18c4*/
      v18[1] = v10; /*0x1009a18cb*/
      v18[2] = *((_QWORD *)__src + 112); /*0x1009a18d9*/
      v17[0] = 1; /*0x1009a18ee*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a190d*/
        v14,
        v16[48],
        v17,
        v18,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a1912*/
    }
    v3 = v24; /*0x1009a17d2*/
  }
  codexmate_lib::commands::system::get_usage_refresh_interval::hb3238502078603b4((__int64)&v19, v3); /*0x1009a17dd*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a17f1*/
  if ( v19 == 1 ) /*0x1009a17fa*/
  {
    v4 = v20; /*0x1009a17fc*/
    v5 = __srca; /*0x1009a1800*/
    v6 = __n; /*0x1009a1804*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009a180b*/
    {
      v7 = 0; /*0x1009a180d*/
      goto LABEL_7; /*0x1009a180d*/
    }
    if ( __n ) /*0x1009a1841*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a1847*/
      v7 = 1; /*0x1009a184c*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a185a*/
      if ( !v8 ) /*0x1009a1862*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a1810*/
      v9 = v8; /*0x1009a1864*/
    }
    else
    {
      v9 = 1; /*0x1009a1914*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a1923*/
    if ( v4 ) /*0x1009a192b*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a1938*/
    LOBYTE(v23) = 3; /*0x1009a193d*/
    v24 = (__int64 *)v6; /*0x1009a1941*/
    v25 = v9; /*0x1009a1945*/
    v26 = v6; /*0x1009a1949*/
  }
  else
  {
    v26 = __n; /*0x1009a1825*/
    v25 = (__int64)__srca; /*0x1009a1830*/
    v24 = v20; /*0x1009a1834*/
    LOBYTE(v23) = 6; /*0x1009a1838*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h95a2ba7235076756(v17); /*0x1009a1958*/
LABEL_18:
  if ( !__OFSUB__(0, v27) ) /*0x1009a1963*/
  {
    v11 = v28; /*0x1009a1965*/
    for ( i = v29 + 1; i != 1; --i ) /*0x1009a196d*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a197d*/
      v11 += 96; /*0x1009a1982*/
    }
    if ( v27 ) /*0x1009a198e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 96 * v27, 8); /*0x1009a19a1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a19b2*/
}