// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND sanitize_body_for_official_upstream node 0x1005b47f0 depth=0
void __fastcall codexmate_lib::core::relay::proxy_server::sanitize_body_for_official_upstream::hf9b296ff33d32dc5(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rax
  unsigned __int16 **v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 **v9; // rdx
  __int64 v10; // rdx
  size_t v11; // r15
  __int64 v12; // r13
  void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int16 *v16; // rcx
  unsigned __int16 *v17; // rax
  __int64 v18; // rdx
  unsigned __int16 *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // r13
  unsigned __int16 *v22; // r15
  size_t v23; // rdx
  size_t v24; // r12
  __int64 v25; // r12
  int v26; // eax
  char v27; // cl
  const void *v28; // r12
  __int64 v29; // rbx
  void *v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int8 **v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // [rsp+0h] [rbp-140h]
  void *v41; // [rsp+8h] [rbp-138h]
  __int64 v42; // [rsp+10h] [rbp-130h]
  __int64 v43; // [rsp+20h] [rbp-120h] BYREF
  __int64 v44; // [rsp+28h] [rbp-118h]
  __int64 v45; // [rsp+30h] [rbp-110h]
  __int64 v46; // [rsp+38h] [rbp-108h]
  __int64 v47; // [rsp+40h] [rbp-100h] BYREF
  __int64 v48; // [rsp+48h] [rbp-F8h]
  __int64 v49; // [rsp+50h] [rbp-F0h]
  __int64 v50; // [rsp+58h] [rbp-E8h]
  unsigned __int8 *v51; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-D8h]
  void *v53; // [rsp+70h] [rbp-D0h]
  size_t v54; // [rsp+78h] [rbp-C8h]
  _UNKNOWN **v55; // [rsp+80h] [rbp-C0h]
  __int64 v56; // [rsp+88h] [rbp-B8h]
  __int64 v57; // [rsp+90h] [rbp-B0h]
  void *v58; // [rsp+98h] [rbp-A8h]
  unsigned __int8 **v59; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+A8h] [rbp-98h]
  __int64 v61; // [rsp+B0h] [rbp-90h]
  __int64 v62; // [rsp+B8h] [rbp-88h]
  char *v63; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-78h]
  void *__src; // [rsp+D0h] [rbp-70h]
  size_t __n; // [rsp+D8h] [rbp-68h]
  _UNKNOWN **v67; // [rsp+E0h] [rbp-60h]
  __int64 v68; // [rsp+E8h] [rbp-58h]
  __int64 v69; // [rsp+F0h] [rbp-50h]
  __int64 v70; // [rsp+F8h] [rbp-48h]
  __int64 v71; // [rsp+100h] [rbp-40h]
  __int64 v72; // [rsp+108h] [rbp-38h]
  __int64 v73; // [rsp+110h] [rbp-30h]

  v40 = a3; /*0x1005b4804*/
  v41 = a2; /*0x1005b480b*/
  if ( *(_BYTE *)a1 == 5 ) /*0x1005b4815*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b481e*/
    v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1005b482d*/
    if ( !v3 ) /*0x1005b4835*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1005b4e42*/
    v4 = (unsigned __int16 **)(a1 + 8); /*0x1005b483b*/
    *(_BYTE *)(v3 + 4) = 101; /*0x1005b4840*/
    *(_DWORD *)v3 = 1919906931; /*0x1005b4844*/
    v47 = 5; /*0x1005b484a*/
    v48 = v3; /*0x1005b4855*/
    v49 = 5; /*0x1005b485c*/
    LOWORD(v70) = 1; /*0x1005b4867*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v51, a1 + 8, &v47); /*0x1005b487e*/
    if ( __OFSUB__(0, v51) ) /*0x1005b4885*/
    {
      v7 = v52; /*0x1005b4892*/
      v8 = 32 * v54; /*0x1005b48a0*/
      v62 = *(_QWORD *)(v52 + 32 * v54 + 24); /*0x1005b48a9*/
      v61 = *(_QWORD *)(v52 + 32 * v54 + 16); /*0x1005b48b5*/
      v9 = *(unsigned __int8 ***)(v52 + 32 * v54); /*0x1005b48bc*/
      v60 = *(__int64 (__fastcall **)())(v52 + 32 * v54 + 8); /*0x1005b48c5*/
      v59 = v9; /*0x1005b48cc*/
      *(_QWORD *)(v52 + v8 + 24) = v73; /*0x1005b48d7*/
      *(_QWORD *)(v7 + v8 + 16) = v72; /*0x1005b48e0*/
      v10 = v70; /*0x1005b48e5*/
      *(_QWORD *)(v7 + v8 + 8) = v71; /*0x1005b48ed*/
      *(_QWORD *)(v7 + v8) = v10; /*0x1005b48f2*/
      if ( (_BYTE)v59 != 6 ) /*0x1005b48fd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v59); /*0x1005b490a*/
    }
    else
    {
      v69 = v57; /*0x1005b491b*/
      v68 = v56; /*0x1005b4926*/
      v67 = v55; /*0x1005b4931*/
      __n = v54; /*0x1005b493c*/
      __src = v53; /*0x1005b4947*/
      v64 = v52; /*0x1005b4959*/
      v63 = (char *)v51; /*0x1005b495d*/
      v46 = v73; /*0x1005b4965*/
      v45 = v72; /*0x1005b4970*/
      v44 = v71; /*0x1005b497f*/
      v43 = v70; /*0x1005b4986*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b499f*/
        &v59,
        &v63,
        &v43,
        v71,
        v5,
        v6,
        v40,
        a2);
    }
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::ha4a32ae9a99cdf0e( /*0x1005b49b7*/
      &v63,
      a1 + 8,
      &unk_1012CAC09,
      20);
    if ( (_BYTE)v63 != 6 ) /*0x1005b49c0*/
    {
      if ( (_BYTE)v63 == 3 ) /*0x1005b49ca*/
      {
        v11 = __n; /*0x1005b49cc*/
        if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1005b49d3*/
        {
          v12 = 0; /*0x1005b49d5*/
          goto LABEL_11; /*0x1005b49d5*/
        }
        v13 = __src; /*0x1005b49f6*/
        if ( __n ) /*0x1005b49fa*/
        {
          v58 = __src; /*0x1005b49fc*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b4a03*/
          v12 = 1; /*0x1005b4a08*/
          v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1u); /*0x1005b4a16*/
          if ( !v14 ) /*0x1005b4a1e*/
LABEL_11:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x1005b49d8*/
          v15 = v14; /*0x1005b4a20*/
          v13 = v58; /*0x1005b4a23*/
        }
        else
        {
          v15 = 1; /*0x1005b4a2c*/
        }
        memcpy((void *)v15, v13, v11); /*0x1005b4a38*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v63); /*0x1005b4a41*/
        if ( v11 ) /*0x1005b4a49*/
        {
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005b4a5d*/
          {
            v63 = (char *)v15; /*0x1005b4a6a*/
            v64 = v15 + v11; /*0x1005b4a6e*/
            __src = (void *)40; /*0x1005b4a72*/
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0fe35e1dc24b9a0e( /*0x1005b4a88*/
              (unsigned __int64 *)&v51,
              (unsigned __int8 **)&v63);
            v59 = &v51; /*0x1005b4a8d*/
            v60 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005b4a9b*/
            v63 = "codexmate_lib::core::relay::proxy_serverbuild error body failedproxy.upstreamrelay pass-through stream failedbuild streaming body failedactive"; /*0x1005b4aa9*/
            v64 = 40; /*0x1005b4aad*/
            __src = "codexmate_lib::core::relay::proxy_serverbuild error body failedproxy.upstreamrelay pass-through stream failedbuild streaming body failedactive"; /*0x1005b4ab5*/
            __n = 40; /*0x1005b4ab9*/
            v67 = &off_101534030; /*0x1005b4ac8*/
            log::__private_api::log::h08ccde1c7672bffb(&unk_10122B8B0, &v59, 3, &v63); /*0x1005b4ae3*/
            if ( v51 ) /*0x1005b4af5*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005b4b03*/
          }
        }
        if ( v11 ) /*0x1005b4b0b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005b4b18*/
      }
      else
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v63); /*0x1005b49ec*/
      }
    }
    v16 = *v4; /*0x1005b4b24*/
    if ( !*v4 ) /*0x1005b4b24*/
      goto LABEL_39; /*0x1005b4b24*/
    v50 = *(_QWORD *)(a1 + 16); /*0x1005b4b35*/
    while ( 1 ) /*0x1005b4b3c*/
    {
      v17 = v16 + 180; /*0x1005b4b3c*/
      v18 = v16[313]; /*0x1005b4b43*/
      v58 = v16; /*0x1005b4b4a*/
      v19 = v16 - 4; /*0x1005b4b51*/
      v42 = v18; /*0x1005b4b55*/
      v20 = 3LL * (unsigned int)(8 * v18); /*0x1005b4b63*/
      v21 = -1; /*0x1005b4b67*/
      do /*0x1005b4bc4*/
      {
        if ( !v20 ) /*0x1005b4b73*/
        {
          v21 = v42; /*0x1005b4bd0*/
          goto LABEL_35; /*0x1005b4bd0*/
        }
        v22 = v17 + 12; /*0x1005b4b75*/
        v23 = *((_QWORD *)v17 + 2); /*0x1005b4b7d*/
        v24 = v23 - 12; /*0x1005b4b84*/
        if ( v23 >= 0xC ) /*0x1005b4b8d*/
          v23 = 12; /*0x1005b4b8d*/
        v25 = -(__int64)v24; /*0x1005b4b91*/
        v26 = memcmp(&unk_1012CAC1D, *((const void **)v17 + 1), v23); /*0x1005b4b9b*/
        if ( v26 ) /*0x1005b4ba4*/
          v25 = v26; /*0x1005b4ba4*/
        v27 = (v25 > 0) - (v25 < 0); /*0x1005b4bb1*/
        v19 += 16; /*0x1005b4bb3*/
        ++v21; /*0x1005b4bb7*/
        v20 -= 24; /*0x1005b4bba*/
        v17 = v22; /*0x1005b4bbe*/
      }
      while ( v27 == 1 ); /*0x1005b4bc4*/
      if ( !v27 ) /*0x1005b4bcb*/
        break; /*0x1005b4bcb*/
LABEL_35:
      if ( !v50 ) /*0x1005b4be9*/
        goto LABEL_39; /*0x1005b4be9*/
      --v50; /*0x1005b4beb*/
      v16 = *((unsigned __int16 **)v58 + v21 + 79); /*0x1005b4bf2*/
    }
    if ( *((_BYTE *)v19 - 24) != 3 || !*(_QWORD *)v19 ) /*0x1005b4c05*/
    {
LABEL_39:
      v28 = &unk_1012CAC29; /*0x1005b4c0f*/
      if ( v41 ) /*0x1005b4c20*/
        v28 = v41; /*0x1005b4c20*/
      v29 = v40; /*0x1005b4c29*/
      if ( !v41 ) /*0x1005b4c30*/
        v29 = 82; /*0x1005b4c30*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b4c34*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1005b4c43*/
      if ( !v30 ) /*0x1005b4c4b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1005b4e51*/
      qmemcpy(v30, "instructions", 12); /*0x1005b4c5e*/
      v47 = 12; /*0x1005b4c69*/
      v48 = (__int64)v30; /*0x1005b4c74*/
      v49 = 12; /*0x1005b4c7b*/
      if ( v29 < 0 ) /*0x1005b4c89*/
      {
        v31 = 0; /*0x1005b4c8b*/
        goto LABEL_46; /*0x1005b4c8b*/
      }
      if ( v29 ) /*0x1005b4c9b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b4c9d*/
        v31 = 1; /*0x1005b4ca2*/
        v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1u); /*0x1005b4cb0*/
        if ( !v32 ) /*0x1005b4cb8*/
LABEL_46:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v29); /*0x1005b4c8e*/
        v33 = v32; /*0x1005b4cba*/
      }
      else
      {
        v33 = 1; /*0x1005b4cbf*/
      }
      memcpy((void *)v33, v28, v29); /*0x1005b4cce*/
      v71 = v29; /*0x1005b4cd3*/
      v72 = v33; /*0x1005b4cd7*/
      v73 = v29; /*0x1005b4cdb*/
      LOBYTE(v70) = 3; /*0x1005b4cdf*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v51, a1 + 8, &v47); /*0x1005b4cf8*/
      if ( v51 == (unsigned __int8 *)0x8000000000000000LL ) /*0x1005b4d0e*/
      {
        v36 = v52; /*0x1005b4d14*/
        v37 = 32 * v54; /*0x1005b4d22*/
        v62 = *(_QWORD *)(v52 + 32 * v54 + 24); /*0x1005b4d2b*/
        v61 = *(_QWORD *)(v52 + 32 * v54 + 16); /*0x1005b4d37*/
        v38 = *(unsigned __int8 ***)(v52 + 32 * v54); /*0x1005b4d3e*/
        v60 = *(__int64 (__fastcall **)())(v52 + 32 * v54 + 8); /*0x1005b4d47*/
        v59 = v38; /*0x1005b4d4e*/
        *(_QWORD *)(v52 + v37 + 24) = v73; /*0x1005b4d59*/
        *(_QWORD *)(v36 + v37 + 16) = v72; /*0x1005b4d62*/
        v39 = v70; /*0x1005b4d67*/
        *(_QWORD *)(v36 + v37 + 8) = v71; /*0x1005b4d6f*/
        *(_QWORD *)(v36 + v37) = v39; /*0x1005b4d74*/
        if ( (_BYTE)v59 != 6 ) /*0x1005b4d7f*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v59); /*0x1005b4d8c*/
      }
      else
      {
        v69 = v57; /*0x1005b4d9d*/
        v68 = v56; /*0x1005b4da8*/
        v67 = v55; /*0x1005b4db3*/
        __n = v54; /*0x1005b4dbe*/
        __src = v53; /*0x1005b4dc9*/
        v64 = v52; /*0x1005b4ddb*/
        v63 = (char *)v51; /*0x1005b4ddf*/
        v46 = v73; /*0x1005b4de7*/
        v45 = v72; /*0x1005b4df2*/
        v44 = v71; /*0x1005b4e01*/
        v43 = v70; /*0x1005b4e08*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b4e21*/
          &v59,
          &v63,
          &v43,
          v71,
          v34,
          v35,
          v40,
          v41);
      }
    }
  }
}