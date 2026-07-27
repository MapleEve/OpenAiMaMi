// __ZN13codexmate_lib4core13quota_history18append_snapshot_at @ 0x100322cd0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::quota_history::append_snapshot_at::h0d1a448605ea92c6(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        const void *a4,
        signed __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __int64 a9,
        __int64 a10)
{
  _QWORD *v10; // r15
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r14
  _QWORD *v28; // rax
  __int64 (__fastcall *v30)(); // rax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  _QWORD v34[8]; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+48h] [rbp-88h]
  _QWORD *v36; // [rsp+50h] [rbp-80h]
  __int64 v37; // [rsp+58h] [rbp-78h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+60h] [rbp-70h]
  __int64 v39; // [rsp+68h] [rbp-68h]
  __int64 v40; // [rsp+70h] [rbp-60h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+78h] [rbp-58h]
  __int64 v42; // [rsp+80h] [rbp-50h]
  _TBYTE v43; // [rsp+88h] [rbp-48h] BYREF
  __int16 v44; // [rsp+92h] [rbp-3Eh]
  _QWORD *v45; // [rsp+98h] [rbp-38h]
  unsigned int v46[11]; // [rsp+A4h] [rbp-2Ch] BYREF

  v10 = a1; /*0x100322ce4*/
  if ( !(a9 | a6) ) /*0x100322cee*/
  {
    *a1 = 11; /*0x100322cf3*/
    return v10; /*0x100322cfa*/
  }
  v36 = a2; /*0x100322d08*/
  v14 = a2; /*0x100322d0c*/
  v35 = a3; /*0x100322d0f*/
  v15 = a3; /*0x100322d16*/
  v16 = std::path::Path::parent::h4c3ac26770731fbb(v14, a3); /*0x100322d19*/
  if ( v16 ) /*0x100322d21*/
  {
    LOWORD(v34[0]) = 511; /*0x100322d23*/
    BYTE2(v34[0]) = 1; /*0x100322d2c*/
    v14 = v34; /*0x100322d33*/
    v15 = v16; /*0x100322d3a*/
    v18 = std::fs::DirBuilder::_create::h099c6e2853c95452(v34, v16, v17); /*0x100322d3d*/
    if ( v18 ) /*0x100322d45*/
    {
      *v10 = 2; /*0x100322d47*/
      v10[1] = v18; /*0x100322d4e*/
      return v10; /*0x100322d52*/
    }
  }
  if ( a5 < 0 ) /*0x100322d5a*/
  {
    v19 = 0; /*0x100322d5c*/
    goto LABEL_8; /*0x100322d5c*/
  }
  v45 = v10; /*0x100322d6a*/
  if ( a5 ) /*0x100322d6e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v15); /*0x100322d70*/
    v19 = 1; /*0x100322d78*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x100322d83*/
    if ( !v20 ) /*0x100322d8b*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, a5); /*0x100322d5f*/
    v21 = v20; /*0x100322d8d*/
  }
  else
  {
    v21 = 1; /*0x100322d92*/
  }
  memcpy((void *)v21, a4, a5); /*0x100322da0*/
  if ( a6 ) /*0x100322da8*/
  {
    a7 = *(double *)(a6 + 24); /*0x100322daa*/
    v22 = 1; /*0x100322db0*/
    v23 = a10; /*0x100322db5*/
    if ( a9 ) /*0x100322dbc*/
    {
LABEL_15:
      a8 = *(double *)(a9 + 24); /*0x100322dbe*/
      v24 = 1; /*0x100322dc3*/
      goto LABEL_18; /*0x100322dc8*/
    }
  }
  else
  {
    v22 = 0; /*0x100322dca*/
    v23 = a10; /*0x100322dcc*/
    if ( a9 ) /*0x100322dd3*/
      goto LABEL_15; /*0x100322dd3*/
  }
  v24 = 0; /*0x100322dd5*/
LABEL_18:
  v34[7] = v23; /*0x100322dd7*/
  v34[4] = a5; /*0x100322dde*/
  v34[5] = v21; /*0x100322de5*/
  v34[6] = a5; /*0x100322dec*/
  v34[0] = v22; /*0x100322df3*/
  *(double *)&v34[1] = a7; /*0x100322dfa*/
  v34[2] = v24; /*0x100322e02*/
  *(double *)&v34[3] = a8; /*0x100322e09*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, a4); /*0x100322e11*/
  v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100322e20*/
  if ( !v25 ) /*0x100322e28*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100322fd6*/
  v40 = 128; /*0x100322e2e*/
  v41 = (__int64 (__fastcall *)())v25; /*0x100322e36*/
  v42 = 0; /*0x100322e3a*/
  *(_QWORD *)&v43 = &v40; /*0x100322e46*/
  v26 = codexmate_lib::core::quota_history::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPoint$GT$::serialize::h166ecc8744bb0d3a( /*0x100322e5a*/
          v34,
          &v43);
  if ( v26 ) /*0x100322e60*/
  {
    if ( v40 ) /*0x100322e69*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x100322e74*/
    goto LABEL_23; /*0x100322e79*/
  }
  v27 = v40; /*0x100322e7b*/
  v26 = (__int64)v41; /*0x100322e7f*/
  if ( __OFSUB__(-v40, 1) ) /*0x100322e86*/
  {
LABEL_23:
    v28 = v45; /*0x100322e8b*/
    *v45 = 3; /*0x100322e8f*/
    v28[1] = v26; /*0x100322e96*/
    goto LABEL_24; /*0x100322e96*/
  }
  v37 = v40; /*0x100322ecc*/
  v38 = v41; /*0x100322ed0*/
  v39 = v42; /*0x100322ed4*/
  LODWORD(v43) = 0; /*0x100322ed8*/
  WORD2(v43) = 438; /*0x100322edf*/
  v44 = 1; /*0x100322ee5*/
  *(_DWORD *)((char *)&v43 + 6) = 0x10000; /*0x100322eeb*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v40, &v43, v36, v35); /*0x100322f0d*/
  if ( (_DWORD)v40 == 1 ) /*0x100322f16*/
  {
    v30 = v41; /*0x100322f18*/
    v31 = v45; /*0x100322f1c*/
    *v45 = 2; /*0x100322f20*/
    v31[1] = v30; /*0x100322f27*/
  }
  else
  {
    v46[0] = HIDWORD(v40); /*0x100322f30*/
    v40 = (__int64)&v37; /*0x100322f37*/
    v41 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100322f42*/
    v32 = std::io::default_write_fmt::hb9dcd6bd862f2367((__int64)v46, (__int64)"\xC0\x01\n", (__int64)&v40); /*0x100322f55*/
    if ( !v32 ) /*0x100322f5d*/
    {
      *v45 = 11; /*0x100322f9d*/
      close_NOCANCEL(v46[0]); /*0x100322fa7*/
      if ( v37 ) /*0x100322fb3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 1); /*0x100322fc2*/
      goto LABEL_24; /*0x100322fc7*/
    }
    v33 = v45; /*0x100322f5f*/
    *v45 = 2; /*0x100322f63*/
    v33[1] = v32; /*0x100322f6a*/
    close_NOCANCEL(v46[0]); /*0x100322f71*/
    v27 = v37; /*0x100322f76*/
  }
  if ( v27 ) /*0x100322f7d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v27, 1); /*0x100322f8f*/
LABEL_24:
  if ( a5 ) /*0x100322e9d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, a5, 1); /*0x100322eaa*/
  return v45; /*0x100322eb6*/
}