// __ZN13codexmate_lib4core5relay8keychain13read_key_file @ 0x100527750 | 基线 same-set
double __fastcall codexmate_lib::core::relay::keychain::read_key_file::h980bceabd704e07f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rbx
  double result; // xmm0_8
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  void *v23; // rax
  __int64 v24; // rdx
  size_t v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rsi
  _QWORD v33[3]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v34[2]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v35; // [rsp+30h] [rbp-70h] BYREF
  __int64 v36; // [rsp+38h] [rbp-68h]
  __int64 v37; // [rsp+40h] [rbp-60h]
  void *__src; // [rsp+48h] [rbp-58h]
  __int64 v39; // [rsp+50h] [rbp-50h] BYREF
  __int64 v40; // [rsp+58h] [rbp-48h]
  __int64 v41; // [rsp+60h] [rbp-40h]
  __int64 v42; // [rsp+68h] [rbp-38h] BYREF
  __int64 v43; // [rsp+70h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v39, a2, a3, "keysNULLUser.gitAuth", 4); /*0x10052777b*/
  v8 = v40; /*0x100527780*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v35, v40, v41, a4, a5); /*0x100527795*/
  if ( v39 ) /*0x1005277a1*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v39, 1); /*0x1005277ab*/
  v10 = v36; /*0x1005277b0*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v39, v36, v37); /*0x1005277bf*/
  v11 = v39; /*0x1005277c4*/
  v12 = v40; /*0x1005277c8*/
  if ( __OFSUB__(-v39, 1) ) /*0x1005277cf*/
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v40) ) /*0x1005277db*/
    {
      v42 = v12; /*0x1005277e8*/
      v34[0] = &v42; /*0x1005277f0*/
      v34[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1005277fb*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v33, &unk_1017C17E2, v34); /*0x100527811*/
      a1[3] = v33[2]; /*0x10052781d*/
      v13 = v33[0]; /*0x100527821*/
      a1[2] = v33[1]; /*0x10052782f*/
      a1[1] = v13; /*0x100527833*/
      *a1 = 1; /*0x100527837*/
      if ( (v42 & 3) != 1 ) /*0x10052784a*/
        goto LABEL_27; /*0x10052784a*/
      v14 = v42 - 1; /*0x100527850*/
      v15 = *(_QWORD *)(v42 - 1); /*0x100527854*/
      v16 = *(_QWORD *)(v42 + 7); /*0x100527858*/
      if ( *(_QWORD *)v16 ) /*0x10052785c*/
        (*(void (__fastcall **)(__int64))v16)(v15); /*0x100527868*/
      v17 = *(_QWORD *)(v16 + 8); /*0x10052786a*/
      if ( v17 ) /*0x100527872*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x10052787c*/
      v18 = 24; /*0x100527881*/
      v19 = 8; /*0x100527886*/
      v20 = v14; /*0x10052788b*/
    }
    else
    {
      a1[1] = 0x8000000000000000LL; /*0x1005278f3*/
      *a1 = 0; /*0x1005278f7*/
      if ( (v12 & 3) != 1 ) /*0x100527907*/
        goto LABEL_27; /*0x100527907*/
      v29 = v12 - 1; /*0x100527909*/
      v30 = *(_QWORD *)(v12 - 1); /*0x10052790d*/
      v31 = *(_QWORD *)(v12 + 7); /*0x100527911*/
      if ( *(_QWORD *)v31 ) /*0x100527915*/
        (*(void (__fastcall **)(__int64))v31)(v30); /*0x100527920*/
      v32 = *(_QWORD *)(v31 + 8); /*0x100527922*/
      if ( v32 ) /*0x100527929*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x100527932*/
      v18 = 24; /*0x100527937*/
      v19 = 8; /*0x10052793c*/
      v20 = v29; /*0x100527941*/
    }
    goto LABEL_26; /*0x10052788e*/
  }
  v43 = v10; /*0x100527893*/
  v21 = v41; /*0x100527897*/
  v22 = v40; /*0x10052789b*/
  v23 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v40, v41); /*0x10052789e*/
  v25 = v24; /*0x1005278a3*/
  if ( v24 < 0 ) /*0x1005278a9*/
  {
    v26 = 0; /*0x1005278ab*/
    goto LABEL_13; /*0x1005278ab*/
  }
  if ( v24 ) /*0x1005278ba*/
  {
    __src = v23; /*0x1005278c0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v21); /*0x1005278c4*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x1005278d1*/
    v26 = 1; /*0x1005278d6*/
    if ( !v27 ) /*0x1005278de*/
LABEL_13:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x1005278ad*/
    v28 = v27; /*0x1005278e0*/
    v23 = __src; /*0x1005278e3*/
  }
  else
  {
    v28 = 1; /*0x100527946*/
  }
  memcpy((void *)v28, v23, v25); /*0x100527954*/
  a1[1] = v25; /*0x100527959*/
  a1[2] = v28; /*0x10052795d*/
  a1[3] = v25; /*0x100527961*/
  *a1 = 0; /*0x100527965*/
  v10 = v43; /*0x10052796f*/
  if ( !v11 ) /*0x100527973*/
    goto LABEL_27; /*0x100527973*/
  v19 = 1; /*0x100527975*/
  v20 = v12; /*0x10052797a*/
  v18 = v11; /*0x10052797d*/
LABEL_26:
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, v19); /*0x100527980*/
LABEL_27:
  if ( v35 ) /*0x10052798c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v35, 1); /*0x100527996*/
  return result; /*0x10052799b*/
}