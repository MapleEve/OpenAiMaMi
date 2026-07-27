// __ZN13codexmate_lib4core3mcp16insert_mcp_block @ 0x1008438d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::mcp::insert_mcp_block::hb6a75642a4639e3d(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // r13
  unsigned __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  const void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // r15
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rcx
  unsigned __int128 v27; // rax
  _QWORD *v28; // r14
  __int64 v29; // r15
  _QWORD *v30; // r12
  __int64 v31; // rsi
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  unsigned __int64 v34; // r15
  _QWORD *v35; // r14
  __int64 v36; // rsi
  __int64 result; // rax
  __int64 v38; // [rsp+0h] [rbp-A0h]
  __int64 v39; // [rsp+8h] [rbp-98h]
  __int64 v41; // [rsp+18h] [rbp-88h] BYREF
  __int64 v42; // [rsp+20h] [rbp-80h]
  _QWORD *v43; // [rsp+28h] [rbp-78h]
  unsigned __int64 v44; // [rsp+30h] [rbp-70h]
  unsigned __int64 v45; // [rsp+38h] [rbp-68h]
  __int64 v46; // [rsp+40h] [rbp-60h]
  __int64 v47; // [rsp+48h] [rbp-58h]
  __int64 v48; // [rsp+50h] [rbp-50h]
  __int64 v49; // [rsp+58h] [rbp-48h]
  __int64 *v50; // [rsp+60h] [rbp-40h]
  unsigned __int64 v51; // [rsp+68h] [rbp-38h]
  _QWORD *v52; // [rsp+70h] [rbp-30h]

  v50 = a3; /*0x1008438e1*/
  v3 = a2; /*0x1008438e5*/
  v4 = a2[2]; /*0x1008438ef*/
  if ( v4 ) /*0x1008438f6*/
  {
    v52 = a2; /*0x1008438fc*/
    v5 = a2[1]; /*0x100843900*/
    v51 = v4; /*0x100843904*/
    v6 = 24 * v4; /*0x100843910*/
    v7 = 0; /*0x100843914*/
    v8 = 0; /*0x10084391d*/
    while ( 1 ) /*0x100843946*/
    {
      v9 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x100843946*/
                           *(_QWORD *)(v5 + v7 + 8),
                           *(_QWORD *)(v5 + v7 + 16));
      if ( v11 == 55 /*0x10084395c*/
        && !memcmp(
              v9,
              "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
              0x37u) )
      {
        break; /*0x10084395c*/
      }
      ++v8; /*0x100843930*/
      v7 += 24; /*0x100843933*/
      if ( v6 == v7 ) /*0x10084393a*/
      {
        v8 = v51; /*0x100843973*/
        v3 = v52; /*0x10084397a*/
        goto LABEL_9; /*0x10084397a*/
      }
    }
    v3 = v52; /*0x100843968*/
    if ( !v8 ) /*0x10084396c*/
      goto LABEL_17; /*0x10084396c*/
LABEL_9:
    v12 = 24 * v8; /*0x100843984*/
    v51 = -(__int64)v8; /*0x100843996*/
    while ( 1 ) /*0x1008439b8*/
    {
      v13 = v3; /*0x1008439b8*/
      v14 = v3[2]; /*0x1008439bb*/
      v15 = v8 - 1; /*0x1008439bf*/
      if ( v8 - 1 >= v14 ) /*0x1008439c7*/
        break; /*0x1008439c7*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1008439db*/
        *(_QWORD *)(v13[1] + v12 - 16),
        *(_QWORD *)(v13[1] + v12 - 8));
      if ( v16 ) /*0x1008439e3*/
      {
        v14 = v13[2]; /*0x100843a70*/
        break; /*0x100843a70*/
      }
      v17 = v13[2]; /*0x1008439e9*/
      if ( v15 >= v17 ) /*0x1008439f0*/
        goto LABEL_45; /*0x1008439f0*/
      v18 = (_QWORD *)(v13[1] + v12); /*0x1008439fa*/
      v38 = *(v18 - 3); /*0x100843a08*/
      v39 = *(v18 - 2); /*0x100843a14*/
      memmove(v18 - 3, v18, 24 * (v17 + v51)); /*0x100843a2a*/
      v13[2] = --v17; /*0x100843a39*/
      if ( v38 ) /*0x100843a40*/
      {
        if ( __OFSUB__(-v38, 1) ) /*0x100843a4c*/
LABEL_45:
          alloc::vec::Vec$LT$T$C$A$GT$::remove::assert_failed::h08ec7ef24832c20e(v8 - 1, v17, &off_10196C6A8, v10); /*0x100843cb1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x100843a5e*/
      }
      v12 -= 24; /*0x1008439a0*/
      ++v51; /*0x1008439a4*/
      --v8; /*0x1008439a8*/
      v3 = v52; /*0x1008439ae*/
      if ( !v15 ) /*0x1008439b2*/
        goto LABEL_17; /*0x1008439b2*/
    }
    if ( v14 < v8 ) /*0x100843a77*/
      alloc::vec::Vec$LT$T$C$A$GT$::insert_mut::assert_failed::h5a99f51db44041ca(v8, v14, &off_10196C690, v10); /*0x100843caa*/
    if ( v14 == *v52 ) /*0x100843a84*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v52); /*0x100843a89*/
    v21 = v52[1]; /*0x100843a8e*/
    if ( v14 > v8 ) /*0x100843a98*/
      memmove((void *)(v21 + v12 + 24), (const void *)(v21 + v12), 24 * (v14 - v8)); /*0x100843aab*/
    *(_QWORD *)(v21 + v12) = 0; /*0x100843ab0*/
    *(_QWORD *)(v21 + v12 + 8) = 1; /*0x100843ab8*/
    *(_QWORD *)(v21 + v12 + 16) = 0; /*0x100843ac1*/
    v19 = v14 + 1; /*0x100843aca*/
    v52[2] = v14 + 1; /*0x100843ad2*/
    v20 = v8 + 1; /*0x100843ad6*/
    if ( v14 < v8 ) /*0x100843ade*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v20, v19, &anon_3ce6d1417794db0febde534c64082f90_449); /*0x100843c96*/
    v3 = v52; /*0x100843ae4*/
  }
  else
  {
LABEL_17:
    v19 = v3[2]; /*0x100843a68*/
    v20 = 0; /*0x100843a6c*/
  }
  v22 = *v50; /*0x100843aec*/
  v23 = v50[1]; /*0x100843aef*/
  v24 = v50[2]; /*0x100843af3*/
  v3[2] = v20; /*0x100843af7*/
  v41 = v3[1] + 24 * v20; /*0x100843b12*/
  v42 = v41; /*0x100843b19*/
  v43 = v3; /*0x100843b1d*/
  v44 = v20; /*0x100843b21*/
  v45 = v19 - v20; /*0x100843b25*/
  v46 = v23; /*0x100843b2d*/
  v47 = v23; /*0x100843b31*/
  v48 = v22; /*0x100843b35*/
  v49 = v23 + 24 * v24; /*0x100843b39*/
  _$LT$alloc..vec..splice..Splice$LT$I$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd30ceb9bdc527492(&v41); /*0x100843b44*/
  v25 = v41; /*0x100843b49*/
  v26 = v42; /*0x100843b50*/
  v27 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v42 - v41); /*0x100843b64*/
  v41 = 8; /*0x100843b67*/
  v42 = 8; /*0x100843b72*/
  v28 = v43; /*0x100843b7a*/
  if ( v26 != v25 ) /*0x100843b81*/
  {
    v29 = *((_QWORD *)&v27 + 1) >> 4; /*0x100843b86*/
    v30 = (_QWORD *)(v25 + 8); /*0x100843b8a*/
    do /*0x100843b97*/
    {
      v31 = *(v30 - 1); /*0x100843b99*/
      if ( v31 ) /*0x100843ba1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v30, v31, 1); /*0x100843bac*/
      v30 += 3; /*0x100843b90*/
      --v29; /*0x100843b94*/
    }
    while ( v29 ); /*0x100843b97*/
  }
  v32 = v45; /*0x100843bb3*/
  if ( v45 ) /*0x100843bba*/
  {
    v33 = v28[2]; /*0x100843bbc*/
    if ( v44 != v33 ) /*0x100843bc7*/
      memmove((void *)(v28[1] + 24 * v33), (const void *)(v28[1] + 24 * v44), 24 * v45); /*0x100843be9*/
    v28[2] = v32 + v33; /*0x100843bf1*/
  }
  if ( v49 != v47 ) /*0x100843c09*/
  {
    v34 = (v49 - v47) / 0x18uLL; /*0x100843c0e*/
    v35 = (_QWORD *)(v47 + 8); /*0x100843c12*/
    do /*0x100843c27*/
    {
      v36 = *(v35 - 1); /*0x100843c29*/
      if ( v36 ) /*0x100843c30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v35, v36, 1); /*0x100843c3a*/
      v35 += 3; /*0x100843c20*/
      --v34; /*0x100843c24*/
    }
    while ( v34 ); /*0x100843c27*/
  }
  if ( v48 ) /*0x100843c48*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24 * v48, 8); /*0x100843c5b*/
  a1[2] = v3[2]; /*0x100843c6b*/
  result = *v3; /*0x100843c6f*/
  a1[1] = v3[1]; /*0x100843c77*/
  *a1 = result; /*0x100843c7b*/
  return result; /*0x100843c7e*/
}