// __ZN13codexmate_lib8platform19voice_trigger_macos28start_trigger_listener_multi @ 0x1005e41b0 | 基线 same-set
__m128i *__fastcall codexmate_lib::platform::voice_trigger_macos::start_trigger_listener_multi::h664df626b9157521(
        __m128i *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rax
  void *v8; // r14
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rbx
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i *v17; // r15
  __int64 v18; // r14
  signed __int64 v19; // rax
  __m128i inserted; // xmm0
  void *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // r14
  _QWORD *v25; // r15
  __int64 v26; // rsi
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v30; // [rsp+40h] [rbp-368h] BYREF
  volatile signed __int64 *v31[2]; // [rsp+48h] [rbp-360h] BYREF
  _QWORD v32[2]; // [rsp+58h] [rbp-350h] BYREF
  _QWORD v33[2]; // [rsp+68h] [rbp-340h] BYREF
  __m128i *v34; // [rsp+78h] [rbp-330h]
  _QWORD v35[3]; // [rsp+80h] [rbp-328h] BYREF
  _QWORD v36[2]; // [rsp+98h] [rbp-310h] BYREF
  unsigned __int64 v37[3]; // [rsp+A8h] [rbp-300h] BYREF
  char v38; // [rsp+C0h] [rbp-2E8h]
  __int64 v39; // [rsp+C8h] [rbp-2E0h]
  void *v40; // [rsp+D0h] [rbp-2D8h]
  __int64 v41; // [rsp+D8h] [rbp-2D0h]
  __int64 v42; // [rsp+E0h] [rbp-2C8h]
  __int64 v43; // [rsp+E8h] [rbp-2C0h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-2B8h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-2B0h]
  _OWORD __src[42]; // [rsp+100h] [rbp-2A8h] BYREF

  v35[0] = a3; /*0x1005e41d6*/
  v35[1] = a4; /*0x1005e41de*/
  if ( AXIsProcessTrusted() ) /*0x1005e41e6*/
  {
    *(_QWORD *)&__src[24] = 1; /*0x1005e41f3*/
    *((_QWORD *)&__src[24] + 1) = 1; /*0x1005e41ff*/
    LOBYTE(__src[25]) = 0; /*0x1005e420b*/
    *(_QWORD *)&__src[16] = 0; /*0x1005e4213*/
    BYTE8(__src[16]) = 0; /*0x1005e421f*/
    *(_QWORD *)&__src[17] = 0; /*0x1005e4227*/
    __src[0] = 0; /*0x1005e4237*/
    __src[8] = 0; /*0x1005e4240*/
    *((_QWORD *)&__src[17] + 1) = 8; /*0x1005e4249*/
    __src[18] = 0; /*0x1005e4255*/
    __src[19] = 8u; /*0x1005e425e*/
    LOBYTE(__src[20]) = 1; /*0x1005e4276*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005e427e*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x1005e428d*/
    if ( !v7 ) /*0x1005e4295*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1005e4777*/
    v8 = v7; /*0x1005e429b*/
    v9 = v7; /*0x1005e42ab*/
    memcpy(v7, __src, 0x200u); /*0x1005e42ae*/
    v39 = 1; /*0x1005e42b3*/
    v40 = v8; /*0x1005e42bf*/
    v32[0] = 1; /*0x1005e42c7*/
    v32[1] = v8; /*0x1005e42d0*/
    *(_QWORD *)&__src[24] = 1; /*0x1005e42d5*/
    *((_QWORD *)&__src[24] + 1) = 1; /*0x1005e42e1*/
    LOBYTE(__src[25]) = 0; /*0x1005e42ed*/
    *(_QWORD *)&__src[16] = 0; /*0x1005e42f5*/
    BYTE8(__src[16]) = 0; /*0x1005e4301*/
    *(_QWORD *)&__src[17] = 0; /*0x1005e4309*/
    __src[0] = 0; /*0x1005e4319*/
    __src[8] = 0; /*0x1005e4322*/
    *((_QWORD *)&__src[17] + 1) = 8; /*0x1005e432b*/
    __src[18] = 0; /*0x1005e4337*/
    __src[19] = 8u; /*0x1005e4340*/
    LOBYTE(__src[20]) = 1; /*0x1005e4358*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, __src); /*0x1005e4360*/
    v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x1005e436f*/
    if ( !v10 ) /*0x1005e4377*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1005e478b*/
    v11 = (__int64)v10; /*0x1005e437d*/
    v34 = a1; /*0x1005e4380*/
    v12 = v10; /*0x1005e4392*/
    memcpy(v10, __src, 0x200u); /*0x1005e4395*/
    v33[0] = 1; /*0x1005e439a*/
    v33[1] = v11; /*0x1005e43a3*/
    v41 = 1; /*0x1005e43a8*/
    v42 = v11; /*0x1005e43b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, __src); /*0x1005e43bc*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005e43cb*/
    if ( !v13 ) /*0x1005e43d3*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005e479c*/
    v14 = v13; /*0x1005e43d9*/
    *(_QWORD *)v13 = 1; /*0x1005e43dc*/
    *(_QWORD *)(v13 + 8) = 1; /*0x1005e43e3*/
    *(_BYTE *)(v13 + 16) = 0; /*0x1005e43eb*/
    v31[0] = (volatile signed __int64 *)v13; /*0x1005e43ef*/
    if ( _InterlockedIncrement64((volatile signed __int64 *)v13) <= 0 ) /*0x1005e43f8*/
      goto LABEL_38; /*0x1005e43f8*/
    v35[2] = v13; /*0x1005e43fe*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1005e4406*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005e4415*/
    if ( !v15 ) /*0x1005e441d*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005e47b0*/
    *(_QWORD *)v15 = 1; /*0x1005e4423*/
    *(_QWORD *)(v15 + 8) = 1; /*0x1005e442a*/
    *(_BYTE *)(v15 + 16) = 1; /*0x1005e4432*/
    v30 = (volatile signed __int64 *)v15; /*0x1005e4436*/
    if ( _InterlockedIncrement64((volatile signed __int64 *)v15) <= 0 ) /*0x1005e443f*/
LABEL_38:
      BUG(); /*0x1005e4808*/
    *(_QWORD *)&__src[4] = a2[2]; /*0x1005e4458*/
    v16 = *a2; /*0x1005e4460*/
    *((_QWORD *)&__src[3] + 1) = a2[1]; /*0x1005e4467*/
    *(_QWORD *)&__src[3] = v16; /*0x1005e446f*/
    *((_QWORD *)&__src[4] + 1) = v14; /*0x1005e4477*/
    v31[1] = (volatile signed __int64 *)v15; /*0x1005e447f*/
    *(_QWORD *)&__src[5] = v15; /*0x1005e4484*/
    *(_QWORD *)&__src[0] = a3; /*0x1005e448c*/
    *((_QWORD *)&__src[0] + 1) = a4; /*0x1005e4494*/
    *(_QWORD *)&__src[1] = 1; /*0x1005e449f*/
    *((_QWORD *)&__src[1] + 1) = v8; /*0x1005e44ab*/
    *(_QWORD *)&__src[2] = 1; /*0x1005e44b3*/
    *((_QWORD *)&__src[2] + 1) = v11; /*0x1005e44bf*/
    v37[0] = 0x8000000000000000LL; /*0x1005e44cf*/
    v36[0] = 0; /*0x1005e44d7*/
    v38 = 0; /*0x1005e44e3*/
    std::thread::lifecycle::spawn_unchecked::ha34a79ceb45f6b67(&v43, v37, 0, *((_QWORD *)&__src[3] + 1), 0, 0, __src); /*0x1005e4507*/
    v17 = v34; /*0x1005e450c*/
    if ( !v43 ) /*0x1005e4524*/
    {
      v36[0] = v44; /*0x1005e47c8*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005e47f2*/
        "failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
        22,
        v36,
        &off_101965F28,
        &off_101965588);
    }
    v36[0] = v43; /*0x1005e4532*/
    v36[1] = v44; /*0x1005e453a*/
    v37[0] = v45; /*0x1005e4542*/
    core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v36); /*0x1005e4552*/
    std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::hfad6188ea6bd6253(__src, v32, 2, 0); /*0x1005e456b*/
    v18 = *(_QWORD *)&__src[0]; /*0x1005e4570*/
    if ( *(_QWORD *)&__src[0] == 0x8000000000000001LL ) /*0x1005e4580*/
    {
      std::sync::mpmc::Sender$LT$T$GT$::send::h5b2fd9c4240d1a7a(v33); /*0x1005e458b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v32); /*0x1005e4590*/
      v18 = 36; /*0x1005e4595*/
      v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x1005e45a5*/
      if ( !v19 ) /*0x1005e45ad*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x1005e4803*/
      *(_QWORD *)(v19 + 24) = 0x97E685B6E8A88AE5LL; /*0x1005e45bd*/
      *(_QWORD *)(v19 + 16) = 0xAF90E5AC90E5919BLL; /*0x1005e45cb*/
      *(_QWORD *)(v19 + 8) = 0xE7AE94E9918FE5A6LL; /*0x1005e45d9*/
      *(_QWORD *)v19 = 0xA7E8B39FE9ADAFE8LL; /*0x1005e45e7*/
      *(_DWORD *)(v19 + 32) = -2105482314; /*0x1005e45ea*/
      inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FFBC0), v19, 0); /*0x1005e45f9*/
    }
    else
    {
      if ( *(_QWORD *)&__src[0] == 0x8000000000000000LL ) /*0x1005e46ce*/
      {
        v27 = v31[0]; /*0x1005e46d0*/
        v17->i64[1] = 1; /*0x1005e46d5*/
        v17[1].i64[0] = v11; /*0x1005e46dd*/
        v17[1].i64[1] = (__int64)v27; /*0x1005e46e1*/
        v17->i64[0] = 0; /*0x1005e46e5*/
        if ( !_InterlockedDecrement64(v30) ) /*0x1005e46f1*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v30); /*0x1005e46fc*/
        goto LABEL_29; /*0x1005e4701*/
      }
      inserted = _mm_loadu_si128((const __m128i *)((char *)__src + 8)); /*0x1005e4703*/
    }
    v17->i64[1] = v18; /*0x1005e470c*/
    v17[1] = inserted; /*0x1005e4710*/
    v17->i64[0] = 1; /*0x1005e4716*/
    if ( !_InterlockedDecrement64(v30) ) /*0x1005e4722*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v30); /*0x1005e472d*/
    if ( !_InterlockedDecrement64(v31[0]) ) /*0x1005e4737*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(v31); /*0x1005e4742*/
    _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(v33); /*0x1005e474c*/
LABEL_29:
    _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h439f5519253259f4(v32); /*0x1005e4751*/
    return v17; /*0x1005e4756*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005e4605*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(70, 1); /*0x1005e4614*/
  if ( !v21 ) /*0x1005e461c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 70); /*0x1005e47c1*/
  v22 = (__int64)v21; /*0x1005e4622*/
  memcpy(v21, &unk_1016012A2, 0x46u); /*0x1005e4634*/
  a1->i64[1] = 70; /*0x1005e4639*/
  a1[1].i64[0] = v22; /*0x1005e4641*/
  a1[1].i64[1] = 70; /*0x1005e4645*/
  a1->i64[0] = 1; /*0x1005e4650*/
  _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2dbba9b4c2a0276f(v35); /*0x1005e4664*/
  v23 = a2[1]; /*0x1005e4669*/
  v24 = a2[2]; /*0x1005e466e*/
  if ( v24 ) /*0x1005e4676*/
  {
    v25 = (_QWORD *)(v23 + 8); /*0x1005e4678*/
    do /*0x1005e4687*/
    {
      v26 = *(v25 - 1); /*0x1005e4689*/
      if ( v26 ) /*0x1005e4690*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v25, v26, 1); /*0x1005e469a*/
      v25 += 6; /*0x1005e4680*/
      --v24; /*0x1005e4684*/
    }
    while ( v24 ); /*0x1005e4687*/
  }
  v17 = a1; /*0x1005e46a8*/
  if ( *a2 ) /*0x1005e46a1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 48 * *a2, 8); /*0x1005e46c1*/
  return v17; /*0x1005e475e*/
}