// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009acd70 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha9efd9790fb78180(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  size_t v4; // r14
  void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+0h] [rbp-730h] BYREF
  _QWORD __dst[65]; // [rsp+168h] [rbp-5C8h] BYREF
  _QWORD v17[50]; // [rsp+370h] [rbp-3C0h] BYREF
  _QWORD v18[50]; // [rsp+500h] [rbp-230h] BYREF
  _QWORD v19[3]; // [rsp+690h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+6A8h] [rbp-88h] BYREF
  size_t v21; // [rsp+6B0h] [rbp-80h]
  void *__srca; // [rsp+6B8h] [rbp-78h]
  size_t __n; // [rsp+6C0h] [rbp-70h]
  __int64 v24; // [rsp+6C8h] [rbp-68h] BYREF
  __int64 *v25; // [rsp+6D0h] [rbp-60h]
  size_t v26; // [rsp+6D8h] [rbp-58h]
  __int64 v27; // [rsp+6E0h] [rbp-50h]
  size_t v28; // [rsp+6E8h] [rbp-48h]
  __int64 v29; // [rsp+6F0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+6F8h] [rbp-38h]
  __int64 v31; // [rsp+700h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009acd99*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009acdb4*/
  v31 = *((_QWORD *)__src + 117); /*0x1009acdc0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009acdc4*/
  v30 = *((_QWORD *)__src + 116); /*0x1009acdd2*/
  v29 = v2; /*0x1009acdd6*/
  v18[6] = 0; /*0x1009acdda*/
  v18[0] = "get_notification_client_stateget_system_info"; /*0x1009acdec*/
  v18[1] = 29; /*0x1009acdf3*/
  v18[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009ace05*/
  v18[3] = 4; /*0x1009ace0c*/
  v18[4] = __dst; /*0x1009ace17*/
  v18[5] = &v29; /*0x1009ace22*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009ace37*/
  if ( !v3 ) /*0x1009ace49*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009ace5d*/
      &v24,
      v18,
      &v18[2]);
    if ( (_BYTE)v24 != 6 ) /*0x1009ace66*/
    {
      v18[4] = v27; /*0x1009acf20*/
      v18[3] = v26; /*0x1009acf2b*/
      v18[2] = v25; /*0x1009acf3a*/
      v18[1] = v24; /*0x1009acf41*/
      memcpy(v15, __src + 520, sizeof(v15)); /*0x1009acf5a*/
      v11 = *((_QWORD *)__src + 111); /*0x1009acf6d*/
      v19[0] = *((_QWORD *)__src + 110); /*0x1009acf74*/
      v19[1] = v11; /*0x1009acf7b*/
      v19[2] = *((_QWORD *)__src + 112); /*0x1009acf89*/
      v18[0] = 1; /*0x1009acf9e*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009acfbd*/
        v15,
        v17[48],
        v18,
        v19,
        LODWORD(v17[49]),
        HIDWORD(v17[49]));
      goto LABEL_18; /*0x1009acfc2*/
    }
    v3 = v25; /*0x1009ace6c*/
  }
  codexmate_lib::commands::system::get_notification_client_state::h581ab2e3ca1f7b6f((__int64)&v20, v3); /*0x1009ace7a*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009ace8e*/
  if ( v20 == (__int64 *)0x8000000000000000LL ) /*0x1009ace9a*/
  {
    v4 = v21; /*0x1009ace9c*/
    v5 = __srca; /*0x1009acea0*/
    v6 = __n; /*0x1009acea4*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009aceab*/
    {
      v7 = 0; /*0x1009acead*/
      goto LABEL_7; /*0x1009acead*/
    }
    if ( __n ) /*0x1009acee7*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520); /*0x1009aceed*/
      v7 = 1; /*0x1009acef2*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009acf00*/
      if ( !v9 ) /*0x1009acf08*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009aceb0*/
      v10 = v9; /*0x1009acf0a*/
    }
    else
    {
      v10 = 1; /*0x1009acfc4*/
    }
    memcpy((void *)v10, v5, v6); /*0x1009acfd3*/
    if ( v4 ) /*0x1009acfdb*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009acfe8*/
    LOBYTE(v25) = 3; /*0x1009acfed*/
    v26 = v6; /*0x1009acff1*/
    v27 = v10; /*0x1009acff5*/
    v28 = v6; /*0x1009acff9*/
    v8 = 1; /*0x1009acffd*/
  }
  else
  {
    v28 = __n; /*0x1009acec1*/
    v27 = (__int64)__srca; /*0x1009acec9*/
    v26 = v21; /*0x1009aced8*/
    v25 = v20; /*0x1009acedc*/
    v8 = 0; /*0x1009acee0*/
  }
  v24 = v8; /*0x1009ad002*/
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hfeb2ac6d7f154f3e(v18); /*0x1009ad011*/
LABEL_18:
  if ( v29 != 0x8000000000000000LL ) /*0x1009ad01a*/
  {
    v12 = v30; /*0x1009ad01c*/
    for ( i = v31 + 1; i != 1; --i ) /*0x1009ad024*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x1009ad03d*/
      v12 += 96; /*0x1009ad042*/
    }
    if ( v29 ) /*0x1009ad04e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 96 * v29, 8); /*0x1009ad061*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ad072*/
}