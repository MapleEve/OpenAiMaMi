// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004c7210 depth=2
// codexmate_lib8commands8accounts16FileRestoreState7capture
__int64 __fastcall codexmate_lib::commands::accounts::FileRestoreState::capture::hb86e64c0bb8e8d9e(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  size_t v6; // rcx
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  _QWORD v13[4]; // [rsp+0h] [rbp-B0h] BYREF
  size_t v14[3]; // [rsp+20h] [rbp-90h] BYREF
  __int64 v15; // [rsp+38h] [rbp-78h] BYREF
  __int64 v16; // [rsp+40h] [rbp-70h]
  __int64 v17; // [rsp+48h] [rbp-68h]
  _QWORD v18[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v19; // [rsp+60h] [rbp-50h]
  __int64 v20; // [rsp+68h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp-40h]
  __int64 v22; // [rsp+78h] [rbp-38h] BYREF
  __int64 v23; // [rsp+80h] [rbp-30h]

  v2 = a2[1]; /*0x1004c722a*/
  v3 = a2[2]; /*0x1004c722e*/
  std::fs::read::inner::h6a30c15c40add28b(&v15, v2, v3); /*0x1004c723c*/
  v4 = v15; /*0x1004c7241*/
  if ( !__OFSUB__(-v15, 1) ) /*0x1004c724b*/
  {
    v20 = v17; /*0x1004c732b*/
    v19 = v16; /*0x1004c732f*/
LABEL_13:
    a1[2] = a2[2]; /*0x1004c7386*/
    v10 = *a2; /*0x1004c738e*/
    a1[1] = a2[1]; /*0x1004c7395*/
    *a1 = v10; /*0x1004c7399*/
    a1[3] = v4; /*0x1004c739c*/
    result = v19; /*0x1004c73a0*/
    v11 = v20; /*0x1004c73a4*/
    a1[4] = v19; /*0x1004c73a8*/
    a1[5] = v11; /*0x1004c73ac*/
    return result; /*0x1004c73ac*/
  }
  v23 = v2; /*0x1004c7251*/
  v5 = v16; /*0x1004c7255*/
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v16) ) /*0x1004c7263*/
  {
    if ( (v5 & 3) == 1 ) /*0x1004c733e*/
    {
      v21 = v5 - 1; /*0x1004c7344*/
      v8 = *(_QWORD *)(v5 - 1); /*0x1004c7348*/
      v9 = *(_QWORD *)(v5 + 7); /*0x1004c734c*/
      if ( *(_QWORD *)v9 ) /*0x1004c7350*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x1004c735c*/
      if ( *(_QWORD *)(v9 + 8) ) /*0x1004c735e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c736e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c7381*/
    }
    goto LABEL_13; /*0x1004c7381*/
  }
  v22 = v5; /*0x1004c7269*/
  v18[0] = v23; /*0x1004c7271*/
  v18[1] = v3; /*0x1004c7275*/
  v13[0] = v18; /*0x1004c727d*/
  v13[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004c728b*/
  v13[2] = &v22; /*0x1004c7296*/
  v13[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004c72a4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v14, byte_10122A4DC, (unsigned __int64)v13); /*0x1004c72c0*/
  a1[3] = v14[2]; /*0x1004c72d3*/
  v6 = v14[0]; /*0x1004c72d7*/
  a1[2] = v14[1]; /*0x1004c72e5*/
  a1[1] = v6; /*0x1004c72e9*/
  *a1 = 0x8000000000000000LL; /*0x1004c72ed*/
  result = v22; /*0x1004c72f0*/
  if ( (v22 & 3) == 1 ) /*0x1004c72fc*/
  {
    v12 = *(_QWORD *)(v22 + 7); /*0x1004c73ca*/
    if ( *(_QWORD *)v12 ) /*0x1004c73ce*/
      (*(void (__fastcall **)(_QWORD))v12)(*(_QWORD *)(v22 - 1)); /*0x1004c73d9*/
    if ( *(_QWORD *)(v12 + 8) ) /*0x1004c73db*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c73eb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c73fd*/
    if ( *a2 ) /*0x1004c7406*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c740c*/
  }
  else if ( *a2 ) /*0x1004c7302*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c730e*/
  }
  return result; /*0x1004c73b0*/
}