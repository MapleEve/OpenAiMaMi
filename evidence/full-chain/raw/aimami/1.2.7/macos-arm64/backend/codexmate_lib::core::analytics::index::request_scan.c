// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::request_scan::hf3b98134486ca583; addr: 0x10089af90; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
volatile signed __int64 *__fastcall codexmate_lib::core::analytics::index::request_scan::hf3b98134486ca583(
        __int64 a1,
        char a2,
        double a3)
{
  __int64 v3; // r15
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // ecx
  volatile signed __int64 *v7; // r15
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // r14
  volatile signed __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rt0
  char v21; // of
  volatile signed __int64 *v22; // r15
  void *v23; // rax
  int *v24; // rsi
  __int64 v25; // rdx
  void *v26; // rcx
  __int64 v27; // rdx
  void *v28; // rax
  void *v29; // r14
  volatile signed __int64 *v30; // r12
  volatile signed __int64 *v31; // rbx
  __int64 v32; // rdi
  char v33; // r15
  volatile signed __int64 *result; // rax
  _BYTE __src[744]; // [rsp+8h] [rbp-678h] BYREF
  _QWORD __dst[95]; // [rsp+2F0h] [rbp-390h] BYREF
  int v37[2]; // [rsp+5E8h] [rbp-98h] BYREF
  int v38[2]; // [rsp+5F0h] [rbp-90h]
  __int64 v39; // [rsp+5F8h] [rbp-88h]
  __int64 v40; // [rsp+600h] [rbp-80h]
  __int64 v41; // [rsp+608h] [rbp-78h]
  unsigned __int8 v42; // [rsp+610h] [rbp-70h]
  int v43[2]; // [rsp+618h] [rbp-68h] BYREF
  __int64 v44; // [rsp+620h] [rbp-60h]
  __int64 v45; // [rsp+628h] [rbp-58h]
  volatile signed __int64 *v46; // [rsp+630h] [rbp-50h]
  int v47[2]; // [rsp+638h] [rbp-48h] BYREF
  void *v48; // [rsp+640h] [rbp-40h]
  __int64 v49; // [rsp+648h] [rbp-38h]
  volatile signed __int64 *v50; // [rsp+650h] [rbp-30h] BYREF

  v3 = codexmate_lib::core::analytics::index::worker::hd4cc4bbca6f7f453(); /*0x10089afaf*/
  v50 = (volatile signed __int64 *)v3; /*0x10089afb2*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__dst); /*0x10089afbd*/
  v4 = (SLODWORD(__dst[0]) >> 13) - 1; /*0x10089afcd*/
  v5 = 0; /*0x10089afd0*/
  if ( SLODWORD(__dst[0]) >> 13 <= 0 ) /*0x10089afd4*/
  {
    v6 = (1 - (SLODWORD(__dst[0]) >> 13)) / 0x190u + 1; /*0x10089afe8*/
    v4 += 400 * v6; /*0x10089aff0*/
    v5 = -146097 * v6; /*0x10089aff2*/
  }
  *(_QWORD *)(v3 + 32) = HIDWORD(__dst[0]) /*0x10089b042*/
                       + 86400LL
                       * (((v4 / 100) >> 2)
                        + ((1461 * v4) >> 2)
                        + v5
                        + ((LODWORD(__dst[0]) >> 4) & 0x1FF)
                        - v4 / 100
                        - 719163);
  v7 = v50; /*0x10089b046*/
  if ( *((_BYTE *)v50 + 104) ) /*0x10089b04a*/
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__dst); /*0x10089b05e*/
    v8 = (SLODWORD(__dst[0]) >> 13) - 1; /*0x10089b06e*/
    v9 = 0; /*0x10089b071*/
    if ( SLODWORD(__dst[0]) >> 13 <= 0 ) /*0x10089b075*/
    {
      v10 = (1 - (SLODWORD(__dst[0]) >> 13)) / 0x190u + 1; /*0x10089b089*/
      v8 += 400 * v10; /*0x10089b091*/
      v9 = -146097 * v10; /*0x10089b093*/
    }
    if ( 86400LL /*0x10089b0ee*/
       * (((v8 / 100) >> 2) + ((1461 * v8) >> 2) + v9 + ((LODWORD(__dst[0]) >> 4) & 0x1FF) - v8 / 100 - 719163)
       + HIDWORD(__dst[0])
       - *((_QWORD *)v7 + 4) < 75 )
    {
      if ( a2 ) /*0x10089b0f7*/
        goto LABEL_41; /*0x10089b0f7*/
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__dst); /*0x10089b104*/
      v11 = (SLODWORD(__dst[0]) >> 13) - 1; /*0x10089b114*/
      v12 = 0; /*0x10089b117*/
      if ( SLODWORD(__dst[0]) >> 13 <= 0 ) /*0x10089b11b*/
      {
        v13 = (1 - (SLODWORD(__dst[0]) >> 13)) / 0x190u + 1; /*0x10089b12f*/
        v11 += 400 * v13; /*0x10089b137*/
        v12 = -146097 * v13; /*0x10089b139*/
      }
      if ( 86400LL /*0x10089b198*/
         * (((v11 / 100) >> 2) + ((1461 * v11) >> 2) + v12 + ((LODWORD(__dst[0]) >> 4) & 0x1FF) - v11 / 100 - 719163)
         + HIDWORD(__dst[0])
         - *((_QWORD *)v50 + 5) >= 25 )
      {
LABEL_41:
        if ( !_InterlockedCompareExchange8((volatile signed __int8 *)v50 + 105, 1, 0) ) /*0x10089b1a6*/
        {
          chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__dst); /*0x10089b1b8*/
          v14 = (SLODWORD(__dst[0]) >> 13) - 1; /*0x10089b1c8*/
          v15 = 0; /*0x10089b1cb*/
          if ( SLODWORD(__dst[0]) >> 13 <= 0 ) /*0x10089b1cf*/
          {
            v16 = (1 - (SLODWORD(__dst[0]) >> 13)) / 0x190u + 1; /*0x10089b1e3*/
            v14 += 400 * v16; /*0x10089b1eb*/
            v15 = -146097 * v16; /*0x10089b1ed*/
          }
          v17 = HIDWORD(__dst[0]) /*0x10089b23a*/
              + 86400LL
              * (((v14 / 100) >> 2) + ((1461 * v14) >> 2) + v15 + ((LODWORD(__dst[0]) >> 4) & 0x1FF) - v14 / 100 - 719163);
          v18 = v50; /*0x10089b23d*/
          *((_QWORD *)v50 + 5) = v17; /*0x10089b241*/
          *((_QWORD *)v18 + 6) = 0; /*0x10089b245*/
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::h444cc86088833e34( /*0x10089b257*/
            __src,
            a1);
          v20 = _InterlockedIncrement64(v50); /*0x10089b260*/
          if ( (v20 < 0) ^ v21 | (v20 == 0) ) /*0x10089b264*/
            BUG(); /*0x10089b513*/
          v22 = v50; /*0x10089b274*/
          v46 = v50; /*0x10089b278*/
          __dst[2] = 0x8000000000000000LL; /*0x10089b280*/
          __dst[0] = 0; /*0x10089b287*/
          LOBYTE(__dst[5]) = 0; /*0x10089b292*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, a1, v19); /*0x10089b299*/
          v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x10089b2a8*/
          if ( !v23 ) /*0x10089b2b0*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x10089b4fd*/
          qmemcpy(v23, "aimami-analytics", 16); /*0x10089b2ce*/
          *(_QWORD *)v47 = 16; /*0x10089b2d1*/
          v48 = v23; /*0x10089b2d9*/
          v49 = 16; /*0x10089b2dd*/
          std::thread::builder::Builder::name::h877bc8a9f9cdb5c8(v37, __dst, v47); /*0x10089b2fa*/
          memcpy(__dst, __src, 0x2E8u); /*0x10089b30e*/
          __dst[93] = v22; /*0x10089b313*/
          __dst[94] = v17; /*0x10089b31a*/
          v45 = v41; /*0x10089b325*/
          v44 = v40; /*0x10089b32d*/
          *(_QWORD *)v43 = v39; /*0x10089b338*/
          v24 = v43; /*0x10089b357*/
          std::thread::lifecycle::spawn_unchecked::hd6d5711279dc0d9f((int)v47, (int)v43, v37[0], v38[0], v42, 0, __dst); /*0x10089b35e*/
          v26 = v48; /*0x10089b367*/
          if ( *(_QWORD *)v47 ) /*0x10089b36e*/
          {
            v27 = v49; /*0x10089b370*/
LABEL_28:
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$C$std..io..error..Error$GT$$GT$::h76778069e7378e6e( /*0x10089b47f*/
              v47,
              v24,
              v27,
              v26);
            goto LABEL_29; /*0x10089b483*/
          }
          *(_QWORD *)v47 = 0; /*0x10089b389*/
          *((_BYTE *)v50 + 105) = 0; /*0x10089b395*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v43, v25); /*0x10089b399*/
          v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x10089b3a8*/
          if ( !v28 ) /*0x10089b3b0*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x10089b50e*/
          v29 = v28; /*0x10089b3b6*/
          qmemcpy(v28, "index_worker_unavailable", 24); /*0x10089b3df*/
          v30 = v50; /*0x10089b3e2*/
          v31 = v50 + 8; /*0x10089b3e6*/
          v32 = *((_QWORD *)v50 + 8); /*0x10089b3eb*/
          if ( !v32 ) /*0x10089b3f3*/
            v32 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v50 + 8); /*0x10089b4b5*/
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x10089b3f9*/
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10089b415*/
          {
            v33 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32) ^ 1; /*0x10089b4c5*/
            v24 = *((int **)v30 + 10); /*0x10089b4cf*/
            if ( v24 != (int *)0x8000000000000000LL ) /*0x10089b4d7*/
            {
LABEL_23:
              if ( v24 ) /*0x10089b431*/
              {
                v32 = *((_QWORD *)v30 + 11); /*0x10089b433*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v24, 1); /*0x10089b43d*/
              }
            }
          }
          else
          {
            v33 = 0; /*0x10089b41b*/
            v24 = *((int **)v30 + 10); /*0x10089b424*/
            if ( v24 != (int *)0x8000000000000000LL ) /*0x10089b42c*/
              goto LABEL_23; /*0x10089b42c*/
          }
          *((_QWORD *)v30 + 10) = 24; /*0x10089b442*/
          *((_QWORD *)v30 + 11) = v29; /*0x10089b44b*/
          *((_QWORD *)v30 + 12) = 24; /*0x10089b450*/
          if ( !v33 /*0x10089b4e2*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32) )
          {
            *((_BYTE *)v30 + 72) = 1; /*0x10089b4eb*/
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v31); /*0x10089b47a*/
          goto LABEL_28; /*0x10089b47a*/
        }
      }
    }
  }
LABEL_29:
  result = v50; /*0x10089b488*/
  if ( !_InterlockedDecrement64(v50) ) /*0x10089b48c*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf3ecc9bd6a189e11(&v50); /*0x10089b496*/
  return result; /*0x10089b49b*/
}