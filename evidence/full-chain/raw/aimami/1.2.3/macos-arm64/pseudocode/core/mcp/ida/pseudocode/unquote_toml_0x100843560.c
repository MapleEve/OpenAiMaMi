// __ZN13codexmate_lib4core3mcp12unquote_toml @ 0x100843560 | 基线 same-set
double __fastcall codexmate_lib::core::mcp::unquote_toml::h70fff5d5dbeccb7a(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  double result; // xmm0_8
  __int64 v9; // r15
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  char *v15; // rax
  __int64 v16; // rdx
  size_t v17; // r14
  int v18; // ecx
  char *v19; // r13
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r15
  char *v23; // r13
  __int64 v24; // rax
  signed __int64 v25; // r12
  __int64 v26; // rdi
  const void *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r13
  int v30; // [rsp+8h] [rbp-D8h] BYREF
  __int64 *v31; // [rsp+10h] [rbp-D0h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+18h] [rbp-C8h]
  __int64 v33; // [rsp+20h] [rbp-C0h]
  __int64 v34; // [rsp+28h] [rbp-B8h]
  __int64 v35; // [rsp+38h] [rbp-A8h]
  __int64 v36; // [rsp+40h] [rbp-A0h]
  __int64 v37; // [rsp+48h] [rbp-98h]
  __int64 v38; // [rsp+50h] [rbp-90h]
  __int64 v39; // [rsp+58h] [rbp-88h]
  __int64 v40; // [rsp+68h] [rbp-78h] BYREF
  __int64 v41; // [rsp+70h] [rbp-70h]
  __int64 v42; // [rsp+78h] [rbp-68h]
  const void *v43; // [rsp+80h] [rbp-60h]
  __int64 *v44; // [rsp+88h] [rbp-58h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+90h] [rbp-50h]
  __int64 v46; // [rsp+98h] [rbp-48h]
  __int64 v47; // [rsp+A0h] [rbp-40h]
  __int64 v48; // [rsp+A8h] [rbp-38h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-30h]

  v48 = a2; /*0x100843577*/
  v49 = a3; /*0x10084357b*/
  v44 = &v48; /*0x100843583*/
  v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084358e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_1017C59CA, &v44); /*0x1008435a1*/
  v4 = v41; /*0x1008435a6*/
  _$LT$toml..value..Value$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h5a3cf8e00f46837e(&v30, v41, v42); /*0x1008435b8*/
  if ( v30 != 2 ) /*0x1008435c4*/
  {
    if ( v33 ) /*0x100843633*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x100843641*/
    if ( !__OFSUB__(-v38, 1) && v38 ) /*0x100843655*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x100843663*/
    v9 = v36; /*0x100843668*/
    v10 = v37; /*0x10084366f*/
    if ( v37 ) /*0x100843679*/
    {
      v11 = (_QWORD *)(v36 + 8); /*0x10084367b*/
      do /*0x100843697*/
      {
        v12 = *(v11 - 1); /*0x100843699*/
        if ( v12 ) /*0x1008436a0*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1); /*0x1008436ab*/
        v11 += 3; /*0x100843690*/
        --v10; /*0x100843694*/
      }
      while ( v10 ); /*0x100843697*/
    }
    if ( v35 ) /*0x1008436bc*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24 * v35, 8); /*0x1008436ce*/
LABEL_17:
    if ( v40 ) /*0x1008436da*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v40, 1); /*0x1008436e4*/
    v13 = v48; /*0x1008436e9*/
    v14 = v49; /*0x1008436ed*/
    v15 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v48, v49); /*0x1008436f1*/
    v17 = v16; /*0x1008436f6*/
    if ( (unsigned __int64)v16 <= 1 ) /*0x1008436fd*/
    {
      if ( !v16 ) /*0x100843768*/
      {
        v22 = 1; /*0x100843792*/
        goto LABEL_32; /*0x100843792*/
      }
    }
    else
    {
      v18 = (unsigned __int8)*v15; /*0x1008436ff*/
      if ( v18 == 39 ) /*0x100843705*/
      {
        if ( v15[v16 - 1] == 39 ) /*0x1008437c9*/
        {
LABEL_23:
          if ( v15[1] <= -65 ) /*0x100843724*/
            core::str::slice_error_fail::h480e51fbd8b15eba(v15, v16, 1, v16 - 1, &off_10196C678); /*0x100843890*/
          v17 = v16 - 2; /*0x10084372a*/
          if ( v16 - 2 >= 0 ) /*0x10084372e*/
          {
            if ( v16 == 2 ) /*0x100843734*/
            {
              v22 = 1; /*0x100843826*/
              ++v15; /*0x10084382c*/
              goto LABEL_32; /*0x10084382f*/
            }
            v19 = v15; /*0x10084373a*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x10084373d*/
            v20 = 1; /*0x100843742*/
            v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x100843750*/
            if ( v21 ) /*0x100843758*/
            {
              v22 = v21; /*0x10084375a*/
              v15 = v19 + 1; /*0x100843760*/
LABEL_32:
              memcpy((void *)v22, v15, v17); /*0x100843798*/
              *a1 = v17; /*0x1008437a6*/
              a1[1] = v22; /*0x1008437a9*/
              a1[2] = v17; /*0x1008437ad*/
              return result; /*0x1008437ad*/
            }
            goto LABEL_37; /*0x100843758*/
          }
LABEL_36:
          v20 = 0; /*0x1008437d4*/
          goto LABEL_37; /*0x1008437d4*/
        }
      }
      else if ( v18 == 34 && v15[v16 - 1] == 34 ) /*0x10084371a*/
      {
        goto LABEL_23; /*0x10084371a*/
      }
      if ( v16 < 0 ) /*0x1008437d2*/
        goto LABEL_36; /*0x1008437d2*/
    }
    v23 = v15; /*0x10084376a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x10084376d*/
    v20 = 1; /*0x100843772*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x100843780*/
    if ( v24 ) /*0x100843788*/
    {
      v22 = v24; /*0x10084378a*/
      v15 = v23; /*0x10084378d*/
      goto LABEL_32; /*0x100843790*/
    }
LABEL_37:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v17); /*0x1008437d7*/
  }
  v47 = v34; /*0x1008435d4*/
  v46 = v33; /*0x1008435df*/
  v45 = v32; /*0x1008435f1*/
  v44 = v31; /*0x1008435f5*/
  v7 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e(&unk_101674B38, 5, &v44, v32, v5, v6); /*0x100843609*/
  if ( !v7 || *(_BYTE *)v7 ) /*0x100843613*/
  {
    core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v31); /*0x10084361f*/
    goto LABEL_17; /*0x100843624*/
  }
  v25 = *(_QWORD *)(v7 + 24); /*0x1008437e2*/
  if ( v25 < 0 ) /*0x1008437e9*/
  {
    v26 = 0; /*0x1008437eb*/
    goto LABEL_40; /*0x1008437eb*/
  }
  v27 = *(const void **)(v7 + 16); /*0x1008437f7*/
  if ( v25 ) /*0x1008437fb*/
  {
    v43 = *(const void **)(v7 + 16); /*0x1008437fd*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674B38, v27); /*0x100843801*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x10084380e*/
    v26 = 1; /*0x100843813*/
    if ( !v28 ) /*0x10084381b*/
LABEL_40:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x1008437ed*/
    v29 = v28; /*0x10084381d*/
    v27 = v43; /*0x100843820*/
  }
  else
  {
    v29 = 1; /*0x100843834*/
  }
  memcpy((void *)v29, v27, v25); /*0x100843840*/
  *a1 = v25; /*0x100843845*/
  a1[1] = v29; /*0x100843848*/
  a1[2] = v25; /*0x10084384c*/
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v44); /*0x100843854*/
  if ( v40 ) /*0x100843860*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v40, 1); /*0x10084386e*/
  return result; /*0x1008437b1*/
}