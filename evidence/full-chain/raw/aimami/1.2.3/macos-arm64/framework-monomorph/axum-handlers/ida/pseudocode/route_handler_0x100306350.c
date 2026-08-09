/* addr=0x100306350 cleanname=route_handler group=axum-handlers
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=530 brace_balanced=True truncation_markers=[]
 */
_QWORD *__fastcall _$LT$F$u20$as$u20$axum..handler..Handler$LT$$LP$M$C$T1$RP$$C$S$GT$$GT$::call::_$u7b$$u7b$closure$u7d$$u7d$::h38bdc5ae5dd4e1c6(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  void *v7; // rax
  void *v8; // r14
  __int64 (__fastcall **v9)(); // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdx
  char v19; // r14
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  _WORD *v27; // rax
  _BOOL8 **v28; // rdi
  _BOOL8 *v29; // rax
  __int64 v30; // rcx
  _BOOL8 v31; // rdx
  __int64 v32; // rdx
  _BOOL8 *v33; // rsi
  _QWORD *result; // rax
  char v35; // dl
  void *v36; // rax
  _BOOL8 **v37; // rdi
  _BOOL8 *v38; // rax
  __int64 v39; // rcx
  _BOOL8 v40; // rdx
  __int64 v41; // rdx
  _BOOL8 *v42; // rsi
  void *v43; // rax
  _BOOL8 **v44; // rdi
  _BOOL8 *v45; // rax
  __int64 v46; // rcx
  _BOOL8 v47; // rdx
  __int64 v48; // rdx
  _BOOL8 *v49; // rsi
  void *v50; // rax
  _BOOL8 *v51; // rax
  __int64 v52; // rcx
  _BOOL8 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int128 v56; // xmm0
  __int64 v57; // rax
  _BYTE __dst[224]; // [rsp+0h] [rbp-680h] BYREF
  _BYTE v59[104]; // [rsp+E0h] [rbp-5A0h] BYREF
  _BYTE v60[104]; // [rsp+148h] [rbp-538h] BYREF
  __int64 v61; // [rsp+1B0h] [rbp-4D0h] BYREF
  _BYTE v62[104]; // [rsp+1B8h] [rbp-4C8h] BYREF
  __int128 v63; // [rsp+220h] [rbp-460h]
  __int64 v64; // [rsp+238h] [rbp-448h]
  _QWORD __src[62]; // [rsp+248h] [rbp-438h] BYREF
  _BYTE v66[32]; // [rsp+438h] [rbp-248h] BYREF
  __int64 v67; // [rsp+458h] [rbp-228h]
  __int64 v68; // [rsp+460h] [rbp-220h]
  __int64 v69; // [rsp+468h] [rbp-218h]
  __int64 v70; // [rsp+470h] [rbp-210h]
  __int64 v71; // [rsp+478h] [rbp-208h]
  __int64 v72; // [rsp+480h] [rbp-200h]
  _QWORD v73[6]; // [rsp+488h] [rbp-1F8h] BYREF
  char v74; // [rsp+4B8h] [rbp-1C8h] BYREF
  __int128 v75; // [rsp+4B9h] [rbp-1C7h]
  _BYTE v76[15]; // [rsp+4C9h] [rbp-1B7h]
  _BYTE v77[31]; // [rsp+4D9h] [rbp-1A7h]
  __int64 v78; // [rsp+4F8h] [rbp-188h]
  __int64 v79; // [rsp+500h] [rbp-180h]
  __int64 v80; // [rsp+508h] [rbp-178h]
  __int64 v81; // [rsp+510h] [rbp-170h]
  __int64 v82; // [rsp+518h] [rbp-168h]
  __int64 v83; // [rsp+520h] [rbp-160h]
  __int64 v84; // [rsp+528h] [rbp-158h]
  __int64 v85; // [rsp+530h] [rbp-150h]
  __int128 v86; // [rsp+538h] [rbp-148h] BYREF
  __int64 v87; // [rsp+548h] [rbp-138h]
  __int128 v88; // [rsp+550h] [rbp-130h]
  _QWORD *v89; // [rsp+560h] [rbp-120h]
  __int64 v90; // [rsp+568h] [rbp-118h] BYREF
  _BOOL8 *v91; // [rsp+570h] [rbp-110h]
  __int64 v92; // [rsp+578h] [rbp-108h]
  __int64 v93; // [rsp+580h] [rbp-100h]
  __int64 v94; // [rsp+588h] [rbp-F8h] BYREF
  _WORD *v95; // [rsp+590h] [rbp-F0h]
  __int64 v96; // [rsp+598h] [rbp-E8h]
  _BOOL8 v97; // [rsp+5A0h] [rbp-E0h] BYREF
  _BOOL8 v98; // [rsp+5A8h] [rbp-D8h]
  _BOOL8 v99; // [rsp+5B0h] [rbp-D0h]
  _BOOL8 v100; // [rsp+5B8h] [rbp-C8h]
  _BOOL8 v101; // [rsp+5C0h] [rbp-C0h] BYREF
  _BOOL8 *v102; // [rsp+5C8h] [rbp-B8h]
  __int64 v103; // [rsp+5D0h] [rbp-B0h]
  __int64 v104; // [rsp+5D8h] [rbp-A8h]
  __int64 v105; // [rsp+5E0h] [rbp-A0h]
  __int64 v106; // [rsp+5E8h] [rbp-98h]
  __int64 v107; // [rsp+5F0h] [rbp-90h]
  _BOOL8 *v108; // [rsp+5F8h] [rbp-88h] BYREF
  _BOOL8 *v109; // [rsp+600h] [rbp-80h]
  __int64 v110; // [rsp+608h] [rbp-78h]
  __int64 v111; // [rsp+610h] [rbp-70h]
  __int64 v112; // [rsp+618h] [rbp-68h]
  __int64 v113; // [rsp+620h] [rbp-60h]
  __int64 v114; // [rsp+628h] [rbp-58h]
  __int64 v115; // [rsp+630h] [rbp-50h]
  _BOOL8 *v116; // [rsp+638h] [rbp-48h]
  __int64 v117; // [rsp+640h] [rbp-40h]
  __int64 v118; // [rsp+648h] [rbp-38h]
  __int64 v119; // [rsp+650h] [rbp-30h]

  v89 = a1;
  v3 = *(unsigned __int8 *)(a2 + 288);
  v119 = a2;
  switch ( v3 )
  {
    case 0LL:
      v4 = a3;
      memcpy(__dst, (const void *)a2, sizeof(__dst));
      v5 = *(_QWORD *)(a2 + 224);
      v6 = *(_QWORD *)(a2 + 232);
      memcpy(__src, (const void *)a2, 0xE0u);
      *(_DWORD *)(a2 + 289) = 1;
      v78 = v5;
      __src[28] = v5;
      v79 = v6;
      __src[29] = v6;
      __src[30] = a2 + 240;
      LOBYTE(__src[61]) = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, a2);
      v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(496, 8);
      if ( !v7 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 496);
      v8 = v7;
      memcpy(v7, __src, 0x1F0u);
      *(_QWORD *)(a2 + 296) = v8;
      v9 = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_0;
      *(_QWORD *)(a2 + 304) = &anon_d5f9baf1d57b89a47eac516e8e9e0ea5_0;
      a3 = v4;
      goto LABEL_5;
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195FA90);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195FA90);
    case 3LL:
      v8 = *(void **)(a2 + 296);
      v9 = *(__int64 (__fastcall ***)())(a2 + 304);
LABEL_5:
      ((void (__fastcall *)(_QWORD *, void *, __int64))v9[3])(__src, v8, a3);
      if ( __src[0] )
      {
        v85 = __src[5];
        v84 = __src[4];
        v83 = __src[3];
        v82 = __src[2];
        v81 = __src[1];
        v80 = __src[0];
        v10 = *(_QWORD *)(v119 + 296);
        v11 = *(_QWORD *)(v119 + 304);
        if ( *(_QWORD *)v11 )
          (*(void (__fastcall **)(_QWORD))v11)(*(_QWORD *)(v119 + 296));
        v12 = (__int64 *)(v119 + 296);
        a2 = *(_QWORD *)(v11 + 8);
        if ( a2 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, a2, *(_QWORD *)(v11 + 16));
        v72 = v85;
        v71 = v84;
        v70 = v83;
        v69 = v82;
        v68 = v81;
        v67 = v80;
        v13 = v119;
        *(_WORD *)(v119 + 289) = 0;
        v12[5] = v85;
        v12[4] = v84;
        v12[3] = v83;
        v12[2] = v82;
        v14 = v80;
        v12[1] = v81;
        *v12 = v14;
        *(_QWORD *)&v88 = v13 + 344;
        *(_BYTE *)(v13 + 344) = 0;
LABEL_12:
        v73[5] = v12[5];
        v73[4] = v12[4];
        v73[3] = v12[3];
        v73[2] = v12[2];
        v15 = *v12;
        v73[1] = v12[1];
        v73[0] = v15;
        v16 = (_QWORD *)(v15 + 16);
        v17 = *(_QWORD *)(v15 + 16);
        if ( !v17 )
          v17 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v15 + 16);
        std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v17);
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
          v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v17, a2, v18, 0x8000000000000000LL)
              ^ 1;
        else
          v19 = 0;
        v20 = *(_BYTE *)(v15 + 24);
        v102 = (_BOOL8 *)(v15 + 16);
        LOBYTE(v103) = v19;
        v101 = v20 != 0;
        if ( v20 )
        {
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            &v61,
            500,
            "state poisoned::toolsimage_url[AiMaMi] image_url rejected by upstream; retrying with text fallbackexpect",
            14,
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            0xEu);
          if ( !v19
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v61, 500, v21, v22) )
          {
            *(_BYTE *)(v15 + 24) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v16);
        }
        else
        {
          v23 = v15 + 32;
          _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393(
            (__int64)__src,
            v15 + 32);
          if ( !v19
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__src, v23, v24, v25) )
          {
            *(_BYTE *)(v15 + 24) = 1;
          }
          v26 = *v16;
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v16);
          *(_QWORD *)&v86 = 0;
          v87 = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v23);
          v27 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
          if ( !v27 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
          *v27 = 27503;
          v94 = 2;
          v95 = v27;
          v96 = 2;
          LOWORD(v115) = 257;
          v28 = &v108;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v86, &v94);
          if ( v108 == (_BOOL8 *)0x8000000000000000LL )
          {
            v29 = v109;
            v30 = 4 * v111;
            v100 = v109[4 * v111 + 3];
            v99 = v109[4 * v111 + 2];
            v31 = v109[4 * v111];
            v98 = v109[4 * v111 + 1];
            v97 = v31;
            v109[v30 + 3] = v118;
            v29[v30 + 2] = v117;
            v32 = v115;
            v33 = v116;
            v29[v30 + 1] = (_BOOL8)v116;
            v29[v30] = v32;
            if ( v97 != 6 )
            {
              v28 = (_BOOL8 **)&v97;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v97);
            }
          }
          else
          {
            v107 = v114;
            v106 = v113;
            v105 = v112;
            v104 = v111;
            v103 = v110;
            v102 = v109;
            v101 = (_BOOL8)v108;
            v93 = v118;
            v92 = v117;
            v91 = v116;
            v90 = v115;
            v28 = (_BOOL8 **)v66;
            v33 = &v101;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v66,
              &v101,
              &v90);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v33);
          v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
          if ( !v36 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14);
          qmemcpy(v36, "router_enabled", 14);
          v94 = 14;
          v95 = v36;
          v96 = 14;
          LOBYTE(v115) = 1;
          BYTE1(v115) = BYTE4(__src[36]);
          v37 = &v108;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v86, &v94);
          if ( v108 == (_BOOL8 *)0x8000000000000000LL )
          {
            v38 = v109;
            v39 = 4 * v111;
            v100 = v109[4 * v111 + 3];
            v99 = v109[4 * v111 + 2];
            v40 = v109[4 * v111];
            v98 = v109[4 * v111 + 1];
            v97 = v40;
            v109[v39 + 3] = v118;
            v38[v39 + 2] = v117;
            v41 = v115;
            v42 = v116;
            v38[v39 + 1] = (_BOOL8)v116;
            v38[v39] = v41;
            if ( v97 != 6 )
            {
              v37 = (_BOOL8 **)&v97;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v97);
            }
          }
          else
          {
            v107 = v114;
            v106 = v113;
            v105 = v112;
            v104 = v111;
            v103 = v110;
            v102 = v109;
            v101 = (_BOOL8)v108;
            v93 = v118;
            v92 = v117;
            v91 = v116;
            v90 = v115;
            v37 = (_BOOL8 **)v66;
            v42 = &v101;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v66,
              &v101,
              &v90);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v42);
          v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
          if ( !v43 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22);
          qmemcpy(v43, "active_codex_providers", 22);
          v94 = 22;
          v95 = v43;
          v96 = 22;
          serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v101, &__src[3]);
          if ( v101 == 6 )
          {
            v108 = v102;
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` value",
              43,
              &v108,
              &off_10195E860,
              &off_10195D620);
          }
          v118 = v104;
          v117 = v103;
          v116 = v102;
          v115 = v101;
          v44 = &v108;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v86, &v94);
          if ( v108 == (_BOOL8 *)0x8000000000000000LL )
          {
            v45 = v109;
            v46 = 4 * v111;
            v100 = v109[4 * v111 + 3];
            v99 = v109[4 * v111 + 2];
            v47 = v109[4 * v111];
            v98 = v109[4 * v111 + 1];
            v97 = v47;
            v109[v46 + 3] = v118;
            v45[v46 + 2] = v117;
            v48 = v115;
            v49 = v116;
            v45[v46 + 1] = (_BOOL8)v116;
            v45[v46] = v48;
            if ( v97 != 6 )
            {
              v44 = (_BOOL8 **)&v97;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v97);
            }
          }
          else
          {
            v107 = v114;
            v106 = v113;
            v105 = v112;
            v104 = v111;
            v103 = v110;
            v102 = v109;
            v101 = (_BOOL8)v108;
            v93 = v118;
            v92 = v117;
            v91 = v116;
            v90 = v115;
            v44 = (_BOOL8 **)v66;
            v49 = &v101;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v66,
              &v101,
              &v90);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v49);
          v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
          if ( !v50 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15);
          qmemcpy(v50, "providers_count", 15);
          v94 = 15;
          v95 = v50;
          v96 = 15;
          LOBYTE(v115) = 2;
          v116 = nullptr;
          v117 = __src[2];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v86, &v94);
          if ( v108 == (_BOOL8 *)0x8000000000000000LL )
          {
            v51 = v109;
            v52 = 4 * v111;
            v100 = v109[4 * v111 + 3];
            v99 = v109[4 * v111 + 2];
            v53 = v109[4 * v111];
            v98 = v109[4 * v111 + 1];
            v97 = v53;
            v109[v52 + 3] = v118;
            v51[v52 + 2] = v117;
            v54 = v115;
            v51[v52 + 1] = (_BOOL8)v116;
            v51[v52] = v54;
            if ( v97 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v97);
          }
          else
          {
            v107 = v114;
            v106 = v113;
            v105 = v112;
            v104 = v111;
            v103 = v110;
            v102 = v109;
            v101 = (_BOOL8)v108;
            v93 = v118;
            v92 = v117;
            v91 = v116;
            v90 = v115;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v66,
              &v101,
              &v90);
          }
          v64 = *((_QWORD *)&v86 + 1);
          *(_OWORD *)&v77[7] = v86;
          *(_QWORD *)&v77[23] = v87;
          v74 = 5;
          *(_QWORD *)&v76[7] = v87;
          v75 = *(_OWORD *)v77;
          *(_QWORD *)v76 = *(_QWORD *)&v77[16];
          _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h7212e14c3f6814bb(
            &v61,
            &v74);
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(__src);
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(v73);
        v55 = v61;
        qmemcpy(v60, v62, sizeof(v60));
        v56 = v63;
        *(_BYTE *)v88 = 1;
        if ( v55 == 3 )
        {
          result = v89;
          *v89 = 3;
          v35 = 4;
        }
        else
        {
          v88 = v56;
          qmemcpy(v59, v60, sizeof(v59));
          v57 = v119;
          *(_BYTE *)(v119 + 290) = 0;
          *(_WORD *)(v57 + 291) = 0;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(v57 + 240);
          result = v89;
          *v89 = v55;
          qmemcpy(result + 1, v59, 0x68u);
          *((_OWORD *)result + 7) = v88;
          v35 = 1;
        }
      }
      else
      {
        result = v89;
        *v89 = 3;
        v35 = 3;
      }
      *(_BYTE *)(v119 + 288) = v35;
      return result;
    case 4LL:
      *(_QWORD *)&v88 = a2 + 344;
      v12 = (__int64 *)(a2 + 296);
      if ( *(_BYTE *)(a2 + 344) )
      {
        if ( *(_BYTE *)(a2 + 344) == 1 )
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D638);
        core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D638);
      }
      goto LABEL_12;
    case 5LL:
      JUMPOUT(0x100B49193LL);
    case 6LL:
      JUMPOUT(0x100307284LL);
  }
}
