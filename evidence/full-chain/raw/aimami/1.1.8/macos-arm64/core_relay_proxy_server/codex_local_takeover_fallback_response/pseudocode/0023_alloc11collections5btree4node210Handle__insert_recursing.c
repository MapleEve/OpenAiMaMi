// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_takeover_fallback_response node 0x1001d4810 depth=2
_QWORD *__fastcall alloc::collections::btree::node::Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Mut$C$K$C$V$C$alloc..collections..btree..node..marker..Leaf$GT$$C$alloc..collections..btree..node..marker..Edge$GT$::insert_recursing::he18b2b1bbbdad6ac(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 **a5)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // r12
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *result; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // r13
  __int64 *v26; // r14
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  size_t v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int16 *v38; // rax
  __int64 v39; // rcx
  size_t v40; // r12
  __int64 v41; // r14
  unsigned __int16 *v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // r10
  unsigned __int16 *v45; // r9
  __int64 v46; // rsi
  unsigned __int64 v47; // r15
  char v48; // r13
  __int64 v49; // rax
  unsigned __int16 *v50; // r14
  unsigned __int64 v51; // r13
  size_t v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  unsigned __int64 v55; // r12
  int v56; // edx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned __int16 *v60; // r8
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // r13
  unsigned __int16 *v64; // r12
  unsigned __int64 v65; // r10
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rdx
  __int64 i; // rcx
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  size_t v77; // rsi
  __int64 v78; // rdi
  __int64 *v79; // r14
  __int64 v80; // r12
  __int64 v81; // r13
  __int64 v82; // rax
  size_t v83; // rbx
  __int64 v84; // r13
  unsigned __int16 *v85; // r12
  __int64 v86; // r12
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  char v89; // cl
  unsigned __int64 v90; // r15
  int v91; // ecx
  __int64 v92; // rsi
  __int64 j; // rdx
  __int64 v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v100; // [rsp+28h] [rbp-168h]
  __int64 v101; // [rsp+30h] [rbp-160h]
  char v102; // [rsp+58h] [rbp-138h]
  __int64 v103; // [rsp+60h] [rbp-130h]
  __int64 v104; // [rsp+68h] [rbp-128h]
  __int64 v105; // [rsp+68h] [rbp-128h]
  __int64 v106; // [rsp+70h] [rbp-120h]
  __int64 v107; // [rsp+70h] [rbp-120h]
  __int64 v108; // [rsp+78h] [rbp-118h]
  __int64 v109; // [rsp+78h] [rbp-118h]
  __int64 v110; // [rsp+80h] [rbp-110h]
  __int64 v111; // [rsp+80h] [rbp-110h]
  __int64 v112; // [rsp+88h] [rbp-108h]
  __int64 v113; // [rsp+88h] [rbp-108h]
  __int64 v114; // [rsp+88h] [rbp-108h]
  __int64 v115; // [rsp+90h] [rbp-100h]
  __int64 v116; // [rsp+90h] [rbp-100h]
  __int64 v117; // [rsp+98h] [rbp-F8h]
  __int64 v118; // [rsp+98h] [rbp-F8h]
  __int64 v119; // [rsp+A0h] [rbp-F0h]
  __int64 v120; // [rsp+A0h] [rbp-F0h]
  __int64 v121; // [rsp+E0h] [rbp-B0h]
  __int64 v122; // [rsp+E0h] [rbp-B0h]
  __int64 v124; // [rsp+F0h] [rbp-A0h]
  size_t v125; // [rsp+F8h] [rbp-98h]
  __int64 v126; // [rsp+100h] [rbp-90h]
  __int64 v127; // [rsp+100h] [rbp-90h]
  __int64 v128; // [rsp+100h] [rbp-90h]
  __int64 v129; // [rsp+108h] [rbp-88h]
  __int64 v130; // [rsp+110h] [rbp-80h]
  __int64 v131; // [rsp+118h] [rbp-78h]
  __int64 v132; // [rsp+120h] [rbp-70h]
  int __len; // [rsp+128h] [rbp-68h]
  size_t __lena; // [rsp+128h] [rbp-68h]
  size_t v135; // [rsp+130h] [rbp-60h]
  char v136; // [rsp+138h] [rbp-58h]
  __int16 v137; // [rsp+138h] [rbp-58h]
  __int64 v138; // [rsp+138h] [rbp-58h]
  unsigned __int64 v139; // [rsp+140h] [rbp-50h]
  __int64 v140; // [rsp+140h] [rbp-50h]
  __int64 v142; // [rsp+148h] [rbp-48h]
  __int64 v143; // [rsp+150h] [rbp-40h]
  __int64 v144; // [rsp+150h] [rbp-40h]
  unsigned __int64 v147; // [rsp+158h] [rbp-38h]
  __int64 v148; // [rsp+160h] [rbp-30h]
  unsigned __int16 *v149; // [rsp+160h] [rbp-30h]

  v6 = *a2; /*0x1001d4827*/
  v7 = *(unsigned __int16 *)(*a2 + 626LL); /*0x1001d482a*/
  v148 = *a2; /*0x1001d4836*/
  if ( v7 < 0xB ) /*0x1001d4841*/
  {
    v10 = a2[2]; /*0x1001d486a*/
    v11 = v10 + 1; /*0x1001d486e*/
    v12 = (_QWORD *)(v6 + 24 * v10 + 360); /*0x1001d4876*/
    if ( v10 + 1 <= v7 ) /*0x1001d4881*/
    {
      v14 = (void *)(v6 + 360 + 24 * v11); /*0x1001d48fa*/
      v15 = v7 - v10; /*0x1001d4905*/
      v140 = a2[2]; /*0x1001d4910*/
      v16 = a3; /*0x1001d491f*/
      memmove(v14, v12, 24 * (v7 - v10)); /*0x1001d4922*/
      v17 = v16[1]; /*0x1001d492a*/
      *v12 = *v16; /*0x1001d492e*/
      v12[1] = v17; /*0x1001d4931*/
      v12[2] = v16[2]; /*0x1001d4939*/
      v119 = a4[3]; /*0x1001d4945*/
      v117 = a4[2]; /*0x1001d4950*/
      v115 = a4[1]; /*0x1001d495e*/
      v112 = *a4; /*0x1001d4965*/
      memmove((void *)(v148 + 32 * v11), (const void *)(v148 + 32 * v140), 32 * v15); /*0x1001d498a*/
      v6 = v148; /*0x1001d498f*/
      v10 = v140; /*0x1001d4993*/
    }
    else
    {
      *(_QWORD *)(v6 + 24 * v10 + 376) = a3[2]; /*0x1001d4887*/
      v13 = *a3; /*0x1001d488b*/
      *(_QWORD *)(v6 + 24 * v10 + 368) = a3[1]; /*0x1001d4892*/
      *v12 = v13; /*0x1001d4896*/
      v119 = a4[3]; /*0x1001d489d*/
      v117 = a4[2]; /*0x1001d48a8*/
      v115 = a4[1]; /*0x1001d48b6*/
      v112 = *a4; /*0x1001d48bd*/
    }
    v18 = 32 * v10; /*0x1001d49a1*/
    *(_QWORD *)(v6 + v18 + 24) = v119; /*0x1001d49ac*/
    *(_QWORD *)(v6 + v18 + 16) = v117; /*0x1001d49b8*/
    v19 = v10; /*0x1001d49c4*/
    *(_QWORD *)(v6 + v18 + 8) = v115; /*0x1001d49ce*/
    *(_QWORD *)(v6 + v18) = v112; /*0x1001d49d3*/
    *(_WORD *)(v6 + 626) = v7 + 1; /*0x1001d49d7*/
    v20 = a2[1]; /*0x1001d49df*/
    result = a1; /*0x1001d49e3*/
    goto LABEL_24; /*0x1001d49ea*/
  }
  v8 = a2[2]; /*0x1001d4847*/
  if ( v8 >= 5 ) /*0x1001d4856*/
  {
    if ( v8 == 5 ) /*0x1001d48c9*/
    {
      v9 = 0; /*0x1001d49ef*/
      v139 = 5; /*0x1001d49f2*/
    }
    else if ( v8 == 6 ) /*0x1001d48d3*/
    {
      v8 = 5; /*0x1001d48d9*/
      v9 = 1; /*0x1001d48df*/
      v139 = 0; /*0x1001d48e2*/
    }
    else
    {
      v139 = v8 - 7; /*0x1001d49fc*/
      v8 = 6; /*0x1001d4a00*/
      v9 = 1; /*0x1001d4a06*/
    }
  }
  else
  {
    v139 = a2[2]; /*0x1001d4858*/
    v8 = 4; /*0x1001d485c*/
    v9 = 0; /*0x1001d4862*/
  }
  v22 = a2[1]; /*0x1001d4a1f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001d4a23*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x278u, 8u); /*0x1001d4a32*/
  if ( !v23 ) /*0x1001d4a3a*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 632); /*0x1001d5801*/
  v24 = v23; /*0x1001d4a40*/
  v136 = v9; /*0x1001d4a43*/
  v126 = v22; /*0x1001d4a47*/
  *(_QWORD *)(v23 + 352) = 0; /*0x1001d4a4e*/
  v25 = *(unsigned __int16 *)(v148 + 626) + ~v8; /*0x1001d4a6a*/
  *(_WORD *)(v23 + 626) = v25; /*0x1001d4a6d*/
  v143 = *(_QWORD *)(v148 + 24 * v8 + 360); /*0x1001d4a81*/
  v135 = *(_QWORD *)(v148 + 24 * v8 + 368); /*0x1001d4a8d*/
  v121 = *(_QWORD *)(v148 + 24 * v8 + 376); /*0x1001d4a99*/
  if ( v25 >= 0xC ) /*0x1001d4ada*/
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v25, 0xBu, (__int64)&off_101526628); /*0x1001d57f0*/
  v26 = (__int64 *)(v148 + 32 * v8); /*0x1001d4ae7*/
  memcpy((void *)(v23 + 360), (const void *)(v148 + 360 + 24 * (v8 + 1)), 24 * v25); /*0x1001d4b0a*/
  memcpy((void *)v24, (const void *)(v148 + 32 * (v8 + 1)), 32 * v25); /*0x1001d4b24*/
  v27 = v148; /*0x1001d4b29*/
  *(_WORD *)(v148 + 626) = v8; /*0x1001d4b2d*/
  v104 = *v26; /*0x1001d4b3c*/
  v106 = v26[1]; /*0x1001d4b43*/
  v108 = v26[2]; /*0x1001d4b4e*/
  v110 = v26[3]; /*0x1001d4b59*/
  v28 = 0; /*0x1001d4b60*/
  v6 = v24; /*0x1001d4b66*/
  if ( !v136 ) /*0x1001d4b69*/
    v6 = v148; /*0x1001d4b69*/
  v29 = v22; /*0x1001d4b6d*/
  if ( !v136 ) /*0x1001d4b74*/
    v28 = v22; /*0x1001d4b74*/
  v103 = v28; /*0x1001d4b78*/
  v30 = *(unsigned __int16 *)(v6 + 626); /*0x1001d4b7f*/
  v31 = v139; /*0x1001d4b87*/
  v32 = (_QWORD *)(v6 + 24 * v139 + 360); /*0x1001d4b8f*/
  if ( v30 <= v139 ) /*0x1001d4b9a*/
  {
    *(_QWORD *)(v6 + 24 * v139 + 376) = a3[2]; /*0x1001d4c5a*/
    v35 = *a3; /*0x1001d4c5e*/
    *(_QWORD *)(v6 + 24 * v139 + 368) = a3[1]; /*0x1001d4c65*/
    *v32 = v35; /*0x1001d4c69*/
    v120 = a4[3]; /*0x1001d4c74*/
    v118 = a4[2]; /*0x1001d4c7f*/
    v116 = a4[1]; /*0x1001d4c8d*/
    v113 = *a4; /*0x1001d4c94*/
  }
  else
  {
    v137 = *(_WORD *)(v6 + 626); /*0x1001d4bb4*/
    LODWORD(v30) = v30 - v139; /*0x1001d4bbc*/
    memmove((void *)(v6 + 360 + 24 * (v139 + 1)), (const void *)(v6 + 24 * v139 + 360), 3LL * (unsigned int)(8 * v30)); /*0x1001d4bce*/
    v33 = a3[1]; /*0x1001d4bda*/
    *v32 = *a3; /*0x1001d4bde*/
    *(_QWORD *)(v6 + 24 * v139 + 368) = v33; /*0x1001d4be1*/
    *(_QWORD *)(v6 + 24 * v139 + 376) = a3[2]; /*0x1001d4be9*/
    v120 = a4[3]; /*0x1001d4bf5*/
    v118 = a4[2]; /*0x1001d4c00*/
    v116 = a4[1]; /*0x1001d4c0e*/
    v113 = *a4; /*0x1001d4c15*/
    v29 = v126; /*0x1001d4c35*/
    v34 = (unsigned int)(32 * v30); /*0x1001d4c3c*/
    LOWORD(v30) = v137; /*0x1001d4c3f*/
    memmove((void *)(v6 + 32 * (v139 + 1)), (const void *)(v6 + 32 * v139), v34); /*0x1001d4c43*/
    v27 = v148; /*0x1001d4c48*/
    v31 = v139; /*0x1001d4c4c*/
  }
  v36 = v143; /*0x1001d4c9b*/
  v37 = 32 * v31; /*0x1001d4ca5*/
  *(_QWORD *)(v6 + v37 + 24) = v120; /*0x1001d4cb0*/
  *(_QWORD *)(v6 + v37 + 16) = v118; /*0x1001d4cbc*/
  *(_QWORD *)(v6 + v37 + 8) = v116; /*0x1001d4ccf*/
  *(_QWORD *)(v6 + v37) = v113; /*0x1001d4cd4*/
  *(_WORD *)(v6 + 626) = v30 + 1; /*0x1001d4cd8*/
  if ( __OFSUB__(-v143, 1) ) /*0x1001d4d1b*/
  {
    result = a1; /*0x1001d4d20*/
    v19 = v139; /*0x1001d4d27*/
    v20 = v103; /*0x1001d4d2b*/
LABEL_24:
    *result = v6; /*0x1001d4d32*/
    result[1] = v20; /*0x1001d4d35*/
    result[2] = v19; /*0x1001d4d39*/
    return result; /*0x1001d4d4e*/
  }
  v101 = v6; /*0x1001d4d4f*/
  v132 = v110; /*0x1001d4d5d*/
  v131 = v108; /*0x1001d4d68*/
  v130 = v106; /*0x1001d4d7a*/
  v129 = v104; /*0x1001d4d7e*/
  v38 = *(unsigned __int16 **)(v27 + 352); /*0x1001d4d85*/
  if ( v38 )
  {
    v39 = 0; /*0x1001d4d95*/
    v40 = v135; /*0x1001d4d97*/
    v41 = v121; /*0x1001d4d9b*/
    v142 = v143; /*0x1001d4da2*/
    v42 = (unsigned __int16 *)v27; /*0x1001d4da6*/
    v43 = v29; /*0x1001d4da9*/
    v44 = v24; /*0x1001d4dac*/
    while ( 1 )
    {
      if ( v39 != v43 )
        core::panicking::panic::h286e2dd5eab048be(
          (__int64)"assertion failed: edge.height == self.node.height - 1assertion failed: old_right_len + count <= CAPACITYassertion failed: old_left_len >= countassertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
          53,
          (__int64)&off_101526658);
      v45 = v38; /*0x1001d4db9*/
      v46 = v42[312]; /*0x1001d4dbc*/
      v47 = v38[313]; /*0x1001d4dc3*/
      v149 = v38; /*0x1001d4dcf*/
      v124 = v44; /*0x1001d4dd3*/
      __len = v38[313]; /*0x1001d4dda*/
      if ( v47 < 0xB ) /*0x1001d4dde*/
        break; /*0x1001d4dde*/
      v100 = v41; /*0x1001d4de8*/
      if ( (unsigned __int16)v46 >= 5u ) /*0x1001d4def*/
      {
        if ( v46 == 5 ) /*0x1001d4e14*/
        {
          v48 = 0; /*0x1001d4e31*/
          v147 = 5; /*0x1001d4e34*/
          v138 = 5; /*0x1001d4e38*/
        }
        else if ( (_DWORD)v46 == 6 ) /*0x1001d4e19*/
        {
          v48 = 1; /*0x1001d4e1b*/
          v138 = 5; /*0x1001d4e23*/
          v147 = 0; /*0x1001d4e27*/
        }
        else
        {
          v147 = v46 - 7; /*0x1001d4e42*/
          v48 = 1; /*0x1001d4e46*/
          v138 = 6; /*0x1001d4e4e*/
        }
      }
      else
      {
        v147 = v42[312]; /*0x1001d4df1*/
        v138 = 4; /*0x1001d4dfa*/
        v48 = 0; /*0x1001d4dfe*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001d4e60*/
      v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2D8u, 8u); /*0x1001d4e6f*/
      if ( !v49 ) /*0x1001d4e77*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 728); /*0x1001d57bb*/
      v50 = (unsigned __int16 *)v49; /*0x1001d4e7d*/
      v102 = v48; /*0x1001d4e80*/
      v125 = v40; /*0x1001d4e87*/
      v127 = v43; /*0x1001d4e8e*/
      v24 = v49; /*0x1001d4e95*/
      *(_QWORD *)(v49 + 352) = 0; /*0x1001d4e98*/
      *(_WORD *)(v49 + 626) = 0; /*0x1001d4ea3*/
      v51 = v149[313] + ~v138; /*0x1001d4ec2*/
      *(_WORD *)(v49 + 626) = v51; /*0x1001d4ec5*/
      v52 = *(_QWORD *)&v149[12 * v138 + 184]; /*0x1001d4ed9*/
      v53 = *(_QWORD *)&v149[12 * v138 + 188]; /*0x1001d4ee1*/
      v54 = (unsigned int)(32 * v138); /*0x1001d4eeb*/
      v111 = *(_QWORD *)((char *)v149 + v54 + 24); /*0x1001d4ef3*/
      v109 = *(_QWORD *)((char *)v149 + v54 + 16); /*0x1001d4eff*/
      v107 = *(_QWORD *)((char *)v149 + v54 + 8); /*0x1001d4f0f*/
      v105 = *(_QWORD *)((char *)v149 + v54); /*0x1001d4f16*/
      if ( v51 >= 0xC ) /*0x1001d4f21*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v51, 0xBu, (__int64)&off_101526628); /*0x1001d576b*/
      v144 = *(_QWORD *)&v149[12 * v138 + 180]; /*0x1001d4f2e*/
      memcpy(v50 + 180, &v149[12 * v138 + 192], 24 * v51); /*0x1001d4f55*/
      memcpy((void *)v24, (char *)v149 + (unsigned int)(32 * (v138 + 1)), 32 * v51); /*0x1001d4f6f*/
      v149[313] = v138; /*0x1001d4f7c*/
      v122 = v53; /*0x1001d4f9a*/
      v55 = *(unsigned __int16 *)(v24 + 626); /*0x1001d4fda*/
      v56 = v55 + 1; /*0x1001d4fe2*/
      if ( v55 >= 0xC ) /*0x1001d4feb*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v55 + 1, 0xCu, (__int64)&off_101526640); /*0x1001d578a*/
      if ( __len - (_DWORD)v138 != v56 )
        core::panicking::panic::h286e2dd5eab048be(
          (__int64)"assertion failed: src.len() == dst.len()assertion failed: edge.height == self.node.height - 1assertion failed: old_right_len + count <= CAPACITYassertion failed: old_left_len >= countassertion failed: old_left_len + count <= CAPACITYassertion failed: old_right_len >= countassertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}assertion failed: new_left_len <= CAPACITYXML:com.adobe.xmpRaw profile type iptcRaw profile type 8bim",
          40,
          (__int64)&off_101526610);
      v128 = v127 + 1; /*0x1001d5004*/
      memcpy(v50 + 316, &v149[4 * v138 + 320], (unsigned int)(8 * v56)); /*0x1001d501d*/
      v57 = 0; /*0x1001d5022*/
      do /*0x1001d5058*/
      {
        v58 = v57; /*0x1001d5030*/
        v57 += v57 < v55; /*0x1001d5036*/
        v59 = *(_QWORD *)(v24 + 8 * v58 + 632); /*0x1001d503a*/
        *(_QWORD *)(v59 + 352) = v24; /*0x1001d5042*/
        *(_WORD *)(v59 + 624) = v58; /*0x1001d5049*/
      }
      while ( v58 < v55 && v57 <= v55 ); /*0x1001d5058*/
      v60 = v149; /*0x1001d5093*/
      if ( !v102 ) /*0x1001d5097*/
        v50 = v149; /*0x1001d5097*/
      v61 = v50[313]; /*0x1001d509b*/
      v62 = v147; /*0x1001d50a3*/
      v63 = v147 + 1; /*0x1001d50a7*/
      v64 = &v50[12 * v147 + 180]; /*0x1001d50b2*/
      v65 = v61 - v147; /*0x1001d50ba*/
      if ( v61 <= v147 ) /*0x1001d50bd*/
      {
        *(_QWORD *)v64 = v142; /*0x1001d5194*/
        *(_QWORD *)&v50[12 * v147 + 184] = v125; /*0x1001d519f*/
        *(_QWORD *)&v50[12 * v147 + 188] = v100; /*0x1001d51ab*/
        v67 = 16 * v147; /*0x1001d51b3*/
        *(_QWORD *)&v50[v67 + 12] = v132; /*0x1001d51bb*/
        *(_QWORD *)&v50[v67 + 8] = v131; /*0x1001d51c4*/
        *(_QWORD *)&v50[v67 + 4] = v130; /*0x1001d51d4*/
        *(_QWORD *)&v50[v67] = v129; /*0x1001d51d9*/
      }
      else
      {
        __lena = (unsigned int)(8 * (v61 - v147)); /*0x1001d50e5*/
        memmove(&v50[12 * v63 + 180], &v50[12 * v147 + 180], 3 * __lena); /*0x1001d50f4*/
        *(_QWORD *)v64 = v142; /*0x1001d50fd*/
        *(_QWORD *)&v50[12 * v147 + 184] = v125; /*0x1001d5108*/
        *(_QWORD *)&v50[12 * v147 + 188] = v100; /*0x1001d5114*/
        v66 = 16 * v147; /*0x1001d511d*/
        memmove(&v50[16 * v63], &v50[16 * v147], (unsigned int)(32 * (v61 - v147))); /*0x1001d5139*/
        *(_QWORD *)&v50[v66] = v129; /*0x1001d5149*/
        *(_QWORD *)&v50[v66 + 4] = v130; /*0x1001d514d*/
        *(_QWORD *)&v50[v66 + 8] = v131; /*0x1001d5156*/
        *(_QWORD *)&v50[v66 + 12] = v132; /*0x1001d515f*/
        memmove(&v50[4 * v147 + 324], &v50[4 * v63 + 316], __lena); /*0x1001d517c*/
        v65 = v61 - v147; /*0x1001d5181*/
        v62 = v147; /*0x1001d5185*/
        v60 = v149; /*0x1001d5189*/
      }
      v68 = v61 + 2; /*0x1001d51e7*/
      *(_QWORD *)&v50[4 * v62 + 320] = v124; /*0x1001d51eb*/
      v50[313] = v61 + 1; /*0x1001d51f3*/
      v36 = v144; /*0x1001d51fe*/
      if ( v63 < v61 + 2 ) /*0x1001d5202*/
      {
        v69 = ((_BYTE)v61 - (_BYTE)v62 + 1) & 3; /*0x1001d520c*/
        if ( v69 ) /*0x1001d520f*/
        {
          v70 = (__int64)&v50[4 * v62 + 320]; /*0x1001d5211*/
          for ( i = 0; i != v69; *(_WORD *)(v72 + 624) = v63 + i++ ) /*0x1001d5219*/
          {
            v72 = *(_QWORD *)(v70 + 8 * i); /*0x1001d5220*/
            *(_QWORD *)(v72 + 352) = v50; /*0x1001d5224*/
          }
          v63 += i; /*0x1001d523f*/
        }
        if ( v65 >= 3 ) /*0x1001d5246*/
        {
          do /*0x1001d52bc*/
          {
            v73 = *(_QWORD *)&v50[4 * v63 + 316]; /*0x1001d5250*/
            *(_QWORD *)(v73 + 352) = v50; /*0x1001d5258*/
            *(_WORD *)(v73 + 624) = v63; /*0x1001d525f*/
            v74 = *(_QWORD *)&v50[4 * v63 + 320]; /*0x1001d5267*/
            *(_QWORD *)(v74 + 352) = v50; /*0x1001d526f*/
            *(_WORD *)(v74 + 624) = v63 + 1; /*0x1001d527a*/
            v75 = *(_QWORD *)&v50[4 * v63 + 324]; /*0x1001d5281*/
            *(_QWORD *)(v75 + 352) = v50; /*0x1001d5289*/
            *(_WORD *)(v75 + 624) = v63 + 2; /*0x1001d5294*/
            v76 = *(_QWORD *)&v50[4 * v63 + 328]; /*0x1001d529b*/
            *(_QWORD *)(v76 + 352) = v50; /*0x1001d52a3*/
            *(_WORD *)(v76 + 624) = v63 + 3; /*0x1001d52ae*/
            v63 += 4LL; /*0x1001d52b5*/
          }
          while ( v63 != v68 ); /*0x1001d52bc*/
        }
      }
      if ( v144 == 0x8000000000000000LL ) /*0x1001d5303*/
        goto LABEL_74; /*0x1001d5303*/
      v132 = v111; /*0x1001d5310*/
      v131 = v109; /*0x1001d531b*/
      v130 = v107; /*0x1001d532d*/
      v129 = v105; /*0x1001d5331*/
      v38 = *((unsigned __int16 **)v60 + 44); /*0x1001d5338*/
      v43 = v128; /*0x1001d533f*/
      v77 = v52; /*0x1001d5349*/
      v40 = v52; /*0x1001d534d*/
      v78 = v122; /*0x1001d5350*/
      v41 = v122; /*0x1001d5357*/
      v142 = v144; /*0x1001d535a*/
      v42 = v60; /*0x1001d535e*/
      v44 = v24; /*0x1001d5361*/
      v39 = v128; /*0x1001d5364*/
      if ( !v38 ) /*0x1001d536a*/
        goto LABEL_59; /*0x1001d536a*/
    }
    v83 = v40; /*0x1001d550c*/
    v84 = v46 + 1; /*0x1001d5513*/
    v85 = &v38[12 * v46 + 180]; /*0x1001d551b*/
    if ( (unsigned __int16)v46 >= (unsigned __int16)v47 ) /*0x1001d5527*/
    {
      *(_QWORD *)v85 = v142; /*0x1001d5612*/
      *(_QWORD *)&v38[12 * v46 + 184] = v83; /*0x1001d5616*/
      *(_QWORD *)&v38[12 * v46 + 188] = v41; /*0x1001d561b*/
      v87 = (unsigned int)(32 * v46); /*0x1001d5622*/
      *(_QWORD *)((char *)v45 + v87 + 24) = v132; /*0x1001d5629*/
      *(_QWORD *)((char *)v45 + v87 + 16) = v131; /*0x1001d5632*/
      *(_QWORD *)((char *)v45 + v87 + 8) = v130; /*0x1001d5642*/
      *(_QWORD *)((char *)v45 + v87) = v129; /*0x1001d5647*/
    }
    else
    {
      memmove(&v38[12 * v84 + 180], &v38[12 * v46 + 180], 24 * (v47 - v46)); /*0x1001d555e*/
      *(_QWORD *)v85 = v142; /*0x1001d5567*/
      *((_QWORD *)v85 + 1) = v83; /*0x1001d556b*/
      *((_QWORD *)v85 + 2) = v41; /*0x1001d5570*/
      v86 = (unsigned int)(32 * v46); /*0x1001d5579*/
      memmove((char *)v149 + (unsigned int)(32 * v84), (char *)v149 + v86, 32 * (v47 - v46)); /*0x1001d559a*/
      *(_QWORD *)((char *)v149 + v86) = v129; /*0x1001d55ae*/
      *(_QWORD *)((char *)v149 + v86 + 8) = v130; /*0x1001d55b6*/
      *(_QWORD *)((char *)v149 + v86 + 16) = v131; /*0x1001d55c3*/
      *(_QWORD *)((char *)v149 + v86 + 24) = v132; /*0x1001d55d0*/
      memmove(&v149[4 * v46 + 324], &v149[4 * v84 + 316], 8 * (v47 - v46)); /*0x1001d55f5*/
      v44 = v124; /*0x1001d55fd*/
      v45 = v149; /*0x1001d5608*/
    }
    v88 = v47 + 2; /*0x1001d564b*/
    *(_QWORD *)&v45[4 * v46 + 320] = v44; /*0x1001d564f*/
    v45[313] = v47 + 1; /*0x1001d5657*/
    if ( (unsigned int)v84 < (int)v47 + 2 ) /*0x1001d5662*/
    {
      v89 = v47 - v46 + 1; /*0x1001d566d*/
      v90 = v47 - v46; /*0x1001d566f*/
      v91 = v89 & 3; /*0x1001d5672*/
      if ( v91 ) /*0x1001d5675*/
      {
        v92 = (__int64)&v45[4 * v46 + 320]; /*0x1001d5677*/
        for ( j = 0; j != v91; *(_WORD *)(v94 + 624) = v84 + j++ ) /*0x1001d567f*/
        {
          v94 = *(_QWORD *)(v92 + 8 * j); /*0x1001d5690*/
          *(_QWORD *)(v94 + 352) = v45; /*0x1001d5694*/
        }
        v84 += j; /*0x1001d56b0*/
      }
      if ( v90 >= 3 ) /*0x1001d56b7*/
      {
        do /*0x1001d572c*/
        {
          v95 = *(_QWORD *)&v45[4 * v84 + 316]; /*0x1001d56c0*/
          *(_QWORD *)(v95 + 352) = v45; /*0x1001d56c8*/
          *(_WORD *)(v95 + 624) = v84; /*0x1001d56cf*/
          v96 = *(_QWORD *)&v45[4 * v84 + 320]; /*0x1001d56d7*/
          *(_QWORD *)(v96 + 352) = v45; /*0x1001d56df*/
          *(_WORD *)(v96 + 624) = v84 + 1; /*0x1001d56ea*/
          v97 = *(_QWORD *)&v45[4 * v84 + 324]; /*0x1001d56f1*/
          *(_QWORD *)(v97 + 352) = v45; /*0x1001d56f9*/
          *(_WORD *)(v97 + 624) = v84 + 2; /*0x1001d5704*/
          v98 = *(_QWORD *)&v45[4 * v84 + 328]; /*0x1001d570b*/
          *(_QWORD *)(v98 + 352) = v45; /*0x1001d5713*/
          *(_WORD *)(v98 + 624) = v84 + 3; /*0x1001d571e*/
          v84 += 4; /*0x1001d5725*/
        }
        while ( v84 != v88 ); /*0x1001d572c*/
      }
    }
LABEL_74:
    *a1 = v101; /*0x1001d572e*/
    a1[1] = v103; /*0x1001d5746*/
    a1[2] = v139; /*0x1001d574e*/
    return a1; /*0x1001d572e*/
  }
  else
  {
    v43 = 0; /*0x1001d5372*/
    v77 = v135; /*0x1001d5374*/
    v78 = v121; /*0x1001d5378*/
LABEL_59:
    v114 = v36; /*0x1001d537f*/
    v79 = *a5; /*0x1001d53f5*/
    v80 = **a5; /*0x1001d53f8*/
    if ( !v80 ) /*0x1001d53fe*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101526568); /*0x1001d5816*/
    v81 = v79[1]; /*0x1001d5404*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001d5408*/
    v82 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2D8u, 8u); /*0x1001d5417*/
    if ( !v82 ) /*0x1001d541f*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 728); /*0x1001d5827*/
    *(_QWORD *)(v82 + 352) = 0; /*0x1001d5428*/
    *(_WORD *)(v82 + 626) = 0; /*0x1001d5433*/
    *(_QWORD *)(v82 + 632) = v80; /*0x1001d543c*/
    if ( v81 == -1 ) /*0x1001d544d*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_1015265C8); /*0x1001d5835*/
    *(_QWORD *)(v80 + 352) = v82; /*0x1001d5453*/
    *(_WORD *)(v80 + 624) = 0; /*0x1001d545b*/
    *v79 = v82; /*0x1001d5466*/
    v79[1] = v81 + 1; /*0x1001d5469*/
    if ( v43 != v81 ) /*0x1001d5474*/
      core::panicking::panic::h286e2dd5eab048be((__int64)&unk_10125C6AB, 48, (__int64)&off_101526598); /*0x1001d584f*/
    *(_WORD *)(v82 + 626) = 1; /*0x1001d547a*/
    *(_QWORD *)(v82 + 360) = v114; /*0x1001d5491*/
    *(_QWORD *)(v82 + 368) = v77; /*0x1001d5498*/
    *(_QWORD *)(v82 + 376) = v78; /*0x1001d54a6*/
    *(_QWORD *)v82 = v129; /*0x1001d54b8*/
    *(_QWORD *)(v82 + 8) = v130; /*0x1001d54bb*/
    *(_QWORD *)(v82 + 16) = v131; /*0x1001d54c3*/
    *(_QWORD *)(v82 + 24) = v132; /*0x1001d54cb*/
    *(_QWORD *)(v82 + 640) = v24; /*0x1001d54cf*/
    *(_QWORD *)(v24 + 352) = v82; /*0x1001d54d6*/
    *(_WORD *)(v24 + 624) = 1; /*0x1001d54dd*/
    *a1 = v101; /*0x1001d54f5*/
    a1[1] = v103; /*0x1001d54ff*/
    a1[2] = v139; /*0x1001d5503*/
    return a1; /*0x1001d54e7*/
  }
}