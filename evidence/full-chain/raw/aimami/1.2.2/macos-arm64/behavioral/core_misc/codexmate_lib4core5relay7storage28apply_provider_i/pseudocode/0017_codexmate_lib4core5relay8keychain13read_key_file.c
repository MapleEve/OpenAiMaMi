// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x100a274a0 d=2
__int64 __fastcall codexmate_lib::core::relay::keychain::read_key_file::h6916322e23183833(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        _BYTE *a4,
        size_t a5)
{
  const void *v8; // r13
  __int64 v9; // r12
  unsigned __int8 *v10; // r15
  size_t v11; // rax
  __int64 result; // rax
  __int64 v13; // r12
  void *v14; // rax
  __int64 v15; // rdx
  size_t v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // r15
  size_t v22[3]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-80h] BYREF
  size_t v24; // [rsp+30h] [rbp-70h] BYREF
  const void *v25; // [rsp+38h] [rbp-68h]
  size_t v26; // [rsp+40h] [rbp-60h]
  void *__src; // [rsp+48h] [rbp-58h]
  __int64 v28; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int8 *v29; // [rsp+58h] [rbp-48h]
  size_t v30; // [rsp+60h] [rbp-40h]
  _QWORD v31[7]; // [rsp+68h] [rbp-38h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8((size_t *)&v28, a2, a3, byte_1015A0328, 4u); /*0x100a274cb*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v24, v29, v30, a4, a5); /*0x100a274e5*/
  if ( v28 ) /*0x100a274f1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a274fb*/
  v8 = v25; /*0x100a27500*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v28, v25, v26); /*0x100a2750f*/
  v9 = v28; /*0x100a27514*/
  v10 = v29; /*0x100a27518*/
  if ( !__OFSUB__(-v28, 1) ) /*0x100a27522*/
  {
    v31[1] = v8; /*0x100a275e3*/
    v14 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v29, v30); /*0x100a275ee*/
    v16 = v15; /*0x100a275f3*/
    if ( v15 < 0 ) /*0x100a275f9*/
    {
      v17 = 0; /*0x100a275fb*/
      goto LABEL_13; /*0x100a275fb*/
    }
    if ( v15 ) /*0x100a2760a*/
    {
      __src = v14; /*0x100a27610*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a27614*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1u); /*0x100a27621*/
      v17 = 1; /*0x100a27626*/
      if ( !v18 ) /*0x100a2762e*/
LABEL_13:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17); /*0x100a275fd*/
      v19 = v18; /*0x100a27630*/
      v14 = __src; /*0x100a27633*/
    }
    else
    {
      v19 = 1; /*0x100a27696*/
    }
    result = (__int64)memcpy((void *)v19, v14, v16); /*0x100a276a4*/
    a1[1] = v16; /*0x100a276a9*/
    a1[2] = v19; /*0x100a276ad*/
    a1[3] = v16; /*0x100a276b1*/
    *a1 = 0; /*0x100a276b5*/
    if ( !v9 ) /*0x100a276c3*/
      goto LABEL_26; /*0x100a276c3*/
    goto LABEL_25; /*0x100a276c3*/
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v29) ) /*0x100a2752b*/
  {
    v31[0] = v10; /*0x100a27538*/
    v23[0] = v31; /*0x100a27540*/
    v23[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a2754b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v22, byte_1016FE88D, (unsigned __int64)v23); /*0x100a27561*/
    a1[3] = v22[2]; /*0x100a2756d*/
    v11 = v22[0]; /*0x100a27571*/
    a1[2] = v22[1]; /*0x100a2757f*/
    a1[1] = v11; /*0x100a27583*/
    *a1 = 1; /*0x100a27587*/
    result = v31[0]; /*0x100a2758e*/
    if ( (v31[0] & 3) != 1 ) /*0x100a2759a*/
      goto LABEL_26; /*0x100a2759a*/
    v13 = *(_QWORD *)(v31[0] + 7LL); /*0x100a275a8*/
    if ( *(_QWORD *)v13 ) /*0x100a275ac*/
      (*(void (__fastcall **)(_QWORD))v13)(*(_QWORD *)(v31[0] - 1LL)); /*0x100a275b8*/
    if ( *(_QWORD *)(v13 + 8) ) /*0x100a275ba*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a275cc*/
  }
  else
  {
    a1[1] = 0x8000000000000000LL; /*0x100a27643*/
    *a1 = 0; /*0x100a27647*/
    result = (unsigned __int8)v10 & 3; /*0x100a27651*/
    if ( (_DWORD)result != 1 ) /*0x100a27657*/
      goto LABEL_26; /*0x100a27657*/
    v20 = *(_QWORD *)(v10 - 1); /*0x100a2765d*/
    v21 = *(_QWORD *)(v10 + 7); /*0x100a27661*/
    if ( *(_QWORD *)v21 ) /*0x100a27665*/
      (*(void (__fastcall **)(__int64))v21)(v20); /*0x100a27670*/
    if ( *(_QWORD *)(v21 + 8) ) /*0x100a27672*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a27682*/
  }
LABEL_25:
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a276d0*/
LABEL_26:
  if ( v24 ) /*0x100a276dc*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a276e6*/
  return result; /*0x100a276eb*/
}