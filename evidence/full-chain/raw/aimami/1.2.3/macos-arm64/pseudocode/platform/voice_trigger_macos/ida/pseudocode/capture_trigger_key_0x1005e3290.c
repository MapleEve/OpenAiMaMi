// __ZN13codexmate_lib8platform19voice_trigger_macos19capture_trigger_key @ 0x1005e3290 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::voice_trigger_macos::capture_trigger_key::hee242bc553fd8f6d(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rax
  void *v3; // r14
  void *v4; // rdi
  void *v5; // rax
  __int64 v6; // r12
  void *v7; // rdi
  void *v8; // rax
  void *v9; // r15
  void *v10; // rdi
  void *v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r14
  _QWORD *v14; // rax
  __m128i inserted; // xmm0
  void *v16; // rax
  void *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r14
  _QWORD *v32; // rax
  unsigned __int64 v33; // rax
  void *v34; // rax
  void *v35; // r15
  __int64 v36; // rax
  unsigned int v38; // [rsp+3Ch] [rbp-36Ch]
  __int64 v40; // [rsp+48h] [rbp-360h] BYREF
  __int128 v41; // [rsp+50h] [rbp-358h]
  __int64 v42; // [rsp+60h] [rbp-348h]
  __int128 v43; // [rsp+68h] [rbp-340h]
  __int128 v44; // [rsp+78h] [rbp-330h]
  __int64 v45; // [rsp+88h] [rbp-320h] BYREF
  void *v46; // [rsp+90h] [rbp-318h]
  _QWORD v47[2]; // [rsp+98h] [rbp-310h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-300h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-2F0h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-2E0h]
  _QWORD v51[2]; // [rsp+D0h] [rbp-2D8h] BYREF
  _QWORD v52[2]; // [rsp+E0h] [rbp-2C8h] BYREF
  _QWORD v53[2]; // [rsp+F0h] [rbp-2B8h] BYREF
  _OWORD __src[34]; // [rsp+100h] [rbp-2A8h] BYREF
  __int64 v55; // [rsp+328h] [rbp-80h]
  void *v56; // [rsp+330h] [rbp-78h]
  __int64 v57; // [rsp+338h] [rbp-70h]
  __int64 v58; // [rsp+340h] [rbp-68h]

  if ( AXIsProcessTrusted() ) /*0x1005e32ad*/
  {
    codexmate_lib::platform::voice_trigger_macos::cancel_trigger_capture::hf72118e3af23e107(); /*0x1005e32ba*/
    *(_QWORD *)&__src[24] = 1; /*0x1005e32bf*/
    *((_QWORD *)&__src[24] + 1) = 1; /*0x1005e32cb*/
    LOBYTE(__src[25]) = 0; /*0x1005e32d7*/
    *(_QWORD *)&__src[16] = 0; /*0x1005e32df*/
    BYTE8(__src[16]) = 0; /*0x1005e32eb*/
    *(_QWORD *)&__src[17] = 0; /*0x1005e32f3*/
    __src[0] = 0; /*0x1005e3303*/
    __src[8] = 0; /*0x1005e330c*/
    *((_QWORD *)&__src[17] + 1) = 8; /*0x1005e3315*/
    __src[18] = 0; /*0x1005e3321*/
    __src[19] = 8u; /*0x1005e332a*/
    LOBYTE(__src[20]) = 1; /*0x1005e3342*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005e334a*/
    v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x1005e3359*/
    if ( !v2 ) /*0x1005e3361*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1005e3bf9*/
    v3 = v2; /*0x1005e3367*/
    v4 = v2; /*0x1005e3377*/
    memcpy(v2, __src, 0x200u); /*0x1005e337a*/
    v55 = 1; /*0x1005e337f*/
    v56 = v3; /*0x1005e338b*/
    v45 = 1; /*0x1005e3393*/
    v46 = v3; /*0x1005e339f*/
    *(_QWORD *)&__src[24] = 1; /*0x1005e33a7*/
    *((_QWORD *)&__src[24] + 1) = 1; /*0x1005e33b3*/
    LOBYTE(__src[25]) = 0; /*0x1005e33bf*/
    *(_QWORD *)&__src[16] = 0; /*0x1005e33c7*/
    BYTE8(__src[16]) = 0; /*0x1005e33d3*/
    *(_QWORD *)&__src[17] = 0; /*0x1005e33db*/
    __src[0] = 0; /*0x1005e33eb*/
    __src[8] = 0; /*0x1005e33f4*/
    *((_QWORD *)&__src[17] + 1) = 8; /*0x1005e33fd*/
    __src[18] = 0; /*0x1005e3409*/
    __src[19] = 8u; /*0x1005e3412*/
    LOBYTE(__src[20]) = 1; /*0x1005e342a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, __src); /*0x1005e3432*/
    v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x1005e3441*/
    if ( !v5 ) /*0x1005e3449*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1005e3c0d*/
    v6 = (__int64)v5; /*0x1005e344f*/
    v7 = v5; /*0x1005e345f*/
    memcpy(v5, __src, 0x200u); /*0x1005e3462*/
    v57 = 1; /*0x1005e3467*/
    v58 = v6; /*0x1005e3473*/
    v47[0] = 1; /*0x1005e347b*/
    v47[1] = v6; /*0x1005e3487*/
    *(_QWORD *)&__src[24] = 1; /*0x1005e348f*/
    *((_QWORD *)&__src[24] + 1) = 1; /*0x1005e349b*/
    LOBYTE(__src[25]) = 0; /*0x1005e34a7*/
    *(_QWORD *)&__src[16] = 0; /*0x1005e34af*/
    BYTE8(__src[16]) = 0; /*0x1005e34bb*/
    *(_QWORD *)&__src[17] = 0; /*0x1005e34c3*/
    __src[0] = 0; /*0x1005e34d3*/
    __src[8] = 0; /*0x1005e34dc*/
    *((_QWORD *)&__src[17] + 1) = 8; /*0x1005e34e5*/
    __src[18] = 0; /*0x1005e34f1*/
    __src[19] = 8u; /*0x1005e34fa*/
    LOBYTE(__src[20]) = 1; /*0x1005e3512*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, __src); /*0x1005e351a*/
    v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x1005e3529*/
    if ( !v8 ) /*0x1005e3531*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1005e3c21*/
    v9 = v8; /*0x1005e3537*/
    v10 = v8; /*0x1005e3547*/
    memcpy(v8, __src, 0x200u); /*0x1005e354a*/
    v53[0] = 1; /*0x1005e354f*/
    v53[1] = v9; /*0x1005e355b*/
    *(_QWORD *)&v48 = 1; /*0x1005e3563*/
    *((_QWORD *)&v48 + 1) = v9; /*0x1005e356f*/
    *(_QWORD *)&__src[24] = 1; /*0x1005e3577*/
    *((_QWORD *)&__src[24] + 1) = 1; /*0x1005e3583*/
    LOBYTE(__src[25]) = 0; /*0x1005e358f*/
    *(_QWORD *)&__src[16] = 0; /*0x1005e3597*/
    BYTE8(__src[16]) = 0; /*0x1005e35a3*/
    *(_QWORD *)&__src[17] = 0; /*0x1005e35ab*/
    __src[0] = 0; /*0x1005e35bb*/
    __src[8] = 0; /*0x1005e35c4*/
    *((_QWORD *)&__src[17] + 1) = 8; /*0x1005e35cd*/
    __src[18] = 0; /*0x1005e35d9*/
    __src[19] = 8u; /*0x1005e35e2*/
    LOBYTE(__src[20]) = 1; /*0x1005e35fa*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, __src); /*0x1005e3602*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x1005e3616*/
    if ( !v11 ) /*0x1005e3623*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x1005e3c32*/
    memcpy(v11, __src, 0x200u); /*0x1005e3643*/
    v51[0] = 1; /*0x1005e3648*/
    v51[1] = v11; /*0x1005e3654*/
    v40 = 1; /*0x1005e365c*/
    *(_QWORD *)&v41 = v3; /*0x1005e3665*/
    *((_QWORD *)&v41 + 1) = 1; /*0x1005e366a*/
    v42 = v6; /*0x1005e3673*/
    *(_QWORD *)&v43 = 1; /*0x1005e3678*/
    *((_QWORD *)&v43 + 1) = v11; /*0x1005e3681*/
    *(_QWORD *)&__src[1] = 0x8000000000000000LL; /*0x1005e368e*/
    *(_QWORD *)&__src[0] = 0; /*0x1005e3696*/
    BYTE8(__src[2]) = 0; /*0x1005e36a2*/
    std::thread::lifecycle::spawn_unchecked::h6f75cc6aa635d917(&v49, &__src[1], 0, v12, 0, 0, &v40); /*0x1005e36c3*/
    if ( !(_QWORD)v49 ) /*0x1005e36db*/
    {
      *(_QWORD *)&__src[0] = *((_QWORD *)&v49 + 1); /*0x1005e3c48*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005e3c72*/
        "failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
        22,
        __src,
        &off_101965F28,
        &off_101965588);
    }
    __src[0] = v49; /*0x1005e36e9*/
    *(_QWORD *)&__src[1] = v50; /*0x1005e36f9*/
    core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(__src); /*0x1005e3709*/
    std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::hfad6188ea6bd6253(__src, v47, 2, 0); /*0x1005e3725*/
    v13 = *(_QWORD *)&__src[0]; /*0x1005e372a*/
    if ( *(_QWORD *)&__src[0] == 0x8000000000000001LL ) /*0x1005e3743*/
    {
      std::sync::mpmc::Sender$LT$T$GT$::send::h5b2fd9c4240d1a7a(v51); /*0x1005e3751*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v47); /*0x1005e3756*/
      v13 = 30; /*0x1005e375b*/
      v14 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1005e376b*/
      if ( !v14 ) /*0x1005e3773*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x1005e3c83*/
      *(_QWORD *)((char *)v14 + 22) = 0x8280E3B697E685B6LL; /*0x1005e3783*/
      v14[2] = 0x85B6E8A88AE5AF90LL; /*0x1005e3791*/
      v14[1] = 0xE5AC90E5919BE7AELL; /*0x1005e379f*/
      *v14 = 0x94E9918FE5A6A7E8LL; /*0x1005e37ad*/
      inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FFBB0), (signed __int64)v14, 0); /*0x1005e37b8*/
      goto LABEL_23; /*0x1005e37bf*/
    }
    if ( *(_QWORD *)&__src[0] != 0x8000000000000000LL ) /*0x1005e3826*/
    {
      inserted = _mm_loadu_si128((const __m128i *)((char *)__src + 8)); /*0x1005e39eb*/
LABEL_23:
      *(_QWORD *)(a1 + 8) = v13; /*0x1005e39f4*/
      *(__m128i *)(a1 + 16) = inserted; /*0x1005e3a07*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1005e3a0c*/
      _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(v51); /*0x1005e3a17*/
      _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h84582f2f5277463d(&v48); /*0x1005e3a24*/
      _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7cdcb0da0181451(v53); /*0x1005e3a31*/
      _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h439f5519253259f4(v47); /*0x1005e3a3e*/
      _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0c601e312c665b97(&v45); /*0x1005e3a4b*/
      return a1; /*0x1005e3a55*/
    }
    *(_QWORD *)&__src[0] = 1; /*0x1005e382c*/
    *((_QWORD *)&__src[0] + 1) = v9; /*0x1005e3838*/
    *(_QWORD *)&__src[1] = 1; /*0x1005e3840*/
    *((_QWORD *)&__src[1] + 1) = v11; /*0x1005e384c*/
    codexmate_lib::platform::voice_trigger_macos::set_active_capture::ha1a95636a1b3a628((__int64 *)__src, (__int64)v47); /*0x1005e385c*/
    v52[0] = v45; /*0x1005e3881*/
    v52[1] = v46; /*0x1005e3889*/
    v49 = v48; /*0x1005e3891*/
    v20 = std::time::Instant::now::hda76af2c3a449055(__src, *((_QWORD *)&v48 + 1), v48, v46, v19); /*0x1005e38a1*/
    v22 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1005e38b2*/
            v20,
            v21,
            15,
            0);
    v38 = v23; /*0x1005e38b7*/
    v24 = v22; /*0x1005e38bb*/
    while ( 1 ) /*0x1005e38e8*/
    {
      v25 = (__int64)&v49; /*0x1005e38e8*/
      std::sync::mpmc::Receiver$LT$T$GT$::try_recv::h8686a3280d9d4305(__src, &v49); /*0x1005e38eb*/
      if ( *(_QWORD *)&__src[0] != 0x8000000000000000LL ) /*0x1005e3902*/
      {
        v42 = *(_QWORD *)&__src[1]; /*0x1005e3a62*/
        v41 = __src[0]; /*0x1005e3a7c*/
        goto LABEL_28; /*0x1005e3a81*/
      }
      v25 = (__int64)v52; /*0x1005e390b*/
      std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::h708e6f94b81a1c6a(__src, v52, 0, 50000000); /*0x1005e3915*/
      if ( *(_QWORD *)&__src[0] != 0x8000000000000001LL ) /*0x1005e3922*/
      {
        v44 = __src[3]; /*0x1005e3a9e*/
        v43 = __src[2]; /*0x1005e3ab8*/
        v42 = *((_QWORD *)&__src[1] + 1); /*0x1005e3ac5*/
        v33 = *(_QWORD *)&__src[0]; /*0x1005e3ad7*/
        v41 = *(_OWORD *)((char *)__src + 8); /*0x1005e3ae7*/
        goto LABEL_29; /*0x1005e3aec*/
      }
      if ( BYTE8(__src[0]) ) /*0x1005e3930*/
        break; /*0x1005e3930*/
      v29 = std::time::Instant::now::hda76af2c3a449055(__src, v52, v26, v27, v28); /*0x1005e3936*/
      if ( v29 == v24 ) /*0x1005e393e*/
      {
        if ( v30 >= v38 ) /*0x1005e3944*/
        {
LABEL_20:
          codexmate_lib::platform::voice_trigger_macos::cancel_trigger_capture::hf72118e3af23e107(); /*0x1005e3946*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v52); /*0x1005e394b*/
          v31 = 54; /*0x1005e3950*/
          v25 = 1; /*0x1005e395b*/
          v32 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1005e3960*/
          if ( v32 ) /*0x1005e3968*/
          {
            *(_QWORD *)((char *)v32 + 46) = 0x8280E38D80E3AE94LL; /*0x1005e3978*/
            v32[5] = 0xAE94E9918FE5A6A7LL; /*0x1005e3986*/
            v32[4] = 0xE8A585E595BDE58CLL; /*0x1005e3994*/
            v32[3] = 0x80E3BB87E5B982E7LL; /*0x1005e39a2*/
            v32[2] = 0xB096E68D87E9B7AFLL; /*0x1005e39b0*/
            v32[1] = 0xE88CBCEFB697E685LL; /*0x1005e39be*/
            *v32 = 0xB6E8A585E595BDE5LL; /*0x1005e39cc*/
            *(_QWORD *)&v41 = 54; /*0x1005e39cf*/
            *((_QWORD *)&v41 + 1) = v32; /*0x1005e39d8*/
            v42 = 54; /*0x1005e39dd*/
            goto LABEL_28; /*0x1005e39e6*/
          }
LABEL_38:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v31); /*0x1005e3c8a*/
        }
      }
      else if ( v29 >= v24 ) /*0x1005e38e3*/
      {
        goto LABEL_20; /*0x1005e38e3*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v52); /*0x1005e3aee*/
    v31 = 66; /*0x1005e3af3*/
    v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1); /*0x1005e3b03*/
    if ( !v34 ) /*0x1005e3b0b*/
      goto LABEL_38; /*0x1005e3b0b*/
    v35 = v34; /*0x1005e3b11*/
    v25 = (__int64)&unk_101601260; /*0x1005e3b14*/
    memcpy(v34, &unk_101601260, 0x42u); /*0x1005e3b23*/
    *(_QWORD *)&v41 = 66; /*0x1005e3b28*/
    *((_QWORD *)&v41 + 1) = v35; /*0x1005e3b31*/
    v42 = 66; /*0x1005e3b36*/
LABEL_28:
    v33 = 0x8000000000000000LL; /*0x1005e3b3f*/
LABEL_29:
    v40 = v33; /*0x1005e3b49*/
    _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h84582f2f5277463d(&v49); /*0x1005e3b56*/
    _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0c601e312c665b97(v52); /*0x1005e3b63*/
    *(_QWORD *)&__src[0] = 3; /*0x1005e3b68*/
    codexmate_lib::platform::voice_trigger_macos::set_active_capture::ha1a95636a1b3a628((__int64 *)__src, v25); /*0x1005e3b7c*/
    v18 = a1; /*0x1005e3b89*/
    *(_OWORD *)(a1 + 48) = v44; /*0x1005e3b97*/
    *(_OWORD *)(a1 + 32) = v43; /*0x1005e3ba9*/
    *(_QWORD *)(a1 + 24) = v42; /*0x1005e3bb2*/
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v41 + 1); /*0x1005e3bbb*/
    v36 = v40; /*0x1005e3bbf*/
    *(_QWORD *)(a1 + 8) = v41; /*0x1005e3bc9*/
    *(_QWORD *)a1 = v36; /*0x1005e3bcd*/
    _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h439f5519253259f4(v47); /*0x1005e3bd8*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1005e37c4*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(67, 1); /*0x1005e37d3*/
    if ( !v16 ) /*0x1005e37db*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 67); /*0x1005e3c43*/
    v17 = v16; /*0x1005e37e1*/
    memcpy(v16, &unk_1016011CB, 0x43u); /*0x1005e37f3*/
    v18 = a1; /*0x1005e37f8*/
    *(_QWORD *)(a1 + 8) = 67; /*0x1005e37fd*/
    *(_QWORD *)(a1 + 16) = v17; /*0x1005e3805*/
    *(_QWORD *)(a1 + 24) = 67; /*0x1005e3809*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1005e381b*/
  }
  return v18; /*0x1005e3be0*/
}