// __ZN13codexmate_lib8platform7process30list_codex_db_holder_processes @ 0x1003669b0 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::platform::process::list_codex_db_holder_processes::hfeff6cd4dce4f953(
        unsigned __int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  char *v6; // rsi
  char *v7; // r14
  char *v8; // rax
  char *v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r13
  _QWORD *v24; // r14
  __int64 v25; // rsi
  char *v26; // rbx
  unsigned __int64 v27; // rbx
  _QWORD *v28; // r14
  __int64 v29; // rsi
  unsigned __int64 *v30; // rdx
  unsigned __int64 result; // rax
  __int64 v32; // rbx
  char *v33; // [rsp+8h] [rbp-108h] BYREF
  __int64 v34; // [rsp+10h] [rbp-100h]
  __int64 v35; // [rsp+18h] [rbp-F8h]
  __int64 v36; // [rsp+20h] [rbp-F0h]
  __int64 v37; // [rsp+28h] [rbp-E8h]
  __int64 v38; // [rsp+30h] [rbp-E0h]
  char *v39; // [rsp+38h] [rbp-D8h]
  __int64 v40; // [rsp+40h] [rbp-D0h]
  unsigned __int64 *v41; // [rsp+48h] [rbp-C8h]
  char *v42; // [rsp+50h] [rbp-C0h]
  char *v43; // [rsp+58h] [rbp-B8h] BYREF
  char *v44; // [rsp+60h] [rbp-B0h]
  char *v45; // [rsp+68h] [rbp-A8h]
  char *v46; // [rsp+70h] [rbp-A0h]
  __int64 v47; // [rsp+78h] [rbp-98h]
  __int64 v48; // [rsp+80h] [rbp-90h]
  char *v49; // [rsp+88h] [rbp-88h]
  char *v50; // [rsp+90h] [rbp-80h]
  unsigned __int64 v51; // [rsp+98h] [rbp-78h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-70h]
  unsigned __int64 v53; // [rsp+A8h] [rbp-68h]
  __int64 v54; // [rsp+B0h] [rbp-60h]
  __int64 v55; // [rsp+B8h] [rbp-58h]
  __int64 v56; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-48h]
  __int64 v58; // [rsp+D0h] [rbp-40h]
  __int64 v59; // [rsp+D8h] [rbp-38h]
  __int64 v60; // [rsp+E0h] [rbp-30h]

  v41 = a1; /*0x1003669c4*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1003669d2*/
  v2 = (_QWORD *)v1; /*0x1003669d4*/
  if ( *(_BYTE *)(v1 + 16) == 1 ) /*0x1003669db*/
  {
    v3 = *(_QWORD *)v1; /*0x1003669e1*/
    v4 = v2[1]; /*0x1003669e4*/
  }
  else
  {
    v32 = v1; /*0x100366db8*/
    v3 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100366dbb*/
    v2 = (_QWORD *)v32; /*0x100366dc0*/
    *(_QWORD *)v32 = v3; /*0x100366dc3*/
    *(_QWORD *)(v32 + 8) = v4; /*0x100366dc6*/
    *(_BYTE *)(v32 + 16) = 1; /*0x100366dca*/
  }
  *v2 = v3 + 1; /*0x1003669ec*/
  v36 = 0; /*0x1003669f6*/
  v35 = 0; /*0x100366a04*/
  v34 = 0; /*0x100366a12*/
  v33 = (char *)anon_b0ee9adff4519c22b647af231a5a39fa_24; /*0x100366a20*/
  v37 = v3; /*0x100366a27*/
  v38 = v4; /*0x100366a2e*/
  v51 = 0; /*0x100366a35*/
  v52 = 8; /*0x100366a3d*/
  v53 = 0; /*0x100366a45*/
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(&v56); /*0x100366a51*/
  v5 = v57; /*0x100366a56*/
  codexmate_lib::platform::paths::CodexPaths::runtime_state_db_candidates_for_home::h1661ca7d95ec4c4d(&v43, v57, v58); /*0x100366a68*/
  if ( v56 ) /*0x100366a74*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v56, 1); /*0x100366a7e*/
  v6 = v43; /*0x100366a83*/
  v7 = v44; /*0x100366a8a*/
  v8 = v45; /*0x100366a91*/
  v9 = &v44[24 * (_QWORD)v45]; /*0x100366a9c*/
  v43 = v44; /*0x100366aa0*/
  v42 = v6; /*0x100366aae*/
  v45 = v6; /*0x100366ab5*/
  v49 = v9; /*0x100366abc*/
  v46 = v9; /*0x100366ac3*/
  v50 = v44; /*0x100366aca*/
  if ( v8 ) /*0x100366ad1*/
  {
    v10 = v50; /*0x100366ae1*/
    while ( 1 ) /*0x100366b00*/
    {
      v7 = v10 + 24; /*0x100366b00*/
      v44 = v10 + 24; /*0x100366b04*/
      if ( *(_QWORD *)v10 == 0x8000000000000000LL ) /*0x100366b11*/
        break; /*0x100366b11*/
      v55 = *(_QWORD *)v10; /*0x100366b17*/
      v39 = v10 + 24; /*0x100366b1b*/
      v11 = *((_QWORD *)v10 + 2); /*0x100366b26*/
      v48 = *((_QWORD *)v10 + 1); /*0x100366b2e*/
      codexmate_lib::platform::process::list_macos_db_holder_processes_for::he16a4f9451dd764f(&v56, v48, v11); /*0x100366b35*/
      v12 = v56; /*0x100366b3a*/
      v13 = v57; /*0x100366b3e*/
      v14 = v58; /*0x100366b42*/
      v15 = v57 + 32 * v58; /*0x100366b4d*/
      v56 = v57; /*0x100366b50*/
      v40 = v12; /*0x100366b58*/
      v58 = v12; /*0x100366b5f*/
      v59 = v15; /*0x100366b63*/
      v47 = v57; /*0x100366b67*/
      if ( v14 ) /*0x100366b71*/
      {
        v13 = v47 + 32; /*0x100366b7e*/
        while ( 1 ) /*0x100366bdb*/
        {
          v60 = *(_QWORD *)(v13 - 24); /*0x100366bdb*/
          if ( v60 == 0x8000000000000000LL ) /*0x100366be2*/
            break; /*0x100366be2*/
          v19 = *(_DWORD *)(v13 - 32); /*0x100366be4*/
          v54 = *(_QWORD *)(v13 - 16); /*0x100366bec*/
          v20 = *(_QWORD *)(v13 - 8); /*0x100366bf0*/
          if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he8d93d7117e279f5(&v33, v19) ) /*0x100366bfd*/
          {
            if ( v60 ) /*0x100366c0d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v60, 1); /*0x100366c18*/
          }
          else
          {
            v21 = v53; /*0x100366c20*/
            if ( v53 == v51 ) /*0x100366c28*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v51); /*0x100366c32*/
            v16 = v52; /*0x100366b90*/
            v17 = 32 * v21; /*0x100366b97*/
            *(_DWORD *)(v52 + v17) = v19; /*0x100366b9b*/
            *(_QWORD *)(v16 + v17 + 8) = v60; /*0x100366ba2*/
            *(_QWORD *)(v16 + v17 + 16) = v54; /*0x100366bab*/
            *(_QWORD *)(v16 + v17 + 24) = v20; /*0x100366bb0*/
            v53 = v21 + 1; /*0x100366bb8*/
          }
          v18 = v13 - 32; /*0x100366bc6*/
          v13 += 32; /*0x100366bca*/
          if ( v18 + 32 == v15 ) /*0x100366bd5*/
          {
            v13 = v15; /*0x100366c40*/
            break; /*0x100366c40*/
          }
        }
        v57 = v13; /*0x100366c43*/
      }
      v22 = v15 - v13; /*0x100366c47*/
      if ( v22 ) /*0x100366c4a*/
      {
        v23 = v22 >> 5; /*0x100366c4c*/
        v24 = (_QWORD *)(v13 + 16); /*0x100366c50*/
        do /*0x100366c67*/
        {
          v25 = *(v24 - 1); /*0x100366c69*/
          if ( v25 ) /*0x100366c70*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v25, 1); /*0x100366c7a*/
          v24 += 4; /*0x100366c60*/
          --v23; /*0x100366c64*/
        }
        while ( v23 ); /*0x100366c67*/
      }
      if ( v40 ) /*0x100366c9a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 32 * v40, 8); /*0x100366cac*/
      v26 = v39; /*0x100366cb8*/
      if ( v55 ) /*0x100366cbf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v55, 1); /*0x100366cd1*/
      v10 = v26; /*0x100366af0*/
      if ( v26 == v49 ) /*0x100366afa*/
        goto LABEL_35; /*0x100366afa*/
    }
  }
  if ( v49 != v7 ) /*0x100366cf8*/
  {
    v27 = (v49 - v7) / 0x18uLL; /*0x100366cfd*/
    v28 = v7 + 8; /*0x100366d01*/
    do /*0x100366d17*/
    {
      v29 = *(v28 - 1); /*0x100366d19*/
      if ( v29 ) /*0x100366d20*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v28, v29, 1); /*0x100366d2a*/
      v28 += 3; /*0x100366d10*/
      --v27; /*0x100366d14*/
    }
    while ( v27 ); /*0x100366d17*/
  }
LABEL_35:
  if ( v42 ) /*0x100366d3b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 24LL * (_QWORD)v42, 8); /*0x100366d4e*/
  v30 = v41; /*0x100366d57*/
  v41[2] = v53; /*0x100366d5e*/
  result = v51; /*0x100366d62*/
  v30[1] = v52; /*0x100366d6a*/
  *v30 = result; /*0x100366d6e*/
  if ( v34 ) /*0x100366d7b*/
  {
    result = (4 * v34 + 19) & 0xFFFFFFFFFFFFFFF0LL; /*0x100366d85*/
    if ( result + v34 != -17 ) /*0x100366d90*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v33[-result], result + v34 + 17, 16); /*0x100366da1*/
  }
  return result; /*0x100366da6*/
}