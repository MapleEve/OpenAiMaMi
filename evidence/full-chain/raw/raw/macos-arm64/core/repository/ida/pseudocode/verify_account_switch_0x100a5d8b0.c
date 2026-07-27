// __ZN13codexmate_lib4core10repository10Repository21verify_account_switch @ 0x100a5d8b0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::verify_account_switch::h6238cc2dcd870b36(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        size_t a4,
        __m128i a5)
{
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // r15
  void *v12; // rax
  void *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // r12
  int v22; // eax
  void *v23; // rax
  void *v24; // r14
  _QWORD v25[12]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v26[12]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v27[3]; // [rsp+C8h] [rbp-78h] BYREF
  _QWORD v28[2]; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-50h]
  __int64 v30; // [rsp+F8h] [rbp-48h]
  __int64 v31; // [rsp+100h] [rbp-40h]
  void *__s1; // [rsp+108h] [rbp-38h]
  void *v33; // [rsp+110h] [rbp-30h]

  v9 = a2[28]; /*0x100a5d8d0*/
  v10 = v26; /*0x100a5d8df*/
  *(double *)a5.i64 = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(v26, v9, a2[29]); /*0x100a5d8e6*/
  if ( LODWORD(v26[0]) != 11 ) /*0x100a5d8f2*/
  {
    qmemcpy(v25, v26, sizeof(v25)); /*0x100a5da1c*/
    v28[0] = v25; /*0x100a5da1f*/
    v28[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a5da2a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1017C907A, v28); /*0x100a5da3d*/
    v26[1] = v27[0]; /*0x100a5da51*/
    v26[2] = v27[1]; /*0x100a5da58*/
    v26[3] = v27[2]; /*0x100a5da63*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v25); /*0x100a5da71*/
    qmemcpy(a1 + 1, &v26[1], 0x58u); /*0x100a5da82*/
    *a1 = 10; /*0x100a5da85*/
    return a1; /*0x100a5da85*/
  }
  v30 = v26[1]; /*0x100a5d8ff*/
  v29 = v26[2]; /*0x100a5d90a*/
  v11 = v26[3]; /*0x100a5d90e*/
  __s1 = (void *)v26[5]; /*0x100a5d923*/
  v31 = v26[4]; /*0x100a5d927*/
  if ( __OFSUB__(-v26[4], 1) || v26[6] != a4 || (v10 = __s1, v9 = (__int64)a3, memcmp(__s1, a3, a4)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v9); /*0x100a5d950*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x100a5d95f*/
    if ( v12 )
    {
      v13 = v12; /*0x100a5d96d*/
      memcpy(
        v12,
        "SWITCH_REGISTRY_VERIFY_FAILED: active account does not match the requested account[AiMaMi][accounts] repairing non-switchable active snapshot during registry recovery[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
        0x52u);
      *a1 = 10; /*0x100a5d984*/
      a1[1] = 82; /*0x100a5d98b*/
      a1[2] = v13; /*0x100a5d993*/
      a1[3] = 82; /*0x100a5d997*/
      v14 = v31; /*0x100a5d99f*/
      v15 = v29; /*0x100a5d9ae*/
      v16 = v30; /*0x100a5d9b2*/
      if ( !(2 * v31) ) /*0x100a5d9b6*/
      {
LABEL_8:
        if ( v11 ) /*0x100a5d9c9*/
        {
          v17 = v15; /*0x100a5d9cb*/
          do /*0x100a5d9e2*/
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v17); /*0x100a5d9d3*/
            v17 += 424; /*0x100a5d9d8*/
            --v11; /*0x100a5d9df*/
          }
          while ( v11 ); /*0x100a5d9e2*/
        }
        if ( v16 ) /*0x100a5d9e7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 424 * v16, 8); /*0x100a5d9fc*/
        return a1; /*0x100a5da01*/
      }
LABEL_7:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v14, 1); /*0x100a5d9b8*/
      goto LABEL_8; /*0x100a5d9c1*/
    }
    goto LABEL_26; /*0x100a5d967*/
  }
  v19 = a2[4]; /*0x100a5daa1*/
  v20 = v25; /*0x100a5daab*/
  codexmate_lib::core::repository::Repository::live_account_identity::h503e6c01c902a0b6((__int64)v25, v19, a2[5], a5); /*0x100a5dab2*/
  v21 = v25[0]; /*0x100a5dac1*/
  if ( v25[0] == 0x8000000000000000LL )
  {
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v19); /*0x100a5db0a*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x100a5db19*/
    if ( v23 )
    {
      v24 = v23; /*0x100a5db23*/
      memcpy(
        v23,
        "SWITCH_AUTH_VERIFY_FAILED: auth.json identity does not match the requested accountSWITCH_REGISTRY_VERIFY_FAILED:"
        " active account does not match the requested account[AiMaMi][accounts] repairing non-switchable active snapshot "
        "during registry recovery[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and "
        "registry continuity",
        0x52u);
      *a1 = 10; /*0x100a5db3a*/
      a1[1] = 82; /*0x100a5db41*/
      a1[2] = v24; /*0x100a5db49*/
      a1[3] = 82; /*0x100a5db4d*/
      v14 = v31; /*0x100a5db55*/
      v15 = v29; /*0x100a5db5c*/
      v16 = v30; /*0x100a5db60*/
      if ( !v31 ) /*0x100a5db64*/
        goto LABEL_8; /*0x100a5db64*/
      goto LABEL_7; /*0x100a5db64*/
    }
LABEL_26:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 82); /*0x100a5db9c*/
  }
  v20 = (_QWORD *)v25[1]; /*0x100a5dacd*/
  if ( v25[2] != a4 /*0x100a5daf6*/
    || (v33 = (void *)v25[1], v19 = (__int64)a3, v22 = memcmp((const void *)v25[1], a3, a4), v20 = v33, v22) )
  {
    if ( v21 ) /*0x100a5dafb*/
    {
      v19 = v21; /*0x100a5db02*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v21, 1); /*0x100a5db05*/
    }
    goto LABEL_20; /*0x100a5db05*/
  }
  if ( v21 ) /*0x100a5db79*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v21, 1); /*0x100a5db83*/
  *a1 = 11; /*0x100a5db88*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(&v26[1]); /*0x100a5db92*/
  return a1; /*0x100a5da8f*/
}