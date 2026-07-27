// __ZN13codexmate_lib4core5relay12proxy_server37record_codex_openai_passthrough_route @ 0x10026c6b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_server::record_codex_openai_passthrough_route::hfd4fdfaf7886fb4a(
        __int64 *a1,
        void *a2,
        __int64 a3,
        const void *a4,
        size_t a5,
        int a6,
        unsigned __int16 a7)
{
  const void *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rax
  size_t v30; // r15
  void *v31; // rax
  void *v32; // rbx
  size_t v33; // rax
  __int64 v34; // [rsp+18h] [rbp-88h]
  unsigned __int64 v35; // [rsp+20h] [rbp-80h]
  _DWORD v36[2]; // [rsp+2Ch] [rbp-74h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-6Ch]
  __int64 v38; // [rsp+38h] [rbp-68h]
  __int64 v39; // [rsp+40h] [rbp-60h]
  __int64 v40; // [rsp+48h] [rbp-58h]
  _QWORD *v41; // [rsp+50h] [rbp-50h]
  int v42; // [rsp+5Ch] [rbp-44h]
  _QWORD *v43; // [rsp+60h] [rbp-40h]
  size_t __n; // [rsp+68h] [rbp-38h]
  int v45; // [rsp+70h] [rbp-30h]
  unsigned __int8 v46; // [rsp+77h] [rbp-29h]

  v42 = a6; /*0x10026c6d9*/
  v12 = (const void *)a3; /*0x10026c6fa*/
  __n = a5; /*0x10026c700*/
  codexmate_lib::core::relay::proxy_server::log_route_result::h15fcdab5b1b9c19e( /*0x10026c707*/
    (__int64)a2,
    a3,
    (__int64)a4,
    a5,
    "openai; ",
    6,
    a6,
    a7,
    0,
    v34);
  v13 = *a1; /*0x10026c70c*/
  v43 = (_QWORD *)(v13 + 16); /*0x10026c715*/
  v14 = *(_QWORD *)(v13 + 16); /*0x10026c719*/
  if ( v14 ) /*0x10026c721*/
  {
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v14); /*0x10026c723*/
    if ( (_BYTE)result ) /*0x10026c72a*/
      goto LABEL_3; /*0x10026c72a*/
  }
  else
  {
    v14 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v43); /*0x10026c795*/
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v14); /*0x10026c798*/
    if ( (_BYTE)result ) /*0x10026c79f*/
    {
LABEL_3:
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10026c736*/
      {
        v18 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, v12, v16, v17); /*0x10026c7b0*/
        LOBYTE(v18) = v18 ^ 1; /*0x10026c7b5*/
        v45 = v18; /*0x10026c7b7*/
        if ( *(_BYTE *)(v13 + 24) ) /*0x10026c7ba*/
        {
LABEL_5:
          if ( (_BYTE)v45 ) /*0x10026c753*/
            return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v43); /*0x10026c787*/
LABEL_6:
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10026cabc*/
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v14,
                                   v12,
                                   v16,
                                   0x7FFFFFFFFFFFFFFFLL) )
          {
            *(_BYTE *)(v13 + 24) = 1; /*0x10026cac9*/
          }
          return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v43); /*0x10026cacf*/
        }
      }
      else
      {
        v45 = 0; /*0x10026c73e*/
        if ( *(_BYTE *)(v13 + 24) ) /*0x10026c745*/
          goto LABEL_5; /*0x10026c74d*/
      }
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v36); /*0x10026c7c8*/
      v19 = (v36[0] >> 13) - 1; /*0x10026c7d5*/
      v20 = 0; /*0x10026c7d8*/
      if ( v36[0] >> 13 <= 0 ) /*0x10026c7dc*/
      {
        v21 = (1 - (v36[0] >> 13)) / 0x190u + 1; /*0x10026c7f0*/
        v19 += 400 * v21; /*0x10026c7f8*/
        v20 = -146097 * v21; /*0x10026c7fa*/
      }
      v22 = (unsigned int)((1461 * v19) >> 2); /*0x10026c81d*/
      if ( a3 < 0 ) /*0x10026c862*/
      {
        v23 = 0; /*0x10026c864*/
        goto LABEL_15; /*0x10026c864*/
      }
      v35 = 1000 /*0x10026c876*/
          * (v36[1] + 86400LL * (int)(((v19 / 100) >> 2) + v22 + v20 + ((v36[0] >> 4) & 0x1FF) - v19 / 100 - 719163))
          + v37 / 0xF4240uLL;
      if ( a3 ) /*0x10026c87a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v22); /*0x10026c87c*/
        v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x10026c88e*/
        v23 = 1; /*0x10026c891*/
        if ( !v24 ) /*0x10026c899*/
LABEL_15:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, a3); /*0x10026c866*/
      }
      else
      {
        v24 = 1; /*0x10026c89d*/
      }
      v38 = v24; /*0x10026c8a2*/
      memcpy((void *)v24, a2, a3); /*0x10026c8ac*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10026c8b6*/
      {
        v25 = 0; /*0x10026c8b8*/
        goto LABEL_22; /*0x10026c8b8*/
      }
      if ( __n ) /*0x10026c8c8*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, a2); /*0x10026c8ca*/
        v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10026c8d8*/
        v25 = 1; /*0x10026c8dd*/
        if ( !v26 ) /*0x10026c8e5*/
LABEL_22:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, __n); /*0x10026c8ba*/
      }
      else
      {
        v26 = 1; /*0x10026c8e9*/
      }
      v39 = v26; /*0x10026c8ee*/
      v27 = v26; /*0x10026c8f2*/
      memcpy((void *)v26, a4, __n); /*0x10026c8fc*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, a4); /*0x10026c901*/
      v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10026c910*/
      if ( !v28 ) /*0x10026c918*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10026cade*/
      *(_WORD *)(v28 + 4) = 26977; /*0x10026c91e*/
      v40 = v28; /*0x10026c924*/
      *(_DWORD *)v28 = 1852141679; /*0x10026c928*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x10026c92e*/
      v29 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x10026c93d*/
      if ( !v29 ) /*0x10026c945*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x10026caef*/
      *(_QWORD *)((char *)v29 + 5) = 0xB996E698AEE52049LL; /*0x10026c955*/
      v41 = v29; /*0x10026c963*/
      *v29 = 0xE52049416E65704FLL; /*0x10026c967*/
      v46 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10026c981*/
              "compact/responses/responses/compactaimami-compact-v1:",
              7u,
              a2);
      v30 = 8LL * v46 + 47; /*0x10026c987*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10026c98f*/
        "compact/responses/responses/compactaimami-compact-v1:",
        7);
      v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x10026c99c*/
      if ( !v31 ) /*0x10026c9a4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v30); /*0x10026cafe*/
      v32 = v31; /*0x10026c9aa*/
      v12 = &unk_1015DDC8D; /*0x10026c9b4*/
      if ( v46 ) /*0x10026c9bf*/
        v12 = &unk_1015DDCBC; /*0x10026c9bf*/
      memcpy(v31, v12, v30); /*0x10026c9c9*/
      v14 = v13 + 160; /*0x10026c9ce*/
      core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h32a69f25f89abb94(v13 + 160); /*0x10026c9d6*/
      *(_QWORD *)(v13 + 160) = a3; /*0x10026c9db*/
      *(_QWORD *)(v13 + 168) = v38; /*0x10026c9e7*/
      *(_QWORD *)(v13 + 176) = a3; /*0x10026c9ef*/
      v33 = __n; /*0x10026c9f7*/
      *(_QWORD *)(v13 + 184) = __n; /*0x10026c9fb*/
      *(_QWORD *)(v13 + 192) = v39; /*0x10026ca07*/
      *(_QWORD *)(v13 + 200) = v33; /*0x10026ca0f*/
      *(_QWORD *)(v13 + 208) = 6; /*0x10026ca17*/
      *(_QWORD *)(v13 + 216) = v40; /*0x10026ca27*/
      *(_QWORD *)(v13 + 224) = 6; /*0x10026ca2f*/
      *(_QWORD *)(v13 + 232) = 13; /*0x10026ca3b*/
      *(_QWORD *)(v13 + 240) = v41; /*0x10026ca4b*/
      *(_QWORD *)(v13 + 248) = 13; /*0x10026ca53*/
      *(_QWORD *)(v13 + 256) = v30; /*0x10026ca5f*/
      *(_QWORD *)(v13 + 264) = v32; /*0x10026ca67*/
      *(_QWORD *)(v13 + 272) = v30; /*0x10026ca6f*/
      *(_QWORD *)(v13 + 280) = 0x8000000000000000LL; /*0x10026ca84*/
      *(_QWORD *)(v13 + 304) = v35; /*0x10026ca90*/
      *(_WORD *)(v13 + 312) = v42; /*0x10026ca9b*/
      *(_WORD *)(v13 + 314) = a7; /*0x10026caa4*/
      if ( (_BYTE)v45 ) /*0x10026cab1*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v43); /*0x10026cab1*/
      goto LABEL_6; /*0x10026cab1*/
    }
  }
  return result; /*0x10026c779*/
}