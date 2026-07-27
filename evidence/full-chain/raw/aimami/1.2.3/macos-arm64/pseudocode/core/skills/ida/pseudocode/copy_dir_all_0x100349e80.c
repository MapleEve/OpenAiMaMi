// __ZN13codexmate_lib4core6skills12copy_dir_all @ 0x100349e80 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::core::skills::copy_dir_all::h12d01093dac5602f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r12
  volatile signed __int64 *result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  volatile signed __int64 *v12; // rbx
  __int64 v13; // r14
  int v14; // ecx
  __int64 v15; // r13
  void *v16; // r14
  __int64 v17; // rbx
  char v18; // al
  __int64 v19; // rdx
  char v20; // r12
  bool v21; // zf
  __int64 (__fastcall *v22)(_QWORD, _QWORD); // r12
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rax
  volatile signed __int64 *v30; // [rsp+8h] [rbp-958h] BYREF
  volatile signed __int64 *v31; // [rsp+10h] [rbp-950h]
  volatile signed __int64 *v32; // [rsp+18h] [rbp-948h]
  _BYTE __src[1040]; // [rsp+20h] [rbp-940h] BYREF
  volatile signed __int64 *v34[2]; // [rsp+430h] [rbp-530h] BYREF
  _BYTE __dst[1040]; // [rsp+440h] [rbp-520h] BYREF
  _QWORD v36[3]; // [rsp+850h] [rbp-110h] BYREF
  _QWORD v37[2]; // [rsp+868h] [rbp-F8h] BYREF
  _QWORD v38[12]; // [rsp+878h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+8D8h] [rbp-88h]
  __int64 v40; // [rsp+8E0h] [rbp-80h]
  _QWORD *v41; // [rsp+8E8h] [rbp-78h] BYREF
  __int64 (__fastcall *v42)(_QWORD, _QWORD); // [rsp+8F0h] [rbp-70h]
  __int64 v43; // [rsp+8F8h] [rbp-68h]
  __int64 v44; // [rsp+900h] [rbp-60h]
  __int64 v45; // [rsp+908h] [rbp-58h] BYREF
  void *v46; // [rsp+910h] [rbp-50h]
  size_t v47; // [rsp+918h] [rbp-48h]
  volatile signed __int64 *v48; // [rsp+920h] [rbp-40h] BYREF
  char v49; // [rsp+928h] [rbp-38h]
  _QWORD *v50; // [rsp+930h] [rbp-30h]

  v5 = a5; /*0x100349e94*/
  v6 = a4; /*0x100349e97*/
  LOWORD(v30) = 511; /*0x100349ea3*/
  BYTE2(v30) = 1; /*0x100349eac*/
  result = (volatile signed __int64 *)std::fs::DirBuilder::_create::h099c6e2853c95452(&v30, a4, a5); /*0x100349ec0*/
  if ( result ) /*0x100349ec8*/
  {
    *a1 = 2; /*0x100349eca*/
    a1[1] = result; /*0x100349ed1*/
    return result; /*0x100349ed5*/
  }
  v50 = a1; /*0x100349eda*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v30, a2, a3); /*0x100349eeb*/
  result = v30; /*0x100349ef7*/
  if ( (_BYTE)v31 == 2 ) /*0x100349f01*/
  {
    v9 = v50; /*0x100349f03*/
    *v50 = 2; /*0x100349f07*/
    v9[1] = result; /*0x100349f0e*/
    return result; /*0x100349f12*/
  }
  v48 = v30; /*0x100349f17*/
  v49 = (char)v31; /*0x100349f1b*/
  v10 = v38; /*0x100349f1e*/
  v44 = v6; /*0x100349f25*/
  v39 = v5; /*0x100349f29*/
  while ( 1 ) /*0x100349f3b*/
  {
    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(&v30); /*0x100349f3b*/
    if ( (_DWORD)v30 != 1 ) /*0x100349f47*/
      break; /*0x100349f47*/
    v11 = v10; /*0x100349f4d*/
    v12 = v32; /*0x100349f57*/
    if ( !v31 ) /*0x100349f61*/
    {
      v23 = v50; /*0x10034a15e*/
      *v50 = 2; /*0x10034a162*/
      v23[1] = v12; /*0x10034a169*/
      goto LABEL_42; /*0x10034a16d*/
    }
    memcpy(__dst, __src, sizeof(__dst)); /*0x100349f7a*/
    v34[0] = v31; /*0x100349f7f*/
    v34[1] = v32; /*0x100349f86*/
    v10 = v11; /*0x100349f8d*/
    std::fs::DirEntry::file_name::h82e3a94f480fbff7(v11, v34); /*0x100349f9a*/
    v13 = v38[1]; /*0x100349f9f*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v45, v6, v5, v38[1], v38[2]); /*0x100349fba*/
    if ( v38[0] ) /*0x100349fc9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v38[0], 1); /*0x100349fd3*/
    std::fs::DirEntry::file_type::hdd298e01714fd423(v11, v34); /*0x100349fe2*/
    if ( LOBYTE(v38[0]) == 1 ) /*0x100349fee*/
    {
      v24 = v38[1]; /*0x10034a172*/
      v25 = v50; /*0x10034a179*/
      *v50 = 2; /*0x10034a17d*/
      v25[1] = v24; /*0x10034a184*/
      goto LABEL_38; /*0x10034a188*/
    }
    v14 = WORD1(v38[0]) & 0xF000; /*0x100349ffd*/
    if ( v14 == 0x4000 ) /*0x10034a009*/
    {
      std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v41, v34); /*0x10034a0bb*/
      v22 = v42; /*0x10034a0c0*/
      codexmate_lib::core::skills::copy_dir_all::h12d01093dac5602f(v11, v42, v43, v46, v47); /*0x10034a0d6*/
      if ( LODWORD(v38[0]) != 11 ) /*0x10034a0e2*/
      {
        qmemcpy(v50, v38, 0x60u); /*0x10034a240*/
        if ( v41 ) /*0x10034a24a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v41, 1); /*0x10034a254*/
LABEL_38:
        if ( v45 ) /*0x10034a260*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x10034a26b*/
        if ( _InterlockedDecrement64(v34[0]) ) /*0x10034a277*/
          goto LABEL_42; /*0x10034a27b*/
        goto LABEL_41; /*0x10034a27b*/
      }
      if ( v41 ) /*0x10034a0ef*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v41, 1); /*0x10034a0f9*/
      v6 = v44; /*0x10034a0fe*/
LABEL_24:
      if ( v45 ) /*0x10034a109*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x10034a114*/
      goto LABEL_26; /*0x10034a114*/
    }
    if ( v14 == 40960 ) /*0x10034a015*/
    {
      std::fs::DirEntry::path::h1f82b6d8ef0530d7(v38, v34); /*0x10034a19b*/
      v26 = v38[1]; /*0x10034a1a0*/
      v37[0] = v38[1]; /*0x10034a1ae*/
      v37[1] = v38[2]; /*0x10034a1b5*/
      v41 = v37; /*0x10034a1c3*/
      v42 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10034a1ce*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_1017BC78D, &v41); /*0x10034a1e4*/
      v27 = v50; /*0x10034a1e9*/
      if ( v38[0] ) /*0x10034a1f7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v38[0], 1); /*0x10034a201*/
      v27[3] = v36[2]; /*0x10034a20d*/
      v28 = v36[0]; /*0x10034a211*/
      v27[2] = v36[1]; /*0x10034a21f*/
      v27[1] = v28; /*0x10034a223*/
      *v27 = 9; /*0x10034a227*/
      goto LABEL_38; /*0x10034a22e*/
    }
    if ( SWORD1(v38[0]) >= -28672 ) /*0x10034a021*/
      goto LABEL_24; /*0x10034a021*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(v11, v34); /*0x10034a031*/
    v15 = v45; /*0x10034a036*/
    v16 = v46; /*0x10034a03a*/
    v17 = v38[1]; /*0x10034a050*/
    v18 = std::sys::fs::copy::hcda968f022f0a0e3((void *)v38[1], v38[2], v46, v47); /*0x10034a056*/
    v40 = v19; /*0x10034a05b*/
    v20 = v18; /*0x10034a05f*/
    if ( v15 ) /*0x10034a065*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x10034a072*/
    if ( v38[0] ) /*0x10034a081*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v38[0], 1); /*0x10034a08b*/
    v21 = (v20 & 1) == 0; /*0x10034a090*/
    v5 = v39; /*0x10034a094*/
    v6 = v44; /*0x10034a09b*/
    v10 = v11; /*0x10034a09f*/
    if ( !v21 ) /*0x10034a0a2*/
    {
      v29 = v50; /*0x10034a2ae*/
      *v50 = 2; /*0x10034a2b2*/
      v29[1] = v40; /*0x10034a2bd*/
      if ( _InterlockedDecrement64(v34[0]) ) /*0x10034a2c8*/
      {
LABEL_42:
        result = v48; /*0x10034a289*/
        if ( !_InterlockedDecrement64(v48) ) /*0x10034a28d*/
          return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v48); /*0x10034a297*/
        return result; /*0x10034a297*/
      }
LABEL_41:
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v34); /*0x10034a27d*/
      goto LABEL_42; /*0x10034a284*/
    }
LABEL_26:
    if ( !_InterlockedDecrement64(v34[0]) ) /*0x10034a120*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v34); /*0x10034a131*/
  }
  if ( !_InterlockedDecrement64(v48) ) /*0x10034a13f*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v48); /*0x10034a149*/
  result = v50; /*0x10034a14e*/
  *v50 = 11; /*0x10034a152*/
  return result; /*0x10034a29c*/
}