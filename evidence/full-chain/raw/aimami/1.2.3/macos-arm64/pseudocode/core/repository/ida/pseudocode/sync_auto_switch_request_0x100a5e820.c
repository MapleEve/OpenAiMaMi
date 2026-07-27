// __ZN13codexmate_lib4core10repository10Repository24sync_auto_switch_request @ 0x100a5e820 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::repository::Repository::sync_auto_switch_request::h65844a159a40ab13(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // r13d
  _DWORD *v10; // rsi
  _DWORD *v11; // rdi
  __int64 i; // rcx
  __int64 *v13; // r13
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  _DWORD *v16; // rdi
  _DWORD *v17; // rsi
  __int64 j; // rcx
  size_t v19; // r12
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rsi
  bool v29; // r15
  _QWORD *v30; // rdi
  _QWORD *v31; // rsi
  __int64 *v32; // rbx
  _QWORD *v33; // rsi
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r14
  _QWORD *v50; // r15
  __int64 v51; // rbx
  __int64 *v52; // rcx
  __int64 v54; // r14
  _QWORD __src[91]; // [rsp+0h] [rbp-7B0h] BYREF
  _QWORD __dst[91]; // [rsp+2D8h] [rbp-4D8h] BYREF
  _QWORD v57[44]; // [rsp+5B0h] [rbp-200h] BYREF
  __int64 *v58; // [rsp+710h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+718h] [rbp-98h]
  __int64 v60; // [rsp+720h] [rbp-90h]
  __int64 v61; // [rsp+728h] [rbp-88h]
  __int64 v62; // [rsp+730h] [rbp-80h]
  void *__s2; // [rsp+738h] [rbp-78h]
  void *v64; // [rsp+740h] [rbp-70h]
  void *__s1; // [rsp+748h] [rbp-68h]
  void *v66; // [rsp+750h] [rbp-60h]
  __int64 v67; // [rsp+758h] [rbp-58h]
  __int64 v68; // [rsp+760h] [rbp-50h]
  size_t __n; // [rsp+768h] [rbp-48h]
  __int64 *v70; // [rsp+770h] [rbp-40h]
  __int64 v71; // [rsp+778h] [rbp-38h]
  _DWORD v72[11]; // [rsp+784h] [rbp-2Ch] BYREF

  v67 = a4; /*0x100a5e837*/
  v68 = a3; /*0x100a5e83b*/
  v70 = a1; /*0x100a5e842*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100a5e868*/
    v57,
    *(_QWORD *)(a2 + 200),
    *(_QWORD *)(a2 + 208),
    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51,
    20);
  v7 = v57[1]; /*0x100a5e86d*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a5e892*/
    (__int64)__dst,
    v57[1],
    v57[2],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v8 = __dst[0]; /*0x100a5e897*/
  v9 = __dst[1]; /*0x100a5e89e*/
  if ( __dst[0] != 11 ) /*0x100a5e8a9*/
  {
    v10 = (_DWORD *)&__dst[1] + 1; /*0x100a5e8ab*/
    v11 = __src; /*0x100a5e8b2*/
    for ( i = 21; i; --i ) /*0x100a5e8b9*/
      *v11++ = *v10++; /*0x100a5e8be*/
  }
  if ( v57[0] ) /*0x100a5e8ca*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v57[0], 1); /*0x100a5e8d4*/
  if ( (_DWORD)v8 == 11 ) /*0x100a5e8dd*/
  {
    v72[0] = v9; /*0x100a5e8df*/
    if ( v67 == 0 || v68 == 0 ) /*0x100a5e8ea*/
    {
      codexmate_lib::core::repository::Repository::clear_auto_switch_transient_state::h6b182342bc1d4f08(__dst, a2); /*0x100a5e905*/
      v13 = v70; /*0x100a5e90a*/
LABEL_10:
      if ( LODWORD(__dst[0]) == 11 ) /*0x100a5e915*/
      {
        v14 = 0x8000000000000000LL; /*0x100a5e91b*/
LABEL_12:
        v13[1] = v14; /*0x100a5e925*/
        *v13 = 11; /*0x100a5e929*/
        _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v72); /*0x100a5e935*/
LABEL_67:
        close_NOCANCEL(v72[0]); /*0x100a5eed2*/
        return v13; /*0x100a5eed5*/
      }
      qmemcpy(v13, __dst, 0x60u); /*0x100a5ea2e*/
LABEL_66:
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v72); /*0x100a5eec9*/
      goto LABEL_67; /*0x100a5eecd*/
    }
    __s2 = *(void **)(v68 + 192); /*0x100a5e96b*/
    v19 = *(_QWORD *)(v68 + 200); /*0x100a5e96f*/
    v64 = *(void **)(v67 + 192); /*0x100a5e97d*/
    __n = *(_QWORD *)(v67 + 200); /*0x100a5e988*/
    std::fs::read_to_string::inner::hcce2334f4117b5b3(__dst, *(_QWORD *)(a2 + 512), *(_QWORD *)(a2 + 520)); /*0x100a5e9a1*/
    v13 = v70; /*0x100a5e9a6*/
    v20 = __dst[0]; /*0x100a5e9aa*/
    v58 = a5; /*0x100a5e9b7*/
    if ( __OFSUB__(-__dst[0], 1) ) /*0x100a5e9b4*/
    {
      if ( (__dst[1] & 3) == 1 ) /*0x100a5e9cf*/
      {
        v71 = __dst[1] - 1LL; /*0x100a5e9d9*/
        v21 = *(_QWORD *)(__dst[1] - 1LL); /*0x100a5e9dd*/
        v22 = *(_QWORD *)(__dst[1] + 7LL); /*0x100a5e9e1*/
        if ( *(_QWORD *)v22 ) /*0x100a5e9e5*/
          (*(void (__fastcall **)(__int64))v22)(v21); /*0x100a5e9f0*/
        v23 = *(_QWORD *)(v22 + 8); /*0x100a5e9f2*/
        if ( v23 ) /*0x100a5e9f9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16)); /*0x100a5ea02*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, 24, 8); /*0x100a5ea15*/
      }
      goto LABEL_45; /*0x100a5ea1a*/
    }
    __src[0] = __dst[1]; /*0x100a5ea44*/
    __src[1] = __dst[2]; /*0x100a5ea4b*/
    __src[2] = 0; /*0x100a5ea52*/
    __src[3] = 0; /*0x100a5ea5d*/
    v71 = __dst[1]; /*0x100a5ea68*/
    __src[4] = __dst[1]; /*0x100a5ea6c*/
    __src[5] = __dst[2]; /*0x100a5ea73*/
    serde_json::de::from_trait::h65e6c553c3ebe544(__dst, __src); /*0x100a5ea88*/
    v26 = __dst[0]; /*0x100a5ea8d*/
    if ( __dst[0] == 0x8000000000000000LL ) /*0x100a5eaa1*/
    {
      v59 = 0x8000000000000000LL; /*0x100a5eaa3*/
      if ( *(_QWORD *)__dst[1] == 1 ) /*0x100a5eabb*/
      {
        v27 = __dst[1]; /*0x100a5eeef*/
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3( /*0x100a5eef6*/
          __dst[1] + 8LL,
          0x8000000000000000LL,
          v24,
          __dst[1],
          v25);
      }
      else
      {
        v27 = __dst[1]; /*0x100a5eac4*/
        if ( !*(_QWORD *)__dst[1] ) /*0x100a5eab4*/
        {
          v28 = *(_QWORD *)(__dst[1] + 16LL); /*0x100a5eacd*/
          if ( v28 ) /*0x100a5ead4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(__dst[1] + 8LL), v28, 1); /*0x100a5eae3*/
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 40, 8); /*0x100a5ef08*/
      v26 = v59; /*0x100a5ef0d*/
      if ( !v20 ) /*0x100a5ef17*/
      {
LABEL_32:
        if ( v26 == 0x8000000000000000LL ) /*0x100a5eb53*/
          goto LABEL_45; /*0x100a5eb53*/
        if ( v61 == v19 ) /*0x100a5eb60*/
        {
          v29 = 0; /*0x100a5eb75*/
          if ( memcmp(__s1, __s2, v19) ) /*0x100a5eb70*/
          {
            if ( !v26 ) /*0x100a5ef74*/
            {
LABEL_41:
              if ( v60 ) /*0x100a5ebce*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v60, 1); /*0x100a5ebd9*/
              if ( v29 ) /*0x100a5ebe1*/
              {
                codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request::heb8bdf3af6a6b862( /*0x100a5ebf8*/
                  __dst,
                  *(void **)(a2 + 488),
                  *(_QWORD *)(a2 + 496));
                goto LABEL_10; /*0x100a5ebfd*/
              }
LABEL_45:
              v30 = __src; /*0x100a5ec02*/
              v31 = (_QWORD *)a2; /*0x100a5ec09*/
              codexmate_lib::core::repository::Repository::load_pending_auto_switch::h6842d236c81b2905(__src, a2); /*0x100a5ec0c*/
              v32 = v58; /*0x100a5ec11*/
              v71 = v67 + 184; /*0x100a5ec22*/
              if ( LODWORD(__src[0]) != 2 ) /*0x100a5ec2d*/
              {
                v31 = __src; /*0x100a5ec3a*/
                memcpy(__dst, __src, sizeof(__dst)); /*0x100a5ec46*/
                if ( __dst[25] == v19 ) /*0x100a5ec52*/
                {
                  v31 = __s2; /*0x100a5ec5f*/
                  if ( !memcmp((const void *)__dst[24], __s2, v19) && __dst[69] == __n ) /*0x100a5ec7e*/
                  {
                    v31 = v64; /*0x100a5ec87*/
                    if ( !memcmp((const void *)__dst[68], v64, __n) && __dst[89] == *v32 ) /*0x100a5eca2*/
                    {
                      v33 = (_QWORD *)v71; /*0x100a5ecab*/
                      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v57, v71); /*0x100a5ecaf*/
                      v13[3] = v57[2]; /*0x100a5ecbb*/
                      v34 = v57[0]; /*0x100a5ecbf*/
                      v13[2] = v57[1]; /*0x100a5eccd*/
                      v13[1] = v34; /*0x100a5ecd1*/
                      *v13 = 11; /*0x100a5ecd5*/
                      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f( /*0x100a5ece4*/
                        __src,
                        v33);
LABEL_65:
                      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f( /*0x100a5eec4*/
                        &__dst[44],
                        v33);
                      goto LABEL_66; /*0x100a5eec4*/
                    }
                  }
                }
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f( /*0x100a5ecfc*/
                  __src,
                  v31);
                v30 = &__dst[44]; /*0x100a5ed01*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f( /*0x100a5ed08*/
                  &__dst[44],
                  v31);
              }
              v57[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v30, v31); /*0x100a5ed12*/
              LODWORD(v57[1]) = v35; /*0x100a5ed19*/
              std::time::SystemTime::duration_since::had059553cab94f96(__src, v57, 0, 0); /*0x100a5ed31*/
              if ( LOBYTE(__src[0]) ) /*0x100a5ed3d*/
                v38 = 0; /*0x100a5ed48*/
              else
                v38 = __src[1]; /*0x100a5ed3f*/
              v39 = *v32; /*0x100a5ed4f*/
              _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x100a5ed59*/
                v57,
                v68,
                v36,
                v37);
              _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x100a5ed69*/
                __src,
                v67,
                v40,
                v41);
              __dst[88] = v38; /*0x100a5ed6e*/
              __dst[89] = v39; /*0x100a5ed75*/
              memcpy(__dst, v57, 0x160u); /*0x100a5ed92*/
              v33 = __src; /*0x100a5ed9e*/
              memcpy(&__dst[44], __src, 0x160u); /*0x100a5edad*/
              __dst[90] = v32[1]; /*0x100a5edb6*/
              v42 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820((_QWORD *)a2); /*0x100a5edc0*/
              v43 = 2; /*0x100a5edc5*/
              if ( !v42 ) /*0x100a5edce*/
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, __src); /*0x100a5edd4*/
                v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100a5ede3*/
                if ( !v44 ) /*0x100a5edeb*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100a5efe8*/
                v57[0] = 128; /*0x100a5edf1*/
                v57[1] = v44; /*0x100a5edfc*/
                v57[2] = 0; /*0x100a5ee03*/
                __src[0] = v57; /*0x100a5ee0e*/
                __src[1] = &unk_10167BCD0; /*0x100a5ee1c*/
                __src[2] = 2; /*0x100a5ee23*/
                __src[3] = 0; /*0x100a5ee2e*/
                LOBYTE(__src[4]) = 0; /*0x100a5ee39*/
                v33 = __src; /*0x100a5ee47*/
                v42 = codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$::serialize::hf56a2ea380f84821( /*0x100a5ee4e*/
                        (__int64)__dst,
                        (__int64)__src,
                        v45,
                        v46,
                        v47,
                        v48);
                if ( v42 ) /*0x100a5ee56*/
                {
                  v33 = (_QWORD *)v57[0]; /*0x100a5ee58*/
                  if ( v57[0] ) /*0x100a5ee62*/
                  {
                    v49 = v42; /*0x100a5ee70*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57[1], v57[0], 1); /*0x100a5ee73*/
                    v42 = v49; /*0x100a5ee78*/
                  }
                }
                else
                {
                  v50 = (_QWORD *)v57[0]; /*0x100a5ee7d*/
                  v51 = v57[1]; /*0x100a5ee84*/
                  if ( v57[0] != 0x8000000000000000LL ) /*0x100a5ee98*/
                  {
                    v33 = *(_QWORD **)(a2 + 496); /*0x100a5ef30*/
                    v42 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100a5ef40*/
                            *(void **)(a2 + 488),
                            (size_t)v33,
                            v57[1],
                            v57[2],
                            1);
                    if ( !v42 ) /*0x100a5ef48*/
                    {
                      if ( v50 ) /*0x100a5ef82*/
                      {
                        v33 = v50; /*0x100a5ef8c*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x100a5ef8f*/
                      }
                      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f( /*0x100a5ef9b*/
                        __dst,
                        v33);
                      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f( /*0x100a5efa3*/
                        &__dst[44],
                        v33);
                      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v71); /*0x100a5efb3*/
                      v13 = v70; /*0x100a5efb8*/
                      v70[3] = __dst[2]; /*0x100a5efc3*/
                      v14 = __dst[0]; /*0x100a5efc7*/
                      v13[2] = __dst[1]; /*0x100a5efd5*/
                      goto LABEL_12; /*0x100a5efd9*/
                    }
                    if ( v50 ) /*0x100a5ef4d*/
                    {
                      v33 = v50; /*0x100a5ef5b*/
                      v54 = v42; /*0x100a5ef5e*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x100a5ef61*/
                      v42 = v54; /*0x100a5ef66*/
                    }
                    goto LABEL_64; /*0x100a5ef69*/
                  }
                  v42 = v57[1]; /*0x100a5ee9e*/
                }
                v43 = 3; /*0x100a5eea1*/
              }
LABEL_64:
              v52 = v70; /*0x100a5eea7*/
              *v70 = v43; /*0x100a5eeab*/
              v13 = v52; /*0x100a5eeae*/
              v52[1] = v42; /*0x100a5eeb1*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(__dst, v33); /*0x100a5eebc*/
              goto LABEL_65; /*0x100a5eebc*/
            }
LABEL_40:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v26, 1); /*0x100a5ebb6*/
            goto LABEL_41; /*0x100a5ebbf*/
          }
          if ( v62 == __n ) /*0x100a5eb8b*/
          {
            v29 = memcmp(v66, v64, __n) == 0; /*0x100a5eba3*/
            if ( !v26 ) /*0x100a5ebaa*/
              goto LABEL_41; /*0x100a5ebaa*/
            goto LABEL_40; /*0x100a5ebaa*/
          }
        }
        else
        {
          v29 = 0; /*0x100a5ebae*/
        }
        if ( !v26 ) /*0x100a5ebb4*/
          goto LABEL_41; /*0x100a5ebb4*/
        goto LABEL_40; /*0x100a5ebb4*/
      }
    }
    else
    {
      __s1 = (void *)__dst[1]; /*0x100a5eaf4*/
      v61 = __dst[2]; /*0x100a5eaff*/
      v60 = __dst[3]; /*0x100a5eb0d*/
      v66 = (void *)__dst[4]; /*0x100a5eb1b*/
      v62 = __dst[5]; /*0x100a5eb26*/
      if ( !v20 ) /*0x100a5eb2d*/
        goto LABEL_32; /*0x100a5eb2d*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v20, 1); /*0x100a5eb3e*/
    goto LABEL_32; /*0x100a5eb3e*/
  }
  v15 = v70; /*0x100a5e93f*/
  v16 = (_DWORD *)v70 + 3; /*0x100a5e943*/
  v17 = __src; /*0x100a5e947*/
  for ( j = 21; j; --j ) /*0x100a5e94e*/
    *v16++ = *v17++; /*0x100a5e953*/
  *v15 = v8; /*0x100a5e955*/
  *((_DWORD *)v15 + 2) = v9; /*0x100a5e958*/
  return v15; /*0x100a5eedd*/
}