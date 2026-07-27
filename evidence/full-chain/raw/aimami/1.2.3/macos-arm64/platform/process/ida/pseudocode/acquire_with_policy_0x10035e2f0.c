// __ZN13codexmate_lib8platform7process20CodexTransitionFence19acquire_with_policy @ 0x10035e2f0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5)
{
  unsigned __int8 v5; // r14
  __int64 result; // rax
  bool v9; // r12
  __int64 *v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  volatile signed __int64 *v16; // r15
  unsigned __int8 v17; // bl
  volatile signed __int64 *v18; // r14
  volatile signed __int64 *v19; // r13
  void *v20; // rax
  __int64 v21; // rax
  char v22; // di
  __int64 v23; // rdx
  __int64 *v24; // rsi
  volatile signed __int64 *v25; // rcx
  volatile signed __int64 *v26; // rdx
  __int128 v27; // xmm0
  unsigned __int64 v28; // r12
  __int64 *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // rsi
  _QWORD v34[12]; // [rsp+10h] [rbp-1B0h] BYREF
  __int64 v35[12]; // [rsp+70h] [rbp-150h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-F0h] BYREF
  volatile signed __int64 *v37; // [rsp+E0h] [rbp-E0h]
  volatile signed __int64 *v38; // [rsp+E8h] [rbp-D8h]
  __int64 *v39; // [rsp+F0h] [rbp-D0h]
  _QWORD *v40; // [rsp+F8h] [rbp-C8h] BYREF
  __int64 (__fastcall *v41)(_QWORD, _QWORD); // [rsp+100h] [rbp-C0h]
  __int64 v42; // [rsp+108h] [rbp-B8h]
  __int128 v43; // [rsp+110h] [rbp-B0h] BYREF
  unsigned __int64 v44; // [rsp+120h] [rbp-A0h]
  __int64 v45; // [rsp+128h] [rbp-98h]
  const char *v46; // [rsp+130h] [rbp-90h]
  __int64 v47; // [rsp+138h] [rbp-88h]
  __int64 v48; // [rsp+140h] [rbp-80h]
  char *v49; // [rsp+148h] [rbp-78h]
  __int64 v50; // [rsp+150h] [rbp-70h]
  __int64 v51; // [rsp+158h] [rbp-68h]
  void *v52; // [rsp+160h] [rbp-60h]
  _QWORD *v53; // [rsp+168h] [rbp-58h]
  volatile signed __int64 *v54; // [rsp+170h] [rbp-50h] BYREF
  int v55; // [rsp+178h] [rbp-48h] BYREF
  unsigned int v56; // [rsp+17Ch] [rbp-44h]
  volatile signed __int64 *v57; // [rsp+180h] [rbp-40h] BYREF
  volatile signed __int64 *v58; // [rsp+188h] [rbp-38h] BYREF
  volatile signed __int64 *v59; // [rsp+190h] [rbp-30h] BYREF

  v5 = a5; /*0x10035e304*/
  result = codexmate_lib::platform::process::CodexProcessLifecycle::prepare_transition::h285780eb18c8b906( /*0x10035e317*/
             v35,
             a2,
             a3,
             a5);
  v9 = v35[0] != 11; /*0x10035e324*/
  if ( v35[0] == 11 ) /*0x10035e328*/
  {
    if ( (_BYTE)a4 ) /*0x10035e41a*/
      goto LABEL_7; /*0x10035e41a*/
    v10 = v35; /*0x10035e53c*/
    v11 = 12; /*0x10035e543*/
    result = codexmate_lib::platform::process::enforce_codex_quiet_window_with::hd856baa2e955d006(v35, 12, 0, v5); /*0x10035e54a*/
    if ( LODWORD(v35[0]) == 11 ) /*0x10035e556*/
      goto LABEL_12; /*0x10035e556*/
LABEL_24:
    qmemcpy(a1, v35, 0x60u); /*0x10035e8b5*/
    return result; /*0x10035e8b5*/
  }
  if ( !(_BYTE)a4 ) /*0x10035e331*/
    goto LABEL_24; /*0x10035e331*/
  qmemcpy(v34, v35, sizeof(v34)); /*0x10035e34d*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10035e35e*/
  {
    v40 = v34; /*0x10035e364*/
    v41 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10035e372*/
    v48 = 2; /*0x10035e379*/
    v49 = "codexmate_lib::platform::process"; /*0x10035e388*/
    v50 = 32; /*0x10035e38c*/
    v52 = &unk_1017BCD67; /*0x10035e39b*/
    v53 = &v40; /*0x10035e3a6*/
    *(_QWORD *)&v43 = 0; /*0x10035e3aa*/
    *((_QWORD *)&v43 + 1) = "codexmate_lib::platform::process"; /*0x10035e3b5*/
    v44 = 32; /*0x10035e3bc*/
    v45 = 0; /*0x10035e3c7*/
    v46 = "src/platform/process.rs"; /*0x10035e3d9*/
    v47 = 23; /*0x10035e3e0*/
    v51 = 0x63200000001LL; /*0x10035e3f5*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v54, &v43); /*0x10035e404*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v34); /*0x10035e410*/
LABEL_7:
  v10 = v35; /*0x10035e420*/
  v11 = 2; /*0x10035e42b*/
  codexmate_lib::platform::process::enforce_codex_quiet_window_with::hd856baa2e955d006(v35, 2, 0, v5); /*0x10035e432*/
  if ( LODWORD(v35[0]) == 11 ) /*0x10035e43e*/
  {
LABEL_12:
    v55 = v35[1]; /*0x10035e55c*/
    LOBYTE(v12) = 1; /*0x10035e565*/
    v56 = v12; /*0x10035e567*/
    if ( LODWORD(v35[1]) && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x10035e580*/
    {
      v34[0] = &v55; /*0x10035e58a*/
      v34[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10035e598*/
      v48 = 2; /*0x10035e59f*/
      v49 = "codexmate_lib::platform::process"; /*0x10035e5ae*/
      v50 = 32; /*0x10035e5b2*/
      v52 = &unk_1017BCE56; /*0x10035e5c1*/
      v53 = v34; /*0x10035e5cc*/
      *(_QWORD *)&v43 = 0; /*0x10035e5d0*/
      *((_QWORD *)&v43 + 1) = "codexmate_lib::platform::process"; /*0x10035e5db*/
      v44 = 32; /*0x10035e5e2*/
      v45 = 0; /*0x10035e5ed*/
      v46 = "src/platform/process.rs"; /*0x10035e5ff*/
      v47 = 23; /*0x10035e606*/
      v51 = 0x65200000001LL; /*0x10035e61b*/
      v10 = (__int64 *)&v54; /*0x10035e61f*/
      v11 = (__int64)&v43; /*0x10035e623*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v54, &v43); /*0x10035e62a*/
    }
    goto LABEL_15; /*0x10035e62a*/
  }
  qmemcpy(v34, v35, sizeof(v34)); /*0x10035e45a*/
  v11 = (__int64)&v36; /*0x10035e45a*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10035e46b*/
  {
    v40 = v34; /*0x10035e471*/
    v41 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10035e47f*/
    v48 = 2; /*0x10035e486*/
    v49 = "codexmate_lib::platform::process"; /*0x10035e495*/
    v50 = 32; /*0x10035e499*/
    v52 = &unk_1017BCDE1; /*0x10035e4a8*/
    v53 = &v40; /*0x10035e4b3*/
    *(_QWORD *)&v43 = 0; /*0x10035e4b7*/
    *((_QWORD *)&v43 + 1) = "codexmate_lib::platform::process"; /*0x10035e4c2*/
    v44 = 32; /*0x10035e4c9*/
    v45 = 0; /*0x10035e4d4*/
    v46 = "src/platform/process.rs"; /*0x10035e4e6*/
    v47 = 23; /*0x10035e4ed*/
    v51 = 0x64A00000001LL; /*0x10035e502*/
    v11 = (__int64)&v43; /*0x10035e50a*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v54, &v43); /*0x10035e511*/
  }
  v10 = v34; /*0x10035e516*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v34); /*0x10035e51d*/
  v55 = 0; /*0x10035e522*/
  v9 = 1; /*0x10035e529*/
  v56 = 0; /*0x10035e52c*/
LABEL_15:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11); /*0x10035e62f*/
  v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10035e63e*/
  if ( !v13 ) /*0x10035e646*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10035e9cc*/
  *(_QWORD *)v13 = 1; /*0x10035e64c*/
  *(_QWORD *)(v13 + 8) = 1; /*0x10035e653*/
  *(_BYTE *)(v13 + 16) = 0; /*0x10035e65b*/
  v59 = (volatile signed __int64 *)v13; /*0x10035e65f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10035e663*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10035e672*/
  if ( !v14 ) /*0x10035e67a*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10035e9db*/
  *(_QWORD *)v14 = 1; /*0x10035e680*/
  *(_QWORD *)(v14 + 8) = 1; /*0x10035e687*/
  *(_DWORD *)(v14 + 16) = 0; /*0x10035e68f*/
  v58 = (volatile signed __int64 *)v14; /*0x10035e696*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10035e69a*/
  v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10035e6a9*/
  if ( !v15 ) /*0x10035e6b1*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10035e9ec*/
  v39 = a1; /*0x10035e6b7*/
  *(_QWORD *)v15 = 1; /*0x10035e6be*/
  *(_QWORD *)(v15 + 8) = 1; /*0x10035e6c5*/
  *(_BYTE *)(v15 + 16) = v9; /*0x10035e6cd*/
  v57 = (volatile signed __int64 *)v15; /*0x10035e6d1*/
  if ( _InterlockedIncrement64(v59) <= 0 /*0x10035e719*/
    || (v16 = v59, v38 = v59, _InterlockedIncrement64(v58) <= 0)
    || (v17 = v5, LODWORD(v36) = a4, v18 = v58, v37 = v58, _InterlockedIncrement64(v57) <= 0) )
  {
    BUG(); /*0x10035ea02*/
  }
  v19 = v57; /*0x10035e71f*/
  v54 = v57; /*0x10035e723*/
  v44 = 0x8000000000000000LL; /*0x10035e731*/
  *(_QWORD *)&v43 = 0; /*0x10035e738*/
  LOBYTE(v47) = 0; /*0x10035e743*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10035e74a*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x10035e759*/
  if ( !v20 ) /*0x10035e761*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x10035e9fd*/
  qmemcpy(v20, "codex-transition-fence", 22); /*0x10035e78d*/
  v35[0] = 22; /*0x10035e790*/
  v35[1] = (__int64)v20; /*0x10035e79b*/
  v35[2] = 22; /*0x10035e7a2*/
  std::thread::builder::Builder::name::h877bc8a9f9cdb5c8(v34, &v43, v35); /*0x10035e7c5*/
  *(_QWORD *)&v43 = v16; /*0x10035e7ca*/
  *((_QWORD *)&v43 + 1) = v18; /*0x10035e7d1*/
  LOBYTE(v45) = v17; /*0x10035e7d8*/
  v44 = (unsigned __int64)v19; /*0x10035e7de*/
  v42 = v34[4]; /*0x10035e7ec*/
  v41 = (__int64 (__fastcall *)(_QWORD, _QWORD))v34[3]; /*0x10035e7fa*/
  v40 = (_QWORD *)v34[2]; /*0x10035e808*/
  std::thread::lifecycle::spawn_unchecked::hca211f722bb6e0e9(v35, &v40, v34[0], v34[1], LOBYTE(v34[5]), 0, &v43); /*0x10035e83d*/
  v21 = v35[1]; /*0x10035e849*/
  v22 = v36; /*0x10035e853*/
  if ( v35[0] ) /*0x10035e859*/
  {
    v23 = v35[2]; /*0x10035e85b*/
    v24 = v39; /*0x10035e862*/
    v39[1] = v35[0]; /*0x10035e869*/
    v24[2] = v21; /*0x10035e86d*/
    v24[3] = v23; /*0x10035e871*/
    v25 = v58; /*0x10035e879*/
    v26 = v57; /*0x10035e87d*/
    v24[4] = (__int64)v59; /*0x10035e881*/
    v24[5] = (__int64)v25; /*0x10035e885*/
    v24[6] = (__int64)v26; /*0x10035e889*/
    result = v56; /*0x10035e88d*/
    *((_BYTE *)v24 + 56) = v56; /*0x10035e890*/
    *((_BYTE *)v24 + 57) = v22; /*0x10035e893*/
    *((_BYTE *)v24 + 58) = v17; /*0x10035e897*/
    *v24 = 11; /*0x10035e89a*/
  }
  else
  {
    v35[0] = v35[1]; /*0x10035e8bd*/
    v34[0] = v35; /*0x10035e8c4*/
    v34[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035e8d2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v43, &unk_1017BCEC5, v34); /*0x10035e8ee*/
    v27 = v43; /*0x10035e8f3*/
    v28 = v44; /*0x10035e8fa*/
    v29 = v39; /*0x10035e910*/
    if ( (v35[0] & 3) == 1 ) /*0x10035e917*/
    {
      v36 = v43; /*0x10035e919*/
      v30 = v35[0] - 1; /*0x10035e920*/
      v31 = *(_QWORD *)(v35[0] - 1); /*0x10035e924*/
      v32 = *(_QWORD *)(v35[0] + 7); /*0x10035e928*/
      if ( *(_QWORD *)v32 ) /*0x10035e92c*/
        (*(void (__fastcall **)(__int64, double))v32)(v31, *(double *)&v43); /*0x10035e938*/
      v33 = *(_QWORD *)(v32 + 8); /*0x10035e93a*/
      if ( v33 ) /*0x10035e941*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v33, *(_QWORD *)(v32 + 16)); /*0x10035e94a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24, 8); /*0x10035e95c*/
      v27 = v36; /*0x10035e961*/
    }
    *(_OWORD *)(v29 + 1) = v27; /*0x10035e968*/
    v29[3] = v28; /*0x10035e96c*/
    *v29 = 10; /*0x10035e970*/
    if ( !_InterlockedDecrement64(v57) ) /*0x10035e97b*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v57); /*0x10035e985*/
    if ( !_InterlockedDecrement64(v58) ) /*0x10035e98e*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21(&v58); /*0x10035e998*/
    result = (__int64)v59; /*0x10035e99d*/
    if ( !_InterlockedDecrement64(v59) ) /*0x10035e9a1*/
      return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v59); /*0x10035e9ab*/
  }
  return result; /*0x10035e9b0*/
}