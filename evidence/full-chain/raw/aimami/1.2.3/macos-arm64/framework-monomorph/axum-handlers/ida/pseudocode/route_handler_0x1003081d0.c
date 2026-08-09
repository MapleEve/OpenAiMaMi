/* addr=0x1003081d0 cleanname=route_handler group=axum-handlers
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=767 brace_balanced=True truncation_markers=[]
 */
_QWORD *__fastcall _$LT$F$u20$as$u20$axum..handler..Handler$LT$$LP$M$C$T1$C$T2$RP$$C$S$GT$$GT$::call::_$u7b$$u7b$closure$u7d$$u7d$::haff22ca9579b60b3(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // r13
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall **v9)(); // rax
  void *v10; // r15
  __int64 (__fastcall **v11)(); // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // r12
  char v21; // al
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rsi
  char *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // r14
  const void *v36; // rsi
  _WORD *v37; // rax
  size_t v38; // r15
  const void *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r13
  __m256i *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int128 *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __m256i *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int128 *v54; // rsi
  _QWORD *v55; // rax
  size_t v56; // r15
  const void *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r15
  unsigned __int64 v65; // r15
  __int64 v66; // rax
  _DWORD *v67; // rax
  __int128 *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  _OWORD *v72; // rsi
  _DWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 i; // r15
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // r14
  __int128 v82; // xmm0
  _BYTE v84[120]; // [rsp+8h] [rbp-748h] BYREF
  _BYTE v85[104]; // [rsp+80h] [rbp-6D0h] BYREF
  _BYTE v86[104]; // [rsp+E8h] [rbp-668h] BYREF
  __int64 v87; // [rsp+150h] [rbp-600h] BYREF
  _BYTE v88[120]; // [rsp+158h] [rbp-5F8h] BYREF
  _OWORD v89[8]; // [rsp+1D0h] [rbp-580h] BYREF
  __int64 v90; // [rsp+250h] [rbp-500h] BYREF
  _QWORD v91[15]; // [rsp+258h] [rbp-4F8h] BYREF
  _OWORD __dst[31]; // [rsp+2D0h] [rbp-480h] BYREF
  _QWORD v93[4]; // [rsp+4C0h] [rbp-290h] BYREF
  __int128 v94; // [rsp+4E0h] [rbp-270h]
  __int128 v95; // [rsp+4F0h] [rbp-260h]
  __int128 v96; // [rsp+500h] [rbp-250h]
  __int128 v97; // [rsp+510h] [rbp-240h]
  __int128 v98; // [rsp+520h] [rbp-230h]
  __int128 v99; // [rsp+530h] [rbp-220h]
  __int128 v100; // [rsp+540h] [rbp-210h]
  __int128 v101; // [rsp+550h] [rbp-200h]
  __int64 v102; // [rsp+560h] [rbp-1F0h]
  __int64 v103; // [rsp+568h] [rbp-1E8h]
  __int128 v104; // [rsp+570h] [rbp-1E0h] BYREF
  __int128 v105; // [rsp+580h] [rbp-1D0h]
  __m256i v106; // [rsp+590h] [rbp-1C0h]
  __int64 v107; // [rsp+5B0h] [rbp-1A0h] BYREF
  __int128 v108; // [rsp+5B8h] [rbp-198h]
  __int64 v109; // [rsp+5C8h] [rbp-188h]
  __int64 v110; // [rsp+5D0h] [rbp-180h]
  const void *v111; // [rsp+5D8h] [rbp-178h]
  __int128 v112; // [rsp+5E0h] [rbp-170h]
  __int128 v113; // [rsp+5F8h] [rbp-158h] BYREF
  __int128 v114; // [rsp+608h] [rbp-148h]
  __int128 v115; // [rsp+618h] [rbp-138h]
  __int64 v116; // [rsp+628h] [rbp-128h]
  _BYTE *v117; // [rsp+630h] [rbp-120h]
  __m256i v118; // [rsp+638h] [rbp-118h] BYREF
  __int64 v119; // [rsp+658h] [rbp-F8h] BYREF
  __int64 v120; // [rsp+660h] [rbp-F0h]
  __int64 v121; // [rsp+668h] [rbp-E8h]
  __int64 v122; // [rsp+670h] [rbp-E0h] BYREF
  unsigned __int128 v123; // [rsp+678h] [rbp-D8h]
  __int128 v124; // [rsp+688h] [rbp-C8h] BYREF
  __int128 v125; // [rsp+698h] [rbp-B8h]
  __int128 v126; // [rsp+6A8h] [rbp-A8h]
  __int64 v127; // [rsp+6B8h] [rbp-98h]
  __int64 v128; // [rsp+6C0h] [rbp-90h] BYREF
  _DWORD *v129; // [rsp+6C8h] [rbp-88h]
  __int64 v130; // [rsp+6D0h] [rbp-80h]
  __int64 v131; // [rsp+6D8h] [rbp-78h]
  _QWORD *v132; // [rsp+6E0h] [rbp-70h]
  __int128 v133; // [rsp+6E8h] [rbp-68h] BYREF
  __int128 v134; // [rsp+6F8h] [rbp-58h]
  __int128 v135; // [rsp+708h] [rbp-48h] BYREF
  __int128 v136; // [rsp+718h] [rbp-38h]

  v5 = a1;
  switch ( *(_BYTE *)(a2 + 568) )
  {
    case 0:
      *(_BYTE *)(a2 + 573) = 0;
      memcpy((void *)(a2 + 288), (const void *)a2, 0xE0u);
      *(_DWORD *)(a2 + 569) = 16777473;
      *(_OWORD *)(a2 + 576) = *(_OWORD *)(a2 + 224);
      v6 = a2 + 240;
      *(_QWORD *)(a2 + 512) = a2 + 240;
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
      ((void (__fastcall *)(_OWORD *, __int64, __int64))v9[3])(__dst, v8, a3);
      if ( !*(_QWORD *)&__dst[0] )
      {
        *a1 = 3;
        v21 = 3;
        goto LABEL_106;
      }
      v100 = __dst[2];
      v99 = __dst[1];
      v98 = __dst[0];
      v14 = *(_QWORD *)(a2 + 592);
      v15 = *(_QWORD *)(a2 + 600);
      if ( *(_QWORD *)v15 )
        (*(void (__fastcall **)(_QWORD))v15)(*(_QWORD *)(a2 + 592));
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16));
      *(_BYTE *)(a2 + 571) = 1;
      v17 = *((_QWORD *)&v98 + 1);
      *(_QWORD *)(a2 + 520) = v98;
      *(_QWORD *)(a2 + 528) = v17;
      *(_OWORD *)(a2 + 536) = v99;
      *(_OWORD *)(a2 + 552) = v100;
      *(_BYTE *)(a2 + 570) = 0;
      memcpy(__dst, (const void *)(a2 + 288), 0xE0u);
      *(_BYTE *)(a2 + 569) = 0;
      v18 = *(_QWORD *)(a2 + 512);
      __dst[14] = *(_OWORD *)(a2 + 576);
      *(_QWORD *)&__dst[15] = v18;
      BYTE8(__dst[30]) = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2 + 288);
      v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(496, 8);
      if ( !v19 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 496);
      v10 = v19;
      memcpy(v19, __dst, 0x1F0u);
      *(_QWORD *)(a2 + 576) = v10;
      v11 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_17;
      *(_QWORD *)(a2 + 584) = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_17;
LABEL_15:
      *(_QWORD *)&v112 = a1;
      ((void (__fastcall *)(_OWORD *, void *, __int64))v11[3])(__dst, v10, a3);
      v20 = *(_QWORD *)&__dst[0];
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000009LL )
      {
        v5 = (_QWORD *)v112;
        *(_QWORD *)v112 = 3;
        v21 = 4;
        goto LABEL_106;
      }
      v109 = *((_QWORD *)&__dst[0] + 1);
      v132 = *((_QWORD **)&__dst[1] + 1);
      v110 = *(_QWORD *)&__dst[1];
      v96 = __dst[2];
      v97 = __dst[3];
      v22 = *(_QWORD *)(a2 + 576);
      v23 = *(_QWORD *)(a2 + 584);
      if ( *(_QWORD *)v23 )
        (*(void (__fastcall **)(_QWORD))v23)(*(_QWORD *)(a2 + 576));
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16));
      if ( v20 == 0x8000000000000008LL )
      {
        v13 = (_QWORD *)(a2 + 576);
        *(_BYTE *)(a2 + 572) = 0;
        *(_BYTE *)(a2 + 571) = 0;
        *(_BYTE *)(a2 + 573) = 0;
        *(_QWORD *)(a2 + 576) = v109;
        *(_QWORD *)(a2 + 584) = v110;
        *(_QWORD *)(a2 + 592) = v132;
        v25 = *(_QWORD *)(a2 + 528);
        *(_QWORD *)(a2 + 600) = *(_QWORD *)(a2 + 520);
        *(_QWORD *)(a2 + 608) = v25;
        *(_QWORD *)(a2 + 616) = *(_QWORD *)(a2 + 536);
        *(_QWORD *)(a2 + 624) = *(_QWORD *)(a2 + 544);
        *(_QWORD *)(a2 + 632) = *(_QWORD *)(a2 + 552);
        *(_QWORD *)(a2 + 640) = *(_QWORD *)(a2 + 560);
        v117 = (_BYTE *)(a2 + 736);
        *(_BYTE *)(a2 + 736) = 0;
        v5 = (_QWORD *)v112;
LABEL_23:
        v26 = (_QWORD *)(a2 + 648);
        *(_QWORD *)(a2 + 688) = *(_QWORD *)(a2 + 640);
        *(_QWORD *)(a2 + 680) = *(_QWORD *)(a2 + 632);
        *(_QWORD *)(a2 + 672) = *(_QWORD *)(a2 + 624);
        *(_QWORD *)(a2 + 664) = *(_QWORD *)(a2 + 616);
        v27 = *(_QWORD *)(a2 + 600);
        *(_QWORD *)(a2 + 656) = *(_QWORD *)(a2 + 608);
        *(_QWORD *)(a2 + 648) = v27;
        v28 = v13[1];
        *(_QWORD *)(a2 + 696) = *v13;
        *(_QWORD *)(a2 + 704) = v28;
        v132 = v13;
        *(_QWORD *)(a2 + 712) = v13[2];
        if ( *(_QWORD *)(a2 + 712) == 5
          && !(**(_DWORD **)(a2 + 704) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(a2 + 704) + 4LL) ^ 0x78) )
        {
          *(_QWORD *)(a2 + 720) = v26;
          *(_BYTE *)(a2 + 728) = 0;
LABEL_39:
          v119 = 0;
          v120 = 8;
          v121 = 0;
          v33 = (char *)__dst;
          codexmate_lib::core::relay::proxy_server::pick_candidates_for::h094c25be24f8cc71(__dst, v26);
          v34 = *((_QWORD *)&__dst[0] + 1) + 232LL * *(_QWORD *)&__dst[1];
          v128 = *((_QWORD *)&__dst[0] + 1);
          v129 = *((_DWORD **)&__dst[0] + 1);
          v101 = __dst[0];
          v130 = *(_QWORD *)&__dst[0];
          v131 = v34;
          v35 = *((_QWORD *)&__dst[0] + 1);
          if ( *(_QWORD *)&__dst[1] )
          {
            v33 = (char *)__dst + 8;
            v35 = *((_QWORD *)&__dst[0] + 1) + 232LL;
            v103 = *((_QWORD *)&__dst[0] + 1) + 232LL * *(_QWORD *)&__dst[1];
            while ( *(_QWORD *)(v35 - 232) != 0x8000000000000000LL )
            {
              *(_QWORD *)&__dst[0] = *(_QWORD *)(v35 - 232);
              v102 = v35 - 232;
              v36 = (const void *)(v35 - 232 + 8);
              memcpy((char *)__dst + 8, v36, 0xE0u);
              v107 = 0;
              *((_QWORD *)&v108 + 1) = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2((char *)__dst + 8, v36);
              v37 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v37 )
              {
                v129 = (_DWORD *)v35;
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2);
              }
              *v37 = 25705;
              v122 = 2;
              *(_QWORD *)&v123 = v37;
              *((_QWORD *)&v123 + 1) = 2;
              v38 = *(_QWORD *)&__dst[7];
              if ( *(__int64 *)&__dst[7] < 0 )
              {
                v41 = 0;
LABEL_84:
                v129 = (_DWORD *)v35;
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v41, v38);
              }
              *(_QWORD *)&v112 = v5;
              v39 = *((const void **)&__dst[6] + 1);
              if ( *(_QWORD *)&__dst[7] )
              {
                v111 = *((const void **)&__dst[6] + 1);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, *((_QWORD *)&__dst[6] + 1));
                v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v38, 1);
                v41 = 1;
                if ( !v40 )
                  goto LABEL_84;
                v42 = v40;
                v39 = v111;
              }
              else
              {
                v42 = 1;
              }
              memcpy((void *)v42, v39, v38);
              LOBYTE(v135) = 3;
              *((_QWORD *)&v135 + 1) = v38;
              *(_QWORD *)&v136 = v42;
              *((_QWORD *)&v136 + 1) = v38;
              v43 = (__m256i *)&v113;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v113, &v107, &v122);
              if ( (_QWORD)v113 == 0x8000000000000000LL )
              {
                v44 = *((_QWORD *)&v113 + 1);
                v45 = 32LL * *((_QWORD *)&v114 + 1);
                v118.i128[1] = *(_OWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1) + 16);
                v46 = *(_QWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1));
                v118.i64[1] = *(_QWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1) + 8);
                v118.i64[0] = v46;
                *(_OWORD *)(*((_QWORD *)&v113 + 1) + v45 + 16) = v136;
                v47 = *((__int128 **)&v135 + 1);
                *(_OWORD *)(v44 + v45) = v135;
                if ( v118.i8[0] != 6 )
                {
                  v43 = &v118;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v118);
                }
              }
              else
              {
                v127 = v116;
                v126 = v115;
                v125 = v114;
                v124 = v113;
                v134 = v136;
                v133 = v135;
                v43 = (__m256i *)&v104;
                v47 = &v124;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v104,
                  &v124,
                  &v133);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v47);
              v48 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( !v48 )
              {
                v129 = (_DWORD *)v35;
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
              }
              *(_WORD *)(v48 + 4) = 29795;
              *(_DWORD *)v48 = 1701470831;
              v122 = 6;
              *(_QWORD *)&v123 = v48;
              *((_QWORD *)&v123 + 1) = 6;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
              v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v49 )
              {
                v129 = (_DWORD *)v35;
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
              }
              *(_BYTE *)(v49 + 4) = 108;
              *(_DWORD *)v49 = 1701080941;
              LOBYTE(v135) = 3;
              *((_QWORD *)&v135 + 1) = 5;
              *(_QWORD *)&v136 = v49;
              *((_QWORD *)&v136 + 1) = 5;
              v50 = (__m256i *)&v113;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v113, &v107, &v122);
              if ( (_QWORD)v113 == 0x8000000000000000LL )
              {
                v51 = *((_QWORD *)&v113 + 1);
                v52 = 32LL * *((_QWORD *)&v114 + 1);
                v118.i128[1] = *(_OWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1) + 16);
                v53 = *(_QWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1));
                v118.i64[1] = *(_QWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1) + 8);
                v118.i64[0] = v53;
                *(_OWORD *)(*((_QWORD *)&v113 + 1) + v52 + 16) = v136;
                v54 = *((__int128 **)&v135 + 1);
                *(_OWORD *)(v51 + v52) = v135;
                if ( v118.i8[0] != 6 )
                {
                  v50 = &v118;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v118);
                }
              }
              else
              {
                v127 = v116;
                v126 = v115;
                v125 = v114;
                v124 = v113;
                v134 = v136;
                v133 = v135;
                v50 = (__m256i *)&v104;
                v54 = &v124;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v104,
                  &v124,
                  &v133);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50, v54);
              v55 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
              if ( !v55 )
              {
                v129 = (_DWORD *)v35;
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
              }
              *v55 = 0x79625F64656E776FLL;
              v122 = 8;
              *(_QWORD *)&v123 = v55;
              *((_QWORD *)&v123 + 1) = 8;
              v56 = *((_QWORD *)&__dst[2] + 1);
              if ( __dst[2] < 0 )
              {
                v59 = 0;
LABEL_108:
                v129 = (_DWORD *)v35;
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v59, v56);
              }
              v57 = *(const void **)&__dst[2];
              if ( *((_QWORD *)&__dst[2] + 1) )
              {
                v111 = *(const void **)&__dst[2];
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, *(_QWORD *)&__dst[2]);
                v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v56, 1);
                v59 = 1;
                if ( !v58 )
                  goto LABEL_108;
                v60 = v58;
                v57 = v111;
              }
              else
              {
                v60 = 1;
              }
              memcpy((void *)v60, v57, v56);
              LOBYTE(v135) = 3;
              *((_QWORD *)&v135 + 1) = v56;
              *(_QWORD *)&v136 = v60;
              *((_QWORD *)&v136 + 1) = v56;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v113, &v107, &v122);
              v5 = (_QWORD *)v112;
              if ( (_QWORD)v113 == 0x8000000000000000LL )
              {
                v61 = *((_QWORD *)&v113 + 1);
                v62 = 32LL * *((_QWORD *)&v114 + 1);
                v118.i128[1] = *(_OWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1) + 16);
                v63 = *(_QWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1));
                v118.i64[1] = *(_QWORD *)(*((_QWORD *)&v113 + 1) + 32LL * *((_QWORD *)&v114 + 1) + 8);
                v118.i64[0] = v63;
                *(_OWORD *)(*((_QWORD *)&v113 + 1) + v62 + 16) = v136;
                *(_OWORD *)(v61 + v62) = v135;
                if ( v118.i8[0] != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v118);
              }
              else
              {
                v127 = v116;
                v126 = v115;
                v125 = v114;
                v124 = v113;
                v134 = v136;
                v133 = v135;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v104,
                  &v124,
                  &v133);
              }
              v106.i128[1] = v108;
              v106.i64[1] = v107;
              v106.i8[0] = 5;
              v64 = v121;
              if ( v121 == v119 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v119);
              *(__m256i *)(v120 + 32 * v64) = v106;
              v121 = v64 + 1;
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__dst);
              v35 += 232;
              v34 = v103;
              v33 = (char *)__dst + 8;
              if ( v102 + 232 == v103 )
              {
                v35 = v103;
                break;
              }
            }
            v129 = (_DWORD *)v35;
          }
          if ( v34 != v35 )
          {
            v65 = (v34 - v35) / 0xE8uLL;
            do
            {
              v33 = (char *)v35;
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v35);
              v35 += 232;
              --v65;
            }
            while ( v65 );
          }
          if ( (_QWORD)v101 )
          {
            v34 = 232 * v101;
            v33 = *((char **)&v101 + 1);
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v101 + 1), 232 * v101, 8);
          }
          v122 = 0;
          *((_QWORD *)&v123 + 1) = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v34);
          v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
          if ( !v66 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
          *(_WORD *)(v66 + 4) = 29795;
          *(_DWORD *)v66 = 1701470831;
          v128 = 6;
          v129 = (_DWORD *)v66;
          v130 = 6;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
          v67 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v67 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
          *v67 = 1953720684;
          LOBYTE(v133) = 3;
          *((_QWORD *)&v133 + 1) = 4;
          *(_QWORD *)&v134 = v67;
          *((_QWORD *)&v134 + 1) = 4;
          v68 = &v124;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v124, &v122, &v128);
          if ( (_QWORD)v124 == 0x8000000000000000LL )
          {
            v69 = *((_QWORD *)&v124 + 1);
            v70 = 32LL * *((_QWORD *)&v125 + 1);
            v136 = *(_OWORD *)(*((_QWORD *)&v124 + 1) + 32LL * *((_QWORD *)&v125 + 1) + 16);
            v71 = *(_QWORD *)(*((_QWORD *)&v124 + 1) + 32LL * *((_QWORD *)&v125 + 1));
            *((_QWORD *)&v135 + 1) = *(_QWORD *)(*((_QWORD *)&v124 + 1) + 32LL * *((_QWORD *)&v125 + 1) + 8);
            *(_QWORD *)&v135 = v71;
            *(_OWORD *)(*((_QWORD *)&v124 + 1) + v70 + 16) = v134;
            v72 = *((_OWORD **)&v133 + 1);
            *(_OWORD *)(v69 + v70) = v133;
            if ( (_BYTE)v135 != 6 )
            {
              v68 = &v135;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v135);
            }
          }
          else
          {
            *(_QWORD *)&__dst[3] = v127;
            __dst[2] = v126;
            __dst[1] = v125;
            __dst[0] = v124;
            v105 = v134;
            v104 = v133;
            v68 = &v113;
            v72 = __dst;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v113,
              __dst,
              &v104);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v68, v72);
          v73 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v73 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
          *v73 = 1635017060;
          v128 = 4;
          v129 = v73;
          v130 = 4;
          serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(__dst, &v119);
          if ( LOBYTE(__dst[0]) == 6 )
          {
            *(_QWORD *)&v124 = *((_QWORD *)&__dst[0] + 1);
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "called `Result::unwrap()` on an `Err` value",
              43,
              &v124,
              &off_10195E860,
              &off_10195D668);
          }
          v134 = __dst[1];
          v133 = __dst[0];
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v124, &v122, &v128);
          if ( (_QWORD)v124 == 0x8000000000000000LL )
          {
            v74 = *((_QWORD *)&v124 + 1);
            v75 = 32LL * *((_QWORD *)&v125 + 1);
            v136 = *(_OWORD *)(*((_QWORD *)&v124 + 1) + 32LL * *((_QWORD *)&v125 + 1) + 16);
            v76 = *(_QWORD *)(*((_QWORD *)&v124 + 1) + 32LL * *((_QWORD *)&v125 + 1));
            *((_QWORD *)&v135 + 1) = *(_QWORD *)(*((_QWORD *)&v124 + 1) + 32LL * *((_QWORD *)&v125 + 1) + 8);
            *(_QWORD *)&v135 = v76;
            *(_OWORD *)(*((_QWORD *)&v124 + 1) + v75 + 16) = v134;
            *(_OWORD *)(v74 + v75) = v133;
            if ( (_BYTE)v135 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v135);
          }
          else
          {
            *(_QWORD *)&__dst[3] = v127;
            __dst[2] = v126;
            __dst[1] = v125;
            __dst[0] = v124;
            v105 = v134;
            v104 = v133;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v113,
              __dst,
              &v104);
          }
          *(_QWORD *)&v108 = v123;
          *(__int64 *)((char *)v106.i64 + 7) = v122;
          *(__int128 *)((char *)v106.i128 + 15) = v123;
          v118.i8[0] = 5;
          v118.i64[3] = *((_QWORD *)&v123 + 1);
          *(__int128 *)((char *)v118.i128 + 1) = v106.i128[0];
          *(__int64 *)((char *)&v118.i64[2] + 1) = v123 >> 8;
          _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h7212e14c3f6814bb(
            &v87,
            &v118);
          v77 = v120;
          for ( i = v121 + 1; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v77);
            v77 += 32;
          }
          if ( v119 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, 32 * v119, 8);
          v79 = v87;
          qmemcpy(v84, v88, sizeof(v84));
          *(_BYTE *)(a2 + 728) = 1;
          if ( v79 == 3 )
          {
            *v117 = 3;
LABEL_103:
            *v5 = 3;
            v21 = 5;
            goto LABEL_106;
          }
          v90 = v79;
          qmemcpy(v91, v84, sizeof(v91));
          v80 = *(_QWORD *)(a2 + 696);
          if ( v80 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 704), v80, 1);
          v26 = (_QWORD *)(a2 + 648);
        }
        else
        {
          codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
            &v90,
            404,
            &unk_1015DCC30,
            16,
            "proxy.upstreamcodex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
            0xEu);
          v29 = *(_QWORD *)(a2 + 696);
          if ( v29 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 704), v29, 1);
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(v26);
        v81 = v90;
        qmemcpy(v86, v91, sizeof(v86));
        v82 = *(_OWORD *)&v91[13];
        *v117 = 1;
        if ( v81 == 3 )
          goto LABEL_103;
        v112 = v82;
        qmemcpy(v85, v86, sizeof(v85));
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..list_models..$u7b$$u7b$closure$u7d$$u7d$$GT$::h75bd60e3ee5c5dc9((__int64)v132);
        *(_QWORD *)&v89[0] = v81;
        qmemcpy((char *)v89 + 8, v85, 0x68u);
        v89[7] = v112;
        *(_BYTE *)(a2 + 573) = 0;
        *(_BYTE *)(a2 + 571) = 0;
        *(_WORD *)(a2 + 569) = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
      }
      else
      {
        v93[0] = v20;
        v93[1] = v109;
        v93[2] = v110;
        v93[3] = v132;
        v94 = v96;
        v95 = v97;
        _$LT$axum..extract..rejection..PathRejection$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::hb9f6f75d0ea2f204(
          v89,
          v93);
        *(_BYTE *)(a2 + 573) = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 520);
        v5 = (_QWORD *)v112;
        *(_BYTE *)(a2 + 571) = 0;
        if ( *(_BYTE *)(a2 + 569) )
        {
          v30 = *(_QWORD *)(a2 + 576);
          v31 = *(_QWORD *)(a2 + 584);
          if ( *(_QWORD *)v31 )
            (*(void (__fastcall **)(_QWORD))v31)(*(_QWORD *)(a2 + 576));
          v32 = *(_QWORD *)(v31 + 8);
          if ( v32 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16));
        }
        *(_BYTE *)(a2 + 569) = 0;
        if ( *(_BYTE *)(a2 + 570) )
          core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(a2 + 288);
        *(_BYTE *)(a2 + 570) = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2 + 240);
      }
      qmemcpy(v5, v89, 0x80u);
      v21 = 1;
LABEL_106:
      *(_BYTE *)(a2 + 568) = v21;
      return v5;
    case 4:
      v10 = *(void **)(a2 + 576);
      v11 = *(__int64 (__fastcall ***)())(a2 + 584);
      goto LABEL_15;
    case 5:
      v117 = (_BYTE *)(a2 + 736);
      v12 = *(unsigned __int8 *)(a2 + 736);
      v132 = (_QWORD *)(a2 + 576);
      switch ( v12 )
      {
        case 0LL:
          v13 = v132;
          goto LABEL_23;
        case 1LL:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D500);
        case 2LL:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D500);
        case 3LL:
          if ( *(_BYTE *)(a2 + 728) )
          {
            if ( *(_BYTE *)(a2 + 728) == 1 )
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195D680);
            core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195D680);
          }
          v26 = *(_QWORD **)(a2 + 720);
          goto LABEL_39;
      }
  }
}
