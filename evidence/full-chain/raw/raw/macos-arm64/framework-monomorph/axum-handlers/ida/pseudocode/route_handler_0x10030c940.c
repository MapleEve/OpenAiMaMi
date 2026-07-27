/* addr=0x10030c940 cleanname=route_handler group=axum-handlers
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=301 brace_balanced=True truncation_markers=[]
 */
_QWORD *__fastcall _$LT$F$u20$as$u20$axum..handler..Handler$LT$$LP$M$C$T1$C$T2$C$T3$RP$$C$S$GT$$GT$::call::_$u7b$$u7b$closure$u7d$$u7d$::h35314ecd2ef17efd(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128 a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall **v9)(); // rax
  _BYTE *v10; // r12
  __int64 v11; // r14
  _BYTE *v12; // r8
  const void *v13; // r12
  void *v14; // r12
  __int64 (__fastcall **v15)(); // rax
  _OWORD *v16; // rdi
  _OWORD *v17; // r12
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 (__fastcall **v23)(); // rax
  _QWORD *result; // rax
  char v25; // cl
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rsi
  void *v29; // rax
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // rsi
  _BYTE __src[656]; // [rsp+0h] [rbp-720h] BYREF
  _BYTE v40[112]; // [rsp+290h] [rbp-490h] BYREF
  _BYTE v41[96]; // [rsp+300h] [rbp-420h] BYREF
  _OWORD v42[8]; // [rsp+360h] [rbp-3C0h] BYREF
  _OWORD __dst[41]; // [rsp+3E0h] [rbp-340h] BYREF
  __int128 v44; // [rsp+670h] [rbp-B0h]
  __int128 v45; // [rsp+680h] [rbp-A0h]
  __int128 v46; // [rsp+690h] [rbp-90h]
  __int128 v47; // [rsp+6A0h] [rbp-80h]
  _BYTE v48[24]; // [rsp+6B0h] [rbp-70h] BYREF
  __int128 v49; // [rsp+6C8h] [rbp-58h]
  __int128 v50; // [rsp+6D8h] [rbp-48h]
  __int64 v51; // [rsp+6E8h] [rbp-38h]
  _QWORD *v52; // [rsp+6F0h] [rbp-30h]

  v52 = a1;
  switch ( *(_BYTE *)(a2 + 584) )
  {
    case 0:
      *(_DWORD *)(a2 + 587) = 0x10000;
      *(_BYTE *)(a2 + 586) = 1;
      memcpy((void *)(a2 + 288), (const void *)a2, 0xE0u);
      *(_BYTE *)(a2 + 585) = 1;
      a4 = *(__m128 *)(a2 + 224);
      *(__m128 *)(a2 + 512) = a4;
      v6 = a2 + 240;
      *(_QWORD *)(a2 + 528) = a2 + 240;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2 + 288, a2);
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
      if ( !v7 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
      v8 = v7;
      *(_QWORD *)v7 = v6;
      *(_BYTE *)(v7 + 8) = 0;
      *(_QWORD *)(a2 + 592) = v7;
      v9 = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_76;
      *(_QWORD *)(a2 + 600) = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_76;
      goto LABEL_8;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195FA90);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195FA90);
    case 3:
      v8 = *(_QWORD *)(a2 + 592);
      v9 = *(__int64 (__fastcall ***)())(a2 + 600);
LABEL_8:
      v16 = __dst;
      ((void (__fastcall *)(_OWORD *, __int64, __int64))v9[3])(__dst, v8, a3);
      if ( !*(_QWORD *)&__dst[0] )
      {
        result = v52;
        *v52 = 3;
        v25 = 3;
        goto LABEL_46;
      }
      v47 = __dst[2];
      v46 = __dst[1];
      v45 = __dst[0];
      v17 = *(_OWORD **)(a2 + 592);
      v18 = *(_QWORD *)(a2 + 600);
      if ( *(_QWORD *)v18 )
      {
        v16 = *(_OWORD **)(a2 + 592);
        (*(void (__fastcall **)(_OWORD *))v18)(v16);
      }
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
      {
        v16 = v17;
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16));
      }
      *(_BYTE *)(a2 + 588) = 1;
      v20 = *((_QWORD *)&v45 + 1);
      *(_QWORD *)(a2 + 536) = v45;
      *(_QWORD *)(a2 + 544) = v20;
      *(_OWORD *)(a2 + 552) = v46;
      *(_OWORD *)(a2 + 568) = v47;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v19);
      v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
      if ( !v21 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
      v22 = v21;
      *(_QWORD *)v21 = a2 + 288;
      *(_BYTE *)(v21 + 8) = 0;
      *(_QWORD *)(a2 + 592) = v21;
      v23 = &off_101960418;
      *(_QWORD *)(a2 + 600) = &off_101960418;
LABEL_16:
      ((void (__fastcall *)(_OWORD *, __int64, __int64, double))v23[3])(__dst, v22, a3, *(double *)a4.i64);
      if ( LODWORD(__dst[0]) == 3 )
      {
        result = v52;
        *v52 = 3;
        v25 = 4;
        goto LABEL_46;
      }
      qmemcpy(v41, __dst, sizeof(v41));
      v26 = *(_QWORD *)(a2 + 592);
      v27 = *(_QWORD *)(a2 + 600);
      if ( *(_QWORD *)v27 )
        (*(void (__fastcall **)(_QWORD))v27)(*(_QWORD *)(a2 + 592));
      v28 = *(_QWORD *)(v27 + 8);
      if ( v28 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16));
      *(_BYTE *)(a2 + 587) = 1;
      qmemcpy((void *)(a2 + 608), v41, 0x60u);
      *(_BYTE *)(a2 + 586) = 0;
      memcpy(__dst, (const void *)(a2 + 288), 0xE0u);
      *(_BYTE *)(a2 + 585) = 0;
      __dst[14] = *(_OWORD *)(a2 + 512);
      LOBYTE(__dst[24]) = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2 + 288);
      v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(392, 8);
      if ( !v29 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 392);
      v14 = v29;
      memcpy(v29, __dst, 0x188u);
      *(_QWORD *)(a2 + 592) = v14;
      v15 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_514;
      *(_QWORD *)(a2 + 600) = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_514;
LABEL_24:
      ((void (__fastcall *)(_OWORD *, void *, __int64))v15[3])(__dst, v14, a3);
      if ( LODWORD(__dst[0]) == 1 )
      {
        result = v52;
        *v52 = 3;
        v25 = 5;
        goto LABEL_46;
      }
      v51 = *((_QWORD *)&__dst[0] + 1);
      *(_OWORD *)v48 = __dst[1];
      *(_QWORD *)&v48[16] = *(_QWORD *)&__dst[2];
      v30 = *(_QWORD *)(a2 + 592);
      v31 = *(_QWORD *)(a2 + 600);
      if ( *(_QWORD *)v31 )
        (*(void (__fastcall **)(_QWORD))v31)(*(_QWORD *)(a2 + 592));
      v32 = *(_QWORD *)(v31 + 8);
      if ( v32 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16));
      if ( v51 )
      {
        v13 = (const void *)(a2 + 592);
        v50 = *(_OWORD *)&v48[8];
        *((_QWORD *)&v49 + 1) = *(_QWORD *)v48;
        *(_QWORD *)&v49 = v51;
        *(_DWORD *)(a2 + 587) = 0;
        __dst[8] = *(_OWORD *)(a2 + 568);
        __dst[7] = *(_OWORD *)(a2 + 552);
        v33 = *(_QWORD *)(a2 + 536);
        *((_QWORD *)&__dst[6] + 1) = *(_QWORD *)(a2 + 544);
        *(_QWORD *)&__dst[6] = v33;
        qmemcpy(__dst, (const void *)(a2 + 608), 0x60u);
        __dst[10] = v50;
        __dst[9] = v49;
        memcpy(__src, __dst, sizeof(__src));
        memcpy((void *)(a2 + 592), __src, 0x290u);
        v12 = (_BYTE *)(a2 + 1248);
        *(_BYTE *)(a2 + 1248) = 0;
LABEL_32:
        *(_QWORD *)(a2 + 808) = *(_QWORD *)(a2 + 728);
        *(_QWORD *)(a2 + 800) = *(_QWORD *)(a2 + 720);
        *(_QWORD *)(a2 + 792) = *(_QWORD *)(a2 + 712);
        *(_QWORD *)(a2 + 784) = *(_QWORD *)(a2 + 704);
        v34 = *(_QWORD *)(a2 + 688);
        *(_QWORD *)(a2 + 776) = *(_QWORD *)(a2 + 696);
        *(_QWORD *)(a2 + 768) = v34;
        v11 = (__int64)v13;
        qmemcpy((void *)(a2 + 816), v13, 0x60u);
        *(_QWORD *)(a2 + 912) = a2 + 768;
        v35 = *(_QWORD *)(a2 + 744);
        *(_QWORD *)(a2 + 920) = *(_QWORD *)(a2 + 736);
        *(_QWORD *)(a2 + 928) = v35;
        *(_QWORD *)(a2 + 936) = *(_QWORD *)(a2 + 752);
        *(_QWORD *)(a2 + 944) = *(_QWORD *)(a2 + 760);
        *(_WORD *)(a2 + 1240) = 1;
        v10 = v12;
LABEL_34:
        codexmate_lib::core::relay::proxy_server::forward_codex_router_images_internal::_$u7b$$u7b$closure$u7d$$u7d$::hed832e095bd6e40d(
          __dst,
          a2 + 816,
          a3);
        if ( LODWORD(__dst[0]) == 3 )
        {
          *v10 = 3;
          result = v52;
          *v52 = 3;
          v25 = 6;
          goto LABEL_46;
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_codex_router_images_internal..$u7b$$u7b$closure$u7d$$u7d$$GT$::hd17bdbdc1a956a65(
          a2 + 816,
          a2 + 816);
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 768);
        *v10 = 1;
        qmemcpy(v40, __dst, sizeof(v40));
        v44 = __dst[7];
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_codex_router_image_edits..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf7d1276cd0158a10(v11);
        qmemcpy(v42, v40, 0x70u);
        v42[7] = v44;
        *(_BYTE *)(a2 + 590) = 0;
        *(_DWORD *)(a2 + 585) = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
      }
      else
      {
        _$LT$axum_core..extract..rejection..BytesRejection$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h9751e589770d91aa(
          v42,
          v48);
        *(_BYTE *)(a2 + 590) = 0;
        core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a2 + 608);
        *(_BYTE *)(a2 + 587) = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 536);
        *(_BYTE *)(a2 + 588) = 0;
        if ( *(_BYTE *)(a2 + 585) )
        {
          v36 = *(_QWORD *)(a2 + 512);
          v37 = *(_QWORD *)(a2 + 520);
          if ( *(_QWORD *)v37 )
            (*(void (__fastcall **)(_QWORD))v37)(*(_QWORD *)(a2 + 512));
          v38 = *(_QWORD *)(v37 + 8);
          if ( v38 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v38, *(_QWORD *)(v37 + 16));
        }
        *(_BYTE *)(a2 + 585) = 0;
        if ( *(_BYTE *)(a2 + 586) )
          core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a2 + 288);
        *(_BYTE *)(a2 + 586) = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
      }
      result = v52;
      qmemcpy(v52, v42, 0x80u);
      v25 = 1;
LABEL_46:
      *(_BYTE *)(a2 + 584) = v25;
      return result;
    case 4:
      v22 = *(_QWORD *)(a2 + 592);
      v23 = *(__int64 (__fastcall ***)())(a2 + 600);
      goto LABEL_16;
    case 5:
      v14 = *(void **)(a2 + 592);
      v15 = *(__int64 (__fastcall ***)())(a2 + 600);
      goto LABEL_24;
    case 6:
      v10 = (_BYTE *)(a2 + 1248);
      v11 = a2 + 592;
      switch ( *(_BYTE *)(a2 + 1248) )
      {
        case 0:
          v12 = (_BYTE *)(a2 + 1248);
          v13 = (const void *)(a2 + 592);
          goto LABEL_32;
        case 1:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D798);
        case 2:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D798);
        case 3:
          goto LABEL_34;
      }
  }
}
