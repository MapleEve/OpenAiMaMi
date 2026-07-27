// __ZN13codexmate_lib4core5relay12proxy_server32record_codex_openai_images_route @ 0x100263750 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_server::record_codex_openai_images_route::h9cb3a0a0833de5b1(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        const void *a4,
        size_t a5,
        __int16 a6,
        unsigned __int16 a7)
{
  size_t v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rsi
  __int64 v22; // rax
  size_t v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdi
  void *v27; // rax
  void *v28; // r15
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rax
  size_t v34; // r15
  size_t v35; // rax
  __int64 v36; // [rsp+18h] [rbp-98h]
  unsigned __int64 v38; // [rsp+30h] [rbp-80h]
  __int64 v39; // [rsp+38h] [rbp-78h]
  _DWORD v40[2]; // [rsp+44h] [rbp-6Ch] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-64h]
  void *v42; // [rsp+50h] [rbp-60h]
  __int64 v43; // [rsp+58h] [rbp-58h]
  __int64 v44; // [rsp+60h] [rbp-50h]
  _QWORD *v45; // [rsp+68h] [rbp-48h]
  size_t v46; // [rsp+70h] [rbp-40h]
  size_t __n; // [rsp+78h] [rbp-38h]
  int v48; // [rsp+84h] [rbp-2Ch]

  v46 = a5; /*0x100263767*/
  __n = a3; /*0x1002637ad*/
  v11 = a3; /*0x1002637b1*/
  codexmate_lib::core::relay::proxy_server::log_route_result::h15fcdab5b1b9c19e( /*0x1002637b4*/
    (__int64)a2,
    a3,
    (__int64)"gpt-image-2",
    11,
    "openai; ",
    6,
    a6,
    a7,
    0,
    v36);
  v12 = *a1; /*0x1002637b9*/
  v45 = (_QWORD *)(*a1 + 16LL); /*0x1002637c1*/
  v13 = *(_QWORD *)(v12 + 16); /*0x1002637c5*/
  if ( v13 ) /*0x1002637cd*/
  {
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v13); /*0x1002637cf*/
    if ( (_BYTE)result ) /*0x1002637d6*/
      goto LABEL_3; /*0x1002637d6*/
  }
  else
  {
    v13 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v45); /*0x10026383d*/
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v13); /*0x100263840*/
    if ( (_BYTE)result ) /*0x100263847*/
    {
LABEL_3:
      if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1002637e2*/
      {
        v17 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v13, v11, v15, v16); /*0x10026385b*/
        LOBYTE(v17) = v17 ^ 1; /*0x100263860*/
        v48 = v17; /*0x100263862*/
        if ( *(_BYTE *)(v12 + 24) ) /*0x100263865*/
          goto LABEL_5; /*0x10026386d*/
      }
      else
      {
        v48 = 0; /*0x1002637ea*/
        if ( *(_BYTE *)(v12 + 24) ) /*0x1002637f1*/
        {
LABEL_5:
          if ( (_BYTE)v48 /*0x100263811*/
            || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
          {
            return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v45); /*0x100263811*/
          }
          goto LABEL_32; /*0x100263811*/
        }
      }
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v40); /*0x100263873*/
      v18 = (v40[0] >> 13) - 1; /*0x100263880*/
      v19 = 0; /*0x100263883*/
      if ( v40[0] >> 13 <= 0 ) /*0x100263887*/
      {
        v20 = (1 - (v40[0] >> 13)) / 0x190u + 1; /*0x10026389b*/
        v18 += 400 * v20; /*0x1002638a3*/
        v19 = -146097 * v20; /*0x1002638a5*/
      }
      v21 = (unsigned int)((1461 * v18) >> 2); /*0x1002638c8*/
      v22 = 1000 /*0x1002638f5*/
          * (v40[1] + 86400LL * (int)(((v18 / 100) >> 2) + v21 + v19 + ((v40[0] >> 4) & 0x1FF) - v18 / 100 - 719163));
      v23 = __n; /*0x10026390a*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100263911*/
      {
        v24 = 0; /*0x100263913*/
        goto LABEL_15; /*0x100263913*/
      }
      v38 = v22 + v41 / 0xF4240uLL; /*0x100263926*/
      if ( __n ) /*0x10026392a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v21); /*0x10026392c*/
        v24 = 1; /*0x100263931*/
        v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100263940*/
        v23 = __n; /*0x100263945*/
        if ( !v25 ) /*0x10026394c*/
LABEL_15:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v23); /*0x100263916*/
        v26 = v25; /*0x10026394e*/
      }
      else
      {
        v26 = 1; /*0x100263953*/
      }
      v44 = v26; /*0x100263958*/
      memcpy((void *)v26, a2, v23); /*0x10026395f*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, a2); /*0x100263964*/
      v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100263973*/
      if ( !v27 ) /*0x10026397b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x100263b8e*/
      v28 = v27; /*0x100263981*/
      qmemcpy(v27, "gpt-image-2", 11); /*0x10026398e*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1); /*0x100263999*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002639a8*/
      v42 = v28; /*0x1002639b0*/
      if ( !v29 ) /*0x1002639b4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100263b9f*/
      *(_WORD *)(v29 + 4) = 26977; /*0x1002639ba*/
      v43 = v29; /*0x1002639c0*/
      *(_DWORD *)v29 = 1852141679; /*0x1002639c4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x1002639ca*/
      v30 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1002639d9*/
      if ( !v30 ) /*0x1002639e1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100263bb0*/
      v31 = v30; /*0x1002639e7*/
      *(_QWORD *)((char *)v30 + 5) = 0xB996E698AEE52049LL; /*0x1002639f4*/
      *v30 = 0xE52049416E65704FLL; /*0x100263a02*/
      if ( (v46 & 0x8000000000000000LL) != 0LL ) /*0x100263a0a*/
      {
        v32 = 0; /*0x100263a0c*/
        goto LABEL_25; /*0x100263a0c*/
      }
      if ( v46 ) /*0x100263a20*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1); /*0x100263a22*/
        v32 = 1; /*0x100263a27*/
        v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v46, 1); /*0x100263a36*/
        if ( !v33 ) /*0x100263a3e*/
LABEL_25:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v46); /*0x100263a0f*/
      }
      else
      {
        v33 = 1; /*0x100263a42*/
      }
      v39 = v33; /*0x100263a4a*/
      v11 = (size_t)a4; /*0x100263a4e*/
      v34 = v46; /*0x100263a55*/
      memcpy((void *)v33, a4, v46); /*0x100263a5c*/
      v13 = v12 + 160; /*0x100263a61*/
      core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h32a69f25f89abb94(v12 + 160); /*0x100263a69*/
      v35 = __n; /*0x100263a6e*/
      *(_QWORD *)(v12 + 160) = __n; /*0x100263a72*/
      *(_QWORD *)(v12 + 168) = v44; /*0x100263a7e*/
      *(_QWORD *)(v12 + 176) = v35; /*0x100263a86*/
      *(_QWORD *)(v12 + 184) = 11; /*0x100263a8e*/
      *(_QWORD *)(v12 + 192) = v42; /*0x100263a9e*/
      *(_QWORD *)(v12 + 200) = 11; /*0x100263aa6*/
      *(_QWORD *)(v12 + 208) = 6; /*0x100263ab2*/
      *(_QWORD *)(v12 + 216) = v43; /*0x100263ac2*/
      *(_QWORD *)(v12 + 224) = 6; /*0x100263aca*/
      *(_QWORD *)(v12 + 232) = 13; /*0x100263ad6*/
      *(_QWORD *)(v12 + 240) = v31; /*0x100263ae2*/
      *(_QWORD *)(v12 + 248) = 13; /*0x100263aea*/
      *(_QWORD *)(v12 + 256) = v34; /*0x100263af6*/
      *(_QWORD *)(v12 + 264) = v39; /*0x100263b02*/
      *(_QWORD *)(v12 + 272) = v34; /*0x100263b0a*/
      *(_QWORD *)(v12 + 280) = 0x8000000000000000LL; /*0x100263b1f*/
      *(_QWORD *)(v12 + 304) = v38; /*0x100263b2b*/
      *(_WORD *)(v12 + 312) = a6; /*0x100263b33*/
      *(_WORD *)(v12 + 314) = a7; /*0x100263b3c*/
      if ( (_BYTE)v48 /*0x100263b66*/
        || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      {
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v45); /*0x100263b66*/
      }
LABEL_32:
      if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100263b6c*/
                               v13,
                               v11,
                               v15,
                               0x7FFFFFFFFFFFFFFFLL) )
        *(_BYTE *)(v12 + 24) = 1; /*0x100263b79*/
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v45); /*0x100263817*/
    }
  }
  return result; /*0x10026381e*/
}