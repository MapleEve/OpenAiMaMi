// __ZN13codexmate_lib4core5relay23codex_thread_visibility27inspect_relay_model_residue @ 0x100ad5910 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::inspect_relay_model_residue::ha09e0b2221be1f05(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v2; // r14
  __int64 *v3; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  signed __int64 v31; // r13
  __m128i v32; // xmm0
  signed __int64 v33; // rcx
  __int64 v34; // r12
  signed __int64 epi64; // rbx
  __int64 v36; // rcx
  signed __int64 v37; // r15
  signed __int64 v38; // r12
  __m128i v39; // xmm1
  signed __int64 v40; // rbx
  __m128i v41; // xmm0
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  signed __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rbx
  signed __int64 v49; // rdi
  signed __int64 v50; // rbx
  __m128i v51; // xmm0
  unsigned __int64 v52; // rbx
  _QWORD *v53; // r14
  __int64 v54; // rsi
  _QWORD *result; // rax
  __int64 v56; // rdx
  _BYTE v57[112]; // [rsp+0h] [rbp-390h] BYREF
  __int64 v58; // [rsp+70h] [rbp-320h]
  _QWORD *v59; // [rsp+78h] [rbp-318h]
  __int64 v60; // [rsp+80h] [rbp-310h]
  __int64 v61; // [rsp+88h] [rbp-308h]
  __m128i v62; // [rsp+90h] [rbp-300h] BYREF
  _QWORD v63[3]; // [rsp+A0h] [rbp-2F0h] BYREF
  _QWORD v64[3]; // [rsp+B8h] [rbp-2D8h] BYREF
  _QWORD v65[3]; // [rsp+D0h] [rbp-2C0h] BYREF
  _QWORD v66[3]; // [rsp+E8h] [rbp-2A8h] BYREF
  _QWORD v67[3]; // [rsp+100h] [rbp-290h] BYREF
  _QWORD v68[3]; // [rsp+118h] [rbp-278h] BYREF
  _QWORD *v69; // [rsp+130h] [rbp-260h]
  __int64 v70; // [rsp+138h] [rbp-258h]
  __int128 v71; // [rsp+140h] [rbp-250h] BYREF
  _OWORD *v72; // [rsp+150h] [rbp-240h]
  __int128 v73; // [rsp+158h] [rbp-238h]
  __int128 v74; // [rsp+168h] [rbp-228h]
  __int64 v75; // [rsp+178h] [rbp-218h]
  __int64 v76; // [rsp+180h] [rbp-210h] BYREF
  __int64 v77; // [rsp+188h] [rbp-208h]
  __int64 v78; // [rsp+190h] [rbp-200h]
  unsigned __int64 v79; // [rsp+198h] [rbp-1F8h]
  __int64 *v80; // [rsp+1A0h] [rbp-1F0h]
  signed __int64 v81; // [rsp+1A8h] [rbp-1E8h]
  __m128i v82; // [rsp+1B0h] [rbp-1E0h] BYREF
  _OWORD v83[6]; // [rsp+1C8h] [rbp-1C8h] BYREF
  _OWORD v84[9]; // [rsp+228h] [rbp-168h] BYREF
  __m128i v85; // [rsp+2C0h] [rbp-D0h] BYREF
  __int128 *v86; // [rsp+2D8h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+2E0h] [rbp-B0h] BYREF
  _QWORD *v88; // [rsp+2E8h] [rbp-A8h] BYREF
  __int64 (__fastcall *v89)(_QWORD, _QWORD); // [rsp+2F0h] [rbp-A0h]
  _OWORD *v90; // [rsp+2F8h] [rbp-98h]
  __int64 (__fastcall *v91)(_QWORD, _QWORD); // [rsp+300h] [rbp-90h]
  __int64 v92; // [rsp+308h] [rbp-88h]
  signed __int64 v93; // [rsp+310h] [rbp-80h]
  __int64 v94; // [rsp+318h] [rbp-78h] BYREF
  __int64 v95; // [rsp+320h] [rbp-70h]
  __int64 v96; // [rsp+328h] [rbp-68h]
  __int64 v97; // [rsp+330h] [rbp-60h] BYREF
  __int64 v98; // [rsp+338h] [rbp-58h]
  unsigned __int64 v99; // [rsp+340h] [rbp-50h]
  __int64 v100; // [rsp+348h] [rbp-48h]
  __int64 (__fastcall *v101)(_QWORD, _QWORD); // [rsp+350h] [rbp-40h]
  __int64 v102; // [rsp+358h] [rbp-38h]
  __int64 v103; // [rsp+360h] [rbp-30h]

  v69 = a1; /*0x100ad5924*/
  v100 = 0; /*0x100ad592b*/
  v94 = 0; /*0x100ad5933*/
  v95 = 8; /*0x100ad593b*/
  v96 = 0; /*0x100ad5943*/
  v97 = 0; /*0x100ad594b*/
  v98 = 8; /*0x100ad5953*/
  v99 = 0; /*0x100ad595b*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v84, a2); /*0x100ad596d*/
  v2 = *((__int64 **)&v84[0] + 1); /*0x100ad5980*/
  v58 = *((_QWORD *)&v84[0] + 1); /*0x100ad598f*/
  v59 = *((_QWORD **)&v84[0] + 1); /*0x100ad5996*/
  v70 = *(_QWORD *)&v84[0]; /*0x100ad599d*/
  v60 = *(_QWORD *)&v84[0]; /*0x100ad59a4*/
  v78 = *((_QWORD *)&v84[0] + 1) + 24LL * *(_QWORD *)&v84[1]; /*0x100ad59ab*/
  v61 = v78; /*0x100ad59b2*/
  v80 = *((__int64 **)&v84[0] + 1); /*0x100ad59b9*/
  if ( *(_QWORD *)&v84[1] ) /*0x100ad59c3*/
  {
    v79 = 0x8000000000000000LL; /*0x100ad59d7*/
    v3 = v80; /*0x100ad59de*/
    while ( 1 ) /*0x100ad5a00*/
    {
      v2 = v3 + 3; /*0x100ad5a00*/
      v59 = v3 + 3; /*0x100ad5a04*/
      v4 = *v3; /*0x100ad5a0b*/
      if ( *v3 == v79 ) /*0x100ad5a15*/
        break; /*0x100ad5a15*/
      v5 = v3[1]; /*0x100ad5a1b*/
      v101 = (__int64 (__fastcall *)(_QWORD, _QWORD))v3[2]; /*0x100ad5a29*/
      v92 = v5; /*0x100ad5a2d*/
      std::sys::fs::metadata::h32fa16d3052ea535(v84, v5, v101); /*0x100ad5a34*/
      if ( LOBYTE(v84[0]) ) /*0x100ad5a40*/
      {
        if ( (BYTE8(v84[0]) & 3) == 1 ) /*0x100ad5a51*/
        {
          v103 = v4; /*0x100ad5a57*/
          v6 = *((_QWORD *)&v84[0] + 1) - 1LL; /*0x100ad5a5b*/
          v7 = *(_QWORD *)(*((_QWORD *)&v84[0] + 1) - 1LL); /*0x100ad5a5f*/
          v8 = *(_QWORD *)(*((_QWORD *)&v84[0] + 1) + 7LL); /*0x100ad5a63*/
          if ( *(_QWORD *)v8 ) /*0x100ad5a67*/
            (*(void (__fastcall **)(__int64))v8)(v7); /*0x100ad5a73*/
          v9 = *(_QWORD *)(v8 + 8); /*0x100ad5a75*/
          if ( v9 ) /*0x100ad5a7c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x100ad5a85*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x100ad5a97*/
          v4 = v103; /*0x100ad5a9c*/
          v5 = v92; /*0x100ad5aa0*/
        }
      }
      else
      {
        codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h07bf0b0a45198e2f( /*0x100ad5aca*/
          (__int64)v84,
          v5,
          (__int64)v101);
        if ( BYTE8(v84[6]) != 3 ) /*0x100ad5ad6*/
        {
          qmemcpy(v57, v84, sizeof(v57)); /*0x100ad5bc2*/
          codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::h4c3d9b33239405b8( /*0x100ad5bcf*/
            (__int64)v83,
            (__int64)v57);
          if ( LODWORD(v83[0]) != 11 ) /*0x100ad5bdb*/
          {
            qmemcpy(v84, v83, 0x60u); /*0x100ad5d3d*/
            v88 = (_QWORD *)v5; /*0x100ad5d40*/
            v89 = v101; /*0x100ad5d4b*/
            *(_QWORD *)&v71 = &v88; /*0x100ad5d59*/
            *((_QWORD *)&v71 + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad5d67*/
            v72 = v84; /*0x100ad5d6e*/
            *(_QWORD *)&v73 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ad5d7c*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v67, &unk_1017B9AD3, &v71); /*0x100ad5d98*/
            v18 = v96; /*0x100ad5d9d*/
            if ( v96 == v94 ) /*0x100ad5da5*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v94); /*0x100ad5dab*/
            v19 = v95; /*0x100ad5db0*/
            v20 = 3 * v18; /*0x100ad5db4*/
            *(_QWORD *)(v95 + 8 * v20 + 16) = v67[2]; /*0x100ad5dbf*/
            v21 = v67[0]; /*0x100ad5dc4*/
            *(_QWORD *)(v19 + 8 * v20 + 8) = v67[1]; /*0x100ad5dd2*/
            *(_QWORD *)(v19 + 8 * v20) = v21; /*0x100ad5dd7*/
            v96 = v18 + 1; /*0x100ad5dde*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v84); /*0x100ad5de5*/
            goto LABEL_25; /*0x100ad5de5*/
          }
          if ( !BYTE8(v83[0]) ) /*0x100ad5be8*/
          {
LABEL_25:
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v57); /*0x100ad5dea*/
            goto LABEL_26; /*0x100ad5df1*/
          }
          rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v84, v57, &unk_10167D7EA, 127); /*0x100ad5c04*/
          if ( LODWORD(v84[0]) == 1 ) /*0x100ad5c10*/
          {
            *((_QWORD *)&v83[3] + 1) = *(_QWORD *)&v84[4]; /*0x100ad5c21*/
            *(_OWORD *)((char *)&v83[2] + 8) = v84[3]; /*0x100ad5c37*/
            *(_OWORD *)((char *)&v83[1] + 8) = v84[2]; /*0x100ad5c4d*/
            *(_QWORD *)&v83[1] = *((_QWORD *)&v84[1] + 1); /*0x100ad5c58*/
            v83[0] = *(_OWORD *)((char *)v84 + 8); /*0x100ad5c6d*/
            v76 = v5; /*0x100ad5c74*/
            v77 = (__int64)v101; /*0x100ad5c7f*/
            v88 = &v76; /*0x100ad5c8d*/
            v89 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad5c9b*/
            v90 = v83; /*0x100ad5ca9*/
            v91 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad5cb7*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v66, &unk_1017B9AD3, &v88); /*0x100ad5cd3*/
            v14 = v96; /*0x100ad5cd8*/
            if ( v96 == v94 ) /*0x100ad5ce0*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v94); /*0x100ad5ce6*/
            v15 = v95; /*0x100ad5ceb*/
            v16 = 3 * v14; /*0x100ad5cef*/
            *(_QWORD *)(v95 + 8 * v16 + 16) = v66[2]; /*0x100ad5cfa*/
            v17 = v66[0]; /*0x100ad5cff*/
            *(_QWORD *)(v15 + 8 * v16 + 8) = v66[1]; /*0x100ad5d0d*/
            *(_QWORD *)(v15 + 8 * v16) = v17; /*0x100ad5d12*/
            v96 = v14 + 1; /*0x100ad5d19*/
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v83); /*0x100ad5d24*/
            goto LABEL_25; /*0x100ad5d29*/
          }
          v75 = *(_QWORD *)&v84[4]; /*0x100ad5e1f*/
          v74 = v84[3]; /*0x100ad5e35*/
          v73 = v84[2]; /*0x100ad5e4b*/
          v72 = *((_OWORD **)&v84[1] + 1); /*0x100ad5e56*/
          v71 = *(_OWORD *)((char *)v84 + 8); /*0x100ad5e6b*/
          v22 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v84[4]); /*0x100ad5e72*/
          if ( v22 ) /*0x100ad5e7c*/
          {
            v84[0] = 0x8000000000000013LL; /*0x100ad5e90*/
            *(_QWORD *)&v84[1] = v22; /*0x100ad5ea2*/
            v88 = (_QWORD *)v5; /*0x100ad5ea9*/
            v89 = v101; /*0x100ad5eb4*/
            *(_QWORD *)&v83[0] = &v88; /*0x100ad5ec2*/
            *((_QWORD *)&v83[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad5ed0*/
            *(_QWORD *)&v83[1] = v84; /*0x100ad5ed7*/
            *((_QWORD *)&v83[1] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad5ee5*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v65, &unk_1017B9AD3, v83); /*0x100ad5f01*/
            v23 = v96; /*0x100ad5f06*/
            if ( v96 == v94 ) /*0x100ad5f0e*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v94); /*0x100ad5f14*/
            v24 = v95; /*0x100ad5f19*/
            v25 = 3 * v23; /*0x100ad5f1d*/
            *(_QWORD *)(v95 + 8 * v25 + 16) = v65[2]; /*0x100ad5f28*/
            v26 = v65[0]; /*0x100ad5f2d*/
            *(_QWORD *)(v24 + 8 * v25 + 8) = v65[1]; /*0x100ad5f3b*/
            *(_QWORD *)(v24 + 8 * v25) = v26; /*0x100ad5f40*/
            v96 = v23 + 1; /*0x100ad5f47*/
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v84); /*0x100ad5f4e*/
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v71); /*0x100ad5f5a*/
            goto LABEL_25; /*0x100ad5f5f*/
          }
          v103 = v4; /*0x100ad5f64*/
          v86 = &v71; /*0x100ad5f6f*/
          v87 = v22; /*0x100ad5f76*/
          while ( 2 ) /*0x100ad5fce*/
          {
            _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x100ad5fce*/
              v84,
              &v86);
            v31 = *(_QWORD *)&v84[0]; /*0x100ad5fdd*/
            if ( *(_QWORD *)&v84[0] == 0x8000000000000016LL ) /*0x100ad5fe7*/
            {
              if ( !v87 ) /*0x100ad5ff5*/
                goto LABEL_66; /*0x100ad5ff5*/
              rusqlite::row::Row::get::h97011a0484b66d6b(v84, &v87, 0, v30); /*0x100ad600b*/
              v31 = *(_QWORD *)&v84[0]; /*0x100ad601a*/
              v32 = _mm_loadu_si128((const __m128i *)((char *)v84 + 8)); /*0x100ad6021*/
              v33 = *((_QWORD *)&v84[1] + 1); /*0x100ad6029*/
              if ( *(_QWORD *)&v84[0] == 0x8000000000000016LL ) /*0x100ad6033*/
              {
                v85.i64[0] = *((_QWORD *)&v84[1] + 1); /*0x100ad6039*/
                v34 = v32.i64[0]; /*0x100ad6040*/
                epi64 = _mm_extract_epi64(v32, 1); /*0x100ad6045*/
                rusqlite::row::Row::get::h97011a0484b66d6b(v84, &v87, 1, *((_QWORD *)&v84[1] + 1)); /*0x100ad605f*/
                v31 = *(_QWORD *)&v84[0]; /*0x100ad6064*/
                v32 = _mm_loadu_si128((const __m128i *)((char *)v84 + 8)); /*0x100ad606b*/
                v37 = *((_QWORD *)&v84[1] + 1); /*0x100ad6073*/
                if ( *(_QWORD *)&v84[0] == 0x8000000000000016LL ) /*0x100ad6087*/
                {
                  v102 = v34; /*0x100ad608d*/
                  v93 = epi64; /*0x100ad6091*/
                  v82 = v32; /*0x100ad6095*/
                  v38 = v32.i64[0]; /*0x100ad609d*/
                  rusqlite::row::Row::get::h97011a0484b66d6b(v84, &v87, 2, v36); /*0x100ad60b5*/
                  v31 = *(_QWORD *)&v84[0]; /*0x100ad60ba*/
                  v39 = _mm_loadu_si128((const __m128i *)((char *)v84 + 8)); /*0x100ad60c1*/
                  v40 = *((_QWORD *)&v84[1] + 1); /*0x100ad60c9*/
                  if ( *(_QWORD *)&v84[0] == 0x8000000000000016LL ) /*0x100ad60dd*/
                  {
                    v41 = _mm_load_si128(&v82); /*0x100ad60ee*/
                    if ( v102 == 0x8000000000000001LL ) /*0x100ad60f6*/
                    {
LABEL_66:
                      v4 = v103; /*0x100ad647b*/
                      v5 = v92; /*0x100ad6486*/
                      core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v86); /*0x100ad648d*/
                      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v71); /*0x100ad64a0*/
                      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v57); /*0x100ad64ac*/
                      goto LABEL_26; /*0x100ad64b1*/
                    }
                    v33 = _mm_extract_epi64(v41, 1); /*0x100ad60fc*/
                    if ( v102 != v79 ) /*0x100ad6111*/
                    {
                      *(_QWORD *)&v84[0] = v102; /*0x100ad6117*/
                      *((_QWORD *)&v84[0] + 1) = v93; /*0x100ad6122*/
                      *(_QWORD *)&v84[1] = v85.i64[0]; /*0x100ad6130*/
                      *((_QWORD *)&v84[1] + 1) = v38; /*0x100ad6137*/
                      *(_QWORD *)&v84[2] = v33; /*0x100ad613e*/
                      *((_QWORD *)&v84[2] + 1) = v37; /*0x100ad6145*/
                      v84[3] = v39; /*0x100ad6153*/
                      *(_QWORD *)&v84[4] = v40; /*0x100ad615b*/
                      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100ad6171*/
                                               "\"subagent\"threadsupdated_at_msCOALESCE(updated_at_ms, 0)updated_atCOALE"
                                               "SCE(updated_at, 0)0codexmate_lib::core::relay::codex_project_stateproject"
                                               "less-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_che"
                                               "ckpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
                                               0xAu,
                                               (void *)_mm_extract_epi64(v39, 1)) )
                      {
                        ++v100; /*0x100ad6188*/
                        if ( v99 < 3 ) /*0x100ad6191*/
                        {
                          *(_QWORD *)&v83[0] = v84; /*0x100ad6197*/
                          *((_QWORD *)&v83[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ad61a5*/
                          *(_QWORD *)&v83[1] = (char *)&v84[1] + 8; /*0x100ad61b3*/
                          *((_QWORD *)&v83[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ad61ba*/
                          alloc::fmt::format::format_inner::h3c16c74008a310d4(v63, &unk_1017CAAC3, v83); /*0x100ad61d6*/
                          v42 = v99; /*0x100ad61db*/
                          if ( v99 == v97 ) /*0x100ad61e3*/
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v97); /*0x100ad61e9*/
                          v43 = v98; /*0x100ad61ee*/
                          v44 = 3 * v42; /*0x100ad61f2*/
                          *(_QWORD *)(v98 + 8 * v44 + 16) = v63[2]; /*0x100ad61fd*/
                          v45 = v63[0]; /*0x100ad6202*/
                          *(_QWORD *)(v43 + 8 * v44 + 8) = v63[1]; /*0x100ad6210*/
                          *(_QWORD *)(v43 + 8 * v44) = v45; /*0x100ad6215*/
                          v99 = v42 + 1; /*0x100ad621c*/
                        }
                      }
                      if ( *(_QWORD *)&v84[0] ) /*0x100ad622a*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v84[0] + 1), *(_QWORD *)&v84[0], 1); /*0x100ad6238*/
                      if ( *((_QWORD *)&v84[1] + 1) ) /*0x100ad6247*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v84[2], *((_QWORD *)&v84[1] + 1), 1); /*0x100ad6255*/
                      if ( *(_QWORD *)&v84[3] ) /*0x100ad6264*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v84[3] + 1), *(_QWORD *)&v84[3], 1); /*0x100ad6276*/
                      continue; /*0x100ad627b*/
                    }
                    v31 = v93; /*0x100ad646b*/
                    v47 = v85.i64[0]; /*0x100ad646f*/
                    goto LABEL_55; /*0x100ad6476*/
                  }
                  v62 = v39; /*0x100ad63df*/
                  v37 = *(_QWORD *)&v84[2]; /*0x100ad63e7*/
                  v39 = _mm_loadu_si128((const __m128i *)((char *)&v84[2] + 8)); /*0x100ad63ee*/
                  v81 = *((_QWORD *)&v84[3] + 1); /*0x100ad63fd*/
                  v51 = _mm_load_si128(&v82); /*0x100ad6407*/
                  v85 = v39; /*0x100ad640f*/
                  if ( v38 ) /*0x100ad6417*/
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(_mm_extract_epi64(v51, 1), v38, 1); /*0x100ad6428*/
                    v39 = _mm_load_si128(&v85); /*0x100ad642d*/
                  }
                  if ( v102 ) /*0x100ad643c*/
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v102, 1); /*0x100ad6447*/
                    v39 = _mm_load_si128(&v85); /*0x100ad644c*/
                  }
                  v33 = v40; /*0x100ad6454*/
                  v32 = _mm_load_si128(&v62); /*0x100ad6457*/
                  v46 = v81; /*0x100ad645f*/
                }
                else
                {
                  v102 = *(_QWORD *)&v84[2]; /*0x100ad6385*/
                  v39 = _mm_loadu_si128((const __m128i *)((char *)&v84[2] + 8)); /*0x100ad6389*/
                  v46 = *((_QWORD *)&v84[3] + 1); /*0x100ad6391*/
                  if ( v34 ) /*0x100ad639b*/
                  {
                    v49 = epi64; /*0x100ad63a2*/
                    v50 = *((_QWORD *)&v84[3] + 1); /*0x100ad63a5*/
                    v82 = v32; /*0x100ad63ab*/
                    v85 = v39; /*0x100ad63b3*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v34, 1); /*0x100ad63bb*/
                    v46 = v50; /*0x100ad63c0*/
                    v39 = _mm_load_si128(&v85); /*0x100ad63c3*/
                    v32 = _mm_load_si128(&v82); /*0x100ad63cb*/
                  }
                  v33 = v37; /*0x100ad63d3*/
                  v37 = v102; /*0x100ad63d6*/
                }
LABEL_54:
                v38 = _mm_extract_epi64(v32, 1); /*0x100ad62a5*/
                v47 = v32.i64[0]; /*0x100ad62ac*/
                v40 = v46; /*0x100ad62b1*/
LABEL_55:
                *(_QWORD *)&v83[0] = v31; /*0x100ad62b4*/
                *((_QWORD *)&v83[0] + 1) = v47; /*0x100ad62bb*/
                *(_QWORD *)&v83[1] = v38; /*0x100ad62c2*/
                *((_QWORD *)&v83[1] + 1) = v33; /*0x100ad62c9*/
                *(_QWORD *)&v83[2] = v37; /*0x100ad62d0*/
                *(__m128i *)((char *)&v83[2] + 8) = v39; /*0x100ad62d7*/
                *((_QWORD *)&v83[3] + 1) = v40; /*0x100ad62df*/
                v76 = v92; /*0x100ad62ed*/
                v77 = (__int64)v101; /*0x100ad62f8*/
                v88 = &v76; /*0x100ad6306*/
                v89 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad6314*/
                v90 = v83; /*0x100ad6322*/
                v91 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad6330*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_1017CAACF, &v88); /*0x100ad634c*/
                v48 = v96; /*0x100ad6351*/
                if ( v96 == v94 ) /*0x100ad636a*/
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v94); /*0x100ad6374*/
                v27 = v95; /*0x100ad5f90*/
                v28 = 3 * v48; /*0x100ad5f94*/
                *(_QWORD *)(v95 + 8 * v28 + 16) = v64[2]; /*0x100ad5f9f*/
                v29 = v64[0]; /*0x100ad5fa4*/
                *(_QWORD *)(v27 + 8 * v28 + 8) = v64[1]; /*0x100ad5fb2*/
                *(_QWORD *)(v27 + 8 * v28) = v29; /*0x100ad5fb7*/
                v96 = v48 + 1; /*0x100ad5fbe*/
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v83); /*0x100ad5fc9*/
                continue; /*0x100ad5fc9*/
              }
            }
            else
            {
              v32 = _mm_loadu_si128((const __m128i *)((char *)v84 + 8)); /*0x100ad6280*/
              v33 = *((_QWORD *)&v84[1] + 1); /*0x100ad6288*/
            }
            break;
          }
          v37 = *(_QWORD *)&v84[2]; /*0x100ad628f*/
          v39 = _mm_loadu_si128((const __m128i *)((char *)&v84[2] + 8)); /*0x100ad6296*/
          v46 = *((_QWORD *)&v84[3] + 1); /*0x100ad629e*/
          goto LABEL_54; /*0x100ad629e*/
        }
        qmemcpy(v83, v84, sizeof(v83)); /*0x100ad5aee*/
        v88 = (_QWORD *)v5; /*0x100ad5af1*/
        v89 = v101; /*0x100ad5afc*/
        *(_QWORD *)&v71 = &v88; /*0x100ad5b0a*/
        *((_QWORD *)&v71 + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad5b18*/
        v72 = v83; /*0x100ad5b1f*/
        *(_QWORD *)&v73 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ad5b2d*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v68, &unk_1017B9AD3, &v71); /*0x100ad5b49*/
        v10 = v96; /*0x100ad5b4e*/
        if ( v96 == v94 ) /*0x100ad5b56*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v94); /*0x100ad5b5c*/
        v11 = v95; /*0x100ad5b61*/
        v12 = 3 * v10; /*0x100ad5b65*/
        *(_QWORD *)(v95 + 8 * v12 + 16) = v68[2]; /*0x100ad5b70*/
        v13 = v68[0]; /*0x100ad5b75*/
        *(_QWORD *)(v11 + 8 * v12 + 8) = v68[1]; /*0x100ad5b83*/
        *(_QWORD *)(v11 + 8 * v12) = v13; /*0x100ad5b88*/
        v96 = v10 + 1; /*0x100ad5b8f*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v83); /*0x100ad5b9a*/
      }
LABEL_26:
      if ( v4 ) /*0x100ad5df9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x100ad5e0a*/
      v3 = v2; /*0x100ad59f0*/
      if ( v2 == (__int64 *)v78 ) /*0x100ad59fa*/
        goto LABEL_72; /*0x100ad59fa*/
    }
  }
  if ( (__int64 *)v78 != v2 ) /*0x100ad64d3*/
  {
    v52 = (v78 - (__int64)v2) / 0x18uLL; /*0x100ad64d8*/
    v53 = v2 + 1; /*0x100ad64dc*/
    do /*0x100ad64f7*/
    {
      v54 = *(v53 - 1); /*0x100ad64f9*/
      if ( v54 ) /*0x100ad6500*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v53, v54, 1); /*0x100ad650a*/
      v53 += 3; /*0x100ad64f0*/
      --v52; /*0x100ad64f4*/
    }
    while ( v52 ); /*0x100ad64f7*/
  }
LABEL_72:
  if ( v70 ) /*0x100ad651b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 24 * v70, 8); /*0x100ad6531*/
  result = v69; /*0x100ad653a*/
  v69[6] = v100; /*0x100ad6541*/
  result[5] = v99; /*0x100ad6549*/
  result[4] = v98; /*0x100ad6551*/
  result[3] = v97; /*0x100ad6559*/
  result[2] = v96; /*0x100ad6561*/
  v56 = v94; /*0x100ad6565*/
  result[1] = v95; /*0x100ad656d*/
  *result = v56; /*0x100ad6571*/
  return result; /*0x100ad6574*/
}