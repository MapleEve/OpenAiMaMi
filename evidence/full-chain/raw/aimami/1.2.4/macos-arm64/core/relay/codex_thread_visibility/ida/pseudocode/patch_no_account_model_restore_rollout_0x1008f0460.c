// __ZN13codexmate_lib4core5relay23codex_thread_visibility38patch_no_account_model_restore_rollout @ 0x1008f0460 | 1.2.4 NEW-delta
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_no_account_model_restore_rollout::h73d1b77a49177d6b(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5,
        void *a6,
        size_t a7)
{
  unsigned __int64 v10; // r14
  void *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rax
  __int64 v22; // rax
  const void *v23; // rdi
  void *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  _QWORD v33[2]; // [rsp+8h] [rbp-1C8h] BYREF
  _QWORD v34[12]; // [rsp+18h] [rbp-1B8h] BYREF
  _QWORD v35[19]; // [rsp+78h] [rbp-158h] BYREF
  _BYTE v36[31]; // [rsp+110h] [rbp-C0h]
  _BYTE *v37; // [rsp+130h] [rbp-A0h]
  __m256i v38; // [rsp+138h] [rbp-98h] BYREF
  __int64 v39; // [rsp+158h] [rbp-78h] BYREF
  __int64 (__fastcall *v40)(_QWORD, _QWORD); // [rsp+160h] [rbp-70h]
  _BYTE v41[15]; // [rsp+168h] [rbp-68h]
  __int64 v42; // [rsp+178h] [rbp-58h] BYREF
  void *__src; // [rsp+180h] [rbp-50h]
  unsigned __int64 v44; // [rsp+188h] [rbp-48h]
  unsigned __int64 v45; // [rsp+190h] [rbp-40h]
  void *__s2; // [rsp+198h] [rbp-38h]
  size_t __n; // [rsp+1A0h] [rbp-30h]

  __src = a6; /*0x1008f0474*/
  __n = a5; /*0x1008f0478*/
  __s2 = a4; /*0x1008f047c*/
  v10 = 0x8000000000000000LL; /*0x1008f0489*/
  std::sys::fs::metadata::h32fa16d3052ea535(v35, a2, a3); /*0x1008f049d*/
  if ( LODWORD(v35[0]) == 1 ) /*0x1008f04b0*/
  {
    result = (void *)core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h2adb4e876f561eac( /*0x1008f04b7*/
                       1,
                       v35[1]);
LABEL_9:
    *a1 = v10; /*0x1008f05a6*/
    return result; /*0x1008f05a6*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h2adb4e876f561eac( /*0x1008f04c3*/
    0,
    v35[1]);
  codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hdd1bdf95d5c7db81(v34, a2, a3); /*0x1008f04d5*/
  if ( LODWORD(v34[0]) != 11 ) /*0x1008f04e1*/
  {
    qmemcpy(v35, v34, 0x60u); /*0x1008f054d*/
    v39 = (__int64)v35; /*0x1008f0550*/
    v40 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x1008f055b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v38, &unk_1017D1C0F, &v39); /*0x1008f0571*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v35); /*0x1008f057d*/
    result = (void *)v38.i64[1]; /*0x1008f0589*/
    v14 = v38.i64[0]; /*0x1008f0589*/
    v15 = v38.i64[2]; /*0x1008f0590*/
LABEL_8:
    a1[1] = v14; /*0x1008f0597*/
    a1[2] = (unsigned __int64)result; /*0x1008f059b*/
    a1[3] = v15; /*0x1008f059f*/
    v10 = 0x8000000000000001LL; /*0x1008f05a3*/
    goto LABEL_9; /*0x1008f05a3*/
  }
  if ( v34[1] == 0x8000000000000000LL ) /*0x1008f04ed*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, a2, v12, v13); /*0x1008f04f3*/
    v14 = 20; /*0x1008f04f8*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1008f0507*/
    if ( !result ) /*0x1008f050f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1008f0a7f*/
    qmemcpy(result, "session_meta missing", 20); /*0x1008f052d*/
    v15 = 20; /*0x1008f0537*/
    goto LABEL_8; /*0x1008f053c*/
  }
  v44 = v34[1]; /*0x1008f05bb*/
  v16 = v34[3]; /*0x1008f05c6*/
  v35[0] = v34[2]; /*0x1008f05cd*/
  v35[1] = v34[3]; /*0x1008f05d4*/
  v35[2] = 0; /*0x1008f05db*/
  v35[3] = 0; /*0x1008f05e6*/
  v45 = v34[2]; /*0x1008f05f1*/
  v35[4] = v34[2]; /*0x1008f05f5*/
  v35[5] = v34[3]; /*0x1008f05fc*/
  serde_json::de::from_trait::hbc9c8c8dee91749d(v34, v35); /*0x1008f0611*/
  if ( LOBYTE(v34[0]) == 6 ) /*0x1008f061f*/
  {
    v42 = v34[1]; /*0x1008f062c*/
    v33[0] = &v42; /*0x1008f0634*/
    v33[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008f0642*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_1017D1BF3, v33); /*0x1008f065e*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc173bfdeee8b49ee(&v42); /*0x1008f0667*/
    result = (void *)v35[2]; /*0x1008f066c*/
    v19 = v35[0]; /*0x1008f0673*/
    v20 = v35[1]; /*0x1008f067a*/
    *(_QWORD *)&v36[7] = v35[0]; /*0x1008f0681*/
    *(_QWORD *)&v36[15] = v35[1]; /*0x1008f0688*/
    *(_QWORD *)&v36[23] = v35[2]; /*0x1008f068f*/
    a1[3] = v35[2]; /*0x1008f0696*/
    a1[2] = v20; /*0x1008f069a*/
    a1[1] = v19; /*0x1008f069e*/
    *a1 = 0x8000000000000001LL; /*0x1008f06a5*/
    goto LABEL_30; /*0x1008f06a8*/
  }
  *(_QWORD *)&v41[7] = v34[3]; /*0x1008f06b4*/
  *(_QWORD *)v41 = *(_QWORD *)((char *)&v34[2] + 1); /*0x1008f06bf*/
  *(_OWORD *)v36 = *(_OWORD *)((char *)v34 + 1); /*0x1008f06d1*/
  *(_QWORD *)&v36[16] = *(_QWORD *)((char *)&v34[2] + 1); /*0x1008f06e7*/
  *(_QWORD *)&v36[23] = *(_QWORD *)&v41[7]; /*0x1008f06ee*/
  *(__int128 *)((char *)v38.i128 + 1) = *(_OWORD *)((char *)v34 + 1); /*0x1008f06fc*/
  v38.i64[3] = *(_QWORD *)&v41[7]; /*0x1008f0711*/
  *(__int64 *)((char *)&v38.i64[2] + 1) = *(_QWORD *)&v36[16]; /*0x1008f0715*/
  v38.i8[0] = v34[0]; /*0x1008f071c*/
  v21 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x1008f0735*/
                   &unk_10167F26E,
                   7,
                   &v38,
                   *(_QWORD *)&v36[16],
                   v17,
                   v18);
  if ( v21 ) /*0x1008f073d*/
  {
    if ( *v21 == 5 ) /*0x1008f0746*/
    {
      v37 = v21 + 8; /*0x1008f075c*/
      v22 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hecba87f1181f86d0( /*0x1008f0766*/
              v21 + 8,
              &anon_727917ecdb2ab9f22bcf5eba88f4827d_354,
              5);
      if ( v22 ) /*0x1008f076e*/
      {
        if ( *(_BYTE *)v22 == 3 && *(_QWORD *)(v22 + 24) == __n ) /*0x1008f0785*/
        {
          v23 = *(const void **)(v22 + 16); /*0x1008f078b*/
          v24 = __s2; /*0x1008f078f*/
          if ( !memcmp(v23, __s2, __n) ) /*0x1008f0797*/
          {
            if ( __src ) /*0x1008f07a9*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v24, v25, v26); /*0x1008f07af*/
              v27 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1008f07be*/
              if ( !v27 ) /*0x1008f07c6*/
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1008f0a8e*/
              v27[4] = 108; /*0x1008f07d0*/
              *(_DWORD *)v27 = 1701080941; /*0x1008f07d4*/
              v39 = 5; /*0x1008f07da*/
              v40 = (__int64 (__fastcall *)(_QWORD, _QWORD))v27; /*0x1008f07e2*/
              *(_QWORD *)v41 = 5; /*0x1008f07e6*/
              __s2 = v27; /*0x1008f0802*/
              alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5(v35, a7, 0, 1, 1, v28); /*0x1008f0806*/
              __n = v35[1]; /*0x1008f0812*/
              if ( LOBYTE(v35[0]) ) /*0x1008f081d*/
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__n, v35[2]); /*0x1008f0a6e*/
              __s2 = (void *)v35[2]; /*0x1008f082a*/
              memcpy((void *)v35[2], __src, a7); /*0x1008f0836*/
              v35[1] = __n; /*0x1008f083f*/
              v35[2] = __s2; /*0x1008f084a*/
              v35[3] = a7; /*0x1008f0855*/
              LOBYTE(v35[0]) = 3; /*0x1008f085c*/
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(v34, v37, &v39, v35); /*0x1008f087c*/
              if ( LOBYTE(v34[0]) != 6 ) /*0x1008f0888*/
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v34); /*0x1008f0891*/
            }
            else
            {
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hbb390a8031d3b729( /*0x1008f08b2*/
                v35,
                v37,
                &anon_727917ecdb2ab9f22bcf5eba88f4827d_354,
                5);
              if ( LOBYTE(v35[0]) != 6 ) /*0x1008f08be*/
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v35); /*0x1008f08c7*/
            }
            serde_json::ser::to_vec::hce27b880431b0e88(v35, &v38); /*0x1008f08da*/
            if ( v35[0] != 0x8000000000000000LL ) /*0x1008f08f0*/
            {
              __n = v35[0]; /*0x1008f0954*/
              __s2 = (void *)v35[1]; /*0x1008f0970*/
              __src = (void *)v35[2]; /*0x1008f0977*/
              codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h8b2827771a28cebe( /*0x1008f097f*/
                v34,
                a2,
                a3,
                v35[1],
                v35[2],
                v45,
                v16);
              if ( LODWORD(v34[0]) == 11 ) /*0x1008f098b*/
              {
                std::path::Path::to_path_buf::h73855ce4b54f7174(v35, a2, a3); /*0x1008f099a*/
                a1[2] = v35[2]; /*0x1008f09a6*/
                v31 = v35[0]; /*0x1008f09aa*/
                a1[1] = v35[1]; /*0x1008f09b8*/
                *a1 = v31; /*0x1008f09bc*/
                a1[3] = v44; /*0x1008f09c3*/
                a1[4] = v45; /*0x1008f09cb*/
                a1[5] = v16; /*0x1008f09cf*/
                a1[6] = __n; /*0x1008f09d7*/
                a1[7] = (unsigned __int64)__s2; /*0x1008f09df*/
                a1[8] = (unsigned __int64)__src; /*0x1008f09e7*/
                return (void *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v38); /*0x1008f09f7*/
              }
              qmemcpy(v35, v34, 0x60u); /*0x1008f0a12*/
              codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h5cab2a5b05b71845( /*0x1008f0a1c*/
                &v39,
                v35);
              a1[3] = *(_QWORD *)v41; /*0x1008f0a25*/
              v32 = v39; /*0x1008f0a29*/
              a1[2] = (unsigned __int64)v40; /*0x1008f0a31*/
              a1[1] = v32; /*0x1008f0a35*/
              *a1 = 0x8000000000000001LL; /*0x1008f0a3c*/
              if ( __n ) /*0x1008f0a46*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, __n, 1); /*0x1008f0a55*/
              goto LABEL_29; /*0x1008f0a5a*/
            }
            codexmate_lib::core::relay::codex_thread_visibility::patch_router_model_rollout_if_present::_$u7b$$u7b$closure$u7d$$u7d$::h5e238e8f01dd6e3d( /*0x1008f08fc*/
              v35,
              v35[1]);
            v29 = v35[1]; /*0x1008f0908*/
            v30 = v35[2]; /*0x1008f090f*/
            a1[1] = v35[0]; /*0x1008f0916*/
            a1[2] = v29; /*0x1008f091a*/
            a1[3] = v30; /*0x1008f091e*/
            v10 = 0x8000000000000001LL; /*0x1008f0922*/
          }
        }
      }
    }
  }
  *a1 = v10; /*0x1008f0925*/
LABEL_29:
  result = (void *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v38); /*0x1008f0928*/
LABEL_30:
  if ( v44 ) /*0x1008f093b*/
    return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x1008f094a*/
  return result; /*0x1008f05a9*/
}