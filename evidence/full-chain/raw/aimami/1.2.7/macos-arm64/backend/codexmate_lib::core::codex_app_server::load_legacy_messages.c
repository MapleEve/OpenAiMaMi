// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::codex_app_server::load_legacy_messages::h5b2ad68829c3dc86; addr: 0x100af1dd0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:18Z
_QWORD *__fastcall codexmate_lib::core::codex_app_server::load_legacy_messages::h5b2ad68829c3dc86(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  _BOOL8 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rdi
  unsigned __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rax
  _BYTE v44[104]; // [rsp+8h] [rbp-468h] BYREF
  _QWORD __dst[31]; // [rsp+70h] [rbp-400h] BYREF
  __int64 v46; // [rsp+168h] [rbp-308h] BYREF
  _BYTE v47[96]; // [rsp+170h] [rbp-300h] BYREF
  __int64 v48; // [rsp+1D0h] [rbp-2A0h]
  __int64 v49; // [rsp+1D8h] [rbp-298h]
  __int64 v50; // [rsp+1E0h] [rbp-290h]
  __int64 v51; // [rsp+1E8h] [rbp-288h] BYREF
  _QWORD v52[12]; // [rsp+1F0h] [rbp-280h] BYREF
  _QWORD __src[31]; // [rsp+250h] [rbp-220h] BYREF
  _QWORD v54[4]; // [rsp+348h] [rbp-128h] BYREF
  _QWORD v55[12]; // [rsp+368h] [rbp-108h] BYREF
  __int64 v56; // [rsp+3C8h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+3D0h] [rbp-A0h]
  __int64 v58; // [rsp+3D8h] [rbp-98h]
  __int64 v59; // [rsp+3E0h] [rbp-90h]
  __int64 v60; // [rsp+3E8h] [rbp-88h]
  unsigned __int64 v61; // [rsp+3F0h] [rbp-80h]
  _QWORD *v62; // [rsp+3F8h] [rbp-78h]
  __int64 v63; // [rsp+400h] [rbp-70h]
  __int64 v64; // [rsp+408h] [rbp-68h] BYREF
  __int64 v65; // [rsp+410h] [rbp-60h]
  __int64 v66; // [rsp+418h] [rbp-58h]
  unsigned __int64 v67; // [rsp+420h] [rbp-50h]
  unsigned __int64 v68; // [rsp+428h] [rbp-48h]
  _BOOL8 v69; // [rsp+430h] [rbp-40h]
  unsigned __int64 v70; // [rsp+438h] [rbp-38h]
  __int64 v71; // [rsp+440h] [rbp-30h]

  v70 = a5; /*0x100af1de4*/
  v7 = a1; /*0x100af1dee*/
  codexmate_lib::core::codex_app_server::AppServerClient::connect::h7c1c93bed08b3597(&v51); /*0x100af1df8*/
  qmemcpy(v44, v52, 0x60u); /*0x100af1e17*/
  if ( v51 == 3 ) /*0x100af1e1e*/
  {
    qmemcpy(a1, v44, 0x60u); /*0x100af1e2f*/
    return v7; /*0x100af1e2f*/
  }
  v50 = __src[2]; /*0x100af1e3e*/
  v49 = __src[1]; /*0x100af1e53*/
  v48 = __src[0]; /*0x100af1e5a*/
  qmemcpy(v47, v44, sizeof(v47)); /*0x100af1e74*/
  v46 = v51; /*0x100af1e77*/
  codexmate_lib::core::codex_app_server::read_thread_with_client::h0e29c2bbc893fe69(&v51, &v46, a3, a4, 1); /*0x100af1e98*/
  qmemcpy(v55, v52, sizeof(v55)); /*0x100af1eb7*/
  if ( v51 == 2 ) /*0x100af1ebe*/
  {
    qmemcpy(a1, v55, 0x60u); /*0x100af1ecf*/
    goto LABEL_62; /*0x100af1ecf*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100af1eea*/
  qmemcpy(&v44[8], v55, 0x60u); /*0x100af1f02*/
  *(_QWORD *)v44 = v51; /*0x100af1f05*/
  v9 = *(_QWORD *)&v44[96]; /*0x100af1f0c*/
  v10 = __dst[0]; /*0x100af1f13*/
  v11 = -1; /*0x100af1f21*/
  if ( v70 != -1 ) /*0x100af1f28*/
    v11 = v70 + 1; /*0x100af1f28*/
  v12 = 512; /*0x100af1f33*/
  v61 = v11; /*0x100af1f39*/
  if ( v11 < 0x200 ) /*0x100af1f3d*/
    v12 = v11; /*0x100af1f3d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &v56, v8); /*0x100af1f47*/
  v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((unsigned int)((_DWORD)v12 << 6), 8); /*0x100af1f54*/
  if ( !v13 ) /*0x100af1f5c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, (unsigned int)((_DWORD)v12 << 6)); /*0x100af2453*/
  v67 = 0; /*0x100af1f62*/
  v66 = 0; /*0x100af1f6a*/
  v64 = v12; /*0x100af1f72*/
  v65 = v13; /*0x100af1f76*/
  if ( !v10 ) /*0x100af1f7d*/
  {
    v17 = 0; /*0x100af2365*/
    goto LABEL_61; /*0x100af2367*/
  }
  v71 = v13; /*0x100af1f83*/
  v68 = v12; /*0x100af1f87*/
  v62 = a1; /*0x100af1f8b*/
  v14 = 0; /*0x100af1f96*/
  v15 = v9 + 32 * v10; /*0x100af1f99*/
  v16 = 0; /*0x100af1f9c*/
  v17 = 0; /*0x100af1f9f*/
  do /*0x100af22ce*/
  {
    while ( 1 ) /*0x100af1fbf*/
    {
      v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("startedAt", 9, v9); /*0x100af1fbf*/
      if ( v18 && *(_BYTE *)v18 == 2 ) /*0x100af1fcc*/
      {
        v19 = *(_QWORD *)(v18 + 8); /*0x100af1fce*/
        if ( !v19 ) /*0x100af1fd5*/
        {
          v59 = *(_QWORD *)(v18 + 16); /*0x100af1ffe*/
          v20 = v59 >= 0; /*0x100af2008*/
          goto LABEL_19; /*0x100af2008*/
        }
        if ( (_DWORD)v19 == 1 ) /*0x100af1fda*/
        {
          v59 = *(_QWORD *)(v18 + 16); /*0x100af1fe0*/
          v20 = 1; /*0x100af1fe7*/
LABEL_19:
          v69 = v20; /*0x100af200c*/
          goto LABEL_20; /*0x100af200c*/
        }
      }
      v69 = 0; /*0x100af1ff0*/
LABEL_20:
      v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100af201f*/
              &anon_0f4958e580c48b75b8f6e2e6da3e4224_219,
              5,
              v9);
      if ( v21 ) /*0x100af2027*/
      {
        if ( *(_BYTE *)v21 == 4 ) /*0x100af202c*/
          break; /*0x100af202c*/
      }
      v9 += 32; /*0x100af202e*/
      if ( v9 == v15 ) /*0x100af2035*/
        goto LABEL_48; /*0x100af2035*/
    }
    v58 = v15; /*0x100af2040*/
    v22 = *(_QWORD *)(v21 + 24); /*0x100af2047*/
    if ( v22 ) /*0x100af204e*/
    {
      v23 = *(_QWORD *)(v21 + 16); /*0x100af2054*/
      v60 = v23 + 32 * v22; /*0x100af205f*/
      do /*0x100af22ba*/
      {
        while ( 1 ) /*0x100af2091*/
        {
          while ( 1 ) /*0x100af2085*/
          {
            codexmate_lib::core::codex_app_server::display_message_from_item::h69fe05ebbf57f5ae(&v51, v23, v69, v59); /*0x100af2085*/
            if ( (_DWORD)v51 != 2 ) /*0x100af2091*/
              break; /*0x100af2091*/
            v23 += 32; /*0x100af2093*/
            if ( v23 == v60 ) /*0x100af209e*/
              goto LABEL_47; /*0x100af209e*/
          }
          v55[7] = v52[6]; /*0x100af20ac*/
          v55[6] = v52[5]; /*0x100af20ba*/
          v55[5] = v52[4]; /*0x100af20c8*/
          v55[4] = v52[3]; /*0x100af20d6*/
          v55[3] = v52[2]; /*0x100af20e4*/
          v55[2] = v52[1]; /*0x100af20f2*/
          v55[1] = v52[0]; /*0x100af2107*/
          v55[0] = v51; /*0x100af210e*/
          v24 = v17 + 1; /*0x100af2115*/
          if ( !v24 ) /*0x100af211f*/
            v24 = -1; /*0x100af211f*/
          v25 = v68; /*0x100af2123*/
          if ( v16 == v68 ) /*0x100af212a*/
          {
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::grow::hf4075c5bcccd77d9(&v64); /*0x100af2130*/
            v16 = v67; /*0x100af2135*/
            v25 = v64; /*0x100af2139*/
            v71 = v65; /*0x100af2141*/
            v14 = v66; /*0x100af2145*/
          }
          v63 = v24; /*0x100af2149*/
          v26 = v16++; /*0x100af214d*/
          v27 = 0; /*0x100af215a*/
          v68 = v25; /*0x100af215f*/
          if ( v14 + v26 >= v25 ) /*0x100af2163*/
            v27 = v25; /*0x100af2163*/
          v67 = v16; /*0x100af2167*/
          v28 = (v14 + v26 - v27) << 6; /*0x100af216e*/
          v29 = v71; /*0x100af2179*/
          *(_QWORD *)(v71 + v28 + 56) = v55[7]; /*0x100af217d*/
          *(_QWORD *)(v29 + v28 + 48) = v55[6]; /*0x100af2189*/
          *(_QWORD *)(v29 + v28 + 40) = v55[5]; /*0x100af2195*/
          *(_QWORD *)(v29 + v28 + 32) = v55[4]; /*0x100af21a1*/
          *(_QWORD *)(v29 + v28 + 24) = v55[3]; /*0x100af21ad*/
          *(_QWORD *)(v29 + v28 + 16) = v55[2]; /*0x100af21b9*/
          v30 = v55[0]; /*0x100af21be*/
          *(_QWORD *)(v29 + v28 + 8) = v55[1]; /*0x100af21cc*/
          *(_QWORD *)(v29 + v28) = v30; /*0x100af21d1*/
          if ( v16 > v61 ) /*0x100af21d9*/
            break; /*0x100af21d9*/
          v23 += 32; /*0x100af21db*/
          v17 = v63; /*0x100af21e6*/
          if ( v23 == v60 ) /*0x100af21ea*/
            goto LABEL_47; /*0x100af21ea*/
        }
        do /*0x100af2210*/
        {
          v16 = v26; /*0x100af2216*/
          v31 = 0; /*0x100af2224*/
          if ( v14 + 1 >= v68 ) /*0x100af2229*/
            v31 = v68; /*0x100af2229*/
          v32 = v14 << 6; /*0x100af2230*/
          if ( *(_QWORD *)(v71 + (v14 << 6)) != 2 ) /*0x100af223d*/
          {
            v33 = *(_QWORD *)(v71 + v32 + 16); /*0x100af2243*/
            v34 = *(_QWORD *)(v71 + v32 + 40); /*0x100af2248*/
            v35 = *(_QWORD *)(v71 + v32 + 48); /*0x100af224d*/
            if ( v33 ) /*0x100af2255*/
            {
              v57 = *(_QWORD *)(v71 + v32 + 48); /*0x100af2257*/
              v36 = *(_QWORD *)(v71 + v32 + 24); /*0x100af225e*/
              v56 = v34; /*0x100af2268*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v33, 1); /*0x100af226f*/
              v35 = v57; /*0x100af2274*/
              v34 = v56; /*0x100af227b*/
            }
            if ( v34 ) /*0x100af2285*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v34, 1); /*0x100af2293*/
          }
          v14 = v14 - v31 + 1; /*0x100af2203*/
          v26 = v16 - 1; /*0x100af2208*/
        }
        while ( v16 > v61 ); /*0x100af2210*/
        v66 = v14; /*0x100af229d*/
        v67 = v16; /*0x100af22a4*/
        v23 += 32; /*0x100af22ab*/
        v17 = v63; /*0x100af22b6*/
      }
      while ( v23 != v60 ); /*0x100af22ba*/
    }
LABEL_47:
    v9 += 32; /*0x100af22c0*/
    v15 = v58; /*0x100af22c4*/
  }
  while ( v9 != v58 ); /*0x100af22ce*/
LABEL_48:
  if ( v16 <= v70 ) /*0x100af22d8*/
  {
    v7 = v62; /*0x100af2369*/
  }
  else
  {
    v63 = v17; /*0x100af22de*/
    do /*0x100af22ff*/
    {
      v37 = v68; /*0x100af2305*/
      if ( v14 + 1 < v68 ) /*0x100af2311*/
        v37 = 0; /*0x100af2311*/
      v38 = v14 << 6; /*0x100af2318*/
      if ( *(_QWORD *)(v71 + (v14 << 6)) != 2 ) /*0x100af2325*/
      {
        v39 = *(_QWORD *)(v71 + v38 + 16); /*0x100af232b*/
        v40 = *(_QWORD *)(v71 + v38 + 40); /*0x100af2330*/
        v41 = *(_QWORD *)(v71 + v38 + 48); /*0x100af2335*/
        if ( v39 ) /*0x100af233d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v71 + v38 + 24), v39, 1); /*0x100af2349*/
        if ( v40 ) /*0x100af2351*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x100af235e*/
      }
      v14 = v14 - v37 + 1; /*0x100af22f3*/
      --v16; /*0x100af22f8*/
    }
    while ( v16 > v70 ); /*0x100af22ff*/
    v66 = v14; /*0x100af236f*/
    v67 = v70; /*0x100af2377*/
    v7 = v62; /*0x100af237b*/
    v17 = v63; /*0x100af237f*/
  }
LABEL_61:
  v54[3] = v67; /*0x100af2383*/
  v54[2] = v66; /*0x100af2392*/
  v54[1] = v65; /*0x100af23a1*/
  v54[0] = v64; /*0x100af23a8*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hea9e636447c50ff9( /*0x100af23bd*/
    &v52[1],
    v54);
  v51 = 1; /*0x100af23c6*/
  v52[0] = v17; /*0x100af23d1*/
  LOBYTE(v52[4]) = v17 > v70; /*0x100af23d8*/
  v7[6] = v52[4]; /*0x100af23e6*/
  v7[5] = v52[3]; /*0x100af23f1*/
  v42 = v52[1]; /*0x100af23f5*/
  v7[4] = v52[2]; /*0x100af2403*/
  v7[3] = v42; /*0x100af2407*/
  v7[2] = v17; /*0x100af240b*/
  v7[1] = 1; /*0x100af240f*/
  *v7 = 11; /*0x100af2417*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..codex_app_server..AppServerThread$GT$::hde11cea96fee9be1(v44); /*0x100af2425*/
LABEL_62:
  core::ptr::drop_in_place$LT$codexmate_lib..core..codex_app_server..AppServerClient$GT$::h82ca92cb16e6ce22(&v46); /*0x100af242a*/
  return v7; /*0x100af2439*/
}