// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream14ensure_created @ 0x100a8d750 | 基线 same-set
void __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::ensure_created::h50fd5f7945935c66(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // r14
  __int64 v3; // r15
  _DWORD *v4; // rax
  void *v5; // rax
  void ***v6; // rdi
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  void ***v10; // rdx
  void ***v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // r15
  _WORD *v14; // rax
  signed __int64 v15; // r15
  __int64 v16; // r14
  const void *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbx
  void ***v20; // rdi
  __int64 (__fastcall *v21)(); // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  void ***v24; // rdx
  void ***v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rax
  void ***v28; // rdi
  __int64 (__fastcall *v29)(); // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  void ***v32; // rdx
  void ***v33; // rsi
  void *v34; // rax
  unsigned __int64 v35; // rax
  void ***v36; // rdi
  __int64 (__fastcall *v37)(); // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  void ***v40; // rdx
  void ***v41; // rsi
  __int64 v42; // rax
  void *v43; // rax
  void ***v44; // rdi
  __int64 (__fastcall *v45)(); // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  void ***v48; // rdx
  void ***v49; // rsi
  __int64 v50; // rax
  signed __int64 v51; // r15
  __int64 v52; // r13
  const void *v53; // r14
  __int64 v54; // rax
  __int64 v55; // rbx
  void ***v56; // rdi
  __int64 (__fastcall *v57)(); // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  void ***v60; // rdx
  void ***v61; // rsi
  __int64 v62; // rax
  __int64 (__fastcall *v63)(); // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  void ***v66; // rdx
  __int64 (__fastcall *v67)(); // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r9
  void *v72; // rbx
  size_t v73; // r14
  _QWORD *v74; // rax
  __int64 v75; // r15
  _QWORD *v76; // r12
  _QWORD v77[4]; // [rsp+0h] [rbp-190h] BYREF
  _QWORD *v78; // [rsp+20h] [rbp-170h]
  _QWORD v79[2]; // [rsp+28h] [rbp-168h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+38h] [rbp-158h]
  _QWORD *v81; // [rsp+40h] [rbp-150h]
  _QWORD v82[2]; // [rsp+48h] [rbp-148h] BYREF
  __int64 v83; // [rsp+58h] [rbp-138h]
  __int64 v84; // [rsp+60h] [rbp-130h] BYREF
  _DWORD *v85; // [rsp+68h] [rbp-128h]
  __int64 v86; // [rsp+70h] [rbp-120h]
  __int64 v87; // [rsp+78h] [rbp-118h]
  __int64 v88; // [rsp+80h] [rbp-110h] BYREF
  _WORD *v89; // [rsp+88h] [rbp-108h]
  __int64 v90; // [rsp+90h] [rbp-100h]
  void **v91; // [rsp+98h] [rbp-F8h] BYREF
  __int64 (__fastcall *v92)(); // [rsp+A0h] [rbp-F0h]
  void ****v93; // [rsp+A8h] [rbp-E8h]
  __int64 (__fastcall *v94)(); // [rsp+B0h] [rbp-E0h]
  __int64 v95; // [rsp+B8h] [rbp-D8h]
  __int64 v96; // [rsp+C0h] [rbp-D0h]
  __int64 v97; // [rsp+C8h] [rbp-C8h]
  void *v98; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v99; // [rsp+D8h] [rbp-B8h]
  __int64 v100; // [rsp+E0h] [rbp-B0h]
  __int64 v101; // [rsp+E8h] [rbp-A8h]
  void **v102; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 (__fastcall *v103)(); // [rsp+F8h] [rbp-98h]
  void ****v104; // [rsp+100h] [rbp-90h]
  __int64 (__fastcall *v105)(); // [rsp+108h] [rbp-88h]
  __int64 v106; // [rsp+110h] [rbp-80h]
  __int64 v107; // [rsp+118h] [rbp-78h]
  __int64 v108; // [rsp+120h] [rbp-70h]
  __int64 v109; // [rsp+128h] [rbp-68h] BYREF
  void *__src; // [rsp+130h] [rbp-60h]
  size_t __n; // [rsp+138h] [rbp-58h]
  __int64 v112; // [rsp+140h] [rbp-50h]
  void ***v113; // [rsp+148h] [rbp-48h] BYREF
  __int64 v114; // [rsp+150h] [rbp-40h]
  __int64 v115; // [rsp+158h] [rbp-38h]
  __int64 v116; // [rsp+160h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 428) ) /*0x100a8d764*/
  {
    v2 = (_QWORD *)a1; /*0x100a8d77f*/
    v81 = a2; /*0x100a8d782*/
    *(_BYTE *)(a1 + 428) = 1; /*0x100a8d789*/
    v79[0] = 0; /*0x100a8d790*/
    v80 = nullptr; /*0x100a8d79b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a8d7a6*/
    v3 = 4; /*0x100a8d7ab*/
    v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a8d7bb*/
    if ( !v4 ) /*0x100a8d7c3*/
      goto LABEL_65; /*0x100a8d7c3*/
    *v4 = 1701869940; /*0x100a8d7cc*/
    v84 = 4; /*0x100a8d7d2*/
    v85 = v4; /*0x100a8d7dd*/
    v86 = 4; /*0x100a8d7e4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a8d7ef*/
    v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x100a8d7fe*/
    if ( !v5 ) /*0x100a8d806*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100a8e732*/
    qmemcpy(v5, "response.created", 16); /*0x100a8d824*/
    LOBYTE(v113) = 3; /*0x100a8d827*/
    v114 = 16; /*0x100a8d82b*/
    v115 = (__int64)v5; /*0x100a8d833*/
    v116 = 16; /*0x100a8d837*/
    v6 = &v102; /*0x100a8d83f*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v79, &v84); /*0x100a8d854*/
    if ( __OFSUB__(0, v102) ) /*0x100a8d85b*/
    {
      v7 = v103; /*0x100a8d864*/
      v8 = 32LL * (_QWORD)v105; /*0x100a8d872*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8d87b*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8d884*/
      v9 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8d888*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8d891*/
      v109 = v9; /*0x100a8d895*/
      *(_QWORD *)((char *)v103 + v8 + 24) = v116; /*0x100a8d89d*/
      *(_QWORD *)((char *)v7 + v8 + 16) = v115; /*0x100a8d8a6*/
      v10 = v113; /*0x100a8d8ab*/
      v11 = (void ***)v114; /*0x100a8d8af*/
      *(_QWORD *)((char *)v7 + v8 + 8) = v114; /*0x100a8d8b3*/
      *(_QWORD *)((char *)v7 + v8) = v10; /*0x100a8d8b8*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8d8c0*/
      {
        v6 = (void ***)&v109; /*0x100a8d8c6*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8d8ca*/
      }
    }
    else
    {
      v97 = v108; /*0x100a8d8d8*/
      v96 = v107; /*0x100a8d8e3*/
      v95 = v106; /*0x100a8d8ee*/
      v94 = v105; /*0x100a8d8fc*/
      v93 = v104; /*0x100a8d90a*/
      v92 = v103; /*0x100a8d91f*/
      v91 = v102; /*0x100a8d926*/
      v101 = v116; /*0x100a8d931*/
      v100 = v115; /*0x100a8d93c*/
      v99 = v114; /*0x100a8d94b*/
      v98 = v113; /*0x100a8d952*/
      v6 = (void ***)&v109; /*0x100a8d959*/
      v11 = &v91; /*0x100a8d95d*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8d96b*/
        &v109,
        &v91,
        &v98);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v11); /*0x100a8d970*/
    v3 = 8; /*0x100a8d975*/
    v12 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100a8d985*/
    if ( !v12 ) /*0x100a8d98d*/
LABEL_65:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x100a8e721*/
    *v12 = 0x65736E6F70736572LL; /*0x100a8d993*/
    v77[0] = 8; /*0x100a8d996*/
    v77[3] = v12; /*0x100a8d9a1*/
    v77[1] = v12; /*0x100a8d9a8*/
    v77[2] = 8; /*0x100a8d9af*/
    v82[0] = 0; /*0x100a8d9ba*/
    v83 = 0; /*0x100a8d9c5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x100a8d9d0*/
    v13 = 2; /*0x100a8d9d5*/
    v14 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100a8d9e5*/
    if ( !v14 ) /*0x100a8d9ed*/
      goto LABEL_64; /*0x100a8d9ed*/
    *v14 = 25705; /*0x100a8d9f6*/
    v88 = 2; /*0x100a8d9fb*/
    v89 = v14; /*0x100a8da06*/
    v90 = 2; /*0x100a8da0d*/
    v15 = v2[7]; /*0x100a8da18*/
    if ( v15 < 0 ) /*0x100a8da1f*/
    {
      v16 = 0; /*0x100a8da21*/
      goto LABEL_12; /*0x100a8da21*/
    }
    v17 = (const void *)v2[6]; /*0x100a8da34*/
    if ( v15 ) /*0x100a8da38*/
    {
      v78 = v2; /*0x100a8da3a*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100a8da41*/
      v16 = 1; /*0x100a8da46*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x100a8da54*/
      if ( !v18 ) /*0x100a8da5c*/
LABEL_12:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15); /*0x100a8da24*/
      v19 = v18; /*0x100a8da5e*/
      v2 = v78; /*0x100a8da61*/
    }
    else
    {
      v19 = 1; /*0x100a8da6a*/
    }
    memcpy((void *)v19, v17, v15); /*0x100a8da78*/
    LOBYTE(v113) = 3; /*0x100a8da7d*/
    v114 = v15; /*0x100a8da81*/
    v115 = v19; /*0x100a8da85*/
    v116 = v15; /*0x100a8da89*/
    v20 = &v102; /*0x100a8da8d*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v82, &v88); /*0x100a8daa2*/
    if ( v102 == (void **)0x8000000000000000LL ) /*0x100a8dac2*/
    {
      v21 = v103; /*0x100a8dac4*/
      v22 = 32LL * (_QWORD)v105; /*0x100a8dad2*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8dadb*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8dae4*/
      v23 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8dae8*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8daf1*/
      v109 = v23; /*0x100a8daf5*/
      *(_QWORD *)((char *)v103 + v22 + 24) = v116; /*0x100a8dafd*/
      *(_QWORD *)((char *)v21 + v22 + 16) = v115; /*0x100a8db06*/
      v24 = v113; /*0x100a8db0b*/
      v25 = (void ***)v114; /*0x100a8db0f*/
      *(_QWORD *)((char *)v21 + v22 + 8) = v114; /*0x100a8db13*/
      *(_QWORD *)((char *)v21 + v22) = v24; /*0x100a8db18*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8db20*/
      {
        v20 = (void ***)&v109; /*0x100a8db26*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8db2a*/
      }
    }
    else
    {
      v97 = v108; /*0x100a8db38*/
      v96 = v107; /*0x100a8db43*/
      v95 = v106; /*0x100a8db4e*/
      v94 = v105; /*0x100a8db5c*/
      v93 = v104; /*0x100a8db6a*/
      v92 = v103; /*0x100a8db7f*/
      v91 = v102; /*0x100a8db86*/
      v101 = v116; /*0x100a8db91*/
      v100 = v115; /*0x100a8db9c*/
      v99 = v114; /*0x100a8dbab*/
      v98 = v113; /*0x100a8dbb2*/
      v20 = (void ***)&v109; /*0x100a8dbb9*/
      v25 = &v91; /*0x100a8dbbd*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8dbcb*/
        &v109,
        &v91,
        &v98);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v25); /*0x100a8dbd0*/
    v13 = 6; /*0x100a8dbd5*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a8dbe5*/
    if ( !v26 ) /*0x100a8dbed*/
      goto LABEL_64; /*0x100a8dbed*/
    *(_WORD *)(v26 + 4) = 29795; /*0x100a8dbf6*/
    *(_DWORD *)v26 = 1701470831; /*0x100a8dbfc*/
    v88 = 6; /*0x100a8dc02*/
    v89 = (_WORD *)v26; /*0x100a8dc0d*/
    v90 = 6; /*0x100a8dc14*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100a8dc1f*/
    v27 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100a8dc2e*/
    if ( !v27 ) /*0x100a8dc36*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100a8e743*/
    *v27 = 0x65736E6F70736572LL; /*0x100a8dc3c*/
    LOBYTE(v113) = 3; /*0x100a8dc3f*/
    v114 = 8; /*0x100a8dc43*/
    v115 = (__int64)v27; /*0x100a8dc4b*/
    v116 = 8; /*0x100a8dc4f*/
    v28 = &v102; /*0x100a8dc57*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v82, &v88); /*0x100a8dc6c*/
    if ( v102 == (void **)0x8000000000000000LL ) /*0x100a8dc78*/
    {
      v29 = v103; /*0x100a8dc7a*/
      v30 = 32LL * (_QWORD)v105; /*0x100a8dc88*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8dc91*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8dc9a*/
      v31 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8dc9e*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8dca7*/
      v109 = v31; /*0x100a8dcab*/
      *(_QWORD *)((char *)v103 + v30 + 24) = v116; /*0x100a8dcb3*/
      *(_QWORD *)((char *)v29 + v30 + 16) = v115; /*0x100a8dcbc*/
      v32 = v113; /*0x100a8dcc1*/
      v33 = (void ***)v114; /*0x100a8dcc5*/
      *(_QWORD *)((char *)v29 + v30 + 8) = v114; /*0x100a8dcc9*/
      *(_QWORD *)((char *)v29 + v30) = v32; /*0x100a8dcce*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8dcd6*/
      {
        v28 = (void ***)&v109; /*0x100a8dcdc*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8dce0*/
      }
    }
    else
    {
      v97 = v108; /*0x100a8dcee*/
      v96 = v107; /*0x100a8dcf9*/
      v95 = v106; /*0x100a8dd04*/
      v94 = v105; /*0x100a8dd12*/
      v93 = v104; /*0x100a8dd20*/
      v92 = v103; /*0x100a8dd35*/
      v91 = v102; /*0x100a8dd3c*/
      v101 = v116; /*0x100a8dd47*/
      v100 = v115; /*0x100a8dd52*/
      v99 = v114; /*0x100a8dd61*/
      v98 = v113; /*0x100a8dd68*/
      v28 = (void ***)&v109; /*0x100a8dd6f*/
      v33 = &v91; /*0x100a8dd73*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8dd81*/
        &v109,
        &v91,
        &v98);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v33); /*0x100a8dd86*/
    v13 = 10; /*0x100a8dd8b*/
    v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100a8dd9b*/
    if ( !v34 ) /*0x100a8dda3*/
      goto LABEL_64; /*0x100a8dda3*/
    qmemcpy(v34, "created_at", 10); /*0x100a8ddb3*/
    v88 = 10; /*0x100a8ddbc*/
    v89 = v34; /*0x100a8ddc7*/
    v90 = 10; /*0x100a8ddce*/
    v35 = v2[50]; /*0x100a8ddd9*/
    LOBYTE(v113) = 2; /*0x100a8dde7*/
    v114 = v35 >> 63; /*0x100a8ddeb*/
    v115 = v35; /*0x100a8ddef*/
    v36 = &v102; /*0x100a8ddf3*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v82, &v88); /*0x100a8de08*/
    if ( v102 == (void **)0x8000000000000000LL ) /*0x100a8de14*/
    {
      v37 = v103; /*0x100a8de16*/
      v38 = 32LL * (_QWORD)v105; /*0x100a8de24*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8de2d*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8de36*/
      v39 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8de3a*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8de43*/
      v109 = v39; /*0x100a8de47*/
      *(_QWORD *)((char *)v103 + v38 + 24) = v116; /*0x100a8de4f*/
      *(_QWORD *)((char *)v37 + v38 + 16) = v115; /*0x100a8de58*/
      v40 = v113; /*0x100a8de5d*/
      v41 = (void ***)v114; /*0x100a8de61*/
      *(_QWORD *)((char *)v37 + v38 + 8) = v114; /*0x100a8de65*/
      *(_QWORD *)((char *)v37 + v38) = v40; /*0x100a8de6a*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8de72*/
      {
        v36 = (void ***)&v109; /*0x100a8de78*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8de7c*/
      }
    }
    else
    {
      v97 = v108; /*0x100a8de8a*/
      v96 = v107; /*0x100a8de95*/
      v95 = v106; /*0x100a8dea0*/
      v94 = v105; /*0x100a8deae*/
      v93 = v104; /*0x100a8debc*/
      v92 = v103; /*0x100a8ded1*/
      v91 = v102; /*0x100a8ded8*/
      v101 = v116; /*0x100a8dee3*/
      v100 = v115; /*0x100a8deee*/
      v99 = v114; /*0x100a8defd*/
      v98 = v113; /*0x100a8df04*/
      v36 = (void ***)&v109; /*0x100a8df0b*/
      v41 = &v91; /*0x100a8df0f*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8df1d*/
        &v109,
        &v91,
        &v98);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v41); /*0x100a8df22*/
    v13 = 6; /*0x100a8df27*/
    v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a8df37*/
    if ( !v42 ) /*0x100a8df3f*/
      goto LABEL_64; /*0x100a8df3f*/
    *(_WORD *)(v42 + 4) = 29557; /*0x100a8df48*/
    *(_DWORD *)v42 = 1952543859; /*0x100a8df4e*/
    v88 = 6; /*0x100a8df54*/
    v89 = (_WORD *)v42; /*0x100a8df5f*/
    v90 = 6; /*0x100a8df66*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100a8df71*/
    v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100a8df80*/
    if ( !v43 ) /*0x100a8df88*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x100a8e754*/
    qmemcpy(v43, "in_progress", 11); /*0x100a8df98*/
    LOBYTE(v113) = 3; /*0x100a8dfa2*/
    v114 = 11; /*0x100a8dfa6*/
    v115 = (__int64)v43; /*0x100a8dfae*/
    v116 = 11; /*0x100a8dfb2*/
    v44 = &v102; /*0x100a8dfba*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v82, &v88); /*0x100a8dfcf*/
    if ( v102 == (void **)0x8000000000000000LL ) /*0x100a8dfdb*/
    {
      v45 = v103; /*0x100a8dfdd*/
      v46 = 32LL * (_QWORD)v105; /*0x100a8dfeb*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8dff4*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8dffd*/
      v47 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8e001*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8e00a*/
      v109 = v47; /*0x100a8e00e*/
      *(_QWORD *)((char *)v103 + v46 + 24) = v116; /*0x100a8e016*/
      *(_QWORD *)((char *)v45 + v46 + 16) = v115; /*0x100a8e01f*/
      v48 = v113; /*0x100a8e024*/
      v49 = (void ***)v114; /*0x100a8e028*/
      *(_QWORD *)((char *)v45 + v46 + 8) = v114; /*0x100a8e02c*/
      *(_QWORD *)((char *)v45 + v46) = v48; /*0x100a8e031*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8e039*/
      {
        v44 = (void ***)&v109; /*0x100a8e03f*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8e043*/
      }
    }
    else
    {
      v97 = v108; /*0x100a8e051*/
      v96 = v107; /*0x100a8e05c*/
      v95 = v106; /*0x100a8e067*/
      v94 = v105; /*0x100a8e075*/
      v93 = v104; /*0x100a8e083*/
      v92 = v103; /*0x100a8e098*/
      v91 = v102; /*0x100a8e09f*/
      v101 = v116; /*0x100a8e0aa*/
      v100 = v115; /*0x100a8e0b5*/
      v99 = v114; /*0x100a8e0c4*/
      v98 = v113; /*0x100a8e0cb*/
      v44 = (void ***)&v109; /*0x100a8e0d2*/
      v49 = &v91; /*0x100a8e0d6*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8e0e4*/
        &v109,
        &v91,
        &v98);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v49); /*0x100a8e0e9*/
    v13 = 5; /*0x100a8e0ee*/
    v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100a8e0fe*/
    if ( !v50 ) /*0x100a8e106*/
      goto LABEL_64; /*0x100a8e106*/
    *(_BYTE *)(v50 + 4) = 108; /*0x100a8e10f*/
    *(_DWORD *)v50 = 1701080941; /*0x100a8e113*/
    v88 = 5; /*0x100a8e119*/
    v89 = (_WORD *)v50; /*0x100a8e124*/
    v90 = 5; /*0x100a8e12b*/
    v51 = v2[4]; /*0x100a8e136*/
    if ( v51 < 0 ) /*0x100a8e13d*/
    {
      v52 = 0; /*0x100a8e13f*/
      goto LABEL_41; /*0x100a8e13f*/
    }
    v53 = (const void *)v2[3]; /*0x100a8e152*/
    if ( v51 ) /*0x100a8e156*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100a8e158*/
      v52 = 1; /*0x100a8e15d*/
      v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1); /*0x100a8e16b*/
      if ( !v54 ) /*0x100a8e173*/
LABEL_41:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v52, v51); /*0x100a8e142*/
      v55 = v54; /*0x100a8e175*/
    }
    else
    {
      v55 = 1; /*0x100a8e184*/
    }
    memcpy((void *)v55, v53, v51); /*0x100a8e192*/
    LOBYTE(v113) = 3; /*0x100a8e197*/
    v114 = v51; /*0x100a8e19b*/
    v115 = v55; /*0x100a8e19f*/
    v116 = v51; /*0x100a8e1a3*/
    v56 = &v102; /*0x100a8e1a7*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v82, &v88); /*0x100a8e1bc*/
    if ( v102 == (void **)0x8000000000000000LL ) /*0x100a8e1c8*/
    {
      v57 = v103; /*0x100a8e1ca*/
      v58 = 32LL * (_QWORD)v105; /*0x100a8e1d8*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8e1e1*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8e1ea*/
      v59 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8e1ee*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8e1f7*/
      v109 = v59; /*0x100a8e1fb*/
      *(_QWORD *)((char *)v103 + v58 + 24) = v116; /*0x100a8e203*/
      *(_QWORD *)((char *)v57 + v58 + 16) = v115; /*0x100a8e20c*/
      v60 = v113; /*0x100a8e211*/
      v61 = (void ***)v114; /*0x100a8e215*/
      *(_QWORD *)((char *)v57 + v58 + 8) = v114; /*0x100a8e219*/
      *(_QWORD *)((char *)v57 + v58) = v60; /*0x100a8e21e*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8e226*/
      {
        v56 = (void ***)&v109; /*0x100a8e22c*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8e230*/
      }
    }
    else
    {
      v97 = v108; /*0x100a8e23e*/
      v96 = v107; /*0x100a8e249*/
      v95 = v106; /*0x100a8e254*/
      v94 = v105; /*0x100a8e262*/
      v93 = v104; /*0x100a8e270*/
      v92 = v103; /*0x100a8e285*/
      v91 = v102; /*0x100a8e28c*/
      v101 = v116; /*0x100a8e297*/
      v100 = v115; /*0x100a8e2a2*/
      v99 = v114; /*0x100a8e2b1*/
      v98 = v113; /*0x100a8e2b8*/
      v56 = (void ***)&v109; /*0x100a8e2bf*/
      v61 = &v91; /*0x100a8e2c3*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8e2d1*/
        &v109,
        &v91,
        &v98);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v61); /*0x100a8e2d6*/
    v13 = 6; /*0x100a8e2db*/
    v62 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a8e2eb*/
    if ( !v62 ) /*0x100a8e2f3*/
LABEL_64:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x100a8e712*/
    *(_WORD *)(v62 + 4) = 29813; /*0x100a8e2f9*/
    *(_DWORD *)v62 = 1886680431; /*0x100a8e2ff*/
    v88 = 6; /*0x100a8e305*/
    v89 = (_WORD *)v62; /*0x100a8e310*/
    v90 = 6; /*0x100a8e317*/
    v114 = 0; /*0x100a8e322*/
    v115 = 8; /*0x100a8e32a*/
    v116 = 0; /*0x100a8e332*/
    LOBYTE(v113) = 4; /*0x100a8e33a*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v82, &v88); /*0x100a8e353*/
    if ( v102 == (void **)0x8000000000000000LL ) /*0x100a8e35f*/
    {
      v63 = v103; /*0x100a8e361*/
      v64 = 32LL * (_QWORD)v105; /*0x100a8e36f*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8e378*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8e381*/
      v65 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8e385*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8e38e*/
      v109 = v65; /*0x100a8e392*/
      *(_QWORD *)((char *)v103 + v64 + 24) = v116; /*0x100a8e39a*/
      *(_QWORD *)((char *)v63 + v64 + 16) = v115; /*0x100a8e3a3*/
      v66 = v113; /*0x100a8e3a8*/
      *(_QWORD *)((char *)v63 + v64 + 8) = v114; /*0x100a8e3b0*/
      *(_QWORD *)((char *)v63 + v64) = v66; /*0x100a8e3b5*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8e3bd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8e3c7*/
    }
    else
    {
      v97 = v108; /*0x100a8e3d5*/
      v96 = v107; /*0x100a8e3e0*/
      v95 = v106; /*0x100a8e3eb*/
      v94 = v105; /*0x100a8e3f9*/
      v93 = v104; /*0x100a8e407*/
      v92 = v103; /*0x100a8e41c*/
      v91 = v102; /*0x100a8e423*/
      v101 = v116; /*0x100a8e42e*/
      v100 = v115; /*0x100a8e439*/
      v99 = v114; /*0x100a8e448*/
      v98 = v113; /*0x100a8e44f*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8e468*/
        &v109,
        &v91,
        &v98);
    }
    v85 = (_DWORD *)v82[0]; /*0x100a8e47b*/
    v86 = v82[1]; /*0x100a8e482*/
    v87 = v83; /*0x100a8e490*/
    LOBYTE(v84) = 5; /*0x100a8e497*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v102, v79, v77); /*0x100a8e4b6*/
    if ( v102 == (void **)0x8000000000000000LL ) /*0x100a8e4c2*/
    {
      v67 = v103; /*0x100a8e4c4*/
      v68 = 32LL * (_QWORD)v105; /*0x100a8e4d2*/
      v112 = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 3); /*0x100a8e4db*/
      __n = *((_QWORD *)v103 + 4 * (_QWORD)v105 + 2); /*0x100a8e4e4*/
      v69 = *((_QWORD *)v103 + 4 * (_QWORD)v105); /*0x100a8e4e8*/
      __src = *((void **)v103 + 4 * (_QWORD)v105 + 1); /*0x100a8e4f1*/
      v109 = v69; /*0x100a8e4f5*/
      *(_QWORD *)((char *)v103 + v68 + 24) = v87; /*0x100a8e500*/
      *(_QWORD *)((char *)v67 + v68 + 16) = v86; /*0x100a8e50c*/
      v70 = v84; /*0x100a8e511*/
      *(_QWORD *)((char *)v67 + v68 + 8) = v85; /*0x100a8e51f*/
      *(_QWORD *)((char *)v67 + v68) = v70; /*0x100a8e524*/
      if ( (_BYTE)v109 != 6 ) /*0x100a8e52c*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v109); /*0x100a8e536*/
    }
    else
    {
      v97 = v108; /*0x100a8e544*/
      v96 = v107; /*0x100a8e54f*/
      v95 = v106; /*0x100a8e55a*/
      v94 = v105; /*0x100a8e568*/
      v93 = v104; /*0x100a8e576*/
      v92 = v103; /*0x100a8e58b*/
      v91 = v102; /*0x100a8e592*/
      v101 = v87; /*0x100a8e5a0*/
      v100 = v86; /*0x100a8e5ae*/
      v99 = (__int64)v85; /*0x100a8e5c3*/
      v98 = (void *)v84; /*0x100a8e5ca*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a8e5e3*/
        &v109,
        &v91,
        &v98);
    }
    v103 = (__int64 (__fastcall *)())v79[0]; /*0x100a8e5f6*/
    v104 = (void ****)v79[1]; /*0x100a8e5fd*/
    v105 = v80; /*0x100a8e60b*/
    LOBYTE(v102) = 5; /*0x100a8e612*/
    v98 = &unk_101674A40; /*0x100a8e620*/
    v99 = 16; /*0x100a8e627*/
    v113 = &v102; /*0x100a8e632*/
    v91 = &v98; /*0x100a8e63d*/
    v92 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a8e64b*/
    v93 = &v113; /*0x100a8e656*/
    v94 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100a8e664*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v109, &unk_1017C9F28, &v91); /*0x100a8e67d*/
    v72 = __src; /*0x100a8e682*/
    v73 = __n; /*0x100a8e686*/
    v74 = v81; /*0x100a8e68a*/
    v75 = v81[2]; /*0x100a8e694*/
    if ( __n > *v81 - v75 ) /*0x100a8e69e*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a8e6f8*/
        v81,
        v81[2],
        __n,
        1,
        1,
        v71);
      v74 = v81; /*0x100a8e6fd*/
      v75 = v81[2]; /*0x100a8e704*/
    }
    v76 = v74; /*0x100a8e6a7*/
    memcpy((void *)(v75 + v74[1]), v72, v73); /*0x100a8e6b0*/
    v76[2] = v73 + v75; /*0x100a8e6b8*/
    if ( v109 ) /*0x100a8e6c4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v109, 1); /*0x100a8e6ce*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100a8e6da*/
  }
}