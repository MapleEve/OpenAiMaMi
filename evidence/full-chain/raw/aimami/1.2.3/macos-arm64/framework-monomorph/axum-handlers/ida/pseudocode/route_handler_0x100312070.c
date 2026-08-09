/* addr=0x100312070 cleanname=route_handler group=axum-handlers
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=415 brace_balanced=True truncation_markers=[]
 */
_QWORD *__fastcall _$LT$F$u20$as$u20$axum..handler..Handler$LT$$LP$M$C$T1$C$T2$C$T3$C$T4$RP$$C$S$GT$$GT$::call::_$u7b$$u7b$closure$u7d$$u7d$::h9ff4cf5e7692b84e(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v7; // r14
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 (__fastcall **v11)(); // rax
  const void *v12; // r12
  void *v13; // r12
  __int64 (__fastcall **v14)(); // rax
  __int64 v15; // rsi
  __int64 (__fastcall **v16)(); // rax
  _BYTE *v17; // rdi
  _BYTE *v18; // r12
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // al
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 (__fastcall **v29)(); // rax
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  void *v34; // rax
  __int8 v35; // r13
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // r8
  bool v49; // zf
  bool v50; // cc
  __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD __src[471]; // [rsp+8h] [rbp-20E8h] BYREF
  _BYTE __dst[3768]; // [rsp+EC0h] [rbp-1230h] BYREF
  _BYTE v56[112]; // [rsp+1D78h] [rbp-378h] BYREF
  _BYTE v57[96]; // [rsp+1DE8h] [rbp-308h] BYREF
  _BYTE v58[96]; // [rsp+1E48h] [rbp-2A8h] BYREF
  _BYTE v59[88]; // [rsp+1EA8h] [rbp-248h] BYREF
  _OWORD v60[8]; // [rsp+1F00h] [rbp-1F0h] BYREF
  _QWORD v61[14]; // [rsp+1F80h] [rbp-170h] BYREF
  __int128 v62; // [rsp+1FF0h] [rbp-100h]
  __int64 v63; // [rsp+2000h] [rbp-F0h]
  __int64 v64; // [rsp+2008h] [rbp-E8h]
  __int64 v65; // [rsp+2010h] [rbp-E0h]
  __int64 v66; // [rsp+2018h] [rbp-D8h]
  _QWORD v67[3]; // [rsp+2020h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+2038h] [rbp-B8h]
  __int64 v69; // [rsp+2040h] [rbp-B0h]
  __int64 v70; // [rsp+2048h] [rbp-A8h]
  __int64 v71; // [rsp+2050h] [rbp-A0h]
  __int64 v72; // [rsp+2058h] [rbp-98h]
  __int64 v73; // [rsp+2060h] [rbp-90h]
  __m256i v74; // [rsp+2068h] [rbp-88h]
  _BYTE v75[31]; // [rsp+2088h] [rbp-68h]
  _QWORD *v76; // [rsp+20A8h] [rbp-48h]
  __int128 v77; // [rsp+20B0h] [rbp-40h]

  *(_QWORD *)&__dst[520] = 0;
  __src[24] = 0;
  v7 = a1;
  switch ( *(_BYTE *)(a2 + 672) )
  {
    case 0:
      *(_WORD *)(a2 + 675) = 0;
      *(_BYTE *)(a2 + 677) = 0;
      *(_WORD *)(a2 + 678) = 1;
      *(_BYTE *)(a2 + 674) = 1;
      memcpy((void *)(a2 + 288), (const void *)a2, 0xE0u);
      *(_BYTE *)(a2 + 673) = 1;
      *(_OWORD *)(a2 + 512) = *(_OWORD *)(a2 + 224);
      v8 = a2 + 240;
      *(_QWORD *)(a2 + 528) = a2 + 240;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2 + 288, a2);
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
      if ( !v9 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
      v10 = v9;
      *(_QWORD *)v9 = v8;
      *(_BYTE *)(v9 + 8) = 0;
      *(_QWORD *)(a2 + 680) = v9;
      v11 = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_76;
      *(_QWORD *)(a2 + 688) = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_76;
      v7 = a1;
      goto LABEL_9;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195FA90);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195FA90);
    case 3:
      v10 = *(_QWORD *)(a2 + 680);
      v11 = *(__int64 (__fastcall ***)())(a2 + 688);
LABEL_9:
      v17 = __dst;
      ((void (__fastcall *)(_BYTE *, __int64, void *))v11[3])(__dst, v10, a3);
      if ( !*(_QWORD *)__dst )
      {
        *v7 = 3;
        v23 = 3;
        goto LABEL_62;
      }
      v73 = *(_QWORD *)&__dst[40];
      v72 = *(_QWORD *)&__dst[32];
      v71 = *(_QWORD *)&__dst[24];
      v70 = *(_QWORD *)&__dst[16];
      v69 = *(_QWORD *)&__dst[8];
      v68 = *(_QWORD *)__dst;
      v18 = *(_BYTE **)(a2 + 680);
      v19 = *(_QWORD *)(a2 + 688);
      if ( *(_QWORD *)v19 )
      {
        v17 = *(_BYTE **)(a2 + 680);
        (*(void (__fastcall **)(_BYTE *))v19)(v17);
      }
      v20 = *(_QWORD *)(v19 + 8);
      if ( v20 )
      {
        v17 = v18;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
      }
      *(_BYTE *)(a2 + 677) = 1;
      v21 = v69;
      *(_QWORD *)(a2 + 536) = v68;
      *(_QWORD *)(a2 + 544) = v21;
      *(_QWORD *)(a2 + 552) = v70;
      *(_QWORD *)(a2 + 560) = v71;
      *(_QWORD *)(a2 + 568) = v72;
      *(_QWORD *)(a2 + 576) = v73;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v20);
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
      if ( !v22 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
      v15 = v22;
      *(_QWORD *)v22 = a2 + 288;
      *(_BYTE *)(v22 + 8) = 0;
      *(_QWORD *)(a2 + 680) = v22;
      v16 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_518;
      *(_QWORD *)(a2 + 688) = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_518;
LABEL_16:
      ((void (__fastcall *)(_BYTE *, __int64, void *))v16[3])(__dst, v15, a3);
      if ( __dst[0] != 3 )
      {
        qmemcpy(v59, __dst, sizeof(v59));
        v24 = *(_QWORD *)(a2 + 680);
        v25 = *(_QWORD *)(a2 + 688);
        if ( *(_QWORD *)v25 )
          (*(void (__fastcall **)(_QWORD))v25)(*(_QWORD *)(a2 + 680));
        v26 = *(_QWORD *)(v25 + 8);
        if ( v26 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v26, *(_QWORD *)(v25 + 16));
        *(_BYTE *)(a2 + 676) = 1;
        qmemcpy((void *)(a2 + 584), v59, 0x58u);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2 + 672, v60);
        v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
        if ( !v27 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
        v28 = v27;
        *(_QWORD *)v27 = a2 + 288;
        *(_BYTE *)(v27 + 8) = 0;
        *(_QWORD *)(a2 + 680) = v27;
        v29 = &off_101960418;
        *(_QWORD *)(a2 + 688) = &off_101960418;
LABEL_25:
        ((void (__fastcall *)(_BYTE *, __int64, void *))v29[3])(__dst, v28, a3);
        if ( *(_DWORD *)__dst == 3 )
        {
          *v7 = 3;
          v23 = 5;
          goto LABEL_62;
        }
        qmemcpy(v58, __dst, sizeof(v58));
        v30 = *(_QWORD *)(a2 + 680);
        v31 = *(_QWORD *)(a2 + 688);
        if ( *(_QWORD *)v31 )
          (*(void (__fastcall **)(_QWORD))v31)(*(_QWORD *)(a2 + 680));
        v32 = *(_QWORD *)(v31 + 8);
        if ( v32 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16));
        *(_BYTE *)(a2 + 675) = 1;
        qmemcpy((void *)(a2 + 696), v58, 0x60u);
        *(_BYTE *)(a2 + 674) = 0;
        memcpy(__dst, (const void *)(a2 + 288), 0xE0u);
        *(_BYTE *)(a2 + 673) = 0;
        v33 = *(_QWORD *)(a2 + 528);
        *(_OWORD *)&__dst[224] = *(_OWORD *)(a2 + 512);
        *(_QWORD *)&__dst[240] = v33;
        __dst[504] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2 + 288);
        v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 8);
        if ( !v34 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 512);
        v13 = v34;
        memcpy(v34, __dst, 0x200u);
        *(_QWORD *)(a2 + 680) = v13;
        v14 = &off_10195FF70;
        *(_QWORD *)(a2 + 688) = &off_10195FF70;
LABEL_33:
        ((void (__fastcall *)(_BYTE *, void *, void *))v14[3])(__dst, v13, a3);
        v35 = __dst[0];
        if ( __dst[0] == 7 )
        {
          *v7 = 3;
          v23 = 6;
          goto LABEL_62;
        }
        v76 = v7;
        *(_QWORD *)&v75[23] = *(_QWORD *)&__dst[24];
        *(_OWORD *)&v75[8] = *(_OWORD *)&__dst[9];
        *(_QWORD *)v75 = *(_QWORD *)&__dst[1];
        v36 = *(_QWORD *)(a2 + 680);
        v37 = *(_QWORD *)(a2 + 688);
        if ( *(_QWORD *)v37 )
          (*(void (__fastcall **)(_QWORD))v37)(*(_QWORD *)(a2 + 680));
        v38 = *(_QWORD *)(v37 + 8);
        if ( v38 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v38, *(_QWORD *)(v37 + 16));
        if ( v35 == 6 )
        {
          v67[2] = *(_QWORD *)&v75[23];
          v67[1] = *(_QWORD *)&v75[15];
          v67[0] = *(_QWORD *)&v75[7];
          _$LT$axum..extract..rejection..JsonRejection$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h593bbda64c8007f9(
            v60,
            v67);
          *(_BYTE *)(a2 + 679) = 0;
          core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a2 + 696);
          *(_BYTE *)(a2 + 675) = 0;
          core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(a2 + 584);
          *(_BYTE *)(a2 + 676) = 0;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 536);
          *(_BYTE *)(a2 + 677) = 0;
          if ( *(_BYTE *)(a2 + 673) )
          {
            v39 = *(_QWORD *)(a2 + 512);
            v40 = *(_QWORD *)(a2 + 520);
            if ( *(_QWORD *)v40 )
              (*(void (__fastcall **)(_QWORD))v40)(*(_QWORD *)(a2 + 512));
            v41 = *(_QWORD *)(v40 + 8);
            if ( v41 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v41, *(_QWORD *)(v40 + 16));
          }
          *(_BYTE *)(a2 + 673) = 0;
          if ( *(_BYTE *)(a2 + 674) )
            core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a2 + 288);
          *(_BYTE *)(a2 + 674) = 0;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
          v7 = v76;
          goto LABEL_61;
        }
        v12 = (const void *)(a2 + 680);
        v74.i64[3] = *(_QWORD *)&v75[23];
        *(__int128 *)((char *)v74.i128 + 9) = *(_OWORD *)&v75[8];
        *(__int64 *)((char *)v74.i64 + 1) = *(_QWORD *)v75;
        v74.i8[0] = v35;
        *(_BYTE *)(a2 + 679) = 0;
        *(_DWORD *)(a2 + 675) = 0;
        *(_QWORD *)&__dst[256] = *(_QWORD *)(a2 + 576);
        *(_QWORD *)&__dst[248] = *(_QWORD *)(a2 + 568);
        *(_QWORD *)&__dst[240] = *(_QWORD *)(a2 + 560);
        *(_QWORD *)&__dst[232] = *(_QWORD *)(a2 + 552);
        v42 = *(_QWORD *)(a2 + 536);
        *(_QWORD *)&__dst[224] = *(_QWORD *)(a2 + 544);
        *(_QWORD *)&__dst[216] = v42;
        qmemcpy(&__dst[96], (const void *)(a2 + 584), 0x58u);
        qmemcpy(__dst, (const void *)(a2 + 696), 0x60u);
        *(__m256i *)&__dst[184] = v74;
        memcpy(__src, __dst, sizeof(__src));
        memcpy((void *)(a2 + 680), __src, 0xEB8u);
        *(_QWORD *)&v77 = a2 + 4448;
        *(_BYTE *)(a2 + 4448) = 0;
        v7 = v76;
LABEL_50:
        *(_QWORD *)(a2 + 984) = *(_QWORD *)(a2 + 936);
        *(_QWORD *)(a2 + 976) = *(_QWORD *)(a2 + 928);
        *(_QWORD *)(a2 + 968) = *(_QWORD *)(a2 + 920);
        *(_QWORD *)(a2 + 960) = *(_QWORD *)(a2 + 912);
        v43 = *(_QWORD *)(a2 + 896);
        *(_QWORD *)(a2 + 952) = *(_QWORD *)(a2 + 904);
        *(_QWORD *)(a2 + 944) = v43;
        qmemcpy((void *)(a2 + 992), (const void *)(a2 + 776), 0x58u);
        qmemcpy(v57, v12, sizeof(v57));
        v66 = *(_QWORD *)(a2 + 888);
        v65 = *(_QWORD *)(a2 + 880);
        v44 = *(_QWORD *)(a2 + 864);
        v64 = *(_QWORD *)(a2 + 872);
        v63 = v44;
        v45 = *(unsigned __int16 *)(a2 + 1072);
        if ( v45 == 0xFFFF )
        {
          v51 = 0;
        }
        else
        {
          v46 = v45 + 1;
          v47 = *(_QWORD *)(a2 + 1048);
          v48 = *(_QWORD *)(a2 + 1056);
          v49 = v48 == v46;
          v50 = v48 <= v46;
          a5 = v48 - v46;
          if ( v50 )
          {
            if ( !v49 )
LABEL_53:
              core::str::slice_error_fail::h480e51fbd8b15eba(
                *(_QWORD *)(a2 + 1048),
                *(_QWORD *)(a2 + 1056),
                v46,
                *(_QWORD *)(a2 + 1056),
                &off_10195E9A8);
          }
          else if ( *(char *)(v47 + v46) < -64 )
          {
            goto LABEL_53;
          }
          v51 = v46 + v47;
        }
        qmemcpy(__dst, v12, 0x60u);
        *(_QWORD *)&__dst[120] = *(_QWORD *)(a2 + 888);
        *(_QWORD *)&__dst[112] = *(_QWORD *)(a2 + 880);
        v52 = *(_QWORD *)(a2 + 864);
        *(_QWORD *)&__dst[104] = *(_QWORD *)(a2 + 872);
        *(_QWORD *)&__dst[96] = v52;
        qmemcpy((void *)(a2 + 1080), __dst, 0x80u);
        *(_QWORD *)(a2 + 1208) = a2 + 944;
        *(_QWORD *)(a2 + 1216) = &unk_1015DDCF9;
        *(_QWORD *)(a2 + 1224) = 14;
        *(_QWORD *)(a2 + 1232) = v51;
        *(_QWORD *)(a2 + 1240) = a5;
        *(_WORD *)(a2 + 1776) = 1;
LABEL_58:
        codexmate_lib::core::relay::proxy_server::forward_codex_router_responses_internal::_$u7b$$u7b$closure$u7d$$u7d$::h05dc96f9ea7a121e(
          v61,
          a2 + 1080,
          a3);
        if ( LODWORD(v61[0]) == 3 )
        {
          *(_BYTE *)v77 = 3;
          *v7 = 3;
          v23 = 7;
          goto LABEL_62;
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_codex_router_responses_internal..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6c2dd8be93cc1f4f(
          a2 + 1080,
          a2 + 1080);
        core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(a2 + 992);
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 944);
        *(_BYTE *)v77 = 1;
        qmemcpy(v56, v61, sizeof(v56));
        v77 = v62;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_codex_router_responses..$u7b$$u7b$closure$u7d$$u7d$$GT$::h674b985303255f5a((__int64)v12);
        qmemcpy(v60, v56, 0x70u);
        v60[7] = v77;
        *(_BYTE *)(a2 + 679) = 0;
        *(_BYTE *)(a2 + 677) = 0;
        *(_DWORD *)(a2 + 673) = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
LABEL_61:
        qmemcpy(v7, v60, 0x80u);
        v23 = 1;
        goto LABEL_62;
      }
      *v7 = 3;
      v23 = 4;
LABEL_62:
      *(_BYTE *)(a2 + 672) = v23;
      return v7;
    case 4:
      v15 = *(_QWORD *)(a2 + 680);
      v16 = *(__int64 (__fastcall ***)())(a2 + 688);
      goto LABEL_16;
    case 5:
      v28 = *(_QWORD *)(a2 + 680);
      v29 = *(__int64 (__fastcall ***)())(a2 + 688);
      goto LABEL_25;
    case 6:
      v13 = *(void **)(a2 + 680);
      v14 = *(__int64 (__fastcall ***)())(a2 + 688);
      goto LABEL_33;
    case 7:
      *(_QWORD *)&v77 = a2 + 4448;
      v12 = (const void *)(a2 + 680);
      switch ( *(_BYTE *)(a2 + 4448) )
      {
        case 0:
          goto LABEL_50;
        case 1:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D870);
        case 2:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D870);
        case 3:
          goto LABEL_58;
      }
  }
}
