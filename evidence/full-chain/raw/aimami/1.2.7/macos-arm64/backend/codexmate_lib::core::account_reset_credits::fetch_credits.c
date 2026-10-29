// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_reset_credits::fetch_credits::h5669f849676cfc37; addr: 0x1009fc2d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int128 **__fastcall codexmate_lib::core::account_reset_credits::fetch_credits::h5669f849676cfc37(
        __int128 **a1,
        int a2,
        int a3,
        double a4)
{
  __int128 *v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int128 *v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r12
  __int128 *v16; // rcx
  __int128 *v17; // rcx
  void *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  char *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int8 *v27; // r15
  size_t v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // esi
  int v33; // edx
  unsigned int v34; // ecx
  unsigned __int64 v35; // r15
  void *v36; // rax
  unsigned __int64 v37; // r14
  _QWORD *v38; // r15
  __int64 v39; // rsi
  __int128 *v40; // rax
  _QWORD v41[4]; // [rsp+10h] [rbp-110h] BYREF
  __int64 v42; // [rsp+30h] [rbp-F0h]
  __int128 *v43; // [rsp+38h] [rbp-E8h] BYREF
  __int128 *v44; // [rsp+40h] [rbp-E0h]
  __int128 *v45; // [rsp+48h] [rbp-D8h]
  __int128 *v46; // [rsp+50h] [rbp-D0h]
  __int64 v47; // [rsp+58h] [rbp-C8h]
  __int128 *v48; // [rsp+60h] [rbp-C0h]
  __int128 *v49; // [rsp+68h] [rbp-B8h]
  __int128 *v50; // [rsp+70h] [rbp-B0h]
  __int128 *v51; // [rsp+78h] [rbp-A8h]
  __int128 *v52; // [rsp+80h] [rbp-A0h]
  __int128 *v53; // [rsp+88h] [rbp-98h]
  __int128 *v54; // [rsp+90h] [rbp-90h]
  int v55[4]; // [rsp+98h] [rbp-88h] BYREF
  __int128 *v56; // [rsp+A8h] [rbp-78h]
  __int128 *v57; // [rsp+B0h] [rbp-70h]
  __int128 *v58; // [rsp+B8h] [rbp-68h]
  __int64 v59; // [rsp+C0h] [rbp-60h]
  __int64 v60; // [rsp+C8h] [rbp-58h]
  __int64 v61; // [rsp+D0h] [rbp-50h]
  __int128 *v62; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v64; // [rsp+E8h] [rbp-38h]
  char v65; // [rsp+F7h] [rbp-29h] BYREF

  codexmate_lib::core::account_reset_credits::fetch_json::hec184fecb2319124( /*0x1009fc303*/
    (unsigned int)&v43,
    (unsigned int)&unk_101791E72,
    61,
    a2,
    a3,
    0);
  v5 = v43; /*0x1009fc308*/
  v56 = v44; /*0x1009fc316*/
  v57 = v45; /*0x1009fc321*/
  v58 = v46; /*0x1009fc32c*/
  v59 = v47; /*0x1009fc337*/
  if ( v43 == (__int128 *)11 ) /*0x1009fc33f*/
  {
    v41[0] = v56; /*0x1009fc34d*/
    v41[1] = v57; /*0x1009fc354*/
    v41[2] = v58; /*0x1009fc35f*/
    v41[3] = v59; /*0x1009fc36a*/
    v6 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fc384*/
                    "creditsstatus",
                    7,
                    v41);
    v8 = v6; /*0x1009fc389*/
    if ( v6 && *v6 == 4 ) /*0x1009fc399*/
    {
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1009fc3a6*/
      v10 = v9; /*0x1009fc3a8*/
      if ( *(_BYTE *)(v9 + 16) == 1 ) /*0x1009fc3af*/
      {
        v11 = *(_QWORD *)v9; /*0x1009fc3b5*/
        v12 = *(__int128 **)(v10 + 8); /*0x1009fc3b8*/
      }
      else
      {
        v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(a4); /*0x1009fc8fb*/
        *(_QWORD *)v10 = v11; /*0x1009fc900*/
        *(_QWORD *)(v10 + 8) = v12; /*0x1009fc903*/
        *(_BYTE *)(v10 + 16) = 1; /*0x1009fc907*/
      }
      *(_QWORD *)v10 = v11 + 1; /*0x1009fc3c0*/
      v46 = nullptr; /*0x1009fc3ca*/
      v45 = nullptr; /*0x1009fc3d8*/
      v44 = nullptr; /*0x1009fc3e6*/
      v43 = &xmmword_1016F24C0; /*0x1009fc3f4*/
      v47 = v11; /*0x1009fc3fb*/
      v48 = v12; /*0x1009fc402*/
      v62 = nullptr; /*0x1009fc409*/
      v63 = 8; /*0x1009fc411*/
      v64 = 0; /*0x1009fc419*/
      v13 = *((_QWORD *)v8 + 3); /*0x1009fc421*/
      if ( v13 ) /*0x1009fc428*/
      {
        v14 = *((_QWORD *)v8 + 2); /*0x1009fc42e*/
        v15 = 32 * v13; /*0x1009fc432*/
        while ( 1 ) /*0x1009fc5ae*/
        {
          v22 = 6; /*0x1009fc5ae*/
          v23 = "status"; /*0x1009fc5b3*/
          v24 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("status", 6, v14); /*0x1009fc5bd*/
          if ( !v24 || *(_BYTE *)v24 != 3 ) /*0x1009fc5ce*/
            break; /*0x1009fc5ce*/
          if ( *(_QWORD *)(v24 + 24) == 9 /*0x1009fc5f7*/
            && !(**(_QWORD **)(v24 + 16) ^ 0x6C62616C69617661LL
               | *(unsigned __int8 *)(*(_QWORD *)(v24 + 16) + 8LL) ^ 0x65LL) )
          {
            v22 = 2; /*0x1009fc5fc*/
            v23 = "idcursor"; /*0x1009fc601*/
            v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fc60b*/
                    "idcursor",
                    2,
                    v14);
            if ( !v26 ) /*0x1009fc613*/
              break; /*0x1009fc613*/
            if ( *(_BYTE *)v26 != 3 ) /*0x1009fc61c*/
              break; /*0x1009fc61c*/
            v27 = *(unsigned __int8 **)(v26 + 16); /*0x1009fc622*/
            v28 = *(_QWORD *)(v26 + 24); /*0x1009fc626*/
            v23 = (char *)v27; /*0x1009fc62a*/
            v22 = v28; /*0x1009fc62d*/
            core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v27, v28); /*0x1009fc630*/
            if ( v28 > 0x100 || !v25 ) /*0x1009fc645*/
              break; /*0x1009fc645*/
            if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6cf8ac836d3e88db( /*0x1009fc658*/
                                     &v43,
                                     v27,
                                     v28) )
            {
              if ( v28 ) /*0x1009fc668*/
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v43, v27, v29); /*0x1009fc66a*/
                v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1); /*0x1009fc677*/
                if ( !v30 ) /*0x1009fc67f*/
                  goto LABEL_54; /*0x1009fc67f*/
              }
              else
              {
                v30 = 1; /*0x1009fc686*/
              }
              v60 = v30; /*0x1009fc68b*/
              memcpy((void *)v30, v27, v28); /*0x1009fc698*/
              v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1009fc6ac*/
                      &unk_101791F02,
                      10,
                      v14);
              if ( v31 /*0x1009fc6df*/
                && *(_BYTE *)v31 == 3
                && (chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5(
                      v55,
                      *(_QWORD *)(v31 + 16),
                      *(_QWORD *)(v31 + 24),
                      a4),
                    v55[0]) )
              {
                v32 = (v55[0] >> 13) - 1; /*0x1009fc6ea*/
                v33 = 0; /*0x1009fc6ed*/
                if ( v55[0] >> 13 <= 0 ) /*0x1009fc6f1*/
                {
                  v34 = (1 - (v55[0] >> 13)) / 0x190u + 1; /*0x1009fc705*/
                  v32 += 400 * v34; /*0x1009fc70d*/
                  v33 = -146097 * v34; /*0x1009fc70f*/
                }
                v42 = (unsigned int)v55[1] /*0x1009fc760*/
                    + 86400LL
                    * (int)(((v32 / 100) >> 2)
                          + ((1461 * v32) >> 2)
                          + v33
                          + (((unsigned int)v55[0] >> 4) & 0x1FF)
                          - v32 / 100
                          - 719163);
                v61 = 1; /*0x1009fc76c*/
              }
              else
              {
                v61 = 0; /*0x1009fc772*/
              }
              v35 = v64; /*0x1009fc77a*/
              if ( (__int128 *)v64 == v62 ) /*0x1009fc782*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he98f55756f891b36(&v62); /*0x1009fc78c*/
              v20 = v63; /*0x1009fc560*/
              v21 = 5 * v35; /*0x1009fc564*/
              *(_QWORD *)(v63 + 8 * v21) = v61; /*0x1009fc56c*/
              *(_QWORD *)(v20 + 8 * v21 + 8) = v42; /*0x1009fc577*/
              *(_QWORD *)(v20 + 8 * v21 + 16) = v28; /*0x1009fc57c*/
              *(_QWORD *)(v20 + 8 * v21 + 24) = v60; /*0x1009fc585*/
              *(_QWORD *)(v20 + 8 * v21 + 32) = v28; /*0x1009fc58a*/
              v64 = v35 + 1; /*0x1009fc592*/
            }
          }
          v14 += 32; /*0x1009fc5a0*/
          v15 -= 32; /*0x1009fc5a4*/
          if ( !v15 ) /*0x1009fc5a8*/
          {
            *(_QWORD *)v55 = &v65; /*0x1009fc88e*/
            if ( v64 >= 2 ) /*0x1009fc899*/
            {
              if ( v64 >= 0x15 ) /*0x1009fc915*/
                core::slice::sort::stable::driftsort_main::h00874425bd3051f5(v63, v64, v55); /*0x1009fc954*/
              else
                core::slice::sort::shared::smallsort::insertion_sort_shift_left::hab7a479a742e3b07(v63, v64, 1, v55); /*0x1009fc923*/
            }
            goto LABEL_46; /*0x1009fc928*/
          }
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v22, v25); /*0x1009fc796*/
        v28 = 49; /*0x1009fc79b*/
        v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1009fc7ab*/
        if ( !v36 ) /*0x1009fc7b3*/
LABEL_54:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x1009fc93e*/
        qmemcpy(v36, "Reset credit details returned an invalid response", 49); /*0x1009fc809*/
        *a1 = (__int128 *)9; /*0x1009fc810*/
        a1[1] = (__int128 *)49; /*0x1009fc817*/
        a1[2] = (__int128 *)v36; /*0x1009fc81f*/
        a1[3] = (__int128 *)49; /*0x1009fc823*/
        v37 = v64; /*0x1009fc82b*/
        if ( v64 ) /*0x1009fc832*/
        {
          v38 = (_QWORD *)(v63 + 24); /*0x1009fc838*/
          do /*0x1009fc847*/
          {
            v39 = *(v38 - 1); /*0x1009fc849*/
            if ( v39 ) /*0x1009fc850*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v38, v39, 1); /*0x1009fc85a*/
            v38 += 5; /*0x1009fc840*/
            --v37; /*0x1009fc844*/
          }
          while ( v37 ); /*0x1009fc847*/
        }
        if ( v62 ) /*0x1009fc868*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 40LL * (_QWORD)v62, 8); /*0x1009fc87b*/
      }
      else
      {
LABEL_46:
        a1[3] = (__int128 *)v64; /*0x1009fc89b*/
        v40 = v62; /*0x1009fc8a3*/
        a1[2] = (__int128 *)v63; /*0x1009fc8ab*/
        a1[1] = v40; /*0x1009fc8af*/
        *a1 = (__int128 *)11; /*0x1009fc8b3*/
      }
      if ( v44 && 17LL * (_QWORD)v44 != -33 ) /*0x1009fc8d8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v43[-(_QWORD)v44 - 1], 17LL * (_QWORD)v44 + 33, 16); /*0x1009fc8f1*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("creditsstatus", 7, v7); /*0x1009fc4b0*/
      v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1009fc4bf*/
      if ( !v18 ) /*0x1009fc4c7*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1009fc937*/
      qmemcpy(v18, "Reset credit details returned an invalid response", 49); /*0x1009fc51d*/
      *a1 = (__int128 *)9; /*0x1009fc524*/
      a1[1] = (__int128 *)49; /*0x1009fc52b*/
      a1[2] = (__int128 *)v18; /*0x1009fc533*/
      a1[3] = (__int128 *)49; /*0x1009fc537*/
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v41); /*0x1009fc546*/
  }
  else
  {
    a1[11] = v54; /*0x1009fc442*/
    a1[10] = v53; /*0x1009fc44d*/
    a1[9] = v52; /*0x1009fc458*/
    a1[8] = v51; /*0x1009fc463*/
    a1[7] = v50; /*0x1009fc46e*/
    v16 = v48; /*0x1009fc472*/
    a1[6] = v49; /*0x1009fc480*/
    a1[5] = v16; /*0x1009fc484*/
    a1[4] = (__int128 *)v59; /*0x1009fc48c*/
    a1[3] = v58; /*0x1009fc494*/
    v17 = v56; /*0x1009fc498*/
    a1[2] = v57; /*0x1009fc4a0*/
    a1[1] = v17; /*0x1009fc4a4*/
    *a1 = v5; /*0x1009fc4a8*/
  }
  return a1; /*0x1009fc54e*/
}