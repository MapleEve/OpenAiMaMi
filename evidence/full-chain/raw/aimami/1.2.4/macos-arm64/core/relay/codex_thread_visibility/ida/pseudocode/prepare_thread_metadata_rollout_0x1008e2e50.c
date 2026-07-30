// __ZN13codexmate_lib4core5relay23codex_thread_visibility31prepare_thread_metadata_rollout @ 0x1008e2e50 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::prepare_thread_metadata_rollout::h4a8908f8faf37875(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t a5)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  void *v18; // rax
  void *v19; // rsi
  __int64 v20; // rax
  void *v21; // r15
  __int64 v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  size_t v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _BYTE v29[88]; // [rsp+8h] [rbp-278h] BYREF
  _BYTE v30[72]; // [rsp+60h] [rbp-220h] BYREF
  _QWORD v31[12]; // [rsp+A8h] [rbp-1D8h] BYREF
  _QWORD v32[3]; // [rsp+108h] [rbp-178h] BYREF
  _QWORD v33[2]; // [rsp+120h] [rbp-160h] BYREF
  _QWORD v34[9]; // [rsp+130h] [rbp-150h] BYREF
  __int64 v35; // [rsp+178h] [rbp-108h]
  _QWORD *v36; // [rsp+180h] [rbp-100h] BYREF
  _BYTE v37[96]; // [rsp+188h] [rbp-F8h] BYREF
  size_t v38; // [rsp+1E8h] [rbp-98h] BYREF
  void *v39; // [rsp+1F0h] [rbp-90h]
  size_t v40; // [rsp+1F8h] [rbp-88h]
  _QWORD v41[4]; // [rsp+200h] [rbp-80h] BYREF
  __int64 v42; // [rsp+220h] [rbp-60h]
  size_t __n; // [rsp+228h] [rbp-58h]
  __int64 v44; // [rsp+230h] [rbp-50h] BYREF
  __int64 v45; // [rsp+238h] [rbp-48h]
  __int64 v46; // [rsp+240h] [rbp-40h]
  size_t v47; // [rsp+248h] [rbp-38h]
  void *__src; // [rsp+250h] [rbp-30h]

  v33[0] = a4; /*0x1008e2e77*/
  v47 = a5; /*0x1008e2e7e*/
  v33[1] = a5; /*0x1008e2e82*/
  v42 = a3; /*0x1008e2e90*/
  codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::h42ca9f1bbb0b64d8(&v36); /*0x1008e2e94*/
  v8 = *(_QWORD *)v37; /*0x1008e2e9f*/
  qmemcpy(v29, &v37[8], sizeof(v29)); /*0x1008e2eb9*/
  if ( (_DWORD)v36 == 1 ) /*0x1008e2ebf*/
  {
    qmemcpy(a1 + 2, v29, 0x58u); /*0x1008e2ed1*/
    a1[1] = v8; /*0x1008e2ed4*/
    *a1 = 0x8000000000000001LL; /*0x1008e2ed8*/
    return a1; /*0x1008e2edc*/
  }
  if ( *(_QWORD *)v37 == 0x8000000000000000LL ) /*0x1008e2ee8*/
  {
    *a1 = 0x8000000000000000LL; /*0x1008e2eea*/
    return a1; /*0x1008e2eee*/
  }
  v31[0] = *(_QWORD *)v37; /*0x1008e2ef3*/
  qmemcpy(&v31[1], v29, 0x58u); /*0x1008e2f0d*/
  v9 = v31[1]; /*0x1008e2f10*/
  v36 = (_QWORD *)v31[1]; /*0x1008e2f1e*/
  *(_QWORD *)v37 = v31[2]; /*0x1008e2f25*/
  *(_QWORD *)&v37[8] = 0; /*0x1008e2f2c*/
  *(_QWORD *)&v37[16] = 0; /*0x1008e2f37*/
  *(_QWORD *)&v37[24] = v31[1]; /*0x1008e2f42*/
  v35 = v31[2]; /*0x1008e2f49*/
  *(_QWORD *)&v37[32] = v31[2]; /*0x1008e2f50*/
  serde_json::de::from_trait::hbc9c8c8dee91749d(v34, &v36); /*0x1008e2f65*/
  if ( LOBYTE(v34[0]) != 6 ) /*0x1008e2f73*/
  {
    v41[0] = v34[0]; /*0x1008e2fa7*/
    v41[2] = v34[2]; /*0x1008e2fbb*/
    v41[3] = v34[3]; /*0x1008e2fc6*/
    v41[1] = v34[1]; /*0x1008e2fcd*/
    v11 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v41, &unk_10167F730, 11); /*0x1008e2fe1*/
    if ( v11 && *(_BYTE *)v11 == 3 && (v13 = *(_QWORD *)(v11 + 24)) != 0 ) /*0x1008e2ff7*/
    {
      if ( v13 < 0 ) /*0x1008e2ff9*/
      {
        v14 = 0; /*0x1008e2fff*/
        goto LABEL_12; /*0x1008e2fff*/
      }
      __src = *(void **)(v11 + 16); /*0x1008e30dd*/
      __n = v13; /*0x1008e30e1*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, &unk_10167F730, v12, v13); /*0x1008e30e5*/
      v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1008e30f3*/
      v14 = 1; /*0x1008e30f8*/
      v13 = __n; /*0x1008e30fd*/
      if ( !v18 ) /*0x1008e3104*/
LABEL_12:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v13); /*0x1008e3001*/
      v19 = __src; /*0x1008e310d*/
      __src = v18; /*0x1008e3111*/
      memcpy(v18, v19, __n); /*0x1008e3118*/
      v38 = __n; /*0x1008e3121*/
      v39 = __src; /*0x1008e312c*/
      v40 = __n; /*0x1008e3133*/
      if ( __n == v47 && !memcmp(__src, a4, v47) ) /*0x1008e3151*/
      {
        v21 = __src; /*0x1008e3234*/
        v22 = v42; /*0x1008e323f*/
        std::path::Path::to_path_buf::h73855ce4b54f7174(&v44, a2, v42); /*0x1008e3246*/
        codexmate_lib::core::relay::codex_thread_visibility::session_meta_thread_metadata::h2bea9123194f8278( /*0x1008e3271*/
          &v36,
          v9,
          v35,
          a2,
          v22,
          (__int64)&unk_10167F73B,
          5);
        v23 = v36; /*0x1008e3276*/
        qmemcpy(v30, v37, sizeof(v30)); /*0x1008e3290*/
        if ( v36 == (_QWORD *)11 ) /*0x1008e3297*/
        {
          codexmate_lib::core::relay::codex_thread_visibility::session_meta_thread_metadata::h2bea9123194f8278( /*0x1008e32c7*/
            &v36,
            v31[7],
            v31[8],
            a2,
            v22,
            (__int64)"lastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
            4);
          v24 = v36; /*0x1008e32cc*/
          qmemcpy(v34, v37, sizeof(v34)); /*0x1008e32e6*/
          v25 = v47; /*0x1008e32ed*/
          if ( v36 == (_QWORD *)11 ) /*0x1008e32f1*/
          {
            qmemcpy(a1 + 15, v34, 0x48u); /*0x1008e3307*/
            qmemcpy(a1 + 24, v31, 0x60u); /*0x1008e331d*/
            a1[2] = v46; /*0x1008e3324*/
            v26 = v44; /*0x1008e3328*/
            a1[1] = v45; /*0x1008e3330*/
            *a1 = v26; /*0x1008e3334*/
            qmemcpy(a1 + 6, v30, 0x48u); /*0x1008e3348*/
            a1[3] = v25; /*0x1008e334b*/
            a1[4] = v21; /*0x1008e334f*/
            a1[5] = v25; /*0x1008e3353*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v41); /*0x1008e335b*/
            return a1; /*0x1008e3360*/
          }
          v28 = *(_QWORD *)&v37[72]; /*0x1008e33d3*/
          a1[12] = *(_QWORD *)&v37[80]; /*0x1008e33e1*/
          a1[11] = v28; /*0x1008e33e5*/
          qmemcpy(a1 + 2, v34, 0x48u); /*0x1008e33f9*/
          a1[1] = v24; /*0x1008e33fc*/
          *a1 = 0x8000000000000001LL; /*0x1008e340a*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..RouterModelTarget$GT$::hf2048027b6e45601(v30); /*0x1008e3415*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v25, 1); /*0x1008e3425*/
          if ( v44 ) /*0x1008e3431*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x1008e343c*/
        }
        else
        {
          v27 = *(_QWORD *)&v37[72]; /*0x1008e3365*/
          a1[12] = *(_QWORD *)&v37[80]; /*0x1008e3373*/
          a1[11] = v27; /*0x1008e3377*/
          qmemcpy(a1 + 2, v30, 0x48u); /*0x1008e338b*/
          a1[1] = v23; /*0x1008e338e*/
          *a1 = 0x8000000000000001LL; /*0x1008e339c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v47, 1); /*0x1008e33ac*/
          if ( v44 ) /*0x1008e33b8*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x1008e33c3*/
        }
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v41); /*0x1008e3445*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..SessionMetaAnchors$GT$::h91f1a1294ef8498b(v31); /*0x1008e3451*/
        return a1; /*0x1008e3456*/
      }
      v34[0] = a2; /*0x1008e3157*/
      v34[1] = v42; /*0x1008e3162*/
      v36 = v34; /*0x1008e3170*/
      *(_QWORD *)v37 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008e317e*/
      *(_QWORD *)&v37[8] = &v38; /*0x1008e318c*/
      *(_QWORD *)&v37[16] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e319a*/
      *(_QWORD *)&v37[24] = v33; /*0x1008e31a8*/
      *(_QWORD *)&v37[32] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1008e31b6*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v32, &unk_1017D1E3A, &v36); /*0x1008e31d2*/
      a1[4] = v32[2]; /*0x1008e31de*/
      v20 = v32[0]; /*0x1008e31e2*/
      a1[3] = v32[1]; /*0x1008e31f0*/
      a1[2] = v20; /*0x1008e31f4*/
      a1[1] = 9; /*0x1008e31f8*/
      *a1 = 0x8000000000000001LL; /*0x1008e320a*/
      if ( v38 ) /*0x1008e3218*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x1008e322a*/
    }
    else
    {
      v44 = a2; /*0x1008e300b*/
      v45 = v42; /*0x1008e3013*/
      v34[0] = &v44; /*0x1008e301b*/
      v34[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008e3029*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v37, &unk_1017D1606, v34); /*0x1008e3045*/
      v15 = *(_QWORD *)v37; /*0x1008e304a*/
      v16 = *(_QWORD *)&v37[8]; /*0x1008e3051*/
      qmemcpy(a1 + 4, &v37[16], 0x48u); /*0x1008e3068*/
      a1[1] = 9; /*0x1008e306b*/
      a1[2] = v15; /*0x1008e3073*/
      a1[3] = v16; /*0x1008e3077*/
      *a1 = 0x8000000000000001LL; /*0x1008e3085*/
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v41); /*0x1008e308d*/
    goto LABEL_15; /*0x1008e308d*/
  }
  v10 = v34[1]; /*0x1008e2f75*/
  a1[1] = 3; /*0x1008e2f7c*/
  a1[2] = v10; /*0x1008e2f84*/
  *a1 = 0x8000000000000001LL; /*0x1008e2f92*/
LABEL_15:
  if ( v8 ) /*0x1008e3095*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x1008e30a2*/
  if ( v31[6] ) /*0x1008e30b1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31[7], v31[6], 1); /*0x1008e30bf*/
  return a1; /*0x1008e30c7*/
}