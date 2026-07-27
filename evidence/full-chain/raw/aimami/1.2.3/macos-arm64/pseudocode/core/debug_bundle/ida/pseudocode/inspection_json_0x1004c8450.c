// __ZN13codexmate_lib4core12debug_bundle15inspection_json @ 0x1004c8450 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::inspection_json::hbfb29f9e4e7dfd29(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r12
  void *v4; // rax
  signed __int64 v5; // r12
  __int64 v6; // rbx
  const void *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r14
  bool v21; // al
  __int64 *v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  __int64 *v27; // rsi
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  __int64 *v35; // rsi
  void *v36; // rax
  __int64 v37; // r12
  __int64 *v38; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  _QWORD *v42; // rdx
  __int64 *v43; // rsi
  void *v44; // rax
  __int64 *v45; // rdi
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  _QWORD *v49; // rdx
  __int64 *v50; // rsi
  void *v51; // rax
  __int64 *v52; // rdi
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  _QWORD *v56; // rdx
  __int64 *v57; // rsi
  void *v58; // rax
  __int64 *v59; // rdi
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rdx
  __int64 *v64; // rsi
  void *v65; // rax
  __int64 *v66; // rdi
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rdx
  __int64 *v71; // rsi
  void *v72; // rax
  __int64 v73; // rcx
  __int64 *v74; // rdi
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  _QWORD *v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rbx
  __int64 **v81; // r14
  _QWORD *v82; // rax
  _QWORD *v83; // r15
  __int64 v84; // rcx
  _QWORD *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  _QWORD *v88; // rdx
  __int64 v89; // rbx
  _QWORD *v90; // r14
  __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rax
  _QWORD v95[3]; // [rsp+0h] [rbp-190h] BYREF
  _QWORD v96[3]; // [rsp+18h] [rbp-178h] BYREF
  __int64 v97; // [rsp+30h] [rbp-160h]
  __int64 v98; // [rsp+38h] [rbp-158h]
  __int64 v99; // [rsp+40h] [rbp-150h] BYREF
  _QWORD *v100; // [rsp+48h] [rbp-148h]
  __int64 v101; // [rsp+50h] [rbp-140h]
  __int64 v102; // [rsp+58h] [rbp-138h]
  _QWORD v103[2]; // [rsp+60h] [rbp-130h] BYREF
  __int64 v104; // [rsp+70h] [rbp-120h]
  _QWORD *v105; // [rsp+78h] [rbp-118h] BYREF
  __int64 *v106; // [rsp+80h] [rbp-110h]
  __int64 v107; // [rsp+88h] [rbp-108h]
  signed __int64 v108; // [rsp+90h] [rbp-100h]
  _QWORD *v109; // [rsp+98h] [rbp-F8h] BYREF
  _QWORD *v110; // [rsp+A0h] [rbp-F0h]
  __int64 v111; // [rsp+A8h] [rbp-E8h]
  signed __int64 v112; // [rsp+B0h] [rbp-E0h]
  __int64 v113; // [rsp+B8h] [rbp-D8h]
  __int64 v114; // [rsp+C0h] [rbp-D0h]
  __int64 v115; // [rsp+C8h] [rbp-C8h]
  __int64 v116; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 *v117; // [rsp+D8h] [rbp-B8h]
  __int64 v118; // [rsp+E0h] [rbp-B0h]
  _QWORD *v119; // [rsp+E8h] [rbp-A8h] BYREF
  _QWORD *v120; // [rsp+F0h] [rbp-A0h]
  __int64 v121; // [rsp+F8h] [rbp-98h]
  signed __int64 v122; // [rsp+100h] [rbp-90h]
  __int64 v123; // [rsp+108h] [rbp-88h]
  __int64 v124; // [rsp+110h] [rbp-80h]
  __int64 v125; // [rsp+118h] [rbp-78h]
  __int64 v126; // [rsp+120h] [rbp-70h] BYREF
  __int64 v127; // [rsp+128h] [rbp-68h]
  __int64 v128; // [rsp+130h] [rbp-60h]
  __int64 v129; // [rsp+138h] [rbp-58h]
  _QWORD *v130; // [rsp+140h] [rbp-50h]
  _QWORD *v131; // [rsp+148h] [rbp-48h]
  __int64 *v132; // [rsp+150h] [rbp-40h]
  __int64 v133; // [rsp+158h] [rbp-38h]
  signed __int64 v134; // [rsp+160h] [rbp-30h]

  v102 = a3; /*0x1004c8464*/
  v130 = a2; /*0x1004c846b*/
  v97 = a1; /*0x1004c846f*/
  v103[0] = 0; /*0x1004c8476*/
  v104 = 0; /*0x1004c8481*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004c848c*/
  v3 = 14; /*0x1004c8491*/
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1004c84a1*/
  if ( !v4 ) /*0x1004c84a9*/
    goto LABEL_80; /*0x1004c84a9*/
  qmemcpy(v4, "targetProvider", 14); /*0x1004c84ca*/
  v116 = 14; /*0x1004c84ce*/
  v117 = (__int64 *)v4; /*0x1004c84d9*/
  v118 = 14; /*0x1004c84e0*/
  v5 = v130[2]; /*0x1004c84ef*/
  if ( v5 < 0 ) /*0x1004c84f6*/
  {
    v6 = 0; /*0x1004c84f8*/
    goto LABEL_4; /*0x1004c84f8*/
  }
  v7 = (const void *)v130[1]; /*0x1004c850a*/
  if ( v5 ) /*0x1004c850e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1); /*0x1004c8510*/
    v6 = 1; /*0x1004c8515*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1004c8522*/
    if ( !v8 ) /*0x1004c852a*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1004c84fa*/
    v9 = v8; /*0x1004c852c*/
  }
  else
  {
    v9 = 1; /*0x1004c8531*/
  }
  memcpy((void *)v9, v7, v5); /*0x1004c8540*/
  LOBYTE(v131) = 3; /*0x1004c8545*/
  v132 = (__int64 *)v5; /*0x1004c8549*/
  v133 = v9; /*0x1004c854d*/
  v134 = v5; /*0x1004c8551*/
  v10 = (__int64 *)&v119; /*0x1004c8555*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c856a*/
  if ( __OFSUB__(0, v119) ) /*0x1004c8571*/
  {
    v11 = v120; /*0x1004c857a*/
    v12 = 4 * v122; /*0x1004c8588*/
    v129 = v120[4 * v122 + 3]; /*0x1004c8591*/
    v128 = v120[4 * v122 + 2]; /*0x1004c859a*/
    v13 = v120[4 * v122]; /*0x1004c859e*/
    v127 = v120[4 * v122 + 1]; /*0x1004c85a7*/
    v126 = v13; /*0x1004c85ab*/
    v120[v12 + 3] = v134; /*0x1004c85b3*/
    v11[v12 + 2] = v133; /*0x1004c85bc*/
    v14 = v131; /*0x1004c85c1*/
    v15 = v132; /*0x1004c85c5*/
    v11[v12 + 1] = v132; /*0x1004c85c9*/
    v11[v12] = v14; /*0x1004c85ce*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c85d6*/
    {
      v10 = &v126; /*0x1004c85dc*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c85e0*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c85ee*/
    v114 = v124; /*0x1004c85f9*/
    v113 = v123; /*0x1004c8607*/
    v112 = v122; /*0x1004c8615*/
    v111 = v121; /*0x1004c8623*/
    v110 = v120; /*0x1004c8638*/
    v109 = v119; /*0x1004c863f*/
    v108 = v134; /*0x1004c864a*/
    v107 = v133; /*0x1004c8655*/
    v106 = v132; /*0x1004c8664*/
    v105 = v131; /*0x1004c866b*/
    v10 = &v126; /*0x1004c8672*/
    v15 = (__int64 *)&v109; /*0x1004c8676*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c8684*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v15); /*0x1004c8689*/
  v3 = 5; /*0x1004c868e*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004c869e*/
  if ( !v16 ) /*0x1004c86a6*/
    goto LABEL_80; /*0x1004c86a6*/
  *(_BYTE *)(v16 + 4) = 110; /*0x1004c86ac*/
  *(_DWORD *)v16 = 1634036835; /*0x1004c86b0*/
  v116 = 5; /*0x1004c86b6*/
  v117 = (__int64 *)v16; /*0x1004c86c1*/
  v118 = 5; /*0x1004c86c8*/
  v17 = v130[10]; /*0x1004c86d7*/
  v18 = v130[11]; /*0x1004c86db*/
  v19 = v130[12]; /*0x1004c86e5*/
  v20 = v130[13]; /*0x1004c86ec*/
  v21 = !(v20 | v19 | v18 | v17) && v130[5] == 0; /*0x1004c86ac*/
  LOBYTE(v131) = 1; /*0x1004c8701*/
  BYTE1(v131) = v21; /*0x1004c8705*/
  v22 = (__int64 *)&v119; /*0x1004c8708*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c871d*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c8733*/
  {
    v23 = v120; /*0x1004c8735*/
    v24 = 4 * v122; /*0x1004c8743*/
    v129 = v120[4 * v122 + 3]; /*0x1004c874c*/
    v128 = v120[4 * v122 + 2]; /*0x1004c8755*/
    v25 = v120[4 * v122]; /*0x1004c8759*/
    v127 = v120[4 * v122 + 1]; /*0x1004c8762*/
    v126 = v25; /*0x1004c8766*/
    v120[v24 + 3] = v134; /*0x1004c876e*/
    v23[v24 + 2] = v133; /*0x1004c8777*/
    v26 = v131; /*0x1004c877c*/
    v27 = v132; /*0x1004c8780*/
    v23[v24 + 1] = v132; /*0x1004c8784*/
    v23[v24] = v26; /*0x1004c8789*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c8791*/
    {
      v22 = &v126; /*0x1004c8797*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c879b*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c87a9*/
    v114 = v124; /*0x1004c87b4*/
    v113 = v123; /*0x1004c87c2*/
    v112 = v122; /*0x1004c87d0*/
    v111 = v121; /*0x1004c87de*/
    v110 = v120; /*0x1004c87f3*/
    v109 = v119; /*0x1004c87fa*/
    v108 = v134; /*0x1004c8805*/
    v107 = v133; /*0x1004c8810*/
    v106 = v132; /*0x1004c881f*/
    v105 = v131; /*0x1004c8826*/
    v22 = &v126; /*0x1004c882d*/
    v27 = (__int64 *)&v109; /*0x1004c8831*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c883f*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v27); /*0x1004c8844*/
  v3 = 7; /*0x1004c8849*/
  v28 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004c8859*/
  if ( !v28 ) /*0x1004c8861*/
    goto LABEL_80; /*0x1004c8861*/
  *(_DWORD *)((char *)v28 + 3) = 1684369006; /*0x1004c8867*/
  *v28 = 1851876211; /*0x1004c886e*/
  v116 = 7; /*0x1004c8874*/
  v117 = (__int64 *)v28; /*0x1004c887f*/
  v118 = 7; /*0x1004c8886*/
  v29 = v130[9]; /*0x1004c8895*/
  LOBYTE(v131) = 2; /*0x1004c8899*/
  v132 = nullptr; /*0x1004c889d*/
  v133 = v29; /*0x1004c88a5*/
  v30 = (__int64 *)&v119; /*0x1004c88a9*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c88be*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c88d4*/
  {
    v31 = v120; /*0x1004c88d6*/
    v32 = 4 * v122; /*0x1004c88e4*/
    v129 = v120[4 * v122 + 3]; /*0x1004c88ed*/
    v128 = v120[4 * v122 + 2]; /*0x1004c88f6*/
    v33 = v120[4 * v122]; /*0x1004c88fa*/
    v127 = v120[4 * v122 + 1]; /*0x1004c8903*/
    v126 = v33; /*0x1004c8907*/
    v120[v32 + 3] = v134; /*0x1004c890f*/
    v31[v32 + 2] = v133; /*0x1004c8918*/
    v34 = v131; /*0x1004c891d*/
    v35 = v132; /*0x1004c8921*/
    v31[v32 + 1] = v132; /*0x1004c8925*/
    v31[v32] = v34; /*0x1004c892a*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c8932*/
    {
      v30 = &v126; /*0x1004c8938*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c893c*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c894a*/
    v114 = v124; /*0x1004c8955*/
    v113 = v123; /*0x1004c8963*/
    v112 = v122; /*0x1004c8971*/
    v111 = v121; /*0x1004c897f*/
    v110 = v120; /*0x1004c8994*/
    v109 = v119; /*0x1004c899b*/
    v108 = v134; /*0x1004c89a6*/
    v107 = v133; /*0x1004c89b1*/
    v106 = v132; /*0x1004c89c0*/
    v105 = v131; /*0x1004c89c7*/
    v30 = &v126; /*0x1004c89ce*/
    v35 = (__int64 *)&v109; /*0x1004c89d2*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c89e0*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v35); /*0x1004c89e5*/
  v3 = 10; /*0x1004c89ea*/
  v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1004c89fa*/
  if ( !v36 ) /*0x1004c8a02*/
    goto LABEL_80; /*0x1004c8a02*/
  qmemcpy(v36, "issueCount", 10); /*0x1004c8a12*/
  v116 = 10; /*0x1004c8a1b*/
  v117 = (__int64 *)v36; /*0x1004c8a26*/
  v118 = 10; /*0x1004c8a2d*/
  v37 = v130[5]; /*0x1004c8a46*/
  LOBYTE(v131) = 2; /*0x1004c8a4d*/
  v132 = nullptr; /*0x1004c8a51*/
  v133 = v37 + v17 + v18 + v19 + v20; /*0x1004c8a59*/
  v38 = (__int64 *)&v119; /*0x1004c8a5d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c8a72*/
  v98 = v37; /*0x1004c8a88*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c8a8f*/
  {
    v39 = v120; /*0x1004c8a91*/
    v40 = 4 * v122; /*0x1004c8a9f*/
    v129 = v120[4 * v122 + 3]; /*0x1004c8aa8*/
    v128 = v120[4 * v122 + 2]; /*0x1004c8ab1*/
    v41 = v120[4 * v122]; /*0x1004c8ab5*/
    v127 = v120[4 * v122 + 1]; /*0x1004c8abe*/
    v126 = v41; /*0x1004c8ac2*/
    v120[v40 + 3] = v134; /*0x1004c8aca*/
    v39[v40 + 2] = v133; /*0x1004c8ad3*/
    v42 = v131; /*0x1004c8ad8*/
    v43 = v132; /*0x1004c8adc*/
    v39[v40 + 1] = v132; /*0x1004c8ae0*/
    v39[v40] = v42; /*0x1004c8ae5*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c8aed*/
    {
      v38 = &v126; /*0x1004c8af3*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c8af7*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c8b05*/
    v114 = v124; /*0x1004c8b10*/
    v113 = v123; /*0x1004c8b1e*/
    v112 = v122; /*0x1004c8b2c*/
    v111 = v121; /*0x1004c8b3a*/
    v110 = v120; /*0x1004c8b4f*/
    v109 = v119; /*0x1004c8b56*/
    v108 = v134; /*0x1004c8b61*/
    v107 = v133; /*0x1004c8b6c*/
    v106 = v132; /*0x1004c8b7b*/
    v105 = v131; /*0x1004c8b82*/
    v38 = &v126; /*0x1004c8b89*/
    v43 = (__int64 *)&v109; /*0x1004c8b8d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c8b9b*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v43); /*0x1004c8ba0*/
  v3 = 12; /*0x1004c8ba5*/
  v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004c8bb5*/
  if ( !v44 ) /*0x1004c8bbd*/
    goto LABEL_80; /*0x1004c8bbd*/
  qmemcpy(v44, "dbMismatched", 12); /*0x1004c8bcd*/
  v116 = 12; /*0x1004c8bd7*/
  v117 = (__int64 *)v44; /*0x1004c8be2*/
  v118 = 12; /*0x1004c8be9*/
  LOBYTE(v131) = 2; /*0x1004c8bf4*/
  v132 = nullptr; /*0x1004c8bf8*/
  v133 = v17; /*0x1004c8c00*/
  v45 = (__int64 *)&v119; /*0x1004c8c04*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c8c19*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c8c2f*/
  {
    v46 = v120; /*0x1004c8c31*/
    v47 = 4 * v122; /*0x1004c8c3f*/
    v129 = v120[4 * v122 + 3]; /*0x1004c8c48*/
    v128 = v120[4 * v122 + 2]; /*0x1004c8c51*/
    v48 = v120[4 * v122]; /*0x1004c8c55*/
    v127 = v120[4 * v122 + 1]; /*0x1004c8c5e*/
    v126 = v48; /*0x1004c8c62*/
    v120[v47 + 3] = v134; /*0x1004c8c6a*/
    v46[v47 + 2] = v133; /*0x1004c8c73*/
    v49 = v131; /*0x1004c8c78*/
    v50 = v132; /*0x1004c8c7c*/
    v46[v47 + 1] = v132; /*0x1004c8c80*/
    v46[v47] = v49; /*0x1004c8c85*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c8c8d*/
    {
      v45 = &v126; /*0x1004c8c93*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c8c97*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c8ca5*/
    v114 = v124; /*0x1004c8cb0*/
    v113 = v123; /*0x1004c8cbe*/
    v112 = v122; /*0x1004c8ccc*/
    v111 = v121; /*0x1004c8cda*/
    v110 = v120; /*0x1004c8cef*/
    v109 = v119; /*0x1004c8cf6*/
    v108 = v134; /*0x1004c8d01*/
    v107 = v133; /*0x1004c8d0c*/
    v106 = v132; /*0x1004c8d1b*/
    v105 = v131; /*0x1004c8d22*/
    v45 = &v126; /*0x1004c8d29*/
    v50 = (__int64 *)&v109; /*0x1004c8d2d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c8d3b*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v50); /*0x1004c8d40*/
  v3 = 17; /*0x1004c8d45*/
  v51 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004c8d55*/
  if ( !v51 ) /*0x1004c8d5d*/
    goto LABEL_80; /*0x1004c8d5d*/
  qmemcpy(v51, "rolloutMismatched", 17); /*0x1004c8d7b*/
  v116 = 17; /*0x1004c8d82*/
  v117 = (__int64 *)v51; /*0x1004c8d8d*/
  v118 = 17; /*0x1004c8d94*/
  LOBYTE(v131) = 2; /*0x1004c8d9f*/
  v132 = nullptr; /*0x1004c8da3*/
  v133 = v18; /*0x1004c8dab*/
  v52 = (__int64 *)&v119; /*0x1004c8daf*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c8dc4*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c8dda*/
  {
    v53 = v120; /*0x1004c8ddc*/
    v54 = 4 * v122; /*0x1004c8dea*/
    v129 = v120[4 * v122 + 3]; /*0x1004c8df3*/
    v128 = v120[4 * v122 + 2]; /*0x1004c8dfc*/
    v55 = v120[4 * v122]; /*0x1004c8e00*/
    v127 = v120[4 * v122 + 1]; /*0x1004c8e09*/
    v126 = v55; /*0x1004c8e0d*/
    v120[v54 + 3] = v134; /*0x1004c8e15*/
    v53[v54 + 2] = v133; /*0x1004c8e1e*/
    v56 = v131; /*0x1004c8e23*/
    v57 = v132; /*0x1004c8e27*/
    v53[v54 + 1] = v132; /*0x1004c8e2b*/
    v53[v54] = v56; /*0x1004c8e30*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c8e38*/
    {
      v52 = &v126; /*0x1004c8e3e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c8e42*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c8e50*/
    v114 = v124; /*0x1004c8e5b*/
    v113 = v123; /*0x1004c8e69*/
    v112 = v122; /*0x1004c8e77*/
    v111 = v121; /*0x1004c8e85*/
    v110 = v120; /*0x1004c8e9a*/
    v109 = v119; /*0x1004c8ea1*/
    v108 = v134; /*0x1004c8eac*/
    v107 = v133; /*0x1004c8eb7*/
    v106 = v132; /*0x1004c8ec6*/
    v105 = v131; /*0x1004c8ecd*/
    v52 = &v126; /*0x1004c8ed4*/
    v57 = (__int64 *)&v109; /*0x1004c8ed8*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c8ee6*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v57); /*0x1004c8eeb*/
  v3 = 15; /*0x1004c8ef0*/
  v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1004c8f00*/
  if ( !v58 ) /*0x1004c8f08*/
    goto LABEL_80; /*0x1004c8f08*/
  qmemcpy(v58, "missingRollouts", 15); /*0x1004c8f26*/
  v116 = 15; /*0x1004c8f29*/
  v117 = (__int64 *)v58; /*0x1004c8f34*/
  v118 = 15; /*0x1004c8f3b*/
  LOBYTE(v131) = 2; /*0x1004c8f46*/
  v132 = nullptr; /*0x1004c8f4a*/
  v133 = v19; /*0x1004c8f52*/
  v59 = (__int64 *)&v119; /*0x1004c8f56*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c8f6b*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c8f81*/
  {
    v60 = v120; /*0x1004c8f83*/
    v61 = 4 * v122; /*0x1004c8f91*/
    v129 = v120[4 * v122 + 3]; /*0x1004c8f9a*/
    v128 = v120[4 * v122 + 2]; /*0x1004c8fa3*/
    v62 = v120[4 * v122]; /*0x1004c8fa7*/
    v127 = v120[4 * v122 + 1]; /*0x1004c8fb0*/
    v126 = v62; /*0x1004c8fb4*/
    v120[v61 + 3] = v134; /*0x1004c8fbc*/
    v60[v61 + 2] = v133; /*0x1004c8fc5*/
    v63 = v131; /*0x1004c8fca*/
    v64 = v132; /*0x1004c8fce*/
    v60[v61 + 1] = v132; /*0x1004c8fd2*/
    v60[v61] = v63; /*0x1004c8fd7*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c8fdf*/
    {
      v59 = &v126; /*0x1004c8fe5*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c8fe9*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c8ff7*/
    v114 = v124; /*0x1004c9002*/
    v113 = v123; /*0x1004c9010*/
    v112 = v122; /*0x1004c901e*/
    v111 = v121; /*0x1004c902c*/
    v110 = v120; /*0x1004c9041*/
    v109 = v119; /*0x1004c9048*/
    v108 = v134; /*0x1004c9053*/
    v107 = v133; /*0x1004c905e*/
    v106 = v132; /*0x1004c906d*/
    v105 = v131; /*0x1004c9074*/
    v59 = &v126; /*0x1004c907b*/
    v64 = (__int64 *)&v109; /*0x1004c907f*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c908d*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v64); /*0x1004c9092*/
  v3 = 18; /*0x1004c9097*/
  v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1004c90a7*/
  if ( !v65 ) /*0x1004c90af*/
    goto LABEL_80; /*0x1004c90af*/
  qmemcpy(v65, "unreadableRollouts", 18); /*0x1004c90cd*/
  v116 = 18; /*0x1004c90d6*/
  v117 = (__int64 *)v65; /*0x1004c90e1*/
  v118 = 18; /*0x1004c90e8*/
  LOBYTE(v131) = 2; /*0x1004c90f3*/
  v132 = nullptr; /*0x1004c90f7*/
  v133 = v20; /*0x1004c90ff*/
  v66 = (__int64 *)&v119; /*0x1004c9103*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v116); /*0x1004c9118*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c912e*/
  {
    v67 = v120; /*0x1004c9130*/
    v68 = 4 * v122; /*0x1004c913e*/
    v129 = v120[4 * v122 + 3]; /*0x1004c9147*/
    v128 = v120[4 * v122 + 2]; /*0x1004c9150*/
    v69 = v120[4 * v122]; /*0x1004c9154*/
    v127 = v120[4 * v122 + 1]; /*0x1004c915d*/
    v126 = v69; /*0x1004c9161*/
    v120[v68 + 3] = v134; /*0x1004c9169*/
    v67[v68 + 2] = v133; /*0x1004c9172*/
    v70 = v131; /*0x1004c9177*/
    v71 = v132; /*0x1004c917b*/
    v67[v68 + 1] = v132; /*0x1004c917f*/
    v67[v68] = v70; /*0x1004c9184*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c918c*/
    {
      v66 = &v126; /*0x1004c9192*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c9196*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c91a4*/
    v114 = v124; /*0x1004c91af*/
    v113 = v123; /*0x1004c91bd*/
    v112 = v122; /*0x1004c91cb*/
    v111 = v121; /*0x1004c91d9*/
    v110 = v120; /*0x1004c91ee*/
    v109 = v119; /*0x1004c91f5*/
    v108 = v134; /*0x1004c9200*/
    v107 = v133; /*0x1004c920b*/
    v106 = v132; /*0x1004c921a*/
    v105 = v131; /*0x1004c9221*/
    v66 = &v126; /*0x1004c9228*/
    v71 = (__int64 *)&v109; /*0x1004c922c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c923a*/
      &v126,
      &v109,
      &v105);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v71); /*0x1004c923f*/
  v3 = 10; /*0x1004c9244*/
  v72 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1004c9254*/
  if ( !v72 ) /*0x1004c925c*/
    goto LABEL_80; /*0x1004c925c*/
  qmemcpy(v72, "readErrors", 10); /*0x1004c926f*/
  v99 = 10; /*0x1004c927a*/
  v100 = v72; /*0x1004c9285*/
  v101 = 10; /*0x1004c928c*/
  v73 = v130[4] + 24 * v98; /*0x1004c92aa*/
  v96[0] = v130[4]; /*0x1004c92ae*/
  v96[1] = v73; /*0x1004c92b5*/
  v96[2] = v102; /*0x1004c92c3*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf46917c0b7a9a673( /*0x1004c92d8*/
    &v116,
    v96);
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v109, &v116); /*0x1004c92eb*/
  if ( (_BYTE)v109 == 6 ) /*0x1004c92f7*/
  {
    v119 = v110; /*0x1004c9792*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c97ba*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v119,
      &off_101964900,
      &off_101963FD8);
  }
  v134 = v112; /*0x1004c9304*/
  v133 = v111; /*0x1004c930f*/
  v132 = v110; /*0x1004c9321*/
  v131 = v109; /*0x1004c9325*/
  v74 = (__int64 *)&v119; /*0x1004c9329*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v99); /*0x1004c933e*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c9354*/
  {
    v75 = v120; /*0x1004c9356*/
    v76 = 4 * v122; /*0x1004c9364*/
    v129 = v120[4 * v122 + 3]; /*0x1004c936d*/
    v128 = v120[4 * v122 + 2]; /*0x1004c9376*/
    v77 = v120[4 * v122]; /*0x1004c937a*/
    v127 = v120[4 * v122 + 1]; /*0x1004c9383*/
    v126 = v77; /*0x1004c9387*/
    v120[v76 + 3] = v134; /*0x1004c938f*/
    v75[v76 + 2] = v133; /*0x1004c9398*/
    v78 = v131; /*0x1004c939d*/
    v79 = (__int64)v132; /*0x1004c93a1*/
    v75[v76 + 1] = v132; /*0x1004c93a5*/
    v75[v76] = v78; /*0x1004c93aa*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c93b2*/
    {
      v74 = &v126; /*0x1004c93b8*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c93bc*/
    }
  }
  else
  {
    v115 = v125; /*0x1004c93ca*/
    v114 = v124; /*0x1004c93d5*/
    v113 = v123; /*0x1004c93e3*/
    v112 = v122; /*0x1004c93f1*/
    v111 = v121; /*0x1004c93ff*/
    v110 = v120; /*0x1004c9414*/
    v109 = v119; /*0x1004c941b*/
    v108 = v134; /*0x1004c9426*/
    v107 = v133; /*0x1004c9431*/
    v106 = v132; /*0x1004c9440*/
    v105 = v131; /*0x1004c9447*/
    v74 = &v126; /*0x1004c944e*/
    v79 = (__int64)&v109; /*0x1004c9452*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c9460*/
      &v126,
      &v109,
      &v105);
  }
  v80 = v118; /*0x1004c9465*/
  if ( v118 ) /*0x1004c946f*/
  {
    v81 = (__int64 **)(v117 + 1); /*0x1004c9478*/
    do /*0x1004c9487*/
    {
      v79 = (__int64)*(v81 - 1); /*0x1004c9489*/
      if ( v79 ) /*0x1004c9490*/
      {
        v74 = *v81; /*0x1004c9492*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v81, v79, 1); /*0x1004c949a*/
      }
      v81 += 3; /*0x1004c9480*/
      --v80; /*0x1004c9484*/
    }
    while ( v80 ); /*0x1004c9487*/
  }
  if ( v116 ) /*0x1004c94ab*/
  {
    v74 = v117; /*0x1004c94ad*/
    v79 = 24 * v116; /*0x1004c94b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, 24 * v116, 8); /*0x1004c94c1*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v74, v79); /*0x1004c94c6*/
  v3 = 8; /*0x1004c94cb*/
  v82 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1004c94db*/
  if ( !v82 ) /*0x1004c94e3*/
LABEL_80:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x1004c97ff*/
  *v82 = 0x73656C706D617865LL; /*0x1004c94f6*/
  v99 = 8; /*0x1004c94fa*/
  v100 = v82; /*0x1004c9505*/
  v101 = 8; /*0x1004c950c*/
  v83 = v130; /*0x1004c9517*/
  v84 = v130[7] + 24LL * v130[8]; /*0x1004c9527*/
  v95[0] = v130[7]; /*0x1004c952b*/
  v95[1] = v84; /*0x1004c9532*/
  v95[2] = v102; /*0x1004c9540*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf46917c0b7a9a673( /*0x1004c9555*/
    &v116,
    v95);
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v109, &v116); /*0x1004c9568*/
  if ( (_BYTE)v109 == 6 ) /*0x1004c9574*/
  {
    v119 = v110; /*0x1004c97c8*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c97f0*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v119,
      &off_101964900,
      &off_101963FD8);
  }
  v134 = v112; /*0x1004c9581*/
  v133 = v111; /*0x1004c958c*/
  v132 = v110; /*0x1004c959e*/
  v131 = v109; /*0x1004c95a2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v119, v103, &v99); /*0x1004c95bb*/
  if ( v119 == (_QWORD *)0x8000000000000000LL ) /*0x1004c95d1*/
  {
    v85 = v120; /*0x1004c95d3*/
    v86 = 4 * v122; /*0x1004c95e1*/
    v129 = v120[4 * v122 + 3]; /*0x1004c95ea*/
    v128 = v120[4 * v122 + 2]; /*0x1004c95f3*/
    v87 = v120[4 * v122]; /*0x1004c95f7*/
    v127 = v120[4 * v122 + 1]; /*0x1004c9600*/
    v126 = v87; /*0x1004c9604*/
    v120[v86 + 3] = v134; /*0x1004c960c*/
    v85[v86 + 2] = v133; /*0x1004c9615*/
    v88 = v131; /*0x1004c961a*/
    v85[v86 + 1] = v132; /*0x1004c9622*/
    v85[v86] = v88; /*0x1004c9627*/
    if ( (_BYTE)v126 != 6 ) /*0x1004c962f*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v126); /*0x1004c9639*/
  }
  else
  {
    v115 = v125; /*0x1004c9647*/
    v114 = v124; /*0x1004c9652*/
    v113 = v123; /*0x1004c9660*/
    v112 = v122; /*0x1004c966e*/
    v111 = v121; /*0x1004c967c*/
    v110 = v120; /*0x1004c9691*/
    v109 = v119; /*0x1004c9698*/
    v108 = v134; /*0x1004c96a3*/
    v107 = v133; /*0x1004c96ae*/
    v106 = v132; /*0x1004c96bd*/
    v105 = v131; /*0x1004c96c4*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c96dd*/
      &v126,
      &v109,
      &v105);
  }
  v89 = v118; /*0x1004c96e2*/
  if ( v118 ) /*0x1004c96ec*/
  {
    v90 = v117 + 1; /*0x1004c96f5*/
    do /*0x1004c9707*/
    {
      v91 = *(v90 - 1); /*0x1004c9709*/
      if ( v91 ) /*0x1004c9710*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v90, v91, 1); /*0x1004c971a*/
      v90 += 3; /*0x1004c9700*/
      --v89; /*0x1004c9704*/
    }
    while ( v89 ); /*0x1004c9707*/
  }
  if ( v116 ) /*0x1004c972b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, 24 * v116, 8); /*0x1004c9741*/
  v92 = v97; /*0x1004c974d*/
  *(_QWORD *)(v97 + 24) = v104; /*0x1004c9754*/
  v93 = v103[0]; /*0x1004c9758*/
  *(_QWORD *)(v92 + 16) = v103[1]; /*0x1004c9766*/
  *(_QWORD *)(v92 + 8) = v93; /*0x1004c976a*/
  *(_BYTE *)v92 = 5; /*0x1004c976e*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(v83); /*0x1004c9779*/
}