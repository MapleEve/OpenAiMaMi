// __ZN13codexmate_lib4core5relay19codex_project_state12merge_unique @ 0x100ac7ff0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::merge_unique::hee4c6895b19273d5(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  char *v4; // r13
  char *v5; // rsi
  __int64 v6; // rcx
  char *v7; // r14
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  char *v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  _QWORD *v14; // r13
  __int64 v15; // rsi
  char *v16; // rcx
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // r14
  __int64 v23; // rsi
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // rsi
  _QWORD v30[2]; // [rsp+8h] [rbp-128h] BYREF
  __int64 v31; // [rsp+18h] [rbp-118h]
  __int64 v32; // [rsp+20h] [rbp-110h]
  __int64 v33; // [rsp+28h] [rbp-108h]
  _QWORD *v34; // [rsp+30h] [rbp-100h]
  __int64 v35; // [rsp+38h] [rbp-F8h]
  char *v36; // [rsp+40h] [rbp-F0h]
  __int64 v37; // [rsp+48h] [rbp-E8h] BYREF
  char *v38; // [rsp+50h] [rbp-E0h]
  __int64 v39; // [rsp+58h] [rbp-D8h]
  _QWORD *v40; // [rsp+60h] [rbp-D0h] BYREF
  char *v41; // [rsp+68h] [rbp-C8h]
  __int64 v42; // [rsp+70h] [rbp-C0h]
  char *v43; // [rsp+78h] [rbp-B8h]
  _QWORD *v44; // [rsp+80h] [rbp-B0h]
  char *v45; // [rsp+88h] [rbp-A8h]
  __int64 v46; // [rsp+90h] [rbp-A0h]
  char *v47; // [rsp+98h] [rbp-98h]
  __int64 v48; // [rsp+A0h] [rbp-90h]
  __int64 v49; // [rsp+A8h] [rbp-88h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-80h]
  __int64 v51; // [rsp+B8h] [rbp-78h]
  __int64 v52; // [rsp+C0h] [rbp-70h]
  char *v53; // [rsp+C8h] [rbp-68h]
  char *v54; // [rsp+D0h] [rbp-60h]
  __int64 v55; // [rsp+D8h] [rbp-58h]
  __int64 v56; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-48h]
  __int64 v58; // [rsp+F0h] [rbp-40h]
  char *v59; // [rsp+F8h] [rbp-38h]
  __int64 v60; // [rsp+100h] [rbp-30h]

  v34 = a1; /*0x100ac8004*/
  v37 = 0; /*0x100ac800b*/
  v39 = 0; /*0x100ac8016*/
  v56 = 0; /*0x100ac8021*/
  v57 = 8; /*0x100ac8029*/
  v58 = 0; /*0x100ac8031*/
  v3 = *a2; /*0x100ac8039*/
  v4 = (char *)a2[1]; /*0x100ac803c*/
  v5 = &v4[24 * a2[2]]; /*0x100ac8048*/
  v6 = *a3; /*0x100ac804d*/
  v7 = (char *)a3[1]; /*0x100ac8050*/
  v8 = &v7[24 * a3[2]]; /*0x100ac805c*/
  v40 = v4; /*0x100ac8060*/
  v41 = v4; /*0x100ac8067*/
  v42 = v3; /*0x100ac806e*/
  v54 = v5; /*0x100ac8075*/
  v43 = v5; /*0x100ac8079*/
  v44 = v7; /*0x100ac8080*/
  v45 = v7; /*0x100ac8087*/
  v35 = v6; /*0x100ac808e*/
  v46 = v6; /*0x100ac8095*/
  v53 = v8; /*0x100ac809c*/
  v47 = v8; /*0x100ac80a0*/
  v32 = v3; /*0x100ac80a7*/
  v33 = 24 * v3; /*0x100ac80ba*/
  v36 = v7; /*0x100ac80c1*/
  v59 = v4; /*0x100ac80c8*/
  while ( 1 ) /*0x100ac810b*/
  {
    if ( !v59 ) /*0x100ac8110*/
    {
      v11 = v4; /*0x100ac81f0*/
      if ( v7 == v53 ) /*0x100ac81f7*/
        goto LABEL_33; /*0x100ac81f7*/
      goto LABEL_17; /*0x100ac81f7*/
    }
    v11 = v54; /*0x100ac811a*/
    if ( v4 == v54 ) /*0x100ac8120*/
      break; /*0x100ac8120*/
    v11 = v4 + 24; /*0x100ac8126*/
    v41 = v4 + 24; /*0x100ac812a*/
    v12 = *(_QWORD *)v4; /*0x100ac8131*/
    if ( *(_QWORD *)v4 == 0x8000000000000000LL ) /*0x100ac8142*/
    {
      if ( v54 != v11 ) /*0x100ac8162*/
      {
        v13 = (v54 - v11) / 0x18uLL; /*0x100ac8167*/
        v14 = v4 + 32; /*0x100ac816b*/
        do /*0x100ac8187*/
        {
          v15 = *(v14 - 1); /*0x100ac8189*/
          if ( v15 ) /*0x100ac8190*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v14, v15, 1); /*0x100ac819b*/
          v14 += 3; /*0x100ac8180*/
          --v13; /*0x100ac8184*/
        }
        while ( v13 ); /*0x100ac8187*/
      }
      break; /*0x100ac8187*/
    }
    v17 = v4; /*0x100ac8231*/
    v4 += 24; /*0x100ac8234*/
LABEL_20:
    v18 = *((_QWORD *)v17 + 2); /*0x100ac8237*/
    v52 = *((_QWORD *)v17 + 1); /*0x100ac8246*/
    codexmate_lib::core::relay::codex_project_state::normalize_codex_path::h7ca6a8890dbadb8e(&v49, v52, v18); /*0x100ac824a*/
    v19 = v51; /*0x100ac824f*/
    if ( v51 /*0x100ac827f*/
      && (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v30, &v49),
          !(unsigned __int8)alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(
                              &v37,
                              v30)) )
    {
      v60 = v49; /*0x100ac82b7*/
      v55 = v50; /*0x100ac82bf*/
      v20 = v58; /*0x100ac82c3*/
      if ( v58 == v56 ) /*0x100ac82cb*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v56); /*0x100ac82d5*/
      v9 = v57; /*0x100ac80d0*/
      v10 = 3 * v20; /*0x100ac80d4*/
      *(_QWORD *)(v57 + 8 * v10) = v60; /*0x100ac80dc*/
      *(_QWORD *)(v9 + 8 * v10 + 8) = v55; /*0x100ac80e4*/
      *(_QWORD *)(v9 + 8 * v10 + 16) = v19; /*0x100ac80e9*/
      v58 = v20 + 1; /*0x100ac80f1*/
      if ( v12 ) /*0x100ac80f8*/
LABEL_3:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v12, 1); /*0x100ac80fa*/
    }
    else
    {
      if ( v49 ) /*0x100ac828b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x100ac8296*/
      if ( v12 ) /*0x100ac829e*/
        goto LABEL_3; /*0x100ac829e*/
    }
  }
  if ( v32 ) /*0x100ac81b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v33, 8); /*0x100ac81ca*/
  v40 = nullptr; /*0x100ac81cf*/
  if ( v7 == v53 ) /*0x100ac81de*/
    goto LABEL_33; /*0x100ac81de*/
LABEL_17:
  v16 = v7 + 24; /*0x100ac81fd*/
  v45 = v7 + 24; /*0x100ac8201*/
  v12 = *(_QWORD *)v7; /*0x100ac8208*/
  if ( *(_QWORD *)v7 != 0x8000000000000000LL ) /*0x100ac8218*/
  {
    v17 = v7; /*0x100ac821e*/
    v7 += 24; /*0x100ac8221*/
    v4 = v11; /*0x100ac8224*/
    v59 = nullptr; /*0x100ac8227*/
    goto LABEL_20; /*0x100ac822f*/
  }
  if ( v53 != v16 ) /*0x100ac82f9*/
  {
    v21 = (v53 - v16) / 0x18uLL; /*0x100ac82fe*/
    v22 = v7 + 32; /*0x100ac8302*/
    do /*0x100ac8317*/
    {
      v23 = *(v22 - 1); /*0x100ac8319*/
      if ( v23 ) /*0x100ac8320*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x100ac832a*/
      v22 += 3; /*0x100ac8310*/
      --v21; /*0x100ac8314*/
    }
    while ( v21 ); /*0x100ac8317*/
  }
LABEL_33:
  if ( v35 ) /*0x100ac833b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24 * v35, 8); /*0x100ac8351*/
  v24 = v34; /*0x100ac835a*/
  v34[2] = v58; /*0x100ac8361*/
  v25 = v56; /*0x100ac8365*/
  v24[1] = v57; /*0x100ac836d*/
  *v24 = v25; /*0x100ac8371*/
  if ( v37 ) /*0x100ac837e*/
  {
    v26 = v39; /*0x100ac8387*/
    v41 = nullptr; /*0x100ac838e*/
    v42 = v37; /*0x100ac8399*/
    v43 = v38; /*0x100ac83a0*/
    v45 = nullptr; /*0x100ac83a7*/
    v46 = v37; /*0x100ac83b2*/
    v47 = v38; /*0x100ac83b9*/
    v27 = 1; /*0x100ac83c0*/
  }
  else
  {
    v27 = 0; /*0x100ac83c7*/
    v26 = 0; /*0x100ac83c9*/
  }
  v40 = (_QWORD *)v27; /*0x100ac83cb*/
  v44 = (_QWORD *)v27; /*0x100ac83d2*/
  v48 = v26; /*0x100ac83d9*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(v30, &v40); /*0x100ac83ee*/
  for ( result = v30[0]; v30[0]; result = v30[0] ) /*0x100ac83fd*/
  {
    v29 = *(_QWORD *)(result + 24 * v31 + 8); /*0x100ac8432*/
    if ( v29 ) /*0x100ac843a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(result + 24 * v31 + 16), v29, 1); /*0x100ac844a*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(v30, &v40); /*0x100ac8416*/
  }
  return result; /*0x100ac8451*/
}