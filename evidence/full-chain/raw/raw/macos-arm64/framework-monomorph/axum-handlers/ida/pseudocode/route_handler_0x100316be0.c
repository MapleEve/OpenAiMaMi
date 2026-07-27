/* addr=0x100316be0 cleanname=route_handler group=axum-handlers
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=586 brace_balanced=True truncation_markers=[]
 */
_QWORD *__fastcall _$LT$F$u20$as$u20$axum..handler..Handler$LT$$LP$M$C$T1$C$T2$C$T3$C$T4$C$T5$RP$$C$S$GT$$GT$::call::_$u7b$$u7b$closure$u7d$$u7d$::hcb56ab21297a9cfd(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128 a4)
{
  __int64 v4; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall **v10)(); // rax
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rsi
  __int64 (__fastcall **v14)(); // rax
  __int64 v15; // rsi
  __int64 (__fastcall **v16)(); // rax
  _OWORD *v17; // rdi
  __int64 v18; // r14
  _OWORD *v19; // r12
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 (__fastcall **v25)(); // rax
  _OWORD *v26; // rdi
  __int64 v27; // r13
  char v28; // al
  _OWORD *v29; // r12
  __int64 v30; // r15
  __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // r12
  __int64 (__fastcall **v35)(); // rax
  _QWORD *v36; // r14
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rax
  _QWORD *v41; // r14
  __int64 v42; // r12
  __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rax
  void *v46; // rax
  __int8 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // r15
  __int64 v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r13
  char v60; // al
  _QWORD *v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  unsigned __int64 v65; // rax
  bool v66; // zf
  bool v67; // cc
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // r14
  __int128 v73; // xmm0
  _BYTE __src[544]; // [rsp+0h] [rbp-850h] BYREF
  _BYTE v76[104]; // [rsp+220h] [rbp-630h] BYREF
  _BYTE v77[104]; // [rsp+288h] [rbp-5C8h] BYREF
  _BYTE v78[96]; // [rsp+2F0h] [rbp-560h] BYREF
  _BYTE v79[88]; // [rsp+350h] [rbp-500h] BYREF
  _QWORD v80[16]; // [rsp+3A8h] [rbp-4A8h] BYREF
  _OWORD v81[8]; // [rsp+428h] [rbp-428h] BYREF
  _OWORD __dst[34]; // [rsp+4A8h] [rbp-3A8h] BYREF
  _QWORD v83[2]; // [rsp+6C8h] [rbp-188h] BYREF
  __int128 v84; // [rsp+6D8h] [rbp-178h]
  __int128 v85; // [rsp+6E8h] [rbp-168h]
  __int128 v86; // [rsp+6F8h] [rbp-158h]
  _QWORD v87[3]; // [rsp+708h] [rbp-148h] BYREF
  _QWORD v88[3]; // [rsp+720h] [rbp-130h] BYREF
  __int128 v89; // [rsp+738h] [rbp-118h]
  __int128 v90; // [rsp+748h] [rbp-108h]
  __int128 v91; // [rsp+758h] [rbp-F8h]
  __int128 v92; // [rsp+768h] [rbp-E8h]
  __int128 v93; // [rsp+778h] [rbp-D8h]
  __m256i v94; // [rsp+788h] [rbp-C8h]
  __int64 v95; // [rsp+7A8h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+7B0h] [rbp-A0h]
  __int64 v97; // [rsp+7B8h] [rbp-98h]
  __int64 v98; // [rsp+7C0h] [rbp-90h]
  _BYTE v99[31]; // [rsp+7C8h] [rbp-88h]
  __int64 v100; // [rsp+7E8h] [rbp-68h]
  __int128 v101; // [rsp+7F0h] [rbp-60h]
  __int128 v102; // [rsp+800h] [rbp-50h]
  char *v103; // [rsp+818h] [rbp-38h]
  _QWORD *v104; // [rsp+820h] [rbp-30h]

  v4 = a3;
  switch ( *(_BYTE *)(a2 + 696) )
  {
    case 0:
      *(_DWORD *)(a2 + 699) = 0;
      *(_WORD *)(a2 + 703) = 1;
      *(_BYTE *)(a2 + 698) = 1;
      memcpy((void *)(a2 + 288), (const void *)a2, 0xE0u);
      *(_BYTE *)(a2 + 697) = 1;
      a4 = *(__m128 *)(a2 + 224);
      *(__m128 *)(a2 + 512) = a4;
      v7 = a2 + 240;
      *(_QWORD *)(a2 + 528) = a2 + 240;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2 + 288, a2);
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
      if ( !v8 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
      v9 = v8;
      *(_QWORD *)v8 = v7;
      *(_BYTE *)(v8 + 8) = 0;
      *(_QWORD *)(a2 + 712) = v8;
      v10 = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_76;
      *(_QWORD *)(a2 + 720) = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_76;
      goto LABEL_9;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195FA90);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195FA90);
    case 3:
      v9 = *(_QWORD *)(a2 + 712);
      v10 = *(__int64 (__fastcall ***)())(a2 + 720);
LABEL_9:
      v17 = __dst;
      ((void (__fastcall *)(_OWORD *, __int64, __int64))v10[3])(__dst, v9, v4);
      if ( !*(_QWORD *)&__dst[0] )
      {
        *a1 = 3;
        v28 = 3;
        goto LABEL_94;
      }
      v18 = v4;
      v93 = __dst[2];
      v92 = __dst[1];
      v91 = __dst[0];
      v19 = *(_OWORD **)(a2 + 712);
      v20 = *(_QWORD *)(a2 + 720);
      if ( *(_QWORD *)v20 )
      {
        v17 = *(_OWORD **)(a2 + 712);
        (*(void (__fastcall **)(_OWORD *))v20)(v17);
      }
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 )
      {
        v17 = v19;
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v21, *(_QWORD *)(v20 + 16));
      }
      *(_BYTE *)(a2 + 702) = 1;
      v22 = *((_QWORD *)&v91 + 1);
      *(_QWORD *)(a2 + 536) = v91;
      *(_QWORD *)(a2 + 544) = v22;
      *(_OWORD *)(a2 + 552) = v92;
      *(_OWORD *)(a2 + 568) = v93;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v21);
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
      if ( !v23 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
      v24 = v23;
      *(_QWORD *)v23 = a2 + 288;
      *(_BYTE *)(v23 + 8) = 0;
      *(_QWORD *)(a2 + 712) = v23;
      v25 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_0;
      *(_QWORD *)(a2 + 720) = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_0;
      v4 = v18;
LABEL_17:
      v26 = __dst;
      *(_QWORD *)&v102 = v4;
      ((void (__fastcall *)(_OWORD *, __int64, __int64, double))v25[3])(__dst, v24, v4, *(double *)a4.i64);
      v27 = *(_QWORD *)&__dst[0];
      if ( *(_QWORD *)&__dst[0] != 0x8000000000000009LL )
      {
        v104 = a1;
        v101 = __dst[1];
        v100 = *((_QWORD *)&__dst[0] + 1);
        v89 = __dst[2];
        v90 = __dst[3];
        v29 = *(_OWORD **)(a2 + 712);
        v30 = *(_QWORD *)(a2 + 720);
        if ( *(_QWORD *)v30 )
        {
          v26 = *(_OWORD **)(a2 + 712);
          (*(void (__fastcall **)(_OWORD *))v30)(v26);
        }
        v31 = *(_QWORD *)(v30 + 8);
        if ( v31 )
        {
          v26 = v29;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, *(_QWORD *)(v30 + 16));
        }
        if ( v27 != 0x8000000000000008LL )
        {
          v83[0] = v27;
          v83[1] = v100;
          v84 = v101;
          v85 = v89;
          v86 = v90;
          _$LT$axum..extract..rejection..PathRejection$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::hb9f6f75d0ea2f204(
            v81,
            v83);
LABEL_54:
          *(_BYTE *)(a2 + 701) = 0;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 536);
          *(_BYTE *)(a2 + 702) = 0;
          if ( *(_BYTE *)(a2 + 697) )
          {
            v52 = *(_QWORD *)(a2 + 512);
            v53 = *(_QWORD *)(a2 + 520);
            if ( *(_QWORD *)v53 )
              (*(void (__fastcall **)(_QWORD))v53)(*(_QWORD *)(a2 + 512));
            v54 = *(_QWORD *)(v53 + 8);
            if ( v54 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v54, *(_QWORD *)(v53 + 16));
          }
          *(_BYTE *)(a2 + 697) = 0;
          if ( *(_BYTE *)(a2 + 698) )
            core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a2 + 288);
          *(_BYTE *)(a2 + 698) = 0;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
          a1 = v104;
          goto LABEL_93;
        }
        *(_BYTE *)(a2 + 701) = 1;
        v32 = v101;
        *(_QWORD *)(a2 + 584) = v100;
        *(_OWORD *)(a2 + 592) = __PAIR128__(*((unsigned __int64 *)&v101 + 1), v32);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v31);
        v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
        if ( !v33 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
        v15 = v33;
        *(_QWORD *)v33 = a2 + 288;
        *(_BYTE *)(v33 + 8) = 0;
        *(_QWORD *)(a2 + 712) = v33;
        v16 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_518;
        *(_QWORD *)(a2 + 720) = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_518;
        a1 = v104;
        v4 = v102;
LABEL_26:
        ((void (__fastcall *)(_OWORD *, __int64, __int64))v16[3])(__dst, v15, v4);
        if ( LOBYTE(__dst[0]) == 3 )
        {
          *a1 = 3;
          v28 = 5;
          goto LABEL_94;
        }
        v36 = a1;
        qmemcpy(v79, __dst, sizeof(v79));
        v37 = *(_QWORD *)(a2 + 712);
        v38 = *(_QWORD *)(a2 + 720);
        if ( *(_QWORD *)v38 )
          (*(void (__fastcall **)(_QWORD))v38)(*(_QWORD *)(a2 + 712));
        v39 = *(_QWORD *)(v38 + 8);
        if ( v39 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16));
        *(_BYTE *)(a2 + 700) = 1;
        qmemcpy((void *)(a2 + 608), v79, 0x58u);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2 + 696, v80);
        v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8);
        if ( !v40 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16);
        v13 = v40;
        *(_QWORD *)v40 = a2 + 288;
        *(_BYTE *)(v40 + 8) = 0;
        *(_QWORD *)(a2 + 712) = v40;
        v14 = &off_101960418;
        *(_QWORD *)(a2 + 720) = &off_101960418;
        a1 = v36;
LABEL_35:
        ((void (__fastcall *)(_OWORD *, __int64, __int64))v14[3])(__dst, v13, v4);
        if ( LODWORD(__dst[0]) == 3 )
        {
          *a1 = 3;
          v28 = 6;
          goto LABEL_94;
        }
        v41 = a1;
        qmemcpy(v78, __dst, sizeof(v78));
        v42 = *(_QWORD *)(a2 + 712);
        v43 = *(_QWORD *)(a2 + 720);
        if ( *(_QWORD *)v43 )
          (*(void (__fastcall **)(_QWORD))v43)(*(_QWORD *)(a2 + 712));
        v44 = *(_QWORD *)(v43 + 8);
        if ( v44 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v44, *(_QWORD *)(v43 + 16));
        *(_BYTE *)(a2 + 699) = 1;
        qmemcpy((void *)(a2 + 728), v78, 0x60u);
        *(_BYTE *)(a2 + 698) = 0;
        memcpy(__dst, (const void *)(a2 + 288), 0xE0u);
        *(_BYTE *)(a2 + 697) = 0;
        v45 = *(_QWORD *)(a2 + 528);
        __dst[14] = *(_OWORD *)(a2 + 512);
        *(_QWORD *)&__dst[15] = v45;
        BYTE8(__dst[31]) = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2 + 288);
        v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 8);
        if ( !v46 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 512);
        v34 = v46;
        memcpy(v46, __dst, 0x200u);
        *(_QWORD *)(a2 + 712) = v34;
        v35 = &off_10195FF70;
        *(_QWORD *)(a2 + 720) = &off_10195FF70;
        a1 = v41;
LABEL_43:
        *(_QWORD *)&v102 = v4;
        ((void (__fastcall *)(_OWORD *, void *, __int64))v35[3])(__dst, v34, v4);
        v47 = __dst[0];
        if ( LOBYTE(__dst[0]) == 7 )
        {
          *a1 = 3;
          v28 = 7;
          goto LABEL_94;
        }
        v104 = a1;
        *(_QWORD *)&v99[23] = *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v99[8] = *(_OWORD *)((char *)__dst + 9);
        *(_QWORD *)v99 = *(_QWORD *)((char *)__dst + 1);
        v48 = *(_QWORD *)(a2 + 712);
        v49 = *(_QWORD *)(a2 + 720);
        if ( *(_QWORD *)v49 )
          (*(void (__fastcall **)(_QWORD))v49)(*(_QWORD *)(a2 + 712));
        v50 = *(_QWORD *)(v49 + 8);
        if ( v50 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v50, *(_QWORD *)(v49 + 16));
        if ( v47 == 6 )
        {
          v87[2] = *(_QWORD *)&v99[23];
          v87[1] = *(_QWORD *)&v99[15];
          v87[0] = *(_QWORD *)&v99[7];
          _$LT$axum..extract..rejection..JsonRejection$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h593bbda64c8007f9(
            v81,
            v87);
          *(_BYTE *)(a2 + 704) = 0;
          core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a2 + 728);
          *(_BYTE *)(a2 + 699) = 0;
          core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(a2 + 608);
          *(_BYTE *)(a2 + 700) = 0;
          v51 = *(_QWORD *)(a2 + 584);
          if ( v51 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 592), v51, 1);
          goto LABEL_54;
        }
        v12 = (_QWORD *)(a2 + 712);
        v94.i64[3] = *(_QWORD *)&v99[23];
        *(__int64 *)((char *)&v94.i64[2] + 1) = *(_QWORD *)&v99[16];
        *(__int64 *)((char *)&v94.i64[1] + 1) = *(_QWORD *)&v99[8];
        *(__int64 *)((char *)v94.i64 + 1) = *(_QWORD *)v99;
        v94.i8[0] = v47;
        *(_WORD *)(a2 + 703) = 0;
        *(_DWORD *)(a2 + 699) = 0;
        __dst[17] = *(_OWORD *)(a2 + 568);
        __dst[16] = *(_OWORD *)(a2 + 552);
        v55 = *(_QWORD *)(a2 + 536);
        *((_QWORD *)&__dst[15] + 1) = *(_QWORD *)(a2 + 544);
        *(_QWORD *)&__dst[15] = v55;
        v56 = *(_QWORD *)(a2 + 592);
        *(_QWORD *)&__dst[6] = *(_QWORD *)(a2 + 584);
        *((_QWORD *)&__dst[6] + 1) = v56;
        *(_QWORD *)&__dst[7] = *(_QWORD *)(a2 + 600);
        qmemcpy((char *)&__dst[7] + 8, (const void *)(a2 + 608), 0x58u);
        qmemcpy(__dst, (const void *)(a2 + 728), 0x60u);
        *(__m256i *)&__dst[13] = v94;
        memcpy(__src, __dst, sizeof(__src));
        memcpy((void *)(a2 + 712), __src, 0x220u);
        v103 = (char *)(a2 + 1256);
        *(_BYTE *)(a2 + 1256) = 0;
        a1 = v104;
LABEL_63:
        *(_QWORD *)(a2 + 1040) = *(_QWORD *)(a2 + 992);
        *(_QWORD *)(a2 + 1032) = *(_QWORD *)(a2 + 984);
        *(_QWORD *)(a2 + 1024) = *(_QWORD *)(a2 + 976);
        *(_QWORD *)(a2 + 1016) = *(_QWORD *)(a2 + 968);
        *(_QWORD *)(a2 + 1008) = *(_QWORD *)(a2 + 960);
        *(_QWORD *)(a2 + 1000) = *(_QWORD *)(a2 + 952);
        v57 = *(_QWORD *)(a2 + 816);
        *(_QWORD *)(a2 + 1048) = *(_QWORD *)(a2 + 808);
        *(_QWORD *)(a2 + 1056) = v57;
        *(_QWORD *)(a2 + 1064) = *(_QWORD *)(a2 + 824);
        qmemcpy((void *)(a2 + 1072), (const void *)(a2 + 832), 0x58u);
        v104 = v12;
        qmemcpy((void *)(a2 + 1160), v12, 0x60u);
        v98 = *(_QWORD *)(a2 + 944);
        v97 = *(_QWORD *)(a2 + 936);
        v58 = *(_QWORD *)(a2 + 920);
        v96 = *(_QWORD *)(a2 + 928);
        v95 = v58;
        *(_BYTE *)(a2 + 1257) = 1;
        if ( *(_QWORD *)(a2 + 1064) != 5
          || **(_DWORD **)(a2 + 1056) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(a2 + 1056) + 4LL) ^ 0x78 )
        {
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            __dst,
            404,
            &unk_1015DCC30,
            16,
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            0xEu);
          v59 = (__int64)v104;
          goto LABEL_85;
        }
        v61 = codexmate_lib::core::relay::proxy_server::pick_candidates_for::h094c25be24f8cc71(
                v88,
                (_QWORD *)(a2 + 1000));
        *(_BYTE *)(a2 + 1257) = 0;
        v62 = *(unsigned __int16 *)(a2 + 1152);
        if ( v62 == 0xFFFF )
        {
          v68 = 0;
        }
        else
        {
          v63 = v62 + 1;
          v64 = *(_QWORD *)(a2 + 1128);
          v65 = *(_QWORD *)(a2 + 1136);
          v66 = v65 == v63;
          v67 = v65 <= v63;
          v61 = (_QWORD *)(v65 - v63);
          if ( v67 )
          {
            if ( !v66 )
LABEL_74:
              core::str::slice_error_fail::h480e51fbd8b15eba(
                v64,
                *(_QWORD *)(a2 + 1136),
                v63,
                *(_QWORD *)(a2 + 1136),
                &off_10195E9A8);
          }
          else if ( *(char *)(v64 + v63) < -64 )
          {
            goto LABEL_74;
          }
          v68 = v63 + v64;
        }
        *(_QWORD *)(a2 + 1280) = v88[2];
        v69 = v88[0];
        *(_QWORD *)(a2 + 1272) = v88[1];
        *(_QWORD *)(a2 + 1264) = v69;
        *(_QWORD *)(a2 + 1288) = 0x8000000000000000LL;
        v70 = v96;
        *(_QWORD *)(a2 + 1312) = v95;
        *(_QWORD *)(a2 + 1320) = v70;
        *(_QWORD *)(a2 + 1328) = v97;
        *(_QWORD *)(a2 + 1336) = v98;
        *(_QWORD *)(a2 + 1344) = a2 + 1000;
        *(_QWORD *)(a2 + 1352) = a2 + 1160;
        *(_QWORD *)(a2 + 1360) = "active-compact";
        *(_QWORD *)(a2 + 1368) = 14;
        *(_QWORD *)(a2 + 1376) = v68;
        *(_QWORD *)(a2 + 1384) = v61;
        *(_BYTE *)(a2 + 1848) = 0;
        v4 = v102;
LABEL_81:
        codexmate_lib::core::relay::proxy_server::forward_codex_responses_internal::_$u7b$$u7b$closure$u7d$$u7d$::ha0a9686e22e589cb(
          v80,
          a2 + 1264,
          v4);
        v59 = (__int64)v104;
        if ( LODWORD(v80[0]) == 3 )
        {
          v60 = 3;
LABEL_83:
          *v103 = v60;
          goto LABEL_91;
        }
        qmemcpy(__dst, v80, 0x80u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_codex_responses_internal..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8d8a4dfaefecb062(a2 + 1264);
LABEL_85:
        if ( *(_BYTE *)(a2 + 1257) )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v95);
        *(_BYTE *)(a2 + 1257) = 0;
        core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a2 + 1160);
        core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(a2 + 1072);
LABEL_88:
        v71 = *(_QWORD *)(a2 + 1048);
        if ( v71 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 1056), v71, 1);
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 1000);
        v72 = *(_QWORD *)&__dst[0];
        qmemcpy(v77, (char *)__dst + 8, sizeof(v77));
        v73 = __dst[7];
        *v103 = 1;
        if ( v72 != 3 )
        {
          v102 = v73;
          qmemcpy(v76, v77, sizeof(v76));
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_responses..$u7b$$u7b$closure$u7d$$u7d$$GT$::hec532821505d6e38(v59);
          *(_QWORD *)&v81[0] = v72;
          qmemcpy((char *)v81 + 8, v76, 0x68u);
          v81[7] = v102;
          *(_BYTE *)(a2 + 704) = 0;
          *(_WORD *)(a2 + 701) = 0;
          *(_DWORD *)(a2 + 697) = 0;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
LABEL_93:
          qmemcpy(a1, v81, 0x80u);
          v28 = 1;
          goto LABEL_94;
        }
LABEL_91:
        *a1 = 3;
        v28 = 8;
        goto LABEL_94;
      }
      *a1 = 3;
      v28 = 4;
LABEL_94:
      *(_BYTE *)(a2 + 696) = v28;
      return a1;
    case 4:
      v24 = *(_QWORD *)(a2 + 712);
      v25 = *(__int64 (__fastcall ***)())(a2 + 720);
      goto LABEL_17;
    case 5:
      v15 = *(_QWORD *)(a2 + 712);
      v16 = *(__int64 (__fastcall ***)())(a2 + 720);
      goto LABEL_26;
    case 6:
      v13 = *(_QWORD *)(a2 + 712);
      v14 = *(__int64 (__fastcall ***)())(a2 + 720);
      goto LABEL_35;
    case 7:
      v34 = *(void **)(a2 + 712);
      v35 = *(__int64 (__fastcall ***)())(a2 + 720);
      goto LABEL_43;
    case 8:
      v103 = (char *)(a2 + 1256);
      v11 = *(unsigned __int8 *)(a2 + 1256);
      v104 = (_QWORD *)(a2 + 712);
      switch ( v11 )
      {
        case 0LL:
          *(_QWORD *)&v102 = a3;
          v12 = v104;
          goto LABEL_63;
        case 1LL:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D740);
        case 2LL:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D740);
        case 3LL:
          goto LABEL_81;
        case 4LL:
          codexmate_lib::core::relay::proxy_server::forward_with_failover::_$u7b$$u7b$closure$u7d$$u7d$::ha2a3d67ba146c352(
            v80,
            a2 + 1264,
            a3);
          v59 = (__int64)v104;
          if ( LODWORD(v80[0]) == 3 )
          {
            v60 = 4;
            goto LABEL_83;
          }
          qmemcpy(__dst, v80, 0x80u);
          if ( *(_BYTE *)(a2 + 2808) == 3 )
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..forward_with_candidates..$u7b$$u7b$closure$u7d$$u7d$$GT$::h52dab01adeb79006(a2 + 1344);
            *(_BYTE *)(a2 + 2809) = 0;
          }
          else if ( !*(_BYTE *)(a2 + 2808) )
          {
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884((_QWORD *)(a2 + 1272));
          }
          *(_BYTE *)(a2 + 1257) = 0;
          core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(a2 + 1160);
          core::ptr::drop_in_place$LT$http..uri..Uri$GT$::h245bcdd64568d23f(a2 + 1072);
          break;
      }
      goto LABEL_88;
  }
}
