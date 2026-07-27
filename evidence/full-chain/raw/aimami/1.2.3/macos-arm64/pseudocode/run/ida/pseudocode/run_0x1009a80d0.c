// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a80d0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h75855c2cf20e7ba7(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // r14
  void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+0h] [rbp-720h] BYREF
  _QWORD __dst[65]; // [rsp+168h] [rbp-5B8h] BYREF
  _QWORD v16[50]; // [rsp+370h] [rbp-3B0h] BYREF
  _QWORD v17[50]; // [rsp+500h] [rbp-220h] BYREF
  _QWORD v18[3]; // [rsp+690h] [rbp-90h] BYREF
  __int64 v19; // [rsp+6A8h] [rbp-78h] BYREF
  void *__srca; // [rsp+6B0h] [rbp-70h]
  size_t __n; // [rsp+6B8h] [rbp-68h]
  __int64 v22; // [rsp+6C0h] [rbp-60h] BYREF
  __int64 *v23; // [rsp+6C8h] [rbp-58h]
  __int64 v24; // [rsp+6D0h] [rbp-50h]
  size_t v25; // [rsp+6D8h] [rbp-48h]
  __int64 v26; // [rsp+6E0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+6E8h] [rbp-38h]
  __int64 v28; // [rsp+6F0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a80f9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a8114*/
  v28 = *((_QWORD *)__src + 117); /*0x1009a8120*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a8124*/
  v27 = *((_QWORD *)__src + 116); /*0x1009a8132*/
  v26 = v2; /*0x1009a8136*/
  v17[6] = 0; /*0x1009a813a*/
  v17[0] = "dismiss_pending_auto_switch"; /*0x1009a814c*/
  v17[1] = 27; /*0x1009a8153*/
  v17[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a8165*/
  v17[3] = 4; /*0x1009a816c*/
  v17[4] = __dst; /*0x1009a8177*/
  v17[5] = &v26; /*0x1009a8182*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009a8197*/
  if ( v3 ) /*0x1009a81a9*/
  {
LABEL_4:
    codexmate_lib::commands::system::dismiss_pending_auto_switch::hd83def81e23159a8((__int64)&v19, v3); /*0x1009a81d0*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a81eb*/
    v4 = v19; /*0x1009a81f0*/
    if ( v19 == 0x8000000000000000LL ) /*0x1009a81f7*/
    {
      BYTE1(v22) = (_BYTE)__srca; /*0x1009a81fd*/
      LOBYTE(v22) = 6; /*0x1009a8200*/
LABEL_17:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hec5d67e463ed9f2c(v17); /*0x1009a8339*/
      goto LABEL_18; /*0x1009a8344*/
    }
    v5 = __srca; /*0x1009a8209*/
    v6 = __n; /*0x1009a820d*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009a8214*/
    {
      v7 = 0; /*0x1009a8216*/
      goto LABEL_8; /*0x1009a8216*/
    }
    if ( __n ) /*0x1009a8226*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a822c*/
      v7 = 1; /*0x1009a8231*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a823f*/
      if ( !v8 ) /*0x1009a8247*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a8219*/
      v9 = v8; /*0x1009a8249*/
    }
    else
    {
      v9 = 1; /*0x1009a8300*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a830f*/
    if ( v4 ) /*0x1009a8317*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a8324*/
    LOBYTE(v22) = 3; /*0x1009a8329*/
    v23 = (__int64 *)v6; /*0x1009a832d*/
    v24 = v9; /*0x1009a8331*/
    v25 = v6; /*0x1009a8335*/
    goto LABEL_17; /*0x1009a8335*/
  }
  _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a81bd*/
    &v22,
    v17,
    &v17[2]);
  if ( (_BYTE)v22 == 6 ) /*0x1009a81c6*/
  {
    v3 = v23; /*0x1009a81cc*/
    goto LABEL_4; /*0x1009a81cc*/
  }
  v17[4] = v25; /*0x1009a825f*/
  v17[3] = v24; /*0x1009a826a*/
  v17[2] = v23; /*0x1009a8279*/
  v17[1] = v22; /*0x1009a8280*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a8299*/
  v10 = *((_QWORD *)__src + 111); /*0x1009a82ac*/
  v18[0] = *((_QWORD *)__src + 110); /*0x1009a82b3*/
  v18[1] = v10; /*0x1009a82ba*/
  v18[2] = *((_QWORD *)__src + 112); /*0x1009a82c8*/
  v17[0] = 1; /*0x1009a82da*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a82f9*/
    v14,
    v16[48],
    v17,
    v18,
    LODWORD(v16[49]),
    HIDWORD(v16[49]));
LABEL_18:
  if ( v26 != 0x8000000000000000LL ) /*0x1009a834d*/
  {
    v11 = v27; /*0x1009a834f*/
    for ( i = v28 + 1; i != 1; --i ) /*0x1009a8357*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a836d*/
      v11 += 96; /*0x1009a8372*/
    }
    if ( v26 ) /*0x1009a837e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x1009a8391*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a83a2*/
}