// __ZN13codexmate_lib4core10repository18SnapshotQuarantine8rollback @ 0x100a77d80 | 基线 same-set
double __fastcall codexmate_lib::core::repository::SnapshotQuarantine::rollback::hdc6c3f38e5ff4899(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 i; // r14
  char *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  double result; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char *v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r15
  void (__fastcall *v19)(__int64); // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  void *v27; // r15
  size_t v28; // r14
  __int64 v29; // rax
  void *v30; // rax
  size_t v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // rsi
  __int64 *v47; // [rsp+0h] [rbp-130h] BYREF
  char *v48; // [rsp+8h] [rbp-128h]
  __int64 *v49; // [rsp+10h] [rbp-120h]
  __int64 (__fastcall *v50)(_QWORD, _QWORD); // [rsp+18h] [rbp-118h]
  _QWORD v51[3]; // [rsp+98h] [rbp-98h] BYREF
  _QWORD v52[3]; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-60h]
  _QWORD *v55; // [rsp+D8h] [rbp-58h]
  __int64 v56; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-40h]
  __int64 v59; // [rsp+F8h] [rbp-38h]
  __int64 v60; // [rsp+100h] [rbp-30h]

  v55 = a1; /*0x100a77d94*/
  v57 = 0; /*0x100a77d98*/
  v58 = 8; /*0x100a77da0*/
  v59 = 0; /*0x100a77da8*/
  v60 = a2; /*0x100a77db0*/
  v2 = *(_QWORD *)(a2 + 40); /*0x100a77db4*/
  if ( v2 ) /*0x100a77dbb*/
  {
    v3 = *(_QWORD *)(v60 + 32); /*0x100a77dc5*/
    for ( i = 48 * v2; i; i -= 48 ) /*0x100a77dcd*/
    {
      std::sys::fs::metadata::h32fa16d3052ea535(&v47, *(_QWORD *)(v3 + i - 16), *(_QWORD *)(v3 + i - 8)); /*0x100a77e0c*/
      if ( (_BYTE)v47 ) /*0x100a77e18*/
      {
        if ( ((unsigned __int8)v48 & 3) == 1 ) /*0x100a77def*/
        {
          v16 = v48 - 1; /*0x100a7800f*/
          v17 = *(_QWORD *)(v48 - 1); /*0x100a78013*/
          v18 = *(_QWORD *)(v48 + 7); /*0x100a78017*/
          v19 = *(void (__fastcall **)(__int64))v18; /*0x100a7801b*/
          if ( *(_QWORD *)v18 ) /*0x100a7801b*/
            goto LABEL_23; /*0x100a78021*/
          goto LABEL_24; /*0x100a78021*/
        }
      }
      else
      {
        std::sys::fs::metadata::h32fa16d3052ea535(&v47, *(_QWORD *)(v3 + i - 40), *(_QWORD *)(v3 + i - 32)); /*0x100a77e27*/
        if ( (_DWORD)v47 != 1 ) /*0x100a77e33*/
        {
          v20 = *(_QWORD *)(v3 + i - 32); /*0x100a77f95*/
          v53 = *(_QWORD *)(v3 + i - 40); /*0x100a77f9a*/
          v54 = v20; /*0x100a77f9e*/
          v47 = &v53; /*0x100a77fa6*/
          v48 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a77fb4*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v52, &unk_1017C9B14, &v47); /*0x100a77fc9*/
          v21 = v59; /*0x100a77fce*/
          if ( v59 == v57 ) /*0x100a77fd6*/
            result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v57); /*0x100a77fdc*/
          v22 = v58; /*0x100a77fe1*/
          v23 = 3 * v21; /*0x100a77fe5*/
          *(_QWORD *)(v58 + 8 * v23 + 16) = v52[2]; /*0x100a77fed*/
          v24 = v52[0]; /*0x100a77ff2*/
          *(_QWORD *)(v22 + 8 * v23 + 8) = v52[1]; /*0x100a77ffa*/
          *(_QWORD *)(v22 + 8 * v23) = v24; /*0x100a77fff*/
          v59 = v21 + 1; /*0x100a78006*/
          continue; /*0x100a7800a*/
        }
        if ( ((unsigned __int8)v48 & 3) == 1 ) /*0x100a77e48*/
        {
          v5 = v48 - 1; /*0x100a77e4a*/
          v6 = *(_QWORD *)(v48 - 1); /*0x100a77e4e*/
          v7 = *(_QWORD *)(v48 + 7); /*0x100a77e52*/
          if ( *(_QWORD *)v7 ) /*0x100a77e56*/
            (*(void (__fastcall **)(__int64))v7)(v6); /*0x100a77e61*/
          v8 = *(_QWORD *)(v7 + 8); /*0x100a77e63*/
          if ( v8 ) /*0x100a77e6a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x100a77e73*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x100a77e85*/
        }
        v10 = std::sys::fs::rename::h7934e6142c921014( /*0x100a77ea5*/
                *(void **)(v3 + i - 16),
                *(_QWORD *)(v3 + i - 8),
                *(void **)(v3 + i - 40),
                *(_QWORD *)(v3 + i - 32));
        if ( v10 ) /*0x100a77ead*/
        {
          v56 = v10; /*0x100a77eb3*/
          v11 = *(_QWORD *)(v3 + i - 32); /*0x100a77ebc*/
          v53 = *(_QWORD *)(v3 + i - 40); /*0x100a77ec1*/
          v54 = v11; /*0x100a77ec5*/
          v47 = &v53; /*0x100a77ecd*/
          v48 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a77edb*/
          v49 = &v56; /*0x100a77ee6*/
          v50 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a77ef4*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v51, &unk_1017C9B05, &v47); /*0x100a77f0c*/
          v12 = v59; /*0x100a77f11*/
          if ( v59 == v57 ) /*0x100a77f19*/
            result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v57); /*0x100a77f1f*/
          v13 = v58; /*0x100a77f24*/
          v14 = 3 * v12; /*0x100a77f28*/
          *(_QWORD *)(v58 + 8 * v14 + 16) = v51[2]; /*0x100a77f33*/
          v15 = v51[0]; /*0x100a77f38*/
          *(_QWORD *)(v13 + 8 * v14 + 8) = v51[1]; /*0x100a77f46*/
          *(_QWORD *)(v13 + 8 * v14) = v15; /*0x100a77f4b*/
          v59 = v12 + 1; /*0x100a77f52*/
          if ( (v56 & 3) == 1 ) /*0x100a77f62*/
          {
            v16 = (char *)(v56 - 1); /*0x100a77f68*/
            v17 = *(_QWORD *)(v56 - 1); /*0x100a77f6c*/
            v18 = *(_QWORD *)(v56 + 7); /*0x100a77f70*/
            v19 = *(void (__fastcall **)(__int64))v18; /*0x100a77f74*/
            if ( *(_QWORD *)v18 ) /*0x100a77f74*/
LABEL_23:
              v19(v17); /*0x100a78023*/
LABEL_24:
            v25 = *(_QWORD *)(v18 + 8); /*0x100a78028*/
            if ( v25 ) /*0x100a7802f*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v25, *(_QWORD *)(v18 + 16)); /*0x100a78038*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24, 8); /*0x100a7804a*/
          }
        }
      }
    }
  }
  v26 = v60; /*0x100a7805b*/
  *(_BYTE *)(v60 + 48) = 0; /*0x100a7805f*/
  v27 = *(void **)(v26 + 8); /*0x100a78063*/
  v28 = *(_QWORD *)(v26 + 16); /*0x100a78067*/
  v29 = std::sys::fs::remove_dir::hcc22a1b171fb29c1(v27, v28); /*0x100a78071*/
  if ( (v29 & 3) == 1 ) /*0x100a7807e*/
  {
    v39 = v29 - 1; /*0x100a78148*/
    v40 = *(_QWORD *)(v29 - 1); /*0x100a7814b*/
    v41 = *(_QWORD *)(v29 + 7); /*0x100a7814f*/
    if ( *(_QWORD *)v41 ) /*0x100a78153*/
      (*(void (__fastcall **)(__int64))v41)(v40); /*0x100a7815f*/
    v42 = *(_QWORD *)(v41 + 8); /*0x100a78161*/
    if ( v42 ) /*0x100a78168*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v42, *(_QWORD *)(v41 + 16)); /*0x100a78171*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24, 8); /*0x100a78183*/
  }
  v30 = (void *)std::path::Path::parent::h4c3ac26770731fbb(v27, v28); /*0x100a7808a*/
  if ( v30 ) /*0x100a78092*/
  {
    v32 = std::sys::fs::remove_dir::hcc22a1b171fb29c1(v30, v31); /*0x100a7809a*/
    if ( (v32 & 3) == 1 ) /*0x100a780a7*/
    {
      v43 = v32 - 1; /*0x100a78190*/
      v44 = *(_QWORD *)(v32 - 1); /*0x100a78193*/
      v45 = *(_QWORD *)(v32 + 7); /*0x100a78197*/
      if ( *(_QWORD *)v45 ) /*0x100a7819b*/
        (*(void (__fastcall **)(__int64))v45)(v44); /*0x100a781a6*/
      v46 = *(_QWORD *)(v45 + 8); /*0x100a781a8*/
      if ( v46 ) /*0x100a781af*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v46, *(_QWORD *)(v45 + 16)); /*0x100a781b8*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, 24, 8); /*0x100a781ca*/
      v33 = v59; /*0x100a781cf*/
      if ( v59 ) /*0x100a781d6*/
        goto LABEL_31; /*0x100a781d6*/
LABEL_46:
      *v55 = 11; /*0x100a781dc*/
      goto LABEL_47; /*0x100a781e0*/
    }
  }
  v33 = v59; /*0x100a780ad*/
  if ( !v59 ) /*0x100a780b4*/
    goto LABEL_46; /*0x100a780b4*/
LABEL_31:
  alloc::str::join_generic_copy::heca7a5e86402c6b6(&v47, v58, v33, " | ", 3); /*0x100a780ba*/
  v34 = v55; /*0x100a780de*/
  v55[3] = v49; /*0x100a780e2*/
  v35 = v47; /*0x100a780e6*/
  v34[2] = v48; /*0x100a780f4*/
  v34[1] = v35; /*0x100a780f8*/
  v36 = v59; /*0x100a780fc*/
  *v34 = 10; /*0x100a78100*/
  if ( v36 ) /*0x100a7810a*/
  {
    v37 = (_QWORD *)(v58 + 8); /*0x100a78114*/
    do /*0x100a78127*/
    {
      v38 = *(v37 - 1); /*0x100a7812d*/
      if ( v38 ) /*0x100a78134*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v37, v38, 1); /*0x100a7813e*/
      v37 += 3; /*0x100a78120*/
      --v36; /*0x100a78124*/
    }
    while ( v36 ); /*0x100a78127*/
  }
LABEL_47:
  if ( v57 ) /*0x100a781ee*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 24 * v57, 8); /*0x100a78201*/
  return result; /*0x100a78206*/
}