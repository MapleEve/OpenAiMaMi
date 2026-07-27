// __ZN13codexmate_lib19run_daemon_once_cli @ 0x1006f3190 | 基线 same-set
_QWORD *__fastcall codexmate_lib::run_daemon_once_cli::hee92ea9bf183adf7(_QWORD *a1, _QWORD *a2, __m128i si128)
{
  _QWORD *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rsi
  const void *v11; // r13
  void *v12; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int8 v17; // bl
  const __m128i *v19; // rcx
  __int64 v20; // rdx
  const __m128i *v21; // rbx
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // r13
  const __m128i *v26; // r15
  const __m128i *v28; // r14
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rax
  void *__dst[93]; // [rsp+0h] [rbp-DE0h] BYREF
  _BYTE v37[1072]; // [rsp+2E8h] [rbp-AF8h] BYREF
  _BYTE __src[1072]; // [rsp+718h] [rbp-6C8h] BYREF
  _BYTE v39[24]; // [rsp+B48h] [rbp-298h] BYREF
  __int64 v40; // [rsp+B60h] [rbp-280h]
  __int64 v41; // [rsp+B68h] [rbp-278h]
  __int64 v42; // [rsp+B70h] [rbp-270h]
  _QWORD v43[3]; // [rsp+B78h] [rbp-268h] BYREF
  _QWORD v44[3]; // [rsp+B90h] [rbp-250h] BYREF
  _QWORD v45[3]; // [rsp+BA8h] [rbp-238h] BYREF
  _QWORD v46[2]; // [rsp+BC0h] [rbp-220h] BYREF
  char v47; // [rsp+BD0h] [rbp-210h]
  _QWORD v48[3]; // [rsp+BD8h] [rbp-208h] BYREF
  _QWORD v49[2]; // [rsp+BF0h] [rbp-1F0h] BYREF
  unsigned __int8 v50; // [rsp+C00h] [rbp-1E0h]
  __int64 v51; // [rsp+C08h] [rbp-1D8h]
  __int64 v52; // [rsp+C10h] [rbp-1D0h]
  __int64 v53; // [rsp+C18h] [rbp-1C8h]
  _BYTE v54[168]; // [rsp+C20h] [rbp-1C0h] BYREF
  _QWORD *v55; // [rsp+CC8h] [rbp-118h]
  _QWORD v56[12]; // [rsp+CD0h] [rbp-110h] BYREF
  void *v57; // [rsp+D30h] [rbp-B0h]
  unsigned __int64 v58; // [rsp+D38h] [rbp-A8h]
  const __m128i *v59; // [rsp+D40h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+D48h] [rbp-98h]
  __int64 v61; // [rsp+D50h] [rbp-90h]
  __int64 v62; // [rsp+D58h] [rbp-88h]
  const __m128i *v63; // [rsp+D70h] [rbp-70h] BYREF
  __int64 v64; // [rsp+D78h] [rbp-68h]
  __int64 v65; // [rsp+D80h] [rbp-60h]
  const __m128i *v66; // [rsp+D88h] [rbp-58h] BYREF
  __int64 v67; // [rsp+D90h] [rbp-50h]
  __int64 v68; // [rsp+D98h] [rbp-48h]
  const __m128i *v69; // [rsp+DA0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+DA8h] [rbp-38h]
  __int64 v71; // [rsp+DB0h] [rbp-30h]

  v3 = a1; /*0x1006f31a4*/
  if ( __OFSUB__(0, *a2) ) /*0x1006f31a9*/
  {
    *(double *)si128.i64 = codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b( /*0x1006f31b8*/
                             (__int64 *)__src,
                             *(double *)si128.i64);
    codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(__dst, __src); /*0x1006f31c7*/
  }
  else
  {
    v48[2] = a2[2]; /*0x1006f31d2*/
    v4 = *a2; /*0x1006f31d9*/
    v48[1] = a2[1]; /*0x1006f31e0*/
    v48[0] = v4; /*0x1006f31e7*/
    codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(__src, v48); /*0x1006f31ff*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1006f3213*/
  }
  codexmate_lib::platform::debug_log::init::h8ca1bd936d4a4f92(__dst); /*0x1006f321f*/
  codexmate_lib::platform::debug_log::app_event::ha23bcf77044d6eee( /*0x1006f3249*/
    &unk_101606167,
    11,
    &unk_101606172,
    14,
    &unk_101606180,
    14,
    *(double *)si128.i64);
  codexmate_lib::core::repository::Repository::auto_switch_config::hb0e53217ed18b987(v46, __dst); /*0x1006f325c*/
  if ( !v47 ) /*0x1006f3268*/
  {
    codexmate_lib::core::repository::Repository::sync_local_runtime_state::h9a275b158e989503(v37, __dst); /*0x1006f3384*/
    if ( *(_DWORD *)v37 == 11 ) /*0x1006f3390*/
    {
      v5 = *(_QWORD *)&v37[8]; /*0x1006f3396*/
      v6 = *(_QWORD *)&v37[16]; /*0x1006f339d*/
      v7 = *(_QWORD *)&v37[24]; /*0x1006f33a4*/
      if ( *(_QWORD *)&v37[24] ) /*0x1006f33ae*/
      {
        v8 = (_QWORD *)(*(_QWORD *)&v37[16] + 32LL); /*0x1006f33b4*/
        do /*0x1006f33c7*/
        {
          v9 = *(v8 - 4); /*0x1006f33cd*/
          if ( v9 ) /*0x1006f33d5*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v8 - 3), v9, 1); /*0x1006f33e1*/
          v10 = *(v8 - 1); /*0x1006f33e6*/
          if ( v10 ) /*0x1006f33ee*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v8, v10, 1); /*0x1006f33f9*/
          v8 += 6; /*0x1006f33c0*/
          --v7; /*0x1006f33c4*/
        }
        while ( v7 ); /*0x1006f33c7*/
      }
      if ( v5 ) /*0x1006f354d*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 48 * v5, 8); /*0x1006f355f*/
      codexmate_lib::core::repository::Repository::sync_auto_switch_request::h65844a159a40ab13(v37, __dst, 0, 0, v46); /*0x1006f357d*/
      if ( *(_DWORD *)v37 == 11 ) /*0x1006f3589*/
      {
        if ( 2LL * *(_QWORD *)&v37[8] ) /*0x1006f3596*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x1006f35af*/
                                   *(_QWORD *)&v37[16],
                                   *(_QWORD *)&v37[8],
                                   1);
        v45[0] = 0x8000000000000000LL; /*0x1006f35be*/
        *(_QWORD *)&v54[16] = v45[2]; /*0x1006f35d3*/
        *(_QWORD *)&v54[8] = v45[1]; /*0x1006f35da*/
        *(_QWORD *)v54 = 0x8000000000000000LL; /*0x1006f35e1*/
        codexmate_lib::core::repository::Repository::build_daemon_payload::hb3b18dbdadb3ea0e(__src, __dst, v54, v45, 0); /*0x1006f3607*/
        if ( *(_QWORD *)__src != 0x8000000000000000LL ) /*0x1006f3627*/
        {
          v71 = *(_QWORD *)&__src[24]; /*0x1006f3b13*/
          v70 = *(_QWORD *)&__src[16]; /*0x1006f3b1e*/
          v69 = *(const __m128i **)&__src[8]; /*0x1006f3b22*/
          memcpy(&v37[32], &__src[32], 0x88u); /*0x1006f3b39*/
          v68 = *(_QWORD *)&__src[24]; /*0x1006f3b42*/
          v67 = *(_QWORD *)&__src[16]; /*0x1006f3b4e*/
          v66 = *(const __m128i **)&__src[8]; /*0x1006f3b52*/
          *(_QWORD *)&v37[8] = *(_QWORD *)&__src[8]; /*0x1006f3b56*/
          *(_QWORD *)&v37[16] = *(_QWORD *)&__src[16]; /*0x1006f3b5d*/
          *(_QWORD *)&v37[24] = *(_QWORD *)&__src[24]; /*0x1006f3b64*/
          *(_QWORD *)v37 = *(_QWORD *)__src; /*0x1006f3b6b*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..DaemonRunPayload$GT$$GT$::h3dbc1f4feb2359ef( /*0x1006f3b79*/
            v37,
            *(double *)si128.i64);
          *(_QWORD *)__src = 0x8000000000000000LL; /*0x1006f3b7e*/
          goto LABEL_69; /*0x1006f3b85*/
        }
        qmemcpy(v54, &__src[8], 0x60u); /*0x1006f363f*/
        v59 = nullptr; /*0x1006f3642*/
        v60 = 1; /*0x1006f364d*/
        v61 = 0; /*0x1006f3658*/
        v56[2] = 1610612768; /*0x1006f3663*/
        v56[0] = &v59; /*0x1006f3675*/
        v56[1] = &off_101969DD0; /*0x1006f3683*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f3694*/
                                v54,
                                v56) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v63, &unk_101969E38, &off_101969E00); /*0x1006f408d*/
        goto LABEL_7; /*0x1006f369b*/
      }
      qmemcpy(__src, v37, 0x60u); /*0x1006f36e5*/
      v56[0] = 0; /*0x1006f36e8*/
      v56[1] = 1; /*0x1006f36f3*/
      v56[2] = 0; /*0x1006f36fe*/
      *(_QWORD *)&v54[16] = 1610612768; /*0x1006f3709*/
      *(_QWORD *)v54 = v56; /*0x1006f371b*/
      *(_QWORD *)&v54[8] = &off_101969DD0; /*0x1006f3729*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f373a*/
                              __src,
                              v54) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v63, &unk_101969E38, &off_101969E00); /*0x1006f4040*/
    }
    else
    {
      qmemcpy(__src, v37, 0x60u); /*0x1006f34c2*/
      v56[0] = 0; /*0x1006f34c5*/
      v56[1] = 1; /*0x1006f34d0*/
      v56[2] = 0; /*0x1006f34db*/
      *(_QWORD *)&v54[16] = 1610612768; /*0x1006f34e6*/
      *(_QWORD *)v54 = v56; /*0x1006f34f8*/
      *(_QWORD *)&v54[8] = &off_101969DD0; /*0x1006f3506*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f3517*/
                              __src,
                              v54) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v63, &unk_101969E38, &off_101969E00); /*0x1006f4018*/
    }
    v14 = v56[0]; /*0x1006f3747*/
    v15 = v56[1]; /*0x1006f374e*/
    v16 = v56[2]; /*0x1006f3755*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v37); /*0x1006f3763*/
    *(_QWORD *)__src = v14; /*0x1006f3768*/
    *(_QWORD *)&__src[8] = v15; /*0x1006f376f*/
    *(_QWORD *)&__src[16] = v16; /*0x1006f3776*/
    if ( v14 != 0x8000000000000000LL ) /*0x1006f378a*/
      goto LABEL_73; /*0x1006f378a*/
    goto LABEL_69; /*0x1006f378a*/
  }
  codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(__src); /*0x1006f327c*/
  if ( *(_QWORD *)__src != 2 ) /*0x1006f3293*/
  {
    v55 = a1; /*0x1006f3400*/
    v71 = *(_QWORD *)&__src[24]; /*0x1006f340c*/
    v70 = *(_QWORD *)&__src[16]; /*0x1006f3419*/
    v69 = *(const __m128i **)&__src[8]; /*0x1006f341d*/
    memcpy(&v37[32], &__src[32], 0x410u); /*0x1006f3434*/
    v68 = *(_QWORD *)&__src[24]; /*0x1006f343d*/
    *(_QWORD *)&v37[8] = *(_QWORD *)&__src[8]; /*0x1006f3449*/
    *(_QWORD *)&v37[16] = *(_QWORD *)&__src[16]; /*0x1006f3450*/
    *(_QWORD *)&v37[24] = *(_QWORD *)&__src[24]; /*0x1006f3457*/
    *(_QWORD *)v37 = *(_QWORD *)__src; /*0x1006f345e*/
    v11 = __dst[49]; /*0x1006f3465*/
    v12 = __dst[50]; /*0x1006f346c*/
    if ( __dst[50] ) /*0x1006f3476*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v37[32], &__src[32]); /*0x1006f347c*/
      v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1006f348e*/
      if ( !v13 ) /*0x1006f3494*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v12); /*0x1006f34a2*/
    }
    else
    {
      v13 = 1; /*0x1006f3795*/
    }
    memcpy((void *)v13, v11, (size_t)v12); /*0x1006f37a4*/
    v58 = v13; /*0x1006f37b7*/
    v57 = v12; /*0x1006f37c1*/
    codexmate_lib::core::repository::enrich_accounts_via_api_with_subscription_policy::h5e1e2136bd5f5cf1( /*0x1006f37ce*/
      (unsigned __int64 *)&v59,
      v37,
      v13,
      (__int64)v12,
      0);
    v3 = v55; /*0x1006f37d3*/
    codexmate_lib::core::repository::Repository::persist_progressive_state::hba8e5e8e2d346f6d(v54, __dst, v37); /*0x1006f37ef*/
    if ( *(_DWORD *)v54 == 11 ) /*0x1006f37fb*/
    {
      codexmate_lib::core::repository::Repository::auto_switch_config::hb0e53217ed18b987(v49, __dst); /*0x1006f380f*/
      v17 = v50; /*0x1006f3814*/
      if ( v50 && v49[0] == v46[0] ) /*0x1006f3831*/
      {
        codexmate_lib::core::repository::Repository::reconcile_auto_switch_request::h1410e94b2e717fe6( /*0x1006f385a*/
          (__int64)v54,
          (__int64)__dst,
          (__int64)v37,
          (__int64)v49,
          (__int64 *)&v59);
        if ( *(_DWORD *)v54 == 11 ) /*0x1006f3866*/
        {
          v43[0] = *(_QWORD *)&v54[8]; /*0x1006f3881*/
          v43[1] = *(_QWORD *)&v54[16]; /*0x1006f3888*/
          v43[2] = *(_QWORD *)&v54[24]; /*0x1006f388f*/
          v56[0] = 0x8000000000000000LL; /*0x1006f38a0*/
          codexmate_lib::core::repository::Repository::build_daemon_payload::hb3b18dbdadb3ea0e( /*0x1006f38c9*/
            __src,
            __dst,
            v56,
            v43,
            1);
          if ( *(_QWORD *)__src != 0x8000000000000000LL ) /*0x1006f38e2*/
          {
            v68 = *(_QWORD *)&__src[24]; /*0x1006f3e65*/
            v67 = *(_QWORD *)&__src[16]; /*0x1006f3e72*/
            v66 = *(const __m128i **)&__src[8]; /*0x1006f3e76*/
            memcpy(&v54[32], &__src[32], 0x88u); /*0x1006f3e8d*/
            v65 = *(_QWORD *)&__src[24]; /*0x1006f3e96*/
            v64 = *(_QWORD *)&__src[16]; /*0x1006f3ea2*/
            v63 = *(const __m128i **)&__src[8]; /*0x1006f3ea6*/
            *(_QWORD *)&v54[8] = *(_QWORD *)&__src[8]; /*0x1006f3eaa*/
            *(_QWORD *)&v54[16] = *(_QWORD *)&__src[16]; /*0x1006f3eb1*/
            *(_QWORD *)&v54[24] = *(_QWORD *)&__src[24]; /*0x1006f3eb8*/
            *(_QWORD *)v54 = *(_QWORD *)__src; /*0x1006f3ebf*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..DaemonRunPayload$GT$$GT$::h3dbc1f4feb2359ef( /*0x1006f3ecd*/
              v54,
              *(double *)si128.i64);
            *(_QWORD *)__src = 0x8000000000000000LL; /*0x1006f3ed2*/
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v59); /*0x1006f3ee0*/
            if ( v57 ) /*0x1006f3ef6*/
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x1006f3efd*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7( /*0x1006f3f09*/
              v37,
              *(double *)si128.i64);
            if ( *(_QWORD *)__src != 0x8000000000000000LL ) /*0x1006f3f22*/
              goto LABEL_73; /*0x1006f3f22*/
            goto LABEL_69; /*0x1006f3f22*/
          }
          qmemcpy(v56, &__src[8], sizeof(v56)); /*0x1006f38fa*/
          codexmate_lib::run_daemon_once_inner::_$u7b$$u7b$closure$u7d$$u7d$::h03c99f5255d7ffcd(&v69, v56); /*0x1006f3904*/
          _RAX = v71; /*0x1006f3909*/
          v19 = v69; /*0x1006f390d*/
          v20 = v70; /*0x1006f3911*/
        }
        else
        {
          qmemcpy(__src, v54, 0x60u); /*0x1006f3cd4*/
          codexmate_lib::run_daemon_once_inner::_$u7b$$u7b$closure$u7d$$u7d$::h03c99f5255d7ffcd(v56, __src); /*0x1006f3ce1*/
          _RAX = v56[2]; /*0x1006f3ce6*/
          v19 = (const __m128i *)v56[0]; /*0x1006f3ced*/
          v20 = v56[1]; /*0x1006f3cf4*/
        }
      }
      else
      {
        codexmate_lib::core::repository::Repository::sync_auto_switch_request::h65844a159a40ab13(v54, __dst, 0, 0, v49); /*0x1006f39e2*/
        if ( *(_DWORD *)v54 != 11 ) /*0x1006f39ee*/
        {
          qmemcpy(__src, v54, 0x60u); /*0x1006f3ba0*/
          v69 = nullptr; /*0x1006f3ba3*/
          v70 = 1; /*0x1006f3bab*/
          v71 = 0; /*0x1006f3bb3*/
          v56[2] = 1610612768; /*0x1006f3bbb*/
          v56[0] = &v69; /*0x1006f3bca*/
          v56[1] = &off_101969DD0; /*0x1006f3bd8*/
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f3be9*/
                                  __src,
                                  v56) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v63, &unk_101969E38, &off_101969E00); /*0x1006f40b2*/
          v21 = v69; /*0x1006f3bf6*/
          v22 = v70; /*0x1006f3bfa*/
          v23 = v71; /*0x1006f3bfe*/
          HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v54) >> 32; /*0x1006f3c09*/
          *(_QWORD *)__src = v21; /*0x1006f3c0e*/
          *(_QWORD *)&__src[8] = v22; /*0x1006f3c15*/
          *(_QWORD *)&__src[16] = v23; /*0x1006f3c1c*/
LABEL_55:
          v24 = v60; /*0x1006f3d10*/
          if ( v60 ) /*0x1006f3d1a*/
          {
            v25 = v62; /*0x1006f3d20*/
            if ( v62 ) /*0x1006f3d2a*/
            {
              v26 = v59; /*0x1006f3d30*/
              si128 = _mm_load_si128(v59); /*0x1006f3d37*/
              _EBX = ~_mm_movemask_epi8(si128); /*0x1006f3d40*/
              v28 = v59 + 1; /*0x1006f3d42*/
              do /*0x1006f3d5d*/
              {
                if ( !(_WORD)_EBX ) /*0x1006f3d62*/
                {
                  do /*0x1006f3d8a*/
                  {
                    si128 = _mm_load_si128(v28); /*0x1006f3d70*/
                    v29 = _mm_movemask_epi8(si128); /*0x1006f3d75*/
                    v26 -= 24; /*0x1006f3d79*/
                    ++v28; /*0x1006f3d80*/
                  }
                  while ( v29 == 0xFFFF ); /*0x1006f3d8a*/
                  _EBX = ~v29; /*0x1006f3d8c*/
                }
                __asm { tzcnt eax, ebx } /*0x1006f3d8e*/
                v30 = -3 * _RAX; /*0x1006f3d95*/
                v31 = *((_QWORD *)&v26[-1] + v30 - 1); /*0x1006f3d99*/
                if ( v31 ) /*0x1006f3da1*/
                  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26[-1].i64[v30], v31, 1); /*0x1006f3db0*/
                --v25; /*0x1006f3d50*/
                _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x1006f3d56*/
                _EBX &= _EBX - 1; /*0x1006f3d58*/
              }
              while ( v25 ); /*0x1006f3d5d*/
            }
            v32 = (24 * v24 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1006f3dc3*/
            v33 = v32 + v24 + 17; /*0x1006f3dca*/
            if ( v33 ) /*0x1006f3dce*/
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v59 - v32, v33, 16); /*0x1006f3de2*/
          }
          if ( v57 ) /*0x1006f3df1*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x1006f3dff*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7( /*0x1006f3e0b*/
            v37,
            *(double *)si128.i64);
          v3 = v55; /*0x1006f3e10*/
          if ( *(_QWORD *)__src != 0x8000000000000000LL ) /*0x1006f3e2b*/
            goto LABEL_73; /*0x1006f3e2b*/
          goto LABEL_69; /*0x1006f3e2b*/
        }
        if ( 2LL * *(_QWORD *)&v54[8] ) /*0x1006f39fb*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x1006f3a1e*/
                                   *(_QWORD *)&v54[16],
                                   *(_QWORD *)&v54[8],
                                   1);
        v44[0] = 0x8000000000000000LL; /*0x1006f3a23*/
        v56[2] = v44[2]; /*0x1006f3a38*/
        v56[1] = v44[1]; /*0x1006f3a3f*/
        v56[0] = 0x8000000000000000LL; /*0x1006f3a46*/
        codexmate_lib::core::repository::Repository::build_daemon_payload::hb3b18dbdadb3ea0e( /*0x1006f3a6d*/
          __src,
          __dst,
          v56,
          v44,
          v17);
        if ( *(_QWORD *)__src != 0x8000000000000000LL ) /*0x1006f3a7c*/
        {
          v53 = *(_QWORD *)&__src[24]; /*0x1006f3c2d*/
          v52 = *(_QWORD *)&__src[16]; /*0x1006f3c3d*/
          v51 = *(_QWORD *)&__src[8]; /*0x1006f3c44*/
          memcpy(&v54[32], &__src[32], 0x88u); /*0x1006f3c5e*/
          v42 = *(_QWORD *)&__src[24]; /*0x1006f3c6a*/
          v41 = *(_QWORD *)&__src[16]; /*0x1006f3c7f*/
          v40 = *(_QWORD *)&__src[8]; /*0x1006f3c86*/
          *(_QWORD *)&v54[8] = *(_QWORD *)&__src[8]; /*0x1006f3c8d*/
          *(_QWORD *)&v54[16] = *(_QWORD *)&__src[16]; /*0x1006f3c94*/
          *(_QWORD *)&v54[24] = *(_QWORD *)&__src[24]; /*0x1006f3c9b*/
          *(_QWORD *)v54 = *(_QWORD *)__src; /*0x1006f3ca2*/
          HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..DaemonRunPayload$GT$$GT$::h3dbc1f4feb2359ef( /*0x1006f3cb0*/
                                              v54,
                                              *(double *)si128.i64) >> 32;
          *(_QWORD *)__src = 0x8000000000000000LL; /*0x1006f3cb5*/
          goto LABEL_55; /*0x1006f3cbc*/
        }
        qmemcpy(v56, &__src[8], sizeof(v56)); /*0x1006f3a94*/
        v66 = nullptr; /*0x1006f3a97*/
        v67 = 1; /*0x1006f3a9f*/
        v68 = 0; /*0x1006f3aa7*/
        v71 = 1610612768; /*0x1006f3aaf*/
        v69 = (const __m128i *)&v66; /*0x1006f3abb*/
        v70 = (__int64)&off_101969DD0; /*0x1006f3ac6*/
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f3ad1*/
                                v56,
                                &v69) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v63, &unk_101969E38, &off_101969E00); /*0x1006f40d7*/
        v63 = v66; /*0x1006f3ae6*/
        v64 = v67; /*0x1006f3aea*/
        v65 = v68; /*0x1006f3af2*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[8]); /*0x1006f3af9*/
        _RAX = v65; /*0x1006f3afe*/
        v19 = v63; /*0x1006f3b02*/
        v20 = v64; /*0x1006f3b06*/
      }
      *(_QWORD *)__src = v19; /*0x1006f3cfb*/
      *(_QWORD *)&__src[8] = v20; /*0x1006f3d02*/
    }
    else
    {
      qmemcpy(__src, v54, 0x60u); /*0x1006f3930*/
      v69 = nullptr; /*0x1006f3933*/
      v70 = 1; /*0x1006f393b*/
      v71 = 0; /*0x1006f3943*/
      v56[2] = 1610612768; /*0x1006f394b*/
      v56[0] = &v69; /*0x1006f395a*/
      v56[1] = &off_101969DD0; /*0x1006f3968*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f3979*/
                              __src,
                              v56) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v63, &unk_101969E38, &off_101969E00); /*0x1006f4068*/
      v66 = v69; /*0x1006f398e*/
      v67 = v70; /*0x1006f3992*/
      v68 = v71; /*0x1006f399a*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v54); /*0x1006f39a5*/
      *(_QWORD *)__src = v66; /*0x1006f39b2*/
      *(_QWORD *)&__src[8] = v67; /*0x1006f39b9*/
      _RAX = v68; /*0x1006f39c0*/
    }
    *(_QWORD *)&__src[16] = _RAX; /*0x1006f3d09*/
    goto LABEL_55; /*0x1006f3d09*/
  }
  qmemcpy(v54, &__src[8], 0x60u); /*0x1006f32ab*/
  v59 = nullptr; /*0x1006f32ae*/
  v60 = 1; /*0x1006f32b9*/
  v61 = 0; /*0x1006f32c4*/
  v56[2] = 1610612768; /*0x1006f32cf*/
  v56[0] = &v59; /*0x1006f32e1*/
  v56[1] = &off_101969DD0; /*0x1006f32ef*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f3300*/
                          v54,
                          v56) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v63, &unk_101969E38, &off_101969E00); /*0x1006f3ff0*/
LABEL_7:
  v69 = v59; /*0x1006f330d*/
  v70 = v60; /*0x1006f331f*/
  v71 = v61; /*0x1006f332a*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[8]); /*0x1006f3331*/
  *(_QWORD *)__src = v69; /*0x1006f3342*/
  *(_QWORD *)&__src[8] = v70; /*0x1006f3349*/
  *(_QWORD *)&__src[16] = v71; /*0x1006f3350*/
  if ( v69 != (const __m128i *)0x8000000000000000LL )
  {
LABEL_73:
    *(_QWORD *)v54 = __src; /*0x1006f3f28*/
    *(_QWORD *)v37 = v54; /*0x1006f3f3d*/
    *(_QWORD *)&v37[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1006f3f4b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(
      v39,
      "\x06error=\xC0\x1Cdebug bundle worker failed: \xC0\tcategory=\xC0src/commands/debug_report.rs",
      v37);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_101606167, 11, &unk_101606197, 13, v39); /*0x1006f3f8b*/
    goto LABEL_74; /*0x1006f3f8b*/
  }
LABEL_69:
  codexmate_lib::platform::debug_log::app_event::ha23bcf77044d6eee( /*0x1006f3e31*/
    &unk_101606167,
    11,
    &unk_101606040,
    16,
    &unk_10160618E,
    9,
    *(double *)si128.i64);
LABEL_74:
  v3[2] = *(_QWORD *)&__src[16]; /*0x1006f3f90*/
  v34 = *(_QWORD *)__src; /*0x1006f3f9b*/
  v3[1] = *(_QWORD *)&__src[8]; /*0x1006f3fa9*/
  *v3 = v34; /*0x1006f3fad*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(__dst); /*0x1006f3fb8*/
  return v3; /*0x1006f3fc0*/
}