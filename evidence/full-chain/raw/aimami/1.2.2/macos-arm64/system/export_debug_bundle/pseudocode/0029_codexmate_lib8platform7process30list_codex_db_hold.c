// mac 1.2.2 NEW export_debug_bundle 0x1009ae370 d=1
unsigned __int64 __fastcall codexmate_lib::platform::process::list_codex_db_holder_processes::h0dac32c58961c126(
        unsigned __int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  char *v5; // rsi
  char *v6; // r14
  char *v7; // rax
  char *v8; // rcx
  char *v9; // rax
  __int64 v10; // rdx
  size_t v11; // rcx
  size_t v12; // r14
  size_t v13; // rax
  size_t v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  size_t v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // r15
  unsigned __int64 v20; // r12
  size_t v21; // r13
  size_t v22; // r13
  size_t v23; // r14
  char *v24; // rbx
  unsigned __int64 v25; // rbx
  _QWORD *v26; // r14
  unsigned __int64 *v27; // rdx
  unsigned __int64 result; // rax
  __int64 v29; // rbx
  __int128 *v30; // [rsp+8h] [rbp-108h] BYREF
  __int64 v31; // [rsp+10h] [rbp-100h]
  __int64 v32; // [rsp+18h] [rbp-F8h]
  __int64 v33; // [rsp+20h] [rbp-F0h]
  __int64 v34; // [rsp+28h] [rbp-E8h]
  __int64 v35; // [rsp+30h] [rbp-E0h]
  char *v36; // [rsp+38h] [rbp-D8h]
  size_t v37; // [rsp+40h] [rbp-D0h]
  unsigned __int64 *v38; // [rsp+48h] [rbp-C8h]
  char *v39; // [rsp+50h] [rbp-C0h]
  char *v40; // [rsp+58h] [rbp-B8h] BYREF
  char *v41; // [rsp+60h] [rbp-B0h]
  char *v42; // [rsp+68h] [rbp-A8h]
  char *v43; // [rsp+70h] [rbp-A0h]
  size_t v44; // [rsp+78h] [rbp-98h]
  __int64 v45; // [rsp+80h] [rbp-90h]
  char *v46; // [rsp+88h] [rbp-88h]
  char *v47; // [rsp+90h] [rbp-80h]
  unsigned __int64 v48; // [rsp+98h] [rbp-78h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-70h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-68h]
  __int64 v51; // [rsp+B0h] [rbp-60h]
  __int64 v52; // [rsp+B8h] [rbp-58h]
  size_t v53; // [rsp+C0h] [rbp-50h] BYREF
  size_t v54; // [rsp+C8h] [rbp-48h]
  size_t v55; // [rsp+D0h] [rbp-40h]
  size_t v56; // [rsp+D8h] [rbp-38h]
  __int64 v57; // [rsp+E0h] [rbp-30h]

  v38 = a1; /*0x1009ae384*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1009ae392*/
  v2 = (_QWORD *)v1; /*0x1009ae394*/
  if ( *(_BYTE *)(v1 + 16) == 1 ) /*0x1009ae39b*/
  {
    v3 = *(_QWORD *)v1; /*0x1009ae3a1*/
    v4 = v2[1]; /*0x1009ae3a4*/
  }
  else
  {
    v29 = v1; /*0x1009ae778*/
    v3 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1009ae77b*/
    v2 = (_QWORD *)v29; /*0x1009ae780*/
    *(_QWORD *)v29 = v3; /*0x1009ae783*/
    *(_QWORD *)(v29 + 8) = v4; /*0x1009ae786*/
    *(_BYTE *)(v29 + 16) = 1; /*0x1009ae78a*/
  }
  *v2 = v3 + 1; /*0x1009ae3ac*/
  v33 = 0; /*0x1009ae3b6*/
  v32 = 0; /*0x1009ae3c4*/
  v31 = 0; /*0x1009ae3d2*/
  v30 = &xmmword_101513850; /*0x1009ae3e0*/
  v34 = v3; /*0x1009ae3e7*/
  v35 = v4; /*0x1009ae3ee*/
  v48 = 0; /*0x1009ae3f5*/
  v49 = 8; /*0x1009ae3fd*/
  v50 = 0; /*0x1009ae405*/
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h1064beee6e5950ca(&v53); /*0x1009ae411*/
  codexmate_lib::platform::paths::CodexPaths::runtime_state_db_candidates_for_home::h23d019504b2cba36(&v40, v54, v55); /*0x1009ae428*/
  if ( v53 ) /*0x1009ae434*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae43e*/
  v5 = v40; /*0x1009ae443*/
  v6 = v41; /*0x1009ae44a*/
  v7 = v42; /*0x1009ae451*/
  v8 = &v41[24 * (_QWORD)v42]; /*0x1009ae45c*/
  v40 = v41; /*0x1009ae460*/
  v39 = v5; /*0x1009ae46e*/
  v42 = v5; /*0x1009ae475*/
  v46 = v8; /*0x1009ae47c*/
  v43 = v8; /*0x1009ae483*/
  v47 = v41; /*0x1009ae48a*/
  if ( v7 ) /*0x1009ae491*/
  {
    v9 = v47; /*0x1009ae4a1*/
    while ( 1 ) /*0x1009ae4c0*/
    {
      v6 = v9 + 24; /*0x1009ae4c0*/
      v41 = v9 + 24; /*0x1009ae4c4*/
      if ( *(_QWORD *)v9 == 0x8000000000000000LL ) /*0x1009ae4d1*/
        break; /*0x1009ae4d1*/
      v52 = *(_QWORD *)v9; /*0x1009ae4d7*/
      v36 = v9 + 24; /*0x1009ae4db*/
      v10 = *((_QWORD *)v9 + 2); /*0x1009ae4e6*/
      v45 = *((_QWORD *)v9 + 1); /*0x1009ae4ee*/
      codexmate_lib::platform::process::list_macos_db_holder_processes_for::h15a9262a802fb067(&v53, v45, v10); /*0x1009ae4f5*/
      v11 = v53; /*0x1009ae4fa*/
      v12 = v54; /*0x1009ae4fe*/
      v13 = v55; /*0x1009ae502*/
      v14 = v54 + 32 * v55; /*0x1009ae50d*/
      v53 = v54; /*0x1009ae510*/
      v37 = v11; /*0x1009ae518*/
      v55 = v11; /*0x1009ae51f*/
      v56 = v14; /*0x1009ae523*/
      v44 = v54; /*0x1009ae527*/
      if ( v13 ) /*0x1009ae531*/
      {
        v12 = v44 + 32; /*0x1009ae53e*/
        while ( 1 ) /*0x1009ae59b*/
        {
          v57 = *(_QWORD *)(v12 - 24); /*0x1009ae59b*/
          if ( v57 == 0x8000000000000000LL ) /*0x1009ae5a2*/
            break; /*0x1009ae5a2*/
          v18 = *(_DWORD *)(v12 - 32); /*0x1009ae5a4*/
          v51 = *(_QWORD *)(v12 - 16); /*0x1009ae5ac*/
          v19 = *(_QWORD *)(v12 - 8); /*0x1009ae5b0*/
          if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h80760911e43d3d26(&v30, v18) ) /*0x1009ae5bd*/
          {
            if ( v57 ) /*0x1009ae5cd*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae5d8*/
          }
          else
          {
            v20 = v50; /*0x1009ae5e0*/
            if ( v50 == v48 ) /*0x1009ae5e8*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hff188bf214106a59(&v48); /*0x1009ae5f2*/
            v15 = v49; /*0x1009ae550*/
            v16 = 32 * v20; /*0x1009ae557*/
            *(_DWORD *)(v49 + v16) = v18; /*0x1009ae55b*/
            *(_QWORD *)(v15 + v16 + 8) = v57; /*0x1009ae562*/
            *(_QWORD *)(v15 + v16 + 16) = v51; /*0x1009ae56b*/
            *(_QWORD *)(v15 + v16 + 24) = v19; /*0x1009ae570*/
            v50 = v20 + 1; /*0x1009ae578*/
          }
          v17 = v12 - 32; /*0x1009ae586*/
          v12 += 32LL; /*0x1009ae58a*/
          if ( v17 + 32 == v14 ) /*0x1009ae595*/
          {
            v12 = v14; /*0x1009ae600*/
            break; /*0x1009ae600*/
          }
        }
        v54 = v12; /*0x1009ae603*/
      }
      v21 = v14 - v12; /*0x1009ae607*/
      if ( v21 ) /*0x1009ae60a*/
      {
        v22 = v21 >> 5; /*0x1009ae60c*/
        v23 = v12 + 16; /*0x1009ae610*/
        do /*0x1009ae627*/
        {
          if ( *(_QWORD *)(v23 - 8) ) /*0x1009ae629*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae63a*/
          v23 += 32LL; /*0x1009ae620*/
          --v22; /*0x1009ae624*/
        }
        while ( v22 ); /*0x1009ae627*/
      }
      if ( v37 ) /*0x1009ae65a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae66c*/
      v24 = v36; /*0x1009ae678*/
      if ( v52 ) /*0x1009ae67f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae691*/
      v9 = v24; /*0x1009ae4b0*/
      if ( v24 == v46 ) /*0x1009ae4ba*/
        goto LABEL_35; /*0x1009ae4ba*/
    }
  }
  if ( v46 != v6 ) /*0x1009ae6b8*/
  {
    v25 = (v46 - v6) / 0x18uLL; /*0x1009ae6bd*/
    v26 = v6 + 8; /*0x1009ae6c1*/
    do /*0x1009ae6d7*/
    {
      if ( *(v26 - 1) ) /*0x1009ae6d9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae6ea*/
      v26 += 3; /*0x1009ae6d0*/
      --v25; /*0x1009ae6d4*/
    }
    while ( v25 ); /*0x1009ae6d7*/
  }
LABEL_35:
  if ( v39 ) /*0x1009ae6fb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae70e*/
  v27 = v38; /*0x1009ae717*/
  v38[2] = v50; /*0x1009ae71e*/
  result = v48; /*0x1009ae722*/
  v27[1] = v49; /*0x1009ae72a*/
  *v27 = result; /*0x1009ae72e*/
  if ( v31 ) /*0x1009ae73b*/
  {
    result = (4 * v31 + 19) & 0xFFFFFFFFFFFFFFF0LL; /*0x1009ae745*/
    if ( result + v31 != -17 ) /*0x1009ae750*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ae761*/
  }
  return result; /*0x1009ae766*/
}