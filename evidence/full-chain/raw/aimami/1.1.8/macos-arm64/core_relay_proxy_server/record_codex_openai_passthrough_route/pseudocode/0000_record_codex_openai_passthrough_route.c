// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_openai_passthrough_route node 0x1005b8b00 depth=0
int __fastcall codexmate_lib::core::relay::proxy_server::record_codex_openai_passthrough_route::hf631b0cc67f6f444(
        _QWORD *a1,
        void *a2,
        size_t a3,
        const void *a4,
        __int64 a5,
        int a6,
        __int16 a7)
{
  __int64 v10; // r12
  volatile signed __int64 *v11; // r15
  int result; // eax
  signed __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // r15
  size_t v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r13
  size_t v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r14
  void *v28; // rax
  void *v29; // rbx
  char *v30; // rsi
  size_t v31; // rax
  _DWORD v32[3]; // [rsp+Ch] [rbp-84h] BYREF
  __int64 v33; // [rsp+18h] [rbp-78h]
  __int64 v34; // [rsp+20h] [rbp-70h]
  __int64 v35; // [rsp+28h] [rbp-68h]
  _QWORD *v36; // [rsp+30h] [rbp-60h]
  int v37; // [rsp+3Ch] [rbp-54h]
  volatile signed __int64 *v38; // [rsp+40h] [rbp-50h]
  size_t v39; // [rsp+48h] [rbp-48h]
  __int16 v40; // [rsp+56h] [rbp-3Ah]
  size_t __n; // [rsp+58h] [rbp-38h]
  int v42; // [rsp+60h] [rbp-30h]
  unsigned __int8 v43; // [rsp+67h] [rbp-29h]

  v37 = a6; /*0x1005b8b11*/
  __n = a3; /*0x1005b8b1b*/
  v40 = a7; /*0x1005b8b26*/
  v10 = *a1; /*0x1005b8b2a*/
  v11 = (volatile signed __int64 *)(*a1 + 16LL); /*0x1005b8b2d*/
  if ( *v11 ) /*0x1005b8b32*/
  {
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(*v11); /*0x1005b8b3c*/
    if ( (_BYTE)result ) /*0x1005b8b43*/
      goto LABEL_3; /*0x1005b8b43*/
  }
  else
  {
    v13 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v11); /*0x1005b8ba4*/
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v13); /*0x1005b8bac*/
    if ( (_BYTE)result ) /*0x1005b8bb3*/
    {
LABEL_3:
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005b8b4f*/
      {
        LOBYTE(v14) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1005b8bc9*/
        v42 = v14; /*0x1005b8bcb*/
        if ( *(_BYTE *)(v10 + 24) ) /*0x1005b8bce*/
        {
LABEL_5:
          if ( (_BYTE)v42 ) /*0x1005b8b6c*/
            return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v11); /*0x1005b8b9c*/
LABEL_6:
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005b8ef1*/
            && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
          {
            *(_BYTE *)(v10 + 24) = 1; /*0x1005b8efe*/
          }
          return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v11); /*0x1005b8f04*/
        }
      }
      else
      {
        v42 = 0; /*0x1005b8b57*/
        if ( *(_BYTE *)(v10 + 24) ) /*0x1005b8b5e*/
          goto LABEL_5; /*0x1005b8b66*/
      }
      v38 = v11; /*0x1005b8bd8*/
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v32); /*0x1005b8be3*/
      v15 = (v32[0] >> 13) - 1; /*0x1005b8bf3*/
      v16 = 0; /*0x1005b8bf6*/
      if ( v32[0] >> 13 <= 0 ) /*0x1005b8bfa*/
      {
        v17 = (1 - (v32[0] >> 13)) / 0x190u + 1; /*0x1005b8c0e*/
        v15 += 400 * v17; /*0x1005b8c16*/
        v16 = -146097 * v17; /*0x1005b8c18*/
      }
      v18 = 1000 /*0x1005b8c7a*/
          * (v32[1]
           + 86400LL * (((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + ((v32[0] >> 4) & 0x1FF) - v15 / 100 - 719163))
          + v32[2] / 0xF4240uLL;
      v19 = __n; /*0x1005b8c7d*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1005b8c84*/
      {
        v20 = 0; /*0x1005b8c86*/
        goto LABEL_15; /*0x1005b8c86*/
      }
      v39 = a5; /*0x1005b8c96*/
      if ( __n ) /*0x1005b8c9a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b8c9c*/
        v20 = 1; /*0x1005b8ca1*/
        v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x1005b8cb0*/
        v19 = __n; /*0x1005b8cb5*/
        if ( !v21 ) /*0x1005b8cbc*/
LABEL_15:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v19); /*0x1005b8c89*/
        a5 = v39; /*0x1005b8cbe*/
      }
      else
      {
        v21 = 1; /*0x1005b8cc4*/
      }
      v33 = v21; /*0x1005b8cc9*/
      memcpy((void *)v21, a2, __n); /*0x1005b8cd7*/
      if ( a5 < 0 ) /*0x1005b8cdf*/
      {
        v22 = 0; /*0x1005b8ce1*/
        goto LABEL_22; /*0x1005b8ce1*/
      }
      if ( a5 ) /*0x1005b8cf5*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b8cf7*/
        v23 = a5; /*0x1005b8cfc*/
        v22 = 1; /*0x1005b8cff*/
        v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1u); /*0x1005b8d0a*/
        if ( !v24 ) /*0x1005b8d12*/
LABEL_22:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v39); /*0x1005b8ce4*/
        a5 = v39; /*0x1005b8d14*/
      }
      else
      {
        v24 = 1; /*0x1005b8d1a*/
      }
      v34 = v24; /*0x1005b8d1f*/
      memcpy((void *)v24, a4, a5); /*0x1005b8d2c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b8d31*/
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1005b8d40*/
      if ( !v25 ) /*0x1005b8d48*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1005b8f13*/
      *(_WORD *)(v25 + 4) = 26977; /*0x1005b8d4e*/
      v35 = v25; /*0x1005b8d54*/
      *(_DWORD *)v25 = 1852141679; /*0x1005b8d58*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b8d5e*/
      v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1005b8d6d*/
      if ( !v26 ) /*0x1005b8d75*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x1005b8f24*/
      *(_QWORD *)((char *)v26 + 5) = 0xB996E698AEE52049LL; /*0x1005b8d85*/
      v36 = v26; /*0x1005b8d93*/
      *v26 = 0xE52049416E65704FLL; /*0x1005b8d97*/
      v43 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005b8db2*/
              "compact/responses/responses/compactaimami-compact-v1:",
              7u,
              a2);
      v27 = 8LL * v43 + 47; /*0x1005b8db8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b8dc0*/
      v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1u); /*0x1005b8dcd*/
      if ( !v28 ) /*0x1005b8dd5*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v27); /*0x1005b8f33*/
      v29 = v28; /*0x1005b8ddb*/
      v30 = "https://chatgpt.com/backend-api/codex/responseshttps://chatgpt.com/backend-api/codex/responses/compactaimami-router"; /*0x1005b8de5*/
      if ( v43 ) /*0x1005b8df0*/
        v30 = "https://chatgpt.com/backend-api/codex/responses/compactaimami-router"; /*0x1005b8df0*/
      memcpy(v28, v30, v27); /*0x1005b8dfa*/
      core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h082e8dfa355a3af0(v10 + 208); /*0x1005b8e07*/
      v31 = __n; /*0x1005b8e0c*/
      *(_QWORD *)(v10 + 208) = __n; /*0x1005b8e10*/
      *(_QWORD *)(v10 + 216) = v33; /*0x1005b8e1c*/
      *(_QWORD *)(v10 + 224) = v31; /*0x1005b8e24*/
      *(_QWORD *)(v10 + 232) = a5; /*0x1005b8e2c*/
      *(_QWORD *)(v10 + 240) = v34; /*0x1005b8e38*/
      *(_QWORD *)(v10 + 248) = a5; /*0x1005b8e40*/
      *(_QWORD *)(v10 + 256) = 6; /*0x1005b8e48*/
      *(_QWORD *)(v10 + 264) = v35; /*0x1005b8e58*/
      *(_QWORD *)(v10 + 272) = 6; /*0x1005b8e60*/
      *(_QWORD *)(v10 + 280) = 13; /*0x1005b8e6c*/
      *(_QWORD *)(v10 + 288) = v36; /*0x1005b8e7c*/
      *(_QWORD *)(v10 + 296) = 13; /*0x1005b8e84*/
      *(_QWORD *)(v10 + 304) = v27; /*0x1005b8e90*/
      *(_QWORD *)(v10 + 312) = v29; /*0x1005b8e98*/
      *(_QWORD *)(v10 + 320) = v27; /*0x1005b8ea0*/
      *(_QWORD *)(v10 + 328) = 0x8000000000000000LL; /*0x1005b8eb5*/
      *(_QWORD *)(v10 + 352) = v18; /*0x1005b8ebd*/
      *(_WORD *)(v10 + 360) = v37; /*0x1005b8ec8*/
      *(_WORD *)(v10 + 362) = v40; /*0x1005b8ed5*/
      v11 = v38; /*0x1005b8ee2*/
      if ( (_BYTE)v42 ) /*0x1005b8ee6*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v11); /*0x1005b8ee6*/
      goto LABEL_6; /*0x1005b8ee6*/
    }
  }
  return result; /*0x1005b8b8e*/
}