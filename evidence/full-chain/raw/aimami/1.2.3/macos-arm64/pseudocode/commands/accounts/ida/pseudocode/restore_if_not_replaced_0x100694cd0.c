// __ZN13codexmate_lib8commands8accounts16FileRestoreState23restore_if_not_replaced @ 0x100694cd0
int __fastcall codexmate_lib::commands::accounts::FileRestoreState::restore_if_not_replaced::h4b736aee0bc883a6(
        __int64 a1,
        __int64 a2)
{
  void *v2; // r12
  size_t v3; // r15
  int result; // eax
  __int64 v5; // r14
  char *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  void *v17; // r15
  _QWORD *v18; // rcx
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rsi
  _QWORD *v25; // rdx
  void *v26; // rax
  void (__fastcall *v27)(__int64); // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD v30[4]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+20h] [rbp-A0h] BYREF
  void *__s1; // [rsp+28h] [rbp-98h]
  size_t __n; // [rsp+30h] [rbp-90h]
  char *v34; // [rsp+38h] [rbp-88h]
  void *v35; // [rsp+40h] [rbp-80h] BYREF
  size_t v36; // [rsp+48h] [rbp-78h]
  __int64 v37; // [rsp+50h] [rbp-70h]
  void **v38; // [rsp+58h] [rbp-68h] BYREF
  __int64 (__fastcall *v39)(_QWORD, _QWORD); // [rsp+60h] [rbp-60h]
  __int64 *v40; // [rsp+68h] [rbp-58h]
  __int64 (__fastcall *v41)(); // [rsp+70h] [rbp-50h]
  _QWORD v42[2]; // [rsp+78h] [rbp-48h] BYREF
  __int64 v43; // [rsp+88h] [rbp-38h] BYREF
  __int64 v44; // [rsp+90h] [rbp-30h]

  v44 = a1; /*0x100694ce7*/
  v2 = *(void **)(a2 + 8); /*0x100694cfc*/
  v3 = *(_QWORD *)(a2 + 16); /*0x100694d00*/
  std::fs::read::inner::h6a30c15c40add28b(&v31, v2, v3); /*0x100694d0a*/
  result = 0; /*0x100694d0f*/
  v5 = v31; /*0x100694d15*/
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 24)) ) /*0x100694d11*/
  {
    if ( v31 == 0x8000000000000000LL ) /*0x100694d21*/
    {
      v6 = (char *)__s1; /*0x100694d27*/
      if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(__s1) ) /*0x100694d31*/
      {
        v7 = (_QWORD *)v44; /*0x100694d3a*/
        *(_BYTE *)(v44 + 8) = 1; /*0x100694d3e*/
        *v7 = 0x8000000000000000LL; /*0x100694d42*/
        result = (unsigned __int8)v6 & 3; /*0x100694d48*/
        if ( result == 1 ) /*0x100694d4e*/
        {
          v8 = *(_QWORD *)(v6 - 1); /*0x100694d58*/
          v9 = *(_QWORD *)(v6 + 7); /*0x100694d5c*/
          if ( *(_QWORD *)v9 ) /*0x100694d60*/
            (*(void (__fastcall **)(_QWORD))v9)(*(_QWORD *)(v6 - 1)); /*0x100694d6c*/
          v10 = *(_QWORD *)(v9 + 8); /*0x100694d6e*/
          if ( v10 ) /*0x100694d76*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x100694d80*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6 - 1, 24, 8); /*0x100694d92*/
        }
        return result; /*0x100694d92*/
      }
      goto LABEL_12; /*0x100694d38*/
    }
    goto LABEL_20; /*0x100694d21*/
  }
  if ( v31 != 0x8000000000000000LL ) /*0x100694d9a*/
  {
    if ( __n == *(_QWORD *)(a2 + 40) ) /*0x100694e89*/
    {
      v17 = __s1; /*0x100694e8f*/
      result = memcmp(__s1, *(const void **)(a2 + 32), __n); /*0x100694e99*/
      if ( !result ) /*0x100694ea0*/
      {
        v28 = (_QWORD *)v44; /*0x100694fe6*/
        *(_BYTE *)(v44 + 8) = 1; /*0x100694fea*/
        *v28 = 0x8000000000000000LL; /*0x100694fee*/
        if ( !v5 ) /*0x100694ff4*/
          return result; /*0x100694ff4*/
        v19 = v17; /*0x100694ffb*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v5, 1); /*0x100694eda*/
      }
    }
LABEL_20:
    v18 = (_QWORD *)v44; /*0x100694ea6*/
    *(_BYTE *)(v44 + 8) = 0; /*0x100694eaa*/
    *v18 = 0x8000000000000000LL; /*0x100694eae*/
    if ( !v5 ) /*0x100694eb4*/
      return result; /*0x100694eb4*/
    v19 = __s1; /*0x100694eba*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v5, 1); /*0x100694eba*/
  }
  v6 = (char *)__s1; /*0x100694da0*/
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(__s1) ) /*0x100694daa*/
  {
LABEL_12:
    v42[0] = v6; /*0x100694db7*/
    v35 = v2; /*0x100694dbb*/
    v36 = v3; /*0x100694dbf*/
    v38 = &v35; /*0x100694dc7*/
    v39 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100694dd2*/
    v40 = v42; /*0x100694dda*/
    v41 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100694de5*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v30, (char *)&loc_1017C3296 + 1, &v38); /*0x100694dfb*/
    v11 = (_QWORD *)v44; /*0x100694e07*/
    *(_QWORD *)(v44 + 16) = v30[2]; /*0x100694e0b*/
    v12 = v30[0]; /*0x100694e0f*/
    v11[1] = v30[1]; /*0x100694e1d*/
    *v11 = v12; /*0x100694e21*/
    result = v42[0]; /*0x100694e24*/
    if ( (v42[0] & 3) != 1 ) /*0x100694e30*/
      return result; /*0x100694e30*/
    v13 = v42[0] - 1LL; /*0x100694e36*/
    v14 = *(_QWORD *)(v42[0] - 1LL); /*0x100694e3a*/
    v15 = *(_QWORD *)(v42[0] + 7LL); /*0x100694e3e*/
    if ( *(_QWORD *)v15 ) /*0x100694e42*/
      (*(void (__fastcall **)(__int64))v15)(v14); /*0x100694e4e*/
    goto LABEL_15; /*0x100694e4e*/
  }
  v34 = v6; /*0x100694edf*/
  v20 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v2, v3); /*0x100694efa*/
  if ( !v20 ) /*0x100694f02*/
  {
    v29 = (_QWORD *)v44; /*0x100695003*/
    *(_BYTE *)(v44 + 8) = 1; /*0x100695007*/
    *v29 = 0x8000000000000000LL; /*0x100695015*/
    result = (unsigned __int8)v6 & 3; /*0x10069501b*/
    if ( result != 1 ) /*0x100695021*/
      return result; /*0x100695021*/
    v13 = (__int64)(v6 - 1); /*0x100695035*/
    v14 = *(_QWORD *)(v6 - 1); /*0x100695039*/
    v15 = *(_QWORD *)(v6 + 7); /*0x10069503d*/
    v27 = *(void (__fastcall **)(__int64))v15; /*0x100695041*/
    if ( !*(_QWORD *)v15 ) /*0x100695048*/
      goto LABEL_15; /*0x100695048*/
    goto LABEL_32; /*0x100695048*/
  }
  v43 = v20; /*0x100694f08*/
  v42[0] = v2; /*0x100694f0c*/
  v42[1] = v3; /*0x100694f10*/
  v38 = (void **)v42; /*0x100694f18*/
  v39 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100694f23*/
  v40 = &v43; /*0x100694f2b*/
  v41 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100694f36*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v35, &unk_1017C32C0, &v38); /*0x100694f49*/
  if ( (v43 & 3) == 1 ) /*0x100694f5a*/
  {
    v21 = v43 - 1; /*0x100694f5c*/
    v22 = *(_QWORD *)(v43 - 1); /*0x100694f60*/
    v23 = *(_QWORD *)(v43 + 7); /*0x100694f64*/
    if ( *(_QWORD *)v23 ) /*0x100694f68*/
      (*(void (__fastcall **)(__int64))v23)(v22); /*0x100694f74*/
    v24 = *(_QWORD *)(v23 + 8); /*0x100694f76*/
    if ( v24 ) /*0x100694f7d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x100694f86*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8); /*0x100694f98*/
  }
  v25 = (_QWORD *)v44; /*0x100694fa1*/
  *(_QWORD *)(v44 + 16) = v37; /*0x100694fa5*/
  v26 = v35; /*0x100694fa9*/
  v25[1] = v36; /*0x100694fb1*/
  *v25 = v26; /*0x100694fb5*/
  result = (unsigned __int8)v6 & 3; /*0x100694fbb*/
  if ( result == 1 ) /*0x100694fc1*/
  {
    v13 = (__int64)(v6 - 1); /*0x100694fc3*/
    v14 = *(_QWORD *)(v6 - 1); /*0x100694fc7*/
    v15 = *(_QWORD *)(v6 + 7); /*0x100694fcb*/
    v27 = *(void (__fastcall **)(__int64))v15; /*0x100694fcf*/
    if ( !*(_QWORD *)v15 ) /*0x100694fd6*/
    {
LABEL_15:
      v16 = *(_QWORD *)(v15 + 8); /*0x100694e50*/
      if ( v16 ) /*0x100694e58*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x100694e62*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x100694e79*/
    }
LABEL_32:
    v27(*(_QWORD *)(v6 - 1)); /*0x100694fdc*/
    goto LABEL_15; /*0x100694fe1*/
  }
  return result; /*0x100694ec9*/
}