// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream14emit_completed @ 0x100ab9430 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_completed::h5f3d3616a675ff4b(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  _WORD *v4; // rax
  signed __int64 v5; // r12
  __int64 v6; // rbx
  const void *v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  void *v24; // rax
  unsigned __int64 v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  _QWORD *v39; // rsi
  __int64 v40; // rax
  signed __int64 v41; // r12
  __int64 v42; // rbx
  const void *v43; // r13
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  _QWORD *v51; // rsi
  __int64 v52; // rax
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // r15
  void *v60; // rax
  unsigned __int64 v61; // rax
  __int64 *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  _QWORD *v67; // rsi
  void *v68; // rax
  unsigned __int64 v69; // rax
  __int64 *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdx
  _QWORD *v75; // rsi
  void *v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r12
  _DWORD *v84; // rax
  void *v85; // rax
  __int64 *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rdx
  _QWORD *v91; // rsi
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v100; // [rsp+18h] [rbp-148h] BYREF
  _QWORD *v101; // [rsp+20h] [rbp-140h]
  __int64 v102; // [rsp+28h] [rbp-138h]
  __int64 v103; // [rsp+30h] [rbp-130h] BYREF
  _WORD *v104; // [rsp+38h] [rbp-128h]
  __int64 v105; // [rsp+40h] [rbp-120h]
  __int64 v106; // [rsp+48h] [rbp-118h]
  __int64 v107; // [rsp+50h] [rbp-110h] BYREF
  _QWORD *v108; // [rsp+58h] [rbp-108h]
  __int64 v109; // [rsp+60h] [rbp-100h]
  __int64 v110; // [rsp+68h] [rbp-F8h] BYREF
  __int64 v111; // [rsp+70h] [rbp-F0h]
  _QWORD *v112; // [rsp+78h] [rbp-E8h]
  __int64 v113; // [rsp+80h] [rbp-E0h]
  __int64 v114; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v115; // [rsp+90h] [rbp-D0h]
  _QWORD *v116; // [rsp+98h] [rbp-C8h]
  __int64 v117; // [rsp+A0h] [rbp-C0h]
  __int64 v118; // [rsp+A8h] [rbp-B8h]
  __int64 v119; // [rsp+B0h] [rbp-B0h]
  __int64 v120; // [rsp+B8h] [rbp-A8h]
  __int64 v121; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-98h]
  _QWORD *v123; // [rsp+D0h] [rbp-90h]
  __int64 v124; // [rsp+D8h] [rbp-88h]
  __int64 v125; // [rsp+E0h] [rbp-80h]
  __int64 v126; // [rsp+E8h] [rbp-78h]
  __int64 v127; // [rsp+F0h] [rbp-70h]
  __int64 v128; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v129; // [rsp+100h] [rbp-60h]
  __int64 v130; // [rsp+108h] [rbp-58h]
  __int64 v131; // [rsp+110h] [rbp-50h]
  __int64 v132; // [rsp+118h] [rbp-48h]
  __int64 v133; // [rsp+120h] [rbp-40h]
  _QWORD *v134; // [rsp+128h] [rbp-38h]
  __int64 v135; // [rsp+130h] [rbp-30h]

  v2 = a2; /*0x100ab9444*/
  v107 = 0; /*0x100ab944e*/
  v109 = 0; /*0x100ab9459*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100ab9464*/
  v3 = 2; /*0x100ab9469*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100ab9479*/
  if ( !v4 ) /*0x100ab9481*/
    goto LABEL_80; /*0x100ab9481*/
  *v4 = 25705; /*0x100ab948a*/
  v103 = 2; /*0x100ab948f*/
  v104 = v4; /*0x100ab949a*/
  v105 = 2; /*0x100ab94a1*/
  v5 = *(_QWORD *)(a2 + 40); /*0x100ab94ac*/
  if ( v5 < 0 ) /*0x100ab94b3*/
  {
    v6 = 0; /*0x100ab94b5*/
    goto LABEL_4; /*0x100ab94b5*/
  }
  v7 = *(const void **)(a2 + 32); /*0x100ab94c7*/
  if ( v5 ) /*0x100ab94d2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100ab94d4*/
    v6 = 1; /*0x100ab94d9*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100ab94e6*/
    if ( !v8 ) /*0x100ab94ee*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100ab94b7*/
    v9 = v8; /*0x100ab94f0*/
    v2 = a2; /*0x100ab94f3*/
  }
  else
  {
    v9 = 1; /*0x100ab94fc*/
  }
  memcpy((void *)v9, v7, v5); /*0x100ab950b*/
  LOBYTE(v132) = 3; /*0x100ab9510*/
  v133 = v5; /*0x100ab9514*/
  v134 = (_QWORD *)v9; /*0x100ab9518*/
  v135 = v5; /*0x100ab951c*/
  v10 = &v121; /*0x100ab9520*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v107, &v103); /*0x100ab9535*/
  if ( __OFSUB__(0, v121) ) /*0x100ab953c*/
  {
    v11 = v122; /*0x100ab9545*/
    v12 = 32 * v124; /*0x100ab9553*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100ab955c*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100ab9565*/
    v13 = *(_QWORD *)(v122 + 32 * v124); /*0x100ab9569*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100ab9572*/
    v128 = v13; /*0x100ab9576*/
    *(_QWORD *)(v122 + v12 + 24) = v135; /*0x100ab957e*/
    *(_QWORD *)(v11 + v12 + 16) = v134; /*0x100ab9587*/
    v14 = v132; /*0x100ab958c*/
    v15 = (_QWORD *)v133; /*0x100ab9590*/
    *(_QWORD *)(v11 + v12 + 8) = v133; /*0x100ab9594*/
    *(_QWORD *)(v11 + v12) = v14; /*0x100ab9599*/
    if ( (_BYTE)v128 != 6 ) /*0x100ab95a1*/
    {
      v10 = &v128; /*0x100ab95a7*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100ab95ab*/
    }
  }
  else
  {
    v120 = v127; /*0x100ab95b9*/
    v119 = v126; /*0x100ab95c4*/
    v118 = v125; /*0x100ab95cf*/
    v117 = v124; /*0x100ab95dd*/
    v116 = v123; /*0x100ab95eb*/
    v115 = v122; /*0x100ab9600*/
    v114 = v121; /*0x100ab9607*/
    v113 = v135; /*0x100ab9612*/
    v112 = v134; /*0x100ab961d*/
    v111 = v133; /*0x100ab962c*/
    v110 = v132; /*0x100ab9633*/
    v10 = &v128; /*0x100ab963a*/
    v15 = &v114; /*0x100ab963e*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ab964c*/
      &v128,
      &v114,
      &v110);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v15); /*0x100ab9651*/
  v3 = 6; /*0x100ab9656*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ab9666*/
  if ( !v16 ) /*0x100ab966e*/
    goto LABEL_80; /*0x100ab966e*/
  *(_WORD *)(v16 + 4) = 29795; /*0x100ab9677*/
  *(_DWORD *)v16 = 1701470831; /*0x100ab967d*/
  v103 = 6; /*0x100ab9683*/
  v104 = (_WORD *)v16; /*0x100ab968e*/
  v105 = 6; /*0x100ab9695*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100ab96a0*/
  v17 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100ab96af*/
  if ( !v17 ) /*0x100ab96b7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100aba99e*/
  *v17 = 0x65736E6F70736572LL; /*0x100ab96c7*/
  LOBYTE(v132) = 3; /*0x100ab96ca*/
  v133 = 8; /*0x100ab96ce*/
  v134 = v17; /*0x100ab96d6*/
  v135 = 8; /*0x100ab96da*/
  v18 = &v121; /*0x100ab96e2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v107, &v103); /*0x100ab96f7*/
  if ( v121 == 0x8000000000000000LL ) /*0x100ab970d*/
  {
    v19 = v122; /*0x100ab970f*/
    v20 = 32 * v124; /*0x100ab971d*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100ab9726*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100ab972f*/
    v21 = *(_QWORD *)(v122 + 32 * v124); /*0x100ab9733*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100ab973c*/
    v128 = v21; /*0x100ab9740*/
    *(_QWORD *)(v122 + v20 + 24) = v135; /*0x100ab9748*/
    *(_QWORD *)(v19 + v20 + 16) = v134; /*0x100ab9751*/
    v22 = v132; /*0x100ab9756*/
    v23 = (_QWORD *)v133; /*0x100ab975a*/
    *(_QWORD *)(v19 + v20 + 8) = v133; /*0x100ab975e*/
    *(_QWORD *)(v19 + v20) = v22; /*0x100ab9763*/
    if ( (_BYTE)v128 != 6 ) /*0x100ab976b*/
    {
      v18 = &v128; /*0x100ab9771*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100ab9775*/
    }
  }
  else
  {
    v120 = v127; /*0x100ab9783*/
    v119 = v126; /*0x100ab978e*/
    v118 = v125; /*0x100ab9799*/
    v117 = v124; /*0x100ab97a7*/
    v116 = v123; /*0x100ab97b5*/
    v115 = v122; /*0x100ab97ca*/
    v114 = v121; /*0x100ab97d1*/
    v113 = v135; /*0x100ab97dc*/
    v112 = v134; /*0x100ab97e7*/
    v111 = v133; /*0x100ab97f6*/
    v110 = v132; /*0x100ab97fd*/
    v18 = &v128; /*0x100ab9804*/
    v23 = &v114; /*0x100ab9808*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ab9816*/
      &v128,
      &v114,
      &v110);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v23); /*0x100ab981b*/
  v3 = 10; /*0x100ab9820*/
  v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100ab9830*/
  if ( !v24 ) /*0x100ab9838*/
    goto LABEL_80; /*0x100ab9838*/
  qmemcpy(v24, "created_at", 10); /*0x100ab9848*/
  v103 = 10; /*0x100ab9851*/
  v104 = v24; /*0x100ab985c*/
  v105 = 10; /*0x100ab9863*/
  v25 = *(_QWORD *)(v2 + 328); /*0x100ab986e*/
  LOBYTE(v132) = 2; /*0x100ab987c*/
  v133 = v25 >> 63; /*0x100ab9880*/
  v134 = (_QWORD *)v25; /*0x100ab9884*/
  v26 = &v121; /*0x100ab9888*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v107, &v103); /*0x100ab989d*/
  if ( v121 == 0x8000000000000000LL ) /*0x100ab98a9*/
  {
    v27 = v122; /*0x100ab98ab*/
    v28 = 32 * v124; /*0x100ab98b9*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100ab98c2*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100ab98cb*/
    v29 = *(_QWORD *)(v122 + 32 * v124); /*0x100ab98cf*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100ab98d8*/
    v128 = v29; /*0x100ab98dc*/
    *(_QWORD *)(v122 + v28 + 24) = v135; /*0x100ab98e4*/
    *(_QWORD *)(v27 + v28 + 16) = v134; /*0x100ab98ed*/
    v30 = v132; /*0x100ab98f2*/
    v31 = (_QWORD *)v133; /*0x100ab98f6*/
    *(_QWORD *)(v27 + v28 + 8) = v133; /*0x100ab98fa*/
    *(_QWORD *)(v27 + v28) = v30; /*0x100ab98ff*/
    if ( (_BYTE)v128 != 6 ) /*0x100ab9907*/
    {
      v26 = &v128; /*0x100ab990d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100ab9911*/
    }
  }
  else
  {
    v120 = v127; /*0x100ab991f*/
    v119 = v126; /*0x100ab992a*/
    v118 = v125; /*0x100ab9935*/
    v117 = v124; /*0x100ab9943*/
    v116 = v123; /*0x100ab9951*/
    v115 = v122; /*0x100ab9966*/
    v114 = v121; /*0x100ab996d*/
    v113 = v135; /*0x100ab9978*/
    v112 = v134; /*0x100ab9983*/
    v111 = v133; /*0x100ab9992*/
    v110 = v132; /*0x100ab9999*/
    v26 = &v128; /*0x100ab99a0*/
    v31 = &v114; /*0x100ab99a4*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ab99b2*/
      &v128,
      &v114,
      &v110);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v31); /*0x100ab99b7*/
  v3 = 6; /*0x100ab99bc*/
  v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ab99cc*/
  if ( !v32 ) /*0x100ab99d4*/
    goto LABEL_80; /*0x100ab99d4*/
  *(_WORD *)(v32 + 4) = 29557; /*0x100ab99dd*/
  *(_DWORD *)v32 = 1952543859; /*0x100ab99e3*/
  v103 = 6; /*0x100ab99e9*/
  v104 = (_WORD *)v32; /*0x100ab99f4*/
  v105 = 6; /*0x100ab99fb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100ab9a06*/
  v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100ab9a15*/
  if ( !v33 ) /*0x100ab9a1d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100aba9af*/
  *(_QWORD *)v33 = 0x6574656C706D6F63LL; /*0x100ab9a2d*/
  *(_BYTE *)(v33 + 8) = 100; /*0x100ab9a30*/
  LOBYTE(v132) = 3; /*0x100ab9a34*/
  v133 = 9; /*0x100ab9a38*/
  v134 = (_QWORD *)v33; /*0x100ab9a40*/
  v135 = 9; /*0x100ab9a44*/
  v34 = &v121; /*0x100ab9a4c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v107, &v103); /*0x100ab9a61*/
  if ( v121 == 0x8000000000000000LL ) /*0x100ab9a6d*/
  {
    v35 = v122; /*0x100ab9a6f*/
    v36 = 32 * v124; /*0x100ab9a7d*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100ab9a86*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100ab9a8f*/
    v37 = *(_QWORD *)(v122 + 32 * v124); /*0x100ab9a93*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100ab9a9c*/
    v128 = v37; /*0x100ab9aa0*/
    *(_QWORD *)(v122 + v36 + 24) = v135; /*0x100ab9aa8*/
    *(_QWORD *)(v35 + v36 + 16) = v134; /*0x100ab9ab1*/
    v38 = v132; /*0x100ab9ab6*/
    v39 = (_QWORD *)v133; /*0x100ab9aba*/
    *(_QWORD *)(v35 + v36 + 8) = v133; /*0x100ab9abe*/
    *(_QWORD *)(v35 + v36) = v38; /*0x100ab9ac3*/
    if ( (_BYTE)v128 != 6 ) /*0x100ab9acb*/
    {
      v34 = &v128; /*0x100ab9ad1*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100ab9ad5*/
    }
  }
  else
  {
    v120 = v127; /*0x100ab9ae3*/
    v119 = v126; /*0x100ab9aee*/
    v118 = v125; /*0x100ab9af9*/
    v117 = v124; /*0x100ab9b07*/
    v116 = v123; /*0x100ab9b15*/
    v115 = v122; /*0x100ab9b2a*/
    v114 = v121; /*0x100ab9b31*/
    v113 = v135; /*0x100ab9b3c*/
    v112 = v134; /*0x100ab9b47*/
    v111 = v133; /*0x100ab9b56*/
    v110 = v132; /*0x100ab9b5d*/
    v34 = &v128; /*0x100ab9b64*/
    v39 = &v114; /*0x100ab9b68*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ab9b76*/
      &v128,
      &v114,
      &v110);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v39); /*0x100ab9b7b*/
  v3 = 5; /*0x100ab9b80*/
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100ab9b90*/
  if ( !v40 ) /*0x100ab9b98*/
    goto LABEL_80; /*0x100ab9b98*/
  *(_BYTE *)(v40 + 4) = 108; /*0x100ab9ba1*/
  *(_DWORD *)v40 = 1701080941; /*0x100ab9ba5*/
  v103 = 5; /*0x100ab9bab*/
  v104 = (_WORD *)v40; /*0x100ab9bb6*/
  v105 = 5; /*0x100ab9bbd*/
  v41 = *(_QWORD *)(v2 + 16); /*0x100ab9bc8*/
  if ( v41 < 0 ) /*0x100ab9bcf*/
  {
    v42 = 0; /*0x100ab9bd1*/
    goto LABEL_33; /*0x100ab9bd1*/
  }
  v43 = *(const void **)(v2 + 8); /*0x100ab9be3*/
  if ( v41 ) /*0x100ab9be7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100ab9be9*/
    v42 = 1; /*0x100ab9bee*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1); /*0x100ab9bfb*/
    if ( !v44 ) /*0x100ab9c03*/
LABEL_33:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, v41); /*0x100ab9bd3*/
    v45 = v44; /*0x100ab9c05*/
    v2 = a2; /*0x100ab9c08*/
  }
  else
  {
    v45 = 1; /*0x100ab9c11*/
  }
  memcpy((void *)v45, v43, v41); /*0x100ab9c20*/
  LOBYTE(v132) = 3; /*0x100ab9c25*/
  v133 = v41; /*0x100ab9c29*/
  v134 = (_QWORD *)v45; /*0x100ab9c2d*/
  v135 = v41; /*0x100ab9c31*/
  v46 = &v121; /*0x100ab9c35*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v107, &v103); /*0x100ab9c4a*/
  if ( v121 == 0x8000000000000000LL ) /*0x100ab9c6a*/
  {
    v47 = v122; /*0x100ab9c6c*/
    v48 = 32 * v124; /*0x100ab9c7a*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100ab9c83*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100ab9c8c*/
    v49 = *(_QWORD *)(v122 + 32 * v124); /*0x100ab9c90*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100ab9c99*/
    v128 = v49; /*0x100ab9c9d*/
    *(_QWORD *)(v122 + v48 + 24) = v135; /*0x100ab9ca5*/
    *(_QWORD *)(v47 + v48 + 16) = v134; /*0x100ab9cae*/
    v50 = v132; /*0x100ab9cb3*/
    v51 = (_QWORD *)v133; /*0x100ab9cb7*/
    *(_QWORD *)(v47 + v48 + 8) = v133; /*0x100ab9cbb*/
    *(_QWORD *)(v47 + v48) = v50; /*0x100ab9cc0*/
    if ( (_BYTE)v128 != 6 ) /*0x100ab9cc8*/
    {
      v46 = &v128; /*0x100ab9cce*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100ab9cd2*/
    }
  }
  else
  {
    v120 = v127; /*0x100ab9ce0*/
    v119 = v126; /*0x100ab9ceb*/
    v118 = v125; /*0x100ab9cf6*/
    v117 = v124; /*0x100ab9d04*/
    v116 = v123; /*0x100ab9d12*/
    v115 = v122; /*0x100ab9d27*/
    v114 = v121; /*0x100ab9d2e*/
    v113 = v135; /*0x100ab9d39*/
    v112 = v134; /*0x100ab9d44*/
    v111 = v133; /*0x100ab9d53*/
    v110 = v132; /*0x100ab9d5a*/
    v46 = &v128; /*0x100ab9d61*/
    v51 = &v114; /*0x100ab9d65*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ab9d73*/
      &v128,
      &v114,
      &v110);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v51); /*0x100ab9d78*/
  v3 = 6; /*0x100ab9d7d*/
  v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ab9d8d*/
  if ( !v52 ) /*0x100ab9d95*/
LABEL_80:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x100aba98d*/
  *(_WORD *)(v52 + 4) = 29813; /*0x100ab9d9e*/
  *(_DWORD *)v52 = 1886680431; /*0x100ab9da4*/
  v103 = 6; /*0x100ab9daa*/
  v104 = (_WORD *)v52; /*0x100ab9db5*/
  v105 = 6; /*0x100ab9dbc*/
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v114, v2 + 48); /*0x100ab9dd2*/
  if ( (_BYTE)v114 == 6 ) /*0x100ab9dde*/
  {
    v121 = v115; /*0x100aba91d*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v121, &off_101974C58, &off_1019746C8); /*0x100aba945*/
  }
  v135 = v117; /*0x100ab9deb*/
  v134 = v116; /*0x100ab9df6*/
  v133 = v115; /*0x100ab9e08*/
  v132 = v114; /*0x100ab9e0c*/
  v53 = &v121; /*0x100ab9e10*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v107, &v103); /*0x100ab9e25*/
  if ( v121 == 0x8000000000000000LL ) /*0x100ab9e31*/
  {
    v54 = v122; /*0x100ab9e33*/
    v55 = 32 * v124; /*0x100ab9e41*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100ab9e4a*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100ab9e53*/
    v56 = *(_QWORD *)(v122 + 32 * v124); /*0x100ab9e57*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100ab9e60*/
    v128 = v56; /*0x100ab9e64*/
    *(_QWORD *)(v122 + v55 + 24) = v135; /*0x100ab9e6c*/
    *(_QWORD *)(v54 + v55 + 16) = v134; /*0x100ab9e75*/
    v57 = v132; /*0x100ab9e7a*/
    v58 = v133; /*0x100ab9e7e*/
    *(_QWORD *)(v54 + v55 + 8) = v133; /*0x100ab9e82*/
    *(_QWORD *)(v54 + v55) = v57; /*0x100ab9e87*/
    if ( (_BYTE)v128 != 6 ) /*0x100ab9e8f*/
    {
      v53 = &v128; /*0x100ab9e95*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100ab9e99*/
    }
  }
  else
  {
    v120 = v127; /*0x100ab9ea7*/
    v119 = v126; /*0x100ab9eb2*/
    v118 = v125; /*0x100ab9ebd*/
    v117 = v124; /*0x100ab9ecb*/
    v116 = v123; /*0x100ab9ed9*/
    v115 = v122; /*0x100ab9eee*/
    v114 = v121; /*0x100ab9ef5*/
    v113 = v135; /*0x100ab9f00*/
    v112 = v134; /*0x100ab9f0b*/
    v111 = v133; /*0x100ab9f1a*/
    v110 = v132; /*0x100ab9f21*/
    v53 = &v128; /*0x100ab9f28*/
    v58 = (__int64)&v114; /*0x100ab9f2c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ab9f3a*/
      &v128,
      &v114,
      &v110);
  }
  v104 = (_WORD *)v107; /*0x100ab9f4d*/
  v105 = (__int64)v108; /*0x100ab9f54*/
  v106 = v109; /*0x100ab9f62*/
  LOBYTE(v103) = 5; /*0x100ab9f69*/
  if ( *(_BYTE *)(v2 + 366) ) /*0x100ab9f70*/
  {
    v100 = 0; /*0x100ab9f7d*/
    v102 = 0; /*0x100ab9f88*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v58); /*0x100ab9f93*/
    v59 = 12; /*0x100ab9f98*/
    v60 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100ab9fa8*/
    if ( !v60 ) /*0x100ab9fb0*/
      goto LABEL_84; /*0x100ab9fb0*/
    qmemcpy(v60, "input_tokens", 12); /*0x100ab9fc0*/
    v107 = 12; /*0x100ab9fca*/
    v108 = v60; /*0x100ab9fd5*/
    v109 = 12; /*0x100ab9fdc*/
    v61 = *(_QWORD *)(v2 + 336); /*0x100ab9fe7*/
    LOBYTE(v132) = 2; /*0x100ab9ff5*/
    v133 = v61 >> 63; /*0x100ab9ff9*/
    v134 = (_QWORD *)v61; /*0x100ab9ffd*/
    v62 = &v121; /*0x100aba001*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v100, &v107); /*0x100aba016*/
    if ( v121 == 0x8000000000000000LL ) /*0x100aba022*/
    {
      v63 = v122; /*0x100aba024*/
      v64 = 32 * v124; /*0x100aba032*/
      v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100aba03b*/
      v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100aba044*/
      v65 = *(_QWORD *)(v122 + 32 * v124); /*0x100aba048*/
      v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100aba051*/
      v128 = v65; /*0x100aba055*/
      *(_QWORD *)(v122 + v64 + 24) = v135; /*0x100aba05d*/
      *(_QWORD *)(v63 + v64 + 16) = v134; /*0x100aba066*/
      v66 = v132; /*0x100aba06b*/
      v67 = (_QWORD *)v133; /*0x100aba06f*/
      *(_QWORD *)(v63 + v64 + 8) = v133; /*0x100aba073*/
      *(_QWORD *)(v63 + v64) = v66; /*0x100aba078*/
      if ( (_BYTE)v128 != 6 ) /*0x100aba080*/
      {
        v62 = &v128; /*0x100aba086*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100aba08a*/
      }
    }
    else
    {
      v120 = v127; /*0x100aba098*/
      v119 = v126; /*0x100aba0a3*/
      v118 = v125; /*0x100aba0ae*/
      v117 = v124; /*0x100aba0bc*/
      v116 = v123; /*0x100aba0ca*/
      v115 = v122; /*0x100aba0df*/
      v114 = v121; /*0x100aba0e6*/
      v113 = v135; /*0x100aba0f1*/
      v112 = v134; /*0x100aba0fc*/
      v111 = v133; /*0x100aba10b*/
      v110 = v132; /*0x100aba112*/
      v62 = &v128; /*0x100aba119*/
      v67 = &v114; /*0x100aba11d*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aba12b*/
        &v128,
        &v114,
        &v110);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v67); /*0x100aba130*/
    v59 = 13; /*0x100aba135*/
    v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aba145*/
    if ( !v68 ) /*0x100aba14d*/
      goto LABEL_84; /*0x100aba14d*/
    qmemcpy(v68, "output_tokens", 13); /*0x100aba16b*/
    v107 = 13; /*0x100aba16e*/
    v108 = v68; /*0x100aba179*/
    v109 = 13; /*0x100aba180*/
    v69 = *(_QWORD *)(v2 + 344); /*0x100aba18b*/
    LOBYTE(v132) = 2; /*0x100aba199*/
    v133 = v69 >> 63; /*0x100aba19d*/
    v134 = (_QWORD *)v69; /*0x100aba1a1*/
    v70 = &v121; /*0x100aba1a5*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v100, &v107); /*0x100aba1ba*/
    if ( v121 == 0x8000000000000000LL ) /*0x100aba1c6*/
    {
      v71 = v122; /*0x100aba1c8*/
      v72 = 32 * v124; /*0x100aba1d6*/
      v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100aba1df*/
      v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100aba1e8*/
      v73 = *(_QWORD *)(v122 + 32 * v124); /*0x100aba1ec*/
      v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100aba1f5*/
      v128 = v73; /*0x100aba1f9*/
      *(_QWORD *)(v122 + v72 + 24) = v135; /*0x100aba201*/
      *(_QWORD *)(v71 + v72 + 16) = v134; /*0x100aba20a*/
      v74 = v132; /*0x100aba20f*/
      v75 = (_QWORD *)v133; /*0x100aba213*/
      *(_QWORD *)(v71 + v72 + 8) = v133; /*0x100aba217*/
      *(_QWORD *)(v71 + v72) = v74; /*0x100aba21c*/
      if ( (_BYTE)v128 != 6 ) /*0x100aba224*/
      {
        v70 = &v128; /*0x100aba22a*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100aba22e*/
      }
    }
    else
    {
      v120 = v127; /*0x100aba23c*/
      v119 = v126; /*0x100aba247*/
      v118 = v125; /*0x100aba252*/
      v117 = v124; /*0x100aba260*/
      v116 = v123; /*0x100aba26e*/
      v115 = v122; /*0x100aba283*/
      v114 = v121; /*0x100aba28a*/
      v113 = v135; /*0x100aba295*/
      v112 = v134; /*0x100aba2a0*/
      v111 = v133; /*0x100aba2af*/
      v110 = v132; /*0x100aba2b6*/
      v70 = &v128; /*0x100aba2bd*/
      v75 = &v114; /*0x100aba2c1*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aba2cf*/
        &v128,
        &v114,
        &v110);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v75); /*0x100aba2d4*/
    v59 = 12; /*0x100aba2d9*/
    v76 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100aba2e9*/
    if ( !v76 ) /*0x100aba2f1*/
LABEL_84:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v59); /*0x100aba9cd*/
    qmemcpy(v76, "total_tokens", 12); /*0x100aba301*/
    v107 = 12; /*0x100aba30b*/
    v108 = v76; /*0x100aba316*/
    v109 = 12; /*0x100aba31d*/
    v77 = *(_QWORD *)(v2 + 336) + *(_QWORD *)(v2 + 344); /*0x100aba32f*/
    LOBYTE(v132) = 2; /*0x100aba33d*/
    v133 = v77 >> 63; /*0x100aba341*/
    v134 = (_QWORD *)v77; /*0x100aba345*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v100, &v107); /*0x100aba35e*/
    if ( v121 == 0x8000000000000000LL ) /*0x100aba36a*/
    {
      v78 = v122; /*0x100aba36c*/
      v79 = 32 * v124; /*0x100aba37a*/
      v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100aba383*/
      v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100aba38c*/
      v80 = *(_QWORD *)(v122 + 32 * v124); /*0x100aba390*/
      v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100aba399*/
      v128 = v80; /*0x100aba39d*/
      *(_QWORD *)(v122 + v79 + 24) = v135; /*0x100aba3a5*/
      *(_QWORD *)(v78 + v79 + 16) = v134; /*0x100aba3ae*/
      v81 = v132; /*0x100aba3b3*/
      *(_QWORD *)(v78 + v79 + 8) = v133; /*0x100aba3bb*/
      *(_QWORD *)(v78 + v79) = v81; /*0x100aba3c0*/
      if ( (_BYTE)v128 != 6 ) /*0x100aba3c8*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100aba3d2*/
    }
    else
    {
      v120 = v127; /*0x100aba3e0*/
      v119 = v126; /*0x100aba3eb*/
      v118 = v125; /*0x100aba3f6*/
      v117 = v124; /*0x100aba404*/
      v116 = v123; /*0x100aba412*/
      v115 = v122; /*0x100aba427*/
      v114 = v121; /*0x100aba42e*/
      v113 = v135; /*0x100aba439*/
      v112 = v134; /*0x100aba444*/
      v111 = v133; /*0x100aba453*/
      v110 = v132; /*0x100aba45a*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aba473*/
        &v128,
        &v114,
        &v110);
    }
    v115 = v100; /*0x100aba486*/
    v116 = v101; /*0x100aba48d*/
    v117 = v102; /*0x100aba49b*/
    LOBYTE(v114) = 5; /*0x100aba4a2*/
    v58 = 5; /*0x100aba4b7*/
    v53 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100aba4c4*/
                       "usagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                       5u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v53); /*0x100aba4c7*/
    v53[3] = v117; /*0x100aba4d3*/
    v53[2] = (__int64)v116; /*0x100aba4de*/
    v82 = v114; /*0x100aba4e2*/
    v53[1] = v115; /*0x100aba4f0*/
    *v53 = v82; /*0x100aba4f4*/
  }
  v100 = 0; /*0x100aba4f7*/
  v102 = 0; /*0x100aba502*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v58); /*0x100aba50d*/
  v83 = 4; /*0x100aba512*/
  v84 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aba522*/
  if ( !v84 ) /*0x100aba52a*/
    goto LABEL_83; /*0x100aba52a*/
  *v84 = 1701869940; /*0x100aba533*/
  v107 = 4; /*0x100aba539*/
  v108 = v84; /*0x100aba544*/
  v109 = 4; /*0x100aba54b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aba556*/
  v85 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x100aba565*/
  if ( !v85 ) /*0x100aba56d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100aba9de*/
  qmemcpy(v85, "response.completed", 18); /*0x100aba581*/
  LOBYTE(v132) = 3; /*0x100aba58a*/
  v133 = 18; /*0x100aba58e*/
  v134 = v85; /*0x100aba596*/
  v135 = 18; /*0x100aba59a*/
  v86 = &v121; /*0x100aba5a2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v100, &v107); /*0x100aba5b7*/
  if ( v121 == 0x8000000000000000LL ) /*0x100aba5c3*/
  {
    v87 = v122; /*0x100aba5c5*/
    v88 = 32 * v124; /*0x100aba5d3*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100aba5dc*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100aba5e5*/
    v89 = *(_QWORD *)(v122 + 32 * v124); /*0x100aba5e9*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100aba5f2*/
    v128 = v89; /*0x100aba5f6*/
    *(_QWORD *)(v122 + v88 + 24) = v135; /*0x100aba5fe*/
    *(_QWORD *)(v87 + v88 + 16) = v134; /*0x100aba607*/
    v90 = v132; /*0x100aba60c*/
    v91 = (_QWORD *)v133; /*0x100aba610*/
    *(_QWORD *)(v87 + v88 + 8) = v133; /*0x100aba614*/
    *(_QWORD *)(v87 + v88) = v90; /*0x100aba619*/
    if ( (_BYTE)v128 != 6 ) /*0x100aba621*/
    {
      v86 = &v128; /*0x100aba627*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100aba62b*/
    }
  }
  else
  {
    v120 = v127; /*0x100aba639*/
    v119 = v126; /*0x100aba644*/
    v118 = v125; /*0x100aba64f*/
    v117 = v124; /*0x100aba65d*/
    v116 = v123; /*0x100aba66b*/
    v115 = v122; /*0x100aba680*/
    v114 = v121; /*0x100aba687*/
    v113 = v135; /*0x100aba692*/
    v112 = v134; /*0x100aba69d*/
    v111 = v133; /*0x100aba6ac*/
    v110 = v132; /*0x100aba6b3*/
    v86 = &v128; /*0x100aba6ba*/
    v91 = &v114; /*0x100aba6be*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aba6cc*/
      &v128,
      &v114,
      &v110);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v86, v91); /*0x100aba6d1*/
  v83 = 8; /*0x100aba6d6*/
  v92 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100aba6e6*/
  if ( !v92 ) /*0x100aba6ee*/
LABEL_83:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v83); /*0x100aba9be*/
  *v92 = 0x65736E6F70736572LL; /*0x100aba6f7*/
  v107 = 8; /*0x100aba6fa*/
  v108 = v92; /*0x100aba705*/
  v109 = 8; /*0x100aba70c*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x100aba725*/
    &v114,
    &v103);
  if ( (_BYTE)v114 == 6 ) /*0x100aba731*/
  {
    v121 = v115; /*0x100aba956*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v121, &off_101974C58, &off_1019746E0); /*0x100aba97e*/
  }
  v135 = v117; /*0x100aba73e*/
  v134 = v116; /*0x100aba749*/
  v133 = v115; /*0x100aba75b*/
  v132 = v114; /*0x100aba75f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v121, &v100, &v107); /*0x100aba778*/
  if ( v121 == 0x8000000000000000LL ) /*0x100aba784*/
  {
    v93 = v122; /*0x100aba786*/
    v94 = 32 * v124; /*0x100aba794*/
    v131 = *(_QWORD *)(v122 + 32 * v124 + 24); /*0x100aba79d*/
    v130 = *(_QWORD *)(v122 + 32 * v124 + 16); /*0x100aba7a6*/
    v95 = *(_QWORD *)(v122 + 32 * v124); /*0x100aba7aa*/
    v129 = *(_QWORD *)(v122 + 32 * v124 + 8); /*0x100aba7b3*/
    v128 = v95; /*0x100aba7b7*/
    *(_QWORD *)(v122 + v94 + 24) = v135; /*0x100aba7bf*/
    *(_QWORD *)(v93 + v94 + 16) = v134; /*0x100aba7c8*/
    v96 = v132; /*0x100aba7cd*/
    *(_QWORD *)(v93 + v94 + 8) = v133; /*0x100aba7d5*/
    *(_QWORD *)(v93 + v94) = v96; /*0x100aba7da*/
    if ( (_BYTE)v128 != 6 ) /*0x100aba7e2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v128); /*0x100aba7ec*/
  }
  else
  {
    v120 = v127; /*0x100aba7fa*/
    v119 = v126; /*0x100aba805*/
    v118 = v125; /*0x100aba810*/
    v117 = v124; /*0x100aba81e*/
    v116 = v123; /*0x100aba82c*/
    v115 = v122; /*0x100aba841*/
    v114 = v121; /*0x100aba848*/
    v113 = v135; /*0x100aba853*/
    v112 = v134; /*0x100aba85e*/
    v111 = v133; /*0x100aba86d*/
    v110 = v132; /*0x100aba874*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aba88d*/
      &v128,
      &v114,
      &v110);
  }
  v115 = v100; /*0x100aba8a7*/
  v116 = v101; /*0x100aba8ae*/
  v117 = v102; /*0x100aba8bc*/
  LOBYTE(v114) = 5; /*0x100aba8c3*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c( /*0x100aba8e7*/
    a1,
    v2 + 352,
    "response.completedin_progressresponse.output_text.doneresponse.content_part.doneoutput_text",
    18,
    &v114);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v103); /*0x100aba8f3*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v114); /*0x100aba904*/
}