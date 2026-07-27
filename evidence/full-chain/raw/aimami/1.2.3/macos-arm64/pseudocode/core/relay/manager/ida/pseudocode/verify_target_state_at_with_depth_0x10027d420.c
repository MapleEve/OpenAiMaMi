// __ZN13codexmate_lib4core5relay7manager12RelayManager33verify_target_state_at_with_depth @ 0x10027d420
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::hd91fba3a4fba871c(
        __int64 *a1,
        __m128i *a2,
        const __m128i *a3,
        int a4,
        int a5)
{
  const __m128i *v9; // rsi
  __int64 result; // rax
  __m128i *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  char v17; // r15
  __int64 *v18; // r13
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  bool v28; // zf
  __int64 *i64; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  void *v33; // rax
  __int64 v34; // rdx
  void *v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r9
  unsigned __int64 v41; // r14
  size_t v42; // r13
  __int64 v43; // rbx
  __int64 *v44; // rbx
  void *v45; // rdx
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD v52[3]; // [rsp+8h] [rbp-D8h] BYREF
  _QWORD v53[2]; // [rsp+20h] [rbp-C0h] BYREF
  __int64 *v54; // [rsp+30h] [rbp-B0h]
  const __m128i *v55; // [rsp+38h] [rbp-A8h]
  __int64 (__fastcall *v56)(); // [rsp+40h] [rbp-A0h]
  const __m128i *v57; // [rsp+48h] [rbp-98h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+50h] [rbp-90h]
  unsigned __int64 v59; // [rsp+58h] [rbp-88h]
  const __m128i *v60; // [rsp+60h] [rbp-80h]
  __int64 (__fastcall *v61)(); // [rsp+68h] [rbp-78h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+70h] [rbp-70h]
  const __m128i *v63; // [rsp+78h] [rbp-68h]
  char *v64; // [rsp+80h] [rbp-60h]
  __m128i *v65; // [rsp+88h] [rbp-58h]
  int v66; // [rsp+94h] [rbp-4Ch]
  void *__src; // [rsp+98h] [rbp-48h]
  __int64 v68; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-38h]
  __int64 v70; // [rsp+B0h] [rbp-30h]

  v9 = a3; /*0x10027d443*/
  codexmate_lib::core::relay::invariants::verify_invariants_with_depth::h960ecc8c9694ee1f(&v68, a3, a4, a5); /*0x10027d44b*/
  if ( a4 ) /*0x10027d452*/
  {
    a1[2] = v70; /*0x10027d458*/
    result = v68; /*0x10027d45d*/
    a1[1] = v69; /*0x10027d465*/
    *a1 = result; /*0x10027d46a*/
  }
  else
  {
    v11 = a2 + 1; /*0x10027d473*/
    v12 = a2[1].i64[0]; /*0x10027d477*/
    if ( !v12 ) /*0x10027d47e*/
      v12 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&a2[1]); /*0x10027d8fd*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v12); /*0x10027d484*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10027d493*/
    {
      v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, v9, v13, v14); /*0x10027d905*/
      LOBYTE(v15) = v15 ^ 1; /*0x10027d90a*/
    }
    else
    {
      v15 = 0; /*0x10027d49f*/
    }
    v16 = a2[1].u8[8]; /*0x10027d4a1*/
    v62 = (__int64 (__fastcall *)())&a2[1]; /*0x10027d4ad*/
    LOBYTE(v63) = v15; /*0x10027d4b1*/
    v61 = (__int64 (__fastcall *)())((_BYTE)v16 != 0); /*0x10027d4b4*/
    if ( (_BYTE)v16 ) /*0x10027d4b8*/
    {
      __src = a2; /*0x10027d4be*/
      v17 = v15; /*0x10027d4c2*/
      v18 = (__int64 *)v11; /*0x10027d4c5*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v9); /*0x10027d4c8*/
      v19 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(74, 1); /*0x10027d4d7*/
      if ( !v19 ) /*0x10027d4df*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 74); /*0x10027d982*/
      v20 = v19; /*0x10027d4e5*/
      v21 = v19; /*0x10027d4f4*/
      memcpy(v19, &unk_1015DE9BA, 0x4Au); /*0x10027d4f7*/
      v23 = v70; /*0x10027d4fc*/
      if ( v70 == v68 ) /*0x10027d504*/
      {
        v21 = &v68; /*0x10027d506*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v68); /*0x10027d50a*/
      }
      v24 = v69; /*0x10027d50f*/
      v25 = 32 * v23; /*0x10027d516*/
      *(_QWORD *)(v69 + v25) = 74; /*0x10027d51a*/
      *(_QWORD *)(v24 + v25 + 8) = v20; /*0x10027d522*/
      *(_QWORD *)(v24 + v25 + 16) = 74; /*0x10027d527*/
      *(_BYTE *)(v24 + v25 + 24) = 5; /*0x10027d530*/
      v70 = v23 + 1; /*0x10027d538*/
      a1[2] = v23 + 1; /*0x10027d53c*/
      v26 = v68; /*0x10027d541*/
      a1[1] = v69; /*0x10027d549*/
      *a1 = v26; /*0x10027d54e*/
      if ( !v17 /*0x10027d911*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v21,
                               &unk_1015DE9BA,
                               v22,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)__src + 24) = 1; /*0x10027d922*/
      }
      v27 = *v18; /*0x10027d574*/
    }
    else
    {
      v28 = a2[2].i64[0] == 0; /*0x10027d57d*/
      v65 = a2 + 1; /*0x10027d582*/
      v66 = v15; /*0x10027d586*/
      if ( v28 ) /*0x10027d589*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v9); /*0x10027d5bc*/
        v32 = 43; /*0x10027d5c1*/
        v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x10027d5cb*/
        if ( !v33 ) /*0x10027d5d3*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43); /*0x10027d993*/
        v35 = v33; /*0x10027d5d9*/
        qmemcpy(v33, "RouterOn requires a live local proxy handle", 43); /*0x10027d61e*/
        v36 = v70; /*0x10027d628*/
        if ( v70 == v68 ) /*0x10027d630*/
        {
          v32 = (__int64)&v68; /*0x10027d632*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v68); /*0x10027d636*/
        }
        v37 = v69; /*0x10027d63b*/
        v38 = 32 * v36; /*0x10027d642*/
        *(_QWORD *)(v69 + v38) = 43; /*0x10027d646*/
        *(_QWORD *)(v37 + v38 + 8) = v35; /*0x10027d64e*/
        *(_QWORD *)(v37 + v38 + 16) = 43; /*0x10027d653*/
        *(_BYTE *)(v37 + v38 + 24) = 5; /*0x10027d65c*/
        v70 = v36 + 1; /*0x10027d664*/
        a1[2] = v36 + 1; /*0x10027d668*/
        v39 = v68; /*0x10027d66d*/
        a1[1] = v69; /*0x10027d675*/
        *a1 = v39; /*0x10027d67a*/
        if ( !(_BYTE)v66 /*0x10027d961*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v32,
                                 1,
                                 v34,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          a2[1].i8[8] = 1; /*0x10027d96e*/
        }
        v27 = v65->i64[0]; /*0x10027d6a5*/
      }
      else
      {
        i64 = a2[2].i64; /*0x10027d58b*/
        v30 = v69; /*0x10027d58f*/
        v31 = 32 * v70; /*0x10027d597*/
        while ( v31 ) /*0x10027d5a3*/
        {
          v31 -= 32; /*0x10027d5a9*/
          v28 = *(_BYTE *)(v30 + 24) == 0; /*0x10027d5ad*/
          v30 += 32; /*0x10027d5b1*/
          if ( v28 ) /*0x10027d5b5*/
            goto LABEL_33; /*0x10027d5b5*/
        }
        v54 = a2[2].i64; /*0x10027d6ad*/
        v57 = a2 + 3; /*0x10027d6b8*/
        v58 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10027d6c6*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v61, &unk_1017B98DA, &v57); /*0x10027d6e2*/
        v53[0] = &v61; /*0x10027d6e7*/
        v53[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027d6f5*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v57, &unk_1017BA4FB, v53); /*0x10027d711*/
        if ( v61 ) /*0x10027d71d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v61, 1); /*0x10027d728*/
        v60 = v57; /*0x10027d734*/
        v56 = v58; /*0x10027d750*/
        codexmate_lib::core::relay::invariants::verify_router_on_http_contract::h1b40dd6085d38a69(&v57, a3, v58, v59); /*0x10027d757*/
        v41 = v59; /*0x10027d76a*/
        v42 = 32 * v59; /*0x10027d774*/
        v61 = v58; /*0x10027d77c*/
        v55 = v57; /*0x10027d780*/
        v63 = v57; /*0x10027d787*/
        __src = v58; /*0x10027d78b*/
        v62 = v58; /*0x10027d78f*/
        v64 = (char *)v58 + 32 * v59; /*0x10027d793*/
        v43 = v70; /*0x10027d79b*/
        if ( v59 > v68 - v70 ) /*0x10027d7a5*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10027d940*/
            &v68,
            v70,
            v59,
            8,
            32,
            v40);
          v43 = v70; /*0x10027d945*/
        }
        memcpy((void *)(v69 + 32 * v43), __src, v42); /*0x10027d7bd*/
        v70 = v43 + v41; /*0x10027d7c5*/
        if ( v55 ) /*0x10027d7d3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, 32LL * (_QWORD)v55, 8); /*0x10027d7e2*/
        v9 = v60; /*0x10027d7e7*/
        v11 = v65; /*0x10027d7ee*/
        i64 = v54; /*0x10027d7f2*/
        if ( v60 ) /*0x10027d7f9*/
        {
          v44 = v54; /*0x10027d800*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v60, 1); /*0x10027d80a*/
          i64 = v44; /*0x10027d80f*/
        }
LABEL_33:
        if ( !(unsigned __int8)codexmate_lib::core::relay::manager::proxy_handle_port_accepts::hc74fa5e0e8f8c6b2( /*0x10027d812*/
                                 i64,
                                 v9,
                                 v16,
                                 v30) )
        {
          v61 = (__int64 (__fastcall *)())&a2[3]; /*0x10027d823*/
          v62 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10027d82e*/
          v9 = (const __m128i *)&unk_1017BA866; /*0x10027d832*/
          i64 = v52; /*0x10027d839*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v52, &unk_1017BA866, &v61); /*0x10027d844*/
          __src = (void *)v52[0]; /*0x10027d850*/
          v46 = v52[1]; /*0x10027d854*/
          v47 = v52[2]; /*0x10027d85b*/
          v48 = v70; /*0x10027d862*/
          if ( v70 == v68 ) /*0x10027d86a*/
          {
            i64 = &v68; /*0x10027d86c*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v68); /*0x10027d870*/
          }
          v49 = v69; /*0x10027d875*/
          v50 = 32 * v48; /*0x10027d87c*/
          v45 = __src; /*0x10027d880*/
          *(_QWORD *)(v69 + v50) = __src; /*0x10027d884*/
          *(_QWORD *)(v49 + v50 + 8) = v46; /*0x10027d888*/
          *(_QWORD *)(v49 + v50 + 16) = v47; /*0x10027d88d*/
          *(_BYTE *)(v49 + v50 + 24) = 5; /*0x10027d892*/
          v70 = v48 + 1; /*0x10027d89a*/
          v11 = v65; /*0x10027d89e*/
        }
        a1[2] = v70; /*0x10027d8a6*/
        v51 = v68; /*0x10027d8ab*/
        a1[1] = v69; /*0x10027d8b3*/
        *a1 = v51; /*0x10027d8b8*/
        if ( !(_BYTE)v66 /*0x10027d94e*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 i64,
                                 v9,
                                 v45,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          a2[1].i8[8] = 1; /*0x10027d957*/
        }
        v27 = v11->i64[0]; /*0x10027d8db*/
      }
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v27); /*0x10027d8de*/
  }
  return result; /*0x10027d8e3*/
}