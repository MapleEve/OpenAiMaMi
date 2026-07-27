// __ZN13codexmate_lib4core5relay16codex_diagnostic24backup_config_before_fix @ 0x1004f07d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::backup_config_before_fix::hbfd176d416815de7(
        _QWORD *a1,
        _QWORD *a2)
{
  _OWORD *v2; // r14
  __int64 v3; // r12
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rsi
  int v24; // edx
  unsigned __int128 v25; // kr00_16
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rsi
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rbx
  _OWORD *v34; // r15
  unsigned __int64 v35; // rbx
  __int64 (__fastcall *v36)(); // r12
  __int64 v37; // rbx
  char *v38; // r15
  void *v39; // r14
  __int64 v40; // r13
  __int64 v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rsi
  _QWORD *v44; // rdx
  _QWORD v45[3]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v46[2]; // [rsp+20h] [rbp-120h] BYREF
  unsigned __int128 v47; // [rsp+30h] [rbp-110h] BYREF
  __int64 v48; // [rsp+40h] [rbp-100h] BYREF
  __int64 v49; // [rsp+48h] [rbp-F8h]
  __int64 v50; // [rsp+50h] [rbp-F0h]
  __int64 v51; // [rsp+58h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-E0h]
  __int64 v53; // [rsp+68h] [rbp-D8h]
  void *v54; // [rsp+70h] [rbp-D0h]
  _OWORD *v55; // [rsp+78h] [rbp-C8h]
  __int64 (__fastcall *v56)(); // [rsp+80h] [rbp-C0h]
  __int64 v57; // [rsp+88h] [rbp-B8h]
  __int64 v58; // [rsp+90h] [rbp-B0h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp-A8h]
  __int64 v60; // [rsp+A0h] [rbp-A0h] BYREF
  void *v61; // [rsp+A8h] [rbp-98h]
  size_t v62; // [rsp+B0h] [rbp-90h]
  _QWORD *v63; // [rsp+B8h] [rbp-88h]
  __int64 v64; // [rsp+C0h] [rbp-80h]
  __int64 v65; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-70h]
  _QWORD *v67; // [rsp+D8h] [rbp-68h]
  __int64 (__fastcall *v68)(); // [rsp+E0h] [rbp-60h]
  unsigned __int64 v69; // [rsp+E8h] [rbp-58h]
  __int64 v70; // [rsp+F0h] [rbp-50h]
  __int64 v71; // [rsp+F8h] [rbp-48h] BYREF
  _OWORD *v72; // [rsp+100h] [rbp-40h]
  unsigned __int64 v73; // [rsp+108h] [rbp-38h]
  _OWORD *v74; // [rsp+110h] [rbp-30h]

  v63 = a1; /*0x1004f07e7*/
  std::fs::read::inner::h6a30c15c40add28b(&v65, a2[7], a2[8]); /*0x1004f0804*/
  v2 = (_OWORD *)v65; /*0x1004f0809*/
  v3 = v66; /*0x1004f080d*/
  if ( __OFSUB__(-v65, 1) ) /*0x1004f0814*/
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v66) ) /*0x1004f0820*/
    {
      v60 = v3; /*0x1004f082d*/
      v71 = (__int64)&v60; /*0x1004f083b*/
      v72 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004f0846*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v45, &unk_1017BFE68, &v71); /*0x1004f085c*/
      v4 = v63; /*0x1004f0868*/
      v63[3] = v45[2]; /*0x1004f086f*/
      v5 = v45[0]; /*0x1004f0873*/
      v4[2] = v45[1]; /*0x1004f0881*/
      v4[1] = v5; /*0x1004f0885*/
      *v4 = 10; /*0x1004f0889*/
      result = v60; /*0x1004f0890*/
      if ( (v60 & 3) != 1 ) /*0x1004f089f*/
        return result; /*0x1004f089f*/
      v7 = v60 - 1; /*0x1004f08a5*/
      v8 = *(_QWORD *)(v60 - 1); /*0x1004f08a9*/
      v9 = *(_QWORD *)(v60 + 7); /*0x1004f08ad*/
      if ( *(_QWORD *)v9 ) /*0x1004f08b1*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x1004f08c0*/
    }
    else
    {
      v22 = v63; /*0x1004f0a17*/
      v63[1] = 0x8000000000000000LL; /*0x1004f0a1e*/
      *v22 = 11; /*0x1004f0a22*/
      result = v3 & 3; /*0x1004f0a2c*/
      if ( (_DWORD)result != 1 ) /*0x1004f0a32*/
        return result; /*0x1004f0a32*/
      v7 = v3 - 1; /*0x1004f0a34*/
      v8 = *(_QWORD *)(v3 - 1); /*0x1004f0a39*/
      v9 = *(_QWORD *)(v3 + 7); /*0x1004f0a3e*/
      if ( *(_QWORD *)v9 ) /*0x1004f0a43*/
        (*(void (__fastcall **)(_QWORD))v9)(*(_QWORD *)(v3 - 1)); /*0x1004f0a4e*/
    }
    v23 = *(_QWORD *)(v9 + 8); /*0x1004f0a50*/
    if ( v23 ) /*0x1004f0a57*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v23, *(_QWORD *)(v9 + 16)); /*0x1004f0a60*/
    v21 = 24; /*0x1004f0a65*/
    v19 = 8; /*0x1004f0a6a*/
    v20 = v7; /*0x1004f0a6f*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v21, v19); /*0x1004f0a6f*/
  }
  v10 = (__int64)v67; /*0x1004f08c7*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v51, a2[73], a2[74], "config-backups", 14); /*0x1004f08ed*/
  LOWORD(v65) = 511; /*0x1004f08f2*/
  BYTE2(v65) = 1; /*0x1004f08f8*/
  v11 = v52; /*0x1004f08fc*/
  v12 = v53; /*0x1004f0903*/
  v64 = v52; /*0x1004f090e*/
  v13 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v65, v52, v53); /*0x1004f0915*/
  if ( v13 ) /*0x1004f091d*/
  {
    v60 = v13; /*0x1004f0923*/
    v71 = (__int64)&v60; /*0x1004f0931*/
    v72 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004f093c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v65, &unk_1017BFEB1, &v71); /*0x1004f094f*/
    v71 = v65; /*0x1004f095c*/
    v72 = (_OWORD *)v66; /*0x1004f0960*/
    v73 = (unsigned __int64)v67; /*0x1004f0968*/
    if ( (v60 & 3) == 1 ) /*0x1004f097b*/
    {
      v74 = v2; /*0x1004f097d*/
      v14 = v60 - 1; /*0x1004f0981*/
      v15 = *(_QWORD *)(v60 - 1); /*0x1004f0985*/
      v16 = *(_QWORD *)(v60 + 7); /*0x1004f0989*/
      if ( *(_QWORD *)v16 ) /*0x1004f098d*/
        (*(void (__fastcall **)(__int64))v16)(v15); /*0x1004f0998*/
      v17 = *(_QWORD *)(v16 + 8); /*0x1004f099a*/
      if ( v17 ) /*0x1004f09a1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x1004f09aa*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24, 8); /*0x1004f09bc*/
      v2 = v74; /*0x1004f09c1*/
    }
    v18 = v63; /*0x1004f09c9*/
    v63[3] = v73; /*0x1004f09d0*/
    result = v71; /*0x1004f09d4*/
    v18[2] = v72; /*0x1004f09dc*/
    v18[1] = result; /*0x1004f09e0*/
    *v18 = 10; /*0x1004f09e4*/
  }
  else
  {
    v71 = std::time::SystemTime::now::h1fe79e41f9d5677f(&v65, v11); /*0x1004f0a8e*/
    LODWORD(v72) = v24; /*0x1004f0a92*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v65, &v71, 0, 0); /*0x1004f0aa1*/
    v25 = 0u; /*0x1004f0ab1*/
    if ( !(_BYTE)v65 ) /*0x1004f0ab1*/
      v25 = (unsigned __int64)v66 * (unsigned __int128)0x3E8uLL + (unsigned int)v67 / 0xF4240uLL; /*0x1004f0aca*/
    v47 = v25; /*0x1004f0ad1*/
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v65); /*0x1004f0ae3*/
    v46[1] = v66; /*0x1004f0af0*/
    v46[0] = v65; /*0x1004f0af7*/
    v65 = (__int64)&v47; /*0x1004f0b05*/
    v66 = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x1004f0b10*/
    v67 = v46; /*0x1004f0b1b*/
    v68 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1004f0b26*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v48, &unk_1017BFE51, &v65); /*0x1004f0b3c*/
    v26 = v49; /*0x1004f0b41*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v60, v64, v12, v49, v50); /*0x1004f0b60*/
    if ( v48 ) /*0x1004f0b6f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v48, 1); /*0x1004f0b79*/
    v54 = v61; /*0x1004f0b8c*/
    v27 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v61, v62, v3, v10, 1); /*0x1004f0b9f*/
    if ( v27 ) /*0x1004f0bb1*/
    {
      v58 = v27; /*0x1004f0bb7*/
      v71 = (__int64)&v58; /*0x1004f0bc5*/
      v72 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004f0bd0*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v65, &unk_1017BFE92, &v71); /*0x1004f0be3*/
      v71 = v65; /*0x1004f0bf0*/
      v72 = (_OWORD *)v66; /*0x1004f0bf4*/
      v73 = (unsigned __int64)v67; /*0x1004f0bfc*/
      if ( (v58 & 3) == 1 ) /*0x1004f0c0f*/
      {
        v74 = v2; /*0x1004f0c11*/
        v28 = v58 - 1; /*0x1004f0c15*/
        v29 = *(_QWORD *)(v58 - 1); /*0x1004f0c19*/
        v30 = *(_QWORD *)(v58 + 7); /*0x1004f0c1d*/
        if ( *(_QWORD *)v30 ) /*0x1004f0c21*/
          (*(void (__fastcall **)(__int64))v30)(v29); /*0x1004f0c2c*/
        v31 = *(_QWORD *)(v30 + 8); /*0x1004f0c2e*/
        if ( v31 ) /*0x1004f0c35*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, *(_QWORD *)(v30 + 16)); /*0x1004f0c3e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24, 8); /*0x1004f0c50*/
        v2 = v74; /*0x1004f0c55*/
      }
      v32 = v63; /*0x1004f0c5d*/
      v63[3] = v73; /*0x1004f0c64*/
      result = v71; /*0x1004f0c68*/
      v32[2] = v72; /*0x1004f0c70*/
      v32[1] = result; /*0x1004f0c74*/
      *v32 = 10; /*0x1004f0c78*/
      if ( v60 ) /*0x1004f0c89*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v60, 1); /*0x1004f0c9b*/
    }
    else
    {
      std::sys::fs::read_dir::h768dda1fe4336014(&v65, v64, v12); /*0x1004f0cb0*/
      v71 = v65; /*0x1004f0cbd*/
      LOBYTE(v72) = v66; /*0x1004f0cc1*/
      if ( (_BYTE)v66 == 2 ) /*0x1004f0cc6*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(&v71); /*0x1004f0ccc*/
      }
      else
      {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb60f17cd61bc4ceb( /*0x1004f0cdd*/
          &v71,
          v65,
          (unsigned __int8)v66);
        v33 = v73; /*0x1004f0ce2*/
        if ( v73 >= 0x15 ) /*0x1004f0cea*/
        {
          v70 = v3; /*0x1004f0d1d*/
          v34 = v72; /*0x1004f0d21*/
          v74 = v2; /*0x1004f0d2f*/
          core::slice::sort::stable::driftsort_main::h98ec17c2c396a2d3(v72, v73, &v65); /*0x1004f0d33*/
          v65 = (__int64)v34; /*0x1004f0d44*/
          v67 = (_QWORD *)v71; /*0x1004f0d48*/
          v56 = (__int64 (__fastcall *)())((char *)v34 + 24 * v33); /*0x1004f0d4c*/
          v68 = v56; /*0x1004f0d53*/
          v35 = v33 - 21; /*0x1004f0d57*/
          v55 = v34; /*0x1004f0d5b*/
          v36 = (__int64 (__fastcall *)())((char *)v34 + 24); /*0x1004f0d62*/
          while ( 1 ) /*0x1004f0d66*/
          {
            v59 = v35; /*0x1004f0d66*/
            v37 = *((_QWORD *)v36 - 3); /*0x1004f0d6d*/
            if ( v37 == 0x8000000000000000LL ) /*0x1004f0d75*/
              break; /*0x1004f0d75*/
            v38 = (char *)v36 - 24; /*0x1004f0d7b*/
            v39 = *((void **)v36 - 2); /*0x1004f0d80*/
            v40 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v39, *((_QWORD *)v36 - 1)); /*0x1004f0d90*/
            if ( v37 ) /*0x1004f0d96*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v37, 1); /*0x1004f0da3*/
            if ( (v40 & 3) == 1 ) /*0x1004f0db1*/
            {
              v57 = v40 - 1; /*0x1004f0df6*/
              v41 = *(_QWORD *)(v40 - 1); /*0x1004f0dfd*/
              v42 = *(_QWORD *)(v40 + 7); /*0x1004f0e01*/
              if ( *(_QWORD *)v42 ) /*0x1004f0e05*/
                (*(void (__fastcall **)(_QWORD))v42)(*(_QWORD *)(v40 - 1)); /*0x1004f0e10*/
              v43 = *(_QWORD *)(v42 + 8); /*0x1004f0e12*/
              if ( v43 ) /*0x1004f0e19*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v43, *(_QWORD *)(v42 + 16)); /*0x1004f0e22*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, 24, 8); /*0x1004f0e38*/
              v35 = v59 - 1; /*0x1004f0e44*/
              v2 = v74; /*0x1004f0e48*/
              if ( !v59 ) /*0x1004f0e4c*/
              {
LABEL_57:
                v36 = (__int64 (__fastcall *)())((char *)v55 + 24); /*0x1004f0e52*/
                v35 = 0; /*0x1004f0e5d*/
                goto LABEL_59; /*0x1004f0e5f*/
              }
            }
            else
            {
              v35 = v59 - 1; /*0x1004f0dba*/
              v2 = v74; /*0x1004f0dbe*/
              if ( !v59 ) /*0x1004f0dc2*/
                goto LABEL_57; /*0x1004f0dc2*/
            }
            v36 = (__int64 (__fastcall *)())((char *)v36 + 24); /*0x1004f0dc8*/
            v55 = v38 + 24; /*0x1004f0dd0*/
            if ( v38 + 24 == (char *)v56 ) /*0x1004f0de8*/
            {
              v36 = v56; /*0x1004f0e6a*/
              goto LABEL_59; /*0x1004f0dee*/
            }
          }
          v35 = v59; /*0x1004f0e61*/
LABEL_59:
          v69 = v35; /*0x1004f0e71*/
          v66 = (__int64)v36; /*0x1004f0e75*/
          _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2cddd3ddc7fca1d6(&v65); /*0x1004f0e7d*/
          v3 = v70; /*0x1004f0e82*/
        }
        else
        {
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h841a16ff59743c5b(&v71); /*0x1004f0cf0*/
          if ( v71 ) /*0x1004f0cfc*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24 * v71, 8); /*0x1004f0d13*/
        }
      }
      v44 = v63; /*0x1004f0e8d*/
      v63[3] = v62; /*0x1004f0e94*/
      result = v60; /*0x1004f0e98*/
      v44[2] = v61; /*0x1004f0ea6*/
      v44[1] = result; /*0x1004f0eaa*/
      *v44 = 11; /*0x1004f0eae*/
    }
  }
  if ( v51 ) /*0x1004f09f5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v51, 1); /*0x1004f0a00*/
  if ( v2 ) /*0x1004f0a08*/
  {
    v19 = 1; /*0x1004f0a0a*/
    v20 = v3; /*0x1004f0a0f*/
    v21 = (__int64)v2; /*0x1004f0a12*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v21, v19); /*0x1004f0a72*/
  }
  return result; /*0x1004f0a77*/
}