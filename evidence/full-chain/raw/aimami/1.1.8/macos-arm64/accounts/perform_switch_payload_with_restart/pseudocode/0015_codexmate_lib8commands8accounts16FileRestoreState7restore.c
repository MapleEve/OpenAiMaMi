// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004c74b0 depth=1
// codexmate_lib8commands8accounts16FileRestoreState7restore
__int64 __fastcall codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(
        size_t *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5)
{
  __int64 *v5; // r13
  void *v6; // rbx
  size_t v7; // r14
  _UNKNOWN **v8; // rax
  _UNKNOWN **v9; // r12
  size_t v10; // rax
  __int64 result; // rax
  __int64 v12; // r12
  void *v13; // r14
  size_t v14; // r15
  _BYTE *v15; // rax
  char *v16; // rdx
  _BYTE *v17; // r13
  char *v18; // rbx
  _UNKNOWN **v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // r12
  char **v22; // rax
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r12
  size_t v26[3]; // [rsp+8h] [rbp-98h] BYREF
  size_t *v27; // [rsp+20h] [rbp-80h]
  size_t v28; // [rsp+28h] [rbp-78h] BYREF
  size_t v29; // [rsp+30h] [rbp-70h]
  size_t v30; // [rsp+38h] [rbp-68h]
  size_t *v31; // [rsp+40h] [rbp-60h] BYREF
  __int64 (__fastcall *v32)(_QWORD, _QWORD); // [rsp+48h] [rbp-58h]
  __int64 *v33; // [rsp+50h] [rbp-50h]
  __int64 (__fastcall *v34)(_QWORD, _QWORD); // [rsp+58h] [rbp-48h]
  __int64 v35; // [rsp+60h] [rbp-40h] BYREF
  size_t v36; // [rsp+68h] [rbp-38h]
  _QWORD v37[6]; // [rsp+70h] [rbp-30h] BYREF

  v5 = (__int64 *)a1; /*0x1004c74c4*/
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 24)) ) /*0x1004c74c9*/
  {
    v6 = *(void **)(a2 + 8); /*0x1004c74d3*/
    v7 = *(_QWORD *)(a2 + 16); /*0x1004c74d8*/
    v8 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v6, v7); /*0x1004c74e3*/
    if ( v8 ) /*0x1004c74eb*/
    {
      v9 = v8; /*0x1004c74f1*/
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v8) ) /*0x1004c74f7*/
      {
        v35 = (__int64)v9; /*0x1004c7504*/
        v28 = (size_t)v6; /*0x1004c7508*/
        v29 = v7; /*0x1004c750c*/
        v31 = &v28; /*0x1004c7514*/
        v32 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004c751f*/
        v33 = &v35; /*0x1004c7527*/
        v34 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004c7532*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, byte_10122A508, (unsigned __int64)&v31); /*0x1004c7548*/
        a1[2] = v26[2]; /*0x1004c7554*/
        v10 = v26[0]; /*0x1004c7558*/
        a1[1] = v26[1]; /*0x1004c7566*/
        *a1 = v10; /*0x1004c756a*/
        result = v35; /*0x1004c756e*/
        if ( (v35 & 3) == 1 ) /*0x1004c757a*/
        {
          v12 = *(_QWORD *)(v35 + 7); /*0x1004c7588*/
          if ( *(_QWORD *)v12 ) /*0x1004c758c*/
            (*(void (__fastcall **)(_QWORD))v12)(*(_QWORD *)(v35 - 1)); /*0x1004c7598*/
          if ( *(_QWORD *)(v12 + 8) ) /*0x1004c759a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c75ac*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c75be*/
        }
        return result; /*0x1004c75c3*/
      }
      if ( ((unsigned __int8)v9 & 3) == 1 ) /*0x1004c779e*/
      {
        v24 = *(__int64 *)((char *)v9 - 1); /*0x1004c77a6*/
        v25 = *(__int64 *)((char *)v9 + 7); /*0x1004c77ab*/
        if ( *(_QWORD *)v25 ) /*0x1004c77b0*/
          (*(void (__fastcall **)(__int64))v25)(v24); /*0x1004c77bc*/
        if ( *(_QWORD *)(v25 + 8) ) /*0x1004c77be*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c77d0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c77e2*/
      }
    }
    goto LABEL_33; /*0x1004c77e2*/
  }
  v27 = a1; /*0x1004c75c8*/
  v13 = *(void **)(a2 + 8); /*0x1004c75cc*/
  v14 = *(_QWORD *)(a2 + 16); /*0x1004c75d1*/
  v15 = (_BYTE *)std::path::Path::parent::h4c3ac26770731fbb(v13, v14); /*0x1004c75dc*/
  if ( !v15 /*0x1004c7609*/
    || (v17 = v15,
        v18 = v16,
        LOWORD(v31) = 511,
        BYTE2(v31) = 1,
        (v19 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)&v31, v15, v16)) == nullptr) )
  {
    v22 = std::fs::write::inner::had0c1bee0a2c1e21(v13, v14, *(char **)(a2 + 32), *(_QWORD *)(a2 + 40), a3, a4, a5); /*0x1004c76d6*/
    v5 = (__int64 *)v27; /*0x1004c76de*/
    if ( v22 ) /*0x1004c76e2*/
    {
      v37[0] = v22; /*0x1004c76e8*/
      v35 = (__int64)v13; /*0x1004c76ec*/
      v36 = v14; /*0x1004c76f0*/
      v31 = (size_t *)&v35; /*0x1004c76f8*/
      v32 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004c7703*/
      v33 = v37; /*0x1004c770b*/
      v34 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004c7716*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v28, byte_10122A530, (unsigned __int64)&v31); /*0x1004c7729*/
      if ( (v37[0] & 3) == 1 ) /*0x1004c773a*/
      {
        v23 = *(_QWORD *)(v37[0] + 7LL); /*0x1004c7744*/
        if ( *(_QWORD *)v23 ) /*0x1004c7748*/
          (*(void (__fastcall **)(_QWORD))v23)(*(_QWORD *)(v37[0] - 1LL)); /*0x1004c7754*/
        if ( *(_QWORD *)(v23 + 8) ) /*0x1004c7756*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c7768*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c777a*/
      }
      v27[2] = v30; /*0x1004c7783*/
      result = v28; /*0x1004c7787*/
      v5[1] = v29; /*0x1004c778f*/
      goto LABEL_34; /*0x1004c7793*/
    }
LABEL_33:
    result = 0x8000000000000000LL; /*0x1004c77e7*/
LABEL_34:
    *v5 = result; /*0x1004c77f1*/
    return result; /*0x1004c77f1*/
  }
  v37[0] = v19; /*0x1004c760f*/
  v35 = (__int64)v17; /*0x1004c7613*/
  v36 = (size_t)v18; /*0x1004c7617*/
  v31 = (size_t *)&v35; /*0x1004c761f*/
  v32 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004c762a*/
  v33 = v37; /*0x1004c7632*/
  v34 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004c763d*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v28, byte_10122A549, (unsigned __int64)&v31); /*0x1004c7650*/
  v20 = (__int64 *)v27; /*0x1004c7661*/
  if ( (v37[0] & 3) == 1 ) /*0x1004c7665*/
  {
    v21 = *(_QWORD *)(v37[0] + 7LL); /*0x1004c766f*/
    if ( *(_QWORD *)v21 ) /*0x1004c7673*/
      (*(void (__fastcall **)(_QWORD))v21)(*(_QWORD *)(v37[0] - 1LL)); /*0x1004c767f*/
    if ( *(_QWORD *)(v21 + 8) ) /*0x1004c7681*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c7693*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c76a5*/
  }
  v27[2] = v30; /*0x1004c76ae*/
  result = v28; /*0x1004c76b2*/
  v20[1] = v29; /*0x1004c76ba*/
  *v20 = result; /*0x1004c76be*/
  return result; /*0x1004c77f5*/
}